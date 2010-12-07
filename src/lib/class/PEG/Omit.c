#include <lib/class/PEG/Omit.h>


Optr layout_PEG_Omit_Class_class;
Optr slot_PEG_Omit_parser;
Optr layout_PEG_Omit;


static void init_SMB_omit() {
    Symbol SMB_omit = new_Symbol(L"omit");
<<<<<<< HEAD
    Array PThreadedCode19611 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod19610 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19611, 1, self);
    
    MethodClosure MC_SMB_omit = new_MethodClosure((Method)PMethod19610, PEG_Omit_Class);
=======
    Array PThreadedCode19577 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod19576 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19577, 1, self);
    
    MethodClosure MC_SMB_omit = new_MethodClosure((Method)PMethod19576, PEG_Omit_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Omit_Class, SMB_omit, MC_SMB_omit);
}


static void init_SMB_not() {
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
<<<<<<< HEAD
    Send PSend19614 = new_Send((Optr)slot_PEG_Omit_parser, SMB_not, 0);
    Array PThreadedCode19613 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_PEG_Omit_parser, (Optr)&t_send0, (Optr)PSend19614, (Optr)&t_method_return);
    Method PMethod19612 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19613, 1, PSend19614);
    
    MethodClosure MC_SMB_not = new_MethodClosure((Method)PMethod19612, PEG_Omit_Class);
=======
    Send PSend19580 = new_Send((Optr)slot_PEG_Omit_parser, SMB_not, 0);
    Array PThreadedCode19579 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_PEG_Omit_parser, (Optr)&t_send0, (Optr)PSend19580, (Optr)&t_method_return);
    Method PMethod19578 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19579, 1, PSend19580);
    
    MethodClosure MC_SMB_not = new_MethodClosure((Method)PMethod19578, PEG_Omit_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Omit_Class, SMB_not, MC_SMB_not);
}


static void init_SMB_withoutOmit() {
    Symbol SMB_withoutOmit = new_Symbol(L"withoutOmit");
<<<<<<< HEAD
    Array PThreadedCode19616 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_Omit_parser, (Optr)&t_method_return);
    Method PMethod19615 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19616, 1, slot_PEG_Omit_parser);
    
    MethodClosure MC_SMB_withoutOmit = new_MethodClosure((Method)PMethod19615, PEG_Omit_Class);
=======
    Array PThreadedCode19582 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_Omit_parser, (Optr)&t_method_return);
    Method PMethod19581 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19582, 1, slot_PEG_Omit_parser);
    
    MethodClosure MC_SMB_withoutOmit = new_MethodClosure((Method)PMethod19581, PEG_Omit_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Omit_Class, SMB_withoutOmit, MC_SMB_withoutOmit);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
<<<<<<< HEAD
    Array PArray19618 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    // omitMatch:. 
    Send PSend19620 = new_Send((Optr)slot_PEG_Omit_parser, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19619 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_Omit_parser, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19620, (Optr)&t_method_return);
    Method PMethod19617 = new_Method_with(PArray19618, empty_Array, empty_Array, PThreadedCode19619, 1, PSend19620);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19617, PEG_Omit_Class);
=======
    Array PArray19584 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    // omitMatch:. 
    Send PSend19586 = new_Send((Optr)slot_PEG_Omit_parser, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19585 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_Omit_parser, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19586, (Optr)&t_method_return);
    Method PMethod19583 = new_Method_with(PArray19584, empty_Array, empty_Array, PThreadedCode19585, 1, PSend19586);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19583, PEG_Omit_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Omit_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
<<<<<<< HEAD
    Array PArray19622 = new_Array_with(1, (Optr)VAR_input_0_0);
    // omitMatch:. 
    Send PSend19624 = new_Send((Optr)slot_PEG_Omit_parser, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19623 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_Omit_parser, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19624, (Optr)&t_method_return);
    Method PMethod19621 = new_Method_with(PArray19622, empty_Array, empty_Array, PThreadedCode19623, 1, PSend19624);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19621, PEG_Omit_Class);
=======
    Array PArray19588 = new_Array_with(1, (Optr)VAR_input_0_0);
    // omitMatch:. 
    Send PSend19590 = new_Send((Optr)slot_PEG_Omit_parser, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19589 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_Omit_parser, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19590, (Optr)&t_method_return);
    Method PMethod19587 = new_Method_with(PArray19588, empty_Array, empty_Array, PThreadedCode19589, 1, PSend19590);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19587, PEG_Omit_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Omit_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_SMB_parser_() {
    Symbol SMB_parser_ = new_Symbol(L"parser:");
    Variable VAR_aParser_0_0 = new_Variable_named(L"aParser", 0);
<<<<<<< HEAD
    Array PArray19626 = new_Array_with(1, (Optr)VAR_aParser_0_0);
    Assign PAssign19628 = new_Assign((Optr)slot_PEG_Omit_parser, (Optr)VAR_aParser_0_0);
    Array PThreadedCode19627 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign19628, (Optr)&t_push_variable, (Optr)VAR_aParser_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19625 = new_Method_with(PArray19626, empty_Array, empty_Array, PThreadedCode19627, 2, PAssign19628, self);
    
    MethodClosure MC_SMB_parser_ = new_MethodClosure((Method)PMethod19625, PEG_Omit_Class);
=======
    Array PArray19592 = new_Array_with(1, (Optr)VAR_aParser_0_0);
    Assign PAssign19594 = new_Assign((Optr)slot_PEG_Omit_parser, (Optr)VAR_aParser_0_0);
    Array PThreadedCode19593 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign19594, (Optr)&t_push_variable, (Optr)VAR_aParser_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19591 = new_Method_with(PArray19592, empty_Array, empty_Array, PThreadedCode19593, 2, PAssign19594, self);
    
    MethodClosure MC_SMB_parser_ = new_MethodClosure((Method)PMethod19591, PEG_Omit_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Omit_Class, SMB_parser_, MC_SMB_parser_);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_parser_0_0 = new_Variable_named(L"parser", 0);
<<<<<<< HEAD
    Array PArray19630 = new_Array_with(1, (Optr)VAR_parser_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19632 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_parser_ = new_Symbol(L"parser:");
    // parser:. 
    Send PSend19633 = new_Send((Optr)PSend19632, SMB_parser_, 1, (Optr)VAR_parser_0_0);
    Array PThreadedCode19631 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19632, (Optr)&t_push_variable, (Optr)VAR_parser_0_0, (Optr)&t_send1, (Optr)PSend19633, (Optr)&t_method_return);
    Method PMethod19629 = new_Method_with(PArray19630, empty_Array, empty_Array, PThreadedCode19631, 1, PSend19633);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod19629, HEADER(PEG_Omit_Class));
=======
    Array PArray19596 = new_Array_with(1, (Optr)VAR_parser_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19598 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_parser_ = new_Symbol(L"parser:");
    // parser:. 
    Send PSend19599 = new_Send((Optr)PSend19598, SMB_parser_, 1, (Optr)VAR_parser_0_0);
    Array PThreadedCode19597 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19598, (Optr)&t_push_variable, (Optr)VAR_parser_0_0, (Optr)&t_send1, (Optr)PSend19599, (Optr)&t_method_return);
    Method PMethod19595 = new_Method_with(PArray19596, empty_Array, empty_Array, PThreadedCode19597, 1, PSend19599);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod19595, HEADER(PEG_Omit_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(PEG_Omit_Class), SMB_on_, MC_SMB_on_);
}

void init_PEG_PEGOmit_layout() {
    layout_PEG_Omit_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_Omit_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_Omit_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_Omit_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_Omit_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_Omit_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Omit = new_Symbol(L"Omit");
    slot_PEG_Omit_parser = (Optr)new_Slot(0, L"parser");
    layout_PEG_Omit = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PEG_Omit)->values[0] = slot_PEG_Omit_parser; // parser 
    PEG_Omit_Class = (Class)new_Class(PEG_Expression_Class, layout_PEG_Omit_Class_class);
    PEG_Omit_Class->layout = layout_PEG_Omit;
    PEG_Omit_Class->name = SMB_Omit;
    
}

void init_PEG_PEGOmit_methods() {
    init_SMB_omit();
    init_SMB_not();
    init_SMB_withoutOmit();
    init_SMB_parseOn_();
    init_SMB_omitMatch_();
    init_SMB_parser_();
    init_class_SMB_on_();
    
}