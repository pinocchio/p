#include <lib/class/Kernel/AST/AbstractMethod.h>


Optr layout_Kernel_AST_AbstractMethod_Class_class;
Optr slot_Kernel_AST_AbstractMethod_params;
Optr slot_Kernel_AST_AbstractMethod_locals;
Optr slot_Kernel_AST_AbstractMethod_package;
Optr slot_Kernel_AST_AbstractMethod_annotations;
Optr slot_Kernel_AST_AbstractMethod_info;
Optr slot_Kernel_AST_AbstractMethod_threaded;
Optr layout_Kernel_AST_AbstractMethod;


static void init_SMB_threaded() {
    Symbol SMB_threaded = new_Symbol(L"threaded");
    Array PThreadedCode4541 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AbstractMethod_threaded, (Optr)&t_method_return);
    Method PMethod4540 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4541, 1, slot_Kernel_AST_AbstractMethod_threaded);
    
    MethodClosure MC_SMB_threaded = new_MethodClosure((Method)PMethod4540, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_threaded, MC_SMB_threaded);
}


static void init_SMB_annotations_() {
    Symbol SMB_annotations_ = new_Symbol(L"annotations:");
    Variable VAR_aPinocchioArray_0_0 = new_Variable_named(L"aPinocchioArray", 0);
    Array PArray4543 = new_Array_with(1, (Optr)VAR_aPinocchioArray_0_0);
    Assign PAssign4545 = new_Assign((Optr)slot_Kernel_AST_AbstractMethod_annotations, (Optr)VAR_aPinocchioArray_0_0);
    Array PThreadedCode4544 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4545, (Optr)&t_push_variable, (Optr)VAR_aPinocchioArray_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4542 = new_Method_with(PArray4543, empty_Array, empty_Array, PThreadedCode4544, 2, PAssign4545, self);
    
    MethodClosure MC_SMB_annotations_ = new_MethodClosure((Method)PMethod4542, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_annotations_, MC_SMB_annotations_);
}


static void init_SMB_last() {
    Symbol SMB_last = new_Symbol(L"last");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4548 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend4549 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend4548);
    Array PThreadedCode4547 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4548, (Optr)&t_send1, (Optr)PSend4549, (Optr)&t_method_return);
    Method PMethod4546 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4547, 1, PSend4549);
    
    MethodClosure MC_SMB_last = new_MethodClosure((Method)PMethod4546, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_last, MC_SMB_last);
}


static void init_SMB_locals_() {
    Symbol SMB_locals_ = new_Symbol(L"locals:");
    Variable VAR_newlocals_0_0 = new_Variable_named(L"newlocals", 0);
    Array PArray4551 = new_Array_with(1, (Optr)VAR_newlocals_0_0);
    Assign PAssign4553 = new_Assign((Optr)slot_Kernel_AST_AbstractMethod_locals, (Optr)VAR_newlocals_0_0);
    Array PThreadedCode4552 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4553, (Optr)&t_push_variable, (Optr)VAR_newlocals_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4550 = new_Method_with(PArray4551, empty_Array, empty_Array, PThreadedCode4552, 2, PAssign4553, self);
    
    MethodClosure MC_SMB_locals_ = new_MethodClosure((Method)PMethod4550, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_locals_, MC_SMB_locals_);
}


static void init_SMB_locals() {
    Symbol SMB_locals = new_Symbol(L"locals");
    Array PThreadedCode4555 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AbstractMethod_locals, (Optr)&t_method_return);
    Method PMethod4554 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4555, 1, slot_Kernel_AST_AbstractMethod_locals);
    
    MethodClosure MC_SMB_locals = new_MethodClosure((Method)PMethod4554, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_locals, MC_SMB_locals);
}


static void init_SMB_clearNative() {
    Symbol SMB_clearNative = new_Symbol(L"clearNative");
    Array PThreadedCode4557 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod4556 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4557, 1, self);
    
    MethodClosure MC_SMB_clearNative = new_MethodClosure((Method)PMethod4556, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_clearNative, MC_SMB_clearNative);
}


static void init_SMB_first() {
    Symbol SMB_first = new_Symbol(L"first");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend4560 = new_Send((Optr)self, SMB_at_, 1, (Optr)int_1_Const);
    Array PThreadedCode4559 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend4560, (Optr)&t_method_return);
    Method PMethod4558 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4559, 1, PSend4560);
    
    MethodClosure MC_SMB_first = new_MethodClosure((Method)PMethod4558, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_first, MC_SMB_first);
}


static void init_SMB_params_() {
    Symbol SMB_params_ = new_Symbol(L"params:");
    Variable VAR_newparams_0_0 = new_Variable_named(L"newparams", 0);
    Array PArray4562 = new_Array_with(1, (Optr)VAR_newparams_0_0);
    Assign PAssign4564 = new_Assign((Optr)slot_Kernel_AST_AbstractMethod_params, (Optr)VAR_newparams_0_0);
    Array PThreadedCode4563 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4564, (Optr)&t_push_variable, (Optr)VAR_newparams_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4561 = new_Method_with(PArray4562, empty_Array, empty_Array, PThreadedCode4563, 2, PAssign4564, self);
    
    MethodClosure MC_SMB_params_ = new_MethodClosure((Method)PMethod4561, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_params_, MC_SMB_params_);
}


static void init_SMB_depth() {
    Symbol SMB_depth = new_Symbol(L"depth");
    Array PThreadedCode4566 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Method PMethod4565 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4566, 1, int_0_Const);
    
    MethodClosure MC_SMB_depth = new_MethodClosure((Method)PMethod4565, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_depth, MC_SMB_depth);
}


static void init_SMB_accept_on_message_boundBy_() {
    Symbol SMB_accept_on_message_boundBy_ = new_Symbol(L"accept:on:message:boundBy:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_message_0_2 = new_Variable_named(L"message", 0);
    Variable VAR_closure_0_3 = new_Variable_named(L"closure", 0);
    Array PArray4568 = new_Array_with(4, (Optr)VAR_visitor_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_message_0_2, (Optr)VAR_closure_0_3);
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend4570 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode4569 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4570, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4567 = new_Method_with(PArray4568, empty_Array, empty_Array, PThreadedCode4569, 2, PSend4570, self);
    
    MethodClosure MC_SMB_accept_on_message_boundBy_ = new_MethodClosure((Method)PMethod4567, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_accept_on_message_boundBy_, MC_SMB_accept_on_message_boundBy_);
}


static void init_SMB_first_() {
    Symbol SMB_first_ = new_Symbol(L"first:");
    Variable VAR_anElement_0_0 = new_Variable_named(L"anElement", 0);
    Array PArray4572 = new_Array_with(1, (Optr)VAR_anElement_0_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend4574 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)VAR_anElement_0_0);
    Array PThreadedCode4573 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_anElement_0_0, (Optr)&t_send2, (Optr)PSend4574, (Optr)&t_method_return);
    Method PMethod4571 = new_Method_with(PArray4572, empty_Array, empty_Array, PThreadedCode4573, 1, PSend4574);
    
    MethodClosure MC_SMB_first_ = new_MethodClosure((Method)PMethod4571, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_first_, MC_SMB_first_);
}


static void init_SMB_info_() {
    Symbol SMB_info_ = new_Symbol(L"info:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4576 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign4578 = new_Assign((Optr)slot_Kernel_AST_AbstractMethod_info, (Optr)VAR_anObject_0_0);
    Array PThreadedCode4577 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4578, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4575 = new_Method_with(PArray4576, empty_Array, empty_Array, PThreadedCode4577, 2, PAssign4578, self);
    
    MethodClosure MC_SMB_info_ = new_MethodClosure((Method)PMethod4575, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_info_, MC_SMB_info_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray4580 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4582 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray4584 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend4586 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend4587 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend4586);
    Array PThreadedCode4585 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend4586, (Optr)&t_send1, (Optr)PSend4587, (Optr)&t_method_return);
    Block PBlock4583 = new_Block_with(PArray4584, empty_Array, PThreadedCode4585, 1, PSend4587);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend4588 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend4582, (Optr)PBlock4583);
    Array PThreadedCode4581 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4582, (Optr)&t_push_closure, (Optr)PBlock4583, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend4588, (Optr)&t_method_return);
    Method PMethod4579 = new_Method_with(PArray4580, empty_Array, empty_Array, PThreadedCode4581, 1, PSend4588);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod4579, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_numArgs() {
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4591 = new_Send((Optr)slot_Kernel_AST_AbstractMethod_params, SMB_size, 0);
    Array PThreadedCode4590 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AbstractMethod_params, (Optr)&t_send0, (Optr)PSend4591, (Optr)&t_method_return);
    Method PMethod4589 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4590, 1, PSend4591);
    
    MethodClosure MC_SMB_numArgs = new_MethodClosure((Method)PMethod4589, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_numArgs, MC_SMB_numArgs);
}


static void init_SMB_annotations() {
    Symbol SMB_annotations = new_Symbol(L"annotations");
    Array PThreadedCode4593 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AbstractMethod_annotations, (Optr)&t_method_return);
    Method PMethod4592 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4593, 1, slot_Kernel_AST_AbstractMethod_annotations);
    
    MethodClosure MC_SMB_annotations = new_MethodClosure((Method)PMethod4592, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_annotations, MC_SMB_annotations);
}


static void init_SMB_inject_into_() {
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    Variable VAR_thisValue_0_0 = new_Variable_named(L"thisValue", 0);
    Variable VAR_binaryBlock_0_1 = new_Variable_named(L"binaryBlock", 0);
    Array PArray4595 = new_Array_with(2, (Optr)VAR_thisValue_0_0, (Optr)VAR_binaryBlock_0_1);
    Variable VAR_nextValue_0_2 = new_Variable_named(L"nextValue", 0);
    Array PArray4596 = new_Array_with(1, (Optr)VAR_nextValue_0_2);
    Assign PAssign4598 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)VAR_thisValue_0_0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray4600 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend4603 = new_Send((Optr)VAR_binaryBlock_0_1, SMB_value_value_, 2, (Optr)VAR_nextValue_0_2, (Optr)VAR_each_1_0);
    Assign PAssign4602 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)PSend4603);
    Array PThreadedCode4601 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign4602, (Optr)&t_push_variable, (Optr)VAR_binaryBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send2, (Optr)PSend4603, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock4599 = new_Block_with(PArray4600, empty_Array, PThreadedCode4601, 1, PAssign4602);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend4604 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock4599);
    Array PThreadedCode4597 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign4598, (Optr)&t_push_variable, (Optr)VAR_thisValue_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock4599, (Optr)&t_send1, (Optr)PSend4604, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_method_return);
    Method PMethod4594 = new_Method_with(PArray4595, PArray4596, empty_Array, PThreadedCode4597, 3, PAssign4598, PSend4604, VAR_nextValue_0_2);
    
    MethodClosure MC_SMB_inject_into_ = new_MethodClosure((Method)PMethod4594, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_inject_into_, MC_SMB_inject_into_);
}


static void init_SMB_annotationAt_() {
    Symbol SMB_annotationAt_ = new_Symbol(L"annotationAt:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray4606 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray4609 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_annotation_2_0 = new_Variable_named(L"annotation", 2);
    Array PArray4612 = new_Array_with(1, (Optr)VAR_annotation_2_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend4614 = new_Send((Optr)VAR_annotation_2_0, SMB_selector, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend4615 = new_Send((Optr)PSend4614, SMB__equals_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend4619 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_annotation_2_0);
    Array PThreadedCode4618 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_annotation_2_0, (Optr)&t_send1, (Optr)PSend4619, (Optr)&t_block_return);
    Block PBlock4617 = new_Block_with(empty_Array, empty_Array, PThreadedCode4618, 1, PSend4619);
    // ifTrue:. 
    Send PSend4616 = new_Send((Optr)PSend4615, SMB_ifTrue_, 1, (Optr)PBlock4617);
    Array PThreadedCode4613 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_annotation_2_0, (Optr)&t_send0, (Optr)PSend4614, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend4615, (Optr)&t_send_ifTrue_, (Optr)PSend4616, (Optr)PBlock4617, (Optr)&t_method_return);
    Block PBlock4611 = new_Block_with(PArray4612, empty_Array, PThreadedCode4613, 1, PSend4616);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend4620 = new_Send((Optr)slot_Kernel_AST_AbstractMethod_annotations, SMB_do_, 1, (Optr)PBlock4611);
    Array PThreadedCode4610 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AbstractMethod_annotations, (Optr)&t_push_closure, (Optr)PBlock4611, (Optr)&t_send1, (Optr)PSend4620, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Block PBlock4608 = new_Block_with(PArray4609, empty_Array, PThreadedCode4610, 2, PSend4620, nil_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend4621 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock4608);
    Array PThreadedCode4607 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock4608, (Optr)&t_send1, (Optr)PSend4621, (Optr)&t_method_return);
    Method PMethod4605 = new_Method_with(PArray4606, empty_Array, empty_Array, PThreadedCode4607, 1, PSend4621);
    
    MethodClosure MC_SMB_annotationAt_ = new_MethodClosure((Method)PMethod4605, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_annotationAt_, MC_SMB_annotationAt_);
}


static void init_SMB_package() {
    Symbol SMB_package = new_Symbol(L"package");
    Array PThreadedCode4623 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AbstractMethod_package, (Optr)&t_method_return);
    Method PMethod4622 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4623, 1, slot_Kernel_AST_AbstractMethod_package);
    
    MethodClosure MC_SMB_package = new_MethodClosure((Method)PMethod4622, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_package, MC_SMB_package);
}


static void init_SMB_package_() {
    Symbol SMB_package_ = new_Symbol(L"package:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4625 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign4627 = new_Assign((Optr)slot_Kernel_AST_AbstractMethod_package, (Optr)VAR_anObject_0_0);
    Array PThreadedCode4626 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4627, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4624 = new_Method_with(PArray4625, empty_Array, empty_Array, PThreadedCode4626, 2, PAssign4627, self);
    
    MethodClosure MC_SMB_package_ = new_MethodClosure((Method)PMethod4624, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_package_, MC_SMB_package_);
}


static void init_SMB_info() {
    Symbol SMB_info = new_Symbol(L"info");
    Array PThreadedCode4629 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AbstractMethod_info, (Optr)&t_method_return);
    Method PMethod4628 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4629, 1, slot_Kernel_AST_AbstractMethod_info);
    
    MethodClosure MC_SMB_info = new_MethodClosure((Method)PMethod4628, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_info, MC_SMB_info);
}


static void init_SMB_last_() {
    Symbol SMB_last_ = new_Symbol(L"last:");
    Variable VAR_anElement_0_0 = new_Variable_named(L"anElement", 0);
    Array PArray4631 = new_Array_with(1, (Optr)VAR_anElement_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4633 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend4634 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend4633, (Optr)VAR_anElement_0_0);
    Array PThreadedCode4632 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4633, (Optr)&t_push_variable, (Optr)VAR_anElement_0_0, (Optr)&t_send2, (Optr)PSend4634, (Optr)&t_method_return);
    Method PMethod4630 = new_Method_with(PArray4631, empty_Array, empty_Array, PThreadedCode4632, 1, PSend4634);
    
    MethodClosure MC_SMB_last_ = new_MethodClosure((Method)PMethod4630, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_last_, MC_SMB_last_);
}


static void init_SMB_params() {
    Symbol SMB_params = new_Symbol(L"params");
    Array PThreadedCode4636 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AbstractMethod_params, (Optr)&t_method_return);
    Method PMethod4635 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4636, 1, slot_Kernel_AST_AbstractMethod_params);
    
    MethodClosure MC_SMB_params = new_MethodClosure((Method)PMethod4635, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_params, MC_SMB_params);
}


static void init_SMB_threaded_() {
    Symbol SMB_threaded_ = new_Symbol(L"threaded:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4638 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign4640 = new_Assign((Optr)slot_Kernel_AST_AbstractMethod_threaded, (Optr)VAR_anObject_0_0);
    Array PThreadedCode4639 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4640, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4637 = new_Method_with(PArray4638, empty_Array, empty_Array, PThreadedCode4639, 2, PAssign4640, self);
    
    MethodClosure MC_SMB_threaded_ = new_MethodClosure((Method)PMethod4637, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_threaded_, MC_SMB_threaded_);
}


static void init_SMB_params_locals_() {
    Symbol SMB_params_locals_ = new_Symbol(L"params:locals:");
    Variable VAR_newParams_0_0 = new_Variable_named(L"newParams", 0);
    Variable VAR_newLocals_0_1 = new_Variable_named(L"newLocals", 0);
    Array PArray4642 = new_Array_with(2, (Optr)VAR_newParams_0_0, (Optr)VAR_newLocals_0_1);
    Variable VAR_start_0_2 = new_Variable_named(L"start", 0);
    Array PArray4643 = new_Array_with(1, (Optr)VAR_start_0_2);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray4646 = new_Array_with(2, (Optr)VAR_each_1_0, (Optr)VAR_index_1_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend4648 = new_Send((Optr)VAR_index_1_1, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_localId_ = new_Symbol(L"localId:");
    // localId:. 
    Send PSend4649 = new_Send((Optr)VAR_each_1_0, SMB_localId_, 1, (Optr)PSend4648);
    Array PThreadedCode4647 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend4648, (Optr)&t_send1, (Optr)PSend4649, (Optr)&t_method_return);
    Block PBlock4645 = new_Block_with(PArray4646, empty_Array, PThreadedCode4647, 1, PSend4649);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend4650 = new_Send((Optr)VAR_newParams_0_0, SMB_withIndexDo_, 1, (Optr)PBlock4645);
    Assign PAssign4651 = new_Assign((Optr)slot_Kernel_AST_AbstractMethod_params, (Optr)VAR_newParams_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4653 = new_Send((Optr)VAR_newParams_0_0, SMB_size, 0);
    Assign PAssign4652 = new_Assign((Optr)VAR_start_0_2, (Optr)PSend4653);
    Array PArray4655 = new_Array_with(2, (Optr)VAR_each_1_0, (Optr)VAR_index_1_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend4657 = new_Send((Optr)VAR_start_0_2, SMB__plus_, 1, (Optr)VAR_index_1_1);
    // -. 
    Send PSend4658 = new_Send((Optr)PSend4657, SMB__minus_, 1, (Optr)int_1_Const);
    // localId:. 
    Send PSend4659 = new_Send((Optr)VAR_each_1_0, SMB_localId_, 1, (Optr)PSend4658);
    Array PThreadedCode4656 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_start_0_2, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_send1, (Optr)PSend4657, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend4658, (Optr)&t_send1, (Optr)PSend4659, (Optr)&t_method_return);
    Block PBlock4654 = new_Block_with(PArray4655, empty_Array, PThreadedCode4656, 1, PSend4659);
    // withIndexDo:. 
    Send PSend4660 = new_Send((Optr)VAR_newLocals_0_1, SMB_withIndexDo_, 1, (Optr)PBlock4654);
    Assign PAssign4661 = new_Assign((Optr)slot_Kernel_AST_AbstractMethod_locals, (Optr)VAR_newLocals_0_1);
    Array PThreadedCode4644 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_newParams_0_0, (Optr)&t_push_closure, (Optr)PBlock4645, (Optr)&t_send1, (Optr)PSend4650, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign4651, (Optr)&t_push_variable, (Optr)VAR_newParams_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign4652, (Optr)&t_push_variable, (Optr)VAR_newParams_0_0, (Optr)&t_send0, (Optr)PSend4653, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newLocals_0_1, (Optr)&t_push_closure, (Optr)PBlock4654, (Optr)&t_send1, (Optr)PSend4660, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign4661, (Optr)&t_push_variable, (Optr)VAR_newLocals_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4641 = new_Method_with(PArray4642, PArray4643, empty_Array, PThreadedCode4644, 6, PSend4650, PAssign4651, PAssign4652, PSend4660, PAssign4661, self);
    
    MethodClosure MC_SMB_params_locals_ = new_MethodClosure((Method)PMethod4641, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_params_locals_, MC_SMB_params_locals_);
}


static void init_class_SMB_withAll_() {
    Symbol SMB_withAll_ = new_Symbol(L"withAll:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray4663 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Variable VAR_index_0_2 = new_Variable_named(L"index", 0);
    Array PArray4664 = new_Array_with(2, (Optr)VAR_result_0_1, (Optr)VAR_index_0_2);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4668 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    // new:. 
    Send PSend4667 = new_Send((Optr)self, SMB_new_, 1, (Optr)PSend4668);
    Assign PAssign4666 = new_Assign((Optr)VAR_result_0_1, (Optr)PSend4667);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign4669 = new_Assign((Optr)VAR_index_0_2, (Optr)int_1_Const);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray4671 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend4673 = new_Send((Optr)VAR_result_0_1, SMB_at_put_, 2, (Optr)VAR_index_0_2, (Optr)VAR_each_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend4675 = new_Send((Optr)VAR_index_0_2, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign4674 = new_Assign((Optr)VAR_index_0_2, (Optr)PSend4675);
    Array PThreadedCode4672 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_push_variable, (Optr)VAR_index_0_2, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send2, (Optr)PSend4673, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign4674, (Optr)&t_push_variable, (Optr)VAR_index_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend4675, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock4670 = new_Block_with(PArray4671, empty_Array, PThreadedCode4672, 2, PSend4673, PAssign4674);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend4676 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock4670);
    Array PThreadedCode4665 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign4666, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend4668, (Optr)&t_send1, (Optr)PSend4667, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign4669, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock4670, (Optr)&t_send1, (Optr)PSend4676, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_method_return);
    Method PMethod4662 = new_Method_with(PArray4663, PArray4664, empty_Array, PThreadedCode4665, 4, PAssign4666, PAssign4669, PSend4676, VAR_result_0_1);
    
    MethodClosure MC_SMB_withAll_ = new_MethodClosure((Method)PMethod4662, HEADER(Kernel_AST_AbstractMethod_Class));
    store_method(HEADER(Kernel_AST_AbstractMethod_Class), SMB_withAll_, MC_SMB_withAll_);
}

void init_Kernel_AST_PAbstractMethod_layout() {
    layout_Kernel_AST_AbstractMethod_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_AST_AbstractMethod_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_AST_AbstractMethod_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_AST_AbstractMethod_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_AST_AbstractMethod_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_AST_AbstractMethod_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_AbstractMethod = new_Symbol(L"AbstractMethod");
    slot_Kernel_AST_AbstractMethod_params = (Optr)new_Slot(0, L"params");
    slot_Kernel_AST_AbstractMethod_locals = (Optr)new_Slot(1, L"locals");
    slot_Kernel_AST_AbstractMethod_package = (Optr)new_Slot(2, L"package");
    slot_Kernel_AST_AbstractMethod_annotations = (Optr)new_Slot(3, L"annotations");
    slot_Kernel_AST_AbstractMethod_info = (Optr)new_Slot(4, L"info");
    slot_Kernel_AST_AbstractMethod_threaded = (Optr)new_Slot(5, L"threaded");
    layout_Kernel_AST_AbstractMethod = (Optr)create_layout_with_vars(ArrayLayout_Class, 6);
    ((Array)layout_Kernel_AST_AbstractMethod)->values[0] = slot_Kernel_AST_AbstractMethod_params;
    ((Array)layout_Kernel_AST_AbstractMethod)->values[1] = slot_Kernel_AST_AbstractMethod_locals;
    ((Array)layout_Kernel_AST_AbstractMethod)->values[2] = slot_Kernel_AST_AbstractMethod_package;
    ((Array)layout_Kernel_AST_AbstractMethod)->values[3] = slot_Kernel_AST_AbstractMethod_annotations;
    ((Array)layout_Kernel_AST_AbstractMethod)->values[4] = slot_Kernel_AST_AbstractMethod_info;
    ((Array)layout_Kernel_AST_AbstractMethod)->values[5] = slot_Kernel_AST_AbstractMethod_threaded;
    Kernel_AST_AbstractMethod_Class = (Class)new_Class(Kernel_AST_Node_Class, layout_Kernel_AST_AbstractMethod_Class_class);
    Kernel_AST_AbstractMethod_Class->layout = layout_Kernel_AST_AbstractMethod;
    Kernel_AST_AbstractMethod_Class->name = SMB_AbstractMethod;
    
}

void init_Kernel_AST_PAbstractMethod_methods() {
    init_SMB_threaded();
    init_SMB_annotations_();
    init_SMB_last();
    init_SMB_locals_();
    init_SMB_locals();
    init_SMB_clearNative();
    init_SMB_first();
    init_SMB_params_();
    init_SMB_depth();
    init_SMB_accept_on_message_boundBy_();
    init_SMB_first_();
    init_SMB_info_();
    init_SMB_do_();
    init_SMB_numArgs();
    init_SMB_annotations();
    init_SMB_inject_into_();
    init_SMB_annotationAt_();
    init_SMB_package();
    init_SMB_package_();
    init_SMB_info();
    init_SMB_last_();
    init_SMB_params();
    init_SMB_threaded_();
    init_SMB_params_locals_();
    init_class_SMB_withAll_();
    
}