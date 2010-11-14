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
    Array PArray9263 = new_Array_with(1, (Optr)VAR_actions_0_0);
    Character char_9265 = new_Character(L'p');
    Symbol SMB_keypad0 = new_Symbol(L"keypad0");
    // keypad0. 
    Send PSend9268 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad0, 0);
    Array PThreadedCode9267 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9268, (Optr)&t_block_return);
    Block PBlock9266 = new_Block_with(empty_Array, empty_Array, PThreadedCode9267, 1, PSend9268);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant char_9265_Const = new_Constant((Optr)char_9265);
    // at:put:. 
    Send PSend9269 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9265_Const, (Optr)PBlock9266);
    Character char_9270 = new_Character(L'q');
    Symbol SMB_keypad1 = new_Symbol(L"keypad1");
    // keypad1. 
    Send PSend9273 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad1, 0);
    Array PThreadedCode9272 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9273, (Optr)&t_block_return);
    Block PBlock9271 = new_Block_with(empty_Array, empty_Array, PThreadedCode9272, 1, PSend9273);
    Constant char_9270_Const = new_Constant((Optr)char_9270);
    // at:put:. 
    Send PSend9274 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9270_Const, (Optr)PBlock9271);
    Character char_9275 = new_Character(L'r');
    Symbol SMB_keypad2 = new_Symbol(L"keypad2");
    // keypad2. 
    Send PSend9278 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad2, 0);
    Array PThreadedCode9277 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9278, (Optr)&t_block_return);
    Block PBlock9276 = new_Block_with(empty_Array, empty_Array, PThreadedCode9277, 1, PSend9278);
    Constant char_9275_Const = new_Constant((Optr)char_9275);
    // at:put:. 
    Send PSend9279 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9275_Const, (Optr)PBlock9276);
    Character char_9280 = new_Character(L's');
    Symbol SMB_keypad3 = new_Symbol(L"keypad3");
    // keypad3. 
    Send PSend9283 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad3, 0);
    Array PThreadedCode9282 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9283, (Optr)&t_block_return);
    Block PBlock9281 = new_Block_with(empty_Array, empty_Array, PThreadedCode9282, 1, PSend9283);
    Constant char_9280_Const = new_Constant((Optr)char_9280);
    // at:put:. 
    Send PSend9284 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9280_Const, (Optr)PBlock9281);
    Character char_9285 = new_Character(L't');
    Symbol SMB_keypad4 = new_Symbol(L"keypad4");
    // keypad4. 
    Send PSend9288 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad4, 0);
    Array PThreadedCode9287 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9288, (Optr)&t_block_return);
    Block PBlock9286 = new_Block_with(empty_Array, empty_Array, PThreadedCode9287, 1, PSend9288);
    Constant char_9285_Const = new_Constant((Optr)char_9285);
    // at:put:. 
    Send PSend9289 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9285_Const, (Optr)PBlock9286);
    Character char_9290 = new_Character(L'u');
    Symbol SMB_keypad5 = new_Symbol(L"keypad5");
    // keypad5. 
    Send PSend9293 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad5, 0);
    Array PThreadedCode9292 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9293, (Optr)&t_block_return);
    Block PBlock9291 = new_Block_with(empty_Array, empty_Array, PThreadedCode9292, 1, PSend9293);
    Constant char_9290_Const = new_Constant((Optr)char_9290);
    // at:put:. 
    Send PSend9294 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9290_Const, (Optr)PBlock9291);
    Character char_9295 = new_Character(L'v');
    Symbol SMB_keypad6 = new_Symbol(L"keypad6");
    // keypad6. 
    Send PSend9298 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad6, 0);
    Array PThreadedCode9297 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9298, (Optr)&t_block_return);
    Block PBlock9296 = new_Block_with(empty_Array, empty_Array, PThreadedCode9297, 1, PSend9298);
    Constant char_9295_Const = new_Constant((Optr)char_9295);
    // at:put:. 
    Send PSend9299 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9295_Const, (Optr)PBlock9296);
    Character char_9300 = new_Character(L'w');
    Symbol SMB_keypad7 = new_Symbol(L"keypad7");
    // keypad7. 
    Send PSend9303 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad7, 0);
    Array PThreadedCode9302 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9303, (Optr)&t_block_return);
    Block PBlock9301 = new_Block_with(empty_Array, empty_Array, PThreadedCode9302, 1, PSend9303);
    Constant char_9300_Const = new_Constant((Optr)char_9300);
    // at:put:. 
    Send PSend9304 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9300_Const, (Optr)PBlock9301);
    Character char_9305 = new_Character(L'x');
    Symbol SMB_keypad8 = new_Symbol(L"keypad8");
    // keypad8. 
    Send PSend9308 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad8, 0);
    Array PThreadedCode9307 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9308, (Optr)&t_block_return);
    Block PBlock9306 = new_Block_with(empty_Array, empty_Array, PThreadedCode9307, 1, PSend9308);
    Constant char_9305_Const = new_Constant((Optr)char_9305);
    // at:put:. 
    Send PSend9309 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9305_Const, (Optr)PBlock9306);
    Character char_9310 = new_Character(L'y');
    Symbol SMB_keypad9 = new_Symbol(L"keypad9");
    // keypad9. 
    Send PSend9313 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad9, 0);
    Array PThreadedCode9312 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9313, (Optr)&t_block_return);
    Block PBlock9311 = new_Block_with(empty_Array, empty_Array, PThreadedCode9312, 1, PSend9313);
    Constant char_9310_Const = new_Constant((Optr)char_9310);
    // at:put:. 
    Send PSend9314 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9310_Const, (Optr)PBlock9311);
    Character char_8728 = new_Character(L'm');
    Symbol SMB_keypadMinus = new_Symbol(L"keypadMinus");
    // keypadMinus. 
    Send PSend9317 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypadMinus, 0);
    Array PThreadedCode9316 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9317, (Optr)&t_block_return);
    Block PBlock9315 = new_Block_with(empty_Array, empty_Array, PThreadedCode9316, 1, PSend9317);
    Constant char_8728_Const = new_Constant((Optr)char_8728);
    // at:put:. 
    Send PSend9318 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_8728_Const, (Optr)PBlock9315);
    Character char_9319 = new_Character(L'l');
    Symbol SMB_keypadBacktick = new_Symbol(L"keypadBacktick");
    // keypadBacktick. 
    Send PSend9322 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypadBacktick, 0);
    Array PThreadedCode9321 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9322, (Optr)&t_block_return);
    Block PBlock9320 = new_Block_with(empty_Array, empty_Array, PThreadedCode9321, 1, PSend9322);
    Constant char_9319_Const = new_Constant((Optr)char_9319);
    // at:put:. 
    Send PSend9323 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9319_Const, (Optr)PBlock9320);
    Character char_9324 = new_Character(L'n');
    Symbol SMB_keypadDot = new_Symbol(L"keypadDot");
    // keypadDot. 
    Send PSend9327 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypadDot, 0);
    Array PThreadedCode9326 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9327, (Optr)&t_block_return);
    Block PBlock9325 = new_Block_with(empty_Array, empty_Array, PThreadedCode9326, 1, PSend9327);
    Constant char_9324_Const = new_Constant((Optr)char_9324);
    // at:put:. 
    Send PSend9328 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9324_Const, (Optr)PBlock9325);
    Character char_9329 = new_Character(L'M');
    Symbol SMB_keypadEnter = new_Symbol(L"keypadEnter");
    // keypadEnter. 
    Send PSend9332 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypadEnter, 0);
    Array PThreadedCode9331 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9332, (Optr)&t_block_return);
    Block PBlock9330 = new_Block_with(empty_Array, empty_Array, PThreadedCode9331, 1, PSend9332);
    Constant char_9329_Const = new_Constant((Optr)char_9329);
    // at:put:. 
    Send PSend9333 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9329_Const, (Optr)PBlock9330);
    Character char_9334 = new_Character(L'P');
    Symbol SMB_f1 = new_Symbol(L"f1");
    // f1. 
    Send PSend9337 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f1, 0);
    Array PThreadedCode9336 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9337, (Optr)&t_block_return);
    Block PBlock9335 = new_Block_with(empty_Array, empty_Array, PThreadedCode9336, 1, PSend9337);
    Constant char_9334_Const = new_Constant((Optr)char_9334);
    // at:put:. 
    Send PSend9338 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9334_Const, (Optr)PBlock9335);
    Character char_9339 = new_Character(L'Q');
    Symbol SMB_f2 = new_Symbol(L"f2");
    // f2. 
    Send PSend9342 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f2, 0);
    Array PThreadedCode9341 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9342, (Optr)&t_block_return);
    Block PBlock9340 = new_Block_with(empty_Array, empty_Array, PThreadedCode9341, 1, PSend9342);
    Constant char_9339_Const = new_Constant((Optr)char_9339);
    // at:put:. 
    Send PSend9343 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9339_Const, (Optr)PBlock9340);
    Character char_9344 = new_Character(L'R');
    Symbol SMB_f3 = new_Symbol(L"f3");
    // f3. 
    Send PSend9347 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f3, 0);
    Array PThreadedCode9346 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9347, (Optr)&t_block_return);
    Block PBlock9345 = new_Block_with(empty_Array, empty_Array, PThreadedCode9346, 1, PSend9347);
    Constant char_9344_Const = new_Constant((Optr)char_9344);
    // at:put:. 
    Send PSend9348 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9344_Const, (Optr)PBlock9345);
    Character char_9349 = new_Character(L'S');
    Symbol SMB_f4 = new_Symbol(L"f4");
    // f4. 
    Send PSend9352 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f4, 0);
    Array PThreadedCode9351 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9352, (Optr)&t_block_return);
    Block PBlock9350 = new_Block_with(empty_Array, empty_Array, PThreadedCode9351, 1, PSend9352);
    Constant char_9349_Const = new_Constant((Optr)char_9349);
    // at:put:. 
    Send PSend9353 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9349_Const, (Optr)PBlock9350);
    Character char_9354 = new_Character(L'H');
    Symbol SMB_home = new_Symbol(L"home");
    // home. 
    Send PSend9357 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_home, 0);
    Array PThreadedCode9356 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9357, (Optr)&t_block_return);
    Block PBlock9355 = new_Block_with(empty_Array, empty_Array, PThreadedCode9356, 1, PSend9357);
    Constant char_9354_Const = new_Constant((Optr)char_9354);
    // at:put:. 
    Send PSend9358 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9354_Const, (Optr)PBlock9355);
    Character char_9359 = new_Character(L'F');
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend9362 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_end, 0);
    Array PThreadedCode9361 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9362, (Optr)&t_block_return);
    Block PBlock9360 = new_Block_with(empty_Array, empty_Array, PThreadedCode9361, 1, PSend9362);
    Constant char_9359_Const = new_Constant((Optr)char_9359);
    // at:put:. 
    Send PSend9363 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9359_Const, (Optr)PBlock9360);
    Array PThreadedCode9264 = instantiate_Array_with(ThreadedCode_Class, 0, 181, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9265, (Optr)&t_push_closure, (Optr)PBlock9266, (Optr)&t_send2, (Optr)PSend9269, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9270, (Optr)&t_push_closure, (Optr)PBlock9271, (Optr)&t_send2, (Optr)PSend9274, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9275, (Optr)&t_push_closure, (Optr)PBlock9276, (Optr)&t_send2, (Optr)PSend9279, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9280, (Optr)&t_push_closure, (Optr)PBlock9281, (Optr)&t_send2, (Optr)PSend9284, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9285, (Optr)&t_push_closure, (Optr)PBlock9286, (Optr)&t_send2, (Optr)PSend9289, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9290, (Optr)&t_push_closure, (Optr)PBlock9291, (Optr)&t_send2, (Optr)PSend9294, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9295, (Optr)&t_push_closure, (Optr)PBlock9296, (Optr)&t_send2, (Optr)PSend9299, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9300, (Optr)&t_push_closure, (Optr)PBlock9301, (Optr)&t_send2, (Optr)PSend9304, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9305, (Optr)&t_push_closure, (Optr)PBlock9306, (Optr)&t_send2, (Optr)PSend9309, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9310, (Optr)&t_push_closure, (Optr)PBlock9311, (Optr)&t_send2, (Optr)PSend9314, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_8728, (Optr)&t_push_closure, (Optr)PBlock9315, (Optr)&t_send2, (Optr)PSend9318, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9319, (Optr)&t_push_closure, (Optr)PBlock9320, (Optr)&t_send2, (Optr)PSend9323, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9324, (Optr)&t_push_closure, (Optr)PBlock9325, (Optr)&t_send2, (Optr)PSend9328, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9329, (Optr)&t_push_closure, (Optr)PBlock9330, (Optr)&t_send2, (Optr)PSend9333, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9334, (Optr)&t_push_closure, (Optr)PBlock9335, (Optr)&t_send2, (Optr)PSend9338, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9339, (Optr)&t_push_closure, (Optr)PBlock9340, (Optr)&t_send2, (Optr)PSend9343, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9344, (Optr)&t_push_closure, (Optr)PBlock9345, (Optr)&t_send2, (Optr)PSend9348, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9349, (Optr)&t_push_closure, (Optr)PBlock9350, (Optr)&t_send2, (Optr)PSend9353, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9354, (Optr)&t_push_closure, (Optr)PBlock9355, (Optr)&t_send2, (Optr)PSend9358, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9359, (Optr)&t_push_closure, (Optr)PBlock9360, (Optr)&t_send2, (Optr)PSend9363, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9262 = new_Method_with(PArray9263, empty_Array, empty_Array, PThreadedCode9264, 21, PSend9269, PSend9274, PSend9279, PSend9284, PSend9289, PSend9294, PSend9299, PSend9304, PSend9309, PSend9314, PSend9318, PSend9323, PSend9328, PSend9333, PSend9338, PSend9343, PSend9348, PSend9353, PSend9358, PSend9363, self);
    
    MethodClosure MC_SMB_initializeSS3_ = new_MethodClosure((Method)PMethod9262, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_initializeSS3_, MC_SMB_initializeSS3_);
}


static void init_SMB_readC1() {
    Symbol SMB_readC1 = new_Symbol(L"readC1");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray9365 = new_Array_with(1, (Optr)VAR_character_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray9368 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend9371 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9370 = new_Assign((Optr)VAR_character_0_0, (Optr)PSend9371);
    Character char_8646 = new_Character(L'[');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_8646_Const = new_Constant((Optr)char_8646);
    // =. 
    Send PSend9372 = new_Send((Optr)VAR_character_0_0, SMB__equals_, 1, (Optr)char_8646_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_readCSI = new_Symbol(L"readCSI");
    // readCSI. 
    Send PSend9376 = new_Send((Optr)self, SMB_readCSI, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend9377 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend9376);
    Array PThreadedCode9375 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9376, (Optr)&t_send1, (Optr)PSend9377, (Optr)&t_block_return);
    Block PBlock9374 = new_Block_with(empty_Array, empty_Array, PThreadedCode9375, 1, PSend9377);
    // ifTrue:. 
    Send PSend9373 = new_Send((Optr)PSend9372, SMB_ifTrue_, 1, (Optr)PBlock9374);
    Character char_9019 = new_Character(L'O');
    Constant char_9019_Const = new_Constant((Optr)char_9019);
    // =. 
    Send PSend9378 = new_Send((Optr)VAR_character_0_0, SMB__equals_, 1, (Optr)char_9019_Const);
    Symbol SMB_readSS3 = new_Symbol(L"readSS3");
    // readSS3. 
    Send PSend9382 = new_Send((Optr)self, SMB_readSS3, 0);
    // escape:. 
    Send PSend9383 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend9382);
    Array PThreadedCode9381 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9382, (Optr)&t_send1, (Optr)PSend9383, (Optr)&t_block_return);
    Block PBlock9380 = new_Block_with(empty_Array, empty_Array, PThreadedCode9381, 1, PSend9383);
    // ifTrue:. 
    Send PSend9379 = new_Send((Optr)PSend9378, SMB_ifTrue_, 1, (Optr)PBlock9380);
    Symbol SMB_alt_ = new_Symbol(L"alt:");
    // alt:. 
    Send PSend9384 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_alt_, 1, (Optr)VAR_character_0_0);
    Array PThreadedCode9369 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign9370, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9371, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push1, (Optr)char_8646, (Optr)&t_send1, (Optr)PSend9372, (Optr)&t_send_ifTrue_, (Optr)PSend9373, (Optr)PBlock9374, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push1, (Optr)char_9019, (Optr)&t_send1, (Optr)PSend9378, (Optr)&t_send_ifTrue_, (Optr)PSend9379, (Optr)PBlock9380, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend9384, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock9367 = new_Block_with(PArray9368, empty_Array, PThreadedCode9369, 5, PAssign9370, PSend9373, PSend9379, PSend9384, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9385 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock9367);
    Array PThreadedCode9366 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock9367, (Optr)&t_send1, (Optr)PSend9385, (Optr)&t_method_return);
    Method PMethod9364 = new_Method_with(empty_Array, PArray9365, empty_Array, PThreadedCode9366, 1, PSend9385);
    
    MethodClosure MC_SMB_readC1 = new_MethodClosure((Method)PMethod9364, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_readC1, MC_SMB_readC1);
}


static void init_SMB_input_() {
    Symbol SMB_input_ = new_Symbol(L"input:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray9387 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign9389 = new_Assign((Optr)slot_IO_Term_TermInputDriver_input, (Optr)VAR_anObject_0_0);
    Array PThreadedCode9388 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign9389, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9386 = new_Method_with(PArray9387, empty_Array, empty_Array, PThreadedCode9388, 2, PAssign9389, self);
    
    MethodClosure MC_SMB_input_ = new_MethodClosure((Method)PMethod9386, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_input_, MC_SMB_input_);
}


static void init_SMB_continueReadCSINumber_() {
    Symbol SMB_continueReadCSINumber_ = new_Symbol(L"continueReadCSINumber:");
    Variable VAR_v_0_0 = new_Variable_named(L"v", 0);
    Array PArray9391 = new_Array_with(1, (Optr)VAR_v_0_0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Variable VAR_character_0_2 = new_Variable_named(L"character", 0);
    Array PArray9392 = new_Array_with(2, (Optr)VAR_value_0_1, (Optr)VAR_character_0_2);
    Assign PAssign9394 = new_Assign((Optr)VAR_value_0_1, (Optr)VAR_v_0_0);
    Character char_9397 = new_Character(L'0');
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend9399 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9398 = new_Assign((Optr)VAR_character_0_2, (Optr)PSend9399);
    Constant char_9397_Const = new_Constant((Optr)char_9397);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend9400 = new_Send((Optr)char_9397_Const, SMB__lt__equals_, 1, (Optr)PAssign9398);
    Character char_9403 = new_Character(L'9');
    Constant char_9403_Const = new_Constant((Optr)char_9403);
    // <=. 
    Send PSend9404 = new_Send((Optr)VAR_character_0_2, SMB__lt__equals_, 1, (Optr)char_9403_Const);
    Array PThreadedCode9402 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_push1, (Optr)char_9403, (Optr)&t_send1, (Optr)PSend9404, (Optr)&t_block_return);
    Block PBlock9401 = new_Block_with(empty_Array, empty_Array, PThreadedCode9402, 1, PSend9404);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend9405 = new_Send((Optr)PSend9400, SMB_and_, 1, (Optr)PBlock9401);
    Array PThreadedCode9396 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)char_9397, (Optr)&t_push1, (Optr)PAssign9398, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9399, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend9400, (Optr)&t_push_closure, (Optr)PBlock9401, (Optr)&t_send1, (Optr)PSend9405, (Optr)&t_block_return);
    Block PBlock9395 = new_Block_with(empty_Array, empty_Array, PThreadedCode9396, 1, PSend9405);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_10 = new_SmallInt(10);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // *. 
    Send PSend9410 = new_Send((Optr)VAR_value_0_1, SMB__times_, 1, (Optr)int_10_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend9412 = new_Send((Optr)VAR_character_0_2, SMB_asInteger, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // asInteger. 
    Send PSend9413 = new_Send((Optr)char_9397_Const, SMB_asInteger, 0);
    // -. 
    Send PSend9411 = new_Send((Optr)PSend9412, SMB__minus_, 1, (Optr)PSend9413);
    // +. 
    Send PSend9409 = new_Send((Optr)PSend9410, SMB__plus_, 1, (Optr)PSend9411);
    Assign PAssign9408 = new_Assign((Optr)VAR_value_0_1, (Optr)PSend9409);
    Array PThreadedCode9407 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign9408, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend9410, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_send0, (Optr)PSend9412, (Optr)&t_push1, (Optr)char_9397, (Optr)&t_send0, (Optr)PSend9413, (Optr)&t_send1, (Optr)PSend9411, (Optr)&t_send1, (Optr)PSend9409, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock9406 = new_Block_with(empty_Array, empty_Array, PThreadedCode9407, 1, PAssign9408);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend9414 = new_Send((Optr)PBlock9395, SMB_whileTrue_, 1, (Optr)PBlock9406);
    Character char_9415 = new_Character(L'~');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_9415_Const = new_Constant((Optr)char_9415);
    // =. 
    Send PSend9416 = new_Send((Optr)VAR_character_0_2, SMB__equals_, 1, (Optr)char_9415_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_9420 = new_String(L"Control Sequence Introducer (number end)");
    Symbol SMB_fail_in_ = new_Symbol(L"fail:in:");
    Constant string_9420_Const = new_Constant((Optr)string_9420);
    // fail:in:. 
    Send PSend9421 = new_Send((Optr)self, SMB_fail_in_, 2, (Optr)VAR_character_0_2, (Optr)string_9420_Const);
    Array PThreadedCode9419 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_push1, (Optr)string_9420, (Optr)&t_send2, (Optr)PSend9421, (Optr)&t_block_return);
    Block PBlock9418 = new_Block_with(empty_Array, empty_Array, PThreadedCode9419, 1, PSend9421);
    // ifFalse:. 
    Send PSend9417 = new_Send((Optr)PSend9416, SMB_ifFalse_, 1, (Optr)PBlock9418);
    String string_9424 = new_String(L"Control Sequence Introducer (number end)");
    Constant string_9424_Const = new_Constant((Optr)string_9424);
    // fail:in:. 
    Send PSend9425 = new_Send((Optr)self, SMB_fail_in_, 2, (Optr)VAR_character_0_2, (Optr)string_9424_Const);
    Array PThreadedCode9423 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_push1, (Optr)string_9424, (Optr)&t_send2, (Optr)PSend9425, (Optr)&t_block_return);
    Block PBlock9422 = new_Block_with(empty_Array, empty_Array, PThreadedCode9423, 1, PSend9425);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend9426 = new_Send((Optr)slot_IO_Term_TermInputDriver_csi, SMB_at_ifAbsent_, 2, (Optr)VAR_value_0_1, (Optr)PBlock9422);
    Array PThreadedCode9393 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign9394, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock9395, (Optr)&t_push_closure, (Optr)PBlock9406, (Optr)&t_send1, (Optr)PSend9414, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_push1, (Optr)char_9415, (Optr)&t_send1, (Optr)PSend9416, (Optr)&t_send_ifFalse_, (Optr)PSend9417, (Optr)PBlock9418, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_csi, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_push_closure, (Optr)PBlock9422, (Optr)&t_send2, (Optr)PSend9426, (Optr)&t_method_return);
    Method PMethod9390 = new_Method_with(PArray9391, PArray9392, empty_Array, PThreadedCode9393, 4, PAssign9394, PSend9414, PSend9417, PSend9426);
    
    MethodClosure MC_SMB_continueReadCSINumber_ = new_MethodClosure((Method)PMethod9390, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_continueReadCSINumber_, MC_SMB_continueReadCSINumber_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9430 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign9429 = new_Assign((Optr)slot_IO_Term_TermInputDriver_normal, (Optr)PSend9430);
    Symbol SMB_initializeNormal_ = new_Symbol(L"initializeNormal:");
    // initializeNormal:. 
    Send PSend9431 = new_Send((Optr)self, SMB_initializeNormal_, 1, (Optr)slot_IO_Term_TermInputDriver_normal);
    // new. 
    Send PSend9433 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign9432 = new_Assign((Optr)slot_IO_Term_TermInputDriver_ss3, (Optr)PSend9433);
    Symbol SMB_initializeSS3_ = new_Symbol(L"initializeSS3:");
    // initializeSS3:. 
    Send PSend9434 = new_Send((Optr)self, SMB_initializeSS3_, 1, (Optr)slot_IO_Term_TermInputDriver_ss3);
    // new. 
    Send PSend9436 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign9435 = new_Assign((Optr)slot_IO_Term_TermInputDriver_csi, (Optr)PSend9436);
    Symbol SMB_initializeCSI_ = new_Symbol(L"initializeCSI:");
    // initializeCSI:. 
    Send PSend9437 = new_Send((Optr)self, SMB_initializeCSI_, 1, (Optr)slot_IO_Term_TermInputDriver_csi);
    Array PThreadedCode9428 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign9429, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend9430, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_normal, (Optr)&t_send1, (Optr)PSend9431, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9432, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend9433, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_ss3, (Optr)&t_send1, (Optr)PSend9434, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9435, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend9436, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_csi, (Optr)&t_send1, (Optr)PSend9437, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9427 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9428, 7, PAssign9429, PSend9431, PAssign9432, PSend9434, PAssign9435, PSend9437, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9427, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_fail_in_() {
    Symbol SMB_fail_in_ = new_Symbol(L"fail:in:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Variable VAR_mode_0_1 = new_Variable_named(L"mode", 0);
    Array PArray9439 = new_Array_with(2, (Optr)VAR_value_0_0, (Optr)VAR_mode_0_1);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend9441 = new_Send((Optr)VAR_mode_0_1, SMB_asString, 0);
    String string_9442 = new_String(L" does not support ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_9442_Const = new_Constant((Optr)string_9442);
    // ,. 
    Send PSend9443 = new_Send((Optr)PSend9441, SMB__append_, 1, (Optr)string_9442_Const);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend9444 = new_Send((Optr)VAR_value_0_0, SMB_asInteger, 0);
    // ,. 
    Send PSend9445 = new_Send((Optr)PSend9443, SMB__append_, 1, (Optr)PSend9444);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend9446 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9445);
    Array PThreadedCode9440 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_mode_0_1, (Optr)&t_send0, (Optr)PSend9441, (Optr)&t_push1, (Optr)string_9442, (Optr)&t_send1, (Optr)PSend9443, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send0, (Optr)PSend9444, (Optr)&t_send1, (Optr)PSend9445, (Optr)&t_send1, (Optr)PSend9446, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9438 = new_Method_with(PArray9439, empty_Array, empty_Array, PThreadedCode9440, 2, PSend9446, self);
    
    MethodClosure MC_SMB_fail_in_ = new_MethodClosure((Method)PMethod9438, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_fail_in_, MC_SMB_fail_in_);
}


static void init_SMB_read() {
    Symbol SMB_read = new_Symbol(L"read");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Variable VAR_action_0_1 = new_Variable_named(L"action", 0);
    Array PArray9448 = new_Array_with(2, (Optr)VAR_character_0_0, (Optr)VAR_action_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray9451 = new_Array_with(1, (Optr)VAR__return__1_0);
    // read. 
    Send PSend9454 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9453 = new_Assign((Optr)VAR_character_0_0, (Optr)PSend9454);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend9457 = new_Send((Optr)VAR_character_0_0, SMB_asInteger, 0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend9460 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_write_, 1, (Optr)VAR_character_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend9461 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend9460);
    Array PThreadedCode9459 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend9460, (Optr)&t_send1, (Optr)PSend9461, (Optr)&t_block_return);
    Block PBlock9458 = new_Block_with(empty_Array, empty_Array, PThreadedCode9459, 1, PSend9461);
    // at:ifAbsent:. 
    Send PSend9456 = new_Send((Optr)slot_IO_Term_TermInputDriver_normal, SMB_at_ifAbsent_, 2, (Optr)PSend9457, (Optr)PBlock9458);
    Assign PAssign9455 = new_Assign((Optr)VAR_action_0_1, (Optr)PSend9456);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend9462 = new_Send((Optr)VAR_action_0_1, SMB_value, 0);
    Array PThreadedCode9452 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign9453, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9454, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9455, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_normal, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send0, (Optr)PSend9457, (Optr)&t_push_closure, (Optr)PBlock9458, (Optr)&t_send2, (Optr)PSend9456, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_1, (Optr)&t_send0, (Optr)PSend9462, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock9450 = new_Block_with(PArray9451, empty_Array, PThreadedCode9452, 4, PAssign9453, PAssign9455, PSend9462, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9463 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock9450);
    Array PThreadedCode9449 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock9450, (Optr)&t_send1, (Optr)PSend9463, (Optr)&t_method_return);
    Method PMethod9447 = new_Method_with(empty_Array, PArray9448, empty_Array, PThreadedCode9449, 1, PSend9463);
    
    MethodClosure MC_SMB_read = new_MethodClosure((Method)PMethod9447, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_read, MC_SMB_read);
}


static void init_SMB_readSS3() {
    Symbol SMB_readSS3 = new_Symbol(L"readSS3");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Variable VAR_action_0_1 = new_Variable_named(L"action", 0);
    Array PArray9465 = new_Array_with(2, (Optr)VAR_character_0_0, (Optr)VAR_action_0_1);
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend9468 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9467 = new_Assign((Optr)VAR_character_0_0, (Optr)PSend9468);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    String string_9473 = new_String(L"Single-Shift 3");
    Symbol SMB_fail_in_ = new_Symbol(L"fail:in:");
    Constant string_9473_Const = new_Constant((Optr)string_9473);
    // fail:in:. 
    Send PSend9474 = new_Send((Optr)self, SMB_fail_in_, 2, (Optr)VAR_character_0_0, (Optr)string_9473_Const);
    Array PThreadedCode9472 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push1, (Optr)string_9473, (Optr)&t_send2, (Optr)PSend9474, (Optr)&t_block_return);
    Block PBlock9471 = new_Block_with(empty_Array, empty_Array, PThreadedCode9472, 1, PSend9474);
    // at:ifAbsent:. 
    Send PSend9470 = new_Send((Optr)slot_IO_Term_TermInputDriver_ss3, SMB_at_ifAbsent_, 2, (Optr)VAR_character_0_0, (Optr)PBlock9471);
    Assign PAssign9469 = new_Assign((Optr)VAR_action_0_1, (Optr)PSend9470);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend9475 = new_Send((Optr)VAR_action_0_1, SMB_value, 0);
    Array PThreadedCode9466 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign9467, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9468, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9469, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_ss3, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push_closure, (Optr)PBlock9471, (Optr)&t_send2, (Optr)PSend9470, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_1, (Optr)&t_send0, (Optr)PSend9475, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9464 = new_Method_with(empty_Array, PArray9465, empty_Array, PThreadedCode9466, 4, PAssign9467, PAssign9469, PSend9475, self);
    
    MethodClosure MC_SMB_readSS3 = new_MethodClosure((Method)PMethod9464, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_readSS3, MC_SMB_readSS3);
}


static void init_SMB_initializeCSI_() {
    Symbol SMB_initializeCSI_ = new_Symbol(L"initializeCSI:");
    Variable VAR_actions_0_0 = new_Variable_named(L"actions", 0);
    Array PArray9477 = new_Array_with(1, (Optr)VAR_actions_0_0);
    Character char_9479 = new_Character(L'A');
    Symbol SMB_up = new_Symbol(L"up");
    // up. 
    Send PSend9482 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_up, 0);
    Array PThreadedCode9481 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9482, (Optr)&t_block_return);
    Block PBlock9480 = new_Block_with(empty_Array, empty_Array, PThreadedCode9481, 1, PSend9482);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant char_9479_Const = new_Constant((Optr)char_9479);
    // at:put:. 
    Send PSend9483 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9479_Const, (Optr)PBlock9480);
    Character char_8769 = new_Character(L'B');
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend9486 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_down, 0);
    Array PThreadedCode9485 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9486, (Optr)&t_block_return);
    Block PBlock9484 = new_Block_with(empty_Array, empty_Array, PThreadedCode9485, 1, PSend9486);
    Constant char_8769_Const = new_Constant((Optr)char_8769);
    // at:put:. 
    Send PSend9487 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_8769_Const, (Optr)PBlock9484);
    Character char_9488 = new_Character(L'C');
    Symbol SMB_right = new_Symbol(L"right");
    // right. 
    Send PSend9491 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_right, 0);
    Array PThreadedCode9490 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9491, (Optr)&t_block_return);
    Block PBlock9489 = new_Block_with(empty_Array, empty_Array, PThreadedCode9490, 1, PSend9491);
    Constant char_9488_Const = new_Constant((Optr)char_9488);
    // at:put:. 
    Send PSend9492 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9488_Const, (Optr)PBlock9489);
    Character char_9493 = new_Character(L'D');
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend9496 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_left, 0);
    Array PThreadedCode9495 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9496, (Optr)&t_block_return);
    Block PBlock9494 = new_Block_with(empty_Array, empty_Array, PThreadedCode9495, 1, PSend9496);
    Constant char_9493_Const = new_Constant((Optr)char_9493);
    // at:put:. 
    Send PSend9497 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9493_Const, (Optr)PBlock9494);
    Character char_8700 = new_Character(L'E');
    Symbol SMB_here = new_Symbol(L"here");
    // here. 
    Send PSend9500 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_here, 0);
    Array PThreadedCode9499 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9500, (Optr)&t_block_return);
    Block PBlock9498 = new_Block_with(empty_Array, empty_Array, PThreadedCode9499, 1, PSend9500);
    Constant char_8700_Const = new_Constant((Optr)char_8700);
    // at:put:. 
    Send PSend9501 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_8700_Const, (Optr)PBlock9498);
    Symbol SMB_find = new_Symbol(L"find");
    // find. 
    Send PSend9504 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_find, 0);
    Array PThreadedCode9503 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9504, (Optr)&t_block_return);
    Block PBlock9502 = new_Block_with(empty_Array, empty_Array, PThreadedCode9503, 1, PSend9504);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend9505 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PBlock9502);
    Symbol SMB_insert = new_Symbol(L"insert");
    // insert. 
    Send PSend9508 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_insert, 0);
    Array PThreadedCode9507 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9508, (Optr)&t_block_return);
    Block PBlock9506 = new_Block_with(empty_Array, empty_Array, PThreadedCode9507, 1, PSend9508);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend9509 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)PBlock9506);
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB_remove = new_Symbol(L"remove");
    // remove. 
    Send PSend9512 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_remove, 0);
    Array PThreadedCode9511 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9512, (Optr)&t_block_return);
    Block PBlock9510 = new_Block_with(empty_Array, empty_Array, PThreadedCode9511, 1, PSend9512);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend9513 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)PBlock9510);
    SmallInt int_4 = new_SmallInt(4);
    Symbol SMB_select = new_Symbol(L"select");
    // select. 
    Send PSend9516 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_select, 0);
    Array PThreadedCode9515 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9516, (Optr)&t_block_return);
    Block PBlock9514 = new_Block_with(empty_Array, empty_Array, PThreadedCode9515, 1, PSend9516);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:put:. 
    Send PSend9517 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)PBlock9514);
    SmallInt int_5 = new_SmallInt(5);
    Symbol SMB_previousScreen = new_Symbol(L"previousScreen");
    // previousScreen. 
    Send PSend9520 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_previousScreen, 0);
    Array PThreadedCode9519 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9520, (Optr)&t_block_return);
    Block PBlock9518 = new_Block_with(empty_Array, empty_Array, PThreadedCode9519, 1, PSend9520);
    Constant int_5_Const = new_Constant((Optr)int_5);
    // at:put:. 
    Send PSend9521 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_5_Const, (Optr)PBlock9518);
    SmallInt int_6 = new_SmallInt(6);
    Symbol SMB_nextScreen = new_Symbol(L"nextScreen");
    // nextScreen. 
    Send PSend9524 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_nextScreen, 0);
    Array PThreadedCode9523 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9524, (Optr)&t_block_return);
    Block PBlock9522 = new_Block_with(empty_Array, empty_Array, PThreadedCode9523, 1, PSend9524);
    Constant int_6_Const = new_Constant((Optr)int_6);
    // at:put:. 
    Send PSend9525 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_6_Const, (Optr)PBlock9522);
    SmallInt int_15 = new_SmallInt(15);
    Symbol SMB_f5 = new_Symbol(L"f5");
    // f5. 
    Send PSend9528 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f5, 0);
    Array PThreadedCode9527 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9528, (Optr)&t_block_return);
    Block PBlock9526 = new_Block_with(empty_Array, empty_Array, PThreadedCode9527, 1, PSend9528);
    Constant int_15_Const = new_Constant((Optr)int_15);
    // at:put:. 
    Send PSend9529 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_15_Const, (Optr)PBlock9526);
    SmallInt int_17 = new_SmallInt(17);
    Symbol SMB_f6 = new_Symbol(L"f6");
    // f6. 
    Send PSend9532 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f6, 0);
    Array PThreadedCode9531 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9532, (Optr)&t_block_return);
    Block PBlock9530 = new_Block_with(empty_Array, empty_Array, PThreadedCode9531, 1, PSend9532);
    Constant int_17_Const = new_Constant((Optr)int_17);
    // at:put:. 
    Send PSend9533 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_17_Const, (Optr)PBlock9530);
    SmallInt int_18 = new_SmallInt(18);
    Symbol SMB_f7 = new_Symbol(L"f7");
    // f7. 
    Send PSend9536 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f7, 0);
    Array PThreadedCode9535 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9536, (Optr)&t_block_return);
    Block PBlock9534 = new_Block_with(empty_Array, empty_Array, PThreadedCode9535, 1, PSend9536);
    Constant int_18_Const = new_Constant((Optr)int_18);
    // at:put:. 
    Send PSend9537 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_18_Const, (Optr)PBlock9534);
    SmallInt int_19 = new_SmallInt(19);
    Symbol SMB_f8 = new_Symbol(L"f8");
    // f8. 
    Send PSend9540 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f8, 0);
    Array PThreadedCode9539 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9540, (Optr)&t_block_return);
    Block PBlock9538 = new_Block_with(empty_Array, empty_Array, PThreadedCode9539, 1, PSend9540);
    Constant int_19_Const = new_Constant((Optr)int_19);
    // at:put:. 
    Send PSend9541 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_19_Const, (Optr)PBlock9538);
    SmallInt int_20 = new_SmallInt(20);
    Symbol SMB_f9 = new_Symbol(L"f9");
    // f9. 
    Send PSend9544 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f9, 0);
    Array PThreadedCode9543 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9544, (Optr)&t_block_return);
    Block PBlock9542 = new_Block_with(empty_Array, empty_Array, PThreadedCode9543, 1, PSend9544);
    Constant int_20_Const = new_Constant((Optr)int_20);
    // at:put:. 
    Send PSend9545 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_20_Const, (Optr)PBlock9542);
    SmallInt int_21 = new_SmallInt(21);
    Symbol SMB_f10 = new_Symbol(L"f10");
    // f10. 
    Send PSend9548 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f10, 0);
    Array PThreadedCode9547 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9548, (Optr)&t_block_return);
    Block PBlock9546 = new_Block_with(empty_Array, empty_Array, PThreadedCode9547, 1, PSend9548);
    Constant int_21_Const = new_Constant((Optr)int_21);
    // at:put:. 
    Send PSend9549 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_21_Const, (Optr)PBlock9546);
    SmallInt int_23 = new_SmallInt(23);
    Symbol SMB_f11 = new_Symbol(L"f11");
    // f11. 
    Send PSend9552 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f11, 0);
    Array PThreadedCode9551 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9552, (Optr)&t_block_return);
    Block PBlock9550 = new_Block_with(empty_Array, empty_Array, PThreadedCode9551, 1, PSend9552);
    Constant int_23_Const = new_Constant((Optr)int_23);
    // at:put:. 
    Send PSend9553 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_23_Const, (Optr)PBlock9550);
    SmallInt int_24 = new_SmallInt(24);
    Symbol SMB_f12 = new_Symbol(L"f12");
    // f12. 
    Send PSend9556 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f12, 0);
    Array PThreadedCode9555 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9556, (Optr)&t_block_return);
    Block PBlock9554 = new_Block_with(empty_Array, empty_Array, PThreadedCode9555, 1, PSend9556);
    Constant int_24_Const = new_Constant((Optr)int_24);
    // at:put:. 
    Send PSend9557 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_24_Const, (Optr)PBlock9554);
    SmallInt int_25 = new_SmallInt(25);
    Symbol SMB_f13 = new_Symbol(L"f13");
    // f13. 
    Send PSend9560 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f13, 0);
    Array PThreadedCode9559 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9560, (Optr)&t_block_return);
    Block PBlock9558 = new_Block_with(empty_Array, empty_Array, PThreadedCode9559, 1, PSend9560);
    Constant int_25_Const = new_Constant((Optr)int_25);
    // at:put:. 
    Send PSend9561 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_25_Const, (Optr)PBlock9558);
    SmallInt int_26 = new_SmallInt(26);
    Symbol SMB_f14 = new_Symbol(L"f14");
    // f14. 
    Send PSend9564 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f14, 0);
    Array PThreadedCode9563 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9564, (Optr)&t_block_return);
    Block PBlock9562 = new_Block_with(empty_Array, empty_Array, PThreadedCode9563, 1, PSend9564);
    Constant int_26_Const = new_Constant((Optr)int_26);
    // at:put:. 
    Send PSend9565 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_26_Const, (Optr)PBlock9562);
    SmallInt int_28 = new_SmallInt(28);
    Symbol SMB_f15 = new_Symbol(L"f15");
    // f15. 
    Send PSend9568 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f15, 0);
    Array PThreadedCode9567 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9568, (Optr)&t_block_return);
    Block PBlock9566 = new_Block_with(empty_Array, empty_Array, PThreadedCode9567, 1, PSend9568);
    Constant int_28_Const = new_Constant((Optr)int_28);
    // at:put:. 
    Send PSend9569 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_28_Const, (Optr)PBlock9566);
    SmallInt int_29 = new_SmallInt(29);
    Symbol SMB_f16 = new_Symbol(L"f16");
    // f16. 
    Send PSend9572 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f16, 0);
    Array PThreadedCode9571 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9572, (Optr)&t_block_return);
    Block PBlock9570 = new_Block_with(empty_Array, empty_Array, PThreadedCode9571, 1, PSend9572);
    Constant int_29_Const = new_Constant((Optr)int_29);
    // at:put:. 
    Send PSend9573 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_29_Const, (Optr)PBlock9570);
    SmallInt int_31 = new_SmallInt(31);
    Symbol SMB_f17 = new_Symbol(L"f17");
    // f17. 
    Send PSend9576 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f17, 0);
    Array PThreadedCode9575 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9576, (Optr)&t_block_return);
    Block PBlock9574 = new_Block_with(empty_Array, empty_Array, PThreadedCode9575, 1, PSend9576);
    Constant int_31_Const = new_Constant((Optr)int_31);
    // at:put:. 
    Send PSend9577 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_31_Const, (Optr)PBlock9574);
    SmallInt int_32 = new_SmallInt(32);
    Symbol SMB_f18 = new_Symbol(L"f18");
    // f18. 
    Send PSend9580 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f18, 0);
    Array PThreadedCode9579 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9580, (Optr)&t_block_return);
    Block PBlock9578 = new_Block_with(empty_Array, empty_Array, PThreadedCode9579, 1, PSend9580);
    Constant int_32_Const = new_Constant((Optr)int_32);
    // at:put:. 
    Send PSend9581 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_32_Const, (Optr)PBlock9578);
    SmallInt int_33 = new_SmallInt(33);
    Symbol SMB_f19 = new_Symbol(L"f19");
    // f19. 
    Send PSend9584 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f19, 0);
    Array PThreadedCode9583 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9584, (Optr)&t_block_return);
    Block PBlock9582 = new_Block_with(empty_Array, empty_Array, PThreadedCode9583, 1, PSend9584);
    Constant int_33_Const = new_Constant((Optr)int_33);
    // at:put:. 
    Send PSend9585 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_33_Const, (Optr)PBlock9582);
    SmallInt int_34 = new_SmallInt(34);
    Symbol SMB_f20 = new_Symbol(L"f20");
    // f20. 
    Send PSend9588 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f20, 0);
    Array PThreadedCode9587 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9588, (Optr)&t_block_return);
    Block PBlock9586 = new_Block_with(empty_Array, empty_Array, PThreadedCode9587, 1, PSend9588);
    Constant int_34_Const = new_Constant((Optr)int_34);
    // at:put:. 
    Send PSend9589 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_34_Const, (Optr)PBlock9586);
    Character char_8646 = new_Character(L'[');
    Symbol SMB_readCSI = new_Symbol(L"readCSI");
    // readCSI. 
    Send PSend9592 = new_Send((Optr)self, SMB_readCSI, 0);
    Array PThreadedCode9591 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9592, (Optr)&t_block_return);
    Block PBlock9590 = new_Block_with(empty_Array, empty_Array, PThreadedCode9591, 1, PSend9592);
    Constant char_8646_Const = new_Constant((Optr)char_8646);
    // at:put:. 
    Send PSend9593 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_8646_Const, (Optr)PBlock9590);
    Array PThreadedCode9478 = instantiate_Array_with(ThreadedCode_Class, 0, 251, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9479, (Optr)&t_push_closure, (Optr)PBlock9480, (Optr)&t_send2, (Optr)PSend9483, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_8769, (Optr)&t_push_closure, (Optr)PBlock9484, (Optr)&t_send2, (Optr)PSend9487, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9488, (Optr)&t_push_closure, (Optr)PBlock9489, (Optr)&t_send2, (Optr)PSend9492, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9493, (Optr)&t_push_closure, (Optr)PBlock9494, (Optr)&t_send2, (Optr)PSend9497, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_8700, (Optr)&t_push_closure, (Optr)PBlock9498, (Optr)&t_send2, (Optr)PSend9501, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push_1, (Optr)&t_push_closure, (Optr)PBlock9502, (Optr)&t_send2, (Optr)PSend9505, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock9506, (Optr)&t_send2, (Optr)PSend9509, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_closure, (Optr)PBlock9510, (Optr)&t_send2, (Optr)PSend9513, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_closure, (Optr)PBlock9514, (Optr)&t_send2, (Optr)PSend9517, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_5, (Optr)&t_push_closure, (Optr)PBlock9518, (Optr)&t_send2, (Optr)PSend9521, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push_closure, (Optr)PBlock9522, (Optr)&t_send2, (Optr)PSend9525, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_15, (Optr)&t_push_closure, (Optr)PBlock9526, (Optr)&t_send2, (Optr)PSend9529, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_17, (Optr)&t_push_closure, (Optr)PBlock9530, (Optr)&t_send2, (Optr)PSend9533, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_18, (Optr)&t_push_closure, (Optr)PBlock9534, (Optr)&t_send2, (Optr)PSend9537, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_19, (Optr)&t_push_closure, (Optr)PBlock9538, (Optr)&t_send2, (Optr)PSend9541, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_20, (Optr)&t_push_closure, (Optr)PBlock9542, (Optr)&t_send2, (Optr)PSend9545, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_21, (Optr)&t_push_closure, (Optr)PBlock9546, (Optr)&t_send2, (Optr)PSend9549, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_23, (Optr)&t_push_closure, (Optr)PBlock9550, (Optr)&t_send2, (Optr)PSend9553, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_24, (Optr)&t_push_closure, (Optr)PBlock9554, (Optr)&t_send2, (Optr)PSend9557, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_25, (Optr)&t_push_closure, (Optr)PBlock9558, (Optr)&t_send2, (Optr)PSend9561, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_26, (Optr)&t_push_closure, (Optr)PBlock9562, (Optr)&t_send2, (Optr)PSend9565, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_28, (Optr)&t_push_closure, (Optr)PBlock9566, (Optr)&t_send2, (Optr)PSend9569, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_29, (Optr)&t_push_closure, (Optr)PBlock9570, (Optr)&t_send2, (Optr)PSend9573, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_31, (Optr)&t_push_closure, (Optr)PBlock9574, (Optr)&t_send2, (Optr)PSend9577, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_32, (Optr)&t_push_closure, (Optr)PBlock9578, (Optr)&t_send2, (Optr)PSend9581, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_33, (Optr)&t_push_closure, (Optr)PBlock9582, (Optr)&t_send2, (Optr)PSend9585, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_34, (Optr)&t_push_closure, (Optr)PBlock9586, (Optr)&t_send2, (Optr)PSend9589, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_8646, (Optr)&t_push_closure, (Optr)PBlock9590, (Optr)&t_send2, (Optr)PSend9593, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9476 = new_Method_with(PArray9477, empty_Array, empty_Array, PThreadedCode9478, 29, PSend9483, PSend9487, PSend9492, PSend9497, PSend9501, PSend9505, PSend9509, PSend9513, PSend9517, PSend9521, PSend9525, PSend9529, PSend9533, PSend9537, PSend9541, PSend9545, PSend9549, PSend9553, PSend9557, PSend9561, PSend9565, PSend9569, PSend9573, PSend9577, PSend9581, PSend9585, PSend9589, PSend9593, self);
    
    MethodClosure MC_SMB_initializeCSI_ = new_MethodClosure((Method)PMethod9476, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_initializeCSI_, MC_SMB_initializeCSI_);
}


static void init_SMB_handler_() {
    Symbol SMB_handler_ = new_Symbol(L"handler:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray9595 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign9597 = new_Assign((Optr)slot_IO_Term_TermInputDriver_handler, (Optr)VAR_anObject_0_0);
    Array PThreadedCode9596 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign9597, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9594 = new_Method_with(PArray9595, empty_Array, empty_Array, PThreadedCode9596, 2, PAssign9597, self);
    
    MethodClosure MC_SMB_handler_ = new_MethodClosure((Method)PMethod9594, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_handler_, MC_SMB_handler_);
}


static void init_SMB_initializeNormal_() {
    Symbol SMB_initializeNormal_ = new_Symbol(L"initializeNormal:");
    Variable VAR_actions_0_0 = new_Variable_named(L"actions", 0);
    Array PArray9599 = new_Array_with(1, (Optr)VAR_actions_0_0);
    Symbol SMB_startOfHeading = new_Symbol(L"startOfHeading");
    // startOfHeading. 
    Send PSend9603 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_startOfHeading, 0);
    Array PThreadedCode9602 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9603, (Optr)&t_block_return);
    Block PBlock9601 = new_Block_with(empty_Array, empty_Array, PThreadedCode9602, 1, PSend9603);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend9604 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PBlock9601);
    Symbol SMB_startOfText = new_Symbol(L"startOfText");
    // startOfText. 
    Send PSend9607 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_startOfText, 0);
    Array PThreadedCode9606 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9607, (Optr)&t_block_return);
    Block PBlock9605 = new_Block_with(empty_Array, empty_Array, PThreadedCode9606, 1, PSend9607);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend9608 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)PBlock9605);
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB_endOfText = new_Symbol(L"endOfText");
    // endOfText. 
    Send PSend9611 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_endOfText, 0);
    Array PThreadedCode9610 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9611, (Optr)&t_block_return);
    Block PBlock9609 = new_Block_with(empty_Array, empty_Array, PThreadedCode9610, 1, PSend9611);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend9612 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)PBlock9609);
    SmallInt int_4 = new_SmallInt(4);
    Symbol SMB_endOfTransmission = new_Symbol(L"endOfTransmission");
    // endOfTransmission. 
    Send PSend9615 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_endOfTransmission, 0);
    Array PThreadedCode9614 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9615, (Optr)&t_block_return);
    Block PBlock9613 = new_Block_with(empty_Array, empty_Array, PThreadedCode9614, 1, PSend9615);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:put:. 
    Send PSend9616 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)PBlock9613);
    SmallInt int_5 = new_SmallInt(5);
    Symbol SMB_enquiry = new_Symbol(L"enquiry");
    // enquiry. 
    Send PSend9619 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_enquiry, 0);
    Array PThreadedCode9618 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9619, (Optr)&t_block_return);
    Block PBlock9617 = new_Block_with(empty_Array, empty_Array, PThreadedCode9618, 1, PSend9619);
    Constant int_5_Const = new_Constant((Optr)int_5);
    // at:put:. 
    Send PSend9620 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_5_Const, (Optr)PBlock9617);
    SmallInt int_6 = new_SmallInt(6);
    Symbol SMB_acknowledge = new_Symbol(L"acknowledge");
    // acknowledge. 
    Send PSend9623 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_acknowledge, 0);
    Array PThreadedCode9622 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9623, (Optr)&t_block_return);
    Block PBlock9621 = new_Block_with(empty_Array, empty_Array, PThreadedCode9622, 1, PSend9623);
    Constant int_6_Const = new_Constant((Optr)int_6);
    // at:put:. 
    Send PSend9624 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_6_Const, (Optr)PBlock9621);
    SmallInt int_7 = new_SmallInt(7);
    Symbol SMB_bell = new_Symbol(L"bell");
    // bell. 
    Send PSend9627 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_bell, 0);
    Array PThreadedCode9626 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9627, (Optr)&t_block_return);
    Block PBlock9625 = new_Block_with(empty_Array, empty_Array, PThreadedCode9626, 1, PSend9627);
    Constant int_7_Const = new_Constant((Optr)int_7);
    // at:put:. 
    Send PSend9628 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_7_Const, (Optr)PBlock9625);
    SmallInt int_8 = new_SmallInt(8);
    Symbol SMB_backspace = new_Symbol(L"backspace");
    // backspace. 
    Send PSend9631 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_backspace, 0);
    Array PThreadedCode9630 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9631, (Optr)&t_block_return);
    Block PBlock9629 = new_Block_with(empty_Array, empty_Array, PThreadedCode9630, 1, PSend9631);
    Constant int_8_Const = new_Constant((Optr)int_8);
    // at:put:. 
    Send PSend9632 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_8_Const, (Optr)PBlock9629);
    SmallInt int_9 = new_SmallInt(9);
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
    Send PSend9635 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_tab, 0);
    Array PThreadedCode9634 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9635, (Optr)&t_block_return);
    Block PBlock9633 = new_Block_with(empty_Array, empty_Array, PThreadedCode9634, 1, PSend9635);
    Constant int_9_Const = new_Constant((Optr)int_9);
    // at:put:. 
    Send PSend9636 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_9_Const, (Optr)PBlock9633);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend9639 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_lf, 0);
    Array PThreadedCode9638 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9639, (Optr)&t_block_return);
    Block PBlock9637 = new_Block_with(empty_Array, empty_Array, PThreadedCode9638, 1, PSend9639);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // at:put:. 
    Send PSend9640 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_10_Const, (Optr)PBlock9637);
    SmallInt int_11 = new_SmallInt(11);
    Symbol SMB_verticalTab = new_Symbol(L"verticalTab");
    // verticalTab. 
    Send PSend9643 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_verticalTab, 0);
    Array PThreadedCode9642 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9643, (Optr)&t_block_return);
    Block PBlock9641 = new_Block_with(empty_Array, empty_Array, PThreadedCode9642, 1, PSend9643);
    Constant int_11_Const = new_Constant((Optr)int_11);
    // at:put:. 
    Send PSend9644 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_11_Const, (Optr)PBlock9641);
    SmallInt int_12 = new_SmallInt(12);
    Symbol SMB_formfeed = new_Symbol(L"formfeed");
    // formfeed. 
    Send PSend9647 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_formfeed, 0);
    Array PThreadedCode9646 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9647, (Optr)&t_block_return);
    Block PBlock9645 = new_Block_with(empty_Array, empty_Array, PThreadedCode9646, 1, PSend9647);
    Constant int_12_Const = new_Constant((Optr)int_12);
    // at:put:. 
    Send PSend9648 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_12_Const, (Optr)PBlock9645);
    SmallInt int_13 = new_SmallInt(13);
    Symbol SMB_carriageReturn = new_Symbol(L"carriageReturn");
    // carriageReturn. 
    Send PSend9651 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_carriageReturn, 0);
    Array PThreadedCode9650 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9651, (Optr)&t_block_return);
    Block PBlock9649 = new_Block_with(empty_Array, empty_Array, PThreadedCode9650, 1, PSend9651);
    Constant int_13_Const = new_Constant((Optr)int_13);
    // at:put:. 
    Send PSend9652 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_13_Const, (Optr)PBlock9649);
    SmallInt int_14 = new_SmallInt(14);
    Symbol SMB_shiftOut = new_Symbol(L"shiftOut");
    // shiftOut. 
    Send PSend9655 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_shiftOut, 0);
    Array PThreadedCode9654 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9655, (Optr)&t_block_return);
    Block PBlock9653 = new_Block_with(empty_Array, empty_Array, PThreadedCode9654, 1, PSend9655);
    Constant int_14_Const = new_Constant((Optr)int_14);
    // at:put:. 
    Send PSend9656 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_14_Const, (Optr)PBlock9653);
    SmallInt int_15 = new_SmallInt(15);
    Symbol SMB_shiftIn = new_Symbol(L"shiftIn");
    // shiftIn. 
    Send PSend9659 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_shiftIn, 0);
    Array PThreadedCode9658 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9659, (Optr)&t_block_return);
    Block PBlock9657 = new_Block_with(empty_Array, empty_Array, PThreadedCode9658, 1, PSend9659);
    Constant int_15_Const = new_Constant((Optr)int_15);
    // at:put:. 
    Send PSend9660 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_15_Const, (Optr)PBlock9657);
    SmallInt int_27 = new_SmallInt(27);
    Symbol SMB_readC1 = new_Symbol(L"readC1");
    // readC1. 
    Send PSend9663 = new_Send((Optr)self, SMB_readC1, 0);
    Array PThreadedCode9662 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9663, (Optr)&t_block_return);
    Block PBlock9661 = new_Block_with(empty_Array, empty_Array, PThreadedCode9662, 1, PSend9663);
    Constant int_27_Const = new_Constant((Optr)int_27);
    // at:put:. 
    Send PSend9664 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_27_Const, (Optr)PBlock9661);
    SmallInt int_127 = new_SmallInt(127);
    Symbol SMB_delete = new_Symbol(L"delete");
    // delete. 
    Send PSend9667 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_delete, 0);
    Array PThreadedCode9666 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9667, (Optr)&t_block_return);
    Block PBlock9665 = new_Block_with(empty_Array, empty_Array, PThreadedCode9666, 1, PSend9667);
    Constant int_127_Const = new_Constant((Optr)int_127);
    // at:put:. 
    Send PSend9668 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_127_Const, (Optr)PBlock9665);
    Array PThreadedCode9600 = instantiate_Array_with(ThreadedCode_Class, 0, 152, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push_1, (Optr)&t_push_closure, (Optr)PBlock9601, (Optr)&t_send2, (Optr)PSend9604, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock9605, (Optr)&t_send2, (Optr)PSend9608, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_closure, (Optr)PBlock9609, (Optr)&t_send2, (Optr)PSend9612, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_closure, (Optr)PBlock9613, (Optr)&t_send2, (Optr)PSend9616, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_5, (Optr)&t_push_closure, (Optr)PBlock9617, (Optr)&t_send2, (Optr)PSend9620, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push_closure, (Optr)PBlock9621, (Optr)&t_send2, (Optr)PSend9624, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_7, (Optr)&t_push_closure, (Optr)PBlock9625, (Optr)&t_send2, (Optr)PSend9628, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_8, (Optr)&t_push_closure, (Optr)PBlock9629, (Optr)&t_send2, (Optr)PSend9632, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_9, (Optr)&t_push_closure, (Optr)PBlock9633, (Optr)&t_send2, (Optr)PSend9636, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_push_closure, (Optr)PBlock9637, (Optr)&t_send2, (Optr)PSend9640, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_11, (Optr)&t_push_closure, (Optr)PBlock9641, (Optr)&t_send2, (Optr)PSend9644, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_12, (Optr)&t_push_closure, (Optr)PBlock9645, (Optr)&t_send2, (Optr)PSend9648, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_13, (Optr)&t_push_closure, (Optr)PBlock9649, (Optr)&t_send2, (Optr)PSend9652, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_14, (Optr)&t_push_closure, (Optr)PBlock9653, (Optr)&t_send2, (Optr)PSend9656, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_15, (Optr)&t_push_closure, (Optr)PBlock9657, (Optr)&t_send2, (Optr)PSend9660, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_27, (Optr)&t_push_closure, (Optr)PBlock9661, (Optr)&t_send2, (Optr)PSend9664, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_127, (Optr)&t_push_closure, (Optr)PBlock9665, (Optr)&t_send2, (Optr)PSend9668, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9598 = new_Method_with(PArray9599, empty_Array, empty_Array, PThreadedCode9600, 18, PSend9604, PSend9608, PSend9612, PSend9616, PSend9620, PSend9624, PSend9628, PSend9632, PSend9636, PSend9640, PSend9644, PSend9648, PSend9652, PSend9656, PSend9660, PSend9664, PSend9668, self);
    
    MethodClosure MC_SMB_initializeNormal_ = new_MethodClosure((Method)PMethod9598, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_initializeNormal_, MC_SMB_initializeNormal_);
}


static void init_SMB_readCSI() {
    Symbol SMB_readCSI = new_Symbol(L"readCSI");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_character_0_1 = new_Variable_named(L"character", 0);
    Variable VAR_action_0_2 = new_Variable_named(L"action", 0);
    Array PArray9670 = new_Array_with(3, (Optr)VAR_code_0_0, (Optr)VAR_character_0_1, (Optr)VAR_action_0_2);
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend9673 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9672 = new_Assign((Optr)VAR_character_0_1, (Optr)PSend9673);
    Character char_9397 = new_Character(L'0');
    Constant char_9397_Const = new_Constant((Optr)char_9397);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend9677 = new_Send((Optr)char_9397_Const, SMB__lt__equals_, 1, (Optr)VAR_character_0_1);
    Symbol SMB_and_ = new_Symbol(L"and:");
    Character char_9403 = new_Character(L'9');
    Constant char_9403_Const = new_Constant((Optr)char_9403);
    // <=. 
    Send PSend9680 = new_Send((Optr)VAR_character_0_1, SMB__lt__equals_, 1, (Optr)char_9403_Const);
    Array PThreadedCode9679 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_push1, (Optr)char_9403, (Optr)&t_send1, (Optr)PSend9680, (Optr)&t_block_return);
    Block PBlock9678 = new_Block_with(empty_Array, empty_Array, PThreadedCode9679, 1, PSend9680);
    // and:. 
    Send PSend9676 = new_Send((Optr)PSend9677, SMB_and_, 1, (Optr)PBlock9678);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend9683 = new_Send((Optr)VAR_character_0_1, SMB_asInteger, 0);
    // asInteger. 
    Send PSend9684 = new_Send((Optr)char_9397_Const, SMB_asInteger, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend9685 = new_Send((Optr)PSend9683, SMB__minus_, 1, (Optr)PSend9684);
    Symbol SMB_continueReadCSINumber_ = new_Symbol(L"continueReadCSINumber:");
    // continueReadCSINumber:. 
    Send PSend9686 = new_Send((Optr)self, SMB_continueReadCSINumber_, 1, (Optr)PSend9685);
    Array PThreadedCode9682 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_send0, (Optr)PSend9683, (Optr)&t_push1, (Optr)char_9397, (Optr)&t_send0, (Optr)PSend9684, (Optr)&t_send1, (Optr)PSend9685, (Optr)&t_send1, (Optr)PSend9686, (Optr)&t_block_return);
    Block PBlock9681 = new_Block_with(empty_Array, empty_Array, PThreadedCode9682, 1, PSend9686);
    String string_9691 = new_String(L"Control Sequence Introducer");
    Symbol SMB_fail_in_ = new_Symbol(L"fail:in:");
    Constant string_9691_Const = new_Constant((Optr)string_9691);
    // fail:in:. 
    Send PSend9692 = new_Send((Optr)self, SMB_fail_in_, 2, (Optr)VAR_character_0_1, (Optr)string_9691_Const);
    Array PThreadedCode9690 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_push1, (Optr)string_9691, (Optr)&t_send2, (Optr)PSend9692, (Optr)&t_block_return);
    Block PBlock9689 = new_Block_with(empty_Array, empty_Array, PThreadedCode9690, 1, PSend9692);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend9693 = new_Send((Optr)slot_IO_Term_TermInputDriver_csi, SMB_at_ifAbsent_, 2, (Optr)VAR_character_0_1, (Optr)PBlock9689);
    Array PThreadedCode9688 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_csi, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_push_closure, (Optr)PBlock9689, (Optr)&t_send2, (Optr)PSend9693, (Optr)&t_block_return);
    Block PBlock9687 = new_Block_with(empty_Array, empty_Array, PThreadedCode9688, 1, PSend9693);
    // ifTrue:ifFalse:. 
    Send PSend9675 = new_Send((Optr)PSend9676, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock9681, (Optr)PBlock9687);
    Assign PAssign9674 = new_Assign((Optr)VAR_action_0_2, (Optr)PSend9675);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend9694 = new_Send((Optr)VAR_action_0_2, SMB_value, 0);
    Array PThreadedCode9671 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign9672, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9673, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9674, (Optr)&t_push1, (Optr)char_9397, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_send1, (Optr)PSend9677, (Optr)&t_push_closure, (Optr)PBlock9678, (Optr)&t_send1, (Optr)PSend9676, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend9675, (Optr)PBlock9681, (Optr)PBlock9687, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_2, (Optr)&t_send0, (Optr)PSend9694, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9669 = new_Method_with(empty_Array, PArray9670, empty_Array, PThreadedCode9671, 4, PAssign9672, PAssign9674, PSend9694, self);
    
    MethodClosure MC_SMB_readCSI = new_MethodClosure((Method)PMethod9669, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_readCSI, MC_SMB_readCSI);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_n_0_0 = new_Variable_named(L"n", 0);
    Array PArray9696 = new_Array_with(1, (Optr)VAR_n_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper9698 = new_Super(SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend9699 = new_Send((Optr)PSuper9698, SMB_name_, 1, (Optr)VAR_n_0_0);
    Array PThreadedCode9697 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper9698, (Optr)&t_push_variable, (Optr)VAR_n_0_0, (Optr)&t_send1, (Optr)PSend9699, (Optr)&t_method_return);
    Method PMethod9695 = new_Method_with(PArray9696, empty_Array, empty_Array, PThreadedCode9697, 1, PSend9699);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod9695, HEADER(IO_Term_TermInputDriver_Class));
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