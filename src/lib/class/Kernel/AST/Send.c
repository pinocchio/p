#include <lib/class/Kernel/AST/Send.h>


Optr layout_Kernel_AST_Send_Class_class;
Optr slot_Kernel_AST_Send_receiver;
Optr layout_Kernel_AST_Send;


static void init_SMB_receiver_() {
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4428 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign4430 = new_Assign((Optr)slot_Kernel_AST_Send_receiver, (Optr)VAR_anObject_0_0);
    Array PThreadedCode4429 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4430, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4427 = new_Method_with(PArray4428, empty_Array, empty_Array, PThreadedCode4429, 2, PAssign4430, self);
    
    MethodClosure MC_SMB_receiver_ = new_MethodClosure((Method)PMethod4427, Send_Class);
    store_method(Send_Class, SMB_receiver_, MC_SMB_receiver_);
}


static void init_SMB_receiver() {
    Symbol SMB_receiver = new_Symbol(L"receiver");
    Array PThreadedCode4432 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Send_receiver, (Optr)&t_method_return);
    Method PMethod4431 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4432, 1, slot_Kernel_AST_Send_receiver);
    
    MethodClosure MC_SMB_receiver = new_MethodClosure((Method)PMethod4431, Send_Class);
    store_method(Send_Class, SMB_receiver, MC_SMB_receiver);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aSend_0_0 = new_Variable_named(L"aSend", 0);
    Array PArray4434 = new_Array_with(1, (Optr)VAR_aSend_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray4437 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper4439 = new_Super(SMB__equals_, 1, (Optr)VAR_aSend_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend4443 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode4442 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend4443, (Optr)&t_block_return);
    Block PBlock4441 = new_Block_with(empty_Array, empty_Array, PThreadedCode4442, 1, PSend4443);
    // ifFalse:. 
    Send PSend4440 = new_Send((Optr)PSuper4439, SMB_ifFalse_, 1, (Optr)PBlock4441);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend4444 = new_Send((Optr)VAR_aSend_0_0, SMB_receiver, 0);
    // =. 
    Send PSend4445 = new_Send((Optr)slot_Kernel_AST_Send_receiver, SMB__equals_, 1, (Optr)PSend4444);
    Array PThreadedCode4438 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_super1, (Optr)PSuper4439, (Optr)&t_send_ifFalse_, (Optr)PSend4440, (Optr)PBlock4441, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Send_receiver, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend4444, (Optr)&t_send1, (Optr)PSend4445, (Optr)&t_method_return);
    Block PBlock4436 = new_Block_with(PArray4437, empty_Array, PThreadedCode4438, 2, PSend4440, PSend4445);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend4446 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock4436);
    Array PThreadedCode4435 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock4436, (Optr)&t_send1, (Optr)PSend4446, (Optr)&t_method_return);
    Method PMethod4433 = new_Method_with(PArray4434, empty_Array, empty_Array, PThreadedCode4435, 1, PSend4446);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod4433, Send_Class);
    store_method(Send_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_cloneAt_for_() {
    Symbol SMB_cloneAt_for_ = new_Symbol(L"cloneAt:for:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Variable VAR_class_0_1 = new_Variable_named(L"class", 0);
    Array PArray4448 = new_Array_with(2, (Optr)VAR_index_0_0, (Optr)VAR_class_0_1);
    Variable VAR_result_0_2 = new_Variable_named(L"result", 0);
    Array PArray4449 = new_Array_with(1, (Optr)VAR_result_0_2);
    Super PSuper4452 = new_Super(SMB_cloneAt_for_, 2, (Optr)VAR_index_0_0, (Optr)VAR_class_0_1);
    Assign PAssign4451 = new_Assign((Optr)VAR_result_0_2, (Optr)PSuper4452);
    // cloneAt:for:. 
    Send PSend4453 = new_Send((Optr)slot_Kernel_AST_Send_receiver, SMB_cloneAt_for_, 2, (Optr)VAR_index_0_0, (Optr)VAR_class_0_1);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend4454 = new_Send((Optr)VAR_result_0_2, SMB_receiver_, 1, (Optr)PSend4453);
    Array PThreadedCode4450 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign4451, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_push_variable, (Optr)VAR_class_0_1, (Optr)&t_super2, (Optr)PSuper4452, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Send_receiver, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_push_variable, (Optr)VAR_class_0_1, (Optr)&t_send2, (Optr)PSend4453, (Optr)&t_send1, (Optr)PSend4454, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_method_return);
    Method PMethod4447 = new_Method_with(PArray4448, PArray4449, empty_Array, PThreadedCode4450, 3, PAssign4451, PSend4454, VAR_result_0_2);
    
    MethodClosure MC_SMB_cloneAt_for_ = new_MethodClosure((Method)PMethod4447, Send_Class);
    store_method(Send_Class, SMB_cloneAt_for_, MC_SMB_cloneAt_for_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray4456 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitSend_ = new_Symbol(L"visitSend:");
    // visitSend:. 
    Send PSend4458 = new_Send((Optr)VAR_visitor_0_0, SMB_visitSend_, 1, (Optr)self);
    Array PThreadedCode4457 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend4458, (Optr)&t_method_return);
    Method PMethod4455 = new_Method_with(PArray4456, empty_Array, empty_Array, PThreadedCode4457, 1, PSend4458);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod4455, Send_Class);
    store_method(Send_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_class_SMB_receiver_message_size_() {
    Symbol SMB_receiver_message_size_ = new_Symbol(L"receiver:message:size:");
    Variable VAR_rcv_0_0 = new_Variable_named(L"rcv", 0);
    Variable VAR_msg_0_1 = new_Variable_named(L"msg", 0);
    Variable VAR_size_0_2 = new_Variable_named(L"size", 0);
    Array PArray4460 = new_Array_with(3, (Optr)VAR_rcv_0_0, (Optr)VAR_msg_0_1, (Optr)VAR_size_0_2);
    Variable VAR_instance_0_3 = new_Variable_named(L"instance", 0);
    Array PArray4461 = new_Array_with(1, (Optr)VAR_instance_0_3);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend4464 = new_Send((Optr)self, SMB_new_, 1, (Optr)VAR_size_0_2);
    Assign PAssign4463 = new_Assign((Optr)VAR_instance_0_3, (Optr)PSend4464);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray4466 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend4468 = new_Send((Optr)VAR__receiver__1_0, SMB_receiver_, 1, (Optr)VAR_rcv_0_0);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend4469 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)VAR_msg_0_1);
    Array PThreadedCode4467 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_rcv_0_0, (Optr)&t_send1, (Optr)PSend4468, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_msg_0_1, (Optr)&t_send1, (Optr)PSend4469, (Optr)&t_method_return);
    Block PBlock4465 = new_Block_with(PArray4466, empty_Array, PThreadedCode4467, 2, PSend4468, PSend4469);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend4470 = new_Send((Optr)PBlock4465, SMB_value_, 1, (Optr)VAR_instance_0_3);
    Array PThreadedCode4462 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign4463, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_size_0_2, (Optr)&t_send1, (Optr)PSend4464, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock4465, (Optr)&t_push_variable, (Optr)VAR_instance_0_3, (Optr)&t_send1, (Optr)PSend4470, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_instance_0_3, (Optr)&t_method_return);
    Method PMethod4459 = new_Method_with(PArray4460, PArray4461, empty_Array, PThreadedCode4462, 3, PAssign4463, PSend4470, VAR_instance_0_3);
    
    MethodClosure MC_SMB_receiver_message_size_ = new_MethodClosure((Method)PMethod4459, HEADER(Send_Class));
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