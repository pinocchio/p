#include <lib/class/Inspector/Inspector.h>


Optr slot_Inspector_Inspector_Class_class_inspector;
Optr layout_Inspector_Inspector_Class_class;


static void init_SMB_shallowInspect_on_() {
    Symbol SMB_shallowInspect_on_ = new_Symbol(L"shallowInspect:on:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_aStream_0_1 = new_Variable_named(L"aStream", 0);
    Array PArray12283 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_aStream_0_1);
    Symbol SMB_inspectNameOn_ = new_Symbol(L"inspectNameOn:");
    // inspectNameOn:. 
    Send PSend12285 = new_Send((Optr)VAR_anObject_0_0, SMB_inspectNameOn_, 1, (Optr)VAR_aStream_0_1);
    Array PThreadedCode12284 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_1, (Optr)&t_send1, (Optr)PSend12285, (Optr)&t_method_return);
    Method PMethod12282 = new_Method_with(PArray12283, empty_Array, empty_Array, PThreadedCode12284, 1, PSend12285);
    
    MethodClosure MC_SMB_shallowInspect_on_ = new_MethodClosure((Method)PMethod12282, Inspector_Inspector_Class);
    store_method(Inspector_Inspector_Class, SMB_shallowInspect_on_, MC_SMB_shallowInspect_on_);
}


static void init_SMB_inspect_() {
    /*
    inspect: anObject
// 	inspector ifNil: [ inspector := self new ].
// 	inspector inspect: anObject.
    */
    Symbol SMB_inspect_ = new_Symbol(L"inspect:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray12287 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12290 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend12292 = new_Send((Optr)VAR_anObject_0_0, SMB__pequals_, 1, (Optr)PVoid_classReference);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12296 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PVoid_classReference);
    Array PThreadedCode12295 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_send1, (Optr)PSend12296, (Optr)&t_block_return);
    Block PBlock12294 = new_Block_with(empty_Array, empty_Array, PThreadedCode12295, 1, PSend12296);
    // ifTrue:. 
    Send PSend12293 = new_Send((Optr)PSend12292, SMB_ifTrue_, 1, (Optr)PBlock12294);
    Symbol SMB_titleStream = new_Symbol(L"titleStream");
    // titleStream. 
    Send PSend12297 = new_Send((Optr)self, SMB_titleStream, 0);
    Symbol SMB_shallowInspect_on_ = new_Symbol(L"shallowInspect:on:");
    // shallowInspect:on:. 
    Send PSend12298 = new_Send((Optr)self, SMB_shallowInspect_on_, 2, (Optr)VAR_anObject_0_0, (Optr)PSend12297);
    Symbol SMB_inspectChildren_ = new_Symbol(L"inspectChildren:");
    // inspectChildren:. 
    Send PSend12299 = new_Send((Optr)self, SMB_inspectChildren_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode12291 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_send1, (Optr)PSend12292, (Optr)&t_send_ifTrue_, (Optr)PSend12293, (Optr)PBlock12294, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12297, (Optr)&t_send2, (Optr)PSend12298, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend12299, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock12289 = new_Block_with(PArray12290, empty_Array, PThreadedCode12291, 4, PSend12293, PSend12298, PSend12299, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12300 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12289);
    Array PThreadedCode12288 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12289, (Optr)&t_send1, (Optr)PSend12300, (Optr)&t_method_return);
    Method PMethod12286 = new_Method_with(PArray12287, empty_Array, empty_Array, PThreadedCode12288, 1, PSend12300);
    
    MethodClosure MC_SMB_inspect_ = new_MethodClosure((Method)PMethod12286, Inspector_Inspector_Class);
    store_method(Inspector_Inspector_Class, SMB_inspect_, MC_SMB_inspect_);
}


static void init_SMB_child_value_() {
    Symbol SMB_child_value_ = new_Symbol(L"child:value:");
    Variable VAR_label_0_0 = new_Variable_named(L"label", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray12302 = new_Array_with(2, (Optr)VAR_label_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend12304 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode12303 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12304, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12301 = new_Method_with(PArray12302, empty_Array, empty_Array, PThreadedCode12303, 2, PSend12304, self);
    
    MethodClosure MC_SMB_child_value_ = new_MethodClosure((Method)PMethod12301, Inspector_Inspector_Class);
    store_method(Inspector_Inspector_Class, SMB_child_value_, MC_SMB_child_value_);
}


static void init_SMB_inspectChildren_() {
    Symbol SMB_inspectChildren_ = new_Symbol(L"inspectChildren:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray12306 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_inspectChildrenOn_ = new_Symbol(L"inspectChildrenOn:");
    // inspectChildrenOn:. 
    Send PSend12308 = new_Send((Optr)VAR_anObject_0_0, SMB_inspectChildrenOn_, 1, (Optr)self);
    Array PThreadedCode12307 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12308, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12305 = new_Method_with(PArray12306, empty_Array, empty_Array, PThreadedCode12307, 2, PSend12308, self);
    
    MethodClosure MC_SMB_inspectChildren_ = new_MethodClosure((Method)PMethod12305, Inspector_Inspector_Class);
    store_method(Inspector_Inspector_Class, SMB_inspectChildren_, MC_SMB_inspectChildren_);
}


static void init_SMB_titleStream() {
    Symbol SMB_titleStream = new_Symbol(L"titleStream");
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend12311 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode12310 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12311, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12309 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12310, 2, PSend12311, self);
    
    MethodClosure MC_SMB_titleStream = new_MethodClosure((Method)PMethod12309, Inspector_Inspector_Class);
    store_method(Inspector_Inspector_Class, SMB_titleStream, MC_SMB_titleStream);
}


static void init_class_SMB_inspect_() {
    Symbol SMB_inspect_ = new_Symbol(L"inspect:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray12313 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12318 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign12317 = new_Assign((Optr)slot_Inspector_Inspector_Class_class_inspector, (Optr)PSend12318);
    Array PThreadedCode12316 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign12317, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12318, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock12315 = new_Block_with(empty_Array, empty_Array, PThreadedCode12316, 1, PAssign12317);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend12319 = new_Send((Optr)slot_Inspector_Inspector_Class_class_inspector, SMB_ifNil_, 1, (Optr)PBlock12315);
    // inspect:. 
    Send PSend12320 = new_Send((Optr)slot_Inspector_Inspector_Class_class_inspector, SMB_inspect_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode12314 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Inspector_Inspector_Class_class_inspector, (Optr)&t_push_closure, (Optr)PBlock12315, (Optr)&t_send1, (Optr)PSend12319, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Inspector_Inspector_Class_class_inspector, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend12320, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12312 = new_Method_with(PArray12313, empty_Array, empty_Array, PThreadedCode12314, 3, PSend12319, PSend12320, self);
    
    MethodClosure MC_SMB_inspect_ = new_MethodClosure((Method)PMethod12312, HEADER(Inspector_Inspector_Class));
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