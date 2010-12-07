#include <lib/class/PEG/StrongOneOrMoreExpression.h>


Optr layout_PEG_StrongOneOrMoreExpression_Class_class;
Optr layout_PEG_StrongOneOrMoreExpression;


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19797 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19800 = new_Array_with(1, (Optr)VAR__return__1_0);
    // parseOn:. 
    Send PSend19802 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19806 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19805 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19806, (Optr)&t_block_return);
    Block PBlock19804 = new_Block_with(empty_Array, empty_Array, PThreadedCode19805, 1, PSend19806);
    // ifFalse:. 
    Send PSend19803 = new_Send((Optr)PSend19802, SMB_ifFalse_, 1, (Optr)PBlock19804);
    // parseOn:. 
    Send PSend19809 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19808 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19809, (Optr)&t_block_return);
    Block PBlock19807 = new_Block_with(empty_Array, empty_Array, PThreadedCode19808, 1, PSend19809);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19810 = new_Send((Optr)PBlock19807, SMB_whileTrue, 0);
    Array PThreadedCode19801 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19802, (Optr)&t_send_ifFalse_, (Optr)PSend19803, (Optr)PBlock19804, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock19807, (Optr)&t_send0, (Optr)PSend19810, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19799 = new_Block_with(PArray19800, empty_Array, PThreadedCode19801, 3, PSend19803, PSend19810, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19811 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19799);
    Array PThreadedCode19798 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19799, (Optr)&t_send1, (Optr)PSend19811, (Optr)&t_method_return);
    Method PMethod19796 = new_Method_with(PArray19797, empty_Array, empty_Array, PThreadedCode19798, 1, PSend19811);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19796, PEG_StrongOneOrMoreExpression_Class);
    store_method(PEG_StrongOneOrMoreExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19813 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19816 = new_Array_with(1, (Optr)VAR__return__1_0);
    // omitMatch:. 
    Send PSend19818 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19822 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19821 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19822, (Optr)&t_block_return);
    Block PBlock19820 = new_Block_with(empty_Array, empty_Array, PThreadedCode19821, 1, PSend19822);
    // ifFalse:. 
    Send PSend19819 = new_Send((Optr)PSend19818, SMB_ifFalse_, 1, (Optr)PBlock19820);
    // omitMatch:. 
    Send PSend19825 = new_Send((Optr)slot_PEG_ZeroOrMoreExpression_child, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19824 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19825, (Optr)&t_block_return);
    Block PBlock19823 = new_Block_with(empty_Array, empty_Array, PThreadedCode19824, 1, PSend19825);
    Symbol SMB_whileTrue = new_Symbol(L"whileTrue");
    // whileTrue. 
    Send PSend19826 = new_Send((Optr)PBlock19823, SMB_whileTrue, 0);
    Array PThreadedCode19817 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_PEG_ZeroOrMoreExpression_child, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19818, (Optr)&t_send_ifFalse_, (Optr)PSend19819, (Optr)PBlock19820, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock19823, (Optr)&t_send0, (Optr)PSend19826, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19815 = new_Block_with(PArray19816, empty_Array, PThreadedCode19817, 3, PSend19819, PSend19826, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19827 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19815);
    Array PThreadedCode19814 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19815, (Optr)&t_send1, (Optr)PSend19827, (Optr)&t_method_return);
    Method PMethod19812 = new_Method_with(PArray19813, empty_Array, empty_Array, PThreadedCode19814, 1, PSend19827);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19812, PEG_StrongOneOrMoreExpression_Class);
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