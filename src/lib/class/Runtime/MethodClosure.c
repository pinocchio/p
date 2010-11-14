#include <lib/class/Runtime/MethodClosure.h>


Optr layout_Runtime_MethodClosure_Class_class;
Optr slot_Runtime_MethodClosure_selector;
Optr slot_Runtime_MethodClosure_host;
Optr layout_Runtime_MethodClosure;


static void init_SMB_selector() {
    Symbol SMB_selector = new_Symbol(L"selector");
    Array PThreadedCode8554 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_MethodClosure_selector, (Optr)&t_method_return);
    Method PMethod8553 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8554, 1, slot_Runtime_MethodClosure_selector);
    
    MethodClosure MC_SMB_selector = new_MethodClosure((Method)PMethod8553, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_selector, MC_SMB_selector);
}


static void init_SMB_accept_on_message_() {
    Symbol SMB_accept_on_message_ = new_Symbol(L"accept:on:message:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_message_0_2 = new_Variable_named(L"message", 0);
    Array PArray8556 = new_Array_with(3, (Optr)VAR_visitor_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_message_0_2);
    Symbol SMB_accept_on_message_boundBy_ = new_Symbol(L"accept:on:message:boundBy:");
    // accept:on:message:boundBy:. 
    Send PSend8558 = new_Send((Optr)slot_Runtime_Closure_code, SMB_accept_on_message_boundBy_, 4, (Optr)VAR_visitor_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_message_0_2, (Optr)self);
    Array PThreadedCode8557 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Runtime_Closure_code, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_message_0_2, (Optr)&t_push_self, (Optr)&t_send4, (Optr)PSend8558, (Optr)&t_method_return);
    Method PMethod8555 = new_Method_with(PArray8556, empty_Array, empty_Array, PThreadedCode8557, 1, PSend8558);
    
    MethodClosure MC_SMB_accept_on_message_ = new_MethodClosure((Method)PMethod8555, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_accept_on_message_, MC_SMB_accept_on_message_);
}


static void init_SMB_pclass_() {
    Symbol SMB_pclass_ = new_Symbol(L"pclass:");
    Variable VAR_aPinocchioClass_0_0 = new_Variable_named(L"aPinocchioClass", 0);
    Array PArray8560 = new_Array_with(1, (Optr)VAR_aPinocchioClass_0_0);
    Assign PAssign8562 = new_Assign((Optr)slot_Runtime_MethodClosure_host, (Optr)VAR_aPinocchioClass_0_0);
    Array PThreadedCode8561 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8562, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8559 = new_Method_with(PArray8560, empty_Array, empty_Array, PThreadedCode8561, 2, PAssign8562, self);
    
    MethodClosure MC_SMB_pclass_ = new_MethodClosure((Method)PMethod8559, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_pclass_, MC_SMB_pclass_);
}


static void init_SMB_selector_() {
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray8564 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign8566 = new_Assign((Optr)slot_Runtime_MethodClosure_selector, (Optr)VAR_anObject_0_0);
    Array PThreadedCode8565 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8566, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8563 = new_Method_with(PArray8564, empty_Array, empty_Array, PThreadedCode8565, 2, PAssign8566, self);
    
    MethodClosure MC_SMB_selector_ = new_MethodClosure((Method)PMethod8563, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_selector_, MC_SMB_selector_);
}


static void init_SMB_valueWithArguments_() {
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    Variable VAR_arguments_0_0 = new_Variable_named(L"arguments", 0);
    Array PArray8568 = new_Array_with(1, (Optr)VAR_arguments_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_AST_minus_MethodClosure = new_Symbol(L"AST.MethodClosure");
    Annotation PAnnotation8570 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_valueWithArguments_, (Optr)SMB_AST_minus_MethodClosure);
    Array PArray8569 = new_Array_with(1, (Optr)PAnnotation8570);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend8572 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode8571 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8572, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod8567 = new_NativeMethod_with(PArray8568, empty_Array, PArray8569, PThreadedCode8571, 2, PSend8572, self);
    
    MethodClosure MC_SMB_valueWithArguments_ = new_MethodClosure((Method)PNativeMethod8567, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_valueWithArguments_, MC_SMB_valueWithArguments_);
}


static void init_SMB_valueWithPossibleArgs_() {
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray8574 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Variable VAR_numArgs_0_1 = new_Variable_named(L"numArgs", 0);
    Array PArray8575 = new_Array_with(1, (Optr)VAR_numArgs_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8578 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    // numArgs. 
    Send PSend8581 = new_Send((Optr)self, SMB_numArgs, 0);
    Assign PAssign8580 = new_Assign((Optr)VAR_numArgs_0_1, (Optr)PSend8581);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend8582 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8586 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8587 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8586);
    Array PThreadedCode8585 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8586, (Optr)&t_send1, (Optr)PSend8587, (Optr)&t_block_return);
    Block PBlock8584 = new_Block_with(empty_Array, empty_Array, PThreadedCode8585, 1, PSend8587);
    // ifTrue:. 
    Send PSend8583 = new_Send((Optr)PSend8582, SMB_ifTrue_, 1, (Optr)PBlock8584);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8588 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    // =. 
    Send PSend8589 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)PSend8588);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8593 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)VAR_anArray_0_0);
    Array PThreadedCode8592 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send1, (Optr)PSend8593, (Optr)&t_block_return);
    Block PBlock8591 = new_Block_with(empty_Array, empty_Array, PThreadedCode8592, 1, PSend8593);
    // ifTrue:. 
    Send PSend8590 = new_Send((Optr)PSend8589, SMB_ifTrue_, 1, (Optr)PBlock8591);
    // size. 
    Send PSend8594 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend8595 = new_Send((Optr)VAR_numArgs_0_1, SMB__gt_, 1, (Optr)PSend8594);
    // size. 
    Send PSend8599 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend8600 = new_Send((Optr)VAR_numArgs_0_1, SMB__minus_, 1, (Optr)PSend8599);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend8601 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend8600);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend8602 = new_Send((Optr)VAR_anArray_0_0, SMB__append_, 1, (Optr)PSend8601);
    // valueWithArguments:. 
    Send PSend8603 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8602);
    Array PThreadedCode8598 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8599, (Optr)&t_send1, (Optr)PSend8600, (Optr)&t_send1, (Optr)PSend8601, (Optr)&t_send1, (Optr)PSend8602, (Optr)&t_send1, (Optr)PSend8603, (Optr)&t_block_return);
    Block PBlock8597 = new_Block_with(empty_Array, empty_Array, PThreadedCode8598, 1, PSend8603);
    // ifTrue:. 
    Send PSend8596 = new_Send((Optr)PSend8595, SMB_ifTrue_, 1, (Optr)PBlock8597);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend8604 = new_Send((Optr)VAR_anArray_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_numArgs_0_1);
    // valueWithArguments:. 
    Send PSend8605 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8604);
    Array PThreadedCode8579 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign8580, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8581, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend8582, (Optr)&t_send_ifTrue_, (Optr)PSend8583, (Optr)PBlock8584, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8588, (Optr)&t_send1, (Optr)PSend8589, (Optr)&t_send_ifTrue_, (Optr)PSend8590, (Optr)PBlock8591, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8594, (Optr)&t_send1, (Optr)PSend8595, (Optr)&t_send_ifTrue_, (Optr)PSend8596, (Optr)PBlock8597, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_send2, (Optr)PSend8604, (Optr)&t_send1, (Optr)PSend8605, (Optr)&t_method_return);
    Block PBlock8577 = new_Block_with(PArray8578, empty_Array, PThreadedCode8579, 5, PAssign8580, PSend8583, PSend8590, PSend8596, PSend8605);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8606 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8577);
    Array PThreadedCode8576 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8577, (Optr)&t_send1, (Optr)PSend8606, (Optr)&t_method_return);
    Method PMethod8573 = new_Method_with(PArray8574, PArray8575, empty_Array, PThreadedCode8576, 1, PSend8606);
    
    MethodClosure MC_SMB_valueWithPossibleArgs_ = new_MethodClosure((Method)PMethod8573, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_valueWithPossibleArgs_, MC_SMB_valueWithPossibleArgs_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray8608 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitMethodClosure_ = new_Symbol(L"visitMethodClosure:");
    // visitMethodClosure:. 
    Send PSend8610 = new_Send((Optr)VAR_visitor_0_0, SMB_visitMethodClosure_, 1, (Optr)self);
    Array PThreadedCode8609 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8610, (Optr)&t_method_return);
    Method PMethod8607 = new_Method_with(PArray8608, empty_Array, empty_Array, PThreadedCode8609, 1, PSend8610);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod8607, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_annotations() {
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend8613 = new_Send((Optr)slot_Runtime_Closure_code, SMB_annotations, 0);
    Array PThreadedCode8612 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Runtime_Closure_code, (Optr)&t_send0, (Optr)PSend8613, (Optr)&t_method_return);
    Method PMethod8611 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8612, 1, PSend8613);
    
    MethodClosure MC_SMB_annotations = new_MethodClosure((Method)PMethod8611, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_annotations, MC_SMB_annotations);
}


static void init_SMB_numArgs() {
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    // numArgs. 
    Send PSend8616 = new_Send((Optr)slot_Runtime_Closure_code, SMB_numArgs, 0);
    Array PThreadedCode8615 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Runtime_Closure_code, (Optr)&t_send0, (Optr)PSend8616, (Optr)&t_method_return);
    Method PMethod8614 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8615, 1, PSend8616);
    
    MethodClosure MC_SMB_numArgs = new_MethodClosure((Method)PMethod8614, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_numArgs, MC_SMB_numArgs);
}


static void init_SMB_annotationAt_() {
    Symbol SMB_annotationAt_ = new_Symbol(L"annotationAt:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray8618 = new_Array_with(1, (Optr)VAR_selector_0_0);
    // annotationAt:. 
    Send PSend8620 = new_Send((Optr)slot_Runtime_Closure_code, SMB_annotationAt_, 1, (Optr)VAR_selector_0_0);
    Array PThreadedCode8619 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Runtime_Closure_code, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend8620, (Optr)&t_method_return);
    Method PMethod8617 = new_Method_with(PArray8618, empty_Array, empty_Array, PThreadedCode8619, 1, PSend8620);
    
    MethodClosure MC_SMB_annotationAt_ = new_MethodClosure((Method)PMethod8617, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_annotationAt_, MC_SMB_annotationAt_);
}


static void init_SMB_pclass() {
    Symbol SMB_pclass = new_Symbol(L"pclass");
    Array PThreadedCode8622 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_MethodClosure_host, (Optr)&t_method_return);
    Method PMethod8621 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8622, 1, slot_Runtime_MethodClosure_host);
    
    MethodClosure MC_SMB_pclass = new_MethodClosure((Method)PMethod8621, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_pclass, MC_SMB_pclass);
}


static void init_SMB_host_() {
    Symbol SMB_host_ = new_Symbol(L"host:");
    Variable VAR_aClass_0_0 = new_Variable_named(L"aClass", 0);
    Array PArray8624 = new_Array_with(1, (Optr)VAR_aClass_0_0);
    Assign PAssign8626 = new_Assign((Optr)slot_Runtime_MethodClosure_host, (Optr)VAR_aClass_0_0);
    Array PThreadedCode8625 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8626, (Optr)&t_push_variable, (Optr)VAR_aClass_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8623 = new_Method_with(PArray8624, empty_Array, empty_Array, PThreadedCode8625, 2, PAssign8626, self);
    
    MethodClosure MC_SMB_host_ = new_MethodClosure((Method)PMethod8623, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_host_, MC_SMB_host_);
}


static void init_SMB_host() {
    Symbol SMB_host = new_Symbol(L"host");
    Array PThreadedCode8628 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_MethodClosure_host, (Optr)&t_method_return);
    Method PMethod8627 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8628, 1, slot_Runtime_MethodClosure_host);
    
    MethodClosure MC_SMB_host = new_MethodClosure((Method)PMethod8627, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_host, MC_SMB_host);
}

void init_Runtime_PMethodClosure_layout() {
    layout_Runtime_MethodClosure_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Runtime_MethodClosure_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Runtime_MethodClosure_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Runtime_MethodClosure_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Runtime_MethodClosure_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Runtime_MethodClosure_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_MethodClosure = new_Symbol(L"MethodClosure");
    slot_Runtime_MethodClosure_selector = (Optr)new_Slot(1, L"selector");
    slot_Runtime_MethodClosure_host = (Optr)new_Slot(2, L"host");
    layout_Runtime_MethodClosure = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Runtime_MethodClosure)->values[0] = slot_Runtime_Closure_code; // code 
    ((Array)layout_Runtime_MethodClosure)->values[1] = slot_Runtime_MethodClosure_selector; // selector 
    ((Array)layout_Runtime_MethodClosure)->values[2] = slot_Runtime_MethodClosure_host; // host 
    MethodClosure_Class = (Class)new_Class(Runtime_Closure_Class, layout_Runtime_MethodClosure_Class_class);
    MethodClosure_Class->layout = layout_Runtime_MethodClosure;
    MethodClosure_Class->name = SMB_MethodClosure;
    
}

void init_Runtime_PMethodClosure_methods() {
    init_SMB_selector();
    init_SMB_accept_on_message_();
    init_SMB_pclass_();
    init_SMB_selector_();
    init_SMB_valueWithArguments_();
    init_SMB_valueWithPossibleArgs_();
    init_SMB_accept_();
    init_SMB_annotations();
    init_SMB_numArgs();
    init_SMB_annotationAt_();
    init_SMB_pclass();
    init_SMB_host_();
    init_SMB_host();
    
}