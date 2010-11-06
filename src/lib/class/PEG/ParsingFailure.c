#include <lib/class/PEG/ParsingFailure.h>


Optr layout_PEG_ParsingFailure_Class_class;
Optr slot_PEG_ParsingFailure_input;
Optr layout_PEG_ParsingFailure;


static void init_SMB_input_() {
    Symbol SMB_input_ = new_Symbol(L"input:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray18973 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign18975 = new_Assign((Optr)slot_PEG_ParsingFailure_input, (Optr)VAR_anObject_0_0);
    Array PThreadedCode18974 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign18975, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18972 = new_Method_with(PArray18973, empty_Array, empty_Array, PThreadedCode18974, 2, PAssign18975, self);
    
    MethodClosure MC_SMB_input_ = new_MethodClosure((Method)PMethod18972, PEG_ParsingFailure_Class);
    store_method(PEG_ParsingFailure_Class, SMB_input_, MC_SMB_input_);
}


static void init_SMB_warnOn_() {
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray18977 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18980 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18982 = new_Send((Optr)slot_PEG_ParsingFailure_input, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_18986 = new_String(L"Parsing failure. Expected more input at end: ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_18986_Const = new_Constant((Optr)string_18986);
    // <<. 
    Send PSend18987 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_18986_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend18988 = new_Send((Optr)slot_PEG_ParsingFailure_input, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18989 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode18985 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_18986, (Optr)&t_send1, (Optr)PSend18987, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_ParsingFailure_input, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend18988, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18989, (Optr)&t_block_return);
    Block PBlock18984 = new_Block_with(empty_Array, empty_Array, PThreadedCode18985, 3, PSend18987, PSend18988, PSend18989);
    // ifTrue:. 
    Send PSend18983 = new_Send((Optr)PSend18982, SMB_ifTrue_, 1, (Optr)PBlock18984);
    String string_18990 = new_String(L"Parsing failure at ");
    Constant string_18990_Const = new_Constant((Optr)string_18990);
    // <<. 
    Send PSend18991 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_18990_Const);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend18992 = new_Send((Optr)slot_PEG_ParsingFailure_input, SMB_position, 0);
    // <<. 
    Send PSend18993 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend18992);
    String string_18994 = new_String(L": ");
    Constant string_18994_Const = new_Constant((Optr)string_18994);
    // <<. 
    Send PSend18995 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_18994_Const);
    Symbol SMB_sample = new_Symbol(L"sample");
    // sample. 
    Send PSend18996 = new_Send((Optr)slot_PEG_ParsingFailure_input, SMB_sample, 0);
    // <<. 
    Send PSend18997 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend18996);
    Array PThreadedCode18981 = instantiate_Array_with(ThreadedCode_Class, 0, 41, (Optr)&t_push_slot, (Optr)slot_PEG_ParsingFailure_input, (Optr)&t_send0, (Optr)PSend18982, (Optr)&t_send_ifTrue_, (Optr)PSend18983, (Optr)PBlock18984, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_18990, (Optr)&t_send1, (Optr)PSend18991, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_ParsingFailure_input, (Optr)&t_send0, (Optr)PSend18992, (Optr)&t_send1, (Optr)PSend18993, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_18994, (Optr)&t_send1, (Optr)PSend18995, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_ParsingFailure_input, (Optr)&t_send0, (Optr)PSend18996, (Optr)&t_send1, (Optr)PSend18997, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18979 = new_Block_with(PArray18980, empty_Array, PThreadedCode18981, 6, PSend18983, PSend18991, PSend18993, PSend18995, PSend18997, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18998 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18979);
    Array PThreadedCode18978 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18979, (Optr)&t_send1, (Optr)PSend18998, (Optr)&t_method_return);
    Method PMethod18976 = new_Method_with(PArray18977, empty_Array, empty_Array, PThreadedCode18978, 1, PSend18998);
    
    MethodClosure MC_SMB_warnOn_ = new_MethodClosure((Method)PMethod18976, PEG_ParsingFailure_Class);
    store_method(PEG_ParsingFailure_Class, SMB_warnOn_, MC_SMB_warnOn_);
}


static void init_SMB_input() {
    Symbol SMB_input = new_Symbol(L"input");
    Array PThreadedCode19000 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_ParsingFailure_input, (Optr)&t_method_return);
    Method PMethod18999 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19000, 1, slot_PEG_ParsingFailure_input);
    
    MethodClosure MC_SMB_input = new_MethodClosure((Method)PMethod18999, PEG_ParsingFailure_Class);
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