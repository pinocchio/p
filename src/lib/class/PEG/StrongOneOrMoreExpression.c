#include <lib/class/PEG/StrongOneOrMoreExpression.h>


Optr layout_PEG_StrongOneOrMoreExpression_Class_class;
Optr layout_PEG_StrongOneOrMoreExpression;


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19799 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19802 = new_Array_with(1, (Optr)VAR__return__1_0);
    // parseOn:. 
    Send PSend19804 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19808 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19807 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19808, (Optr)&t_block_return);
    Block PBlock19806 = new_Block_with(empty_Array, empty_Array, PThreadedCode19807, 1, PSend19808);
    // ifFalse:. 
    Send PSend19805 = new_Send((Optr)PSend19804, SMB_ifFalse_, 1, (Optr)PBlock19806);
    // parseOn:. 
    Send PSend19811 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19810 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19811, (Optr)&t_block_return);
    Block PBlock19809 = new_Block_with(empty_Array, empty_Array, PThreadedCode19810, 1, PSend19811);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19812 = new_Send((Optr)PBlock19809, SMB_whileTrue, 0);
    Array PThreadedCode19803 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19804, (Optr)&t_send_ifFalse_, (Optr)PSend19805, (Optr)PBlock19806, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock19809, (Optr)&t_send0, (Optr)PSend19812, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19801 = new_Block_with(PArray19802, empty_Array, PThreadedCode19803, 3, PSend19805, PSend19812, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19813 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19801);
    Array PThreadedCode19800 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19801, (Optr)&t_send1, (Optr)PSend19813, (Optr)&t_method_return);
    Method PMethod19798 = new_Method_with(PArray19799, empty_Array, empty_Array, PThreadedCode19800, 1, PSend19813);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19798, PEG_StrongOneOrMoreExpression_Class);
    store_method(PEG_StrongOneOrMoreExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19815 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19818 = new_Array_with(1, (Optr)VAR__return__1_0);
    // omitMatch:. 
    Send PSend19820 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19824 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19823 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19824, (Optr)&t_block_return);
    Block PBlock19822 = new_Block_with(empty_Array, empty_Array, PThreadedCode19823, 1, PSend19824);
    // ifFalse:. 
    Send PSend19821 = new_Send((Optr)PSend19820, SMB_ifFalse_, 1, (Optr)PBlock19822);
    // omitMatch:. 
    Send PSend19827 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19826 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19827, (Optr)&t_block_return);
    Block PBlock19825 = new_Block_with(empty_Array, empty_Array, PThreadedCode19826, 1, PSend19827);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19828 = new_Send((Optr)PBlock19825, SMB_whileTrue, 0);
    Array PThreadedCode19819 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19820, (Optr)&t_send_ifFalse_, (Optr)PSend19821, (Optr)PBlock19822, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock19825, (Optr)&t_send0, (Optr)PSend19828, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19817 = new_Block_with(PArray19818, empty_Array, PThreadedCode19819, 3, PSend19821, PSend19828, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19829 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19817);
    Array PThreadedCode19816 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19817, (Optr)&t_send1, (Optr)PSend19829, (Optr)&t_method_return);
    Method PMethod19814 = new_Method_with(PArray19815, empty_Array, empty_Array, PThreadedCode19816, 1, PSend19829);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19814, PEG_StrongOneOrMoreExpression_Class);
    store_method(PEG_StrongOneOrMoreExpression_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}

void init_PEG_PEGStrongOneOrMoreExpression_layout() {
    layout_PEG_StrongOneOrMoreExpression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_StrongOneOrMoreExpression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_StrongOneOrMoreExpression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_StrongOneOrMoreExpression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_StrongOneOrMoreExpression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_StrongOneOrMoreExpression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_StrongOneOrMoreExpression = new_Symbol(L"StrongOneOrMoreExpression");
    layout_PEG_StrongOneOrMoreExpression = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PEG_StrongOneOrMoreExpression)->values[0] = slot_PEG_ZeroOrMoreExpression_child; // child 
    PEG_StrongOneOrMoreExpression_Class = (Class)new_Class(PEG_StrongZeroOrMoreExpression_Class, layout_PEG_StrongOneOrMoreExpression_Class_class);
    PEG_StrongOneOrMoreExpression_Class->layout = layout_PEG_StrongOneOrMoreExpression;
    PEG_StrongOneOrMoreExpression_Class->name = SMB_StrongOneOrMoreExpression;
    
}

void init_PEG_PEGStrongOneOrMoreExpression_methods() {
    init_SMB_parseOn_();
    init_SMB_omitMatch_();
    
}