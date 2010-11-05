#include <lib/class/PEG/StrongZeroOrMoreExpression.h>


Optr layout_PEG_StrongZeroOrMoreExpression_Class_class;
Optr layout_PEG_StrongZeroOrMoreExpression;


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19298 = new_Array_with(1, (Optr)VAR_input_0_0);
    // parseOn:. 
    Send PSend19302 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19301 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19302, (Optr)&t_block_return);
    Block PBlock19300 = new_Block_with(empty_Array, empty_Array, PThreadedCode19301, 1, PSend19302);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19303 = new_Send((Optr)PBlock19300, SMB_whileTrue, 0);
    Array PThreadedCode19299 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_closure, (Optr)PBlock19300, (Optr)&t_send0, (Optr)PSend19303, (Optr)&t_zap, (Optr)&t_method_return_true);
    Method PMethod19297 = new_Method_with(PArray19298, empty_Array, empty_Array, PThreadedCode19299, 2, PSend19303, true_Const);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19297, PEG_StrongZeroOrMoreExpression_Class);
    store_method(PEG_StrongZeroOrMoreExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19305 = new_Array_with(1, (Optr)VAR_input_0_0);
    // omitMatch:. 
    Send PSend19309 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19308 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19309, (Optr)&t_block_return);
    Block PBlock19307 = new_Block_with(empty_Array, empty_Array, PThreadedCode19308, 1, PSend19309);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19310 = new_Send((Optr)PBlock19307, SMB_whileTrue, 0);
    Array PThreadedCode19306 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_closure, (Optr)PBlock19307, (Optr)&t_send0, (Optr)PSend19310, (Optr)&t_zap, (Optr)&t_method_return_true);
    Method PMethod19304 = new_Method_with(PArray19305, empty_Array, empty_Array, PThreadedCode19306, 2, PSend19310, true_Const);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19304, PEG_StrongZeroOrMoreExpression_Class);
    store_method(PEG_StrongZeroOrMoreExpression_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}

void init_PEG_PEGStrongZeroOrMoreExpression_layout() {
    layout_PEG_StrongZeroOrMoreExpression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_StrongZeroOrMoreExpression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_StrongZeroOrMoreExpression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_StrongZeroOrMoreExpression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_StrongZeroOrMoreExpression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_StrongZeroOrMoreExpression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_StrongZeroOrMoreExpression = new_Symbol(L"StrongZeroOrMoreExpression");
    layout_PEG_StrongZeroOrMoreExpression = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PEG_StrongZeroOrMoreExpression)->values[0] = slot_PEG_ZeroOrMoreExpression_child; // child 
    PEG_StrongZeroOrMoreExpression_Class = (Class)new_Class(PEG_ZeroOrMoreExpression_Class, layout_PEG_StrongZeroOrMoreExpression_Class_class);
    PEG_StrongZeroOrMoreExpression_Class->layout = layout_PEG_StrongZeroOrMoreExpression;
    PEG_StrongZeroOrMoreExpression_Class->name = SMB_StrongZeroOrMoreExpression;
    
}

void init_PEG_PEGStrongZeroOrMoreExpression_methods() {
    init_SMB_parseOn_();
    init_SMB_omitMatch_();
    
}