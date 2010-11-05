#include <lib/class/Kernel/String/Character.h>


Optr layout_Kernel_String_Character_Class_class;


static void init_SMB_asCharacter() {
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    Array PThreadedCode2357 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod2356 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2357, 1, self);
    
    MethodClosure MC_SMB_asCharacter = new_MethodClosure((Method)PMethod2356, Character_Class);
    store_method(Character_Class, SMB_asCharacter, MC_SMB_asCharacter);
}


static void init_SMB_asLowercase() {
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    Variable VAR_v_0_0 = new_Variable_named(L"v", 0);
    Array PArray2359 = new_Array_with(1, (Optr)VAR_v_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2362 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_charCode = new_Symbol(L"charCode");
    // charCode. 
    Send PSend2365 = new_Send((Optr)self, SMB_charCode, 0);
    Assign PAssign2364 = new_Assign((Optr)VAR_v_0_0, (Optr)PSend2365);
    SmallInt int_65 = new_SmallInt(65);
    Constant int_65_Const = new_Constant((Optr)int_65);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend2366 = new_Send((Optr)int_65_Const, SMB__lt__equals_, 1, (Optr)VAR_v_0_0);
    SmallInt int_90 = new_SmallInt(90);
    Constant int_90_Const = new_Constant((Optr)int_90);
    // <=. 
    Send PSend2369 = new_Send((Optr)VAR_v_0_0, SMB__lt__equals_, 1, (Optr)int_90_Const);
    Array PThreadedCode2368 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_push1, (Optr)int_90, (Optr)&t_send1, (Optr)PSend2369, (Optr)&t_block_return);
    Block PBlock2367 = new_Block_with(empty_Array, empty_Array, PThreadedCode2368, 1, PSend2369);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend2370 = new_Send((Optr)PSend2366, SMB_and_, 1, (Optr)PBlock2367);
    SmallInt int_192 = new_SmallInt(192);
    Constant int_192_Const = new_Constant((Optr)int_192);
    // <=. 
    Send PSend2373 = new_Send((Optr)int_192_Const, SMB__lt__equals_, 1, (Optr)VAR_v_0_0);
    SmallInt int_214 = new_SmallInt(214);
    Constant int_214_Const = new_Constant((Optr)int_214);
    // <=. 
    Send PSend2376 = new_Send((Optr)VAR_v_0_0, SMB__lt__equals_, 1, (Optr)int_214_Const);
    Array PThreadedCode2375 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_push1, (Optr)int_214, (Optr)&t_send1, (Optr)PSend2376, (Optr)&t_block_return);
    Block PBlock2374 = new_Block_with(empty_Array, empty_Array, PThreadedCode2375, 1, PSend2376);
    // and:. 
    Send PSend2377 = new_Send((Optr)PSend2373, SMB_and_, 1, (Optr)PBlock2374);
    Array PThreadedCode2372 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)int_192, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_send1, (Optr)PSend2373, (Optr)&t_push_closure, (Optr)PBlock2374, (Optr)&t_send1, (Optr)PSend2377, (Optr)&t_block_return);
    Block PBlock2371 = new_Block_with(empty_Array, empty_Array, PThreadedCode2372, 1, PSend2377);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend2378 = new_Send((Optr)PSend2370, SMB_or_, 1, (Optr)PBlock2371);
    SmallInt int_216 = new_SmallInt(216);
    Constant int_216_Const = new_Constant((Optr)int_216);
    // <=. 
    Send PSend2381 = new_Send((Optr)int_216_Const, SMB__lt__equals_, 1, (Optr)VAR_v_0_0);
    SmallInt int_222 = new_SmallInt(222);
    Constant int_222_Const = new_Constant((Optr)int_222);
    // <=. 
    Send PSend2384 = new_Send((Optr)VAR_v_0_0, SMB__lt__equals_, 1, (Optr)int_222_Const);
    Array PThreadedCode2383 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_push1, (Optr)int_222, (Optr)&t_send1, (Optr)PSend2384, (Optr)&t_block_return);
    Block PBlock2382 = new_Block_with(empty_Array, empty_Array, PThreadedCode2383, 1, PSend2384);
    // and:. 
    Send PSend2385 = new_Send((Optr)PSend2381, SMB_and_, 1, (Optr)PBlock2382);
    Array PThreadedCode2380 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)int_216, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_send1, (Optr)PSend2381, (Optr)&t_push_closure, (Optr)PBlock2382, (Optr)&t_send1, (Optr)PSend2385, (Optr)&t_block_return);
    Block PBlock2379 = new_Block_with(empty_Array, empty_Array, PThreadedCode2380, 1, PSend2385);
    // or:. 
    Send PSend2386 = new_Send((Optr)PSend2378, SMB_or_, 1, (Optr)PBlock2379);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    SmallInt int_32 = new_SmallInt(32);
    Symbol SMB_asSmallInt = new_Symbol(L"asSmallInt");
    // asSmallInt. 
    Send PSend2390 = new_Send((Optr)self, SMB_asSmallInt, 0);
    Constant int_32_Const = new_Constant((Optr)int_32);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend2391 = new_Send((Optr)int_32_Const, SMB__plus_, 1, (Optr)PSend2390);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2392 = new_Send((Optr)PSend2391, SMB_asCharacter, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend2393 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend2392);
    Array PThreadedCode2389 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)int_32, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2390, (Optr)&t_send1, (Optr)PSend2391, (Optr)&t_send0, (Optr)PSend2392, (Optr)&t_send1, (Optr)PSend2393, (Optr)&t_block_return);
    Block PBlock2388 = new_Block_with(empty_Array, empty_Array, PThreadedCode2389, 1, PSend2393);
    // escape:. 
    Send PSend2396 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode2395 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2396, (Optr)&t_block_return);
    Block PBlock2394 = new_Block_with(empty_Array, empty_Array, PThreadedCode2395, 1, PSend2396);
    // ifTrue:ifFalse:. 
    Send PSend2387 = new_Send((Optr)PSend2386, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock2388, (Optr)PBlock2394);
    Array PThreadedCode2363 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign2364, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2365, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)int_65, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_send1, (Optr)PSend2366, (Optr)&t_push_closure, (Optr)PBlock2367, (Optr)&t_send1, (Optr)PSend2370, (Optr)&t_push_closure, (Optr)PBlock2371, (Optr)&t_send1, (Optr)PSend2378, (Optr)&t_push_closure, (Optr)PBlock2379, (Optr)&t_send1, (Optr)PSend2386, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend2387, (Optr)PBlock2388, (Optr)PBlock2394, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock2361 = new_Block_with(PArray2362, empty_Array, PThreadedCode2363, 3, PAssign2364, PSend2387, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2397 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2361);
    Array PThreadedCode2360 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2361, (Optr)&t_send1, (Optr)PSend2397, (Optr)&t_method_return);
    Method PMethod2358 = new_Method_with(empty_Array, PArray2359, empty_Array, PThreadedCode2360, 1, PSend2397);
    
    MethodClosure MC_SMB_asLowercase = new_MethodClosure((Method)PMethod2358, Character_Class);
    store_method(Character_Class, SMB_asLowercase, MC_SMB_asLowercase);
}


static void init_SMB__gt_() {
    Symbol SMB__gt_ = new_Symbol(L">");
    Variable VAR_aCharacter_0_0 = new_Variable_named(L"aCharacter", 0);
    Array PArray2399 = new_Array_with(1, (Optr)VAR_aCharacter_0_0);
    Symbol SMB_asSmallInt = new_Symbol(L"asSmallInt");
    // asSmallInt. 
    Send PSend2401 = new_Send((Optr)self, SMB_asSmallInt, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend2402 = new_Send((Optr)VAR_aCharacter_0_0, SMB__lt_, 1, (Optr)PSend2401);
    Array PThreadedCode2400 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aCharacter_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2401, (Optr)&t_send1, (Optr)PSend2402, (Optr)&t_method_return);
    Method PMethod2398 = new_Method_with(PArray2399, empty_Array, empty_Array, PThreadedCode2400, 1, PSend2402);
    
    MethodClosure MC_SMB__gt_ = new_MethodClosure((Method)PMethod2398, Character_Class);
    store_method(Character_Class, SMB__gt_, MC_SMB__gt_);
}


static void init_SMB_asParser() {
    Symbol SMB_asParser = new_Symbol(L"asParser");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2405 = new_Send((Optr)PEGCharacterTerminal_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode2404 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGCharacterTerminal_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2405, (Optr)&t_method_return);
    Method PMethod2403 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2404, 1, PSend2405);
    
    MethodClosure MC_SMB_asParser = new_MethodClosure((Method)PMethod2403, Character_Class);
    store_method(Character_Class, SMB_asParser, MC_SMB_asParser);
}


static void init_SMB_asUppercase() {
    Symbol SMB_asUppercase = new_Symbol(L"asUppercase");
    Variable VAR_v_0_0 = new_Variable_named(L"v", 0);
    Array PArray2407 = new_Array_with(1, (Optr)VAR_v_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2410 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_charCode = new_Symbol(L"charCode");
    // charCode. 
    Send PSend2413 = new_Send((Optr)self, SMB_charCode, 0);
    Assign PAssign2412 = new_Assign((Optr)VAR_v_0_0, (Optr)PSend2413);
    SmallInt int_97 = new_SmallInt(97);
    Constant int_97_Const = new_Constant((Optr)int_97);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend2414 = new_Send((Optr)int_97_Const, SMB__lt__equals_, 1, (Optr)VAR_v_0_0);
    SmallInt int_122 = new_SmallInt(122);
    Constant int_122_Const = new_Constant((Optr)int_122);
    // <=. 
    Send PSend2417 = new_Send((Optr)VAR_v_0_0, SMB__lt__equals_, 1, (Optr)int_122_Const);
    Array PThreadedCode2416 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_push1, (Optr)int_122, (Optr)&t_send1, (Optr)PSend2417, (Optr)&t_block_return);
    Block PBlock2415 = new_Block_with(empty_Array, empty_Array, PThreadedCode2416, 1, PSend2417);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend2418 = new_Send((Optr)PSend2414, SMB_and_, 1, (Optr)PBlock2415);
    SmallInt int_224 = new_SmallInt(224);
    Constant int_224_Const = new_Constant((Optr)int_224);
    // <=. 
    Send PSend2421 = new_Send((Optr)int_224_Const, SMB__lt__equals_, 1, (Optr)VAR_v_0_0);
    SmallInt int_246 = new_SmallInt(246);
    Constant int_246_Const = new_Constant((Optr)int_246);
    // <=. 
    Send PSend2424 = new_Send((Optr)VAR_v_0_0, SMB__lt__equals_, 1, (Optr)int_246_Const);
    Array PThreadedCode2423 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_push1, (Optr)int_246, (Optr)&t_send1, (Optr)PSend2424, (Optr)&t_block_return);
    Block PBlock2422 = new_Block_with(empty_Array, empty_Array, PThreadedCode2423, 1, PSend2424);
    // and:. 
    Send PSend2425 = new_Send((Optr)PSend2421, SMB_and_, 1, (Optr)PBlock2422);
    Array PThreadedCode2420 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)int_224, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_send1, (Optr)PSend2421, (Optr)&t_push_closure, (Optr)PBlock2422, (Optr)&t_send1, (Optr)PSend2425, (Optr)&t_block_return);
    Block PBlock2419 = new_Block_with(empty_Array, empty_Array, PThreadedCode2420, 1, PSend2425);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend2426 = new_Send((Optr)PSend2418, SMB_or_, 1, (Optr)PBlock2419);
    SmallInt int_248 = new_SmallInt(248);
    Constant int_248_Const = new_Constant((Optr)int_248);
    // <=. 
    Send PSend2429 = new_Send((Optr)int_248_Const, SMB__lt__equals_, 1, (Optr)VAR_v_0_0);
    SmallInt int_254 = new_SmallInt(254);
    Constant int_254_Const = new_Constant((Optr)int_254);
    // <=. 
    Send PSend2432 = new_Send((Optr)VAR_v_0_0, SMB__lt__equals_, 1, (Optr)int_254_Const);
    Array PThreadedCode2431 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_push1, (Optr)int_254, (Optr)&t_send1, (Optr)PSend2432, (Optr)&t_block_return);
    Block PBlock2430 = new_Block_with(empty_Array, empty_Array, PThreadedCode2431, 1, PSend2432);
    // and:. 
    Send PSend2433 = new_Send((Optr)PSend2429, SMB_and_, 1, (Optr)PBlock2430);
    Array PThreadedCode2428 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)int_248, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_send1, (Optr)PSend2429, (Optr)&t_push_closure, (Optr)PBlock2430, (Optr)&t_send1, (Optr)PSend2433, (Optr)&t_block_return);
    Block PBlock2427 = new_Block_with(empty_Array, empty_Array, PThreadedCode2428, 1, PSend2433);
    // or:. 
    Send PSend2434 = new_Send((Optr)PSend2426, SMB_or_, 1, (Optr)PBlock2427);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    SmallInt int_n32 = new_SmallInt(-32);
    Symbol SMB_asSmallInt = new_Symbol(L"asSmallInt");
    // asSmallInt. 
    Send PSend2438 = new_Send((Optr)self, SMB_asSmallInt, 0);
    Constant int_n32_Const = new_Constant((Optr)int_n32);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend2439 = new_Send((Optr)int_n32_Const, SMB__plus_, 1, (Optr)PSend2438);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2440 = new_Send((Optr)PSend2439, SMB_asCharacter, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend2441 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend2440);
    Array PThreadedCode2437 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)int_n32, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2438, (Optr)&t_send1, (Optr)PSend2439, (Optr)&t_send0, (Optr)PSend2440, (Optr)&t_send1, (Optr)PSend2441, (Optr)&t_block_return);
    Block PBlock2436 = new_Block_with(empty_Array, empty_Array, PThreadedCode2437, 1, PSend2441);
    // escape:. 
    Send PSend2444 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode2443 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2444, (Optr)&t_block_return);
    Block PBlock2442 = new_Block_with(empty_Array, empty_Array, PThreadedCode2443, 1, PSend2444);
    // ifTrue:ifFalse:. 
    Send PSend2435 = new_Send((Optr)PSend2434, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock2436, (Optr)PBlock2442);
    Array PThreadedCode2411 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign2412, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2413, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)int_97, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_send1, (Optr)PSend2414, (Optr)&t_push_closure, (Optr)PBlock2415, (Optr)&t_send1, (Optr)PSend2418, (Optr)&t_push_closure, (Optr)PBlock2419, (Optr)&t_send1, (Optr)PSend2426, (Optr)&t_push_closure, (Optr)PBlock2427, (Optr)&t_send1, (Optr)PSend2434, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend2435, (Optr)PBlock2436, (Optr)PBlock2442, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock2409 = new_Block_with(PArray2410, empty_Array, PThreadedCode2411, 3, PAssign2412, PSend2435, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2445 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2409);
    Array PThreadedCode2408 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2409, (Optr)&t_send1, (Optr)PSend2445, (Optr)&t_method_return);
    Method PMethod2406 = new_Method_with(empty_Array, PArray2407, empty_Array, PThreadedCode2408, 1, PSend2445);
    
    MethodClosure MC_SMB_asUppercase = new_MethodClosure((Method)PMethod2406, Character_Class);
    store_method(Character_Class, SMB_asUppercase, MC_SMB_asUppercase);
}


static void init_SMB__gt__equals_() {
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Variable VAR_aCharacter_0_0 = new_Variable_named(L"aCharacter", 0);
    Array PArray2447 = new_Array_with(1, (Optr)VAR_aCharacter_0_0);
    Symbol SMB_asSmallInt = new_Symbol(L"asSmallInt");
    // asSmallInt. 
    Send PSend2449 = new_Send((Optr)self, SMB_asSmallInt, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend2450 = new_Send((Optr)VAR_aCharacter_0_0, SMB__lt__equals_, 1, (Optr)PSend2449);
    Array PThreadedCode2448 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aCharacter_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2449, (Optr)&t_send1, (Optr)PSend2450, (Optr)&t_method_return);
    Method PMethod2446 = new_Method_with(PArray2447, empty_Array, empty_Array, PThreadedCode2448, 1, PSend2450);
    
    MethodClosure MC_SMB__gt__equals_ = new_MethodClosure((Method)PMethod2446, Character_Class);
    store_method(Character_Class, SMB__gt__equals_, MC_SMB__gt__equals_);
}


static void init_SMB_min_() {
    Symbol SMB_min_ = new_Symbol(L"min:");
    Variable VAR_aMagnitude_0_0 = new_Variable_named(L"aMagnitude", 0);
    Array PArray2452 = new_Array_with(1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend2454 = new_Send((Optr)self, SMB__lt_, 1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode2457 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_self);
    Block PBlock2456 = new_Block_with(empty_Array, empty_Array, PThreadedCode2457, 1, self);
    Array PThreadedCode2459 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_aMagnitude_0_0, (Optr)&t_block_return);
    Block PBlock2458 = new_Block_with(empty_Array, empty_Array, PThreadedCode2459, 1, VAR_aMagnitude_0_0);
    // ifTrue:ifFalse:. 
    Send PSend2455 = new_Send((Optr)PSend2454, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock2456, (Optr)PBlock2458);
    Array PThreadedCode2453 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMagnitude_0_0, (Optr)&t_send1, (Optr)PSend2454, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend2455, (Optr)PBlock2456, (Optr)PBlock2458, (Optr)&t_method_return);
    Method PMethod2451 = new_Method_with(PArray2452, empty_Array, empty_Array, PThreadedCode2453, 1, PSend2455);
    
    MethodClosure MC_SMB_min_ = new_MethodClosure((Method)PMethod2451, Character_Class);
    store_method(Character_Class, SMB_min_, MC_SMB_min_);
}


static void init_SMB__lt_() {
    Symbol SMB__lt_ = new_Symbol(L"<");
    Variable VAR_aCharacter_0_0 = new_Variable_named(L"aCharacter", 0);
    Array PArray2461 = new_Array_with(1, (Optr)VAR_aCharacter_0_0);
    Symbol SMB_asSmallInt = new_Symbol(L"asSmallInt");
    // asSmallInt. 
    Send PSend2463 = new_Send((Optr)self, SMB_asSmallInt, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend2464 = new_Send((Optr)VAR_aCharacter_0_0, SMB__gt_, 1, (Optr)PSend2463);
    Array PThreadedCode2462 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aCharacter_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2463, (Optr)&t_send1, (Optr)PSend2464, (Optr)&t_method_return);
    Method PMethod2460 = new_Method_with(PArray2461, empty_Array, empty_Array, PThreadedCode2462, 1, PSend2464);
    
    MethodClosure MC_SMB__lt_ = new_MethodClosure((Method)PMethod2460, Character_Class);
    store_method(Character_Class, SMB__lt_, MC_SMB__lt_);
}


static void init_SMB_asSymbol() {
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Type_minus_Character = new_Symbol(L"Type.Character");
    Annotation PAnnotation2467 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_asSymbol, (Optr)SMB_Type_minus_Character);
    Array PArray2466 = new_Array_with(1, (Optr)PAnnotation2467);
    Super PSuper2469 = new_Super(SMB_asSymbol, 0);
    Array PThreadedCode2468 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper2469, (Optr)&t_method_return);
    NativeMethod PNativeMethod2465 = new_NativeMethod_with(empty_Array, empty_Array, PArray2466, PThreadedCode2468, 1, PSuper2469);
    
    MethodClosure MC_SMB_asSymbol = new_MethodClosure((Method)PNativeMethod2465, Character_Class);
    store_method(Character_Class, SMB_asSymbol, MC_SMB_asSymbol);
}


static void init_SMB_max_() {
    Symbol SMB_max_ = new_Symbol(L"max:");
    Variable VAR_aMagnitude_0_0 = new_Variable_named(L"aMagnitude", 0);
    Array PArray2471 = new_Array_with(1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend2473 = new_Send((Optr)self, SMB__gt_, 1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode2476 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_self);
    Block PBlock2475 = new_Block_with(empty_Array, empty_Array, PThreadedCode2476, 1, self);
    Array PThreadedCode2478 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_aMagnitude_0_0, (Optr)&t_block_return);
    Block PBlock2477 = new_Block_with(empty_Array, empty_Array, PThreadedCode2478, 1, VAR_aMagnitude_0_0);
    // ifTrue:ifFalse:. 
    Send PSend2474 = new_Send((Optr)PSend2473, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock2475, (Optr)PBlock2477);
    Array PThreadedCode2472 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMagnitude_0_0, (Optr)&t_send1, (Optr)PSend2473, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend2474, (Optr)PBlock2475, (Optr)PBlock2477, (Optr)&t_method_return);
    Method PMethod2470 = new_Method_with(PArray2471, empty_Array, empty_Array, PThreadedCode2472, 1, PSend2474);
    
    MethodClosure MC_SMB_max_ = new_MethodClosure((Method)PMethod2470, Character_Class);
    store_method(Character_Class, SMB_max_, MC_SMB_max_);
}


static void init_SMB_split_() {
    Symbol SMB_split_ = new_Symbol(L"split:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray2480 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Variable VAR_current_0_2 = new_Variable_named(L"current", 0);
    Array PArray2481 = new_Array_with(2, (Optr)VAR_result_0_1, (Optr)VAR_current_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend2484 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign2483 = new_Assign((Optr)VAR_result_0_1, (Optr)PSend2484);
    // new. 
    Send PSend2486 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign2485 = new_Assign((Optr)VAR_current_0_2, (Optr)PSend2486);
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray2488 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend2490 = new_Send((Optr)VAR_c_1_0, SMB__equals_, 1, (Optr)self);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    // newFrom:. 
    Send PSend2494 = new_Send((Optr)String_classReference, SMB_newFrom_, 1, (Optr)VAR_current_0_2);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend2495 = new_Send((Optr)VAR_result_0_1, SMB_add_, 1, (Optr)PSend2494);
    Array PThreadedCode2493 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_variable, (Optr)VAR_current_0_2, (Optr)&t_send1, (Optr)PSend2494, (Optr)&t_send1, (Optr)PSend2495, (Optr)&t_block_return);
    Block PBlock2492 = new_Block_with(empty_Array, empty_Array, PThreadedCode2493, 1, PSend2495);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend2498 = new_Send((Optr)VAR_current_0_2, SMB_addLast_, 1, (Optr)VAR_c_1_0);
    Array PThreadedCode2497 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_current_0_2, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_send1, (Optr)PSend2498, (Optr)&t_block_return);
    Block PBlock2496 = new_Block_with(empty_Array, empty_Array, PThreadedCode2497, 1, PSend2498);
    // ifTrue:ifFalse:. 
    Send PSend2491 = new_Send((Optr)PSend2490, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock2492, (Optr)PBlock2496);
    Array PThreadedCode2489 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2490, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend2491, (Optr)PBlock2492, (Optr)PBlock2496, (Optr)&t_method_return);
    Block PBlock2487 = new_Block_with(PArray2488, empty_Array, PThreadedCode2489, 1, PSend2491);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend2499 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock2487);
    Array PThreadedCode2482 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign2483, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend2484, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign2485, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend2486, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock2487, (Optr)&t_send1, (Optr)PSend2499, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_method_return);
    Method PMethod2479 = new_Method_with(PArray2480, PArray2481, empty_Array, PThreadedCode2482, 4, PAssign2483, PAssign2485, PSend2499, VAR_result_0_1);
    
    MethodClosure MC_SMB_split_ = new_MethodClosure((Method)PMethod2479, Character_Class);
    store_method(Character_Class, SMB_split_, MC_SMB_split_);
}


static void init_SMB_putOn_() {
    Symbol SMB_putOn_ = new_Symbol(L"putOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray2501 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend2503 = new_Send((Optr)VAR_aStream_0_0, SMB_write_, 1, (Optr)self);
    Array PThreadedCode2502 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2503, (Optr)&t_method_return);
    Method PMethod2500 = new_Method_with(PArray2501, empty_Array, empty_Array, PThreadedCode2502, 1, PSend2503);
    
    MethodClosure MC_SMB_putOn_ = new_MethodClosure((Method)PMethod2500, Character_Class);
    store_method(Character_Class, SMB_putOn_, MC_SMB_putOn_);
}


static void init_SMB_isCharacter() {
    Symbol SMB_isCharacter = new_Symbol(L"isCharacter");
    Array PThreadedCode2505 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod2504 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2505, 1, true_Const);
    
    MethodClosure MC_SMB_isCharacter = new_MethodClosure((Method)PMethod2504, Character_Class);
    store_method(Character_Class, SMB_isCharacter, MC_SMB_isCharacter);
}


static void init_SMB_asInteger() {
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_asSmallInt = new_Symbol(L"asSmallInt");
    Symbol SMB_Type_minus_Character = new_Symbol(L"Type.Character");
    Annotation PAnnotation2508 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_asSmallInt, (Optr)SMB_Type_minus_Character);
    Array PArray2507 = new_Array_with(1, (Optr)PAnnotation2508);
    Super PSuper2510 = new_Super(SMB_asSmallInt, 0);
    Array PThreadedCode2509 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper2510, (Optr)&t_method_return);
    NativeMethod PNativeMethod2506 = new_NativeMethod_with(empty_Array, empty_Array, PArray2507, PThreadedCode2509, 1, PSuper2510);
    
    MethodClosure MC_SMB_asInteger = new_MethodClosure((Method)PNativeMethod2506, Character_Class);
    store_method(Character_Class, SMB_asInteger, MC_SMB_asInteger);
}


static void init_SMB_isUppercase() {
    Symbol SMB_isUppercase = new_Symbol(L"isUppercase");
    Symbol SMB_asUppercase = new_Symbol(L"asUppercase");
    // asUppercase. 
    Send PSend2513 = new_Send((Optr)self, SMB_asUppercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend2514 = new_Send((Optr)self, SMB__equals_, 1, (Optr)PSend2513);
    Array PThreadedCode2512 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2513, (Optr)&t_send1, (Optr)PSend2514, (Optr)&t_method_return);
    Method PMethod2511 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2512, 1, PSend2514);
    
    MethodClosure MC_SMB_isUppercase = new_MethodClosure((Method)PMethod2511, Character_Class);
    store_method(Character_Class, SMB_isUppercase, MC_SMB_isUppercase);
}


static void init_SMB_asSmallInt() {
    Symbol SMB_asSmallInt = new_Symbol(L"asSmallInt");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Type_minus_Character = new_Symbol(L"Type.Character");
    Annotation PAnnotation2517 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_asSmallInt, (Optr)SMB_Type_minus_Character);
    Array PArray2516 = new_Array_with(1, (Optr)PAnnotation2517);
    Super PSuper2519 = new_Super(SMB_asSmallInt, 0);
    Array PThreadedCode2518 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper2519, (Optr)&t_method_return);
    NativeMethod PNativeMethod2515 = new_NativeMethod_with(empty_Array, empty_Array, PArray2516, PThreadedCode2518, 1, PSuper2519);
    
    MethodClosure MC_SMB_asSmallInt = new_MethodClosure((Method)PNativeMethod2515, Character_Class);
    store_method(Character_Class, SMB_asSmallInt, MC_SMB_asSmallInt);
}


static void init_SMB_charCode() {
    Symbol SMB_charCode = new_Symbol(L"charCode");
    Symbol SMB_asSmallInt = new_Symbol(L"asSmallInt");
    // asSmallInt. 
    Send PSend2522 = new_Send((Optr)self, SMB_asSmallInt, 0);
    Array PThreadedCode2521 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2522, (Optr)&t_method_return);
    Method PMethod2520 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2521, 1, PSend2522);
    
    MethodClosure MC_SMB_charCode = new_MethodClosure((Method)PMethod2520, Character_Class);
    store_method(Character_Class, SMB_charCode, MC_SMB_charCode);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray2524 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitCharacter_ = new_Symbol(L"visitCharacter:");
    // visitCharacter:. 
    Send PSend2526 = new_Send((Optr)VAR_visitor_0_0, SMB_visitCharacter_, 1, (Optr)self);
    Array PThreadedCode2525 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2526, (Optr)&t_method_return);
    Method PMethod2523 = new_Method_with(PArray2524, empty_Array, empty_Array, PThreadedCode2525, 1, PSend2526);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod2523, Character_Class);
    store_method(Character_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray2528 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Character char_2530 = new_Character(L'$');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_2530_Const = new_Constant((Optr)char_2530);
    // <<. 
    Send PSend2531 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2530_Const);
    // <<. 
    Send PSend2532 = new_Send((Optr)PSend2531, SMB__shiftLeft_, 1, (Optr)self);
    Array PThreadedCode2529 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2530, (Optr)&t_send1, (Optr)PSend2531, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2532, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod2527 = new_Method_with(PArray2528, empty_Array, empty_Array, PThreadedCode2529, 2, PSend2532, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod2527, Character_Class);
    store_method(Character_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray2534 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_asSmallInt = new_Symbol(L"asSmallInt");
    // asSmallInt. 
    Send PSend2536 = new_Send((Optr)self, SMB_asSmallInt, 0);
    // =. 
    Send PSend2537 = new_Send((Optr)VAR_other_0_0, SMB__equals_, 1, (Optr)PSend2536);
    Array PThreadedCode2535 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2536, (Optr)&t_send1, (Optr)PSend2537, (Optr)&t_method_return);
    Method PMethod2533 = new_Method_with(PArray2534, empty_Array, empty_Array, PThreadedCode2535, 1, PSend2537);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod2533, Character_Class);
    store_method(Character_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_isSeparator() {
    Symbol SMB_isSeparator = new_Symbol(L"isSeparator");
    Variable VAR_v_0_0 = new_Variable_named(L"v", 0);
    Array PArray2539 = new_Array_with(1, (Optr)VAR_v_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2542 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_charCode = new_Symbol(L"charCode");
    // charCode. 
    Send PSend2545 = new_Send((Optr)self, SMB_charCode, 0);
    Assign PAssign2544 = new_Assign((Optr)VAR_v_0_0, (Optr)PSend2545);
    SmallInt int_32 = new_SmallInt(32);
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant int_32_Const = new_Constant((Optr)int_32);
    // =. 
    Send PSend2546 = new_Send((Optr)VAR_v_0_0, SMB__equals_, 1, (Optr)int_32_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend2550 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode2549 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend2550, (Optr)&t_block_return);
    Block PBlock2548 = new_Block_with(empty_Array, empty_Array, PThreadedCode2549, 1, PSend2550);
    // ifTrue:. 
    Send PSend2547 = new_Send((Optr)PSend2546, SMB_ifTrue_, 1, (Optr)PBlock2548);
    SmallInt int_13 = new_SmallInt(13);
    Constant int_13_Const = new_Constant((Optr)int_13);
    // =. 
    Send PSend2551 = new_Send((Optr)VAR_v_0_0, SMB__equals_, 1, (Optr)int_13_Const);
    // escape:. 
    Send PSend2555 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode2554 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend2555, (Optr)&t_block_return);
    Block PBlock2553 = new_Block_with(empty_Array, empty_Array, PThreadedCode2554, 1, PSend2555);
    // ifTrue:. 
    Send PSend2552 = new_Send((Optr)PSend2551, SMB_ifTrue_, 1, (Optr)PBlock2553);
    SmallInt int_9 = new_SmallInt(9);
    Constant int_9_Const = new_Constant((Optr)int_9);
    // =. 
    Send PSend2556 = new_Send((Optr)VAR_v_0_0, SMB__equals_, 1, (Optr)int_9_Const);
    // escape:. 
    Send PSend2560 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode2559 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend2560, (Optr)&t_block_return);
    Block PBlock2558 = new_Block_with(empty_Array, empty_Array, PThreadedCode2559, 1, PSend2560);
    // ifTrue:. 
    Send PSend2557 = new_Send((Optr)PSend2556, SMB_ifTrue_, 1, (Optr)PBlock2558);
    SmallInt int_10 = new_SmallInt(10);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // =. 
    Send PSend2561 = new_Send((Optr)VAR_v_0_0, SMB__equals_, 1, (Optr)int_10_Const);
    // escape:. 
    Send PSend2565 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode2564 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend2565, (Optr)&t_block_return);
    Block PBlock2563 = new_Block_with(empty_Array, empty_Array, PThreadedCode2564, 1, PSend2565);
    // ifTrue:. 
    Send PSend2562 = new_Send((Optr)PSend2561, SMB_ifTrue_, 1, (Optr)PBlock2563);
    SmallInt int_12 = new_SmallInt(12);
    Constant int_12_Const = new_Constant((Optr)int_12);
    // =. 
    Send PSend2566 = new_Send((Optr)VAR_v_0_0, SMB__equals_, 1, (Optr)int_12_Const);
    // escape:. 
    Send PSend2570 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode2569 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend2570, (Optr)&t_block_return);
    Block PBlock2568 = new_Block_with(empty_Array, empty_Array, PThreadedCode2569, 1, PSend2570);
    // ifTrue:. 
    Send PSend2567 = new_Send((Optr)PSend2566, SMB_ifTrue_, 1, (Optr)PBlock2568);
    Array PThreadedCode2543 = instantiate_Array_with(ThreadedCode_Class, 0, 58, (Optr)&t_push1, (Optr)PAssign2544, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2545, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_push1, (Optr)int_32, (Optr)&t_send1, (Optr)PSend2546, (Optr)&t_send_ifTrue_, (Optr)PSend2547, (Optr)PBlock2548, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_push1, (Optr)int_13, (Optr)&t_send1, (Optr)PSend2551, (Optr)&t_send_ifTrue_, (Optr)PSend2552, (Optr)PBlock2553, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_push1, (Optr)int_9, (Optr)&t_send1, (Optr)PSend2556, (Optr)&t_send_ifTrue_, (Optr)PSend2557, (Optr)PBlock2558, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend2561, (Optr)&t_send_ifTrue_, (Optr)PSend2562, (Optr)PBlock2563, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend2566, (Optr)&t_send_ifTrue_, (Optr)PSend2567, (Optr)PBlock2568, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock2541 = new_Block_with(PArray2542, empty_Array, PThreadedCode2543, 7, PAssign2544, PSend2547, PSend2552, PSend2557, PSend2562, PSend2567, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2571 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2541);
    Array PThreadedCode2540 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2541, (Optr)&t_send1, (Optr)PSend2571, (Optr)&t_method_return);
    Method PMethod2538 = new_Method_with(empty_Array, PArray2539, empty_Array, PThreadedCode2540, 1, PSend2571);
    
    MethodClosure MC_SMB_isSeparator = new_MethodClosure((Method)PMethod2538, Character_Class);
    store_method(Character_Class, SMB_isSeparator, MC_SMB_isSeparator);
}


static void init_SMB__lt__equals_() {
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Variable VAR_aCharacter_0_0 = new_Variable_named(L"aCharacter", 0);
    Array PArray2573 = new_Array_with(1, (Optr)VAR_aCharacter_0_0);
    Symbol SMB_asSmallInt = new_Symbol(L"asSmallInt");
    // asSmallInt. 
    Send PSend2575 = new_Send((Optr)self, SMB_asSmallInt, 0);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    // >=. 
    Send PSend2576 = new_Send((Optr)VAR_aCharacter_0_0, SMB__gt__equals_, 1, (Optr)PSend2575);
    Array PThreadedCode2574 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aCharacter_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2575, (Optr)&t_send1, (Optr)PSend2576, (Optr)&t_method_return);
    Method PMethod2572 = new_Method_with(PArray2573, empty_Array, empty_Array, PThreadedCode2574, 1, PSend2576);
    
    MethodClosure MC_SMB__lt__equals_ = new_MethodClosure((Method)PMethod2572, Character_Class);
    store_method(Character_Class, SMB__lt__equals_, MC_SMB__lt__equals_);
}


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Type_minus_Character = new_Symbol(L"Type.Character");
    Annotation PAnnotation2579 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_asString, (Optr)SMB_Type_minus_Character);
    Array PArray2578 = new_Array_with(1, (Optr)PAnnotation2579);
    Super PSuper2581 = new_Super(SMB_asString, 0);
    Array PThreadedCode2580 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper2581, (Optr)&t_method_return);
    NativeMethod PNativeMethod2577 = new_NativeMethod_with(empty_Array, empty_Array, PArray2578, PThreadedCode2580, 1, PSuper2581);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PNativeMethod2577, Character_Class);
    store_method(Character_Class, SMB_asString, MC_SMB_asString);
}


static void init_class_SMB_arrowRight() {
    Symbol SMB_arrowRight = new_Symbol(L"arrowRight");
    SmallInt int_29 = new_SmallInt(29);
    Constant int_29_Const = new_Constant((Optr)int_29);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2584 = new_Send((Optr)int_29_Const, SMB_asCharacter, 0);
    Array PThreadedCode2583 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)int_29, (Optr)&t_send0, (Optr)PSend2584, (Optr)&t_method_return);
    Method PMethod2582 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2583, 1, PSend2584);
    
    MethodClosure MC_SMB_arrowRight = new_MethodClosure((Method)PMethod2582, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_arrowRight, MC_SMB_arrowRight);
}


static void init_class_SMB_backspace() {
    Symbol SMB_backspace = new_Symbol(L"backspace");
    SmallInt int_8 = new_SmallInt(8);
    Constant int_8_Const = new_Constant((Optr)int_8);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2587 = new_Send((Optr)int_8_Const, SMB_asCharacter, 0);
    Array PThreadedCode2586 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)int_8, (Optr)&t_send0, (Optr)PSend2587, (Optr)&t_method_return);
    Method PMethod2585 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2586, 1, PSend2587);
    
    MethodClosure MC_SMB_backspace = new_MethodClosure((Method)PMethod2585, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_backspace, MC_SMB_backspace);
}


static void init_class_SMB_tab() {
    Symbol SMB_tab = new_Symbol(L"tab");
    SmallInt int_9 = new_SmallInt(9);
    Constant int_9_Const = new_Constant((Optr)int_9);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2590 = new_Send((Optr)int_9_Const, SMB_asCharacter, 0);
    Array PThreadedCode2589 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)int_9, (Optr)&t_send0, (Optr)PSend2590, (Optr)&t_method_return);
    Method PMethod2588 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2589, 1, PSend2590);
    
    MethodClosure MC_SMB_tab = new_MethodClosure((Method)PMethod2588, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_tab, MC_SMB_tab);
}


static void init_class_SMB_lf() {
    Symbol SMB_lf = new_Symbol(L"lf");
    SmallInt int_10 = new_SmallInt(10);
    Constant int_10_Const = new_Constant((Optr)int_10);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2593 = new_Send((Optr)int_10_Const, SMB_asCharacter, 0);
    Array PThreadedCode2592 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send0, (Optr)PSend2593, (Optr)&t_method_return);
    Method PMethod2591 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2592, 1, PSend2593);
    
    MethodClosure MC_SMB_lf = new_MethodClosure((Method)PMethod2591, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_lf, MC_SMB_lf);
}


static void init_class_SMB_escape() {
    Symbol SMB_escape = new_Symbol(L"escape");
    SmallInt int_27 = new_SmallInt(27);
    Constant int_27_Const = new_Constant((Optr)int_27);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2596 = new_Send((Optr)int_27_Const, SMB_asCharacter, 0);
    Array PThreadedCode2595 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)int_27, (Optr)&t_send0, (Optr)PSend2596, (Optr)&t_method_return);
    Method PMethod2594 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2595, 1, PSend2596);
    
    MethodClosure MC_SMB_escape = new_MethodClosure((Method)PMethod2594, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_escape, MC_SMB_escape);
}


static void init_class_SMB_arrowDown() {
    Symbol SMB_arrowDown = new_Symbol(L"arrowDown");
    SmallInt int_31 = new_SmallInt(31);
    Constant int_31_Const = new_Constant((Optr)int_31);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2599 = new_Send((Optr)int_31_Const, SMB_asCharacter, 0);
    Array PThreadedCode2598 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send0, (Optr)PSend2599, (Optr)&t_method_return);
    Method PMethod2597 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2598, 1, PSend2599);
    
    MethodClosure MC_SMB_arrowDown = new_MethodClosure((Method)PMethod2597, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_arrowDown, MC_SMB_arrowDown);
}


static void init_class_SMB_end() {
    Symbol SMB_end = new_Symbol(L"end");
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2602 = new_Send((Optr)int_4_Const, SMB_asCharacter, 0);
    Array PThreadedCode2601 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send0, (Optr)PSend2602, (Optr)&t_method_return);
    Method PMethod2600 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2601, 1, PSend2602);
    
    MethodClosure MC_SMB_end = new_MethodClosure((Method)PMethod2600, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_end, MC_SMB_end);
}


static void init_class_SMB_pageUp() {
    Symbol SMB_pageUp = new_Symbol(L"pageUp");
    SmallInt int_11 = new_SmallInt(11);
    Constant int_11_Const = new_Constant((Optr)int_11);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2605 = new_Send((Optr)int_11_Const, SMB_asCharacter, 0);
    Array PThreadedCode2604 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)int_11, (Optr)&t_send0, (Optr)PSend2605, (Optr)&t_method_return);
    Method PMethod2603 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2604, 1, PSend2605);
    
    MethodClosure MC_SMB_pageUp = new_MethodClosure((Method)PMethod2603, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_pageUp, MC_SMB_pageUp);
}


static void init_class_SMB_space() {
    Symbol SMB_space = new_Symbol(L"space");
    SmallInt int_32 = new_SmallInt(32);
    Constant int_32_Const = new_Constant((Optr)int_32);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2608 = new_Send((Optr)int_32_Const, SMB_asCharacter, 0);
    Array PThreadedCode2607 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)int_32, (Optr)&t_send0, (Optr)PSend2608, (Optr)&t_method_return);
    Method PMethod2606 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2607, 1, PSend2608);
    
    MethodClosure MC_SMB_space = new_MethodClosure((Method)PMethod2606, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_space, MC_SMB_space);
}


static void init_class_SMB_insert() {
    Symbol SMB_insert = new_Symbol(L"insert");
    SmallInt int_5 = new_SmallInt(5);
    Constant int_5_Const = new_Constant((Optr)int_5);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2611 = new_Send((Optr)int_5_Const, SMB_asCharacter, 0);
    Array PThreadedCode2610 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)int_5, (Optr)&t_send0, (Optr)PSend2611, (Optr)&t_method_return);
    Method PMethod2609 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2610, 1, PSend2611);
    
    MethodClosure MC_SMB_insert = new_MethodClosure((Method)PMethod2609, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_insert, MC_SMB_insert);
}


static void init_class_SMB_arrowLeft() {
    Symbol SMB_arrowLeft = new_Symbol(L"arrowLeft");
    SmallInt int_28 = new_SmallInt(28);
    Constant int_28_Const = new_Constant((Optr)int_28);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2614 = new_Send((Optr)int_28_Const, SMB_asCharacter, 0);
    Array PThreadedCode2613 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)int_28, (Optr)&t_send0, (Optr)PSend2614, (Optr)&t_method_return);
    Method PMethod2612 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2613, 1, PSend2614);
    
    MethodClosure MC_SMB_arrowLeft = new_MethodClosure((Method)PMethod2612, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_arrowLeft, MC_SMB_arrowLeft);
}


static void init_class_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray2616 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2618 = new_Send((Optr)VAR_anInteger_0_0, SMB_asCharacter, 0);
    Array PThreadedCode2617 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send0, (Optr)PSend2618, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod2615 = new_Method_with(PArray2616, empty_Array, empty_Array, PThreadedCode2617, 2, PSend2618, self);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PMethod2615, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_value_, MC_SMB_value_);
}


static void init_class_SMB_delete() {
    Symbol SMB_delete = new_Symbol(L"delete");
    SmallInt int_127 = new_SmallInt(127);
    Constant int_127_Const = new_Constant((Optr)int_127);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2621 = new_Send((Optr)int_127_Const, SMB_asCharacter, 0);
    Array PThreadedCode2620 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)int_127, (Optr)&t_send0, (Optr)PSend2621, (Optr)&t_method_return);
    Method PMethod2619 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2620, 1, PSend2621);
    
    MethodClosure MC_SMB_delete = new_MethodClosure((Method)PMethod2619, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_delete, MC_SMB_delete);
}


static void init_class_SMB_arrowUp() {
    Symbol SMB_arrowUp = new_Symbol(L"arrowUp");
    SmallInt int_30 = new_SmallInt(30);
    Constant int_30_Const = new_Constant((Optr)int_30);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2624 = new_Send((Optr)int_30_Const, SMB_asCharacter, 0);
    Array PThreadedCode2623 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)int_30, (Optr)&t_send0, (Optr)PSend2624, (Optr)&t_method_return);
    Method PMethod2622 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2623, 1, PSend2624);
    
    MethodClosure MC_SMB_arrowUp = new_MethodClosure((Method)PMethod2622, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_arrowUp, MC_SMB_arrowUp);
}


static void init_class_SMB_home() {
    Symbol SMB_home = new_Symbol(L"home");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2627 = new_Send((Optr)int_1_Const, SMB_asCharacter, 0);
    Array PThreadedCode2626 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_1, (Optr)&t_send0, (Optr)PSend2627, (Optr)&t_method_return);
    Method PMethod2625 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2626, 1, PSend2627);
    
    MethodClosure MC_SMB_home = new_MethodClosure((Method)PMethod2625, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_home, MC_SMB_home);
}


static void init_class_SMB_pageDown() {
    Symbol SMB_pageDown = new_Symbol(L"pageDown");
    SmallInt int_12 = new_SmallInt(12);
    Constant int_12_Const = new_Constant((Optr)int_12);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2630 = new_Send((Optr)int_12_Const, SMB_asCharacter, 0);
    Array PThreadedCode2629 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send0, (Optr)PSend2630, (Optr)&t_method_return);
    Method PMethod2628 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2629, 1, PSend2630);
    
    MethodClosure MC_SMB_pageDown = new_MethodClosure((Method)PMethod2628, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_pageDown, MC_SMB_pageDown);
}


static void init_class_SMB_nbsp() {
    Symbol SMB_nbsp = new_Symbol(L"nbsp");
    SmallInt int_160 = new_SmallInt(160);
    Constant int_160_Const = new_Constant((Optr)int_160);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2633 = new_Send((Optr)int_160_Const, SMB_asCharacter, 0);
    Array PThreadedCode2632 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)int_160, (Optr)&t_send0, (Optr)PSend2633, (Optr)&t_method_return);
    Method PMethod2631 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2632, 1, PSend2633);
    
    MethodClosure MC_SMB_nbsp = new_MethodClosure((Method)PMethod2631, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_nbsp, MC_SMB_nbsp);
}


static void init_class_SMB_newPage() {
    Symbol SMB_newPage = new_Symbol(L"newPage");
    SmallInt int_12 = new_SmallInt(12);
    Constant int_12_Const = new_Constant((Optr)int_12);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2636 = new_Send((Optr)int_12_Const, SMB_asCharacter, 0);
    Array PThreadedCode2635 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send0, (Optr)PSend2636, (Optr)&t_method_return);
    Method PMethod2634 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2635, 1, PSend2636);
    
    MethodClosure MC_SMB_newPage = new_MethodClosure((Method)PMethod2634, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_newPage, MC_SMB_newPage);
}


static void init_class_SMB_cr() {
    Symbol SMB_cr = new_Symbol(L"cr");
    SmallInt int_13 = new_SmallInt(13);
    Constant int_13_Const = new_Constant((Optr)int_13);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2639 = new_Send((Optr)int_13_Const, SMB_asCharacter, 0);
    Array PThreadedCode2638 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)int_13, (Optr)&t_send0, (Optr)PSend2639, (Optr)&t_method_return);
    Method PMethod2637 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2638, 1, PSend2639);
    
    MethodClosure MC_SMB_cr = new_MethodClosure((Method)PMethod2637, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_cr, MC_SMB_cr);
}


static void init_class_SMB_enter() {
    Symbol SMB_enter = new_Symbol(L"enter");
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2642 = new_Send((Optr)int_3_Const, SMB_asCharacter, 0);
    Array PThreadedCode2641 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send0, (Optr)PSend2642, (Optr)&t_method_return);
    Method PMethod2640 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2641, 1, PSend2642);
    
    MethodClosure MC_SMB_enter = new_MethodClosure((Method)PMethod2640, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_enter, MC_SMB_enter);
}

void init_Kernel_String_Character_layout() {
    layout_Kernel_String_Character_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_String_Character_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_String_Character_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_String_Character_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_String_Character_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_String_Character_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Character = new_Symbol(L"Character");
    Character_Class = (Class)new_Class(Object_Class, layout_Kernel_String_Character_Class_class);
    Class_set_superclass(Character_Class, Object_Class);
    HEADER(Character_Class)->layout = layout_Kernel_String_Character_Class_class;
    Character_Class->name = SMB_Character;
    
}

void init_Kernel_String_Character_methods() {
    init_SMB_asCharacter();
    init_SMB_asLowercase();
    init_SMB__gt_();
    init_SMB_asParser();
    init_SMB_asUppercase();
    init_SMB__gt__equals_();
    init_SMB_min_();
    init_SMB__lt_();
    init_SMB_asSymbol();
    init_SMB_max_();
    init_SMB_split_();
    init_SMB_putOn_();
    init_SMB_isCharacter();
    init_SMB_asInteger();
    init_SMB_isUppercase();
    init_SMB_asSmallInt();
    init_SMB_charCode();
    init_SMB_accept_();
    init_SMB_printOn_();
    init_SMB__equals_();
    init_SMB_isSeparator();
    init_SMB__lt__equals_();
    init_SMB_asString();
    init_class_SMB_arrowRight();
    init_class_SMB_backspace();
    init_class_SMB_tab();
    init_class_SMB_lf();
    init_class_SMB_escape();
    init_class_SMB_arrowDown();
    init_class_SMB_end();
    init_class_SMB_pageUp();
    init_class_SMB_space();
    init_class_SMB_insert();
    init_class_SMB_arrowLeft();
    init_class_SMB_value_();
    init_class_SMB_delete();
    init_class_SMB_arrowUp();
    init_class_SMB_home();
    init_class_SMB_pageDown();
    init_class_SMB_nbsp();
    init_class_SMB_newPage();
    init_class_SMB_cr();
    init_class_SMB_enter();
    
}