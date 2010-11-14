#include <lib/class/PEG/OptionalExpression.h>


Optr layout_PEG_OptionalExpression_Class_class;
Optr slot_PEG_OptionalExpression_child;
Optr layout_PEG_OptionalExpression;


static void init_SMB_initialize_() {
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Variable VAR_expression_0_0 = new_Variable_named(L"expression", 0);
    Array PArray19852 = new_Array_with(1, (Optr)VAR_expression_0_0);
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    // asChildParser. 
    Send PSend19855 = new_Send((Optr)VAR_expression_0_0, SMB_asChildParser, 0);
    Assign PAssign19854 = new_Assign((Optr)slot_PEG_OptionalExpression_child, (Optr)PSend19855);
    Array PThreadedCode19853 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19854, (Optr)&t_push_variable, (Optr)VAR_expression_0_0, (Optr)&t_send0, (Optr)PSend19855, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19851 = new_Method_with(PArray19852, empty_Array, empty_Array, PThreadedCode19853, 2, PAssign19854, self);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod19851, PEG_OptionalExpression_Class);
    store_method(PEG_OptionalExpression_Class, SMB_initialize_, MC_SMB_initialize_);
}


static void init_SMB_optional() {
    Symbol SMB_optional = new_Symbol(L"optional");
    Array PThreadedCode19857 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod19856 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19857, 1, self);
    
    MethodClosure MC_SMB_optional = new_MethodClosure((Method)PMethod19856, PEG_OptionalExpression_Class);
    store_method(PEG_OptionalExpression_Class, SMB_optional, MC_SMB_optional);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19859 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19862 = new_Array_with(1, (Optr)VAR__return__1_0);
    // parseOn:. 
    Send PSend19864 = new_Send((Optr)slot_PEG_OptionalExpression_child, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend19868 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend19869 = new_Send((Optr)PSend19868, SMB_push_, 1, (Optr)PEGFailedOptionalResult_classReference);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19870 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19867 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19868, (Optr)&t_push_class_reference, (Optr)PEGFailedOptionalResult_classReference, (Optr)&t_send1, (Optr)PSend19869, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19870, (Optr)&t_block_return);
    Block PBlock19866 = new_Block_with(empty_Array, empty_Array, PThreadedCode19867, 2, PSend19869, PSend19870);
    // ifFalse:. 
    Send PSend19865 = new_Send((Optr)PSend19864, SMB_ifFalse_, 1, (Optr)PBlock19866);
    // stack. 
    Send PSend19871 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    // stack. 
    Send PSend19872 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend19873 = new_Send((Optr)PSend19872, SMB_peek, 0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19874 = new_Send((Optr)PEGSucceededOptionalResult_classReference, SMB_on_, 1, (Optr)PSend19873);
    Symbol SMB_poke_ = new_Symbol(L"poke:");
    // poke:. 
    Send PSend19875 = new_Send((Optr)PSend19871, SMB_poke_, 1, (Optr)PSend19874);
    Array PThreadedCode19863 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_slot, (Optr)slot_PEG_OptionalExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19864, (Optr)&t_send_ifFalse_, (Optr)PSend19865, (Optr)PBlock19866, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19871, (Optr)&t_push_class_reference, (Optr)PEGSucceededOptionalResult_classReference, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19872, (Optr)&t_send0, (Optr)PSend19873, (Optr)&t_send1, (Optr)PSend19874, (Optr)&t_send1, (Optr)PSend19875, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19861 = new_Block_with(PArray19862, empty_Array, PThreadedCode19863, 3, PSend19865, PSend19875, true_Const);
    // on:. 
    Send PSend19876 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19861);
    Array PThreadedCode19860 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19861, (Optr)&t_send1, (Optr)PSend19876, (Optr)&t_method_return);
    Method PMethod19858 = new_Method_with(PArray19859, empty_Array, empty_Array, PThreadedCode19860, 1, PSend19876);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19858, PEG_OptionalExpression_Class);
    store_method(PEG_OptionalExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19878 = new_Array_with(1, (Optr)VAR_input_0_0);
    // omitMatch:. 
    Send PSend19880 = new_Send((Optr)slot_PEG_OptionalExpression_child, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19879 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_PEG_OptionalExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19880, (Optr)&t_zap, (Optr)&t_method_return_true);
    Method PMethod19877 = new_Method_with(PArray19878, empty_Array, empty_Array, PThreadedCode19879, 2, PSend19880, true_Const);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19877, PEG_OptionalExpression_Class);
    store_method(PEG_OptionalExpression_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}

void init_PEG_PEGOptionalExpression_layout() {
    layout_PEG_OptionalExpression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_OptionalExpression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_OptionalExpression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_OptionalExpression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_OptionalExpression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_OptionalExpression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_OptionalExpression = new_Symbol(L"OptionalExpression");
    slot_PEG_OptionalExpression_child = (Optr)new_Slot(0, L"child");
    layout_PEG_OptionalExpression = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PEG_OptionalExpression)->values[0] = slot_PEG_OptionalExpression_child; // child 
    PEG_OptionalExpression_Class = (Class)new_Class(PEG_Expression_Class, layout_PEG_OptionalExpression_Class_class);
    PEG_OptionalExpression_Class->layout = layout_PEG_OptionalExpression;
    PEG_OptionalExpression_Class->name = SMB_OptionalExpression;
    
}

void init_PEG_PEGOptionalExpression_methods() {
    init_SMB_initialize_();
    init_SMB_optional();
    init_SMB_parseOn_();
    init_SMB_omitMatch_();
    
}