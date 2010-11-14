#include <lib/class/PEG/AtEnd.h>


Optr slot_PEG_AtEnd_Class_class_instance;
Optr layout_PEG_AtEnd_Class_class;


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19831 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend19833 = new_Send((Optr)VAR_input_0_0, SMB_atEnd, 0);
    Array PThreadedCode19832 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19833, (Optr)&t_method_return);
    Method PMethod19830 = new_Method_with(PArray19831, empty_Array, empty_Array, PThreadedCode19832, 1, PSend19833);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19830, PEG_AtEnd_Class);
    store_method(PEG_AtEnd_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19835 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend19837 = new_Send((Optr)VAR_input_0_0, SMB_atEnd, 0);
    Array PThreadedCode19836 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19837, (Optr)&t_method_return);
    Method PMethod19834 = new_Method_with(PArray19835, empty_Array, empty_Array, PThreadedCode19836, 1, PSend19837);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19834, PEG_AtEnd_Class);
    store_method(PEG_AtEnd_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_class_SMB_instance() {
    Symbol SMB_instance = new_Symbol(L"instance");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19841 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend19843 = new_Send((Optr)slot_PEG_AtEnd_Class_class_instance, SMB_isNil, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper19848 = new_Super(SMB_new, 0);
    Assign PAssign19847 = new_Assign((Optr)slot_PEG_AtEnd_Class_class_instance, (Optr)PSuper19848);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19849 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PAssign19847);
    Array PThreadedCode19846 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)PAssign19847, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper19848, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend19849, (Optr)&t_block_return);
    Block PBlock19845 = new_Block_with(empty_Array, empty_Array, PThreadedCode19846, 1, PSend19849);
    // ifTrue:. 
    Send PSend19844 = new_Send((Optr)PSend19843, SMB_ifTrue_, 1, (Optr)PBlock19845);
    Array PThreadedCode19842 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_PEG_AtEnd_Class_class_instance, (Optr)&t_send0, (Optr)PSend19843, (Optr)&t_send_ifTrue_, (Optr)PSend19844, (Optr)PBlock19845, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_AtEnd_Class_class_instance, (Optr)&t_method_return);
    Block PBlock19840 = new_Block_with(PArray19841, empty_Array, PThreadedCode19842, 2, PSend19844, slot_PEG_AtEnd_Class_class_instance);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19850 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19840);
    Array PThreadedCode19839 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19840, (Optr)&t_send1, (Optr)PSend19850, (Optr)&t_method_return);
    Method PMethod19838 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19839, 1, PSend19850);
    
    MethodClosure MC_SMB_instance = new_MethodClosure((Method)PMethod19838, HEADER(PEG_AtEnd_Class));
    store_method(HEADER(PEG_AtEnd_Class), SMB_instance, MC_SMB_instance);
}

void init_PEG_PEGAtEnd_layout() {
    slot_PEG_AtEnd_Class_class_instance = (Optr)new_Slot(5, L"instance");
    layout_PEG_AtEnd_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_PEG_AtEnd_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_AtEnd_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_AtEnd_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_AtEnd_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_AtEnd_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_PEG_AtEnd_Class_class)->values[5] = slot_PEG_AtEnd_Class_class_instance; // instance 
    
    Symbol  SMB_AtEnd = new_Symbol(L"AtEnd");
    PEG_AtEnd_Class = (Class)new_Class(PEG_Expression_Class, layout_PEG_AtEnd_Class_class);
    PEG_AtEnd_Class->layout = empty_object_layout;
    PEG_AtEnd_Class->name = SMB_AtEnd;
    
}

void init_PEG_PEGAtEnd_methods() {
    init_SMB_parseOn_();
    init_SMB_omitMatch_();
    init_class_SMB_instance();
    
}