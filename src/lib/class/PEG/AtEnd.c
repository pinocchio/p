#include <lib/class/PEG/AtEnd.h>


Optr slot_PEG_AtEnd_Class_class_instance;
Optr layout_PEG_AtEnd_Class_class;


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
<<<<<<< HEAD
    Array PArray19863 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend19865 = new_Send((Optr)VAR_input_0_0, SMB_atEnd, 0);
    Array PThreadedCode19864 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19865, (Optr)&t_method_return);
    Method PMethod19862 = new_Method_with(PArray19863, empty_Array, empty_Array, PThreadedCode19864, 1, PSend19865);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19862, PEG_AtEnd_Class);
=======
    Array PArray19829 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend19831 = new_Send((Optr)VAR_input_0_0, SMB_atEnd, 0);
    Array PThreadedCode19830 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19831, (Optr)&t_method_return);
    Method PMethod19828 = new_Method_with(PArray19829, empty_Array, empty_Array, PThreadedCode19830, 1, PSend19831);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19828, PEG_AtEnd_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_AtEnd_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
<<<<<<< HEAD
    Array PArray19867 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend19869 = new_Send((Optr)VAR_input_0_0, SMB_atEnd, 0);
    Array PThreadedCode19868 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19869, (Optr)&t_method_return);
    Method PMethod19866 = new_Method_with(PArray19867, empty_Array, empty_Array, PThreadedCode19868, 1, PSend19869);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19866, PEG_AtEnd_Class);
=======
    Array PArray19833 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend19835 = new_Send((Optr)VAR_input_0_0, SMB_atEnd, 0);
    Array PThreadedCode19834 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19835, (Optr)&t_method_return);
    Method PMethod19832 = new_Method_with(PArray19833, empty_Array, empty_Array, PThreadedCode19834, 1, PSend19835);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19832, PEG_AtEnd_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_AtEnd_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_class_SMB_instance() {
    Symbol SMB_instance = new_Symbol(L"instance");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
<<<<<<< HEAD
    Array PArray19873 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend19875 = new_Send((Optr)slot_PEG_AtEnd_Class_class_instance, SMB_isNil, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper19880 = new_Super(SMB_new, 0);
    Assign PAssign19879 = new_Assign((Optr)slot_PEG_AtEnd_Class_class_instance, (Optr)PSuper19880);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19881 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PAssign19879);
    Array PThreadedCode19878 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)PAssign19879, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper19880, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend19881, (Optr)&t_block_return);
    Block PBlock19877 = new_Block_with(empty_Array, empty_Array, PThreadedCode19878, 1, PSend19881);
    // ifTrue:. 
    Send PSend19876 = new_Send((Optr)PSend19875, SMB_ifTrue_, 1, (Optr)PBlock19877);
    Array PThreadedCode19874 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_PEG_AtEnd_Class_class_instance, (Optr)&t_send0, (Optr)PSend19875, (Optr)&t_send_ifTrue_, (Optr)PSend19876, (Optr)PBlock19877, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_AtEnd_Class_class_instance, (Optr)&t_method_return);
    Block PBlock19872 = new_Block_with(PArray19873, empty_Array, PThreadedCode19874, 2, PSend19876, slot_PEG_AtEnd_Class_class_instance);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19882 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19872);
    Array PThreadedCode19871 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19872, (Optr)&t_send1, (Optr)PSend19882, (Optr)&t_method_return);
    Method PMethod19870 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19871, 1, PSend19882);
    
    MethodClosure MC_SMB_instance = new_MethodClosure((Method)PMethod19870, HEADER(PEG_AtEnd_Class));
=======
    Array PArray19839 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend19841 = new_Send((Optr)slot_PEG_AtEnd_Class_class_instance, SMB_isNil, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper19846 = new_Super(SMB_new, 0);
    Assign PAssign19845 = new_Assign((Optr)slot_PEG_AtEnd_Class_class_instance, (Optr)PSuper19846);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19847 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PAssign19845);
    Array PThreadedCode19844 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)PAssign19845, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper19846, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend19847, (Optr)&t_block_return);
    Block PBlock19843 = new_Block_with(empty_Array, empty_Array, PThreadedCode19844, 1, PSend19847);
    // ifTrue:. 
    Send PSend19842 = new_Send((Optr)PSend19841, SMB_ifTrue_, 1, (Optr)PBlock19843);
    Array PThreadedCode19840 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_PEG_AtEnd_Class_class_instance, (Optr)&t_send0, (Optr)PSend19841, (Optr)&t_send_ifTrue_, (Optr)PSend19842, (Optr)PBlock19843, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_AtEnd_Class_class_instance, (Optr)&t_method_return);
    Block PBlock19838 = new_Block_with(PArray19839, empty_Array, PThreadedCode19840, 2, PSend19842, slot_PEG_AtEnd_Class_class_instance);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19848 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19838);
    Array PThreadedCode19837 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19838, (Optr)&t_send1, (Optr)PSend19848, (Optr)&t_method_return);
    Method PMethod19836 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19837, 1, PSend19848);
    
    MethodClosure MC_SMB_instance = new_MethodClosure((Method)PMethod19836, HEADER(PEG_AtEnd_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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