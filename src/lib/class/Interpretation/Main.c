#include <lib/class/Interpretation/Main.h>


Optr layout_Interpretation_Main_Class_class;
Optr slot_Interpretation_Main_args;
Optr layout_Interpretation_Main;


static void init_SMB_interpret_() {
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16650 = new_Array_with(1, (Optr)VAR_code_0_0);
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend16654 = new_Send((Optr)self, SMB_compile_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16655 = new_Send((Optr)PSend16654, SMB_selector, 0);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend16656 = new_Send((Optr)self, SMB_perform_, 1, (Optr)PSend16655);
    Array PThreadedCode16653 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16654, (Optr)&t_send0, (Optr)PSend16655, (Optr)&t_send1, (Optr)PSend16656, (Optr)&t_block_return);
    Block PBlock16652 = new_Block_with(empty_Array, empty_Array, PThreadedCode16653, 1, PSend16656);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray16658 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16660 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Symbol SMB_red = new_Symbol(L"red");
    // red. 
    Send PSend16661 = new_Send((Optr)PSend16660, SMB_red, 0);
    // stderr. 
    Send PSend16662 = new_Send((Optr)PFile_classReference, SMB_stderr, 0);
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    // warnOn:. 
    Send PSend16663 = new_Send((Optr)VAR_ex_1_0, SMB_warnOn_, 1, (Optr)PSend16662);
    // stderr. 
    Send PSend16664 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Symbol SMB_normal = new_Symbol(L"normal");
    // normal. 
    Send PSend16665 = new_Send((Optr)PSend16664, SMB_normal, 0);
    // stderr. 
    Send PSend16666 = new_Send((Optr)PFile_classReference, SMB_stderr, 0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16667 = new_Send((Optr)PSend16666, SMB_lf, 0);
    Array PThreadedCode16659 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16660, (Optr)&t_send0, (Optr)PSend16661, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ex_1_0, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend16662, (Optr)&t_send1, (Optr)PSend16663, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16664, (Optr)&t_send0, (Optr)PSend16665, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend16666, (Optr)&t_send0, (Optr)PSend16667, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_method_return);
    Block PBlock16657 = new_Block_with(PArray16658, empty_Array, PThreadedCode16659, 5, PSend16661, PSend16663, PSend16665, PSend16667, PVoid_classReference);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend16668 = new_Send((Optr)PBlock16652, SMB_on_do_, 2, (Optr)Object_classReference, (Optr)PBlock16657);
    Array PThreadedCode16651 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock16652, (Optr)&t_push_class_reference, (Optr)Object_classReference, (Optr)&t_push_closure, (Optr)PBlock16657, (Optr)&t_send2, (Optr)PSend16668, (Optr)&t_method_return);
    Method PMethod16649 = new_Method_with(PArray16650, empty_Array, empty_Array, PThreadedCode16651, 1, PSend16668);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod16649, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend16671 = new_Send((Optr)slot_Interpretation_Main_args, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_runWith_ = new_Symbol(L"runWith:");
    // runWith:. 
    Send PSend16675 = new_Send((Optr)PShell_classReference, SMB_runWith_, 1, (Optr)self);
    Array PThreadedCode16674 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PShell_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16675, (Optr)&t_block_return);
    Block PBlock16673 = new_Block_with(empty_Array, empty_Array, PThreadedCode16674, 1, PSend16675);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend16678 = new_Send((Optr)slot_Interpretation_Main_args, SMB_first, 0);
    Symbol SMB_interpretFile_ = new_Symbol(L"interpretFile:");
    // interpretFile:. 
    Send PSend16679 = new_Send((Optr)self, SMB_interpretFile_, 1, (Optr)PSend16678);
    Array PThreadedCode16677 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Interpretation_Main_args, (Optr)&t_send0, (Optr)PSend16678, (Optr)&t_send1, (Optr)PSend16679, (Optr)&t_block_return);
    Block PBlock16676 = new_Block_with(empty_Array, empty_Array, PThreadedCode16677, 1, PSend16679);
    // ifTrue:ifFalse:. 
    Send PSend16672 = new_Send((Optr)PSend16671, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock16673, (Optr)PBlock16676);
    Array PThreadedCode16670 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Interpretation_Main_args, (Optr)&t_send0, (Optr)PSend16671, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend16672, (Optr)PBlock16673, (Optr)PBlock16676, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16669 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16670, 2, PSend16672, self);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod16669, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_interpretFile_() {
    Symbol SMB_interpretFile_ = new_Symbol(L"interpretFile:");
    Variable VAR_filename_0_0 = new_Variable_named(L"filename", 0);
    Array PArray16681 = new_Array_with(1, (Optr)VAR_filename_0_0);
    Symbol SMB_readAllFrom_ = new_Symbol(L"readAllFrom:");
    // readAllFrom:. 
    Send PSend16683 = new_Send((Optr)PReadFile_classReference, SMB_readAllFrom_, 1, (Optr)VAR_filename_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    // interpret:. 
    Send PSend16684 = new_Send((Optr)self, SMB_interpret_, 1, (Optr)PSend16683);
    Array PThreadedCode16682 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PReadFile_classReference, (Optr)&t_push_variable, (Optr)VAR_filename_0_0, (Optr)&t_send1, (Optr)PSend16683, (Optr)&t_send1, (Optr)PSend16684, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16680 = new_Method_with(PArray16681, empty_Array, empty_Array, PThreadedCode16682, 2, PSend16684, self);
    
    MethodClosure MC_SMB_interpretFile_ = new_MethodClosure((Method)PMethod16680, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_interpretFile_, MC_SMB_interpretFile_);
}


static void init_SMB_args_() {
    Symbol SMB_args_ = new_Symbol(L"args:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray16686 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign16688 = new_Assign((Optr)slot_Interpretation_Main_args, (Optr)VAR_anObject_0_0);
    Array PThreadedCode16687 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign16688, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16685 = new_Method_with(PArray16686, empty_Array, empty_Array, PThreadedCode16687, 2, PAssign16688, self);
    
    MethodClosure MC_SMB_args_ = new_MethodClosure((Method)PMethod16685, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_args_, MC_SMB_args_);
}


static void init_SMB_args() {
    Symbol SMB_args = new_Symbol(L"args");
    Array PThreadedCode16690 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Interpretation_Main_args, (Optr)&t_method_return);
    Method PMethod16689 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16690, 1, slot_Interpretation_Main_args);
    
    MethodClosure MC_SMB_args = new_MethodClosure((Method)PMethod16689, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_args, MC_SMB_args);
}


static void init_SMB_compile_() {
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16692 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_methodString_0_1 = new_Variable_named(L"methodString", 0);
    Variable VAR_method_0_2 = new_Variable_named(L"method", 0);
    Array PArray16693 = new_Array_with(2, (Optr)VAR_methodString_0_1, (Optr)VAR_method_0_2);
    String string_16699 = new_String(L"DoIt ^[");
    Constant string_16699_Const = new_Constant((Optr)string_16699);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16701 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend16700 = new_Send((Optr)PSend16701, SMB_asString, 0);
    // ,. 
    Send PSend16698 = new_Send((Optr)string_16699_Const, SMB__append_, 1, (Optr)PSend16700);
    // ,. 
    Send PSend16697 = new_Send((Optr)PSend16698, SMB__append_, 1, (Optr)VAR_code_0_0);
    String string_16702 = new_String(L"] value");
    Constant string_16702_Const = new_Constant((Optr)string_16702);
    // ,. 
    Send PSend16696 = new_Send((Optr)PSend16697, SMB__append_, 1, (Optr)string_16702_Const);
    Assign PAssign16695 = new_Assign((Optr)VAR_methodString_0_1, (Optr)PSend16696);
    Symbol SMB_compile_on_ = new_Symbol(L"compile:on:");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16705 = new_Send((Optr)self, SMB_class, 0);
    // compile:on:. 
    Send PSend16704 = new_Send((Optr)PCompiler_classReference, SMB_compile_on_, 2, (Optr)VAR_methodString_0_1, (Optr)PSend16705);
    Assign PAssign16703 = new_Assign((Optr)VAR_method_0_2, (Optr)PSend16704);
    // class. 
    Send PSend16706 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_methods = new_Symbol(L"methods");
    // methods. 
    Send PSend16707 = new_Send((Optr)PSend16706, SMB_methods, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16708 = new_Send((Optr)VAR_method_0_2, SMB_selector, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16709 = new_Send((Optr)PSend16707, SMB_at_put_, 2, (Optr)PSend16708, (Optr)VAR_method_0_2);
    Array PThreadedCode16694 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign16695, (Optr)&t_push1, (Optr)string_16699, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend16701, (Optr)&t_send0, (Optr)PSend16700, (Optr)&t_send1, (Optr)PSend16698, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16697, (Optr)&t_push1, (Optr)string_16702, (Optr)&t_send1, (Optr)PSend16696, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16703, (Optr)&t_push_class_reference, (Optr)PCompiler_classReference, (Optr)&t_push_variable, (Optr)VAR_methodString_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16705, (Optr)&t_send2, (Optr)PSend16704, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16706, (Optr)&t_send0, (Optr)PSend16707, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send0, (Optr)PSend16708, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send2, (Optr)PSend16709, (Optr)&t_method_return);
    Method PMethod16691 = new_Method_with(PArray16692, PArray16693, empty_Array, PThreadedCode16694, 3, PAssign16695, PAssign16703, PSend16709);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod16691, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_compile_, MC_SMB_compile_);
}


static void init_class_SMB_main_() {
    Symbol SMB_main_ = new_Symbol(L"main:");
    Variable VAR_args_0_0 = new_Variable_named(L"args", 0);
    Array PArray16711 = new_Array_with(1, (Optr)VAR_args_0_0);
    Variable VAR_interpreter_0_1 = new_Variable_named(L"interpreter", 0);
    Array PArray16712 = new_Array_with(1, (Optr)VAR_interpreter_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16716 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_args_ = new_Symbol(L"args:");
    // args:. 
    Send PSend16715 = new_Send((Optr)PSend16716, SMB_args_, 1, (Optr)VAR_args_0_0);
    Assign PAssign16714 = new_Assign((Optr)VAR_interpreter_0_1, (Optr)PSend16715);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend16717 = new_Send((Optr)VAR_interpreter_0_1, SMB_run, 0);
    Array PThreadedCode16713 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign16714, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16716, (Optr)&t_push_variable, (Optr)VAR_args_0_0, (Optr)&t_send1, (Optr)PSend16715, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_interpreter_0_1, (Optr)&t_send0, (Optr)PSend16717, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16710 = new_Method_with(PArray16711, PArray16712, empty_Array, PThreadedCode16713, 3, PAssign16714, PSend16717, self);
    
    MethodClosure MC_SMB_main_ = new_MethodClosure((Method)PMethod16710, HEADER(Interpretation_Main_Class));
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