#include <lib/class/Interpretation/Main.h>


Optr layout_Interpretation_Main_Class_class;
Optr slot_Interpretation_Main_args;
Optr layout_Interpretation_Main;


static void init_SMB_interpret_() {
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16618 = new_Array_with(1, (Optr)VAR_code_0_0);
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend16622 = new_Send((Optr)self, SMB_compile_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16623 = new_Send((Optr)PSend16622, SMB_selector, 0);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend16624 = new_Send((Optr)self, SMB_perform_, 1, (Optr)PSend16623);
    Array PThreadedCode16621 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16622, (Optr)&t_send0, (Optr)PSend16623, (Optr)&t_send1, (Optr)PSend16624, (Optr)&t_block_return);
    Block PBlock16620 = new_Block_with(empty_Array, empty_Array, PThreadedCode16621, 1, PSend16624);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray16626 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16628 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Symbol SMB_red = new_Symbol(L"red");
    // red. 
    Send PSend16629 = new_Send((Optr)PSend16628, SMB_red, 0);
    // stderr. 
    Send PSend16630 = new_Send((Optr)PFile_classReference, SMB_stderr, 0);
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    // warnOn:. 
    Send PSend16631 = new_Send((Optr)VAR_ex_1_0, SMB_warnOn_, 1, (Optr)PSend16630);
    // stderr. 
    Send PSend16632 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Symbol SMB_normal = new_Symbol(L"normal");
    // normal. 
    Send PSend16633 = new_Send((Optr)PSend16632, SMB_normal, 0);
    // stderr. 
    Send PSend16634 = new_Send((Optr)PFile_classReference, SMB_stderr, 0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16635 = new_Send((Optr)PSend16634, SMB_lf, 0);
    Array PThreadedCode16627 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16628, (Optr)&t_send0, (Optr)PSend16629, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ex_1_0, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend16630, (Optr)&t_send1, (Optr)PSend16631, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16632, (Optr)&t_send0, (Optr)PSend16633, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend16634, (Optr)&t_send0, (Optr)PSend16635, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_method_return);
    Block PBlock16625 = new_Block_with(PArray16626, empty_Array, PThreadedCode16627, 5, PSend16629, PSend16631, PSend16633, PSend16635, PVoid_classReference);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend16636 = new_Send((Optr)PBlock16620, SMB_on_do_, 2, (Optr)Object_classReference, (Optr)PBlock16625);
    Array PThreadedCode16619 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock16620, (Optr)&t_push_class_reference, (Optr)Object_classReference, (Optr)&t_push_closure, (Optr)PBlock16625, (Optr)&t_send2, (Optr)PSend16636, (Optr)&t_method_return);
    Method PMethod16617 = new_Method_with(PArray16618, empty_Array, empty_Array, PThreadedCode16619, 1, PSend16636);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod16617, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend16639 = new_Send((Optr)slot_Interpretation_Main_args, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_runWith_ = new_Symbol(L"runWith:");
    // runWith:. 
    Send PSend16643 = new_Send((Optr)PShell_classReference, SMB_runWith_, 1, (Optr)self);
    Array PThreadedCode16642 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PShell_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16643, (Optr)&t_block_return);
    Block PBlock16641 = new_Block_with(empty_Array, empty_Array, PThreadedCode16642, 1, PSend16643);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend16646 = new_Send((Optr)slot_Interpretation_Main_args, SMB_first, 0);
    Symbol SMB_interpretFile_ = new_Symbol(L"interpretFile:");
    // interpretFile:. 
    Send PSend16647 = new_Send((Optr)self, SMB_interpretFile_, 1, (Optr)PSend16646);
    Array PThreadedCode16645 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Interpretation_Main_args, (Optr)&t_send0, (Optr)PSend16646, (Optr)&t_send1, (Optr)PSend16647, (Optr)&t_block_return);
    Block PBlock16644 = new_Block_with(empty_Array, empty_Array, PThreadedCode16645, 1, PSend16647);
    // ifTrue:ifFalse:. 
    Send PSend16640 = new_Send((Optr)PSend16639, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock16641, (Optr)PBlock16644);
    Array PThreadedCode16638 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Interpretation_Main_args, (Optr)&t_send0, (Optr)PSend16639, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend16640, (Optr)PBlock16641, (Optr)PBlock16644, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16637 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16638, 2, PSend16640, self);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod16637, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_interpretFile_() {
    Symbol SMB_interpretFile_ = new_Symbol(L"interpretFile:");
    Variable VAR_filename_0_0 = new_Variable_named(L"filename", 0);
    Array PArray16649 = new_Array_with(1, (Optr)VAR_filename_0_0);
    Symbol SMB_readAllFrom_ = new_Symbol(L"readAllFrom:");
    // readAllFrom:. 
    Send PSend16651 = new_Send((Optr)PReadFile_classReference, SMB_readAllFrom_, 1, (Optr)VAR_filename_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    // interpret:. 
    Send PSend16652 = new_Send((Optr)self, SMB_interpret_, 1, (Optr)PSend16651);
    Array PThreadedCode16650 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PReadFile_classReference, (Optr)&t_push_variable, (Optr)VAR_filename_0_0, (Optr)&t_send1, (Optr)PSend16651, (Optr)&t_send1, (Optr)PSend16652, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16648 = new_Method_with(PArray16649, empty_Array, empty_Array, PThreadedCode16650, 2, PSend16652, self);
    
    MethodClosure MC_SMB_interpretFile_ = new_MethodClosure((Method)PMethod16648, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_interpretFile_, MC_SMB_interpretFile_);
}


static void init_SMB_args_() {
    Symbol SMB_args_ = new_Symbol(L"args:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray16654 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign16656 = new_Assign((Optr)slot_Interpretation_Main_args, (Optr)VAR_anObject_0_0);
    Array PThreadedCode16655 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign16656, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16653 = new_Method_with(PArray16654, empty_Array, empty_Array, PThreadedCode16655, 2, PAssign16656, self);
    
    MethodClosure MC_SMB_args_ = new_MethodClosure((Method)PMethod16653, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_args_, MC_SMB_args_);
}


static void init_SMB_args() {
    Symbol SMB_args = new_Symbol(L"args");
    Array PThreadedCode16658 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Interpretation_Main_args, (Optr)&t_method_return);
    Method PMethod16657 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16658, 1, slot_Interpretation_Main_args);
    
    MethodClosure MC_SMB_args = new_MethodClosure((Method)PMethod16657, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_args, MC_SMB_args);
}


static void init_SMB_compile_() {
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16660 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_methodString_0_1 = new_Variable_named(L"methodString", 0);
    Variable VAR_method_0_2 = new_Variable_named(L"method", 0);
    Array PArray16661 = new_Array_with(2, (Optr)VAR_methodString_0_1, (Optr)VAR_method_0_2);
    String string_16667 = new_String(L"DoIt ^[");
    Constant string_16667_Const = new_Constant((Optr)string_16667);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16669 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend16668 = new_Send((Optr)PSend16669, SMB_asString, 0);
    // ,. 
    Send PSend16666 = new_Send((Optr)string_16667_Const, SMB__append_, 1, (Optr)PSend16668);
    // ,. 
    Send PSend16665 = new_Send((Optr)PSend16666, SMB__append_, 1, (Optr)VAR_code_0_0);
    String string_16670 = new_String(L"] value");
    Constant string_16670_Const = new_Constant((Optr)string_16670);
    // ,. 
    Send PSend16664 = new_Send((Optr)PSend16665, SMB__append_, 1, (Optr)string_16670_Const);
    Assign PAssign16663 = new_Assign((Optr)VAR_methodString_0_1, (Optr)PSend16664);
    Symbol SMB_compile_on_ = new_Symbol(L"compile:on:");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16673 = new_Send((Optr)self, SMB_class, 0);
    // compile:on:. 
    Send PSend16672 = new_Send((Optr)PCompiler_classReference, SMB_compile_on_, 2, (Optr)VAR_methodString_0_1, (Optr)PSend16673);
    Assign PAssign16671 = new_Assign((Optr)VAR_method_0_2, (Optr)PSend16672);
    // class. 
    Send PSend16674 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_methods = new_Symbol(L"methods");
    // methods. 
    Send PSend16675 = new_Send((Optr)PSend16674, SMB_methods, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16676 = new_Send((Optr)VAR_method_0_2, SMB_selector, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16677 = new_Send((Optr)PSend16675, SMB_at_put_, 2, (Optr)PSend16676, (Optr)VAR_method_0_2);
    Array PThreadedCode16662 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign16663, (Optr)&t_push1, (Optr)string_16667, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend16669, (Optr)&t_send0, (Optr)PSend16668, (Optr)&t_send1, (Optr)PSend16666, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16665, (Optr)&t_push1, (Optr)string_16670, (Optr)&t_send1, (Optr)PSend16664, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16671, (Optr)&t_push_class_reference, (Optr)PCompiler_classReference, (Optr)&t_push_variable, (Optr)VAR_methodString_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16673, (Optr)&t_send2, (Optr)PSend16672, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16674, (Optr)&t_send0, (Optr)PSend16675, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send0, (Optr)PSend16676, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send2, (Optr)PSend16677, (Optr)&t_method_return);
    Method PMethod16659 = new_Method_with(PArray16660, PArray16661, empty_Array, PThreadedCode16662, 3, PAssign16663, PAssign16671, PSend16677);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod16659, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_compile_, MC_SMB_compile_);
}


static void init_class_SMB_main_() {
    Symbol SMB_main_ = new_Symbol(L"main:");
    Variable VAR_args_0_0 = new_Variable_named(L"args", 0);
    Array PArray16679 = new_Array_with(1, (Optr)VAR_args_0_0);
    Variable VAR_interpreter_0_1 = new_Variable_named(L"interpreter", 0);
    Array PArray16680 = new_Array_with(1, (Optr)VAR_interpreter_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16684 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_args_ = new_Symbol(L"args:");
    // args:. 
    Send PSend16683 = new_Send((Optr)PSend16684, SMB_args_, 1, (Optr)VAR_args_0_0);
    Assign PAssign16682 = new_Assign((Optr)VAR_interpreter_0_1, (Optr)PSend16683);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend16685 = new_Send((Optr)VAR_interpreter_0_1, SMB_run, 0);
    Array PThreadedCode16681 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign16682, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16684, (Optr)&t_push_variable, (Optr)VAR_args_0_0, (Optr)&t_send1, (Optr)PSend16683, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_interpreter_0_1, (Optr)&t_send0, (Optr)PSend16685, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16678 = new_Method_with(PArray16679, PArray16680, empty_Array, PThreadedCode16681, 3, PAssign16682, PSend16685, self);
    
    MethodClosure MC_SMB_main_ = new_MethodClosure((Method)PMethod16678, HEADER(Interpretation_Main_Class));
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