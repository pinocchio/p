#include <lib/class/PEG/MultiParser.h>


Optr layout_PEG_MultiParser_Class_class;
Optr layout_PEG_MultiParser;


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend19165 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_separator = new_Symbol(L"separator");
    // separator. 
    Send PSend19164 = new_Send((Optr)PSend19165, SMB_separator, 0);
    Assign PAssign19163 = new_Assign((Optr)slot_PEG_Parser_separator, (Optr)PSend19164);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray19168 = new_Array_with(1, (Optr)VAR_result_1_0);
    Array PThreadedCode19169 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock19167 = new_Block_with(PArray19168, empty_Array, PThreadedCode19169, 0);
    Assign PAssign19166 = new_Assign((Optr)slot_PEG_Parser_semantics, (Optr)PBlock19167);
    Array PThreadedCode19162 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign19163, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19165, (Optr)&t_send0, (Optr)PSend19164, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19166, (Optr)&t_push_closure, (Optr)PBlock19167, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19161 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19162, 3, PAssign19163, PAssign19166, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod19161, PEG_MultiParser_Class);
    store_method(PEG_MultiParser_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19171 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_outputPosition_0_1 = new_Variable_named(L"outputPosition", 0);
    Variable VAR_result_0_2 = new_Variable_named(L"result", 0);
    Variable VAR_stack_0_3 = new_Variable_named(L"stack", 0);
    Array PArray19172 = new_Array_with(3, (Optr)VAR_outputPosition_0_1, (Optr)VAR_result_0_2, (Optr)VAR_stack_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19175 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend19178 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Assign PAssign19177 = new_Assign((Optr)VAR_stack_0_3, (Optr)PSend19178);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19180 = new_Send((Optr)VAR_stack_0_3, SMB_position, 0);
    Assign PAssign19179 = new_Assign((Optr)VAR_outputPosition_0_1, (Optr)PSend19180);
    // parseOn:. 
    Send PSend19181 = new_Send((Optr)slot_PEG_Parser_expression, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19185 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19184 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19185, (Optr)&t_block_return);
    Block PBlock19183 = new_Block_with(empty_Array, empty_Array, PThreadedCode19184, 1, PSend19185);
    // ifFalse:. 
    Send PSend19182 = new_Send((Optr)PSend19181, SMB_ifFalse_, 1, (Optr)PBlock19183);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_mark_ = new_Symbol(L"mark:");
    // mark:. 
    Send PSend19188 = new_Send((Optr)VAR_stack_0_3, SMB_mark_, 1, (Optr)VAR_outputPosition_0_1);
    // value:. 
    Send PSend19187 = new_Send((Optr)slot_PEG_Parser_semantics, SMB_value_, 1, (Optr)PSend19188);
    Assign PAssign19186 = new_Assign((Optr)VAR_result_0_2, (Optr)PSend19187);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend19189 = new_Send((Optr)VAR_outputPosition_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_zapTo_ = new_Symbol(L"zapTo:");
    // zapTo:. 
    Send PSend19190 = new_Send((Optr)VAR_stack_0_3, SMB_zapTo_, 1, (Optr)PSend19189);
    Symbol SMB_poke_ = new_Symbol(L"poke:");
    // poke:. 
    Send PSend19191 = new_Send((Optr)VAR_stack_0_3, SMB_poke_, 1, (Optr)VAR_result_0_2);
    Array PThreadedCode19176 = instantiate_Array_with(ThreadedCode_Class, 0, 58, (Optr)&t_push1, (Optr)PAssign19177, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19178, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19179, (Optr)&t_push_variable, (Optr)VAR_stack_0_3, (Optr)&t_send0, (Optr)PSend19180, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_expression, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19181, (Optr)&t_send_ifFalse_, (Optr)PSend19182, (Optr)PBlock19183, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19186, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_semantics, (Optr)&t_push_variable, (Optr)VAR_stack_0_3, (Optr)&t_push_variable, (Optr)VAR_outputPosition_0_1, (Optr)&t_send1, (Optr)PSend19188, (Optr)&t_send1, (Optr)PSend19187, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_stack_0_3, (Optr)&t_push_variable, (Optr)VAR_outputPosition_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend19189, (Optr)&t_send1, (Optr)PSend19190, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_stack_0_3, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_send1, (Optr)PSend19191, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19174 = new_Block_with(PArray19175, empty_Array, PThreadedCode19176, 7, PAssign19177, PAssign19179, PSend19182, PAssign19186, PSend19190, PSend19191, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19192 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19174);
    Array PThreadedCode19173 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19174, (Optr)&t_send1, (Optr)PSend19192, (Optr)&t_method_return);
    Method PMethod19170 = new_Method_with(PArray19171, PArray19172, empty_Array, PThreadedCode19173, 1, PSend19192);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19170, PEG_MultiParser_Class);
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