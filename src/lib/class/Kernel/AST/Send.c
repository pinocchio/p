#include <lib/class/Kernel/AST/Send.h>


Optr layout_Kernel_AST_Send_Class_class;
Optr slot_Kernel_AST_Send_receiver;
Optr layout_Kernel_AST_Send;


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4425 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign4427 = new_Assign((Optr)slot_Kernel_AST_Send_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode4426 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4427, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4424 = new_Method_with(PArray4425, empty_Array, empty_Array, PThreadedCode4426, 2, PAssign4427, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod4424, Send_Class);
    store_method(Send_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode4429 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Send_receiver, (Optr)&t_method_return);
    Method PMethod4428 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4429, 1, slot_Kernel_AST_Send_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod4428, Send_Class);
    store_method(Send_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aSend_0_0 = new_Variable_named(L"aSend", 0);
    Array PArray4431 = new_Array_with(1, (Optr)VAR_aSend_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray4434 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper4436 = new_Super(SMB__equals_, 1, (Optr)VAR_aSend_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend4440 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode4439 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend4440, (Optr)&t_block_return);
    Block PBlock4438 = new_Block_with(empty_Array, empty_Array, PThreadedCode4439, 1, PSend4440);
    // ifFalse:. 
    Send PSend4437 = new_Send((Optr)PSuper4436, SMB_ifFalse_, 1, (Optr)PBlock4438);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend4441 = new_Send((Optr)VAR_aSend_0_0, SMB_receiver, 0);
    // =. 
    Send PSend4442 = new_Send((Optr)slot_Kernel_AST_Send_receiver, SMB__equals_, 1, (Optr)PSend4441);
    Array PThreadedCode4435 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_super1, (Optr)PSuper4436, (Optr)&t_send_ifFalse_, (Optr)PSend4437, (Optr)PBlock4438, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Send_receiver, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend4441, (Optr)&t_send1, (Optr)PSend4442, (Optr)&t_method_return);
    Block PBlock4433 = new_Block_with(PArray4434, empty_Array, PThreadedCode4435, 2, PSend4437, PSend4442);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend4443 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock4433);
    Array PThreadedCode4432 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock4433, (Optr)&t_send1, (Optr)PSend4443, (Optr)&t_method_return);
    Method PMethod4430 = new_Method_with(PArray4431, empty_Array, empty_Array, PThreadedCode4432, 1, PSend4443);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod4430, Send_Class);
    store_method(Send_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_cloneAt_for_() {
    Symbol SMB_cloneAt_for_ = new_Symbol(L"cloneAt:for:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Variable VAR_class_0_1 = new_Variable_named(L"class", 0);
    Array PArray4445 = new_Array_with(2, (Optr)VAR_index_0_0, (Optr)VAR_class_0_1);
    Variable VAR_result_0_2 = new_Variable_named(L"result", 0);
    Array PArray4446 = new_Array_with(1, (Optr)VAR_result_0_2);
    Super PSuper4449 = new_Super(SMB_cloneAt_for_, 2, (Optr)VAR_index_0_0, (Optr)VAR_class_0_1);
    Assign PAssign4448 = new_Assign((Optr)VAR_result_0_2, (Optr)PSuper4449);
    // cloneAt:for:. 
    Send PSend4450 = new_Send((Optr)slot_Kernel_AST_Send_receiver, SMB_cloneAt_for_, 2, (Optr)VAR_index_0_0, (Optr)VAR_class_0_1);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend4451 = new_Send((Optr)VAR_result_0_2, SMB_receiver_, 1, (Optr)PSend4450);
    Array PThreadedCode4447 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign4448, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_push_variable, (Optr)VAR_class_0_1, (Optr)&t_super2, (Optr)PSuper4449, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Send_receiver, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_push_variable, (Optr)VAR_class_0_1, (Optr)&t_send2, (Optr)PSend4450, (Optr)&t_send1, (Optr)PSend4451, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_method_return);
    Method PMethod4444 = new_Method_with(PArray4445, PArray4446, empty_Array, PThreadedCode4447, 3, PAssign4448, PSend4451, VAR_result_0_2);
    
    MethodClosure MC_SMB_cloneAt_for_ = new_MethodClosure((Method)PMethod4444, Send_Class);
    store_method(Send_Class, SMB_cloneAt_for_, MC_SMB_cloneAt_for_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray4453 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitSend_ = new_Symbol(L"visitSend:");
    // visitSend:. 
    Send PSend4455 = new_Send((Optr)VAR_visitor_0_0, SMB_visitSend_, 1, (Optr)self);
    Array PThreadedCode4454 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend4455, (Optr)&t_method_return);
    Method PMethod4452 = new_Method_with(PArray4453, empty_Array, empty_Array, PThreadedCode4454, 1, PSend4455);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod4452, Send_Class);
    store_method(Send_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_class_SMB_receiver_message_size_() {
    Symbol SMB_receiver_message_size_ = new_Symbol(L"receiver:message:size:");
    Variable VAR_rcv_0_0 = new_Variable_named(L"rcv", 0);
    Variable VAR_msg_0_1 = new_Variable_named(L"msg", 0);
    Variable VAR_size_0_2 = new_Variable_named(L"size", 0);
    Array PArray4457 = new_Array_with(3, (Optr)VAR_rcv_0_0, (Optr)VAR_msg_0_1, (Optr)VAR_size_0_2);
    Variable VAR_instance_0_3 = new_Variable_named(L"instance", 0);
    Array PArray4458 = new_Array_with(1, (Optr)VAR_instance_0_3);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend4461 = new_Send((Optr)self, SMB_new_, 1, (Optr)VAR_size_0_2);
    Assign PAssign4460 = new_Assign((Optr)VAR_instance_0_3, (Optr)PSend4461);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray4463 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend4465 = new_Send((Optr)VAR__receiver__1_0, SMB_receiver_, 1, (Optr)VAR_rcv_0_0);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend4466 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)VAR_msg_0_1);
    Array PThreadedCode4464 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_rcv_0_0, (Optr)&t_send1, (Optr)PSend4465, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_msg_0_1, (Optr)&t_send1, (Optr)PSend4466, (Optr)&t_method_return);
    Block PBlock4462 = new_Block_with(PArray4463, empty_Array, PThreadedCode4464, 2, PSend4465, PSend4466);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend4467 = new_Send((Optr)PBlock4462, SMB_value_, 1, (Optr)VAR_instance_0_3);
    Array PThreadedCode4459 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign4460, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_size_0_2, (Optr)&t_send1, (Optr)PSend4461, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock4462, (Optr)&t_push_variable, (Optr)VAR_instance_0_3, (Optr)&t_send1, (Optr)PSend4467, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_instance_0_3, (Optr)&t_method_return);
    Method PMethod4456 = new_Method_with(PArray4457, PArray4458, empty_Array, PThreadedCode4459, 3, PAssign4460, PSend4467, VAR_instance_0_3);
    
    MethodClosure MC_SMB_receiver_message_size_ = new_MethodClosure((Method)PMethod4456, HEADER(Send_Class));
    store_method(HEADER(Send_Class), SMB_receiver_message_size_, MC_SMB_receiver_message_size_);
}

void init_Kernel_AST_PSend_layout() {
    layout_Kernel_AST_Send_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_AST_Send_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_AST_Send_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_AST_Send_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_AST_Send_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_AST_Send_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Send = new_Symbol(L"Send");
    slot_Kernel_AST_Send_receiver = (Optr)new_Slot(2, L"receiver");
    layout_Kernel_AST_Send = (Optr)create_layout_with_vars(ArrayLayout_Class, 3);
    ((Array)layout_Kernel_AST_Send)->values[0] = slot_Kernel_AST_AbstractSend_cache;
    ((Array)layout_Kernel_AST_Send)->values[1] = slot_Kernel_AST_AbstractSend_message;
    ((Array)layout_Kernel_AST_Send)->values[2] = slot_Kernel_AST_Send_receiver;
    Send_Class = (Class)new_Class(Kernel_AST_AbstractSend_Class, layout_Kernel_AST_Send_Class_class);
    Send_Class->layout = layout_Kernel_AST_Send;
    Send_Class->name = SMB_Send;
    
}

void init_Kernel_AST_PSend_methods() {
    init_SMB_receiver_();
    init_SMB_receiver();
    init_SMB__equals_();
    init_SMB_cloneAt_for_();
    init_SMB_accept_();
    init_class_SMB_receiver_message_size_();
    
}