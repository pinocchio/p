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
    Array PThreadedCode4538 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AbstractMethod_threaded, (Optr)&t_method_return);
    Method PMethod4537 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4538, 1, slot_Kernel_AST_AbstractMethod_threaded);
    
    MethodClosure MC_SMB_threaded = new_MethodClosure((Method)PMethod4537, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_threaded, MC_SMB_threaded);
}


static void init_SMB_annotations_() {
    Symbol SMB_annotations_ = new_Symbol(L"annotations:");
    Variable VAR_aPinocchioArray_0_0 = new_Variable_named(L"aPinocchioArray", 0);
    Array PArray4540 = new_Array_with(1, (Optr)VAR_aPinocchioArray_0_0);
    Assign PAssign4542 = new_Assign((Optr)slot_Kernel_AST_AbstractMethod_annotations, (Optr)VAR_aPinocchioArray_0_0);
    Array PThreadedCode4541 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4542, (Optr)&t_push_variable, (Optr)VAR_aPinocchioArray_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4539 = new_Method_with(PArray4540, empty_Array, empty_Array, PThreadedCode4541, 2, PAssign4542, self);
    
    MethodClosure MC_SMB_annotations_ = new_MethodClosure((Method)PMethod4539, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_annotations_, MC_SMB_annotations_);
}


static void init_SMB_last() {
    Symbol SMB_last = new_Symbol(L"last");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4545 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend4546 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend4545);
    Array PThreadedCode4544 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4545, (Optr)&t_send1, (Optr)PSend4546, (Optr)&t_method_return);
    Method PMethod4543 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4544, 1, PSend4546);
    
    MethodClosure MC_SMB_last = new_MethodClosure((Method)PMethod4543, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_last, MC_SMB_last);
}


static void init_SMB_locals_() {
    Symbol SMB_locals_ = new_Symbol(L"locals:");
    Variable VAR_newlocals_0_0 = new_Variable_named(L"newlocals", 0);
    Array PArray4548 = new_Array_with(1, (Optr)VAR_newlocals_0_0);
    Assign PAssign4550 = new_Assign((Optr)slot_Kernel_AST_AbstractMethod_locals, (Optr)VAR_newlocals_0_0);
    Array PThreadedCode4549 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4550, (Optr)&t_push_variable, (Optr)VAR_newlocals_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4547 = new_Method_with(PArray4548, empty_Array, empty_Array, PThreadedCode4549, 2, PAssign4550, self);
    
    MethodClosure MC_SMB_locals_ = new_MethodClosure((Method)PMethod4547, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_locals_, MC_SMB_locals_);
}


static void init_SMB_locals() {
    Symbol SMB_locals = new_Symbol(L"locals");
    Array PThreadedCode4552 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AbstractMethod_locals, (Optr)&t_method_return);
    Method PMethod4551 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4552, 1, slot_Kernel_AST_AbstractMethod_locals);
    
    MethodClosure MC_SMB_locals = new_MethodClosure((Method)PMethod4551, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_locals, MC_SMB_locals);
}


static void init_SMB_clearNative() {
    Symbol SMB_clearNative = new_Symbol(L"clearNative");
    Array PThreadedCode4554 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod4553 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4554, 1, self);
    
    MethodClosure MC_SMB_clearNative = new_MethodClosure((Method)PMethod4553, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_clearNative, MC_SMB_clearNative);
}


static void init_SMB_first() {
    Symbol SMB_first = new_Symbol(L"first");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend4557 = new_Send((Optr)self, SMB_at_, 1, (Optr)int_1_Const);
    Array PThreadedCode4556 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend4557, (Optr)&t_method_return);
    Method PMethod4555 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4556, 1, PSend4557);
    
    MethodClosure MC_SMB_first = new_MethodClosure((Method)PMethod4555, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_first, MC_SMB_first);
}


static void init_SMB_params_() {
    Symbol SMB_params_ = new_Symbol(L"params:");
    Variable VAR_newparams_0_0 = new_Variable_named(L"newparams", 0);
    Array PArray4559 = new_Array_with(1, (Optr)VAR_newparams_0_0);
    Assign PAssign4561 = new_Assign((Optr)slot_Kernel_AST_AbstractMethod_params, (Optr)VAR_newparams_0_0);
    Array PThreadedCode4560 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4561, (Optr)&t_push_variable, (Optr)VAR_newparams_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4558 = new_Method_with(PArray4559, empty_Array, empty_Array, PThreadedCode4560, 2, PAssign4561, self);
    
    MethodClosure MC_SMB_params_ = new_MethodClosure((Method)PMethod4558, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_params_, MC_SMB_params_);
}


static void init_SMB_depth() {
    Symbol SMB_depth = new_Symbol(L"depth");
    Array PThreadedCode4563 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Method PMethod4562 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4563, 1, int_0_Const);
    
    MethodClosure MC_SMB_depth = new_MethodClosure((Method)PMethod4562, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_depth, MC_SMB_depth);
}


static void init_SMB_accept_on_message_boundBy_() {
    Symbol SMB_accept_on_message_boundBy_ = new_Symbol(L"accept:on:message:boundBy:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_message_0_2 = new_Variable_named(L"message", 0);
    Variable VAR_closure_0_3 = new_Variable_named(L"closure", 0);
    Array PArray4565 = new_Array_with(4, (Optr)VAR_visitor_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_message_0_2, (Optr)VAR_closure_0_3);
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend4567 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode4566 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4567, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4564 = new_Method_with(PArray4565, empty_Array, empty_Array, PThreadedCode4566, 2, PSend4567, self);
    
    MethodClosure MC_SMB_accept_on_message_boundBy_ = new_MethodClosure((Method)PMethod4564, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_accept_on_message_boundBy_, MC_SMB_accept_on_message_boundBy_);
}


static void init_SMB_first_() {
    Symbol SMB_first_ = new_Symbol(L"first:");
    Variable VAR_anElement_0_0 = new_Variable_named(L"anElement", 0);
    Array PArray4569 = new_Array_with(1, (Optr)VAR_anElement_0_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend4571 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)VAR_anElement_0_0);
    Array PThreadedCode4570 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_anElement_0_0, (Optr)&t_send2, (Optr)PSend4571, (Optr)&t_method_return);
    Method PMethod4568 = new_Method_with(PArray4569, empty_Array, empty_Array, PThreadedCode4570, 1, PSend4571);
    
    MethodClosure MC_SMB_first_ = new_MethodClosure((Method)PMethod4568, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_first_, MC_SMB_first_);
}


static void init_SMB_info_() {
    Symbol SMB_info_ = new_Symbol(L"info:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4573 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign4575 = new_Assign((Optr)slot_Kernel_AST_AbstractMethod_info, (Optr)VAR_anObject_0_0);
    Array PThreadedCode4574 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4575, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4572 = new_Method_with(PArray4573, empty_Array, empty_Array, PThreadedCode4574, 2, PAssign4575, self);
    
    MethodClosure MC_SMB_info_ = new_MethodClosure((Method)PMethod4572, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_info_, MC_SMB_info_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray4577 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4579 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray4581 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend4583 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend4584 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend4583);
    Array PThreadedCode4582 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend4583, (Optr)&t_send1, (Optr)PSend4584, (Optr)&t_method_return);
    Block PBlock4580 = new_Block_with(PArray4581, empty_Array, PThreadedCode4582, 1, PSend4584);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend4585 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend4579, (Optr)PBlock4580);
    Array PThreadedCode4578 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4579, (Optr)&t_push_closure, (Optr)PBlock4580, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend4585, (Optr)&t_method_return);
    Method PMethod4576 = new_Method_with(PArray4577, empty_Array, empty_Array, PThreadedCode4578, 1, PSend4585);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod4576, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_numArgs() {
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4588 = new_Send((Optr)slot_Kernel_AST_AbstractMethod_params, SMB_size, 0);
    Array PThreadedCode4587 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AbstractMethod_params, (Optr)&t_send0, (Optr)PSend4588, (Optr)&t_method_return);
    Method PMethod4586 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4587, 1, PSend4588);
    
    MethodClosure MC_SMB_numArgs = new_MethodClosure((Method)PMethod4586, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_numArgs, MC_SMB_numArgs);
}


static void init_SMB_annotations() {
    Symbol SMB_annotations = new_Symbol(L"annotations");
    Array PThreadedCode4590 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AbstractMethod_annotations, (Optr)&t_method_return);
    Method PMethod4589 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4590, 1, slot_Kernel_AST_AbstractMethod_annotations);
    
    MethodClosure MC_SMB_annotations = new_MethodClosure((Method)PMethod4589, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_annotations, MC_SMB_annotations);
}


static void init_SMB_inject_into_() {
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    Variable VAR_thisValue_0_0 = new_Variable_named(L"thisValue", 0);
    Variable VAR_binaryBlock_0_1 = new_Variable_named(L"binaryBlock", 0);
    Array PArray4592 = new_Array_with(2, (Optr)VAR_thisValue_0_0, (Optr)VAR_binaryBlock_0_1);
    Variable VAR_nextValue_0_2 = new_Variable_named(L"nextValue", 0);
    Array PArray4593 = new_Array_with(1, (Optr)VAR_nextValue_0_2);
    Assign PAssign4595 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)VAR_thisValue_0_0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray4597 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend4600 = new_Send((Optr)VAR_binaryBlock_0_1, SMB_value_value_, 2, (Optr)VAR_nextValue_0_2, (Optr)VAR_each_1_0);
    Assign PAssign4599 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)PSend4600);
    Array PThreadedCode4598 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign4599, (Optr)&t_push_variable, (Optr)VAR_binaryBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send2, (Optr)PSend4600, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock4596 = new_Block_with(PArray4597, empty_Array, PThreadedCode4598, 1, PAssign4599);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend4601 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock4596);
    Array PThreadedCode4594 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign4595, (Optr)&t_push_variable, (Optr)VAR_thisValue_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock4596, (Optr)&t_send1, (Optr)PSend4601, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_method_return);
    Method PMethod4591 = new_Method_with(PArray4592, PArray4593, empty_Array, PThreadedCode4594, 3, PAssign4595, PSend4601, VAR_nextValue_0_2);
    
    MethodClosure MC_SMB_inject_into_ = new_MethodClosure((Method)PMethod4591, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_inject_into_, MC_SMB_inject_into_);
}


static void init_SMB_annotationAt_() {
    Symbol SMB_annotationAt_ = new_Symbol(L"annotationAt:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray4603 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray4606 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_annotation_2_0 = new_Variable_named(L"annotation", 2);
    Array PArray4609 = new_Array_with(1, (Optr)VAR_annotation_2_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend4611 = new_Send((Optr)VAR_annotation_2_0, SMB_selector, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend4612 = new_Send((Optr)PSend4611, SMB__equals_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend4616 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_annotation_2_0);
    Array PThreadedCode4615 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_annotation_2_0, (Optr)&t_send1, (Optr)PSend4616, (Optr)&t_block_return);
    Block PBlock4614 = new_Block_with(empty_Array, empty_Array, PThreadedCode4615, 1, PSend4616);
    // ifTrue:. 
    Send PSend4613 = new_Send((Optr)PSend4612, SMB_ifTrue_, 1, (Optr)PBlock4614);
    Array PThreadedCode4610 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_annotation_2_0, (Optr)&t_send0, (Optr)PSend4611, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend4612, (Optr)&t_send_ifTrue_, (Optr)PSend4613, (Optr)PBlock4614, (Optr)&t_method_return);
    Block PBlock4608 = new_Block_with(PArray4609, empty_Array, PThreadedCode4610, 1, PSend4613);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend4617 = new_Send((Optr)slot_Kernel_AST_AbstractMethod_annotations, SMB_do_, 1, (Optr)PBlock4608);
    Array PThreadedCode4607 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AbstractMethod_annotations, (Optr)&t_push_closure, (Optr)PBlock4608, (Optr)&t_send1, (Optr)PSend4617, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Block PBlock4605 = new_Block_with(PArray4606, empty_Array, PThreadedCode4607, 2, PSend4617, nil_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend4618 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock4605);
    Array PThreadedCode4604 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock4605, (Optr)&t_send1, (Optr)PSend4618, (Optr)&t_method_return);
    Method PMethod4602 = new_Method_with(PArray4603, empty_Array, empty_Array, PThreadedCode4604, 1, PSend4618);
    
    MethodClosure MC_SMB_annotationAt_ = new_MethodClosure((Method)PMethod4602, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_annotationAt_, MC_SMB_annotationAt_);
}


static void init_SMB_package() {
    Symbol SMB_package = new_Symbol(L"package");
    Array PThreadedCode4620 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AbstractMethod_package, (Optr)&t_method_return);
    Method PMethod4619 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4620, 1, slot_Kernel_AST_AbstractMethod_package);
    
    MethodClosure MC_SMB_package = new_MethodClosure((Method)PMethod4619, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_package, MC_SMB_package);
}


static void init_SMB_package_() {
    Symbol SMB_package_ = new_Symbol(L"package:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4622 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign4624 = new_Assign((Optr)slot_Kernel_AST_AbstractMethod_package, (Optr)VAR_anObject_0_0);
    Array PThreadedCode4623 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4624, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4621 = new_Method_with(PArray4622, empty_Array, empty_Array, PThreadedCode4623, 2, PAssign4624, self);
    
    MethodClosure MC_SMB_package_ = new_MethodClosure((Method)PMethod4621, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_package_, MC_SMB_package_);
}


static void init_SMB_info() {
    Symbol SMB_info = new_Symbol(L"info");
    Array PThreadedCode4626 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AbstractMethod_info, (Optr)&t_method_return);
    Method PMethod4625 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4626, 1, slot_Kernel_AST_AbstractMethod_info);
    
    MethodClosure MC_SMB_info = new_MethodClosure((Method)PMethod4625, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_info, MC_SMB_info);
}


static void init_SMB_last_() {
    Symbol SMB_last_ = new_Symbol(L"last:");
    Variable VAR_anElement_0_0 = new_Variable_named(L"anElement", 0);
    Array PArray4628 = new_Array_with(1, (Optr)VAR_anElement_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4630 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend4631 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend4630, (Optr)VAR_anElement_0_0);
    Array PThreadedCode4629 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4630, (Optr)&t_push_variable, (Optr)VAR_anElement_0_0, (Optr)&t_send2, (Optr)PSend4631, (Optr)&t_method_return);
    Method PMethod4627 = new_Method_with(PArray4628, empty_Array, empty_Array, PThreadedCode4629, 1, PSend4631);
    
    MethodClosure MC_SMB_last_ = new_MethodClosure((Method)PMethod4627, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_last_, MC_SMB_last_);
}


static void init_SMB_params() {
    Symbol SMB_params = new_Symbol(L"params");
    Array PThreadedCode4633 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AbstractMethod_params, (Optr)&t_method_return);
    Method PMethod4632 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4633, 1, slot_Kernel_AST_AbstractMethod_params);
    
    MethodClosure MC_SMB_params = new_MethodClosure((Method)PMethod4632, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_params, MC_SMB_params);
}


static void init_SMB_threaded_() {
    Symbol SMB_threaded_ = new_Symbol(L"threaded:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4635 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign4637 = new_Assign((Optr)slot_Kernel_AST_AbstractMethod_threaded, (Optr)VAR_anObject_0_0);
    Array PThreadedCode4636 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4637, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4634 = new_Method_with(PArray4635, empty_Array, empty_Array, PThreadedCode4636, 2, PAssign4637, self);
    
    MethodClosure MC_SMB_threaded_ = new_MethodClosure((Method)PMethod4634, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_threaded_, MC_SMB_threaded_);
}


static void init_SMB_params_locals_() {
    Symbol SMB_params_locals_ = new_Symbol(L"params:locals:");
    Variable VAR_newParams_0_0 = new_Variable_named(L"newParams", 0);
    Variable VAR_newLocals_0_1 = new_Variable_named(L"newLocals", 0);
    Array PArray4639 = new_Array_with(2, (Optr)VAR_newParams_0_0, (Optr)VAR_newLocals_0_1);
    Variable VAR_start_0_2 = new_Variable_named(L"start", 0);
    Array PArray4640 = new_Array_with(1, (Optr)VAR_start_0_2);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray4643 = new_Array_with(2, (Optr)VAR_each_1_0, (Optr)VAR_index_1_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend4645 = new_Send((Optr)VAR_index_1_1, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_localId_ = new_Symbol(L"localId:");
    // localId:. 
    Send PSend4646 = new_Send((Optr)VAR_each_1_0, SMB_localId_, 1, (Optr)PSend4645);
    Array PThreadedCode4644 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend4645, (Optr)&t_send1, (Optr)PSend4646, (Optr)&t_method_return);
    Block PBlock4642 = new_Block_with(PArray4643, empty_Array, PThreadedCode4644, 1, PSend4646);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend4647 = new_Send((Optr)VAR_newParams_0_0, SMB_withIndexDo_, 1, (Optr)PBlock4642);
    Assign PAssign4648 = new_Assign((Optr)slot_Kernel_AST_AbstractMethod_params, (Optr)VAR_newParams_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4650 = new_Send((Optr)VAR_newParams_0_0, SMB_size, 0);
    Assign PAssign4649 = new_Assign((Optr)VAR_start_0_2, (Optr)PSend4650);
    Array PArray4652 = new_Array_with(2, (Optr)VAR_each_1_0, (Optr)VAR_index_1_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend4654 = new_Send((Optr)VAR_start_0_2, SMB__plus_, 1, (Optr)VAR_index_1_1);
    // -. 
    Send PSend4655 = new_Send((Optr)PSend4654, SMB__minus_, 1, (Optr)int_1_Const);
    // localId:. 
    Send PSend4656 = new_Send((Optr)VAR_each_1_0, SMB_localId_, 1, (Optr)PSend4655);
    Array PThreadedCode4653 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_start_0_2, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_send1, (Optr)PSend4654, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend4655, (Optr)&t_send1, (Optr)PSend4656, (Optr)&t_method_return);
    Block PBlock4651 = new_Block_with(PArray4652, empty_Array, PThreadedCode4653, 1, PSend4656);
    // withIndexDo:. 
    Send PSend4657 = new_Send((Optr)VAR_newLocals_0_1, SMB_withIndexDo_, 1, (Optr)PBlock4651);
    Assign PAssign4658 = new_Assign((Optr)slot_Kernel_AST_AbstractMethod_locals, (Optr)VAR_newLocals_0_1);
    Array PThreadedCode4641 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_newParams_0_0, (Optr)&t_push_closure, (Optr)PBlock4642, (Optr)&t_send1, (Optr)PSend4647, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign4648, (Optr)&t_push_variable, (Optr)VAR_newParams_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign4649, (Optr)&t_push_variable, (Optr)VAR_newParams_0_0, (Optr)&t_send0, (Optr)PSend4650, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newLocals_0_1, (Optr)&t_push_closure, (Optr)PBlock4651, (Optr)&t_send1, (Optr)PSend4657, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign4658, (Optr)&t_push_variable, (Optr)VAR_newLocals_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4638 = new_Method_with(PArray4639, PArray4640, empty_Array, PThreadedCode4641, 6, PSend4647, PAssign4648, PAssign4649, PSend4657, PAssign4658, self);
    
    MethodClosure MC_SMB_params_locals_ = new_MethodClosure((Method)PMethod4638, Kernel_AST_AbstractMethod_Class);
    store_method(Kernel_AST_AbstractMethod_Class, SMB_params_locals_, MC_SMB_params_locals_);
}


static void init_class_SMB_withAll_() {
    Symbol SMB_withAll_ = new_Symbol(L"withAll:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray4660 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Variable VAR_index_0_2 = new_Variable_named(L"index", 0);
    Array PArray4661 = new_Array_with(2, (Optr)VAR_result_0_1, (Optr)VAR_index_0_2);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4665 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    // new:. 
    Send PSend4664 = new_Send((Optr)self, SMB_new_, 1, (Optr)PSend4665);
    Assign PAssign4663 = new_Assign((Optr)VAR_result_0_1, (Optr)PSend4664);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign4666 = new_Assign((Optr)VAR_index_0_2, (Optr)int_1_Const);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray4668 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend4670 = new_Send((Optr)VAR_result_0_1, SMB_at_put_, 2, (Optr)VAR_index_0_2, (Optr)VAR_each_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend4672 = new_Send((Optr)VAR_index_0_2, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign4671 = new_Assign((Optr)VAR_index_0_2, (Optr)PSend4672);
    Array PThreadedCode4669 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_push_variable, (Optr)VAR_index_0_2, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send2, (Optr)PSend4670, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign4671, (Optr)&t_push_variable, (Optr)VAR_index_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend4672, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock4667 = new_Block_with(PArray4668, empty_Array, PThreadedCode4669, 2, PSend4670, PAssign4671);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend4673 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock4667);
    Array PThreadedCode4662 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign4663, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend4665, (Optr)&t_send1, (Optr)PSend4664, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign4666, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock4667, (Optr)&t_send1, (Optr)PSend4673, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_method_return);
    Method PMethod4659 = new_Method_with(PArray4660, PArray4661, empty_Array, PThreadedCode4662, 4, PAssign4663, PAssign4666, PSend4673, VAR_result_0_1);
    
    MethodClosure MC_SMB_withAll_ = new_MethodClosure((Method)PMethod4659, HEADER(Kernel_AST_AbstractMethod_Class));
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