#include <lib/class/PEG/AtEnd.h>


Optr slot_PEG_AtEnd_Class_class_instance;
Optr layout_PEG_AtEnd_Class_class;


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19501 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend19503 = new_Send((Optr)VAR_input_0_0, SMB_atEnd, 0);
    Array PThreadedCode19502 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19503, (Optr)&t_method_return);
    Method PMethod19500 = new_Method_with(PArray19501, empty_Array, empty_Array, PThreadedCode19502, 1, PSend19503);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19500, PEG_AtEnd_Class);
    store_method(PEG_AtEnd_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19505 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend19507 = new_Send((Optr)VAR_input_0_0, SMB_atEnd, 0);
    Array PThreadedCode19506 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19507, (Optr)&t_method_return);
    Method PMethod19504 = new_Method_with(PArray19505, empty_Array, empty_Array, PThreadedCode19506, 1, PSend19507);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19504, PEG_AtEnd_Class);
    store_method(PEG_AtEnd_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_class_SMB_instance() {
    Symbol SMB_instance = new_Symbol(L"instance");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19511 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend19513 = new_Send((Optr)slot_PEG_AtEnd_Class_class_instance, SMB_isNil, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper19518 = new_Super(SMB_new, 0);
    Assign PAssign19517 = new_Assign((Optr)slot_PEG_AtEnd_Class_class_instance, (Optr)PSuper19518);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19519 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PAssign19517);
    Array PThreadedCode19516 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)PAssign19517, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper19518, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend19519, (Optr)&t_block_return);
    Block PBlock19515 = new_Block_with(empty_Array, empty_Array, PThreadedCode19516, 1, PSend19519);
    // ifTrue:. 
    Send PSend19514 = new_Send((Optr)PSend19513, SMB_ifTrue_, 1, (Optr)PBlock19515);
    Array PThreadedCode19512 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_PEG_AtEnd_Class_class_instance, (Optr)&t_send0, (Optr)PSend19513, (Optr)&t_send_ifTrue_, (Optr)PSend19514, (Optr)PBlock19515, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_AtEnd_Class_class_instance, (Optr)&t_method_return);
    Block PBlock19510 = new_Block_with(PArray19511, empty_Array, PThreadedCode19512, 2, PSend19514, slot_PEG_AtEnd_Class_class_instance);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19520 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19510);
    Array PThreadedCode19509 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19510, (Optr)&t_send1, (Optr)PSend19520, (Optr)&t_method_return);
    Method PMethod19508 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19509, 1, PSend19520);
    
    MethodClosure MC_SMB_instance = new_MethodClosure((Method)PMethod19508, HEADER(PEG_AtEnd_Class));
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