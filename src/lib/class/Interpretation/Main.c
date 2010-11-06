#include <lib/class/Interpretation/Main.h>


Optr layout_Interpretation_Main_Class_class;
Optr slot_Interpretation_Main_args;
Optr layout_Interpretation_Main;


static void init_SMB_interpret_() {
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16429 = new_Array_with(1, (Optr)VAR_code_0_0);
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend16433 = new_Send((Optr)self, SMB_compile_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16434 = new_Send((Optr)PSend16433, SMB_selector, 0);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend16435 = new_Send((Optr)self, SMB_perform_, 1, (Optr)PSend16434);
    Array PThreadedCode16432 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16433, (Optr)&t_send0, (Optr)PSend16434, (Optr)&t_send1, (Optr)PSend16435, (Optr)&t_block_return);
    Block PBlock16431 = new_Block_with(empty_Array, empty_Array, PThreadedCode16432, 1, PSend16435);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray16437 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16439 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Symbol SMB_red = new_Symbol(L"red");
    // red. 
    Send PSend16440 = new_Send((Optr)PSend16439, SMB_red, 0);
    // stderr. 
    Send PSend16441 = new_Send((Optr)PFile_classReference, SMB_stderr, 0);
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    // warnOn:. 
    Send PSend16442 = new_Send((Optr)VAR_ex_1_0, SMB_warnOn_, 1, (Optr)PSend16441);
    // stderr. 
    Send PSend16443 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Symbol SMB_normal = new_Symbol(L"normal");
    // normal. 
    Send PSend16444 = new_Send((Optr)PSend16443, SMB_normal, 0);
    // stderr. 
    Send PSend16445 = new_Send((Optr)PFile_classReference, SMB_stderr, 0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16446 = new_Send((Optr)PSend16445, SMB_lf, 0);
    Array PThreadedCode16438 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16439, (Optr)&t_send0, (Optr)PSend16440, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ex_1_0, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend16441, (Optr)&t_send1, (Optr)PSend16442, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16443, (Optr)&t_send0, (Optr)PSend16444, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend16445, (Optr)&t_send0, (Optr)PSend16446, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_method_return);
    Block PBlock16436 = new_Block_with(PArray16437, empty_Array, PThreadedCode16438, 5, PSend16440, PSend16442, PSend16444, PSend16446, PVoid_classReference);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend16447 = new_Send((Optr)PBlock16431, SMB_on_do_, 2, (Optr)Object_classReference, (Optr)PBlock16436);
    Array PThreadedCode16430 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock16431, (Optr)&t_push_class_reference, (Optr)Object_classReference, (Optr)&t_push_closure, (Optr)PBlock16436, (Optr)&t_send2, (Optr)PSend16447, (Optr)&t_method_return);
    Method PMethod16428 = new_Method_with(PArray16429, empty_Array, empty_Array, PThreadedCode16430, 1, PSend16447);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod16428, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend16450 = new_Send((Optr)slot_Interpretation_Main_args, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_runWith_ = new_Symbol(L"runWith:");
    // runWith:. 
    Send PSend16454 = new_Send((Optr)PShell_classReference, SMB_runWith_, 1, (Optr)self);
    Array PThreadedCode16453 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PShell_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16454, (Optr)&t_block_return);
    Block PBlock16452 = new_Block_with(empty_Array, empty_Array, PThreadedCode16453, 1, PSend16454);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend16457 = new_Send((Optr)slot_Interpretation_Main_args, SMB_first, 0);
    Symbol SMB_interpretFile_ = new_Symbol(L"interpretFile:");
    // interpretFile:. 
    Send PSend16458 = new_Send((Optr)self, SMB_interpretFile_, 1, (Optr)PSend16457);
    Array PThreadedCode16456 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Interpretation_Main_args, (Optr)&t_send0, (Optr)PSend16457, (Optr)&t_send1, (Optr)PSend16458, (Optr)&t_block_return);
    Block PBlock16455 = new_Block_with(empty_Array, empty_Array, PThreadedCode16456, 1, PSend16458);
    // ifTrue:ifFalse:. 
    Send PSend16451 = new_Send((Optr)PSend16450, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock16452, (Optr)PBlock16455);
    Array PThreadedCode16449 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Interpretation_Main_args, (Optr)&t_send0, (Optr)PSend16450, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend16451, (Optr)PBlock16452, (Optr)PBlock16455, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16448 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16449, 2, PSend16451, self);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod16448, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_interpretFile_() {
    Symbol SMB_interpretFile_ = new_Symbol(L"interpretFile:");
    Variable VAR_filename_0_0 = new_Variable_named(L"filename", 0);
    Array PArray16460 = new_Array_with(1, (Optr)VAR_filename_0_0);
    Symbol SMB_readAllFrom_ = new_Symbol(L"readAllFrom:");
    // readAllFrom:. 
    Send PSend16462 = new_Send((Optr)PReadFile_classReference, SMB_readAllFrom_, 1, (Optr)VAR_filename_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    // interpret:. 
    Send PSend16463 = new_Send((Optr)self, SMB_interpret_, 1, (Optr)PSend16462);
    Array PThreadedCode16461 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PReadFile_classReference, (Optr)&t_push_variable, (Optr)VAR_filename_0_0, (Optr)&t_send1, (Optr)PSend16462, (Optr)&t_send1, (Optr)PSend16463, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16459 = new_Method_with(PArray16460, empty_Array, empty_Array, PThreadedCode16461, 2, PSend16463, self);
    
    MethodClosure MC_SMB_interpretFile_ = new_MethodClosure((Method)PMethod16459, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_interpretFile_, MC_SMB_interpretFile_);
}


static void init_SMB_args_() {
    Symbol SMB_args_ = new_Symbol(L"args:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray16465 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign16467 = new_Assign((Optr)slot_Interpretation_Main_args, (Optr)VAR_anObject_0_0);
    Array PThreadedCode16466 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign16467, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16464 = new_Method_with(PArray16465, empty_Array, empty_Array, PThreadedCode16466, 2, PAssign16467, self);
    
    MethodClosure MC_SMB_args_ = new_MethodClosure((Method)PMethod16464, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_args_, MC_SMB_args_);
}


static void init_SMB_args() {
    Symbol SMB_args = new_Symbol(L"args");
    Array PThreadedCode16469 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Interpretation_Main_args, (Optr)&t_method_return);
    Method PMethod16468 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16469, 1, slot_Interpretation_Main_args);
    
    MethodClosure MC_SMB_args = new_MethodClosure((Method)PMethod16468, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_args, MC_SMB_args);
}


static void init_SMB_compile_() {
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16471 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_methodString_0_1 = new_Variable_named(L"methodString", 0);
    Variable VAR_method_0_2 = new_Variable_named(L"method", 0);
    Array PArray16472 = new_Array_with(2, (Optr)VAR_methodString_0_1, (Optr)VAR_method_0_2);
    String string_16478 = new_String(L"DoIt ^[");
    Constant string_16478_Const = new_Constant((Optr)string_16478);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16480 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend16479 = new_Send((Optr)PSend16480, SMB_asString, 0);
    // ,. 
    Send PSend16477 = new_Send((Optr)string_16478_Const, SMB__append_, 1, (Optr)PSend16479);
    // ,. 
    Send PSend16476 = new_Send((Optr)PSend16477, SMB__append_, 1, (Optr)VAR_code_0_0);
    String string_16481 = new_String(L"] value");
    Constant string_16481_Const = new_Constant((Optr)string_16481);
    // ,. 
    Send PSend16475 = new_Send((Optr)PSend16476, SMB__append_, 1, (Optr)string_16481_Const);
    Assign PAssign16474 = new_Assign((Optr)VAR_methodString_0_1, (Optr)PSend16475);
    Symbol SMB_compile_on_ = new_Symbol(L"compile:on:");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16484 = new_Send((Optr)self, SMB_class, 0);
    // compile:on:. 
    Send PSend16483 = new_Send((Optr)PCompiler_classReference, SMB_compile_on_, 2, (Optr)VAR_methodString_0_1, (Optr)PSend16484);
    Assign PAssign16482 = new_Assign((Optr)VAR_method_0_2, (Optr)PSend16483);
    // class. 
    Send PSend16485 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_methods = new_Symbol(L"methods");
    // methods. 
    Send PSend16486 = new_Send((Optr)PSend16485, SMB_methods, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16487 = new_Send((Optr)VAR_method_0_2, SMB_selector, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16488 = new_Send((Optr)PSend16486, SMB_at_put_, 2, (Optr)PSend16487, (Optr)VAR_method_0_2);
    Array PThreadedCode16473 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign16474, (Optr)&t_push1, (Optr)string_16478, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend16480, (Optr)&t_send0, (Optr)PSend16479, (Optr)&t_send1, (Optr)PSend16477, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16476, (Optr)&t_push1, (Optr)string_16481, (Optr)&t_send1, (Optr)PSend16475, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16482, (Optr)&t_push_class_reference, (Optr)PCompiler_classReference, (Optr)&t_push_variable, (Optr)VAR_methodString_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16484, (Optr)&t_send2, (Optr)PSend16483, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16485, (Optr)&t_send0, (Optr)PSend16486, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send0, (Optr)PSend16487, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send2, (Optr)PSend16488, (Optr)&t_method_return);
    Method PMethod16470 = new_Method_with(PArray16471, PArray16472, empty_Array, PThreadedCode16473, 3, PAssign16474, PAssign16482, PSend16488);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod16470, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_compile_, MC_SMB_compile_);
}


static void init_class_SMB_main_() {
    Symbol SMB_main_ = new_Symbol(L"main:");
    Variable VAR_args_0_0 = new_Variable_named(L"args", 0);
    Array PArray16490 = new_Array_with(1, (Optr)VAR_args_0_0);
    Variable VAR_interpreter_0_1 = new_Variable_named(L"interpreter", 0);
    Array PArray16491 = new_Array_with(1, (Optr)VAR_interpreter_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16495 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_args_ = new_Symbol(L"args:");
    // args:. 
    Send PSend16494 = new_Send((Optr)PSend16495, SMB_args_, 1, (Optr)VAR_args_0_0);
    Assign PAssign16493 = new_Assign((Optr)VAR_interpreter_0_1, (Optr)PSend16494);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend16496 = new_Send((Optr)VAR_interpreter_0_1, SMB_run, 0);
    Array PThreadedCode16492 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign16493, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16495, (Optr)&t_push_variable, (Optr)VAR_args_0_0, (Optr)&t_send1, (Optr)PSend16494, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_interpreter_0_1, (Optr)&t_send0, (Optr)PSend16496, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16489 = new_Method_with(PArray16490, PArray16491, empty_Array, PThreadedCode16492, 3, PAssign16493, PSend16496, self);
    
    MethodClosure MC_SMB_main_ = new_MethodClosure((Method)PMethod16489, HEADER(Interpretation_Main_Class));
    store_method(HEADER(Interpretation_Main_Class), SMB_main_, MC_SMB_main_);
}

void init_Interpretation_PMain_layout() {
    layout_Interpretation_Main_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Interpretation_Main_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Interpretation_Main_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Interpretation_Main_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Interpretation_Main_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Interpretation_Main_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Main = new_Symbol(L"Main");
    slot_Interpretation_Main_args = (Optr)new_Slot(2, L"args");
    layout_Interpretation_Main = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Interpretation_Main)->values[0] = slot_Interpretation_Interpreter_context; // context 
    ((Array)layout_Interpretation_Main)->values[1] = slot_Interpretation_Interpreter_nextInterpreter; // nextInterpreter 
    ((Array)layout_Interpretation_Main)->values[2] = slot_Interpretation_Main_args; // args 
    Interpretation_Main_Class = (Class)new_Class(Interpretation_Interpreter_Class, layout_Interpretation_Main_Class_class);
    Interpretation_Main_Class->layout = layout_Interpretation_Main;
    Interpretation_Main_Class->name = SMB_Main;
    
}

void init_Interpretation_PMain_methods() {
    init_SMB_interpret_();
    init_SMB_run();
    init_SMB_interpretFile_();
    init_SMB_args_();
    init_SMB_args();
    init_SMB_compile_();
    init_class_SMB_main_();
    
}