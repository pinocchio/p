#include <lib/class/Runtime/Message.h>


Optr layout_Runtime_Message_Class_class;
Optr slot_Runtime_Message_selector;
Optr layout_Runtime_Message;


static void init_SMB_selector() {
    Symbol SMB_selector = new_Symbol(L"selector");
    Array PThreadedCode8018 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Message_selector, (Optr)&t_method_return);
    Method PMethod8017 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8018, 1, slot_Runtime_Message_selector);
    
    MethodClosure MC_SMB_selector = new_MethodClosure((Method)PMethod8017, Message_Class);
    store_method(Message_Class, SMB_selector, MC_SMB_selector);
}


static void init_SMB_asArray() {
    Symbol SMB_asArray = new_Symbol(L"asArray");
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    // newFrom:. 
    Send PSend8021 = new_Send((Optr)Array_classReference, SMB_newFrom_, 1, (Optr)self);
    Array PThreadedCode8020 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8021, (Optr)&t_method_return);
    Method PMethod8019 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8020, 1, PSend8021);
    
    MethodClosure MC_SMB_asArray = new_MethodClosure((Method)PMethod8019, Message_Class);
    store_method(Message_Class, SMB_asArray, MC_SMB_asArray);
}


static void init_SMB_sendTo_() {
    Symbol SMB_sendTo_ = new_Symbol(L"sendTo:");
    Variable VAR_receiver_0_0 = new_Variable_named(L"receiver", 0);
    Array PArray8023 = new_Array_with(1, (Optr)VAR_receiver_0_0);
    Symbol SMB_perform_with_ = new_Symbol(L"perform:with:");
    // perform:with:. 
    Send PSend8025 = new_Send((Optr)VAR_receiver_0_0, SMB_perform_with_, 2, (Optr)slot_Runtime_Message_selector, (Optr)self);
    Array PThreadedCode8024 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_Message_selector, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend8025, (Optr)&t_method_return);
    Method PMethod8022 = new_Method_with(PArray8023, empty_Array, empty_Array, PThreadedCode8024, 1, PSend8025);
    
    MethodClosure MC_SMB_sendTo_ = new_MethodClosure((Method)PMethod8022, Message_Class);
    store_method(Message_Class, SMB_sendTo_, MC_SMB_sendTo_);
}


static void init_SMB_withIndexDo_() {
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    Variable VAR_elementAndIndexBlock_0_0 = new_Variable_named(L"elementAndIndexBlock", 0);
    Array PArray8027 = new_Array_with(1, (Optr)VAR_elementAndIndexBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8029 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray8031 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend8033 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend8034 = new_Send((Optr)VAR_elementAndIndexBlock_0_0, SMB_value_value_, 2, (Optr)PSend8033, (Optr)VAR_index_1_0);
    Array PThreadedCode8032 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_elementAndIndexBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend8033, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send2, (Optr)PSend8034, (Optr)&t_method_return);
    Block PBlock8030 = new_Block_with(PArray8031, empty_Array, PThreadedCode8032, 1, PSend8034);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend8035 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend8029, (Optr)PBlock8030);
    Array PThreadedCode8028 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8029, (Optr)&t_push_closure, (Optr)PBlock8030, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend8035, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8026 = new_Method_with(PArray8027, empty_Array, empty_Array, PThreadedCode8028, 2, PSend8035, self);
    
    MethodClosure MC_SMB_withIndexDo_ = new_MethodClosure((Method)PMethod8026, Message_Class);
    store_method(Message_Class, SMB_withIndexDo_, MC_SMB_withIndexDo_);
}


static void init_SMB_selector_() {
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Array PArray8037 = new_Array_with(1, (Optr)VAR_aSelector_0_0);
    Assign PAssign8039 = new_Assign((Optr)slot_Runtime_Message_selector, (Optr)VAR_aSelector_0_0);
    Array PThreadedCode8038 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8039, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8036 = new_Method_with(PArray8037, empty_Array, empty_Array, PThreadedCode8038, 2, PAssign8039, self);
    
    MethodClosure MC_SMB_selector_ = new_MethodClosure((Method)PMethod8036, Message_Class);
    store_method(Message_Class, SMB_selector_, MC_SMB_selector_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray8041 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8044 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend8046 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend8047 = new_Send((Optr)VAR_other_0_0, SMB_species, 0);
    // =. 
    Send PSend8048 = new_Send((Optr)PSend8046, SMB__equals_, 1, (Optr)PSend8047);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8052 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode8051 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend8052, (Optr)&t_block_return);
    Block PBlock8050 = new_Block_with(empty_Array, empty_Array, PThreadedCode8051, 1, PSend8052);
    // ifFalse:. 
    Send PSend8049 = new_Send((Optr)PSend8048, SMB_ifFalse_, 1, (Optr)PBlock8050);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8053 = new_Send((Optr)self, SMB_size, 0);
    // size. 
    Send PSend8054 = new_Send((Optr)VAR_other_0_0, SMB_size, 0);
    // =. 
    Send PSend8055 = new_Send((Optr)PSend8053, SMB__equals_, 1, (Optr)PSend8054);
    // escape:. 
    Send PSend8059 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode8058 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend8059, (Optr)&t_block_return);
    Block PBlock8057 = new_Block_with(empty_Array, empty_Array, PThreadedCode8058, 1, PSend8059);
    // ifFalse:. 
    Send PSend8056 = new_Send((Optr)PSend8055, SMB_ifFalse_, 1, (Optr)PBlock8057);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend8060 = new_Send((Optr)self, SMB_selector, 0);
    // selector. 
    Send PSend8061 = new_Send((Optr)VAR_other_0_0, SMB_selector, 0);
    // =. 
    Send PSend8062 = new_Send((Optr)PSend8060, SMB__equals_, 1, (Optr)PSend8061);
    // escape:. 
    Send PSend8066 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode8065 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend8066, (Optr)&t_block_return);
    Block PBlock8064 = new_Block_with(empty_Array, empty_Array, PThreadedCode8065, 1, PSend8066);
    // ifFalse:. 
    Send PSend8063 = new_Send((Optr)PSend8062, SMB_ifFalse_, 1, (Optr)PBlock8064);
    Variable VAR_arg_2_0 = new_Variable_named(L"arg", 2);
    Variable VAR_index_2_1 = new_Variable_named(L"index", 2);
    Array PArray8068 = new_Array_with(2, (Optr)VAR_arg_2_0, (Optr)VAR_index_2_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend8070 = new_Send((Optr)VAR_other_0_0, SMB_at_, 1, (Optr)VAR_index_2_1);
    // =. 
    Send PSend8071 = new_Send((Optr)VAR_arg_2_0, SMB__equals_, 1, (Optr)PSend8070);
    // escape:. 
    Send PSend8075 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode8074 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend8075, (Optr)&t_block_return);
    Block PBlock8073 = new_Block_with(empty_Array, empty_Array, PThreadedCode8074, 1, PSend8075);
    // ifFalse:. 
    Send PSend8072 = new_Send((Optr)PSend8071, SMB_ifFalse_, 1, (Optr)PBlock8073);
    Array PThreadedCode8069 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_arg_2_0, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_push_variable, (Optr)VAR_index_2_1, (Optr)&t_send1, (Optr)PSend8070, (Optr)&t_send1, (Optr)PSend8071, (Optr)&t_send_ifFalse_, (Optr)PSend8072, (Optr)PBlock8073, (Optr)&t_method_return);
    Block PBlock8067 = new_Block_with(PArray8068, empty_Array, PThreadedCode8069, 1, PSend8072);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend8076 = new_Send((Optr)self, SMB_withIndexDo_, 1, (Optr)PBlock8067);
    Array PThreadedCode8045 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8046, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend8047, (Optr)&t_send1, (Optr)PSend8048, (Optr)&t_send_ifFalse_, (Optr)PSend8049, (Optr)PBlock8050, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8053, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend8054, (Optr)&t_send1, (Optr)PSend8055, (Optr)&t_send_ifFalse_, (Optr)PSend8056, (Optr)PBlock8057, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8060, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend8061, (Optr)&t_send1, (Optr)PSend8062, (Optr)&t_send_ifFalse_, (Optr)PSend8063, (Optr)PBlock8064, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock8067, (Optr)&t_send1, (Optr)PSend8076, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock8043 = new_Block_with(PArray8044, empty_Array, PThreadedCode8045, 5, PSend8049, PSend8056, PSend8063, PSend8076, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8077 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8043);
    Array PThreadedCode8042 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8043, (Optr)&t_send1, (Optr)PSend8077, (Optr)&t_method_return);
    Method PMethod8040 = new_Method_with(PArray8041, empty_Array, empty_Array, PThreadedCode8042, 1, PSend8077);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod8040, Message_Class);
    store_method(Message_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
    Array PArray8079 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Character char_2665 = new_Character(L'#');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_2665_Const = new_Constant((Optr)char_2665);
    // <<. 
    Send PSend8081 = new_Send((Optr)VAR_stream_0_0, SMB__shiftLeft_, 1, (Optr)char_2665_Const);
    // <<. 
    Send PSend8082 = new_Send((Optr)PSend8081, SMB__shiftLeft_, 1, (Optr)slot_Runtime_Message_selector);
    String string_8083 = new_String(L" (");
    Constant string_8083_Const = new_Constant((Optr)string_8083);
    // <<. 
    Send PSend8084 = new_Send((Optr)PSend8082, SMB__shiftLeft_, 1, (Optr)string_8083_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8085 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend8086 = new_Send((Optr)PSend8085, SMB_asString, 0);
    // <<. 
    Send PSend8087 = new_Send((Optr)PSend8084, SMB__shiftLeft_, 1, (Optr)PSend8086);
    Character char_4149 = new_Character(L')');
    Constant char_4149_Const = new_Constant((Optr)char_4149);
    // <<. 
    Send PSend8088 = new_Send((Optr)PSend8087, SMB__shiftLeft_, 1, (Optr)char_4149_Const);
    Array PThreadedCode8080 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_push1, (Optr)char_2665, (Optr)&t_send1, (Optr)PSend8081, (Optr)&t_push_slot, (Optr)slot_Runtime_Message_selector, (Optr)&t_send1, (Optr)PSend8082, (Optr)&t_push1, (Optr)string_8083, (Optr)&t_send1, (Optr)PSend8084, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8085, (Optr)&t_send0, (Optr)PSend8086, (Optr)&t_send1, (Optr)PSend8087, (Optr)&t_push1, (Optr)char_4149, (Optr)&t_send1, (Optr)PSend8088, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8078 = new_Method_with(PArray8079, empty_Array, empty_Array, PThreadedCode8080, 2, PSend8088, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod8078, Message_Class);
    store_method(Message_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_argument() {
    Symbol SMB_argument = new_Symbol(L"argument");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend8091 = new_Send((Optr)self, SMB_at_, 1, (Optr)int_1_Const);
    Array PThreadedCode8090 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend8091, (Optr)&t_method_return);
    Method PMethod8089 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8090, 1, PSend8091);
    
    MethodClosure MC_SMB_argument = new_MethodClosure((Method)PMethod8089, Message_Class);
    store_method(Message_Class, SMB_argument, MC_SMB_argument);
}


static void init_SMB_arguments() {
    Symbol SMB_arguments = new_Symbol(L"arguments");
    Array PThreadedCode8093 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod8092 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8093, 1, self);
    
    MethodClosure MC_SMB_arguments = new_MethodClosure((Method)PMethod8092, Message_Class);
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