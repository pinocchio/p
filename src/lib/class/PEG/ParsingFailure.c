#include <lib/class/PEG/ParsingFailure.h>


Optr layout_PEG_ParsingFailure_Class_class;
Optr slot_PEG_ParsingFailure_input;
Optr layout_PEG_ParsingFailure;


static void init_SMB_input_() {
    Symbol SMB_input_ = new_Symbol(L"input:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray18802 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign18804 = new_Assign((Optr)slot_PEG_ParsingFailure_input, (Optr)VAR_anObject_0_0);
    Array PThreadedCode18803 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign18804, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18801 = new_Method_with(PArray18802, empty_Array, empty_Array, PThreadedCode18803, 2, PAssign18804, self);
    
    MethodClosure MC_SMB_input_ = new_MethodClosure((Method)PMethod18801, PEG_ParsingFailure_Class);
    store_method(PEG_ParsingFailure_Class, SMB_input_, MC_SMB_input_);
}


static void init_SMB_warnOn_() {
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray18806 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18809 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18811 = new_Send((Optr)slot_PEG_ParsingFailure_input, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_18815 = new_String(L"Parsing failure. Expected more input at end: ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_18815_Const = new_Constant((Optr)string_18815);
    // <<. 
    Send PSend18816 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_18815_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend18817 = new_Send((Optr)slot_PEG_ParsingFailure_input, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18818 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode18814 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_18815, (Optr)&t_send1, (Optr)PSend18816, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_ParsingFailure_input, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend18817, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18818, (Optr)&t_block_return);
    Block PBlock18813 = new_Block_with(empty_Array, empty_Array, PThreadedCode18814, 3, PSend18816, PSend18817, PSend18818);
    // ifTrue:. 
    Send PSend18812 = new_Send((Optr)PSend18811, SMB_ifTrue_, 1, (Optr)PBlock18813);
    String string_18819 = new_String(L"Parsing failure at ");
    Constant string_18819_Const = new_Constant((Optr)string_18819);
    // <<. 
    Send PSend18820 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_18819_Const);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend18821 = new_Send((Optr)slot_PEG_ParsingFailure_input, SMB_position, 0);
    // <<. 
    Send PSend18822 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend18821);
    String string_18823 = new_String(L": ");
    Constant string_18823_Const = new_Constant((Optr)string_18823);
    // <<. 
    Send PSend18824 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_18823_Const);
    Symbol SMB_sample = new_Symbol(L"sample");
    // sample. 
    Send PSend18825 = new_Send((Optr)slot_PEG_ParsingFailure_input, SMB_sample, 0);
    // <<. 
    Send PSend18826 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend18825);
    Array PThreadedCode18810 = instantiate_Array_with(ThreadedCode_Class, 0, 41, (Optr)&t_push_slot, (Optr)slot_PEG_ParsingFailure_input, (Optr)&t_send0, (Optr)PSend18811, (Optr)&t_send_ifTrue_, (Optr)PSend18812, (Optr)PBlock18813, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_18819, (Optr)&t_send1, (Optr)PSend18820, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_ParsingFailure_input, (Optr)&t_send0, (Optr)PSend18821, (Optr)&t_send1, (Optr)PSend18822, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_18823, (Optr)&t_send1, (Optr)PSend18824, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_ParsingFailure_input, (Optr)&t_send0, (Optr)PSend18825, (Optr)&t_send1, (Optr)PSend18826, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18808 = new_Block_with(PArray18809, empty_Array, PThreadedCode18810, 6, PSend18812, PSend18820, PSend18822, PSend18824, PSend18826, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18827 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18808);
    Array PThreadedCode18807 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18808, (Optr)&t_send1, (Optr)PSend18827, (Optr)&t_method_return);
    Method PMethod18805 = new_Method_with(PArray18806, empty_Array, empty_Array, PThreadedCode18807, 1, PSend18827);
    
    MethodClosure MC_SMB_warnOn_ = new_MethodClosure((Method)PMethod18805, PEG_ParsingFailure_Class);
    store_method(PEG_ParsingFailure_Class, SMB_warnOn_, MC_SMB_warnOn_);
}


static void init_SMB_input() {
    Symbol SMB_input = new_Symbol(L"input");
    Array PThreadedCode18829 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_ParsingFailure_input, (Optr)&t_method_return);
    Method PMethod18828 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18829, 1, slot_PEG_ParsingFailure_input);
    
    MethodClosure MC_SMB_input = new_MethodClosure((Method)PMethod18828, PEG_ParsingFailure_Class);
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