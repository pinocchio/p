#include <lib/class/Runtime/Message.h>


Optr layout_Runtime_Message_Class_class;
Optr slot_Runtime_Message_selector;
Optr layout_Runtime_Message;


static void init_SMB_selector() {
    Symbol SMB_selector = new_Symbol(L"selector");
    Array PThreadedCode7854 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Message_selector, (Optr)&t_method_return);
    Method PMethod7853 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7854, 1, slot_Runtime_Message_selector);
    
    MethodClosure MC_SMB_selector = new_MethodClosure((Method)PMethod7853, Message_Class);
    store_method(Message_Class, SMB_selector, MC_SMB_selector);
}


static void init_SMB_asArray() {
    Symbol SMB_asArray = new_Symbol(L"asArray");
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    // newFrom:. 
    Send PSend7857 = new_Send((Optr)Array_classReference, SMB_newFrom_, 1, (Optr)self);
    Array PThreadedCode7856 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7857, (Optr)&t_method_return);
    Method PMethod7855 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7856, 1, PSend7857);
    
    MethodClosure MC_SMB_asArray = new_MethodClosure((Method)PMethod7855, Message_Class);
    store_method(Message_Class, SMB_asArray, MC_SMB_asArray);
}


static void init_SMB_sendTo_() {
    Symbol SMB_sendTo_ = new_Symbol(L"sendTo:");
    Variable VAR_receiver_0_0 = new_Variable_named(L"receiver", 0);
    Array PArray7859 = new_Array_with(1, (Optr)VAR_receiver_0_0);
    Symbol SMB_perform_with_ = new_Symbol(L"perform:with:");
    // perform:with:. 
    Send PSend7861 = new_Send((Optr)VAR_receiver_0_0, SMB_perform_with_, 2, (Optr)slot_Runtime_Message_selector, (Optr)self);
    Array PThreadedCode7860 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_push_slot, (Optr)slot_Runtime_Message_selector, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend7861, (Optr)&t_method_return);
    Method PMethod7858 = new_Method_with(PArray7859, empty_Array, empty_Array, PThreadedCode7860, 1, PSend7861);
    
    MethodClosure MC_SMB_sendTo_ = new_MethodClosure((Method)PMethod7858, Message_Class);
    store_method(Message_Class, SMB_sendTo_, MC_SMB_sendTo_);
}


static void init_SMB_withIndexDo_() {
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    Variable VAR_elementAndIndexBlock_0_0 = new_Variable_named(L"elementAndIndexBlock", 0);
    Array PArray7863 = new_Array_with(1, (Optr)VAR_elementAndIndexBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7865 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray7867 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7869 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend7870 = new_Send((Optr)VAR_elementAndIndexBlock_0_0, SMB_value_value_, 2, (Optr)PSend7869, (Optr)VAR_index_1_0);
    Array PThreadedCode7868 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_elementAndIndexBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend7869, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send2, (Optr)PSend7870, (Optr)&t_method_return);
    Block PBlock7866 = new_Block_with(PArray7867, empty_Array, PThreadedCode7868, 1, PSend7870);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7871 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7865, (Optr)PBlock7866);
    Array PThreadedCode7864 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7865, (Optr)&t_push_closure, (Optr)PBlock7866, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7871, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7862 = new_Method_with(PArray7863, empty_Array, empty_Array, PThreadedCode7864, 2, PSend7871, self);
    
    MethodClosure MC_SMB_withIndexDo_ = new_MethodClosure((Method)PMethod7862, Message_Class);
    store_method(Message_Class, SMB_withIndexDo_, MC_SMB_withIndexDo_);
}


static void init_SMB_selector_() {
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Array PArray7873 = new_Array_with(1, (Optr)VAR_aSelector_0_0);
    Assign PAssign7875 = new_Assign((Optr)slot_Runtime_Message_selector, (Optr)VAR_aSelector_0_0);
    Array PThreadedCode7874 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7875, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7872 = new_Method_with(PArray7873, empty_Array, empty_Array, PThreadedCode7874, 2, PAssign7875, self);
    
    MethodClosure MC_SMB_selector_ = new_MethodClosure((Method)PMethod7872, Message_Class);
    store_method(Message_Class, SMB_selector_, MC_SMB_selector_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray7877 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7880 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend7882 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend7883 = new_Send((Optr)VAR_other_0_0, SMB_species, 0);
    // =. 
    Send PSend7884 = new_Send((Optr)PSend7882, SMB__equals_, 1, (Optr)PSend7883);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7888 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7887 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7888, (Optr)&t_block_return);
    Block PBlock7886 = new_Block_with(empty_Array, empty_Array, PThreadedCode7887, 1, PSend7888);
    // ifFalse:. 
    Send PSend7885 = new_Send((Optr)PSend7884, SMB_ifFalse_, 1, (Optr)PBlock7886);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7889 = new_Send((Optr)self, SMB_size, 0);
    // size. 
    Send PSend7890 = new_Send((Optr)VAR_other_0_0, SMB_size, 0);
    // =. 
    Send PSend7891 = new_Send((Optr)PSend7889, SMB__equals_, 1, (Optr)PSend7890);
    // escape:. 
    Send PSend7895 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7894 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7895, (Optr)&t_block_return);
    Block PBlock7893 = new_Block_with(empty_Array, empty_Array, PThreadedCode7894, 1, PSend7895);
    // ifFalse:. 
    Send PSend7892 = new_Send((Optr)PSend7891, SMB_ifFalse_, 1, (Optr)PBlock7893);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend7896 = new_Send((Optr)self, SMB_selector, 0);
    // selector. 
    Send PSend7897 = new_Send((Optr)VAR_other_0_0, SMB_selector, 0);
    // =. 
    Send PSend7898 = new_Send((Optr)PSend7896, SMB__equals_, 1, (Optr)PSend7897);
    // escape:. 
    Send PSend7902 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7901 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7902, (Optr)&t_block_return);
    Block PBlock7900 = new_Block_with(empty_Array, empty_Array, PThreadedCode7901, 1, PSend7902);
    // ifFalse:. 
    Send PSend7899 = new_Send((Optr)PSend7898, SMB_ifFalse_, 1, (Optr)PBlock7900);
    Variable VAR_arg_2_0 = new_Variable_named(L"arg", 2);
    Variable VAR_index_2_1 = new_Variable_named(L"index", 2);
    Array PArray7904 = new_Array_with(2, (Optr)VAR_arg_2_0, (Optr)VAR_index_2_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend7906 = new_Send((Optr)VAR_other_0_0, SMB_at_, 1, (Optr)VAR_index_2_1);
    // =. 
    Send PSend7907 = new_Send((Optr)VAR_arg_2_0, SMB__equals_, 1, (Optr)PSend7906);
    // escape:. 
    Send PSend7911 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7910 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7911, (Optr)&t_block_return);
    Block PBlock7909 = new_Block_with(empty_Array, empty_Array, PThreadedCode7910, 1, PSend7911);
    // ifFalse:. 
    Send PSend7908 = new_Send((Optr)PSend7907, SMB_ifFalse_, 1, (Optr)PBlock7909);
    Array PThreadedCode7905 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_arg_2_0, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_push_variable, (Optr)VAR_index_2_1, (Optr)&t_send1, (Optr)PSend7906, (Optr)&t_send1, (Optr)PSend7907, (Optr)&t_send_ifFalse_, (Optr)PSend7908, (Optr)PBlock7909, (Optr)&t_method_return);
    Block PBlock7903 = new_Block_with(PArray7904, empty_Array, PThreadedCode7905, 1, PSend7908);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend7912 = new_Send((Optr)self, SMB_withIndexDo_, 1, (Optr)PBlock7903);
    Array PThreadedCode7881 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7882, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend7883, (Optr)&t_send1, (Optr)PSend7884, (Optr)&t_send_ifFalse_, (Optr)PSend7885, (Optr)PBlock7886, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7889, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend7890, (Optr)&t_send1, (Optr)PSend7891, (Optr)&t_send_ifFalse_, (Optr)PSend7892, (Optr)PBlock7893, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7896, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend7897, (Optr)&t_send1, (Optr)PSend7898, (Optr)&t_send_ifFalse_, (Optr)PSend7899, (Optr)PBlock7900, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock7903, (Optr)&t_send1, (Optr)PSend7912, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock7879 = new_Block_with(PArray7880, empty_Array, PThreadedCode7881, 5, PSend7885, PSend7892, PSend7899, PSend7912, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7913 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7879);
    Array PThreadedCode7878 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7879, (Optr)&t_send1, (Optr)PSend7913, (Optr)&t_method_return);
    Method PMethod7876 = new_Method_with(PArray7877, empty_Array, empty_Array, PThreadedCode7878, 1, PSend7913);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod7876, Message_Class);
    store_method(Message_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
    Array PArray7915 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Character char_2665 = new_Character(L'#');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_2665_Const = new_Constant((Optr)char_2665);
    // <<. 
    Send PSend7917 = new_Send((Optr)VAR_stream_0_0, SMB__shiftLeft_, 1, (Optr)char_2665_Const);
    // <<. 
    Send PSend7918 = new_Send((Optr)PSend7917, SMB__shiftLeft_, 1, (Optr)slot_Runtime_Message_selector);
    String string_7919 = new_String(L" (");
    Constant string_7919_Const = new_Constant((Optr)string_7919);
    // <<. 
    Send PSend7920 = new_Send((Optr)PSend7918, SMB__shiftLeft_, 1, (Optr)string_7919_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7921 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend7922 = new_Send((Optr)PSend7921, SMB_asString, 0);
    // <<. 
    Send PSend7923 = new_Send((Optr)PSend7920, SMB__shiftLeft_, 1, (Optr)PSend7922);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend7924 = new_Send((Optr)PSend7923, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode7916 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_push1, (Optr)char_2665, (Optr)&t_send1, (Optr)PSend7917, (Optr)&t_push_slot, (Optr)slot_Runtime_Message_selector, (Optr)&t_send1, (Optr)PSend7918, (Optr)&t_push1, (Optr)string_7919, (Optr)&t_send1, (Optr)PSend7920, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7921, (Optr)&t_send0, (Optr)PSend7922, (Optr)&t_send1, (Optr)PSend7923, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend7924, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7914 = new_Method_with(PArray7915, empty_Array, empty_Array, PThreadedCode7916, 2, PSend7924, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod7914, Message_Class);
    store_method(Message_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_argument() {
    Symbol SMB_argument = new_Symbol(L"argument");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend7927 = new_Send((Optr)self, SMB_at_, 1, (Optr)int_1_Const);
    Array PThreadedCode7926 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend7927, (Optr)&t_method_return);
    Method PMethod7925 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7926, 1, PSend7927);
    
    MethodClosure MC_SMB_argument = new_MethodClosure((Method)PMethod7925, Message_Class);
    store_method(Message_Class, SMB_argument, MC_SMB_argument);
}


static void init_SMB_arguments() {
    Symbol SMB_arguments = new_Symbol(L"arguments");
    Array PThreadedCode7929 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod7928 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7929, 1, self);
    
    MethodClosure MC_SMB_arguments = new_MethodClosure((Method)PMethod7928, Message_Class);
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