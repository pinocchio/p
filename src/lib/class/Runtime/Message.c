#include <lib/class/Runtime/Message.h>


Optr layout_Runtime_Message_Class_class;
Optr slot_Runtime_Message_selector;
Optr layout_Runtime_Message;


static void init_SMB_selector() {
    Symbol SMB_selector = new_Symbol(L"selector");
    Array PThreadedCode7725 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Message_selector, (Optr)&t_method_return);
    Method PMethod7724 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7725, 1, slot_Runtime_Message_selector);
    
    MethodClosure MC_SMB_selector = new_MethodClosure((Method)PMethod7724, Message_Class);
    store_method(Message_Class, SMB_selector, MC_SMB_selector);
}


static void init_SMB_asArray() {
    Symbol SMB_asArray = new_Symbol(L"asArray");
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    // newFrom:. 
    Send PSend7728 = new_Send((Optr)Array_classReference, SMB_newFrom_, 1, (Optr)self);
    Array PThreadedCode7727 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7728, (Optr)&t_method_return);
    Method PMethod7726 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7727, 1, PSend7728);
    
    MethodClosure MC_SMB_asArray = new_MethodClosure((Method)PMethod7726, Message_Class);
    store_method(Message_Class, SMB_asArray, MC_SMB_asArray);
}


static void init_SMB_sendTo_() {
    Symbol SMB_sendTo_ = new_Symbol(L"sendTo:");
    Variable VAR_receiver_0_0 = new_Variable_named(L"receiver", 0);
    Array PArray7730 = new_Array_with(1, (Optr)VAR_receiver_0_0);
    Symbol SMB_perform_with_ = new_Symbol(L"perform:with:");
    // perform:with:. 
    Send PSend7732 = new_Send((Optr)VAR_receiver_0_0, SMB_perform_with_, 2, (Optr)slot_Runtime_Message_selector, (Optr)self);
    Array PThreadedCode7731 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_Message_selector, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend7732, (Optr)&t_method_return);
    Method PMethod7729 = new_Method_with(PArray7730, empty_Array, empty_Array, PThreadedCode7731, 1, PSend7732);
    
    MethodClosure MC_SMB_sendTo_ = new_MethodClosure((Method)PMethod7729, Message_Class);
    store_method(Message_Class, SMB_sendTo_, MC_SMB_sendTo_);
}


static void init_SMB_withIndexDo_() {
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    Variable VAR_elementAndIndexBlock_0_0 = new_Variable_named(L"elementAndIndexBlock", 0);
    Array PArray7734 = new_Array_with(1, (Optr)VAR_elementAndIndexBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7736 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray7738 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7740 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend7741 = new_Send((Optr)VAR_elementAndIndexBlock_0_0, SMB_value_value_, 2, (Optr)PSend7740, (Optr)VAR_index_1_0);
    Array PThreadedCode7739 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_elementAndIndexBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend7740, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send2, (Optr)PSend7741, (Optr)&t_method_return);
    Block PBlock7737 = new_Block_with(PArray7738, empty_Array, PThreadedCode7739, 1, PSend7741);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7742 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7736, (Optr)PBlock7737);
    Array PThreadedCode7735 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7736, (Optr)&t_push_closure, (Optr)PBlock7737, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7742, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7733 = new_Method_with(PArray7734, empty_Array, empty_Array, PThreadedCode7735, 2, PSend7742, self);
    
    MethodClosure MC_SMB_withIndexDo_ = new_MethodClosure((Method)PMethod7733, Message_Class);
    store_method(Message_Class, SMB_withIndexDo_, MC_SMB_withIndexDo_);
}


static void init_SMB_selector_() {
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Array PArray7744 = new_Array_with(1, (Optr)VAR_aSelector_0_0);
    Assign PAssign7746 = new_Assign((Optr)slot_Runtime_Message_selector, (Optr)VAR_aSelector_0_0);
    Array PThreadedCode7745 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7746, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7743 = new_Method_with(PArray7744, empty_Array, empty_Array, PThreadedCode7745, 2, PAssign7746, self);
    
    MethodClosure MC_SMB_selector_ = new_MethodClosure((Method)PMethod7743, Message_Class);
    store_method(Message_Class, SMB_selector_, MC_SMB_selector_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray7748 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7751 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend7753 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend7754 = new_Send((Optr)VAR_other_0_0, SMB_species, 0);
    // =. 
    Send PSend7755 = new_Send((Optr)PSend7753, SMB__equals_, 1, (Optr)PSend7754);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7759 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7758 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7759, (Optr)&t_block_return);
    Block PBlock7757 = new_Block_with(empty_Array, empty_Array, PThreadedCode7758, 1, PSend7759);
    // ifFalse:. 
    Send PSend7756 = new_Send((Optr)PSend7755, SMB_ifFalse_, 1, (Optr)PBlock7757);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7760 = new_Send((Optr)self, SMB_size, 0);
    // size. 
    Send PSend7761 = new_Send((Optr)VAR_other_0_0, SMB_size, 0);
    // =. 
    Send PSend7762 = new_Send((Optr)PSend7760, SMB__equals_, 1, (Optr)PSend7761);
    // escape:. 
    Send PSend7766 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7765 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7766, (Optr)&t_block_return);
    Block PBlock7764 = new_Block_with(empty_Array, empty_Array, PThreadedCode7765, 1, PSend7766);
    // ifFalse:. 
    Send PSend7763 = new_Send((Optr)PSend7762, SMB_ifFalse_, 1, (Optr)PBlock7764);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend7767 = new_Send((Optr)self, SMB_selector, 0);
    // selector. 
    Send PSend7768 = new_Send((Optr)VAR_other_0_0, SMB_selector, 0);
    // =. 
    Send PSend7769 = new_Send((Optr)PSend7767, SMB__equals_, 1, (Optr)PSend7768);
    // escape:. 
    Send PSend7773 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7772 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7773, (Optr)&t_block_return);
    Block PBlock7771 = new_Block_with(empty_Array, empty_Array, PThreadedCode7772, 1, PSend7773);
    // ifFalse:. 
    Send PSend7770 = new_Send((Optr)PSend7769, SMB_ifFalse_, 1, (Optr)PBlock7771);
    Variable VAR_arg_2_0 = new_Variable_named(L"arg", 2);
    Variable VAR_index_2_1 = new_Variable_named(L"index", 2);
    Array PArray7775 = new_Array_with(2, (Optr)VAR_arg_2_0, (Optr)VAR_index_2_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7777 = new_Send((Optr)VAR_other_0_0, SMB_at_, 1, (Optr)VAR_index_2_1);
    // =. 
    Send PSend7778 = new_Send((Optr)VAR_arg_2_0, SMB__equals_, 1, (Optr)PSend7777);
    // escape:. 
    Send PSend7782 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7781 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7782, (Optr)&t_block_return);
    Block PBlock7780 = new_Block_with(empty_Array, empty_Array, PThreadedCode7781, 1, PSend7782);
    // ifFalse:. 
    Send PSend7779 = new_Send((Optr)PSend7778, SMB_ifFalse_, 1, (Optr)PBlock7780);
    Array PThreadedCode7776 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_arg_2_0, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_push_variable, (Optr)VAR_index_2_1, (Optr)&t_send1, (Optr)PSend7777, (Optr)&t_send1, (Optr)PSend7778, (Optr)&t_send_ifFalse_, (Optr)PSend7779, (Optr)PBlock7780, (Optr)&t_method_return);
    Block PBlock7774 = new_Block_with(PArray7775, empty_Array, PThreadedCode7776, 1, PSend7779);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend7783 = new_Send((Optr)self, SMB_withIndexDo_, 1, (Optr)PBlock7774);
    Array PThreadedCode7752 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7753, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend7754, (Optr)&t_send1, (Optr)PSend7755, (Optr)&t_send_ifFalse_, (Optr)PSend7756, (Optr)PBlock7757, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7760, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend7761, (Optr)&t_send1, (Optr)PSend7762, (Optr)&t_send_ifFalse_, (Optr)PSend7763, (Optr)PBlock7764, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7767, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend7768, (Optr)&t_send1, (Optr)PSend7769, (Optr)&t_send_ifFalse_, (Optr)PSend7770, (Optr)PBlock7771, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock7774, (Optr)&t_send1, (Optr)PSend7783, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock7750 = new_Block_with(PArray7751, empty_Array, PThreadedCode7752, 5, PSend7756, PSend7763, PSend7770, PSend7783, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7784 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7750);
    Array PThreadedCode7749 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7750, (Optr)&t_send1, (Optr)PSend7784, (Optr)&t_method_return);
    Method PMethod7747 = new_Method_with(PArray7748, empty_Array, empty_Array, PThreadedCode7749, 1, PSend7784);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod7747, Message_Class);
    store_method(Message_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
    Array PArray7786 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Character char_2656 = new_Character(L'#');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_2656_Const = new_Constant((Optr)char_2656);
    // <<. 
    Send PSend7788 = new_Send((Optr)VAR_stream_0_0, SMB__shiftLeft_, 1, (Optr)char_2656_Const);
    // <<. 
    Send PSend7789 = new_Send((Optr)PSend7788, SMB__shiftLeft_, 1, (Optr)slot_Runtime_Message_selector);
    String string_7790 = new_String(L" (");
    Constant string_7790_Const = new_Constant((Optr)string_7790);
    // <<. 
    Send PSend7791 = new_Send((Optr)PSend7789, SMB__shiftLeft_, 1, (Optr)string_7790_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7792 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend7793 = new_Send((Optr)PSend7792, SMB_asString, 0);
    // <<. 
    Send PSend7794 = new_Send((Optr)PSend7791, SMB__shiftLeft_, 1, (Optr)PSend7793);
    Character char_4146 = new_Character(L')');
    Constant char_4146_Const = new_Constant((Optr)char_4146);
    // <<. 
    Send PSend7795 = new_Send((Optr)PSend7794, SMB__shiftLeft_, 1, (Optr)char_4146_Const);
    Array PThreadedCode7787 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_push1, (Optr)char_2656, (Optr)&t_send1, (Optr)PSend7788, (Optr)&t_push_slot, (Optr)slot_Runtime_Message_selector, (Optr)&t_send1, (Optr)PSend7789, (Optr)&t_push1, (Optr)string_7790, (Optr)&t_send1, (Optr)PSend7791, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7792, (Optr)&t_send0, (Optr)PSend7793, (Optr)&t_send1, (Optr)PSend7794, (Optr)&t_push1, (Optr)char_4146, (Optr)&t_send1, (Optr)PSend7795, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7785 = new_Method_with(PArray7786, empty_Array, empty_Array, PThreadedCode7787, 2, PSend7795, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod7785, Message_Class);
    store_method(Message_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_argument() {
    Symbol SMB_argument = new_Symbol(L"argument");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend7798 = new_Send((Optr)self, SMB_at_, 1, (Optr)int_1_Const);
    Array PThreadedCode7797 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend7798, (Optr)&t_method_return);
    Method PMethod7796 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7797, 1, PSend7798);
    
    MethodClosure MC_SMB_argument = new_MethodClosure((Method)PMethod7796, Message_Class);
    store_method(Message_Class, SMB_argument, MC_SMB_argument);
}


static void init_SMB_arguments() {
    Symbol SMB_arguments = new_Symbol(L"arguments");
    Array PThreadedCode7800 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7799 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7800, 1, self);
    
    MethodClosure MC_SMB_arguments = new_MethodClosure((Method)PMethod7799, Message_Class);
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