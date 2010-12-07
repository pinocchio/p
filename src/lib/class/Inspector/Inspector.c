#include <lib/class/Inspector/Inspector.h>


Optr slot_Inspector_Inspector_Class_class_inspector;
Optr layout_Inspector_Inspector_Class_class;


static void init_SMB_shallowInspect_on_() {
    Symbol SMB_shallowInspect_on_ = new_Symbol(L"shallowInspect:on:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_aStream_0_1 = new_Variable_named(L"aStream", 0);
<<<<<<< HEAD
    Array PArray12315 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_aStream_0_1);
    Symbol SMB_inspectNameOn_ = new_Symbol(L"inspectNameOn:");
    // inspectNameOn:. 
    Send PSend12317 = new_Send((Optr)VAR_anObject_0_0, SMB_inspectNameOn_, 1, (Optr)VAR_aStream_0_1);
    Array PThreadedCode12316 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_1, (Optr)&t_send1, (Optr)PSend12317, (Optr)&t_method_return);
    Method PMethod12314 = new_Method_with(PArray12315, empty_Array, empty_Array, PThreadedCode12316, 1, PSend12317);
    
    MethodClosure MC_SMB_shallowInspect_on_ = new_MethodClosure((Method)PMethod12314, Inspector_Inspector_Class);
=======
    Array PArray12281 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_aStream_0_1);
    Symbol SMB_inspectNameOn_ = new_Symbol(L"inspectNameOn:");
    // inspectNameOn:. 
    Send PSend12283 = new_Send((Optr)VAR_anObject_0_0, SMB_inspectNameOn_, 1, (Optr)VAR_aStream_0_1);
    Array PThreadedCode12282 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_1, (Optr)&t_send1, (Optr)PSend12283, (Optr)&t_method_return);
    Method PMethod12280 = new_Method_with(PArray12281, empty_Array, empty_Array, PThreadedCode12282, 1, PSend12283);
    
    MethodClosure MC_SMB_shallowInspect_on_ = new_MethodClosure((Method)PMethod12280, Inspector_Inspector_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Inspector_Inspector_Class, SMB_shallowInspect_on_, MC_SMB_shallowInspect_on_);
}


<<<<<<< HEAD
static void init_SMB_titleStream() {
    Symbol SMB_titleStream = new_Symbol(L"titleStream");
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend12320 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode12319 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12320, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12318 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12319, 2, PSend12320, self);
    
    MethodClosure MC_SMB_titleStream = new_MethodClosure((Method)PMethod12318, Inspector_Inspector_Class);
    store_method(Inspector_Inspector_Class, SMB_titleStream, MC_SMB_titleStream);
}


static void init_SMB_child_value_() {
    Symbol SMB_child_value_ = new_Symbol(L"child:value:");
    Variable VAR_label_0_0 = new_Variable_named(L"label", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray12322 = new_Array_with(2, (Optr)VAR_label_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend12324 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode12323 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12324, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12321 = new_Method_with(PArray12322, empty_Array, empty_Array, PThreadedCode12323, 2, PSend12324, self);
    
    MethodClosure MC_SMB_child_value_ = new_MethodClosure((Method)PMethod12321, Inspector_Inspector_Class);
    store_method(Inspector_Inspector_Class, SMB_child_value_, MC_SMB_child_value_);
}


=======
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
static void init_SMB_inspect_() {
    /*
    inspect: anObject
// 	inspector ifNil: [ inspector := self new ].
// 	inspector inspect: anObject.
    */
    Symbol SMB_inspect_ = new_Symbol(L"inspect:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray12326 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12329 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend12331 = new_Send((Optr)VAR_anObject_0_0, SMB__pequals_, 1, (Optr)PVoid_classReference);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12335 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PVoid_classReference);
    Array PThreadedCode12334 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_send1, (Optr)PSend12335, (Optr)&t_block_return);
    Block PBlock12333 = new_Block_with(empty_Array, empty_Array, PThreadedCode12334, 1, PSend12335);
    // ifTrue:. 
    Send PSend12332 = new_Send((Optr)PSend12331, SMB_ifTrue_, 1, (Optr)PBlock12333);
    Symbol SMB_titleStream = new_Symbol(L"titleStream");
    // titleStream. 
    Send PSend12336 = new_Send((Optr)self, SMB_titleStream, 0);
    Symbol SMB_shallowInspect_on_ = new_Symbol(L"shallowInspect:on:");
    // shallowInspect:on:. 
    Send PSend12337 = new_Send((Optr)self, SMB_shallowInspect_on_, 2, (Optr)VAR_anObject_0_0, (Optr)PSend12336);
    Symbol SMB_inspectChildren_ = new_Symbol(L"inspectChildren:");
    // inspectChildren:. 
    Send PSend12338 = new_Send((Optr)self, SMB_inspectChildren_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode12330 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_send1, (Optr)PSend12331, (Optr)&t_send_ifTrue_, (Optr)PSend12332, (Optr)PBlock12333, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12336, (Optr)&t_send2, (Optr)PSend12337, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend12338, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock12328 = new_Block_with(PArray12329, empty_Array, PThreadedCode12330, 4, PSend12332, PSend12337, PSend12338, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12339 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12328);
    Array PThreadedCode12327 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12328, (Optr)&t_send1, (Optr)PSend12339, (Optr)&t_method_return);
    Method PMethod12325 = new_Method_with(PArray12326, empty_Array, empty_Array, PThreadedCode12327, 1, PSend12339);
    
    MethodClosure MC_SMB_inspect_ = new_MethodClosure((Method)PMethod12325, Inspector_Inspector_Class);
=======
    Array PArray12285 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12288 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend12290 = new_Send((Optr)VAR_anObject_0_0, SMB__pequals_, 1, (Optr)PVoid_classReference);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12294 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PVoid_classReference);
    Array PThreadedCode12293 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_send1, (Optr)PSend12294, (Optr)&t_block_return);
    Block PBlock12292 = new_Block_with(empty_Array, empty_Array, PThreadedCode12293, 1, PSend12294);
    // ifTrue:. 
    Send PSend12291 = new_Send((Optr)PSend12290, SMB_ifTrue_, 1, (Optr)PBlock12292);
    Symbol SMB_titleStream = new_Symbol(L"titleStream");
    // titleStream. 
    Send PSend12295 = new_Send((Optr)self, SMB_titleStream, 0);
    Symbol SMB_shallowInspect_on_ = new_Symbol(L"shallowInspect:on:");
    // shallowInspect:on:. 
    Send PSend12296 = new_Send((Optr)self, SMB_shallowInspect_on_, 2, (Optr)VAR_anObject_0_0, (Optr)PSend12295);
    Symbol SMB_inspectChildren_ = new_Symbol(L"inspectChildren:");
    // inspectChildren:. 
    Send PSend12297 = new_Send((Optr)self, SMB_inspectChildren_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode12289 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_send1, (Optr)PSend12290, (Optr)&t_send_ifTrue_, (Optr)PSend12291, (Optr)PBlock12292, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12295, (Optr)&t_send2, (Optr)PSend12296, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend12297, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock12287 = new_Block_with(PArray12288, empty_Array, PThreadedCode12289, 4, PSend12291, PSend12296, PSend12297, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12298 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12287);
    Array PThreadedCode12286 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12287, (Optr)&t_send1, (Optr)PSend12298, (Optr)&t_method_return);
    Method PMethod12284 = new_Method_with(PArray12285, empty_Array, empty_Array, PThreadedCode12286, 1, PSend12298);
    
    MethodClosure MC_SMB_inspect_ = new_MethodClosure((Method)PMethod12284, Inspector_Inspector_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Inspector_Inspector_Class, SMB_inspect_, MC_SMB_inspect_);
}


static void init_SMB_child_value_() {
    Symbol SMB_child_value_ = new_Symbol(L"child:value:");
    Variable VAR_label_0_0 = new_Variable_named(L"label", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray12300 = new_Array_with(2, (Optr)VAR_label_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend12302 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode12301 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12302, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12299 = new_Method_with(PArray12300, empty_Array, empty_Array, PThreadedCode12301, 2, PSend12302, self);
    
    MethodClosure MC_SMB_child_value_ = new_MethodClosure((Method)PMethod12299, Inspector_Inspector_Class);
    store_method(Inspector_Inspector_Class, SMB_child_value_, MC_SMB_child_value_);
}


static void init_SMB_inspectChildren_() {
    Symbol SMB_inspectChildren_ = new_Symbol(L"inspectChildren:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray12341 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_inspectChildrenOn_ = new_Symbol(L"inspectChildrenOn:");
    // inspectChildrenOn:. 
    Send PSend12343 = new_Send((Optr)VAR_anObject_0_0, SMB_inspectChildrenOn_, 1, (Optr)self);
    Array PThreadedCode12342 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12343, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12340 = new_Method_with(PArray12341, empty_Array, empty_Array, PThreadedCode12342, 2, PSend12343, self);
    
    MethodClosure MC_SMB_inspectChildren_ = new_MethodClosure((Method)PMethod12340, Inspector_Inspector_Class);
=======
    Array PArray12304 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_inspectChildrenOn_ = new_Symbol(L"inspectChildrenOn:");
    // inspectChildrenOn:. 
    Send PSend12306 = new_Send((Optr)VAR_anObject_0_0, SMB_inspectChildrenOn_, 1, (Optr)self);
    Array PThreadedCode12305 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12306, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12303 = new_Method_with(PArray12304, empty_Array, empty_Array, PThreadedCode12305, 2, PSend12306, self);
    
    MethodClosure MC_SMB_inspectChildren_ = new_MethodClosure((Method)PMethod12303, Inspector_Inspector_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Inspector_Inspector_Class, SMB_inspectChildren_, MC_SMB_inspectChildren_);
}


static void init_SMB_titleStream() {
    Symbol SMB_titleStream = new_Symbol(L"titleStream");
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend12309 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode12308 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12309, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12307 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12308, 2, PSend12309, self);
    
    MethodClosure MC_SMB_titleStream = new_MethodClosure((Method)PMethod12307, Inspector_Inspector_Class);
    store_method(Inspector_Inspector_Class, SMB_titleStream, MC_SMB_titleStream);
}


static void init_class_SMB_inspect_() {
    Symbol SMB_inspect_ = new_Symbol(L"inspect:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray12345 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12350 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign12349 = new_Assign((Optr)slot_Inspector_Inspector_Class_class_inspector, (Optr)PSend12350);
    Array PThreadedCode12348 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign12349, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12350, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock12347 = new_Block_with(empty_Array, empty_Array, PThreadedCode12348, 1, PAssign12349);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend12351 = new_Send((Optr)slot_Inspector_Inspector_Class_class_inspector, SMB_ifNil_, 1, (Optr)PBlock12347);
    // inspect:. 
    Send PSend12352 = new_Send((Optr)slot_Inspector_Inspector_Class_class_inspector, SMB_inspect_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode12346 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Inspector_Inspector_Class_class_inspector, (Optr)&t_push_closure, (Optr)PBlock12347, (Optr)&t_send1, (Optr)PSend12351, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Inspector_Inspector_Class_class_inspector, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend12352, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12344 = new_Method_with(PArray12345, empty_Array, empty_Array, PThreadedCode12346, 3, PSend12351, PSend12352, self);
    
    MethodClosure MC_SMB_inspect_ = new_MethodClosure((Method)PMethod12344, HEADER(Inspector_Inspector_Class));
=======
    Array PArray12311 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12316 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign12315 = new_Assign((Optr)slot_Inspector_Inspector_Class_class_inspector, (Optr)PSend12316);
    Array PThreadedCode12314 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign12315, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12316, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock12313 = new_Block_with(empty_Array, empty_Array, PThreadedCode12314, 1, PAssign12315);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend12317 = new_Send((Optr)slot_Inspector_Inspector_Class_class_inspector, SMB_ifNil_, 1, (Optr)PBlock12313);
    // inspect:. 
    Send PSend12318 = new_Send((Optr)slot_Inspector_Inspector_Class_class_inspector, SMB_inspect_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode12312 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Inspector_Inspector_Class_class_inspector, (Optr)&t_push_closure, (Optr)PBlock12313, (Optr)&t_send1, (Optr)PSend12317, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Inspector_Inspector_Class_class_inspector, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend12318, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12310 = new_Method_with(PArray12311, empty_Array, empty_Array, PThreadedCode12312, 3, PSend12317, PSend12318, self);
    
    MethodClosure MC_SMB_inspect_ = new_MethodClosure((Method)PMethod12310, HEADER(Inspector_Inspector_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Inspector_Inspector_Class), SMB_inspect_, MC_SMB_inspect_);
}

void init_Inspector_PInspector_layout() {
    slot_Inspector_Inspector_Class_class_inspector = (Optr)new_Slot(5, L"inspector");
    layout_Inspector_Inspector_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_Inspector_Inspector_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Inspector_Inspector_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Inspector_Inspector_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Inspector_Inspector_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Inspector_Inspector_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_Inspector_Inspector_Class_class)->values[5] = slot_Inspector_Inspector_Class_class_inspector; // inspector 
    
    Symbol  SMB_Inspector = new_Symbol(L"Inspector");
    Inspector_Inspector_Class = (Class)new_Class(Object_Class, layout_Inspector_Inspector_Class_class);
    Inspector_Inspector_Class->layout = empty_object_layout;
    Inspector_Inspector_Class->name = SMB_Inspector;
    
}

void init_Inspector_PInspector_methods() {
    init_SMB_shallowInspect_on_();
    init_SMB_inspect_();
    init_SMB_child_value_();
    init_SMB_inspectChildren_();
    init_SMB_titleStream();
    init_class_SMB_inspect_();
    
}