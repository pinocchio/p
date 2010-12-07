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
    Array PThreadedCode4539 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AbstractMethod_threaded, (Optr)&t_method_return);
    Method PMethod4538 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4539, 1, slot_Kernel_AST_AbstractMethod_threaded);
    
    MethodClosure MC_SMB_threaded = new_MethodClosure((Method)PMethod4538, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_threaded, MC_SMB_threaded);
}


static void init_SMB_annotations_() {
    Symbol SMB_annotations_ = new_Symbol(L"annotations:");
    Variable VAR_aPinocchioArray_0_0 = new_Variable_named(L"aPinocchioArray", 0);
    Array PArray4541 = new_Array_with(1, (Optr)VAR_aPinocchioArray_0_0);
    Assign PAssign4543 = new_Assign((Optr)slot_Kernel_AST_AbstractMethod_annotations, (Optr)VAR_aPinocchioArray_0_0);
    Array PThreadedCode4542 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4543, (Optr)&t_push_variable, (Optr)VAR_aPinocchioArray_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4540 = new_Method_with(PArray4541, empty_Array, empty_Array, PThreadedCode4542, 2, PAssign4543, self);
    
    MethodClosure MC_SMB_annotations_ = new_MethodClosure((Method)PMethod4540, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_annotations_, MC_SMB_annotations_);
}


static void init_SMB_last() {
    Symbol SMB_last = new_Symbol(L"last");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4546 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend4547 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend4546);
    Array PThreadedCode4545 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4546, (Optr)&t_send1, (Optr)PSend4547, (Optr)&t_method_return);
    Method PMethod4544 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4545, 1, PSend4547);
    
    MethodClosure MC_SMB_last = new_MethodClosure((Method)PMethod4544, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_last, MC_SMB_last);
}


static void init_SMB_locals_() {
    Symbol SMB_locals_ = new_Symbol(L"locals:");
    Variable VAR_newlocals_0_0 = new_Variable_named(L"newlocals", 0);
    Array PArray4549 = new_Array_with(1, (Optr)VAR_newlocals_0_0);
    Assign PAssign4551 = new_Assign((Optr)slot_Kernel_AST_AbstractMethod_locals, (Optr)VAR_newlocals_0_0);
    Array PThreadedCode4550 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4551, (Optr)&t_push_variable, (Optr)VAR_newlocals_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4548 = new_Method_with(PArray4549, empty_Array, empty_Array, PThreadedCode4550, 2, PAssign4551, self);
    
    MethodClosure MC_SMB_locals_ = new_MethodClosure((Method)PMethod4548, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_locals_, MC_SMB_locals_);
}


static void init_SMB_locals() {
    Symbol SMB_locals = new_Symbol(L"locals");
    Array PThreadedCode4553 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AbstractMethod_locals, (Optr)&t_method_return);
    Method PMethod4552 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4553, 1, slot_Kernel_AST_AbstractMethod_locals);
    
    MethodClosure MC_SMB_locals = new_MethodClosure((Method)PMethod4552, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_locals, MC_SMB_locals);
}


static void init_SMB_clearNative() {
    Symbol SMB_clearNative = new_Symbol(L"clearNative");
    Array PThreadedCode4555 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod4554 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4555, 1, self);
    
    MethodClosure MC_SMB_clearNative = new_MethodClosure((Method)PMethod4554, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_clearNative, MC_SMB_clearNative);
}


static void init_SMB_first() {
    Symbol SMB_first = new_Symbol(L"first");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend4558 = new_Send((Optr)self, SMB_at_, 1, (Optr)int_1_Const);
    Array PThreadedCode4557 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend4558, (Optr)&t_method_return);
    Method PMethod4556 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4557, 1, PSend4558);
    
    MethodClosure MC_SMB_first = new_MethodClosure((Method)PMethod4556, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_first, MC_SMB_first);
}


static void init_SMB_params_() {
    Symbol SMB_params_ = new_Symbol(L"params:");
    Variable VAR_newparams_0_0 = new_Variable_named(L"newparams", 0);
    Array PArray4560 = new_Array_with(1, (Optr)VAR_newparams_0_0);
    Assign PAssign4562 = new_Assign((Optr)slot_Kernel_AST_AbstractMethod_params, (Optr)VAR_newparams_0_0);
    Array PThreadedCode4561 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4562, (Optr)&t_push_variable, (Optr)VAR_newparams_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4559 = new_Method_with(PArray4560, empty_Array, empty_Array, PThreadedCode4561, 2, PAssign4562, self);
    
    MethodClosure MC_SMB_params_ = new_MethodClosure((Method)PMethod4559, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_params_, MC_SMB_params_);
}


static void init_SMB_depth() {
    Symbol SMB_depth = new_Symbol(L"depth");
    Array PThreadedCode4564 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Method PMethod4563 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4564, 1, int_0_Const);
    
    MethodClosure MC_SMB_depth = new_MethodClosure((Method)PMethod4563, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_depth, MC_SMB_depth);
}


static void init_SMB_accept_on_message_boundBy_() {
    Symbol SMB_accept_on_message_boundBy_ = new_Symbol(L"accept:on:message:boundBy:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_message_0_2 = new_Variable_named(L"message", 0);
    Variable VAR_closure_0_3 = new_Variable_named(L"closure", 0);
    Array PArray4566 = new_Array_with(4, (Optr)VAR_visitor_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_message_0_2, (Optr)VAR_closure_0_3);
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend4568 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode4567 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4568, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4565 = new_Method_with(PArray4566, empty_Array, empty_Array, PThreadedCode4567, 2, PSend4568, self);
    
    MethodClosure MC_SMB_accept_on_message_boundBy_ = new_MethodClosure((Method)PMethod4565, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_accept_on_message_boundBy_, MC_SMB_accept_on_message_boundBy_);
}


static void init_SMB_first_() {
    Symbol SMB_first_ = new_Symbol(L"first:");
    Variable VAR_anElement_0_0 = new_Variable_named(L"anElement", 0);
    Array PArray4570 = new_Array_with(1, (Optr)VAR_anElement_0_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend4572 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)VAR_anElement_0_0);
    Array PThreadedCode4571 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_anElement_0_0, (Optr)&t_send2, (Optr)PSend4572, (Optr)&t_method_return);
    Method PMethod4569 = new_Method_with(PArray4570, empty_Array, empty_Array, PThreadedCode4571, 1, PSend4572);
    
    MethodClosure MC_SMB_first_ = new_MethodClosure((Method)PMethod4569, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_first_, MC_SMB_first_);
}


static void init_SMB_info_() {
    Symbol SMB_info_ = new_Symbol(L"info:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4574 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign4576 = new_Assign((Optr)slot_Kernel_AST_AbstractMethod_info, (Optr)VAR_anObject_0_0);
    Array PThreadedCode4575 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4576, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4573 = new_Method_with(PArray4574, empty_Array, empty_Array, PThreadedCode4575, 2, PAssign4576, self);
    
    MethodClosure MC_SMB_info_ = new_MethodClosure((Method)PMethod4573, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_info_, MC_SMB_info_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray4578 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4580 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray4582 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend4584 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend4585 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend4584);
    Array PThreadedCode4583 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend4584, (Optr)&t_send1, (Optr)PSend4585, (Optr)&t_method_return);
    Block PBlock4581 = new_Block_with(PArray4582, empty_Array, PThreadedCode4583, 1, PSend4585);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend4586 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend4580, (Optr)PBlock4581);
    Array PThreadedCode4579 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4580, (Optr)&t_push_closure, (Optr)PBlock4581, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend4586, (Optr)&t_method_return);
    Method PMethod4577 = new_Method_with(PArray4578, empty_Array, empty_Array, PThreadedCode4579, 1, PSend4586);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod4577, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_numArgs() {
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4589 = new_Send((Optr)slot_Kernel_AST_AbstractMethod_params, SMB_size, 0);
    Array PThreadedCode4588 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AbstractMethod_params, (Optr)&t_send0, (Optr)PSend4589, (Optr)&t_method_return);
    Method PMethod4587 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4588, 1, PSend4589);
    
    MethodClosure MC_SMB_numArgs = new_MethodClosure((Method)PMethod4587, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_numArgs, MC_SMB_numArgs);
}


static void init_SMB_annotations() {
    Symbol SMB_annotations = new_Symbol(L"annotations");
    Array PThreadedCode4591 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AbstractMethod_annotations, (Optr)&t_method_return);
    Method PMethod4590 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4591, 1, slot_Kernel_AST_AbstractMethod_annotations);
    
    MethodClosure MC_SMB_annotations = new_MethodClosure((Method)PMethod4590, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_annotations, MC_SMB_annotations);
}


static void init_SMB_inject_into_() {
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    Variable VAR_thisValue_0_0 = new_Variable_named(L"thisValue", 0);
    Variable VAR_binaryBlock_0_1 = new_Variable_named(L"binaryBlock", 0);
    Array PArray4593 = new_Array_with(2, (Optr)VAR_thisValue_0_0, (Optr)VAR_binaryBlock_0_1);
    Variable VAR_nextValue_0_2 = new_Variable_named(L"nextValue", 0);
    Array PArray4594 = new_Array_with(1, (Optr)VAR_nextValue_0_2);
    Assign PAssign4596 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)VAR_thisValue_0_0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray4598 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend4601 = new_Send((Optr)VAR_binaryBlock_0_1, SMB_value_value_, 2, (Optr)VAR_nextValue_0_2, (Optr)VAR_each_1_0);
    Assign PAssign4600 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)PSend4601);
    Array PThreadedCode4599 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign4600, (Optr)&t_push_variable, (Optr)VAR_binaryBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send2, (Optr)PSend4601, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock4597 = new_Block_with(PArray4598, empty_Array, PThreadedCode4599, 1, PAssign4600);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend4602 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock4597);
    Array PThreadedCode4595 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign4596, (Optr)&t_push_variable, (Optr)VAR_thisValue_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock4597, (Optr)&t_send1, (Optr)PSend4602, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_method_return);
    Method PMethod4592 = new_Method_with(PArray4593, PArray4594, empty_Array, PThreadedCode4595, 3, PAssign4596, PSend4602, VAR_nextValue_0_2);
    
    MethodClosure MC_SMB_inject_into_ = new_MethodClosure((Method)PMethod4592, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_inject_into_, MC_SMB_inject_into_);
}


static void init_SMB_annotationAt_() {
    Symbol SMB_annotationAt_ = new_Symbol(L"annotationAt:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray4604 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray4607 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_annotation_2_0 = new_Variable_named(L"annotation", 2);
    Array PArray4610 = new_Array_with(1, (Optr)VAR_annotation_2_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend4612 = new_Send((Optr)VAR_annotation_2_0, SMB_selector, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend4613 = new_Send((Optr)PSend4612, SMB__equals_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend4617 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_annotation_2_0);
    Array PThreadedCode4616 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_annotation_2_0, (Optr)&t_send1, (Optr)PSend4617, (Optr)&t_block_return);
    Block PBlock4615 = new_Block_with(empty_Array, empty_Array, PThreadedCode4616, 1, PSend4617);
    // ifTrue:. 
    Send PSend4614 = new_Send((Optr)PSend4613, SMB_ifTrue_, 1, (Optr)PBlock4615);
    Array PThreadedCode4611 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_annotation_2_0, (Optr)&t_send0, (Optr)PSend4612, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend4613, (Optr)&t_send_ifTrue_, (Optr)PSend4614, (Optr)PBlock4615, (Optr)&t_method_return);
    Block PBlock4609 = new_Block_with(PArray4610, empty_Array, PThreadedCode4611, 1, PSend4614);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend4618 = new_Send((Optr)slot_Kernel_AST_AbstractMethod_annotations, SMB_do_, 1, (Optr)PBlock4609);
    Array PThreadedCode4608 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AbstractMethod_annotations, (Optr)&t_push_closure, (Optr)PBlock4609, (Optr)&t_send1, (Optr)PSend4618, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Block PBlock4606 = new_Block_with(PArray4607, empty_Array, PThreadedCode4608, 2, PSend4618, nil_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend4619 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock4606);
    Array PThreadedCode4605 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock4606, (Optr)&t_send1, (Optr)PSend4619, (Optr)&t_method_return);
    Method PMethod4603 = new_Method_with(PArray4604, empty_Array, empty_Array, PThreadedCode4605, 1, PSend4619);
    
    MethodClosure MC_SMB_annotationAt_ = new_MethodClosure((Method)PMethod4603, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_annotationAt_, MC_SMB_annotationAt_);
}


static void init_SMB_package() {
    Symbol SMB_package = new_Symbol(L"package");
    Array PThreadedCode4621 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AbstractMethod_package, (Optr)&t_method_return);
    Method PMethod4620 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4621, 1, slot_Kernel_AST_AbstractMethod_package);
    
    MethodClosure MC_SMB_package = new_MethodClosure((Method)PMethod4620, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_package, MC_SMB_package);
}


static void init_SMB_package_() {
    Symbol SMB_package_ = new_Symbol(L"package:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4623 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign4625 = new_Assign((Optr)slot_Kernel_AST_AbstractMethod_package, (Optr)VAR_anObject_0_0);
    Array PThreadedCode4624 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4625, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4622 = new_Method_with(PArray4623, empty_Array, empty_Array, PThreadedCode4624, 2, PAssign4625, self);
    
    MethodClosure MC_SMB_package_ = new_MethodClosure((Method)PMethod4622, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_package_, MC_SMB_package_);
}


static void init_SMB_info() {
    Symbol SMB_info = new_Symbol(L"info");
    Array PThreadedCode4627 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AbstractMethod_info, (Optr)&t_method_return);
    Method PMethod4626 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4627, 1, slot_Kernel_AST_AbstractMethod_info);
    
    MethodClosure MC_SMB_info = new_MethodClosure((Method)PMethod4626, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_info, MC_SMB_info);
}


static void init_SMB_last_() {
    Symbol SMB_last_ = new_Symbol(L"last:");
    Variable VAR_anElement_0_0 = new_Variable_named(L"anElement", 0);
    Array PArray4629 = new_Array_with(1, (Optr)VAR_anElement_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4631 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend4632 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend4631, (Optr)VAR_anElement_0_0);
    Array PThreadedCode4630 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4631, (Optr)&t_push_variable, (Optr)VAR_anElement_0_0, (Optr)&t_send2, (Optr)PSend4632, (Optr)&t_method_return);
    Method PMethod4628 = new_Method_with(PArray4629, empty_Array, empty_Array, PThreadedCode4630, 1, PSend4632);
    
    MethodClosure MC_SMB_last_ = new_MethodClosure((Method)PMethod4628, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_last_, MC_SMB_last_);
}


static void init_SMB_params() {
    Symbol SMB_params = new_Symbol(L"params");
    Array PThreadedCode4634 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AbstractMethod_params, (Optr)&t_method_return);
    Method PMethod4633 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4634, 1, slot_Kernel_AST_AbstractMethod_params);
    
    MethodClosure MC_SMB_params = new_MethodClosure((Method)PMethod4633, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_params, MC_SMB_params);
}


static void init_SMB_threaded_() {
    Symbol SMB_threaded_ = new_Symbol(L"threaded:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4636 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign4638 = new_Assign((Optr)slot_Kernel_AST_AbstractMethod_threaded, (Optr)VAR_anObject_0_0);
    Array PThreadedCode4637 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4638, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4635 = new_Method_with(PArray4636, empty_Array, empty_Array, PThreadedCode4637, 2, PAssign4638, self);
    
    MethodClosure MC_SMB_threaded_ = new_MethodClosure((Method)PMethod4635, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_threaded_, MC_SMB_threaded_);
}


static void init_SMB_params_locals_() {
    Symbol SMB_params_locals_ = new_Symbol(L"params:locals:");
    Variable VAR_newParams_0_0 = new_Variable_named(L"newParams", 0);
    Variable VAR_newLocals_0_1 = new_Variable_named(L"newLocals", 0);
    Array PArray4640 = new_Array_with(2, (Optr)VAR_newParams_0_0, (Optr)VAR_newLocals_0_1);
    Variable VAR_start_0_2 = new_Variable_named(L"start", 0);
    Array PArray4641 = new_Array_with(1, (Optr)VAR_start_0_2);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray4644 = new_Array_with(2, (Optr)VAR_each_1_0, (Optr)VAR_index_1_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend4646 = new_Send((Optr)VAR_index_1_1, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_localId_ = new_Symbol(L"localId:");
    // localId:. 
    Send PSend4647 = new_Send((Optr)VAR_each_1_0, SMB_localId_, 1, (Optr)PSend4646);
    Array PThreadedCode4645 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend4646, (Optr)&t_send1, (Optr)PSend4647, (Optr)&t_method_return);
    Block PBlock4643 = new_Block_with(PArray4644, empty_Array, PThreadedCode4645, 1, PSend4647);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend4648 = new_Send((Optr)VAR_newParams_0_0, SMB_withIndexDo_, 1, (Optr)PBlock4643);
    Assign PAssign4649 = new_Assign((Optr)slot_Kernel_AST_AbstractMethod_params, (Optr)VAR_newParams_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4651 = new_Send((Optr)VAR_newParams_0_0, SMB_size, 0);
    Assign PAssign4650 = new_Assign((Optr)VAR_start_0_2, (Optr)PSend4651);
    Array PArray4653 = new_Array_with(2, (Optr)VAR_each_1_0, (Optr)VAR_index_1_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend4655 = new_Send((Optr)VAR_start_0_2, SMB__plus_, 1, (Optr)VAR_index_1_1);
    // -. 
    Send PSend4656 = new_Send((Optr)PSend4655, SMB__minus_, 1, (Optr)int_1_Const);
    // localId:. 
    Send PSend4657 = new_Send((Optr)VAR_each_1_0, SMB_localId_, 1, (Optr)PSend4656);
    Array PThreadedCode4654 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_start_0_2, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_send1, (Optr)PSend4655, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend4656, (Optr)&t_send1, (Optr)PSend4657, (Optr)&t_method_return);
    Block PBlock4652 = new_Block_with(PArray4653, empty_Array, PThreadedCode4654, 1, PSend4657);
    // withIndexDo:. 
    Send PSend4658 = new_Send((Optr)VAR_newLocals_0_1, SMB_withIndexDo_, 1, (Optr)PBlock4652);
    Assign PAssign4659 = new_Assign((Optr)slot_Kernel_AST_AbstractMethod_locals, (Optr)VAR_newLocals_0_1);
    Array PThreadedCode4642 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_newParams_0_0, (Optr)&t_push_closure, (Optr)PBlock4643, (Optr)&t_send1, (Optr)PSend4648, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign4649, (Optr)&t_push_variable, (Optr)VAR_newParams_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign4650, (Optr)&t_push_variable, (Optr)VAR_newParams_0_0, (Optr)&t_send0, (Optr)PSend4651, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newLocals_0_1, (Optr)&t_push_closure, (Optr)PBlock4652, (Optr)&t_send1, (Optr)PSend4658, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign4659, (Optr)&t_push_variable, (Optr)VAR_newLocals_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4639 = new_Method_with(PArray4640, PArray4641, empty_Array, PThreadedCode4642, 6, PSend4648, PAssign4649, PAssign4650, PSend4658, PAssign4659, self);
    
    MethodClosure MC_SMB_params_locals_ = new_MethodClosure((Method)PMethod4639, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_params_locals_, MC_SMB_params_locals_);
}


static void init_class_SMB_withAll_() {
    Symbol SMB_withAll_ = new_Symbol(L"withAll:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray4661 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Variable VAR_index_0_2 = new_Variable_named(L"index", 0);
    Array PArray4662 = new_Array_with(2, (Optr)VAR_result_0_1, (Optr)VAR_index_0_2);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4666 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    // new:. 
    Send PSend4665 = new_Send((Optr)self, SMB_new_, 1, (Optr)PSend4666);
    Assign PAssign4664 = new_Assign((Optr)VAR_result_0_1, (Optr)PSend4665);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign4667 = new_Assign((Optr)VAR_index_0_2, (Optr)int_1_Const);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray4669 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend4671 = new_Send((Optr)VAR_result_0_1, SMB_at_put_, 2, (Optr)VAR_index_0_2, (Optr)VAR_each_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend4673 = new_Send((Optr)VAR_index_0_2, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign4672 = new_Assign((Optr)VAR_index_0_2, (Optr)PSend4673);
    Array PThreadedCode4670 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_push_variable, (Optr)VAR_index_0_2, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send2, (Optr)PSend4671, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign4672, (Optr)&t_push_variable, (Optr)VAR_index_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend4673, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock4668 = new_Block_with(PArray4669, empty_Array, PThreadedCode4670, 2, PSend4671, PAssign4672);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend4674 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock4668);
    Array PThreadedCode4663 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign4664, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend4666, (Optr)&t_send1, (Optr)PSend4665, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign4667, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock4668, (Optr)&t_send1, (Optr)PSend4674, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_method_return);
    Method PMethod4660 = new_Method_with(PArray4661, PArray4662, empty_Array, PThreadedCode4663, 4, PAssign4664, PAssign4667, PSend4674, VAR_result_0_1);
    
    MethodClosure MC_SMB_withAll_ = new_MethodClosure((Method)PMethod4660, HEADER(Kernel_AST_AbstractMethod_Class));
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