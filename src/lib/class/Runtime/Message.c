#include <lib/class/Runtime/Message.h>


Optr layout_Runtime_Message_Class_class;
Optr slot_Runtime_Message_selector;
Optr layout_Runtime_Message;


static void init_SMB_selector() {
    Symbol SMB_selector = new_Symbol(L"selector");
    Array PThreadedCode7686 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Message_selector, (Optr)&t_method_return);
    Method PMethod7685 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7686, 1, slot_Runtime_Message_selector);
    
    MethodClosure MC_SMB_selector = new_MethodClosure((Method)PMethod7685, Message_Class);
    store_method(Message_Class, SMB_selector, MC_SMB_selector);
}


static void init_SMB_asArray() {
    Symbol SMB_asArray = new_Symbol(L"asArray");
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    // newFrom:. 
    Send PSend7689 = new_Send((Optr)Array_classReference, SMB_newFrom_, 1, (Optr)self);
    Array PThreadedCode7688 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7689, (Optr)&t_method_return);
    Method PMethod7687 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7688, 1, PSend7689);
    
    MethodClosure MC_SMB_asArray = new_MethodClosure((Method)PMethod7687, Message_Class);
    store_method(Message_Class, SMB_asArray, MC_SMB_asArray);
}


static void init_SMB_sendTo_() {
    Symbol SMB_sendTo_ = new_Symbol(L"sendTo:");
    Variable VAR_receiver_0_0 = new_Variable_named(L"receiver", 0);
    Array PArray7691 = new_Array_with(1, (Optr)VAR_receiver_0_0);
    Symbol SMB_perform_with_ = new_Symbol(L"perform:with:");
    // perform:with:. 
    Send PSend7693 = new_Send((Optr)VAR_receiver_0_0, SMB_perform_with_, 2, (Optr)slot_Runtime_Message_selector, (Optr)self);
    Array PThreadedCode7692 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_Message_selector, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend7693, (Optr)&t_method_return);
    Method PMethod7690 = new_Method_with(PArray7691, empty_Array, empty_Array, PThreadedCode7692, 1, PSend7693);
    
    MethodClosure MC_SMB_sendTo_ = new_MethodClosure((Method)PMethod7690, Message_Class);
    store_method(Message_Class, SMB_sendTo_, MC_SMB_sendTo_);
}


static void init_SMB_withIndexDo_() {
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    Variable VAR_elementAndIndexBlock_0_0 = new_Variable_named(L"elementAndIndexBlock", 0);
    Array PArray7695 = new_Array_with(1, (Optr)VAR_elementAndIndexBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7697 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray7699 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7701 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend7702 = new_Send((Optr)VAR_elementAndIndexBlock_0_0, SMB_value_value_, 2, (Optr)PSend7701, (Optr)VAR_index_1_0);
    Array PThreadedCode7700 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_elementAndIndexBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend7701, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send2, (Optr)PSend7702, (Optr)&t_method_return);
    Block PBlock7698 = new_Block_with(PArray7699, empty_Array, PThreadedCode7700, 1, PSend7702);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7703 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7697, (Optr)PBlock7698);
    Array PThreadedCode7696 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7697, (Optr)&t_push_closure, (Optr)PBlock7698, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7703, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7694 = new_Method_with(PArray7695, empty_Array, empty_Array, PThreadedCode7696, 2, PSend7703, self);
    
    MethodClosure MC_SMB_withIndexDo_ = new_MethodClosure((Method)PMethod7694, Message_Class);
    store_method(Message_Class, SMB_withIndexDo_, MC_SMB_withIndexDo_);
}


static void init_SMB_selector_() {
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Array PArray7705 = new_Array_with(1, (Optr)VAR_aSelector_0_0);
    Assign PAssign7707 = new_Assign((Optr)slot_Runtime_Message_selector, (Optr)VAR_aSelector_0_0);
    Array PThreadedCode7706 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7707, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7704 = new_Method_with(PArray7705, empty_Array, empty_Array, PThreadedCode7706, 2, PAssign7707, self);
    
    MethodClosure MC_SMB_selector_ = new_MethodClosure((Method)PMethod7704, Message_Class);
    store_method(Message_Class, SMB_selector_, MC_SMB_selector_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray7709 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7712 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend7714 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend7715 = new_Send((Optr)VAR_other_0_0, SMB_species, 0);
    // =. 
    Send PSend7716 = new_Send((Optr)PSend7714, SMB__equals_, 1, (Optr)PSend7715);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7720 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7719 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7720, (Optr)&t_block_return);
    Block PBlock7718 = new_Block_with(empty_Array, empty_Array, PThreadedCode7719, 1, PSend7720);
    // ifFalse:. 
    Send PSend7717 = new_Send((Optr)PSend7716, SMB_ifFalse_, 1, (Optr)PBlock7718);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7721 = new_Send((Optr)self, SMB_size, 0);
    // size. 
    Send PSend7722 = new_Send((Optr)VAR_other_0_0, SMB_size, 0);
    // =. 
    Send PSend7723 = new_Send((Optr)PSend7721, SMB__equals_, 1, (Optr)PSend7722);
    // escape:. 
    Send PSend7727 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7726 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7727, (Optr)&t_block_return);
    Block PBlock7725 = new_Block_with(empty_Array, empty_Array, PThreadedCode7726, 1, PSend7727);
    // ifFalse:. 
    Send PSend7724 = new_Send((Optr)PSend7723, SMB_ifFalse_, 1, (Optr)PBlock7725);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend7728 = new_Send((Optr)self, SMB_selector, 0);
    // selector. 
    Send PSend7729 = new_Send((Optr)VAR_other_0_0, SMB_selector, 0);
    // =. 
    Send PSend7730 = new_Send((Optr)PSend7728, SMB__equals_, 1, (Optr)PSend7729);
    // escape:. 
    Send PSend7734 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7733 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7734, (Optr)&t_block_return);
    Block PBlock7732 = new_Block_with(empty_Array, empty_Array, PThreadedCode7733, 1, PSend7734);
    // ifFalse:. 
    Send PSend7731 = new_Send((Optr)PSend7730, SMB_ifFalse_, 1, (Optr)PBlock7732);
    Variable VAR_arg_2_0 = new_Variable_named(L"arg", 2);
    Variable VAR_index_2_1 = new_Variable_named(L"index", 2);
    Array PArray7736 = new_Array_with(2, (Optr)VAR_arg_2_0, (Optr)VAR_index_2_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7738 = new_Send((Optr)VAR_other_0_0, SMB_at_, 1, (Optr)VAR_index_2_1);
    // =. 
    Send PSend7739 = new_Send((Optr)VAR_arg_2_0, SMB__equals_, 1, (Optr)PSend7738);
    // escape:. 
    Send PSend7743 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7742 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7743, (Optr)&t_block_return);
    Block PBlock7741 = new_Block_with(empty_Array, empty_Array, PThreadedCode7742, 1, PSend7743);
    // ifFalse:. 
    Send PSend7740 = new_Send((Optr)PSend7739, SMB_ifFalse_, 1, (Optr)PBlock7741);
    Array PThreadedCode7737 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_arg_2_0, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_push_variable, (Optr)VAR_index_2_1, (Optr)&t_send1, (Optr)PSend7738, (Optr)&t_send1, (Optr)PSend7739, (Optr)&t_send_ifFalse_, (Optr)PSend7740, (Optr)PBlock7741, (Optr)&t_method_return);
    Block PBlock7735 = new_Block_with(PArray7736, empty_Array, PThreadedCode7737, 1, PSend7740);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend7744 = new_Send((Optr)self, SMB_withIndexDo_, 1, (Optr)PBlock7735);
    Array PThreadedCode7713 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7714, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend7715, (Optr)&t_send1, (Optr)PSend7716, (Optr)&t_send_ifFalse_, (Optr)PSend7717, (Optr)PBlock7718, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7721, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend7722, (Optr)&t_send1, (Optr)PSend7723, (Optr)&t_send_ifFalse_, (Optr)PSend7724, (Optr)PBlock7725, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7728, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend7729, (Optr)&t_send1, (Optr)PSend7730, (Optr)&t_send_ifFalse_, (Optr)PSend7731, (Optr)PBlock7732, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock7735, (Optr)&t_send1, (Optr)PSend7744, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock7711 = new_Block_with(PArray7712, empty_Array, PThreadedCode7713, 5, PSend7717, PSend7724, PSend7731, PSend7744, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7745 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7711);
    Array PThreadedCode7710 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7711, (Optr)&t_send1, (Optr)PSend7745, (Optr)&t_method_return);
    Method PMethod7708 = new_Method_with(PArray7709, empty_Array, empty_Array, PThreadedCode7710, 1, PSend7745);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod7708, Message_Class);
    store_method(Message_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
    Array PArray7747 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Character char_2665 = new_Character(L'#');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_2665_Const = new_Constant((Optr)char_2665);
    // <<. 
    Send PSend7749 = new_Send((Optr)VAR_stream_0_0, SMB__shiftLeft_, 1, (Optr)char_2665_Const);
    // <<. 
    Send PSend7750 = new_Send((Optr)PSend7749, SMB__shiftLeft_, 1, (Optr)slot_Runtime_Message_selector);
    String string_7751 = new_String(L" (");
    Constant string_7751_Const = new_Constant((Optr)string_7751);
    // <<. 
    Send PSend7752 = new_Send((Optr)PSend7750, SMB__shiftLeft_, 1, (Optr)string_7751_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7753 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend7754 = new_Send((Optr)PSend7753, SMB_asString, 0);
    // <<. 
    Send PSend7755 = new_Send((Optr)PSend7752, SMB__shiftLeft_, 1, (Optr)PSend7754);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend7756 = new_Send((Optr)PSend7755, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode7748 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_push1, (Optr)char_2665, (Optr)&t_send1, (Optr)PSend7749, (Optr)&t_push_slot, (Optr)slot_Runtime_Message_selector, (Optr)&t_send1, (Optr)PSend7750, (Optr)&t_push1, (Optr)string_7751, (Optr)&t_send1, (Optr)PSend7752, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7753, (Optr)&t_send0, (Optr)PSend7754, (Optr)&t_send1, (Optr)PSend7755, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend7756, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7746 = new_Method_with(PArray7747, empty_Array, empty_Array, PThreadedCode7748, 2, PSend7756, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod7746, Message_Class);
    store_method(Message_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_argument() {
    Symbol SMB_argument = new_Symbol(L"argument");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend7759 = new_Send((Optr)self, SMB_at_, 1, (Optr)int_1_Const);
    Array PThreadedCode7758 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend7759, (Optr)&t_method_return);
    Method PMethod7757 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7758, 1, PSend7759);
    
    MethodClosure MC_SMB_argument = new_MethodClosure((Method)PMethod7757, Message_Class);
    store_method(Message_Class, SMB_argument, MC_SMB_argument);
}


static void init_SMB_arguments() {
    Symbol SMB_arguments = new_Symbol(L"arguments");
    Array PThreadedCode7761 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7760 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7761, 1, self);
    
    MethodClosure MC_SMB_arguments = new_MethodClosure((Method)PMethod7760, Message_Class);
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