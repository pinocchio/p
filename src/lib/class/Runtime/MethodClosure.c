#include <lib/class/Runtime/MethodClosure.h>


Optr layout_Runtime_MethodClosure_Class_class;
Optr slot_Runtime_MethodClosure_selector;
Optr slot_Runtime_MethodClosure_host;
Optr layout_Runtime_MethodClosure;


static void init_SMB_selector() {
    Symbol SMB_selector = new_Symbol(L"selector");
    Array PThreadedCode8320 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_MethodClosure_selector, (Optr)&t_method_return);
    Method PMethod8319 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8320, 1, slot_Runtime_MethodClosure_selector);
    
    MethodClosure MC_SMB_selector = new_MethodClosure((Method)PMethod8319, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_selector, MC_SMB_selector);
}


static void init_SMB_accept_on_message_() {
    Symbol SMB_accept_on_message_ = new_Symbol(L"accept:on:message:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_message_0_2 = new_Variable_named(L"message", 0);
    Array PArray8322 = new_Array_with(3, (Optr)VAR_visitor_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_message_0_2);
    Symbol SMB_accept_on_message_boundBy_ = new_Symbol(L"accept:on:message:boundBy:");
    // accept:on:message:boundBy:. 
    Send PSend8324 = new_Send((Optr)slot_Runtime_Closure_code, SMB_accept_on_message_boundBy_, 4, (Optr)VAR_visitor_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_message_0_2, (Optr)self);
    Array PThreadedCode8323 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Runtime_Closure_code, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_message_0_2, (Optr)&t_push_self, (Optr)&t_send4, (Optr)PSend8324, (Optr)&t_method_return);
    Method PMethod8321 = new_Method_with(PArray8322, empty_Array, empty_Array, PThreadedCode8323, 1, PSend8324);
    
    MethodClosure MC_SMB_accept_on_message_ = new_MethodClosure((Method)PMethod8321, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_accept_on_message_, MC_SMB_accept_on_message_);
}


static void init_SMB_pclass_() {
    Symbol SMB_pclass_ = new_Symbol(L"pclass:");
    Variable VAR_aPinocchioClass_0_0 = new_Variable_named(L"aPinocchioClass", 0);
    Array PArray8326 = new_Array_with(1, (Optr)VAR_aPinocchioClass_0_0);
    Assign PAssign8328 = new_Assign((Optr)slot_Runtime_MethodClosure_host, (Optr)VAR_aPinocchioClass_0_0);
    Array PThreadedCode8327 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8328, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8325 = new_Method_with(PArray8326, empty_Array, empty_Array, PThreadedCode8327, 2, PAssign8328, self);
    
    MethodClosure MC_SMB_pclass_ = new_MethodClosure((Method)PMethod8325, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_pclass_, MC_SMB_pclass_);
}


static void init_SMB_selector_() {
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray8330 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign8332 = new_Assign((Optr)slot_Runtime_MethodClosure_selector, (Optr)VAR_anObject_0_0);
    Array PThreadedCode8331 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8332, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8329 = new_Method_with(PArray8330, empty_Array, empty_Array, PThreadedCode8331, 2, PAssign8332, self);
    
    MethodClosure MC_SMB_selector_ = new_MethodClosure((Method)PMethod8329, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_selector_, MC_SMB_selector_);
}


static void init_SMB_valueWithArguments_() {
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    Variable VAR_arguments_0_0 = new_Variable_named(L"arguments", 0);
    Array PArray8334 = new_Array_with(1, (Optr)VAR_arguments_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_AST_minus_MethodClosure = new_Symbol(L"AST.MethodClosure");
    Annotation PAnnotation8336 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_valueWithArguments_, (Optr)SMB_AST_minus_MethodClosure);
    Array PArray8335 = new_Array_with(1, (Optr)PAnnotation8336);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend8338 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode8337 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8338, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod8333 = new_NativeMethod_with(PArray8334, empty_Array, PArray8335, PThreadedCode8337, 2, PSend8338, self);
    
    MethodClosure MC_SMB_valueWithArguments_ = new_MethodClosure((Method)PNativeMethod8333, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_valueWithArguments_, MC_SMB_valueWithArguments_);
}


static void init_SMB_valueWithPossibleArgs_() {
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray8340 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Variable VAR_numArgs_0_1 = new_Variable_named(L"numArgs", 0);
    Array PArray8341 = new_Array_with(1, (Optr)VAR_numArgs_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8344 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    // numArgs. 
    Send PSend8347 = new_Send((Optr)self, SMB_numArgs, 0);
    Assign PAssign8346 = new_Assign((Optr)VAR_numArgs_0_1, (Optr)PSend8347);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend8348 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8352 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8353 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8352);
    Array PThreadedCode8351 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8352, (Optr)&t_send1, (Optr)PSend8353, (Optr)&t_block_return);
    Block PBlock8350 = new_Block_with(empty_Array, empty_Array, PThreadedCode8351, 1, PSend8353);
    // ifTrue:. 
    Send PSend8349 = new_Send((Optr)PSend8348, SMB_ifTrue_, 1, (Optr)PBlock8350);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8354 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    // =. 
    Send PSend8355 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)PSend8354);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8359 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)VAR_anArray_0_0);
    Array PThreadedCode8358 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send1, (Optr)PSend8359, (Optr)&t_block_return);
    Block PBlock8357 = new_Block_with(empty_Array, empty_Array, PThreadedCode8358, 1, PSend8359);
    // ifTrue:. 
    Send PSend8356 = new_Send((Optr)PSend8355, SMB_ifTrue_, 1, (Optr)PBlock8357);
    // size. 
    Send PSend8360 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend8361 = new_Send((Optr)VAR_numArgs_0_1, SMB__gt_, 1, (Optr)PSend8360);
    // size. 
    Send PSend8365 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend8366 = new_Send((Optr)VAR_numArgs_0_1, SMB__minus_, 1, (Optr)PSend8365);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend8367 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend8366);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend8368 = new_Send((Optr)VAR_anArray_0_0, SMB__append_, 1, (Optr)PSend8367);
    // valueWithArguments:. 
    Send PSend8369 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8368);
    Array PThreadedCode8364 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8365, (Optr)&t_send1, (Optr)PSend8366, (Optr)&t_send1, (Optr)PSend8367, (Optr)&t_send1, (Optr)PSend8368, (Optr)&t_send1, (Optr)PSend8369, (Optr)&t_block_return);
    Block PBlock8363 = new_Block_with(empty_Array, empty_Array, PThreadedCode8364, 1, PSend8369);
    // ifTrue:. 
    Send PSend8362 = new_Send((Optr)PSend8361, SMB_ifTrue_, 1, (Optr)PBlock8363);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend8370 = new_Send((Optr)VAR_anArray_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_numArgs_0_1);
    // valueWithArguments:. 
    Send PSend8371 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8370);
    Array PThreadedCode8345 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign8346, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8347, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend8348, (Optr)&t_send_ifTrue_, (Optr)PSend8349, (Optr)PBlock8350, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8354, (Optr)&t_send1, (Optr)PSend8355, (Optr)&t_send_ifTrue_, (Optr)PSend8356, (Optr)PBlock8357, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8360, (Optr)&t_send1, (Optr)PSend8361, (Optr)&t_send_ifTrue_, (Optr)PSend8362, (Optr)PBlock8363, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_send2, (Optr)PSend8370, (Optr)&t_send1, (Optr)PSend8371, (Optr)&t_method_return);
    Block PBlock8343 = new_Block_with(PArray8344, empty_Array, PThreadedCode8345, 5, PAssign8346, PSend8349, PSend8356, PSend8362, PSend8371);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8372 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8343);
    Array PThreadedCode8342 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8343, (Optr)&t_send1, (Optr)PSend8372, (Optr)&t_method_return);
    Method PMethod8339 = new_Method_with(PArray8340, PArray8341, empty_Array, PThreadedCode8342, 1, PSend8372);
    
    MethodClosure MC_SMB_valueWithPossibleArgs_ = new_MethodClosure((Method)PMethod8339, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_valueWithPossibleArgs_, MC_SMB_valueWithPossibleArgs_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray8374 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitMethodClosure_ = new_Symbol(L"visitMethodClosure:");
    // visitMethodClosure:. 
    Send PSend8376 = new_Send((Optr)VAR_visitor_0_0, SMB_visitMethodClosure_, 1, (Optr)self);
    Array PThreadedCode8375 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8376, (Optr)&t_method_return);
    Method PMethod8373 = new_Method_with(PArray8374, empty_Array, empty_Array, PThreadedCode8375, 1, PSend8376);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod8373, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_annotations() {
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend8379 = new_Send((Optr)slot_Runtime_Closure_code, SMB_annotations, 0);
    Array PThreadedCode8378 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Runtime_Closure_code, (Optr)&t_send0, (Optr)PSend8379, (Optr)&t_method_return);
    Method PMethod8377 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8378, 1, PSend8379);
    
    MethodClosure MC_SMB_annotations = new_MethodClosure((Method)PMethod8377, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_annotations, MC_SMB_annotations);
}


static void init_SMB_numArgs() {
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    // numArgs. 
    Send PSend8382 = new_Send((Optr)slot_Runtime_Closure_code, SMB_numArgs, 0);
    Array PThreadedCode8381 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Runtime_Closure_code, (Optr)&t_send0, (Optr)PSend8382, (Optr)&t_method_return);
    Method PMethod8380 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8381, 1, PSend8382);
    
    MethodClosure MC_SMB_numArgs = new_MethodClosure((Method)PMethod8380, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_numArgs, MC_SMB_numArgs);
}


static void init_SMB_annotationAt_() {
    Symbol SMB_annotationAt_ = new_Symbol(L"annotationAt:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray8384 = new_Array_with(1, (Optr)VAR_selector_0_0);
    // annotationAt:. 
    Send PSend8386 = new_Send((Optr)slot_Runtime_Closure_code, SMB_annotationAt_, 1, (Optr)VAR_selector_0_0);
    Array PThreadedCode8385 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Runtime_Closure_code, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend8386, (Optr)&t_method_return);
    Method PMethod8383 = new_Method_with(PArray8384, empty_Array, empty_Array, PThreadedCode8385, 1, PSend8386);
    
    MethodClosure MC_SMB_annotationAt_ = new_MethodClosure((Method)PMethod8383, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_annotationAt_, MC_SMB_annotationAt_);
}


static void init_SMB_pclass() {
    Symbol SMB_pclass = new_Symbol(L"pclass");
    Array PThreadedCode8388 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_MethodClosure_host, (Optr)&t_method_return);
    Method PMethod8387 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8388, 1, slot_Runtime_MethodClosure_host);
    
    MethodClosure MC_SMB_pclass = new_MethodClosure((Method)PMethod8387, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_pclass, MC_SMB_pclass);
}


static void init_SMB_host_() {
    Symbol SMB_host_ = new_Symbol(L"host:");
    Variable VAR_aClass_0_0 = new_Variable_named(L"aClass", 0);
    Array PArray8390 = new_Array_with(1, (Optr)VAR_aClass_0_0);
    Assign PAssign8392 = new_Assign((Optr)slot_Runtime_MethodClosure_host, (Optr)VAR_aClass_0_0);
    Array PThreadedCode8391 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8392, (Optr)&t_push_variable, (Optr)VAR_aClass_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8389 = new_Method_with(PArray8390, empty_Array, empty_Array, PThreadedCode8391, 2, PAssign8392, self);
    
    MethodClosure MC_SMB_host_ = new_MethodClosure((Method)PMethod8389, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_host_, MC_SMB_host_);
}


static void init_SMB_host() {
    Symbol SMB_host = new_Symbol(L"host");
    Array PThreadedCode8394 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_MethodClosure_host, (Optr)&t_method_return);
    Method PMethod8393 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8394, 1, slot_Runtime_MethodClosure_host);
    
    MethodClosure MC_SMB_host = new_MethodClosure((Method)PMethod8393, MethodClosure_Class);
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