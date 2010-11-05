#include <lib/class/Runtime/Message.h>


Optr layout_Runtime_Message_Class_class;
Optr slot_Runtime_Message_selector;
Optr layout_Runtime_Message;


static void init_SMB_selector() {
    Symbol SMB_selector = new_Symbol(L"selector");
    Array PThreadedCode7763 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Message_selector, (Optr)&t_method_return);
    Method PMethod7762 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7763, 1, slot_Runtime_Message_selector);
    
    MethodClosure MC_SMB_selector = new_MethodClosure((Method)PMethod7762, Message_Class);
    store_method(Message_Class, SMB_selector, MC_SMB_selector);
}


static void init_SMB_asArray() {
    Symbol SMB_asArray = new_Symbol(L"asArray");
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    // newFrom:. 
    Send PSend7766 = new_Send((Optr)Array_classReference, SMB_newFrom_, 1, (Optr)self);
    Array PThreadedCode7765 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7766, (Optr)&t_method_return);
    Method PMethod7764 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7765, 1, PSend7766);
    
    MethodClosure MC_SMB_asArray = new_MethodClosure((Method)PMethod7764, Message_Class);
    store_method(Message_Class, SMB_asArray, MC_SMB_asArray);
}


static void init_SMB_sendTo_() {
    Symbol SMB_sendTo_ = new_Symbol(L"sendTo:");
    Variable VAR_receiver_0_0 = new_Variable_named(L"receiver", 0);
    Array PArray7768 = new_Array_with(1, (Optr)VAR_receiver_0_0);
    Symbol SMB_perform_with_ = new_Symbol(L"perform:with:");
    // perform:with:. 
    Send PSend7770 = new_Send((Optr)VAR_receiver_0_0, SMB_perform_with_, 2, (Optr)slot_Runtime_Message_selector, (Optr)self);
    Array PThreadedCode7769 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_Message_selector, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend7770, (Optr)&t_method_return);
    Method PMethod7767 = new_Method_with(PArray7768, empty_Array, empty_Array, PThreadedCode7769, 1, PSend7770);
    
    MethodClosure MC_SMB_sendTo_ = new_MethodClosure((Method)PMethod7767, Message_Class);
    store_method(Message_Class, SMB_sendTo_, MC_SMB_sendTo_);
}


static void init_SMB_withIndexDo_() {
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    Variable VAR_elementAndIndexBlock_0_0 = new_Variable_named(L"elementAndIndexBlock", 0);
    Array PArray7772 = new_Array_with(1, (Optr)VAR_elementAndIndexBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7774 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray7776 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7778 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend7779 = new_Send((Optr)VAR_elementAndIndexBlock_0_0, SMB_value_value_, 2, (Optr)PSend7778, (Optr)VAR_index_1_0);
    Array PThreadedCode7777 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_elementAndIndexBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend7778, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send2, (Optr)PSend7779, (Optr)&t_method_return);
    Block PBlock7775 = new_Block_with(PArray7776, empty_Array, PThreadedCode7777, 1, PSend7779);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7780 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7774, (Optr)PBlock7775);
    Array PThreadedCode7773 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7774, (Optr)&t_push_closure, (Optr)PBlock7775, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7780, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7771 = new_Method_with(PArray7772, empty_Array, empty_Array, PThreadedCode7773, 2, PSend7780, self);
    
    MethodClosure MC_SMB_withIndexDo_ = new_MethodClosure((Method)PMethod7771, Message_Class);
    store_method(Message_Class, SMB_withIndexDo_, MC_SMB_withIndexDo_);
}


static void init_SMB_selector_() {
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Array PArray7782 = new_Array_with(1, (Optr)VAR_aSelector_0_0);
    Assign PAssign7784 = new_Assign((Optr)slot_Runtime_Message_selector, (Optr)VAR_aSelector_0_0);
    Array PThreadedCode7783 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7784, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7781 = new_Method_with(PArray7782, empty_Array, empty_Array, PThreadedCode7783, 2, PAssign7784, self);
    
    MethodClosure MC_SMB_selector_ = new_MethodClosure((Method)PMethod7781, Message_Class);
    store_method(Message_Class, SMB_selector_, MC_SMB_selector_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray7786 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7789 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend7791 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend7792 = new_Send((Optr)VAR_other_0_0, SMB_species, 0);
    // =. 
    Send PSend7793 = new_Send((Optr)PSend7791, SMB__equals_, 1, (Optr)PSend7792);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7797 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7796 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7797, (Optr)&t_block_return);
    Block PBlock7795 = new_Block_with(empty_Array, empty_Array, PThreadedCode7796, 1, PSend7797);
    // ifFalse:. 
    Send PSend7794 = new_Send((Optr)PSend7793, SMB_ifFalse_, 1, (Optr)PBlock7795);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7798 = new_Send((Optr)self, SMB_size, 0);
    // size. 
    Send PSend7799 = new_Send((Optr)VAR_other_0_0, SMB_size, 0);
    // =. 
    Send PSend7800 = new_Send((Optr)PSend7798, SMB__equals_, 1, (Optr)PSend7799);
    // escape:. 
    Send PSend7804 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7803 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7804, (Optr)&t_block_return);
    Block PBlock7802 = new_Block_with(empty_Array, empty_Array, PThreadedCode7803, 1, PSend7804);
    // ifFalse:. 
    Send PSend7801 = new_Send((Optr)PSend7800, SMB_ifFalse_, 1, (Optr)PBlock7802);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend7805 = new_Send((Optr)self, SMB_selector, 0);
    // selector. 
    Send PSend7806 = new_Send((Optr)VAR_other_0_0, SMB_selector, 0);
    // =. 
    Send PSend7807 = new_Send((Optr)PSend7805, SMB__equals_, 1, (Optr)PSend7806);
    // escape:. 
    Send PSend7811 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7810 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7811, (Optr)&t_block_return);
    Block PBlock7809 = new_Block_with(empty_Array, empty_Array, PThreadedCode7810, 1, PSend7811);
    // ifFalse:. 
    Send PSend7808 = new_Send((Optr)PSend7807, SMB_ifFalse_, 1, (Optr)PBlock7809);
    Variable VAR_arg_2_0 = new_Variable_named(L"arg", 2);
    Variable VAR_index_2_1 = new_Variable_named(L"index", 2);
    Array PArray7813 = new_Array_with(2, (Optr)VAR_arg_2_0, (Optr)VAR_index_2_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7815 = new_Send((Optr)VAR_other_0_0, SMB_at_, 1, (Optr)VAR_index_2_1);
    // =. 
    Send PSend7816 = new_Send((Optr)VAR_arg_2_0, SMB__equals_, 1, (Optr)PSend7815);
    // escape:. 
    Send PSend7820 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7819 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7820, (Optr)&t_block_return);
    Block PBlock7818 = new_Block_with(empty_Array, empty_Array, PThreadedCode7819, 1, PSend7820);
    // ifFalse:. 
    Send PSend7817 = new_Send((Optr)PSend7816, SMB_ifFalse_, 1, (Optr)PBlock7818);
    Array PThreadedCode7814 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_arg_2_0, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_push_variable, (Optr)VAR_index_2_1, (Optr)&t_send1, (Optr)PSend7815, (Optr)&t_send1, (Optr)PSend7816, (Optr)&t_send_ifFalse_, (Optr)PSend7817, (Optr)PBlock7818, (Optr)&t_method_return);
    Block PBlock7812 = new_Block_with(PArray7813, empty_Array, PThreadedCode7814, 1, PSend7817);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend7821 = new_Send((Optr)self, SMB_withIndexDo_, 1, (Optr)PBlock7812);
    Array PThreadedCode7790 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7791, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend7792, (Optr)&t_send1, (Optr)PSend7793, (Optr)&t_send_ifFalse_, (Optr)PSend7794, (Optr)PBlock7795, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7798, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend7799, (Optr)&t_send1, (Optr)PSend7800, (Optr)&t_send_ifFalse_, (Optr)PSend7801, (Optr)PBlock7802, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7805, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend7806, (Optr)&t_send1, (Optr)PSend7807, (Optr)&t_send_ifFalse_, (Optr)PSend7808, (Optr)PBlock7809, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock7812, (Optr)&t_send1, (Optr)PSend7821, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock7788 = new_Block_with(PArray7789, empty_Array, PThreadedCode7790, 5, PSend7794, PSend7801, PSend7808, PSend7821, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7822 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7788);
    Array PThreadedCode7787 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7788, (Optr)&t_send1, (Optr)PSend7822, (Optr)&t_method_return);
    Method PMethod7785 = new_Method_with(PArray7786, empty_Array, empty_Array, PThreadedCode7787, 1, PSend7822);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod7785, Message_Class);
    store_method(Message_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
    Array PArray7824 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Character char_2656 = new_Character(L'#');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_2656_Const = new_Constant((Optr)char_2656);
    // <<. 
    Send PSend7826 = new_Send((Optr)VAR_stream_0_0, SMB__shiftLeft_, 1, (Optr)char_2656_Const);
    // <<. 
    Send PSend7827 = new_Send((Optr)PSend7826, SMB__shiftLeft_, 1, (Optr)slot_Runtime_Message_selector);
    String string_7828 = new_String(L" (");
    Constant string_7828_Const = new_Constant((Optr)string_7828);
    // <<. 
    Send PSend7829 = new_Send((Optr)PSend7827, SMB__shiftLeft_, 1, (Optr)string_7828_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7830 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend7831 = new_Send((Optr)PSend7830, SMB_asString, 0);
    // <<. 
    Send PSend7832 = new_Send((Optr)PSend7829, SMB__shiftLeft_, 1, (Optr)PSend7831);
    Character char_4146 = new_Character(L')');
    Constant char_4146_Const = new_Constant((Optr)char_4146);
    // <<. 
    Send PSend7833 = new_Send((Optr)PSend7832, SMB__shiftLeft_, 1, (Optr)char_4146_Const);
    Array PThreadedCode7825 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_push1, (Optr)char_2656, (Optr)&t_send1, (Optr)PSend7826, (Optr)&t_push_slot, (Optr)slot_Runtime_Message_selector, (Optr)&t_send1, (Optr)PSend7827, (Optr)&t_push1, (Optr)string_7828, (Optr)&t_send1, (Optr)PSend7829, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7830, (Optr)&t_send0, (Optr)PSend7831, (Optr)&t_send1, (Optr)PSend7832, (Optr)&t_push1, (Optr)char_4146, (Optr)&t_send1, (Optr)PSend7833, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7823 = new_Method_with(PArray7824, empty_Array, empty_Array, PThreadedCode7825, 2, PSend7833, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod7823, Message_Class);
    store_method(Message_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_argument() {
    Symbol SMB_argument = new_Symbol(L"argument");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend7836 = new_Send((Optr)self, SMB_at_, 1, (Optr)int_1_Const);
    Array PThreadedCode7835 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend7836, (Optr)&t_method_return);
    Method PMethod7834 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7835, 1, PSend7836);
    
    MethodClosure MC_SMB_argument = new_MethodClosure((Method)PMethod7834, Message_Class);
    store_method(Message_Class, SMB_argument, MC_SMB_argument);
}


static void init_SMB_arguments() {
    Symbol SMB_arguments = new_Symbol(L"arguments");
    Array PThreadedCode7838 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7837 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7838, 1, self);
    
    MethodClosure MC_SMB_arguments = new_MethodClosure((Method)PMethod7837, Message_Class);
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