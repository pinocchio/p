#include <lib/class/Runtime/Message.h>


Optr layout_Runtime_Message_Class_class;
Optr slot_Runtime_Message_selector;
Optr layout_Runtime_Message;


static void init_SMB_selector() {
    Symbol SMB_selector = new_Symbol(L"selector");
    Array PThreadedCode7596 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Message_selector, (Optr)&t_method_return);
    Method PMethod7595 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7596, 1, slot_Runtime_Message_selector);
    
    MethodClosure MC_SMB_selector = new_MethodClosure((Method)PMethod7595, Message_Class);
    store_method(Message_Class, SMB_selector, MC_SMB_selector);
}


static void init_SMB_asArray() {
    Symbol SMB_asArray = new_Symbol(L"asArray");
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    // newFrom:. 
    Send PSend7599 = new_Send((Optr)Array_classReference, SMB_newFrom_, 1, (Optr)self);
    Array PThreadedCode7598 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7599, (Optr)&t_method_return);
    Method PMethod7597 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7598, 1, PSend7599);
    
    MethodClosure MC_SMB_asArray = new_MethodClosure((Method)PMethod7597, Message_Class);
    store_method(Message_Class, SMB_asArray, MC_SMB_asArray);
}


static void init_SMB_sendTo_() {
    Symbol SMB_sendTo_ = new_Symbol(L"sendTo:");
    Variable VAR_receiver_0_0 = new_Variable_named(L"receiver", 0);
    Array PArray7601 = new_Array_with(1, (Optr)VAR_receiver_0_0);
    Symbol SMB_perform_with_ = new_Symbol(L"perform:with:");
    // perform:with:. 
    Send PSend7603 = new_Send((Optr)VAR_receiver_0_0, SMB_perform_with_, 2, (Optr)slot_Runtime_Message_selector, (Optr)self);
    Array PThreadedCode7602 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_Message_selector, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend7603, (Optr)&t_method_return);
    Method PMethod7600 = new_Method_with(PArray7601, empty_Array, empty_Array, PThreadedCode7602, 1, PSend7603);
    
    MethodClosure MC_SMB_sendTo_ = new_MethodClosure((Method)PMethod7600, Message_Class);
    store_method(Message_Class, SMB_sendTo_, MC_SMB_sendTo_);
}


static void init_SMB_withIndexDo_() {
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    Variable VAR_elementAndIndexBlock_0_0 = new_Variable_named(L"elementAndIndexBlock", 0);
    Array PArray7605 = new_Array_with(1, (Optr)VAR_elementAndIndexBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7607 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray7609 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7611 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend7612 = new_Send((Optr)VAR_elementAndIndexBlock_0_0, SMB_value_value_, 2, (Optr)PSend7611, (Optr)VAR_index_1_0);
    Array PThreadedCode7610 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_elementAndIndexBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend7611, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send2, (Optr)PSend7612, (Optr)&t_method_return);
    Block PBlock7608 = new_Block_with(PArray7609, empty_Array, PThreadedCode7610, 1, PSend7612);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7613 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7607, (Optr)PBlock7608);
    Array PThreadedCode7606 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7607, (Optr)&t_push_closure, (Optr)PBlock7608, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7613, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7604 = new_Method_with(PArray7605, empty_Array, empty_Array, PThreadedCode7606, 2, PSend7613, self);
    
    MethodClosure MC_SMB_withIndexDo_ = new_MethodClosure((Method)PMethod7604, Message_Class);
    store_method(Message_Class, SMB_withIndexDo_, MC_SMB_withIndexDo_);
}


static void init_SMB_selector_() {
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Array PArray7615 = new_Array_with(1, (Optr)VAR_aSelector_0_0);
    Assign PAssign7617 = new_Assign((Optr)slot_Runtime_Message_selector, (Optr)VAR_aSelector_0_0);
    Array PThreadedCode7616 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7617, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7614 = new_Method_with(PArray7615, empty_Array, empty_Array, PThreadedCode7616, 2, PAssign7617, self);
    
    MethodClosure MC_SMB_selector_ = new_MethodClosure((Method)PMethod7614, Message_Class);
    store_method(Message_Class, SMB_selector_, MC_SMB_selector_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray7619 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7622 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend7624 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend7625 = new_Send((Optr)VAR_other_0_0, SMB_species, 0);
    // =. 
    Send PSend7626 = new_Send((Optr)PSend7624, SMB__equals_, 1, (Optr)PSend7625);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7630 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7629 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7630, (Optr)&t_block_return);
    Block PBlock7628 = new_Block_with(empty_Array, empty_Array, PThreadedCode7629, 1, PSend7630);
    // ifFalse:. 
    Send PSend7627 = new_Send((Optr)PSend7626, SMB_ifFalse_, 1, (Optr)PBlock7628);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7631 = new_Send((Optr)self, SMB_size, 0);
    // size. 
    Send PSend7632 = new_Send((Optr)VAR_other_0_0, SMB_size, 0);
    // =. 
    Send PSend7633 = new_Send((Optr)PSend7631, SMB__equals_, 1, (Optr)PSend7632);
    // escape:. 
    Send PSend7637 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7636 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7637, (Optr)&t_block_return);
    Block PBlock7635 = new_Block_with(empty_Array, empty_Array, PThreadedCode7636, 1, PSend7637);
    // ifFalse:. 
    Send PSend7634 = new_Send((Optr)PSend7633, SMB_ifFalse_, 1, (Optr)PBlock7635);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend7638 = new_Send((Optr)self, SMB_selector, 0);
    // selector. 
    Send PSend7639 = new_Send((Optr)VAR_other_0_0, SMB_selector, 0);
    // =. 
    Send PSend7640 = new_Send((Optr)PSend7638, SMB__equals_, 1, (Optr)PSend7639);
    // escape:. 
    Send PSend7644 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7643 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7644, (Optr)&t_block_return);
    Block PBlock7642 = new_Block_with(empty_Array, empty_Array, PThreadedCode7643, 1, PSend7644);
    // ifFalse:. 
    Send PSend7641 = new_Send((Optr)PSend7640, SMB_ifFalse_, 1, (Optr)PBlock7642);
    Variable VAR_arg_2_0 = new_Variable_named(L"arg", 2);
    Variable VAR_index_2_1 = new_Variable_named(L"index", 2);
    Array PArray7646 = new_Array_with(2, (Optr)VAR_arg_2_0, (Optr)VAR_index_2_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7648 = new_Send((Optr)VAR_other_0_0, SMB_at_, 1, (Optr)VAR_index_2_1);
    // =. 
    Send PSend7649 = new_Send((Optr)VAR_arg_2_0, SMB__equals_, 1, (Optr)PSend7648);
    // escape:. 
    Send PSend7653 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7652 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7653, (Optr)&t_block_return);
    Block PBlock7651 = new_Block_with(empty_Array, empty_Array, PThreadedCode7652, 1, PSend7653);
    // ifFalse:. 
    Send PSend7650 = new_Send((Optr)PSend7649, SMB_ifFalse_, 1, (Optr)PBlock7651);
    Array PThreadedCode7647 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_arg_2_0, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_push_variable, (Optr)VAR_index_2_1, (Optr)&t_send1, (Optr)PSend7648, (Optr)&t_send1, (Optr)PSend7649, (Optr)&t_send_ifFalse_, (Optr)PSend7650, (Optr)PBlock7651, (Optr)&t_method_return);
    Block PBlock7645 = new_Block_with(PArray7646, empty_Array, PThreadedCode7647, 1, PSend7650);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend7654 = new_Send((Optr)self, SMB_withIndexDo_, 1, (Optr)PBlock7645);
    Array PThreadedCode7623 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7624, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend7625, (Optr)&t_send1, (Optr)PSend7626, (Optr)&t_send_ifFalse_, (Optr)PSend7627, (Optr)PBlock7628, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7631, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend7632, (Optr)&t_send1, (Optr)PSend7633, (Optr)&t_send_ifFalse_, (Optr)PSend7634, (Optr)PBlock7635, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7638, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend7639, (Optr)&t_send1, (Optr)PSend7640, (Optr)&t_send_ifFalse_, (Optr)PSend7641, (Optr)PBlock7642, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock7645, (Optr)&t_send1, (Optr)PSend7654, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock7621 = new_Block_with(PArray7622, empty_Array, PThreadedCode7623, 5, PSend7627, PSend7634, PSend7641, PSend7654, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7655 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7621);
    Array PThreadedCode7620 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7621, (Optr)&t_send1, (Optr)PSend7655, (Optr)&t_method_return);
    Method PMethod7618 = new_Method_with(PArray7619, empty_Array, empty_Array, PThreadedCode7620, 1, PSend7655);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod7618, Message_Class);
    store_method(Message_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
    Array PArray7657 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Character char_2656 = new_Character(L'#');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_2656_Const = new_Constant((Optr)char_2656);
    // <<. 
    Send PSend7659 = new_Send((Optr)VAR_stream_0_0, SMB__shiftLeft_, 1, (Optr)char_2656_Const);
    // <<. 
    Send PSend7660 = new_Send((Optr)PSend7659, SMB__shiftLeft_, 1, (Optr)slot_Runtime_Message_selector);
    String string_7661 = new_String(L" (");
    Constant string_7661_Const = new_Constant((Optr)string_7661);
    // <<. 
    Send PSend7662 = new_Send((Optr)PSend7660, SMB__shiftLeft_, 1, (Optr)string_7661_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7663 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend7664 = new_Send((Optr)PSend7663, SMB_asString, 0);
    // <<. 
    Send PSend7665 = new_Send((Optr)PSend7662, SMB__shiftLeft_, 1, (Optr)PSend7664);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend7666 = new_Send((Optr)PSend7665, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode7658 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_push1, (Optr)char_2656, (Optr)&t_send1, (Optr)PSend7659, (Optr)&t_push_slot, (Optr)slot_Runtime_Message_selector, (Optr)&t_send1, (Optr)PSend7660, (Optr)&t_push1, (Optr)string_7661, (Optr)&t_send1, (Optr)PSend7662, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7663, (Optr)&t_send0, (Optr)PSend7664, (Optr)&t_send1, (Optr)PSend7665, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend7666, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7656 = new_Method_with(PArray7657, empty_Array, empty_Array, PThreadedCode7658, 2, PSend7666, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod7656, Message_Class);
    store_method(Message_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_argument() {
    Symbol SMB_argument = new_Symbol(L"argument");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend7669 = new_Send((Optr)self, SMB_at_, 1, (Optr)int_1_Const);
    Array PThreadedCode7668 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend7669, (Optr)&t_method_return);
    Method PMethod7667 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7668, 1, PSend7669);
    
    MethodClosure MC_SMB_argument = new_MethodClosure((Method)PMethod7667, Message_Class);
    store_method(Message_Class, SMB_argument, MC_SMB_argument);
}


static void init_SMB_arguments() {
    Symbol SMB_arguments = new_Symbol(L"arguments");
    Array PThreadedCode7671 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7670 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7671, 1, self);
    
    MethodClosure MC_SMB_arguments = new_MethodClosure((Method)PMethod7670, Message_Class);
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