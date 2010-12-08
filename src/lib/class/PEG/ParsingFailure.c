#include <lib/class/PEG/ParsingFailure.h>


Optr layout_PEG_ParsingFailure_Class_class;
Optr slot_PEG_ParsingFailure_input;
Optr layout_PEG_ParsingFailure;


static void init_SMB_input_() {
    Symbol SMB_input_ = new_Symbol(L"input:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray19291 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign19293 = new_Assign((Optr)slot_PEG_ParsingFailure_input, (Optr)VAR_anObject_0_0);
    Array PThreadedCode19292 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign19293, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19290 = new_Method_with(PArray19291, empty_Array, empty_Array, PThreadedCode19292, 2, PAssign19293, self);
    
    MethodClosure MC_SMB_input_ = new_MethodClosure((Method)PMethod19290, PEG_ParsingFailure_Class);
    store_method(PEG_ParsingFailure_Class, SMB_input_, MC_SMB_input_);
}


static void init_SMB_warnOn_() {
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray19295 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19298 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend19300 = new_Send((Optr)slot_PEG_ParsingFailure_input, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_19304 = new_String(L"Parsing failure. Expected more input at end: ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_19304_Const = new_Constant((Optr)string_19304);
    // <<. 
    Send PSend19305 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_19304_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend19306 = new_Send((Optr)slot_PEG_ParsingFailure_input, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19307 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode19303 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_19304, (Optr)&t_send1, (Optr)PSend19305, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_ParsingFailure_input, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend19306, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend19307, (Optr)&t_block_return);
    Block PBlock19302 = new_Block_with(empty_Array, empty_Array, PThreadedCode19303, 3, PSend19305, PSend19306, PSend19307);
    // ifTrue:. 
    Send PSend19301 = new_Send((Optr)PSend19300, SMB_ifTrue_, 1, (Optr)PBlock19302);
    String string_19308 = new_String(L"Parsing failure at ");
    Constant string_19308_Const = new_Constant((Optr)string_19308);
    // <<. 
    Send PSend19309 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_19308_Const);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19310 = new_Send((Optr)slot_PEG_ParsingFailure_input, SMB_position, 0);
    // <<. 
    Send PSend19311 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend19310);
    String string_19312 = new_String(L": ");
    Constant string_19312_Const = new_Constant((Optr)string_19312);
    // <<. 
    Send PSend19313 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_19312_Const);
    Symbol SMB_sample = new_Symbol(L"sample");
    // sample. 
    Send PSend19314 = new_Send((Optr)slot_PEG_ParsingFailure_input, SMB_sample, 0);
    // <<. 
    Send PSend19315 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend19314);
    Array PThreadedCode19299 = instantiate_Array_with(ThreadedCode_Class, 0, 41, (Optr)&t_push_slot, (Optr)slot_PEG_ParsingFailure_input, (Optr)&t_send0, (Optr)PSend19300, (Optr)&t_send_ifTrue_, (Optr)PSend19301, (Optr)PBlock19302, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_19308, (Optr)&t_send1, (Optr)PSend19309, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_ParsingFailure_input, (Optr)&t_send0, (Optr)PSend19310, (Optr)&t_send1, (Optr)PSend19311, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_19312, (Optr)&t_send1, (Optr)PSend19313, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_ParsingFailure_input, (Optr)&t_send0, (Optr)PSend19314, (Optr)&t_send1, (Optr)PSend19315, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock19297 = new_Block_with(PArray19298, empty_Array, PThreadedCode19299, 6, PSend19301, PSend19309, PSend19311, PSend19313, PSend19315, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19316 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19297);
    Array PThreadedCode19296 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19297, (Optr)&t_send1, (Optr)PSend19316, (Optr)&t_method_return);
    Method PMethod19294 = new_Method_with(PArray19295, empty_Array, empty_Array, PThreadedCode19296, 1, PSend19316);
    
    MethodClosure MC_SMB_warnOn_ = new_MethodClosure((Method)PMethod19294, PEG_ParsingFailure_Class);
    store_method(PEG_ParsingFailure_Class, SMB_warnOn_, MC_SMB_warnOn_);
}


static void init_SMB_input() {
    Symbol SMB_input = new_Symbol(L"input");
    Array PThreadedCode19318 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_ParsingFailure_input, (Optr)&t_method_return);
    Method PMethod19317 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19318, 1, slot_PEG_ParsingFailure_input);
    
    MethodClosure MC_SMB_input = new_MethodClosure((Method)PMethod19317, PEG_ParsingFailure_Class);
    store_method(PEG_ParsingFailure_Class, SMB_input, MC_SMB_input);
}

void init_PEG_PEGParsingFailure_layout() {
    layout_PEG_ParsingFailure_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_ParsingFailure_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_ParsingFailure_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_ParsingFailure_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_ParsingFailure_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_ParsingFailure_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_ParsingFailure = new_Symbol(L"ParsingFailure");
    slot_PEG_ParsingFailure_input = (Optr)new_Slot(1, L"input");
    layout_PEG_ParsingFailure = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_PEG_ParsingFailure)->values[0] = slot_Kernel_Exception_Exception_environment; // environment 
    ((Array)layout_PEG_ParsingFailure)->values[1] = slot_PEG_ParsingFailure_input; // input 
    PEG_ParsingFailure_Class = (Class)new_Class(Kernel_Exception_Exception_Class, layout_PEG_ParsingFailure_Class_class);
    PEG_ParsingFailure_Class->layout = layout_PEG_ParsingFailure;
    PEG_ParsingFailure_Class->name = SMB_ParsingFailure;
    
}

void init_PEG_PEGParsingFailure_methods() {
    init_SMB_input_();
    init_SMB_warnOn_();
    init_SMB_input();
    
}