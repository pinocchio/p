#include <lib/class/PEG/Block.h>


Optr layout_PEG_Block_Class_class;
Optr slot_PEG_Block_block;
Optr layout_PEG_Block;


static void init_SMB_initialize_() {
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Variable VAR_b_0_0 = new_Variable_named(L"b", 0);
    Array PArray18659 = new_Array_with(1, (Optr)VAR_b_0_0);
    Assign PAssign18661 = new_Assign((Optr)slot_PEG_Block_block, (Optr)VAR_b_0_0);
    Array PThreadedCode18660 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign18661, (Optr)&t_push_variable, (Optr)VAR_b_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18658 = new_Method_with(PArray18659, empty_Array, empty_Array, PThreadedCode18660, 2, PAssign18661, self);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod18658, PEG_Block_Class);
    store_method(PEG_Block_Class, SMB_initialize_, MC_SMB_initialize_);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18663 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend18665 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend18666 = new_Send((Optr)slot_PEG_Block_block, SMB_value_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend18667 = new_Send((Optr)PSend18665, SMB_push_, 1, (Optr)PSend18666);
    Array PThreadedCode18664 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18665, (Optr)&t_push_slot, (Optr)slot_PEG_Block_block, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend18666, (Optr)&t_send1, (Optr)PSend18667, (Optr)&t_zap, (Optr)&t_method_return_true);
    Method PMethod18662 = new_Method_with(PArray18663, empty_Array, empty_Array, PThreadedCode18664, 2, PSend18667, true_Const);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod18662, PEG_Block_Class);
    store_method(PEG_Block_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18669 = new_Array_with(1, (Optr)VAR_input_0_0);
    Array PThreadedCode18670 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod18668 = new_Method_with(PArray18669, empty_Array, empty_Array, PThreadedCode18670, 1, true_Const);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod18668, PEG_Block_Class);
    store_method(PEG_Block_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}

void init_PEG_PEGBlock_layout() {
    layout_PEG_Block_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_Block_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_Block_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_Block_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_Block_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_Block_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Block = new_Symbol(L"Block");
    slot_PEG_Block_block = (Optr)new_Slot(0, L"block");
    layout_PEG_Block = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PEG_Block)->values[0] = slot_PEG_Block_block; // block 
    PEG_Block_Class = (Class)new_Class(PEG_Expression_Class, layout_PEG_Block_Class_class);
    PEG_Block_Class->layout = layout_PEG_Block;
    PEG_Block_Class->name = SMB_Block;
    
}

void init_PEG_PEGBlock_methods() {
    init_SMB_initialize_();
    init_SMB_parseOn_();
    init_SMB_omitMatch_();
    
}