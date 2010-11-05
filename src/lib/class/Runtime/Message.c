#include <lib/class/Runtime/Message.h>


Optr layout_Runtime_Message_Class_class;
Optr slot_Runtime_Message_selector;
Optr layout_Runtime_Message;


static void init_SMB_selector() {
    Symbol SMB_selector = new_Symbol(L"selector");
    Array PThreadedCode7759 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Message_selector, (Optr)&t_method_return);
    Method PMethod7758 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7759, 1, slot_Runtime_Message_selector);
    
    MethodClosure MC_SMB_selector = new_MethodClosure((Method)PMethod7758, Message_Class);
    store_method(Message_Class, SMB_selector, MC_SMB_selector);
}


static void init_SMB_asArray() {
    Symbol SMB_asArray = new_Symbol(L"asArray");
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    // newFrom:. 
    Send PSend7762 = new_Send((Optr)Array_classReference, SMB_newFrom_, 1, (Optr)self);
    Array PThreadedCode7761 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7762, (Optr)&t_method_return);
    Method PMethod7760 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7761, 1, PSend7762);
    
    MethodClosure MC_SMB_asArray = new_MethodClosure((Method)PMethod7760, Message_Class);
    store_method(Message_Class, SMB_asArray, MC_SMB_asArray);
}


static void init_SMB_sendTo_() {
    Symbol SMB_sendTo_ = new_Symbol(L"sendTo:");
    Variable VAR_receiver_0_0 = new_Variable_named(L"receiver", 0);
    Array PArray7764 = new_Array_with(1, (Optr)VAR_receiver_0_0);
    Symbol SMB_perform_with_ = new_Symbol(L"perform:with:");
    // perform:with:. 
    Send PSend7766 = new_Send((Optr)VAR_receiver_0_0, SMB_perform_with_, 2, (Optr)slot_Runtime_Message_selector, (Optr)self);
    Array PThreadedCode7765 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_Message_selector, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend7766, (Optr)&t_method_return);
    Method PMethod7763 = new_Method_with(PArray7764, empty_Array, empty_Array, PThreadedCode7765, 1, PSend7766);
    
    MethodClosure MC_SMB_sendTo_ = new_MethodClosure((Method)PMethod7763, Message_Class);
    store_method(Message_Class, SMB_sendTo_, MC_SMB_sendTo_);
}


static void init_SMB_withIndexDo_() {
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    Variable VAR_elementAndIndexBlock_0_0 = new_Variable_named(L"elementAndIndexBlock", 0);
    Array PArray7768 = new_Array_with(1, (Optr)VAR_elementAndIndexBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7770 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray7772 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7774 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend7775 = new_Send((Optr)VAR_elementAndIndexBlock_0_0, SMB_value_value_, 2, (Optr)PSend7774, (Optr)VAR_index_1_0);
    Array PThreadedCode7773 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_elementAndIndexBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend7774, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send2, (Optr)PSend7775, (Optr)&t_method_return);
    Block PBlock7771 = new_Block_with(PArray7772, empty_Array, PThreadedCode7773, 1, PSend7775);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7776 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7770, (Optr)PBlock7771);
    Array PThreadedCode7769 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7770, (Optr)&t_push_closure, (Optr)PBlock7771, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7776, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7767 = new_Method_with(PArray7768, empty_Array, empty_Array, PThreadedCode7769, 2, PSend7776, self);
    
    MethodClosure MC_SMB_withIndexDo_ = new_MethodClosure((Method)PMethod7767, Message_Class);
    store_method(Message_Class, SMB_withIndexDo_, MC_SMB_withIndexDo_);
}


static void init_SMB_selector_() {
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Array PArray7778 = new_Array_with(1, (Optr)VAR_aSelector_0_0);
    Assign PAssign7780 = new_Assign((Optr)slot_Runtime_Message_selector, (Optr)VAR_aSelector_0_0);
    Array PThreadedCode7779 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7780, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7777 = new_Method_with(PArray7778, empty_Array, empty_Array, PThreadedCode7779, 2, PAssign7780, self);
    
    MethodClosure MC_SMB_selector_ = new_MethodClosure((Method)PMethod7777, Message_Class);
    store_method(Message_Class, SMB_selector_, MC_SMB_selector_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray7782 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7785 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend7787 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend7788 = new_Send((Optr)VAR_other_0_0, SMB_species, 0);
    // =. 
    Send PSend7789 = new_Send((Optr)PSend7787, SMB__equals_, 1, (Optr)PSend7788);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7793 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7792 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7793, (Optr)&t_block_return);
    Block PBlock7791 = new_Block_with(empty_Array, empty_Array, PThreadedCode7792, 1, PSend7793);
    // ifFalse:. 
    Send PSend7790 = new_Send((Optr)PSend7789, SMB_ifFalse_, 1, (Optr)PBlock7791);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7794 = new_Send((Optr)self, SMB_size, 0);
    // size. 
    Send PSend7795 = new_Send((Optr)VAR_other_0_0, SMB_size, 0);
    // =. 
    Send PSend7796 = new_Send((Optr)PSend7794, SMB__equals_, 1, (Optr)PSend7795);
    // escape:. 
    Send PSend7800 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7799 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7800, (Optr)&t_block_return);
    Block PBlock7798 = new_Block_with(empty_Array, empty_Array, PThreadedCode7799, 1, PSend7800);
    // ifFalse:. 
    Send PSend7797 = new_Send((Optr)PSend7796, SMB_ifFalse_, 1, (Optr)PBlock7798);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend7801 = new_Send((Optr)self, SMB_selector, 0);
    // selector. 
    Send PSend7802 = new_Send((Optr)VAR_other_0_0, SMB_selector, 0);
    // =. 
    Send PSend7803 = new_Send((Optr)PSend7801, SMB__equals_, 1, (Optr)PSend7802);
    // escape:. 
    Send PSend7807 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7806 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7807, (Optr)&t_block_return);
    Block PBlock7805 = new_Block_with(empty_Array, empty_Array, PThreadedCode7806, 1, PSend7807);
    // ifFalse:. 
    Send PSend7804 = new_Send((Optr)PSend7803, SMB_ifFalse_, 1, (Optr)PBlock7805);
    Variable VAR_arg_2_0 = new_Variable_named(L"arg", 2);
    Variable VAR_index_2_1 = new_Variable_named(L"index", 2);
    Array PArray7809 = new_Array_with(2, (Optr)VAR_arg_2_0, (Optr)VAR_index_2_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7811 = new_Send((Optr)VAR_other_0_0, SMB_at_, 1, (Optr)VAR_index_2_1);
    // =. 
    Send PSend7812 = new_Send((Optr)VAR_arg_2_0, SMB__equals_, 1, (Optr)PSend7811);
    // escape:. 
    Send PSend7816 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7815 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7816, (Optr)&t_block_return);
    Block PBlock7814 = new_Block_with(empty_Array, empty_Array, PThreadedCode7815, 1, PSend7816);
    // ifFalse:. 
    Send PSend7813 = new_Send((Optr)PSend7812, SMB_ifFalse_, 1, (Optr)PBlock7814);
    Array PThreadedCode7810 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_arg_2_0, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_push_variable, (Optr)VAR_index_2_1, (Optr)&t_send1, (Optr)PSend7811, (Optr)&t_send1, (Optr)PSend7812, (Optr)&t_send_ifFalse_, (Optr)PSend7813, (Optr)PBlock7814, (Optr)&t_method_return);
    Block PBlock7808 = new_Block_with(PArray7809, empty_Array, PThreadedCode7810, 1, PSend7813);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend7817 = new_Send((Optr)self, SMB_withIndexDo_, 1, (Optr)PBlock7808);
    Array PThreadedCode7786 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7787, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend7788, (Optr)&t_send1, (Optr)PSend7789, (Optr)&t_send_ifFalse_, (Optr)PSend7790, (Optr)PBlock7791, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7794, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend7795, (Optr)&t_send1, (Optr)PSend7796, (Optr)&t_send_ifFalse_, (Optr)PSend7797, (Optr)PBlock7798, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7801, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend7802, (Optr)&t_send1, (Optr)PSend7803, (Optr)&t_send_ifFalse_, (Optr)PSend7804, (Optr)PBlock7805, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock7808, (Optr)&t_send1, (Optr)PSend7817, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock7784 = new_Block_with(PArray7785, empty_Array, PThreadedCode7786, 5, PSend7790, PSend7797, PSend7804, PSend7817, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7818 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7784);
    Array PThreadedCode7783 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7784, (Optr)&t_send1, (Optr)PSend7818, (Optr)&t_method_return);
    Method PMethod7781 = new_Method_with(PArray7782, empty_Array, empty_Array, PThreadedCode7783, 1, PSend7818);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod7781, Message_Class);
    store_method(Message_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
    Array PArray7820 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Character char_2656 = new_Character(L'#');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_2656_Const = new_Constant((Optr)char_2656);
    // <<. 
    Send PSend7822 = new_Send((Optr)VAR_stream_0_0, SMB__shiftLeft_, 1, (Optr)char_2656_Const);
    // <<. 
    Send PSend7823 = new_Send((Optr)PSend7822, SMB__shiftLeft_, 1, (Optr)slot_Runtime_Message_selector);
    String string_7824 = new_String(L" (");
    Constant string_7824_Const = new_Constant((Optr)string_7824);
    // <<. 
    Send PSend7825 = new_Send((Optr)PSend7823, SMB__shiftLeft_, 1, (Optr)string_7824_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7826 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend7827 = new_Send((Optr)PSend7826, SMB_asString, 0);
    // <<. 
    Send PSend7828 = new_Send((Optr)PSend7825, SMB__shiftLeft_, 1, (Optr)PSend7827);
    Character char_4146 = new_Character(L')');
    Constant char_4146_Const = new_Constant((Optr)char_4146);
    // <<. 
    Send PSend7829 = new_Send((Optr)PSend7828, SMB__shiftLeft_, 1, (Optr)char_4146_Const);
    Array PThreadedCode7821 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_push1, (Optr)char_2656, (Optr)&t_send1, (Optr)PSend7822, (Optr)&t_push_slot, (Optr)slot_Runtime_Message_selector, (Optr)&t_send1, (Optr)PSend7823, (Optr)&t_push1, (Optr)string_7824, (Optr)&t_send1, (Optr)PSend7825, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7826, (Optr)&t_send0, (Optr)PSend7827, (Optr)&t_send1, (Optr)PSend7828, (Optr)&t_push1, (Optr)char_4146, (Optr)&t_send1, (Optr)PSend7829, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7819 = new_Method_with(PArray7820, empty_Array, empty_Array, PThreadedCode7821, 2, PSend7829, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod7819, Message_Class);
    store_method(Message_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_argument() {
    Symbol SMB_argument = new_Symbol(L"argument");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend7832 = new_Send((Optr)self, SMB_at_, 1, (Optr)int_1_Const);
    Array PThreadedCode7831 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend7832, (Optr)&t_method_return);
    Method PMethod7830 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7831, 1, PSend7832);
    
    MethodClosure MC_SMB_argument = new_MethodClosure((Method)PMethod7830, Message_Class);
    store_method(Message_Class, SMB_argument, MC_SMB_argument);
}


static void init_SMB_arguments() {
    Symbol SMB_arguments = new_Symbol(L"arguments");
    Array PThreadedCode7834 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7833 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7834, 1, self);
    
    MethodClosure MC_SMB_arguments = new_MethodClosure((Method)PMethod7833, Message_Class);
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