#include <lib/class/Interpretation/Main.h>


Optr layout_Interpretation_Main_Class_class;
Optr slot_Interpretation_Main_args;
Optr layout_Interpretation_Main;


static void init_SMB_interpret_() {
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16345 = new_Array_with(1, (Optr)VAR_code_0_0);
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend16349 = new_Send((Optr)self, SMB_compile_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16350 = new_Send((Optr)PSend16349, SMB_selector, 0);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend16351 = new_Send((Optr)self, SMB_perform_, 1, (Optr)PSend16350);
    Array PThreadedCode16348 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16349, (Optr)&t_send0, (Optr)PSend16350, (Optr)&t_send1, (Optr)PSend16351, (Optr)&t_block_return);
    Block PBlock16347 = new_Block_with(empty_Array, empty_Array, PThreadedCode16348, 1, PSend16351);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray16353 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16355 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Symbol SMB_red = new_Symbol(L"red");
    // red. 
    Send PSend16356 = new_Send((Optr)PSend16355, SMB_red, 0);
    // stderr. 
    Send PSend16357 = new_Send((Optr)PFile_classReference, SMB_stderr, 0);
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    // warnOn:. 
    Send PSend16358 = new_Send((Optr)VAR_ex_1_0, SMB_warnOn_, 1, (Optr)PSend16357);
    // stderr. 
    Send PSend16359 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Symbol SMB_normal = new_Symbol(L"normal");
    // normal. 
    Send PSend16360 = new_Send((Optr)PSend16359, SMB_normal, 0);
    // stderr. 
    Send PSend16361 = new_Send((Optr)PFile_classReference, SMB_stderr, 0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16362 = new_Send((Optr)PSend16361, SMB_lf, 0);
    Array PThreadedCode16354 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16355, (Optr)&t_send0, (Optr)PSend16356, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ex_1_0, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend16357, (Optr)&t_send1, (Optr)PSend16358, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16359, (Optr)&t_send0, (Optr)PSend16360, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend16361, (Optr)&t_send0, (Optr)PSend16362, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_method_return);
    Block PBlock16352 = new_Block_with(PArray16353, empty_Array, PThreadedCode16354, 5, PSend16356, PSend16358, PSend16360, PSend16362, PVoid_classReference);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend16363 = new_Send((Optr)PBlock16347, SMB_on_do_, 2, (Optr)Object_classReference, (Optr)PBlock16352);
    Array PThreadedCode16346 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock16347, (Optr)&t_push_class_reference, (Optr)Object_classReference, (Optr)&t_push_closure, (Optr)PBlock16352, (Optr)&t_send2, (Optr)PSend16363, (Optr)&t_method_return);
    Method PMethod16344 = new_Method_with(PArray16345, empty_Array, empty_Array, PThreadedCode16346, 1, PSend16363);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod16344, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend16366 = new_Send((Optr)slot_Interpretation_Main_args, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_runWith_ = new_Symbol(L"runWith:");
    // runWith:. 
    Send PSend16370 = new_Send((Optr)PShell_classReference, SMB_runWith_, 1, (Optr)self);
    Array PThreadedCode16369 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PShell_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16370, (Optr)&t_block_return);
    Block PBlock16368 = new_Block_with(empty_Array, empty_Array, PThreadedCode16369, 1, PSend16370);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend16373 = new_Send((Optr)slot_Interpretation_Main_args, SMB_first, 0);
    Symbol SMB_interpretFile_ = new_Symbol(L"interpretFile:");
    // interpretFile:. 
    Send PSend16374 = new_Send((Optr)self, SMB_interpretFile_, 1, (Optr)PSend16373);
    Array PThreadedCode16372 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Interpretation_Main_args, (Optr)&t_send0, (Optr)PSend16373, (Optr)&t_send1, (Optr)PSend16374, (Optr)&t_block_return);
    Block PBlock16371 = new_Block_with(empty_Array, empty_Array, PThreadedCode16372, 1, PSend16374);
    // ifTrue:ifFalse:. 
    Send PSend16367 = new_Send((Optr)PSend16366, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock16368, (Optr)PBlock16371);
    Array PThreadedCode16365 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Interpretation_Main_args, (Optr)&t_send0, (Optr)PSend16366, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend16367, (Optr)PBlock16368, (Optr)PBlock16371, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16364 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16365, 2, PSend16367, self);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod16364, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_interpretFile_() {
    Symbol SMB_interpretFile_ = new_Symbol(L"interpretFile:");
    Variable VAR_filename_0_0 = new_Variable_named(L"filename", 0);
    Array PArray16376 = new_Array_with(1, (Optr)VAR_filename_0_0);
    Symbol SMB_readAllFrom_ = new_Symbol(L"readAllFrom:");
    // readAllFrom:. 
    Send PSend16378 = new_Send((Optr)PReadFile_classReference, SMB_readAllFrom_, 1, (Optr)VAR_filename_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    // interpret:. 
    Send PSend16379 = new_Send((Optr)self, SMB_interpret_, 1, (Optr)PSend16378);
    Array PThreadedCode16377 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PReadFile_classReference, (Optr)&t_push_variable, (Optr)VAR_filename_0_0, (Optr)&t_send1, (Optr)PSend16378, (Optr)&t_send1, (Optr)PSend16379, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16375 = new_Method_with(PArray16376, empty_Array, empty_Array, PThreadedCode16377, 2, PSend16379, self);
    
    MethodClosure MC_SMB_interpretFile_ = new_MethodClosure((Method)PMethod16375, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_interpretFile_, MC_SMB_interpretFile_);
}


static void init_SMB_args_() {
    Symbol SMB_args_ = new_Symbol(L"args:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray16381 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign16383 = new_Assign((Optr)slot_Interpretation_Main_args, (Optr)VAR_anObject_0_0);
    Array PThreadedCode16382 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign16383, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16380 = new_Method_with(PArray16381, empty_Array, empty_Array, PThreadedCode16382, 2, PAssign16383, self);
    
    MethodClosure MC_SMB_args_ = new_MethodClosure((Method)PMethod16380, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_args_, MC_SMB_args_);
}


static void init_SMB_args() {
    Symbol SMB_args = new_Symbol(L"args");
    Array PThreadedCode16385 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Interpretation_Main_args, (Optr)&t_method_return);
    Method PMethod16384 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16385, 1, slot_Interpretation_Main_args);
    
    MethodClosure MC_SMB_args = new_MethodClosure((Method)PMethod16384, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_args, MC_SMB_args);
}


static void init_SMB_compile_() {
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16387 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_methodString_0_1 = new_Variable_named(L"methodString", 0);
    Variable VAR_method_0_2 = new_Variable_named(L"method", 0);
    Array PArray16388 = new_Array_with(2, (Optr)VAR_methodString_0_1, (Optr)VAR_method_0_2);
    String string_16394 = new_String(L"DoIt ^[");
    Constant string_16394_Const = new_Constant((Optr)string_16394);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16396 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend16395 = new_Send((Optr)PSend16396, SMB_asString, 0);
    // ,. 
    Send PSend16393 = new_Send((Optr)string_16394_Const, SMB__append_, 1, (Optr)PSend16395);
    // ,. 
    Send PSend16392 = new_Send((Optr)PSend16393, SMB__append_, 1, (Optr)VAR_code_0_0);
    String string_16397 = new_String(L"] value");
    Constant string_16397_Const = new_Constant((Optr)string_16397);
    // ,. 
    Send PSend16391 = new_Send((Optr)PSend16392, SMB__append_, 1, (Optr)string_16397_Const);
    Assign PAssign16390 = new_Assign((Optr)VAR_methodString_0_1, (Optr)PSend16391);
    Symbol SMB_compile_on_ = new_Symbol(L"compile:on:");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16400 = new_Send((Optr)self, SMB_class, 0);
    // compile:on:. 
    Send PSend16399 = new_Send((Optr)PCompiler_classReference, SMB_compile_on_, 2, (Optr)VAR_methodString_0_1, (Optr)PSend16400);
    Assign PAssign16398 = new_Assign((Optr)VAR_method_0_2, (Optr)PSend16399);
    // class. 
    Send PSend16401 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_methods = new_Symbol(L"methods");
    // methods. 
    Send PSend16402 = new_Send((Optr)PSend16401, SMB_methods, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16403 = new_Send((Optr)VAR_method_0_2, SMB_selector, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16404 = new_Send((Optr)PSend16402, SMB_at_put_, 2, (Optr)PSend16403, (Optr)VAR_method_0_2);
    Array PThreadedCode16389 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign16390, (Optr)&t_push1, (Optr)string_16394, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend16396, (Optr)&t_send0, (Optr)PSend16395, (Optr)&t_send1, (Optr)PSend16393, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16392, (Optr)&t_push1, (Optr)string_16397, (Optr)&t_send1, (Optr)PSend16391, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16398, (Optr)&t_push_class_reference, (Optr)PCompiler_classReference, (Optr)&t_push_variable, (Optr)VAR_methodString_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16400, (Optr)&t_send2, (Optr)PSend16399, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16401, (Optr)&t_send0, (Optr)PSend16402, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send0, (Optr)PSend16403, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send2, (Optr)PSend16404, (Optr)&t_method_return);
    Method PMethod16386 = new_Method_with(PArray16387, PArray16388, empty_Array, PThreadedCode16389, 3, PAssign16390, PAssign16398, PSend16404);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod16386, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_compile_, MC_SMB_compile_);
}


static void init_class_SMB_main_() {
    Symbol SMB_main_ = new_Symbol(L"main:");
    Variable VAR_args_0_0 = new_Variable_named(L"args", 0);
    Array PArray16406 = new_Array_with(1, (Optr)VAR_args_0_0);
    Variable VAR_interpreter_0_1 = new_Variable_named(L"interpreter", 0);
    Array PArray16407 = new_Array_with(1, (Optr)VAR_interpreter_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16411 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_args_ = new_Symbol(L"args:");
    // args:. 
    Send PSend16410 = new_Send((Optr)PSend16411, SMB_args_, 1, (Optr)VAR_args_0_0);
    Assign PAssign16409 = new_Assign((Optr)VAR_interpreter_0_1, (Optr)PSend16410);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend16412 = new_Send((Optr)VAR_interpreter_0_1, SMB_run, 0);
    Array PThreadedCode16408 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign16409, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16411, (Optr)&t_push_variable, (Optr)VAR_args_0_0, (Optr)&t_send1, (Optr)PSend16410, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_interpreter_0_1, (Optr)&t_send0, (Optr)PSend16412, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16405 = new_Method_with(PArray16406, PArray16407, empty_Array, PThreadedCode16408, 3, PAssign16409, PSend16412, self);
    
    MethodClosure MC_SMB_main_ = new_MethodClosure((Method)PMethod16405, HEADER(Interpretation_Main_Class));
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