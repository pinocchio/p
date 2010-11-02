#include <lib/class/Runtime/MethodClosure.h>


Optr layout_Runtime_MethodClosure_Class_class;
Optr slot_Runtime_MethodClosure_selector;
Optr slot_Runtime_MethodClosure_host;
Optr layout_Runtime_MethodClosure;


static void init_SMB_selector() {
    Symbol SMB_selector = new_Symbol(L"selector");
    Array PThreadedCode8296 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_MethodClosure_selector, (Optr)&t_method_return);
    Method PMethod8295 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8296, 1, slot_Runtime_MethodClosure_selector);
    
    MethodClosure MC_SMB_selector = new_MethodClosure((Method)PMethod8295, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_selector, MC_SMB_selector);
}


static void init_SMB_accept_on_message_() {
    Symbol SMB_accept_on_message_ = new_Symbol(L"accept:on:message:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_message_0_2 = new_Variable_named(L"message", 0);
    Array PArray8298 = new_Array_with(3, (Optr)VAR_visitor_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_message_0_2);
    Symbol SMB_accept_on_message_boundBy_ = new_Symbol(L"accept:on:message:boundBy:");
    // accept:on:message:boundBy:. 
    Send PSend8300 = new_Send((Optr)slot_Runtime_Closure_code, SMB_accept_on_message_boundBy_, 4, (Optr)VAR_visitor_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_message_0_2, (Optr)self);
    Array PThreadedCode8299 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Runtime_Closure_code, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_message_0_2, (Optr)&t_push_self, (Optr)&t_send4, (Optr)PSend8300, (Optr)&t_method_return);
    Method PMethod8297 = new_Method_with(PArray8298, empty_Array, empty_Array, PThreadedCode8299, 1, PSend8300);
    
    MethodClosure MC_SMB_accept_on_message_ = new_MethodClosure((Method)PMethod8297, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_accept_on_message_, MC_SMB_accept_on_message_);
}


static void init_SMB_pclass_() {
    Symbol SMB_pclass_ = new_Symbol(L"pclass:");
    Variable VAR_aPinocchioClass_0_0 = new_Variable_named(L"aPinocchioClass", 0);
    Array PArray8302 = new_Array_with(1, (Optr)VAR_aPinocchioClass_0_0);
    Assign PAssign8304 = new_Assign((Optr)slot_Runtime_MethodClosure_host, (Optr)VAR_aPinocchioClass_0_0);
    Array PThreadedCode8303 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8304, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8301 = new_Method_with(PArray8302, empty_Array, empty_Array, PThreadedCode8303, 2, PAssign8304, self);
    
    MethodClosure MC_SMB_pclass_ = new_MethodClosure((Method)PMethod8301, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_pclass_, MC_SMB_pclass_);
}


static void init_SMB_selector_() {
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray8306 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign8308 = new_Assign((Optr)slot_Runtime_MethodClosure_selector, (Optr)VAR_anObject_0_0);
    Array PThreadedCode8307 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8308, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8305 = new_Method_with(PArray8306, empty_Array, empty_Array, PThreadedCode8307, 2, PAssign8308, self);
    
    MethodClosure MC_SMB_selector_ = new_MethodClosure((Method)PMethod8305, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_selector_, MC_SMB_selector_);
}


static void init_SMB_valueWithArguments_() {
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    Variable VAR_arguments_0_0 = new_Variable_named(L"arguments", 0);
    Array PArray8310 = new_Array_with(1, (Optr)VAR_arguments_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_AST_minus_MethodClosure = new_Symbol(L"AST.MethodClosure");
    Annotation PAnnotation8312 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_valueWithArguments_, (Optr)SMB_AST_minus_MethodClosure);
    Array PArray8311 = new_Array_with(1, (Optr)PAnnotation8312);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend8314 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode8313 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8314, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod8309 = new_NativeMethod_with(PArray8310, empty_Array, PArray8311, PThreadedCode8313, 2, PSend8314, self);
    
    MethodClosure MC_SMB_valueWithArguments_ = new_MethodClosure((Method)PNativeMethod8309, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_valueWithArguments_, MC_SMB_valueWithArguments_);
}


static void init_SMB_valueWithPossibleArgs_() {
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray8316 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Variable VAR_numArgs_0_1 = new_Variable_named(L"numArgs", 0);
    Array PArray8317 = new_Array_with(1, (Optr)VAR_numArgs_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8320 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    // numArgs. 
    Send PSend8323 = new_Send((Optr)self, SMB_numArgs, 0);
    Assign PAssign8322 = new_Assign((Optr)VAR_numArgs_0_1, (Optr)PSend8323);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend8324 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8328 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8329 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8328);
    Array PThreadedCode8327 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8328, (Optr)&t_send1, (Optr)PSend8329, (Optr)&t_block_return);
    Block PBlock8326 = new_Block_with(empty_Array, empty_Array, PThreadedCode8327, 1, PSend8329);
    // ifTrue:. 
    Send PSend8325 = new_Send((Optr)PSend8324, SMB_ifTrue_, 1, (Optr)PBlock8326);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8330 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    // =. 
    Send PSend8331 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)PSend8330);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8335 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)VAR_anArray_0_0);
    Array PThreadedCode8334 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send1, (Optr)PSend8335, (Optr)&t_block_return);
    Block PBlock8333 = new_Block_with(empty_Array, empty_Array, PThreadedCode8334, 1, PSend8335);
    // ifTrue:. 
    Send PSend8332 = new_Send((Optr)PSend8331, SMB_ifTrue_, 1, (Optr)PBlock8333);
    // size. 
    Send PSend8336 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend8337 = new_Send((Optr)VAR_numArgs_0_1, SMB__gt_, 1, (Optr)PSend8336);
    // size. 
    Send PSend8341 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend8342 = new_Send((Optr)VAR_numArgs_0_1, SMB__minus_, 1, (Optr)PSend8341);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend8343 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend8342);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend8344 = new_Send((Optr)VAR_anArray_0_0, SMB__append_, 1, (Optr)PSend8343);
    // valueWithArguments:. 
    Send PSend8345 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8344);
    Array PThreadedCode8340 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8341, (Optr)&t_send1, (Optr)PSend8342, (Optr)&t_send1, (Optr)PSend8343, (Optr)&t_send1, (Optr)PSend8344, (Optr)&t_send1, (Optr)PSend8345, (Optr)&t_block_return);
    Block PBlock8339 = new_Block_with(empty_Array, empty_Array, PThreadedCode8340, 1, PSend8345);
    // ifTrue:. 
    Send PSend8338 = new_Send((Optr)PSend8337, SMB_ifTrue_, 1, (Optr)PBlock8339);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend8346 = new_Send((Optr)VAR_anArray_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_numArgs_0_1);
    // valueWithArguments:. 
    Send PSend8347 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8346);
    Array PThreadedCode8321 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign8322, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8323, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend8324, (Optr)&t_send_ifTrue_, (Optr)PSend8325, (Optr)PBlock8326, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8330, (Optr)&t_send1, (Optr)PSend8331, (Optr)&t_send_ifTrue_, (Optr)PSend8332, (Optr)PBlock8333, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8336, (Optr)&t_send1, (Optr)PSend8337, (Optr)&t_send_ifTrue_, (Optr)PSend8338, (Optr)PBlock8339, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_send2, (Optr)PSend8346, (Optr)&t_send1, (Optr)PSend8347, (Optr)&t_method_return);
    Block PBlock8319 = new_Block_with(PArray8320, empty_Array, PThreadedCode8321, 5, PAssign8322, PSend8325, PSend8332, PSend8338, PSend8347);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8348 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8319);
    Array PThreadedCode8318 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8319, (Optr)&t_send1, (Optr)PSend8348, (Optr)&t_method_return);
    Method PMethod8315 = new_Method_with(PArray8316, PArray8317, empty_Array, PThreadedCode8318, 1, PSend8348);
    
    MethodClosure MC_SMB_valueWithPossibleArgs_ = new_MethodClosure((Method)PMethod8315, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_valueWithPossibleArgs_, MC_SMB_valueWithPossibleArgs_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray8350 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitMethodClosure_ = new_Symbol(L"visitMethodClosure:");
    // visitMethodClosure:. 
    Send PSend8352 = new_Send((Optr)VAR_visitor_0_0, SMB_visitMethodClosure_, 1, (Optr)self);
    Array PThreadedCode8351 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8352, (Optr)&t_method_return);
    Method PMethod8349 = new_Method_with(PArray8350, empty_Array, empty_Array, PThreadedCode8351, 1, PSend8352);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod8349, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_annotations() {
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend8355 = new_Send((Optr)slot_Runtime_Closure_code, SMB_annotations, 0);
    Array PThreadedCode8354 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Runtime_Closure_code, (Optr)&t_send0, (Optr)PSend8355, (Optr)&t_method_return);
    Method PMethod8353 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8354, 1, PSend8355);
    
    MethodClosure MC_SMB_annotations = new_MethodClosure((Method)PMethod8353, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_annotations, MC_SMB_annotations);
}


static void init_SMB_numArgs() {
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    // numArgs. 
    Send PSend8358 = new_Send((Optr)slot_Runtime_Closure_code, SMB_numArgs, 0);
    Array PThreadedCode8357 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Runtime_Closure_code, (Optr)&t_send0, (Optr)PSend8358, (Optr)&t_method_return);
    Method PMethod8356 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8357, 1, PSend8358);
    
    MethodClosure MC_SMB_numArgs = new_MethodClosure((Method)PMethod8356, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_numArgs, MC_SMB_numArgs);
}


static void init_SMB_annotationAt_() {
    Symbol SMB_annotationAt_ = new_Symbol(L"annotationAt:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray8360 = new_Array_with(1, (Optr)VAR_selector_0_0);
    // annotationAt:. 
    Send PSend8362 = new_Send((Optr)slot_Runtime_Closure_code, SMB_annotationAt_, 1, (Optr)VAR_selector_0_0);
    Array PThreadedCode8361 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Runtime_Closure_code, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend8362, (Optr)&t_method_return);
    Method PMethod8359 = new_Method_with(PArray8360, empty_Array, empty_Array, PThreadedCode8361, 1, PSend8362);
    
    MethodClosure MC_SMB_annotationAt_ = new_MethodClosure((Method)PMethod8359, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_annotationAt_, MC_SMB_annotationAt_);
}


static void init_SMB_pclass() {
    Symbol SMB_pclass = new_Symbol(L"pclass");
    Array PThreadedCode8364 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_MethodClosure_host, (Optr)&t_method_return);
    Method PMethod8363 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8364, 1, slot_Runtime_MethodClosure_host);
    
    MethodClosure MC_SMB_pclass = new_MethodClosure((Method)PMethod8363, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_pclass, MC_SMB_pclass);
}


static void init_SMB_host_() {
    Symbol SMB_host_ = new_Symbol(L"host:");
    Variable VAR_aClass_0_0 = new_Variable_named(L"aClass", 0);
    Array PArray8366 = new_Array_with(1, (Optr)VAR_aClass_0_0);
    Assign PAssign8368 = new_Assign((Optr)slot_Runtime_MethodClosure_host, (Optr)VAR_aClass_0_0);
    Array PThreadedCode8367 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8368, (Optr)&t_push_variable, (Optr)VAR_aClass_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8365 = new_Method_with(PArray8366, empty_Array, empty_Array, PThreadedCode8367, 2, PAssign8368, self);
    
    MethodClosure MC_SMB_host_ = new_MethodClosure((Method)PMethod8365, MethodClosure_Class);
    store_method(MethodClosure_Class, SMB_host_, MC_SMB_host_);
}


static void init_SMB_host() {
    Symbol SMB_host = new_Symbol(L"host");
    Array PThreadedCode8370 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_MethodClosure_host, (Optr)&t_method_return);
    Method PMethod8369 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8370, 1, slot_Runtime_MethodClosure_host);
    
    MethodClosure MC_SMB_host = new_MethodClosure((Method)PMethod8369, MethodClosure_Class);
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