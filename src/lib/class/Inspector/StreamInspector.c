#include <lib/class/Inspector/StreamInspector.h>


Optr layout_Inspector_StreamInspector_Class_class;
Optr slot_Inspector_StreamInspector_stream;
Optr layout_Inspector_StreamInspector;


<<<<<<< HEAD
static void init_SMB_titleStream() {
    Symbol SMB_titleStream = new_Symbol(L"titleStream");
    Array PThreadedCode12354 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Inspector_StreamInspector_stream, (Optr)&t_method_return);
    Method PMethod12353 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12354, 1, slot_Inspector_StreamInspector_stream);
    
    MethodClosure MC_SMB_titleStream = new_MethodClosure((Method)PMethod12353, Inspector_StreamInspector_Class);
    store_method(Inspector_StreamInspector_Class, SMB_titleStream, MC_SMB_titleStream);
}


=======
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
static void init_SMB_child_value_() {
    Symbol SMB_child_value_ = new_Symbol(L"child:value:");
    Variable VAR_label_0_0 = new_Variable_named(L"label", 0);
    Variable VAR_child_0_1 = new_Variable_named(L"child", 0);
<<<<<<< HEAD
    Array PArray12356 = new_Array_with(2, (Optr)VAR_label_0_0, (Optr)VAR_child_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12359 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend12361 = new_Send((Optr)VAR__receiver__1_0, SMB_lf, 0);
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
    Send PSend12362 = new_Send((Optr)VAR__receiver__1_0, SMB_tab, 0);
    Array PThreadedCode12360 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend12361, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend12362, (Optr)&t_method_return);
    Block PBlock12358 = new_Block_with(PArray12359, empty_Array, PThreadedCode12360, 2, PSend12361, PSend12362);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12363 = new_Send((Optr)PBlock12358, SMB_value_, 1, (Optr)slot_Inspector_StreamInspector_stream);
    Symbol SMB_inspectLabelOn_ = new_Symbol(L"inspectLabelOn:");
    // inspectLabelOn:. 
    Send PSend12364 = new_Send((Optr)VAR_label_0_0, SMB_inspectLabelOn_, 1, (Optr)slot_Inspector_StreamInspector_stream);
    String string_12365 = new_String(L": ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_12365_Const = new_Constant((Optr)string_12365);
    // <<. 
    Send PSend12366 = new_Send((Optr)slot_Inspector_StreamInspector_stream, SMB__shiftLeft_, 1, (Optr)string_12365_Const);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend12367 = new_Send((Optr)VAR_child_0_1, SMB_value, 0);
    Symbol SMB_shallowInspect_on_ = new_Symbol(L"shallowInspect:on:");
    // shallowInspect:on:. 
    Send PSend12368 = new_Send((Optr)self, SMB_shallowInspect_on_, 2, (Optr)PSend12367, (Optr)slot_Inspector_StreamInspector_stream);
    Array PThreadedCode12357 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push_closure, (Optr)PBlock12358, (Optr)&t_push_slot, (Optr)slot_Inspector_StreamInspector_stream, (Optr)&t_send1, (Optr)PSend12363, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_label_0_0, (Optr)&t_push_slot, (Optr)slot_Inspector_StreamInspector_stream, (Optr)&t_send1, (Optr)PSend12364, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Inspector_StreamInspector_stream, (Optr)&t_push1, (Optr)string_12365, (Optr)&t_send1, (Optr)PSend12366, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_child_0_1, (Optr)&t_send0, (Optr)PSend12367, (Optr)&t_push_slot, (Optr)slot_Inspector_StreamInspector_stream, (Optr)&t_send2, (Optr)PSend12368, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12355 = new_Method_with(PArray12356, empty_Array, empty_Array, PThreadedCode12357, 5, PSend12363, PSend12364, PSend12366, PSend12368, self);
    
    MethodClosure MC_SMB_child_value_ = new_MethodClosure((Method)PMethod12355, Inspector_StreamInspector_Class);
=======
    Array PArray12320 = new_Array_with(2, (Optr)VAR_label_0_0, (Optr)VAR_child_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12323 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend12325 = new_Send((Optr)VAR__receiver__1_0, SMB_lf, 0);
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
    Send PSend12326 = new_Send((Optr)VAR__receiver__1_0, SMB_tab, 0);
    Array PThreadedCode12324 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend12325, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend12326, (Optr)&t_method_return);
    Block PBlock12322 = new_Block_with(PArray12323, empty_Array, PThreadedCode12324, 2, PSend12325, PSend12326);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12327 = new_Send((Optr)PBlock12322, SMB_value_, 1, (Optr)slot_Inspector_StreamInspector_stream);
    Symbol SMB_inspectLabelOn_ = new_Symbol(L"inspectLabelOn:");
    // inspectLabelOn:. 
    Send PSend12328 = new_Send((Optr)VAR_label_0_0, SMB_inspectLabelOn_, 1, (Optr)slot_Inspector_StreamInspector_stream);
    String string_12329 = new_String(L": ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_12329_Const = new_Constant((Optr)string_12329);
    // <<. 
    Send PSend12330 = new_Send((Optr)slot_Inspector_StreamInspector_stream, SMB__shiftLeft_, 1, (Optr)string_12329_Const);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend12331 = new_Send((Optr)VAR_child_0_1, SMB_value, 0);
    Symbol SMB_shallowInspect_on_ = new_Symbol(L"shallowInspect:on:");
    // shallowInspect:on:. 
    Send PSend12332 = new_Send((Optr)self, SMB_shallowInspect_on_, 2, (Optr)PSend12331, (Optr)slot_Inspector_StreamInspector_stream);
    Array PThreadedCode12321 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push_closure, (Optr)PBlock12322, (Optr)&t_push_slot, (Optr)slot_Inspector_StreamInspector_stream, (Optr)&t_send1, (Optr)PSend12327, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_label_0_0, (Optr)&t_push_slot, (Optr)slot_Inspector_StreamInspector_stream, (Optr)&t_send1, (Optr)PSend12328, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Inspector_StreamInspector_stream, (Optr)&t_push1, (Optr)string_12329, (Optr)&t_send1, (Optr)PSend12330, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_child_0_1, (Optr)&t_send0, (Optr)PSend12331, (Optr)&t_push_slot, (Optr)slot_Inspector_StreamInspector_stream, (Optr)&t_send2, (Optr)PSend12332, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12319 = new_Method_with(PArray12320, empty_Array, empty_Array, PThreadedCode12321, 5, PSend12327, PSend12328, PSend12330, PSend12332, self);
    
    MethodClosure MC_SMB_child_value_ = new_MethodClosure((Method)PMethod12319, Inspector_StreamInspector_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Inspector_StreamInspector_Class, SMB_child_value_, MC_SMB_child_value_);
}


static void init_SMB_inspectChildren_() {
    Symbol SMB_inspectChildren_ = new_Symbol(L"inspectChildren:");
    Variable VAR_children_0_0 = new_Variable_named(L"children", 0);
<<<<<<< HEAD
    Array PArray12370 = new_Array_with(1, (Optr)VAR_children_0_0);
    Super PSuper12372 = new_Super(SMB_inspectChildren_, 1, (Optr)VAR_children_0_0);
    Array PThreadedCode12371 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_children_0_0, (Optr)&t_super1, (Optr)PSuper12372, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12369 = new_Method_with(PArray12370, empty_Array, empty_Array, PThreadedCode12371, 2, PSuper12372, self);
    
    MethodClosure MC_SMB_inspectChildren_ = new_MethodClosure((Method)PMethod12369, Inspector_StreamInspector_Class);
=======
    Array PArray12334 = new_Array_with(1, (Optr)VAR_children_0_0);
    Super PSuper12336 = new_Super(SMB_inspectChildren_, 1, (Optr)VAR_children_0_0);
    Array PThreadedCode12335 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_children_0_0, (Optr)&t_super1, (Optr)PSuper12336, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12333 = new_Method_with(PArray12334, empty_Array, empty_Array, PThreadedCode12335, 2, PSuper12336, self);
    
    MethodClosure MC_SMB_inspectChildren_ = new_MethodClosure((Method)PMethod12333, Inspector_StreamInspector_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Inspector_StreamInspector_Class, SMB_inspectChildren_, MC_SMB_inspectChildren_);
}


static void init_SMB_on_() {
    /*
    on: stream
// 	^ super basicNew on: stream
    */
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
<<<<<<< HEAD
    Array PArray12374 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Assign PAssign12376 = new_Assign((Optr)slot_Inspector_StreamInspector_stream, (Optr)VAR_aStream_0_0);
    Array PThreadedCode12375 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign12376, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12373 = new_Method_with(PArray12374, empty_Array, empty_Array, PThreadedCode12375, 2, PAssign12376, self);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod12373, Inspector_StreamInspector_Class);
=======
    Array PArray12338 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Assign PAssign12340 = new_Assign((Optr)slot_Inspector_StreamInspector_stream, (Optr)VAR_aStream_0_0);
    Array PThreadedCode12339 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign12340, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12337 = new_Method_with(PArray12338, empty_Array, empty_Array, PThreadedCode12339, 2, PAssign12340, self);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod12337, Inspector_StreamInspector_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Inspector_StreamInspector_Class, SMB_on_, MC_SMB_on_);
}


static void init_SMB_titleStream() {
    Symbol SMB_titleStream = new_Symbol(L"titleStream");
    Array PThreadedCode12342 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Inspector_StreamInspector_stream, (Optr)&t_method_return);
    Method PMethod12341 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12342, 1, slot_Inspector_StreamInspector_stream);
    
    MethodClosure MC_SMB_titleStream = new_MethodClosure((Method)PMethod12341, Inspector_StreamInspector_Class);
    store_method(Inspector_StreamInspector_Class, SMB_titleStream, MC_SMB_titleStream);
}


static void init_class_SMB_new() {
    /*
    new
// 	"The receiver can only have one instance. Create it or complain that
// 	one already exists."
// 
// 	thisClass class ~~ self
// 		ifTrue: [^thisClass := self basicNew]
// 		ifFalse: [self error: 'A Metaclass should only have one instance!']
    */
    Symbol SMB_new = new_Symbol(L"new");
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
<<<<<<< HEAD
    Send PSend12379 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stdout, 0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12380 = new_Send((Optr)self, SMB_on_, 1, (Optr)PSend12379);
    Array PThreadedCode12378 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend12379, (Optr)&t_send1, (Optr)PSend12380, (Optr)&t_method_return);
    Method PMethod12377 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12378, 1, PSend12380);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod12377, HEADER(Inspector_StreamInspector_Class));
=======
    Send PSend12345 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stdout, 0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12346 = new_Send((Optr)self, SMB_on_, 1, (Optr)PSend12345);
    Array PThreadedCode12344 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend12345, (Optr)&t_send1, (Optr)PSend12346, (Optr)&t_method_return);
    Method PMethod12343 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12344, 1, PSend12346);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod12343, HEADER(Inspector_StreamInspector_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Inspector_StreamInspector_Class), SMB_new, MC_SMB_new);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
<<<<<<< HEAD
    Array PArray12382 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper12384 = new_Super(SMB_basicNew, 0);
    // on:. 
    Send PSend12385 = new_Send((Optr)PSuper12384, SMB_on_, 1, (Optr)VAR_stream_0_0);
    Array PThreadedCode12383 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper12384, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_send1, (Optr)PSend12385, (Optr)&t_method_return);
    Method PMethod12381 = new_Method_with(PArray12382, empty_Array, empty_Array, PThreadedCode12383, 1, PSend12385);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod12381, HEADER(Inspector_StreamInspector_Class));
=======
    Array PArray12348 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper12350 = new_Super(SMB_basicNew, 0);
    // on:. 
    Send PSend12351 = new_Send((Optr)PSuper12350, SMB_on_, 1, (Optr)VAR_stream_0_0);
    Array PThreadedCode12349 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper12350, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_send1, (Optr)PSend12351, (Optr)&t_method_return);
    Method PMethod12347 = new_Method_with(PArray12348, empty_Array, empty_Array, PThreadedCode12349, 1, PSend12351);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod12347, HEADER(Inspector_StreamInspector_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Inspector_StreamInspector_Class), SMB_on_, MC_SMB_on_);
}

void init_Inspector_PStreamInspector_layout() {
    layout_Inspector_StreamInspector_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_Inspector_StreamInspector_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Inspector_StreamInspector_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Inspector_StreamInspector_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Inspector_StreamInspector_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Inspector_StreamInspector_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_Inspector_StreamInspector_Class_class)->values[5] = slot_Inspector_Inspector_Class_class_inspector; // inspector 
    
    Symbol  SMB_StreamInspector = new_Symbol(L"StreamInspector");
    slot_Inspector_StreamInspector_stream = (Optr)new_Slot(0, L"stream");
    layout_Inspector_StreamInspector = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Inspector_StreamInspector)->values[0] = slot_Inspector_StreamInspector_stream; // stream 
    Inspector_StreamInspector_Class = (Class)new_Class(Inspector_Inspector_Class, layout_Inspector_StreamInspector_Class_class);
    Inspector_StreamInspector_Class->layout = layout_Inspector_StreamInspector;
    Inspector_StreamInspector_Class->name = SMB_StreamInspector;
    
}

void init_Inspector_PStreamInspector_methods() {
    init_SMB_child_value_();
    init_SMB_inspectChildren_();
    init_SMB_on_();
    init_SMB_titleStream();
    init_class_SMB_new();
    init_class_SMB_on_();
    
}