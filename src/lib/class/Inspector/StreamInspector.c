#include <lib/class/Inspector/StreamInspector.h>


Optr layout_Inspector_StreamInspector_Class_class;
Optr slot_Inspector_StreamInspector_stream;
Optr layout_Inspector_StreamInspector;


static void init_SMB_child_value_() {
    Symbol SMB_child_value_ = new_Symbol(L"child:value:");
    Variable VAR_label_0_0 = new_Variable_named(L"label", 0);
    Variable VAR_child_0_1 = new_Variable_named(L"child", 0);
    Array PArray12322 = new_Array_with(2, (Optr)VAR_label_0_0, (Optr)VAR_child_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12325 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend12327 = new_Send((Optr)VAR__receiver__1_0, SMB_lf, 0);
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
    Send PSend12328 = new_Send((Optr)VAR__receiver__1_0, SMB_tab, 0);
    Array PThreadedCode12326 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend12327, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend12328, (Optr)&t_method_return);
    Block PBlock12324 = new_Block_with(PArray12325, empty_Array, PThreadedCode12326, 2, PSend12327, PSend12328);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12329 = new_Send((Optr)PBlock12324, SMB_value_, 1, (Optr)slot_Inspector_StreamInspector_stream);
    Symbol SMB_inspectLabelOn_ = new_Symbol(L"inspectLabelOn:");
    // inspectLabelOn:. 
    Send PSend12330 = new_Send((Optr)VAR_label_0_0, SMB_inspectLabelOn_, 1, (Optr)slot_Inspector_StreamInspector_stream);
    String string_12331 = new_String(L": ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_12331_Const = new_Constant((Optr)string_12331);
    // <<. 
    Send PSend12332 = new_Send((Optr)slot_Inspector_StreamInspector_stream, SMB__shiftLeft_, 1, (Optr)string_12331_Const);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend12333 = new_Send((Optr)VAR_child_0_1, SMB_value, 0);
    Symbol SMB_shallowInspect_on_ = new_Symbol(L"shallowInspect:on:");
    // shallowInspect:on:. 
    Send PSend12334 = new_Send((Optr)self, SMB_shallowInspect_on_, 2, (Optr)PSend12333, (Optr)slot_Inspector_StreamInspector_stream);
    Array PThreadedCode12323 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push_closure, (Optr)PBlock12324, (Optr)&t_push_slot, (Optr)slot_Inspector_StreamInspector_stream, (Optr)&t_send1, (Optr)PSend12329, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_label_0_0, (Optr)&t_push_slot, (Optr)slot_Inspector_StreamInspector_stream, (Optr)&t_send1, (Optr)PSend12330, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Inspector_StreamInspector_stream, (Optr)&t_push1, (Optr)string_12331, (Optr)&t_send1, (Optr)PSend12332, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_child_0_1, (Optr)&t_send0, (Optr)PSend12333, (Optr)&t_push_slot, (Optr)slot_Inspector_StreamInspector_stream, (Optr)&t_send2, (Optr)PSend12334, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12321 = new_Method_with(PArray12322, empty_Array, empty_Array, PThreadedCode12323, 5, PSend12329, PSend12330, PSend12332, PSend12334, self);
    
    MethodClosure MC_SMB_child_value_ = new_MethodClosure((Method)PMethod12321, Inspector_StreamInspector_Class);
    store_method(Inspector_StreamInspector_Class, SMB_child_value_, MC_SMB_child_value_);
}


static void init_SMB_inspectChildren_() {
    Symbol SMB_inspectChildren_ = new_Symbol(L"inspectChildren:");
    Variable VAR_children_0_0 = new_Variable_named(L"children", 0);
    Array PArray12336 = new_Array_with(1, (Optr)VAR_children_0_0);
    Super PSuper12338 = new_Super(SMB_inspectChildren_, 1, (Optr)VAR_children_0_0);
    Array PThreadedCode12337 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_children_0_0, (Optr)&t_super1, (Optr)PSuper12338, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12335 = new_Method_with(PArray12336, empty_Array, empty_Array, PThreadedCode12337, 2, PSuper12338, self);
    
    MethodClosure MC_SMB_inspectChildren_ = new_MethodClosure((Method)PMethod12335, Inspector_StreamInspector_Class);
    store_method(Inspector_StreamInspector_Class, SMB_inspectChildren_, MC_SMB_inspectChildren_);
}


static void init_SMB_on_() {
    /*
    on: stream
// 	^ super basicNew on: stream
    */
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray12340 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Assign PAssign12342 = new_Assign((Optr)slot_Inspector_StreamInspector_stream, (Optr)VAR_aStream_0_0);
    Array PThreadedCode12341 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign12342, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12339 = new_Method_with(PArray12340, empty_Array, empty_Array, PThreadedCode12341, 2, PAssign12342, self);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod12339, Inspector_StreamInspector_Class);
    store_method(Inspector_StreamInspector_Class, SMB_on_, MC_SMB_on_);
}


static void init_SMB_titleStream() {
    Symbol SMB_titleStream = new_Symbol(L"titleStream");
    Array PThreadedCode12344 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Inspector_StreamInspector_stream, (Optr)&t_method_return);
    Method PMethod12343 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12344, 1, slot_Inspector_StreamInspector_stream);
    
    MethodClosure MC_SMB_titleStream = new_MethodClosure((Method)PMethod12343, Inspector_StreamInspector_Class);
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
    Send PSend12347 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stdout, 0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12348 = new_Send((Optr)self, SMB_on_, 1, (Optr)PSend12347);
    Array PThreadedCode12346 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend12347, (Optr)&t_send1, (Optr)PSend12348, (Optr)&t_method_return);
    Method PMethod12345 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12346, 1, PSend12348);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod12345, HEADER(Inspector_StreamInspector_Class));
    store_method(HEADER(Inspector_StreamInspector_Class), SMB_new, MC_SMB_new);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
    Array PArray12350 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper12352 = new_Super(SMB_basicNew, 0);
    // on:. 
    Send PSend12353 = new_Send((Optr)PSuper12352, SMB_on_, 1, (Optr)VAR_stream_0_0);
    Array PThreadedCode12351 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper12352, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_send1, (Optr)PSend12353, (Optr)&t_method_return);
    Method PMethod12349 = new_Method_with(PArray12350, empty_Array, empty_Array, PThreadedCode12351, 1, PSend12353);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod12349, HEADER(Inspector_StreamInspector_Class));
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