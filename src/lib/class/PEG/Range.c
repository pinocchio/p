#include <lib/class/PEG/Range.h>


Optr layout_PEG_Range_Class_class;
Optr slot_PEG_Range_start;
Optr slot_PEG_Range_stop;
Optr layout_PEG_Range;


static void init_SMB_stop_() {
    Symbol SMB_stop_ = new_Symbol(L"stop:");
    Variable VAR_int_0_0 = new_Variable_named(L"int", 0);
    Array PArray18976 = new_Array_with(1, (Optr)VAR_int_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18979 = new_Send((Optr)VAR_int_0_0, SMB_asInteger, 0);
    Assign PAssign18978 = new_Assign((Optr)slot_PEG_Range_stop, (Optr)PSend18979);
    Array PThreadedCode18977 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign18978, (Optr)&t_push_variable, (Optr)VAR_int_0_0, (Optr)&t_send0, (Optr)PSend18979, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18975 = new_Method_with(PArray18976, empty_Array, empty_Array, PThreadedCode18977, 2, PAssign18978, self);
    
    MethodClosure MC_SMB_stop_ = new_MethodClosure((Method)PMethod18975, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_stop_, MC_SMB_stop_);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18981 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_char_0_1 = new_Variable_named(L"char", 0);
    Variable VAR_charValue_0_2 = new_Variable_named(L"charValue", 0);
    Array PArray18982 = new_Array_with(2, (Optr)VAR_char_0_1, (Optr)VAR_charValue_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18985 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend18988 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Assign PAssign18987 = new_Assign((Optr)VAR_char_0_1, (Optr)PSend18988);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18991 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18990 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18991, (Optr)&t_block_return);
    Block PBlock18989 = new_Block_with(empty_Array, empty_Array, PThreadedCode18990, 1, PSend18991);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend18992 = new_Send((Optr)VAR_char_0_1, SMB_ifNil_, 1, (Optr)PBlock18989);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18994 = new_Send((Optr)VAR_char_0_1, SMB_asInteger, 0);
    Assign PAssign18993 = new_Assign((Optr)VAR_charValue_0_2, (Optr)PSend18994);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend18995 = new_Send((Optr)VAR_charValue_0_2, SMB__lt_, 1, (Optr)slot_PEG_Range_start);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend18998 = new_Send((Optr)VAR_charValue_0_2, SMB__gt_, 1, (Optr)slot_PEG_Range_stop);
    Array PThreadedCode18997 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_stop, (Optr)&t_send1, (Optr)PSend18998, (Optr)&t_block_return);
    Block PBlock18996 = new_Block_with(empty_Array, empty_Array, PThreadedCode18997, 1, PSend18998);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend18999 = new_Send((Optr)PSend18995, SMB_or_, 1, (Optr)PBlock18996);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend19003 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19002 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19003, (Optr)&t_block_return);
    Block PBlock19001 = new_Block_with(empty_Array, empty_Array, PThreadedCode19002, 1, PSend19003);
    // ifTrue:. 
    Send PSend19000 = new_Send((Optr)PSend18999, SMB_ifTrue_, 1, (Optr)PBlock19001);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend19004 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend19005 = new_Send((Optr)PSend19004, SMB_push_, 1, (Optr)VAR_char_0_1);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend19006 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode18986 = instantiate_Array_with(ThreadedCode_Class, 0, 52, (Optr)&t_push1, (Optr)PAssign18987, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18988, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_push_closure, (Optr)PBlock18989, (Optr)&t_send1, (Optr)PSend18992, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18993, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_send0, (Optr)PSend18994, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_start, (Optr)&t_send1, (Optr)PSend18995, (Optr)&t_push_closure, (Optr)PBlock18996, (Optr)&t_send1, (Optr)PSend18999, (Optr)&t_send_ifTrue_, (Optr)PSend19000, (Optr)PBlock19001, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19004, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_send1, (Optr)PSend19005, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19006, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18984 = new_Block_with(PArray18985, empty_Array, PThreadedCode18986, 7, PAssign18987, PSend18992, PAssign18993, PSend19000, PSend19005, PSend19006, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19007 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18984);
    Array PThreadedCode18983 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18984, (Optr)&t_send1, (Optr)PSend19007, (Optr)&t_method_return);
    Method PMethod18980 = new_Method_with(PArray18981, PArray18982, empty_Array, PThreadedCode18983, 1, PSend19007);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod18980, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19009 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_char_0_1 = new_Variable_named(L"char", 0);
    Variable VAR_charValue_0_2 = new_Variable_named(L"charValue", 0);
    Array PArray19010 = new_Array_with(2, (Optr)VAR_char_0_1, (Optr)VAR_charValue_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19013 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend19016 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Assign PAssign19015 = new_Assign((Optr)VAR_char_0_1, (Optr)PSend19016);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19019 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19018 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19019, (Optr)&t_block_return);
    Block PBlock19017 = new_Block_with(empty_Array, empty_Array, PThreadedCode19018, 1, PSend19019);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend19020 = new_Send((Optr)VAR_char_0_1, SMB_ifNil_, 1, (Optr)PBlock19017);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend19022 = new_Send((Optr)VAR_char_0_1, SMB_asInteger, 0);
    Assign PAssign19021 = new_Assign((Optr)VAR_charValue_0_2, (Optr)PSend19022);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend19023 = new_Send((Optr)VAR_charValue_0_2, SMB__lt_, 1, (Optr)slot_PEG_Range_start);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend19026 = new_Send((Optr)VAR_charValue_0_2, SMB__gt_, 1, (Optr)slot_PEG_Range_stop);
    Array PThreadedCode19025 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_stop, (Optr)&t_send1, (Optr)PSend19026, (Optr)&t_block_return);
    Block PBlock19024 = new_Block_with(empty_Array, empty_Array, PThreadedCode19025, 1, PSend19026);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend19027 = new_Send((Optr)PSend19023, SMB_or_, 1, (Optr)PBlock19024);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend19031 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19030 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19031, (Optr)&t_block_return);
    Block PBlock19029 = new_Block_with(empty_Array, empty_Array, PThreadedCode19030, 1, PSend19031);
    // ifTrue:. 
    Send PSend19028 = new_Send((Optr)PSend19027, SMB_ifTrue_, 1, (Optr)PBlock19029);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend19032 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode19014 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign19015, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19016, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_push_closure, (Optr)PBlock19017, (Optr)&t_send1, (Optr)PSend19020, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19021, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_send0, (Optr)PSend19022, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_start, (Optr)&t_send1, (Optr)PSend19023, (Optr)&t_push_closure, (Optr)PBlock19024, (Optr)&t_send1, (Optr)PSend19027, (Optr)&t_send_ifTrue_, (Optr)PSend19028, (Optr)PBlock19029, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19032, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19012 = new_Block_with(PArray19013, empty_Array, PThreadedCode19014, 6, PAssign19015, PSend19020, PAssign19021, PSend19028, PSend19032, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19033 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19012);
    Array PThreadedCode19011 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19012, (Optr)&t_send1, (Optr)PSend19033, (Optr)&t_method_return);
    Method PMethod19008 = new_Method_with(PArray19009, PArray19010, empty_Array, PThreadedCode19011, 1, PSend19033);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19008, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
    Array PArray19035 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Character char_8705 = new_Character(L'[');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_8705_Const = new_Constant((Optr)char_8705);
    // <<. 
    Send PSend19037 = new_Send((Optr)VAR_stream_0_0, SMB__shiftLeft_, 1, (Optr)char_8705_Const);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend19038 = new_Send((Optr)slot_PEG_Range_start, SMB_asCharacter, 0);
    // <<. 
    Send PSend19039 = new_Send((Optr)PSend19037, SMB__shiftLeft_, 1, (Optr)PSend19038);
    Character char_2182 = new_Character(L'-');
    Constant char_2182_Const = new_Constant((Optr)char_2182);
    // <<. 
    Send PSend19040 = new_Send((Optr)PSend19039, SMB__shiftLeft_, 1, (Optr)char_2182_Const);
    // asCharacter. 
    Send PSend19041 = new_Send((Optr)slot_PEG_Range_stop, SMB_asCharacter, 0);
    // <<. 
    Send PSend19042 = new_Send((Optr)PSend19040, SMB__shiftLeft_, 1, (Optr)PSend19041);
    Character char_19043 = new_Character(L']');
    Constant char_19043_Const = new_Constant((Optr)char_19043);
    // <<. 
    Send PSend19044 = new_Send((Optr)PSend19042, SMB__shiftLeft_, 1, (Optr)char_19043_Const);
    Array PThreadedCode19036 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_push1, (Optr)char_8705, (Optr)&t_send1, (Optr)PSend19037, (Optr)&t_push_slot, (Optr)slot_PEG_Range_start, (Optr)&t_send0, (Optr)PSend19038, (Optr)&t_send1, (Optr)PSend19039, (Optr)&t_push1, (Optr)char_2182, (Optr)&t_send1, (Optr)PSend19040, (Optr)&t_push_slot, (Optr)slot_PEG_Range_stop, (Optr)&t_send0, (Optr)PSend19041, (Optr)&t_send1, (Optr)PSend19042, (Optr)&t_push1, (Optr)char_19043, (Optr)&t_send1, (Optr)PSend19044, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19034 = new_Method_with(PArray19035, empty_Array, empty_Array, PThreadedCode19036, 2, PSend19044, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod19034, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_start_() {
    Symbol SMB_start_ = new_Symbol(L"start:");
    Variable VAR_int_0_0 = new_Variable_named(L"int", 0);
    Array PArray19046 = new_Array_with(1, (Optr)VAR_int_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend19049 = new_Send((Optr)VAR_int_0_0, SMB_asInteger, 0);
    Assign PAssign19048 = new_Assign((Optr)slot_PEG_Range_start, (Optr)PSend19049);
    Array PThreadedCode19047 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19048, (Optr)&t_push_variable, (Optr)VAR_int_0_0, (Optr)&t_send0, (Optr)PSend19049, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19045 = new_Method_with(PArray19046, empty_Array, empty_Array, PThreadedCode19047, 2, PAssign19048, self);
    
    MethodClosure MC_SMB_start_ = new_MethodClosure((Method)PMethod19045, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_start_, MC_SMB_start_);
}


static void init_class_SMB_between_and_() {
    Symbol SMB_between_and_ = new_Symbol(L"between:and:");
    Variable VAR_start_0_0 = new_Variable_named(L"start", 0);
    Variable VAR_stop_0_1 = new_Variable_named(L"stop", 0);
    Array PArray19051 = new_Array_with(2, (Optr)VAR_start_0_0, (Optr)VAR_stop_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray19054 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_min_ = new_Symbol(L"min:");
    // min:. 
    Send PSend19056 = new_Send((Optr)VAR_start_0_0, SMB_min_, 1, (Optr)VAR_stop_0_1);
    Symbol SMB_start_ = new_Symbol(L"start:");
    // start:. 
    Send PSend19057 = new_Send((Optr)VAR__receiver__1_0, SMB_start_, 1, (Optr)PSend19056);
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend19058 = new_Send((Optr)VAR_start_0_0, SMB_max_, 1, (Optr)VAR_stop_0_1);
    Symbol SMB_stop_ = new_Symbol(L"stop:");
    // stop:. 
    Send PSend19059 = new_Send((Optr)VAR__receiver__1_0, SMB_stop_, 1, (Optr)PSend19058);
    Array PThreadedCode19055 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_push_variable, (Optr)VAR_stop_0_1, (Optr)&t_send1, (Optr)PSend19056, (Optr)&t_send1, (Optr)PSend19057, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_push_variable, (Optr)VAR_stop_0_1, (Optr)&t_send1, (Optr)PSend19058, (Optr)&t_send1, (Optr)PSend19059, (Optr)&t_method_return);
    Block PBlock19053 = new_Block_with(PArray19054, empty_Array, PThreadedCode19055, 2, PSend19057, PSend19059);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19060 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend19061 = new_Send((Optr)PBlock19053, SMB_value_, 1, (Optr)PSend19060);
    Array PThreadedCode19052 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock19053, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19060, (Optr)&t_send1, (Optr)PSend19061, (Optr)&t_method_return);
    Method PMethod19050 = new_Method_with(PArray19051, empty_Array, empty_Array, PThreadedCode19052, 1, PSend19061);
    
    MethodClosure MC_SMB_between_and_ = new_MethodClosure((Method)PMethod19050, HEADER(PEG_Range_Class));
    store_method(HEADER(PEG_Range_Class), SMB_between_and_, MC_SMB_between_and_);
}

void init_PEG_PEGRange_layout() {
    layout_PEG_Range_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_Range_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_Range_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_Range_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_Range_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_Range_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Range = new_Symbol(L"Range");
    slot_PEG_Range_start = (Optr)new_Slot(0, L"start");
    slot_PEG_Range_stop = (Optr)new_Slot(1, L"stop");
    layout_PEG_Range = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_PEG_Range)->values[0] = slot_PEG_Range_start; // start 
    ((Array)layout_PEG_Range)->values[1] = slot_PEG_Range_stop; // stop 
    PEG_Range_Class = (Class)new_Class(PEG_Expression_Class, layout_PEG_Range_Class_class);
    PEG_Range_Class->layout = layout_PEG_Range;
    PEG_Range_Class->name = SMB_Range;
    
}

void init_PEG_PEGRange_methods() {
    init_SMB_stop_();
    init_SMB_parseOn_();
    init_SMB_omitMatch_();
    init_SMB_printOn_();
    init_SMB_start_();
    init_class_SMB_between_and_();
    
}