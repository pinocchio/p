#include <lib/class/Runtime/Message.h>


Optr layout_Runtime_Message_Class_class;
Optr slot_Runtime_Message_selector;
Optr layout_Runtime_Message;


static void init_SMB_selector() {
    Symbol SMB_selector = new_Symbol(L"selector");
    Array PThreadedCode7991 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Message_selector, (Optr)&t_method_return);
    Method PMethod7990 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7991, 1, slot_Runtime_Message_selector);
    
    MethodClosure MC_SMB_selector = new_MethodClosure((Method)PMethod7990, Message_Class);
    store_method(Message_Class, SMB_selector, MC_SMB_selector);
}


static void init_SMB_asArray() {
    Symbol SMB_asArray = new_Symbol(L"asArray");
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    // newFrom:. 
    Send PSend7994 = new_Send((Optr)Array_classReference, SMB_newFrom_, 1, (Optr)self);
    Array PThreadedCode7993 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7994, (Optr)&t_method_return);
    Method PMethod7992 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7993, 1, PSend7994);
    
    MethodClosure MC_SMB_asArray = new_MethodClosure((Method)PMethod7992, Message_Class);
    store_method(Message_Class, SMB_asArray, MC_SMB_asArray);
}


static void init_SMB_sendTo_() {
    Symbol SMB_sendTo_ = new_Symbol(L"sendTo:");
    Variable VAR_receiver_0_0 = new_Variable_named(L"receiver", 0);
    Array PArray7996 = new_Array_with(1, (Optr)VAR_receiver_0_0);
    Symbol SMB_perform_with_ = new_Symbol(L"perform:with:");
    // perform:with:. 
    Send PSend7998 = new_Send((Optr)VAR_receiver_0_0, SMB_perform_with_, 2, (Optr)slot_Runtime_Message_selector, (Optr)self);
    Array PThreadedCode7997 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_Message_selector, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend7998, (Optr)&t_method_return);
    Method PMethod7995 = new_Method_with(PArray7996, empty_Array, empty_Array, PThreadedCode7997, 1, PSend7998);
    
    MethodClosure MC_SMB_sendTo_ = new_MethodClosure((Method)PMethod7995, Message_Class);
    store_method(Message_Class, SMB_sendTo_, MC_SMB_sendTo_);
}


static void init_SMB_withIndexDo_() {
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    Variable VAR_elementAndIndexBlock_0_0 = new_Variable_named(L"elementAndIndexBlock", 0);
    Array PArray8000 = new_Array_with(1, (Optr)VAR_elementAndIndexBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8002 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray8004 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend8006 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend8007 = new_Send((Optr)VAR_elementAndIndexBlock_0_0, SMB_value_value_, 2, (Optr)PSend8006, (Optr)VAR_index_1_0);
    Array PThreadedCode8005 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_elementAndIndexBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend8006, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send2, (Optr)PSend8007, (Optr)&t_method_return);
    Block PBlock8003 = new_Block_with(PArray8004, empty_Array, PThreadedCode8005, 1, PSend8007);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend8008 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend8002, (Optr)PBlock8003);
    Array PThreadedCode8001 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8002, (Optr)&t_push_closure, (Optr)PBlock8003, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend8008, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7999 = new_Method_with(PArray8000, empty_Array, empty_Array, PThreadedCode8001, 2, PSend8008, self);
    
    MethodClosure MC_SMB_withIndexDo_ = new_MethodClosure((Method)PMethod7999, Message_Class);
    store_method(Message_Class, SMB_withIndexDo_, MC_SMB_withIndexDo_);
}


static void init_SMB_selector_() {
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Array PArray8010 = new_Array_with(1, (Optr)VAR_aSelector_0_0);
    Assign PAssign8012 = new_Assign((Optr)slot_Runtime_Message_selector, (Optr)VAR_aSelector_0_0);
    Array PThreadedCode8011 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8012, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8009 = new_Method_with(PArray8010, empty_Array, empty_Array, PThreadedCode8011, 2, PAssign8012, self);
    
    MethodClosure MC_SMB_selector_ = new_MethodClosure((Method)PMethod8009, Message_Class);
    store_method(Message_Class, SMB_selector_, MC_SMB_selector_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray8014 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8017 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend8019 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend8020 = new_Send((Optr)VAR_other_0_0, SMB_species, 0);
    // =. 
    Send PSend8021 = new_Send((Optr)PSend8019, SMB__equals_, 1, (Optr)PSend8020);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8025 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode8024 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend8025, (Optr)&t_block_return);
    Block PBlock8023 = new_Block_with(empty_Array, empty_Array, PThreadedCode8024, 1, PSend8025);
    // ifFalse:. 
    Send PSend8022 = new_Send((Optr)PSend8021, SMB_ifFalse_, 1, (Optr)PBlock8023);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8026 = new_Send((Optr)self, SMB_size, 0);
    // size. 
    Send PSend8027 = new_Send((Optr)VAR_other_0_0, SMB_size, 0);
    // =. 
    Send PSend8028 = new_Send((Optr)PSend8026, SMB__equals_, 1, (Optr)PSend8027);
    // escape:. 
    Send PSend8032 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode8031 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend8032, (Optr)&t_block_return);
    Block PBlock8030 = new_Block_with(empty_Array, empty_Array, PThreadedCode8031, 1, PSend8032);
    // ifFalse:. 
    Send PSend8029 = new_Send((Optr)PSend8028, SMB_ifFalse_, 1, (Optr)PBlock8030);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend8033 = new_Send((Optr)self, SMB_selector, 0);
    // selector. 
    Send PSend8034 = new_Send((Optr)VAR_other_0_0, SMB_selector, 0);
    // =. 
    Send PSend8035 = new_Send((Optr)PSend8033, SMB__equals_, 1, (Optr)PSend8034);
    // escape:. 
    Send PSend8039 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode8038 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend8039, (Optr)&t_block_return);
    Block PBlock8037 = new_Block_with(empty_Array, empty_Array, PThreadedCode8038, 1, PSend8039);
    // ifFalse:. 
    Send PSend8036 = new_Send((Optr)PSend8035, SMB_ifFalse_, 1, (Optr)PBlock8037);
    Variable VAR_arg_2_0 = new_Variable_named(L"arg", 2);
    Variable VAR_index_2_1 = new_Variable_named(L"index", 2);
    Array PArray8041 = new_Array_with(2, (Optr)VAR_arg_2_0, (Optr)VAR_index_2_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend8043 = new_Send((Optr)VAR_other_0_0, SMB_at_, 1, (Optr)VAR_index_2_1);
    // =. 
    Send PSend8044 = new_Send((Optr)VAR_arg_2_0, SMB__equals_, 1, (Optr)PSend8043);
    // escape:. 
    Send PSend8048 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode8047 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend8048, (Optr)&t_block_return);
    Block PBlock8046 = new_Block_with(empty_Array, empty_Array, PThreadedCode8047, 1, PSend8048);
    // ifFalse:. 
    Send PSend8045 = new_Send((Optr)PSend8044, SMB_ifFalse_, 1, (Optr)PBlock8046);
    Array PThreadedCode8042 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_arg_2_0, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_push_variable, (Optr)VAR_index_2_1, (Optr)&t_send1, (Optr)PSend8043, (Optr)&t_send1, (Optr)PSend8044, (Optr)&t_send_ifFalse_, (Optr)PSend8045, (Optr)PBlock8046, (Optr)&t_method_return);
    Block PBlock8040 = new_Block_with(PArray8041, empty_Array, PThreadedCode8042, 1, PSend8045);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend8049 = new_Send((Optr)self, SMB_withIndexDo_, 1, (Optr)PBlock8040);
    Array PThreadedCode8018 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8019, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend8020, (Optr)&t_send1, (Optr)PSend8021, (Optr)&t_send_ifFalse_, (Optr)PSend8022, (Optr)PBlock8023, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8026, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend8027, (Optr)&t_send1, (Optr)PSend8028, (Optr)&t_send_ifFalse_, (Optr)PSend8029, (Optr)PBlock8030, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8033, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend8034, (Optr)&t_send1, (Optr)PSend8035, (Optr)&t_send_ifFalse_, (Optr)PSend8036, (Optr)PBlock8037, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock8040, (Optr)&t_send1, (Optr)PSend8049, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock8016 = new_Block_with(PArray8017, empty_Array, PThreadedCode8018, 5, PSend8022, PSend8029, PSend8036, PSend8049, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8050 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8016);
    Array PThreadedCode8015 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8016, (Optr)&t_send1, (Optr)PSend8050, (Optr)&t_method_return);
    Method PMethod8013 = new_Method_with(PArray8014, empty_Array, empty_Array, PThreadedCode8015, 1, PSend8050);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod8013, Message_Class);
    store_method(Message_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
    Array PArray8052 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Character char_2665 = new_Character(L'#');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_2665_Const = new_Constant((Optr)char_2665);
    // <<. 
    Send PSend8054 = new_Send((Optr)VAR_stream_0_0, SMB__shiftLeft_, 1, (Optr)char_2665_Const);
    // <<. 
    Send PSend8055 = new_Send((Optr)PSend8054, SMB__shiftLeft_, 1, (Optr)slot_Runtime_Message_selector);
    String string_8056 = new_String(L" (");
    Constant string_8056_Const = new_Constant((Optr)string_8056);
    // <<. 
    Send PSend8057 = new_Send((Optr)PSend8055, SMB__shiftLeft_, 1, (Optr)string_8056_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8058 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend8059 = new_Send((Optr)PSend8058, SMB_asString, 0);
    // <<. 
    Send PSend8060 = new_Send((Optr)PSend8057, SMB__shiftLeft_, 1, (Optr)PSend8059);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend8061 = new_Send((Optr)PSend8060, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode8053 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_push1, (Optr)char_2665, (Optr)&t_send1, (Optr)PSend8054, (Optr)&t_push_slot, (Optr)slot_Runtime_Message_selector, (Optr)&t_send1, (Optr)PSend8055, (Optr)&t_push1, (Optr)string_8056, (Optr)&t_send1, (Optr)PSend8057, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8058, (Optr)&t_send0, (Optr)PSend8059, (Optr)&t_send1, (Optr)PSend8060, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend8061, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8051 = new_Method_with(PArray8052, empty_Array, empty_Array, PThreadedCode8053, 2, PSend8061, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod8051, Message_Class);
    store_method(Message_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_argument() {
    Symbol SMB_argument = new_Symbol(L"argument");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend8064 = new_Send((Optr)self, SMB_at_, 1, (Optr)int_1_Const);
    Array PThreadedCode8063 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend8064, (Optr)&t_method_return);
    Method PMethod8062 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8063, 1, PSend8064);
    
    MethodClosure MC_SMB_argument = new_MethodClosure((Method)PMethod8062, Message_Class);
    store_method(Message_Class, SMB_argument, MC_SMB_argument);
}


static void init_SMB_arguments() {
    Symbol SMB_arguments = new_Symbol(L"arguments");
    Array PThreadedCode8066 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod8065 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8066, 1, self);
    
    MethodClosure MC_SMB_arguments = new_MethodClosure((Method)PMethod8065, Message_Class);
    store_method(Message_Class, SMB_arguments, MC_SMB_arguments);
}

void init_Runtime_PMessage_layout() {
    layout_Runtime_Message_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Runtime_Message_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Runtime_Message_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Runtime_Message_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Runtime_Message_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Runtime_Message_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Message = new_Symbol(L"Message");
    slot_Runtime_Message_selector = (Optr)new_Slot(0, L"selector");
    layout_Runtime_Message = (Optr)create_layout_with_vars(ArrayLayout_Class, 1);
    ((Array)layout_Runtime_Message)->values[0] = slot_Runtime_Message_selector;
    Message_Class = (Class)new_Class(Collections_Abstract_ArrayedCollection_Class, layout_Runtime_Message_Class_class);
    Message_Class->layout = layout_Runtime_Message;
    Message_Class->name = SMB_Message;
    
}

void init_Runtime_PMessage_methods() {
    init_SMB_selector();
    init_SMB_asArray();
    init_SMB_sendTo_();
    init_SMB_withIndexDo_();
    init_SMB_selector_();
    init_SMB__equals_();
    init_SMB_printOn_();
    init_SMB_argument();
    init_SMB_arguments();
    
}