#include <lib/class/Inspector/Inspector.h>


Optr slot_Inspector_Inspector_Class_class_inspector;
Optr layout_Inspector_Inspector_Class_class;


static void init_SMB_shallowInspect_on_() {
    Symbol SMB_shallowInspect_on_ = new_Symbol(L"shallowInspect:on:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_aStream_0_1 = new_Variable_named(L"aStream", 0);
    Array PArray12045 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_aStream_0_1);
    Symbol SMB_inspectNameOn_ = new_Symbol(L"inspectNameOn:");
    // inspectNameOn:. 
    Send PSend12047 = new_Send((Optr)VAR_anObject_0_0, SMB_inspectNameOn_, 1, (Optr)VAR_aStream_0_1);
    Array PThreadedCode12046 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_1, (Optr)&t_send1, (Optr)PSend12047, (Optr)&t_method_return);
    Method PMethod12044 = new_Method_with(PArray12045, empty_Array, empty_Array, PThreadedCode12046, 1, PSend12047);
    
    MethodClosure MC_SMB_shallowInspect_on_ = new_MethodClosure((Method)PMethod12044, Inspector_Inspector_Class);
    store_method(Inspector_Inspector_Class, SMB_shallowInspect_on_, MC_SMB_shallowInspect_on_);
}


static void init_SMB_titleStream() {
    Symbol SMB_titleStream = new_Symbol(L"titleStream");
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend12050 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode12049 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12050, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12048 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12049, 2, PSend12050, self);
    
    MethodClosure MC_SMB_titleStream = new_MethodClosure((Method)PMethod12048, Inspector_Inspector_Class);
    store_method(Inspector_Inspector_Class, SMB_titleStream, MC_SMB_titleStream);
}


static void init_SMB_child_value_() {
    Symbol SMB_child_value_ = new_Symbol(L"child:value:");
    Variable VAR_label_0_0 = new_Variable_named(L"label", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray12052 = new_Array_with(2, (Optr)VAR_label_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend12054 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode12053 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12054, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12051 = new_Method_with(PArray12052, empty_Array, empty_Array, PThreadedCode12053, 2, PSend12054, self);
    
    MethodClosure MC_SMB_child_value_ = new_MethodClosure((Method)PMethod12051, Inspector_Inspector_Class);
    store_method(Inspector_Inspector_Class, SMB_child_value_, MC_SMB_child_value_);
}


static void init_SMB_inspect_() {
    /*
    inspect: anObject
// 	inspector ifNil: [ inspector := self new ].
// 	inspector inspect: anObject.
    */
    Symbol SMB_inspect_ = new_Symbol(L"inspect:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray12056 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12059 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend12061 = new_Send((Optr)VAR_anObject_0_0, SMB__pequals_, 1, (Optr)PVoid_classReference);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12065 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PVoid_classReference);
    Array PThreadedCode12064 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_send1, (Optr)PSend12065, (Optr)&t_block_return);
    Block PBlock12063 = new_Block_with(empty_Array, empty_Array, PThreadedCode12064, 1, PSend12065);
    // ifTrue:. 
    Send PSend12062 = new_Send((Optr)PSend12061, SMB_ifTrue_, 1, (Optr)PBlock12063);
    Symbol SMB_titleStream = new_Symbol(L"titleStream");
    // titleStream. 
    Send PSend12066 = new_Send((Optr)self, SMB_titleStream, 0);
    Symbol SMB_shallowInspect_on_ = new_Symbol(L"shallowInspect:on:");
    // shallowInspect:on:. 
    Send PSend12067 = new_Send((Optr)self, SMB_shallowInspect_on_, 2, (Optr)VAR_anObject_0_0, (Optr)PSend12066);
    Symbol SMB_inspectChildren_ = new_Symbol(L"inspectChildren:");
    // inspectChildren:. 
    Send PSend12068 = new_Send((Optr)self, SMB_inspectChildren_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode12060 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_send1, (Optr)PSend12061, (Optr)&t_send_ifTrue_, (Optr)PSend12062, (Optr)PBlock12063, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12066, (Optr)&t_send2, (Optr)PSend12067, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend12068, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock12058 = new_Block_with(PArray12059, empty_Array, PThreadedCode12060, 4, PSend12062, PSend12067, PSend12068, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12069 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12058);
    Array PThreadedCode12057 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12058, (Optr)&t_send1, (Optr)PSend12069, (Optr)&t_method_return);
    Method PMethod12055 = new_Method_with(PArray12056, empty_Array, empty_Array, PThreadedCode12057, 1, PSend12069);
    
    MethodClosure MC_SMB_inspect_ = new_MethodClosure((Method)PMethod12055, Inspector_Inspector_Class);
    store_method(Inspector_Inspector_Class, SMB_inspect_, MC_SMB_inspect_);
}


static void init_SMB_inspectChildren_() {
    Symbol SMB_inspectChildren_ = new_Symbol(L"inspectChildren:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray12071 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_inspectChildrenOn_ = new_Symbol(L"inspectChildrenOn:");
    // inspectChildrenOn:. 
    Send PSend12073 = new_Send((Optr)VAR_anObject_0_0, SMB_inspectChildrenOn_, 1, (Optr)self);
    Array PThreadedCode12072 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12073, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12070 = new_Method_with(PArray12071, empty_Array, empty_Array, PThreadedCode12072, 2, PSend12073, self);
    
    MethodClosure MC_SMB_inspectChildren_ = new_MethodClosure((Method)PMethod12070, Inspector_Inspector_Class);
    store_method(Inspector_Inspector_Class, SMB_inspectChildren_, MC_SMB_inspectChildren_);
}


static void init_class_SMB_inspect_() {
    Symbol SMB_inspect_ = new_Symbol(L"inspect:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray12075 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12080 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign12079 = new_Assign((Optr)slot_Inspector_Inspector_Class_class_inspector, (Optr)PSend12080);
    Array PThreadedCode12078 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign12079, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12080, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock12077 = new_Block_with(empty_Array, empty_Array, PThreadedCode12078, 1, PAssign12079);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend12081 = new_Send((Optr)slot_Inspector_Inspector_Class_class_inspector, SMB_ifNil_, 1, (Optr)PBlock12077);
    // inspect:. 
    Send PSend12082 = new_Send((Optr)slot_Inspector_Inspector_Class_class_inspector, SMB_inspect_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode12076 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Inspector_Inspector_Class_class_inspector, (Optr)&t_push_closure, (Optr)PBlock12077, (Optr)&t_send1, (Optr)PSend12081, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Inspector_Inspector_Class_class_inspector, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend12082, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12074 = new_Method_with(PArray12075, empty_Array, empty_Array, PThreadedCode12076, 3, PSend12081, PSend12082, self);
    
    MethodClosure MC_SMB_inspect_ = new_MethodClosure((Method)PMethod12074, HEADER(Inspector_Inspector_Class));
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
    init_SMB_titleStream();
    init_SMB_child_value_();
    init_SMB_inspect_();
    init_SMB_inspectChildren_();
    init_class_SMB_inspect_();
    
}