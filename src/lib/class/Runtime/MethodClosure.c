#include <lib/class/Runtime/MethodClosure.h>


Optr layout_Runtime_MethodClosure_Class_class;
Optr slot_Runtime_MethodClosure_selector;
Optr slot_Runtime_MethodClosure_host;
Optr layout_Runtime_MethodClosure;


static void init_SMB_selector() {
    Symbol SMB_selector = new_Symbol(L"selector");
    Array PThreadedCode8365 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_MethodClosure_selector, (Optr)&t_method_return);
    Method PMethod8364 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8365, 1, slot_Runtime_MethodClosure_selector);
    
    MethodClosure MC_SMB_selector = new_MethodClosure((Method)PMethod8364, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_selector, MC_SMB_selector);
}


static void init_SMB_accept_on_message_() {
    Symbol SMB_accept_on_message_ = new_Symbol(L"accept:on:message:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_message_0_2 = new_Variable_named(L"message", 0);
    Array PArray8367 = new_Array_with(3, (Optr)VAR_visitor_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_message_0_2);
    Symbol SMB_accept_on_message_boundBy_ = new_Symbol(L"accept:on:message:boundBy:");
    // accept:on:message:boundBy:. 
    Send PSend8369 = new_Send((Optr)slot_Runtime_Closure_code, SMB_accept_on_message_boundBy_, 4, (Optr)VAR_visitor_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_message_0_2, (Optr)self);
    Array PThreadedCode8368 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Runtime_Closure_code, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_message_0_2, (Optr)&t_push_self, (Optr)&t_send4, (Optr)PSend8369, (Optr)&t_method_return);
    Method PMethod8366 = new_Method_with(PArray8367, empty_Array, empty_Array, PThreadedCode8368, 1, PSend8369);
    
    MethodClosure MC_SMB_accept_on_message_ = new_MethodClosure((Method)PMethod8366, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_accept_on_message_, MC_SMB_accept_on_message_);
}


static void init_SMB_pclass_() {
    Symbol SMB_pclass_ = new_Symbol(L"pclass:");
    Variable VAR_aPinocchioClass_0_0 = new_Variable_named(L"aPinocchioClass", 0);
    Array PArray8371 = new_Array_with(1, (Optr)VAR_aPinocchioClass_0_0);
    Assign PAssign8373 = new_Assign((Optr)slot_Runtime_MethodClosure_host, (Optr)VAR_aPinocchioClass_0_0);
    Array PThreadedCode8372 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8373, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8370 = new_Method_with(PArray8371, empty_Array, empty_Array, PThreadedCode8372, 2, PAssign8373, self);
    
    MethodClosure MC_SMB_pclass_ = new_MethodClosure((Method)PMethod8370, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_pclass_, MC_SMB_pclass_);
}


static void init_SMB_selector_() {
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray8375 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign8377 = new_Assign((Optr)slot_Runtime_MethodClosure_selector, (Optr)VAR_anObject_0_0);
    Array PThreadedCode8376 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8377, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8374 = new_Method_with(PArray8375, empty_Array, empty_Array, PThreadedCode8376, 2, PAssign8377, self);
    
    MethodClosure MC_SMB_selector_ = new_MethodClosure((Method)PMethod8374, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_selector_, MC_SMB_selector_);
}


static void init_SMB_valueWithArguments_() {
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    Variable VAR_arguments_0_0 = new_Variable_named(L"arguments", 0);
    Array PArray8379 = new_Array_with(1, (Optr)VAR_arguments_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_AST_minus_MethodClosure = new_Symbol(L"AST.MethodClosure");
    Annotation PAnnotation8381 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_valueWithArguments_, (Optr)SMB_AST_minus_MethodClosure);
    Array PArray8380 = new_Array_with(1, (Optr)PAnnotation8381);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend8383 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode8382 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8383, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod8378 = new_NativeMethod_with(PArray8379, empty_Array, PArray8380, PThreadedCode8382, 2, PSend8383, self);
    
    MethodClosure MC_SMB_valueWithArguments_ = new_MethodClosure((Method)PNativeMethod8378, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_valueWithArguments_, MC_SMB_valueWithArguments_);
}


static void init_SMB_valueWithPossibleArgs_() {
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray8385 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Variable VAR_numArgs_0_1 = new_Variable_named(L"numArgs", 0);
    Array PArray8386 = new_Array_with(1, (Optr)VAR_numArgs_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8389 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    // numArgs. 
    Send PSend8392 = new_Send((Optr)self, SMB_numArgs, 0);
    Assign PAssign8391 = new_Assign((Optr)VAR_numArgs_0_1, (Optr)PSend8392);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend8393 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8397 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8398 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8397);
    Array PThreadedCode8396 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8397, (Optr)&t_send1, (Optr)PSend8398, (Optr)&t_block_return);
    Block PBlock8395 = new_Block_with(empty_Array, empty_Array, PThreadedCode8396, 1, PSend8398);
    // ifTrue:. 
    Send PSend8394 = new_Send((Optr)PSend8393, SMB_ifTrue_, 1, (Optr)PBlock8395);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8399 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    // =. 
    Send PSend8400 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)PSend8399);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8404 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)VAR_anArray_0_0);
    Array PThreadedCode8403 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send1, (Optr)PSend8404, (Optr)&t_block_return);
    Block PBlock8402 = new_Block_with(empty_Array, empty_Array, PThreadedCode8403, 1, PSend8404);
    // ifTrue:. 
    Send PSend8401 = new_Send((Optr)PSend8400, SMB_ifTrue_, 1, (Optr)PBlock8402);
    // size. 
    Send PSend8405 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend8406 = new_Send((Optr)VAR_numArgs_0_1, SMB__gt_, 1, (Optr)PSend8405);
    // size. 
    Send PSend8410 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend8411 = new_Send((Optr)VAR_numArgs_0_1, SMB__minus_, 1, (Optr)PSend8410);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend8412 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend8411);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend8413 = new_Send((Optr)VAR_anArray_0_0, SMB__append_, 1, (Optr)PSend8412);
    // valueWithArguments:. 
    Send PSend8414 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8413);
    Array PThreadedCode8409 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8410, (Optr)&t_send1, (Optr)PSend8411, (Optr)&t_send1, (Optr)PSend8412, (Optr)&t_send1, (Optr)PSend8413, (Optr)&t_send1, (Optr)PSend8414, (Optr)&t_block_return);
    Block PBlock8408 = new_Block_with(empty_Array, empty_Array, PThreadedCode8409, 1, PSend8414);
    // ifTrue:. 
    Send PSend8407 = new_Send((Optr)PSend8406, SMB_ifTrue_, 1, (Optr)PBlock8408);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend8415 = new_Send((Optr)VAR_anArray_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_numArgs_0_1);
    // valueWithArguments:. 
    Send PSend8416 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8415);
    Array PThreadedCode8390 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign8391, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8392, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend8393, (Optr)&t_send_ifTrue_, (Optr)PSend8394, (Optr)PBlock8395, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8399, (Optr)&t_send1, (Optr)PSend8400, (Optr)&t_send_ifTrue_, (Optr)PSend8401, (Optr)PBlock8402, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8405, (Optr)&t_send1, (Optr)PSend8406, (Optr)&t_send_ifTrue_, (Optr)PSend8407, (Optr)PBlock8408, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_send2, (Optr)PSend8415, (Optr)&t_send1, (Optr)PSend8416, (Optr)&t_method_return);
    Block PBlock8388 = new_Block_with(PArray8389, empty_Array, PThreadedCode8390, 5, PAssign8391, PSend8394, PSend8401, PSend8407, PSend8416);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8417 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8388);
    Array PThreadedCode8387 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8388, (Optr)&t_send1, (Optr)PSend8417, (Optr)&t_method_return);
    Method PMethod8384 = new_Method_with(PArray8385, PArray8386, empty_Array, PThreadedCode8387, 1, PSend8417);
    
    MethodClosure MC_SMB_valueWithPossibleArgs_ = new_MethodClosure((Method)PMethod8384, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_valueWithPossibleArgs_, MC_SMB_valueWithPossibleArgs_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray8419 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitMethodClosure_ = new_Symbol(L"visitMethodClosure:");
    // visitMethodClosure:. 
    Send PSend8421 = new_Send((Optr)VAR_visitor_0_0, SMB_visitMethodClosure_, 1, (Optr)self);
    Array PThreadedCode8420 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8421, (Optr)&t_method_return);
    Method PMethod8418 = new_Method_with(PArray8419, empty_Array, empty_Array, PThreadedCode8420, 1, PSend8421);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod8418, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_annotations() {
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend8424 = new_Send((Optr)slot_Runtime_Closure_code, SMB_annotations, 0);
    Array PThreadedCode8423 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Runtime_Closure_code, (Optr)&t_send0, (Optr)PSend8424, (Optr)&t_method_return);
    Method PMethod8422 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8423, 1, PSend8424);
    
    MethodClosure MC_SMB_annotations = new_MethodClosure((Method)PMethod8422, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_annotations, MC_SMB_annotations);
}


static void init_SMB_numArgs() {
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    // numArgs. 
    Send PSend8427 = new_Send((Optr)slot_Runtime_Closure_code, SMB_numArgs, 0);
    Array PThreadedCode8426 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Runtime_Closure_code, (Optr)&t_send0, (Optr)PSend8427, (Optr)&t_method_return);
    Method PMethod8425 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8426, 1, PSend8427);
    
    MethodClosure MC_SMB_numArgs = new_MethodClosure((Method)PMethod8425, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_numArgs, MC_SMB_numArgs);
}


static void init_SMB_annotationAt_() {
    Symbol SMB_annotationAt_ = new_Symbol(L"annotationAt:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray8429 = new_Array_with(1, (Optr)VAR_selector_0_0);
    // annotationAt:. 
    Send PSend8431 = new_Send((Optr)slot_Runtime_Closure_code, SMB_annotationAt_, 1, (Optr)VAR_selector_0_0);
    Array PThreadedCode8430 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Runtime_Closure_code, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend8431, (Optr)&t_method_return);
    Method PMethod8428 = new_Method_with(PArray8429, empty_Array, empty_Array, PThreadedCode8430, 1, PSend8431);
    
    MethodClosure MC_SMB_annotationAt_ = new_MethodClosure((Method)PMethod8428, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_annotationAt_, MC_SMB_annotationAt_);
}


static void init_SMB_pclass() {
    Symbol SMB_pclass = new_Symbol(L"pclass");
    Array PThreadedCode8433 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_MethodClosure_host, (Optr)&t_method_return);
    Method PMethod8432 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8433, 1, slot_Runtime_MethodClosure_host);
    
    MethodClosure MC_SMB_pclass = new_MethodClosure((Method)PMethod8432, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_pclass, MC_SMB_pclass);
}


static void init_SMB_host_() {
    Symbol SMB_host_ = new_Symbol(L"host:");
    Variable VAR_aClass_0_0 = new_Variable_named(L"aClass", 0);
    Array PArray8435 = new_Array_with(1, (Optr)VAR_aClass_0_0);
    Assign PAssign8437 = new_Assign((Optr)slot_Runtime_MethodClosure_host, (Optr)VAR_aClass_0_0);
    Array PThreadedCode8436 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8437, (Optr)&t_push_variable, (Optr)VAR_aClass_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8434 = new_Method_with(PArray8435, empty_Array, empty_Array, PThreadedCode8436, 2, PAssign8437, self);
    
    MethodClosure MC_SMB_host_ = new_MethodClosure((Method)PMethod8434, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_host_, MC_SMB_host_);
}


static void init_SMB_host() {
    Symbol SMB_host = new_Symbol(L"host");
    Array PThreadedCode8439 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_MethodClosure_host, (Optr)&t_method_return);
    Method PMethod8438 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8439, 1, slot_Runtime_MethodClosure_host);
    
    MethodClosure MC_SMB_host = new_MethodClosure((Method)PMethod8438, MethodClosure_Class);
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