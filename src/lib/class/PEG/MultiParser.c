#include <lib/class/PEG/MultiParser.h>


Optr layout_PEG_MultiParser_Class_class;
Optr layout_PEG_MultiParser;


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend18803 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_separator = new_Symbol(L"separator");
    // separator. 
    Send PSend18802 = new_Send((Optr)PSend18803, SMB_separator, 0);
    Assign PAssign18801 = new_Assign((Optr)slot_PEG_Parser_separator, (Optr)PSend18802);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray18806 = new_Array_with(1, (Optr)VAR_result_1_0);
    Array PThreadedCode18807 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock18805 = new_Block_with(PArray18806, empty_Array, PThreadedCode18807, 0);
    Assign PAssign18804 = new_Assign((Optr)slot_PEG_Parser_semantics, (Optr)PBlock18805);
    Array PThreadedCode18800 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign18801, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18803, (Optr)&t_send0, (Optr)PSend18802, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18804, (Optr)&t_push_closure, (Optr)PBlock18805, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18799 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18800, 3, PAssign18801, PAssign18804, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod18799, PEG_MultiParser_Class);
    store_method(PEG_MultiParser_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18809 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_outputPosition_0_1 = new_Variable_named(L"outputPosition", 0);
    Variable VAR_result_0_2 = new_Variable_named(L"result", 0);
    Variable VAR_stack_0_3 = new_Variable_named(L"stack", 0);
    Array PArray18810 = new_Array_with(3, (Optr)VAR_outputPosition_0_1, (Optr)VAR_result_0_2, (Optr)VAR_stack_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18813 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend18816 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Assign PAssign18815 = new_Assign((Optr)VAR_stack_0_3, (Optr)PSend18816);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend18818 = new_Send((Optr)VAR_stack_0_3, SMB_position, 0);
    Assign PAssign18817 = new_Assign((Optr)VAR_outputPosition_0_1, (Optr)PSend18818);
    // parseOn:. 
    Send PSend18819 = new_Send((Optr)slot_PEG_Parser_expression, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18823 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18822 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18823, (Optr)&t_block_return);
    Block PBlock18821 = new_Block_with(empty_Array, empty_Array, PThreadedCode18822, 1, PSend18823);
    // ifFalse:. 
    Send PSend18820 = new_Send((Optr)PSend18819, SMB_ifFalse_, 1, (Optr)PBlock18821);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_mark_ = new_Symbol(L"mark:");
    // mark:. 
    Send PSend18826 = new_Send((Optr)VAR_stack_0_3, SMB_mark_, 1, (Optr)VAR_outputPosition_0_1);
    // value:. 
    Send PSend18825 = new_Send((Optr)slot_PEG_Parser_semantics, SMB_value_, 1, (Optr)PSend18826);
    Assign PAssign18824 = new_Assign((Optr)VAR_result_0_2, (Optr)PSend18825);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend18827 = new_Send((Optr)VAR_outputPosition_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_zapTo_ = new_Symbol(L"zapTo:");
    // zapTo:. 
    Send PSend18828 = new_Send((Optr)VAR_stack_0_3, SMB_zapTo_, 1, (Optr)PSend18827);
    Symbol SMB_poke_ = new_Symbol(L"poke:");
    // poke:. 
    Send PSend18829 = new_Send((Optr)VAR_stack_0_3, SMB_poke_, 1, (Optr)VAR_result_0_2);
    Array PThreadedCode18814 = instantiate_Array_with(ThreadedCode_Class, 0, 58, (Optr)&t_push1, (Optr)PAssign18815, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18816, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18817, (Optr)&t_push_variable, (Optr)VAR_stack_0_3, (Optr)&t_send0, (Optr)PSend18818, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_expression, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend18819, (Optr)&t_send_ifFalse_, (Optr)PSend18820, (Optr)PBlock18821, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18824, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_semantics, (Optr)&t_push_variable, (Optr)VAR_stack_0_3, (Optr)&t_push_variable, (Optr)VAR_outputPosition_0_1, (Optr)&t_send1, (Optr)PSend18826, (Optr)&t_send1, (Optr)PSend18825, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_stack_0_3, (Optr)&t_push_variable, (Optr)VAR_outputPosition_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18827, (Optr)&t_send1, (Optr)PSend18828, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_stack_0_3, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_send1, (Optr)PSend18829, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18812 = new_Block_with(PArray18813, empty_Array, PThreadedCode18814, 7, PAssign18815, PAssign18817, PSend18820, PAssign18824, PSend18828, PSend18829, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18830 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18812);
    Array PThreadedCode18811 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18812, (Optr)&t_send1, (Optr)PSend18830, (Optr)&t_method_return);
    Method PMethod18808 = new_Method_with(PArray18809, PArray18810, empty_Array, PThreadedCode18811, 1, PSend18830);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod18808, PEG_MultiParser_Class);
    store_method(PEG_MultiParser_Class, SMB_parseOn_, MC_SMB_parseOn_);
}

void init_PEG_PEGMultiParser_layout() {
    layout_PEG_MultiParser_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 8);
    ((Array)layout_PEG_MultiParser_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_MultiParser_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_MultiParser_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_MultiParser_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_MultiParser_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_PEG_MultiParser_Class_class)->values[5] = slot_PEG_Parser_Class_class_separator; // separator 
    ((Array)layout_PEG_MultiParser_Class_class)->values[6] = slot_PEG_Parser_Class_class_separators; // separators 
    ((Array)layout_PEG_MultiParser_Class_class)->values[7] = slot_PEG_Parser_Class_class_stream; // stream 
    
    Symbol  SMB_MultiParser = new_Symbol(L"MultiParser");
    layout_PEG_MultiParser = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_MultiParser)->values[0] = slot_PEG_Parser_expression; // expression 
    ((Array)layout_PEG_MultiParser)->values[1] = slot_PEG_Parser_semantics; // semantics 
    ((Array)layout_PEG_MultiParser)->values[2] = slot_PEG_Parser_scopeClass; // scopeClass 
    ((Array)layout_PEG_MultiParser)->values[3] = slot_PEG_Parser_separator; // separator 
    ((Array)layout_PEG_MultiParser)->values[4] = slot_PEG_Parser_name; // name 
    PEG_MultiParser_Class = (Class)new_Class(PEG_Parser_Class, layout_PEG_MultiParser_Class_class);
    PEG_MultiParser_Class->layout = layout_PEG_MultiParser;
    PEG_MultiParser_Class->name = SMB_MultiParser;
    
}

void init_PEG_PEGMultiParser_methods() {
    init_SMB_initialize();
    init_SMB_parseOn_();
    
}