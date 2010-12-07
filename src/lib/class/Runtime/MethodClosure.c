#include <lib/class/Runtime/MethodClosure.h>


Optr layout_Runtime_MethodClosure_Class_class;
Optr slot_Runtime_MethodClosure_selector;
Optr slot_Runtime_MethodClosure_host;
Optr layout_Runtime_MethodClosure;


static void init_SMB_selector() {
    Symbol SMB_selector = new_Symbol(L"selector");
    Array PThreadedCode8586 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_MethodClosure_selector, (Optr)&t_method_return);
    Method PMethod8585 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8586, 1, slot_Runtime_MethodClosure_selector);
    
    MethodClosure MC_SMB_selector = new_MethodClosure((Method)PMethod8585, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_selector, MC_SMB_selector);
}


static void init_SMB_accept_on_message_() {
    Symbol SMB_accept_on_message_ = new_Symbol(L"accept:on:message:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_message_0_2 = new_Variable_named(L"message", 0);
    Array PArray8588 = new_Array_with(3, (Optr)VAR_visitor_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_message_0_2);
    Symbol SMB_accept_on_message_boundBy_ = new_Symbol(L"accept:on:message:boundBy:");
    // accept:on:message:boundBy:. 
    Send PSend8590 = new_Send((Optr)slot_Runtime_Closure_code, SMB_accept_on_message_boundBy_, 4, (Optr)VAR_visitor_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_message_0_2, (Optr)self);
    Array PThreadedCode8589 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Runtime_Closure_code, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_message_0_2, (Optr)&t_push_self, (Optr)&t_send4, (Optr)PSend8590, (Optr)&t_method_return);
    Method PMethod8587 = new_Method_with(PArray8588, empty_Array, empty_Array, PThreadedCode8589, 1, PSend8590);
    
    MethodClosure MC_SMB_accept_on_message_ = new_MethodClosure((Method)PMethod8587, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_accept_on_message_, MC_SMB_accept_on_message_);
}


static void init_SMB_pclass_() {
    Symbol SMB_pclass_ = new_Symbol(L"pclass:");
    Variable VAR_aPinocchioClass_0_0 = new_Variable_named(L"aPinocchioClass", 0);
    Array PArray8592 = new_Array_with(1, (Optr)VAR_aPinocchioClass_0_0);
    Assign PAssign8594 = new_Assign((Optr)slot_Runtime_MethodClosure_host, (Optr)VAR_aPinocchioClass_0_0);
    Array PThreadedCode8593 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8594, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8591 = new_Method_with(PArray8592, empty_Array, empty_Array, PThreadedCode8593, 2, PAssign8594, self);
    
    MethodClosure MC_SMB_pclass_ = new_MethodClosure((Method)PMethod8591, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_pclass_, MC_SMB_pclass_);
}


static void init_SMB_selector_() {
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray8596 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign8598 = new_Assign((Optr)slot_Runtime_MethodClosure_selector, (Optr)VAR_anObject_0_0);
    Array PThreadedCode8597 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8598, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8595 = new_Method_with(PArray8596, empty_Array, empty_Array, PThreadedCode8597, 2, PAssign8598, self);
    
    MethodClosure MC_SMB_selector_ = new_MethodClosure((Method)PMethod8595, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_selector_, MC_SMB_selector_);
}


static void init_SMB_valueWithArguments_() {
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    Variable VAR_arguments_0_0 = new_Variable_named(L"arguments", 0);
    Array PArray8600 = new_Array_with(1, (Optr)VAR_arguments_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_AST_minus_MethodClosure = new_Symbol(L"AST.MethodClosure");
    Annotation PAnnotation8602 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_valueWithArguments_, (Optr)SMB_AST_minus_MethodClosure);
    Array PArray8601 = new_Array_with(1, (Optr)PAnnotation8602);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend8604 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode8603 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8604, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod8599 = new_NativeMethod_with(PArray8600, empty_Array, PArray8601, PThreadedCode8603, 2, PSend8604, self);
    
    MethodClosure MC_SMB_valueWithArguments_ = new_MethodClosure((Method)PNativeMethod8599, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_valueWithArguments_, MC_SMB_valueWithArguments_);
}


static void init_SMB_valueWithPossibleArgs_() {
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray8606 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Variable VAR_numArgs_0_1 = new_Variable_named(L"numArgs", 0);
    Array PArray8607 = new_Array_with(1, (Optr)VAR_numArgs_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8610 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    // numArgs. 
    Send PSend8613 = new_Send((Optr)self, SMB_numArgs, 0);
    Assign PAssign8612 = new_Assign((Optr)VAR_numArgs_0_1, (Optr)PSend8613);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend8614 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8618 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8619 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8618);
    Array PThreadedCode8617 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8618, (Optr)&t_send1, (Optr)PSend8619, (Optr)&t_block_return);
    Block PBlock8616 = new_Block_with(empty_Array, empty_Array, PThreadedCode8617, 1, PSend8619);
    // ifTrue:. 
    Send PSend8615 = new_Send((Optr)PSend8614, SMB_ifTrue_, 1, (Optr)PBlock8616);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8620 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    // =. 
    Send PSend8621 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)PSend8620);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8625 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)VAR_anArray_0_0);
    Array PThreadedCode8624 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send1, (Optr)PSend8625, (Optr)&t_block_return);
    Block PBlock8623 = new_Block_with(empty_Array, empty_Array, PThreadedCode8624, 1, PSend8625);
    // ifTrue:. 
    Send PSend8622 = new_Send((Optr)PSend8621, SMB_ifTrue_, 1, (Optr)PBlock8623);
    // size. 
    Send PSend8626 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend8627 = new_Send((Optr)VAR_numArgs_0_1, SMB__gt_, 1, (Optr)PSend8626);
    // size. 
    Send PSend8631 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend8632 = new_Send((Optr)VAR_numArgs_0_1, SMB__minus_, 1, (Optr)PSend8631);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend8633 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend8632);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend8634 = new_Send((Optr)VAR_anArray_0_0, SMB__append_, 1, (Optr)PSend8633);
    // valueWithArguments:. 
    Send PSend8635 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8634);
    Array PThreadedCode8630 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8631, (Optr)&t_send1, (Optr)PSend8632, (Optr)&t_send1, (Optr)PSend8633, (Optr)&t_send1, (Optr)PSend8634, (Optr)&t_send1, (Optr)PSend8635, (Optr)&t_block_return);
    Block PBlock8629 = new_Block_with(empty_Array, empty_Array, PThreadedCode8630, 1, PSend8635);
    // ifTrue:. 
    Send PSend8628 = new_Send((Optr)PSend8627, SMB_ifTrue_, 1, (Optr)PBlock8629);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend8636 = new_Send((Optr)VAR_anArray_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_numArgs_0_1);
    // valueWithArguments:. 
    Send PSend8637 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8636);
    Array PThreadedCode8611 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign8612, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8613, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend8614, (Optr)&t_send_ifTrue_, (Optr)PSend8615, (Optr)PBlock8616, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8620, (Optr)&t_send1, (Optr)PSend8621, (Optr)&t_send_ifTrue_, (Optr)PSend8622, (Optr)PBlock8623, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8626, (Optr)&t_send1, (Optr)PSend8627, (Optr)&t_send_ifTrue_, (Optr)PSend8628, (Optr)PBlock8629, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_send2, (Optr)PSend8636, (Optr)&t_send1, (Optr)PSend8637, (Optr)&t_method_return);
    Block PBlock8609 = new_Block_with(PArray8610, empty_Array, PThreadedCode8611, 5, PAssign8612, PSend8615, PSend8622, PSend8628, PSend8637);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8638 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8609);
    Array PThreadedCode8608 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8609, (Optr)&t_send1, (Optr)PSend8638, (Optr)&t_method_return);
    Method PMethod8605 = new_Method_with(PArray8606, PArray8607, empty_Array, PThreadedCode8608, 1, PSend8638);
    
    MethodClosure MC_SMB_valueWithPossibleArgs_ = new_MethodClosure((Method)PMethod8605, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_valueWithPossibleArgs_, MC_SMB_valueWithPossibleArgs_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray8640 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitMethodClosure_ = new_Symbol(L"visitMethodClosure:");
    // visitMethodClosure:. 
    Send PSend8642 = new_Send((Optr)VAR_visitor_0_0, SMB_visitMethodClosure_, 1, (Optr)self);
    Array PThreadedCode8641 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8642, (Optr)&t_method_return);
    Method PMethod8639 = new_Method_with(PArray8640, empty_Array, empty_Array, PThreadedCode8641, 1, PSend8642);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod8639, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_annotations() {
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend8645 = new_Send((Optr)slot_Runtime_Closure_code, SMB_annotations, 0);
    Array PThreadedCode8644 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Runtime_Closure_code, (Optr)&t_send0, (Optr)PSend8645, (Optr)&t_method_return);
    Method PMethod8643 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8644, 1, PSend8645);
    
    MethodClosure MC_SMB_annotations = new_MethodClosure((Method)PMethod8643, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_annotations, MC_SMB_annotations);
}


static void init_SMB_numArgs() {
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    // numArgs. 
    Send PSend8648 = new_Send((Optr)slot_Runtime_Closure_code, SMB_numArgs, 0);
    Array PThreadedCode8647 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Runtime_Closure_code, (Optr)&t_send0, (Optr)PSend8648, (Optr)&t_method_return);
    Method PMethod8646 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8647, 1, PSend8648);
    
    MethodClosure MC_SMB_numArgs = new_MethodClosure((Method)PMethod8646, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_numArgs, MC_SMB_numArgs);
}


static void init_SMB_annotationAt_() {
    Symbol SMB_annotationAt_ = new_Symbol(L"annotationAt:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray8650 = new_Array_with(1, (Optr)VAR_selector_0_0);
    // annotationAt:. 
    Send PSend8652 = new_Send((Optr)slot_Runtime_Closure_code, SMB_annotationAt_, 1, (Optr)VAR_selector_0_0);
    Array PThreadedCode8651 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Runtime_Closure_code, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend8652, (Optr)&t_method_return);
    Method PMethod8649 = new_Method_with(PArray8650, empty_Array, empty_Array, PThreadedCode8651, 1, PSend8652);
    
    MethodClosure MC_SMB_annotationAt_ = new_MethodClosure((Method)PMethod8649, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_annotationAt_, MC_SMB_annotationAt_);
}


static void init_SMB_pclass() {
    Symbol SMB_pclass = new_Symbol(L"pclass");
    Array PThreadedCode8654 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_MethodClosure_host, (Optr)&t_method_return);
    Method PMethod8653 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8654, 1, slot_Runtime_MethodClosure_host);
    
    MethodClosure MC_SMB_pclass = new_MethodClosure((Method)PMethod8653, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_pclass, MC_SMB_pclass);
}


static void init_SMB_host_() {
    Symbol SMB_host_ = new_Symbol(L"host:");
    Variable VAR_aClass_0_0 = new_Variable_named(L"aClass", 0);
    Array PArray8656 = new_Array_with(1, (Optr)VAR_aClass_0_0);
    Assign PAssign8658 = new_Assign((Optr)slot_Runtime_MethodClosure_host, (Optr)VAR_aClass_0_0);
    Array PThreadedCode8657 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8658, (Optr)&t_push_variable, (Optr)VAR_aClass_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8655 = new_Method_with(PArray8656, empty_Array, empty_Array, PThreadedCode8657, 2, PAssign8658, self);
    
    MethodClosure MC_SMB_host_ = new_MethodClosure((Method)PMethod8655, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_host_, MC_SMB_host_);
}


static void init_SMB_host() {
    Symbol SMB_host = new_Symbol(L"host");
    Array PThreadedCode8660 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_MethodClosure_host, (Optr)&t_method_return);
    Method PMethod8659 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8660, 1, slot_Runtime_MethodClosure_host);
    
    MethodClosure MC_SMB_host = new_MethodClosure((Method)PMethod8659, MethodClosure_Class);
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