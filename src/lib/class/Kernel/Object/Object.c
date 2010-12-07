#include <lib/class/Kernel/Object/Object.h>


Optr slot_Kernel_Object_Object_Class_class_layout;
Optr slot_Kernel_Object_Object_Class_class_superclass;
Optr slot_Kernel_Object_Object_Class_class_methods;
Optr slot_Kernel_Object_Object_Class_class_name;
Optr slot_Kernel_Object_Object_Class_class_package;
Optr layout_Kernel_Object_Object_Class_class;


static void init_SMB_isNumber() {
    Symbol SMB_isNumber = new_Symbol(L"isNumber");
    Array PThreadedCode2 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_false);
    Method PMethod1 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2, 1, false_Const);
    
    MethodClosure MC_SMB_isNumber = new_MethodClosure((Method)PMethod1, Object_Class);
    store_method(Object_Class, SMB_isNumber, MC_SMB_isNumber);
}


static void init_SMB_identityHash() {
    Symbol SMB_identityHash = new_Symbol(L"identityHash");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Type_minus_Object = new_Symbol(L"Type.Object");
    Annotation PAnnotation5 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_identityHash, (Optr)SMB_Type_minus_Object);
    Array PArray4 = new_Array_with(1, (Optr)PAnnotation5);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend7 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode6 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3 = new_NativeMethod_with(empty_Array, empty_Array, PArray4, PThreadedCode6, 2, PSend7, self);
    
    MethodClosure MC_SMB_identityHash = new_MethodClosure((Method)PNativeMethod3, Object_Class);
    store_method(Object_Class, SMB_identityHash, MC_SMB_identityHash);
}


static void init_SMB__notEquals_() {
    Symbol SMB__notEquals_ = new_Symbol(L"~=");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray9 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend11 = new_Send((Optr)self, SMB__equals_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend12 = new_Send((Optr)PSend11, SMB_not, 0);
    Array PThreadedCode10 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend11, (Optr)&t_send0, (Optr)PSend12, (Optr)&t_method_return);
    Method PMethod8 = new_Method_with(PArray9, empty_Array, empty_Array, PThreadedCode10, 1, PSend12);
    
    MethodClosure MC_SMB__notEquals_ = new_MethodClosure((Method)PMethod8, Object_Class);
    store_method(Object_Class, SMB__notEquals_, MC_SMB__notEquals_);
}


static void init_SMB_at_() {
    Symbol SMB_at_ = new_Symbol(L"at:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Array PArray14 = new_Array_with(1, (Optr)VAR_index_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Type_minus_Object = new_Symbol(L"Type.Object");
    Annotation PAnnotation16 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_at_, (Optr)SMB_Type_minus_Object);
    Array PArray15 = new_Array_with(1, (Optr)PAnnotation16);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend18 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode17 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod13 = new_NativeMethod_with(PArray14, empty_Array, PArray15, PThreadedCode17, 2, PSend18, self);
    
    MethodClosure MC_SMB_at_ = new_MethodClosure((Method)PNativeMethod13, Object_Class);
    store_method(Object_Class, SMB_at_, MC_SMB_at_);
}


static void init_SMB__pequals_() {
    Symbol SMB__pequals_ = new_Symbol(L"==");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray20 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Type_minus_Object = new_Symbol(L"Type.Object");
    Annotation PAnnotation22 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__pequals_, (Optr)SMB_Type_minus_Object);
    Array PArray21 = new_Array_with(1, (Optr)PAnnotation22);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend24 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode23 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod19 = new_NativeMethod_with(PArray20, empty_Array, PArray21, PThreadedCode23, 2, PSend24, self);
    
    MethodClosure MC_SMB__pequals_ = new_MethodClosure((Method)PNativeMethod19, Object_Class);
    store_method(Object_Class, SMB__pequals_, MC_SMB__pequals_);
}


static void init_SMB_perform_() {
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Array PArray26 = new_Array_with(1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Type_minus_Object = new_Symbol(L"Type.Object");
    Annotation PAnnotation28 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_perform_, (Optr)SMB_Type_minus_Object);
    Array PArray27 = new_Array_with(1, (Optr)PAnnotation28);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend30 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode29 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend30, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod25 = new_NativeMethod_with(PArray26, empty_Array, PArray27, PThreadedCode29, 2, PSend30, self);
    
    MethodClosure MC_SMB_perform_ = new_MethodClosure((Method)PNativeMethod25, Object_Class);
    store_method(Object_Class, SMB_perform_, MC_SMB_perform_);
}


static void init_SMB_inspectChildrenOn_() {
    Symbol SMB_inspectChildrenOn_ = new_Symbol(L"inspectChildrenOn:");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
    Array PArray32 = new_Array_with(1, (Optr)VAR_inspector_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend34 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_layout = new_Symbol(L"layout");
    // layout. 
    Send PSend35 = new_Send((Optr)PSend34, SMB_layout, 0);
    Symbol SMB_inspectChildrenFrom_on_ = new_Symbol(L"inspectChildrenFrom:on:");
    // inspectChildrenFrom:on:. 
    Send PSend36 = new_Send((Optr)PSend35, SMB_inspectChildrenFrom_on_, 2, (Optr)self, (Optr)VAR_inspector_0_0);
    Array PThreadedCode33 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend34, (Optr)&t_send0, (Optr)PSend35, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_send2, (Optr)PSend36, (Optr)&t_method_return);
    Method PMethod31 = new_Method_with(PArray32, empty_Array, empty_Array, PThreadedCode33, 1, PSend36);
    
    MethodClosure MC_SMB_inspectChildrenOn_ = new_MethodClosure((Method)PMethod31, Object_Class);
    store_method(Object_Class, SMB_inspectChildrenOn_, MC_SMB_inspectChildrenOn_);
}


static void init_SMB_pinocchioPrimitiveFailed() {
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    String string_39 = new_String(L"a pinocchio primitive has failed");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_39_Const = new_Constant((Optr)string_39);
    // error:. 
    Send PSend40 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_39_Const);
    Array PThreadedCode38 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_39, (Optr)&t_send1, (Optr)PSend40, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod37 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode38, 2, PSend40, self);
    
    MethodClosure MC_SMB_pinocchioPrimitiveFailed = new_MethodClosure((Method)PMethod37, Object_Class);
    store_method(Object_Class, SMB_pinocchioPrimitiveFailed, MC_SMB_pinocchioPrimitiveFailed);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Array PThreadedCode42 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod41 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode42, 1, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod41, Object_Class);
    store_method(Object_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_asAllocationAlias_() {
    Symbol SMB_asAllocationAlias_ = new_Symbol(L"asAllocationAlias:");
    Variable VAR_aContext_0_0 = new_Variable_named(L"aContext", 0);
    Array PArray44 = new_Array_with(1, (Optr)VAR_aContext_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend46 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_layout = new_Symbol(L"layout");
    // layout. 
    Send PSend47 = new_Send((Optr)PSend46, SMB_layout, 0);
    Symbol SMB_alias_in_ = new_Symbol(L"alias:in:");
    // alias:in:. 
    Send PSend48 = new_Send((Optr)PSend47, SMB_alias_in_, 2, (Optr)self, (Optr)VAR_aContext_0_0);
    Array PThreadedCode45 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend46, (Optr)&t_send0, (Optr)PSend47, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aContext_0_0, (Optr)&t_send2, (Optr)PSend48, (Optr)&t_method_return);
    Method PMethod43 = new_Method_with(PArray44, empty_Array, empty_Array, PThreadedCode45, 1, PSend48);
    
    MethodClosure MC_SMB_asAllocationAlias_ = new_MethodClosure((Method)PMethod43, Object_Class);
    store_method(Object_Class, SMB_asAllocationAlias_, MC_SMB_asAllocationAlias_);
}


static void init_SMB_isString() {
    Symbol SMB_isString = new_Symbol(L"isString");
    Array PThreadedCode50 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_false);
    Method PMethod49 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode50, 1, false_Const);
    
    MethodClosure MC_SMB_isString = new_MethodClosure((Method)PMethod49, Object_Class);
    store_method(Object_Class, SMB_isString, MC_SMB_isString);
}


static void init_SMB_value() {
    Symbol SMB_value = new_Symbol(L"value");
    Array PThreadedCode52 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod51 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode52, 1, self);
    
    MethodClosure MC_SMB_value = new_MethodClosure((Method)PMethod51, Object_Class);
    store_method(Object_Class, SMB_value, MC_SMB_value);
}


static void init_SMB_inspectLabelOn_() {
    Symbol SMB_inspectLabelOn_ = new_Symbol(L"inspectLabelOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray54 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend56 = new_Send((Optr)self, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode55 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend56, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod53 = new_Method_with(PArray54, empty_Array, empty_Array, PThreadedCode55, 2, PSend56, self);
    
    MethodClosure MC_SMB_inspectLabelOn_ = new_MethodClosure((Method)PMethod53, Object_Class);
    store_method(Object_Class, SMB_inspectLabelOn_, MC_SMB_inspectLabelOn_);
}


static void init_SMB__at_() {
    Symbol SMB__at_ = new_Symbol(L"@");
    Variable VAR_y_0_0 = new_Variable_named(L"y", 0);
    Array PArray58 = new_Array_with(1, (Optr)VAR_y_0_0);
    Symbol SMB_x_y_ = new_Symbol(L"x:y:");
    // x:y:. 
    Send PSend60 = new_Send((Optr)Point_classReference, SMB_x_y_, 2, (Optr)self, (Optr)VAR_y_0_0);
    Array PThreadedCode59 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)Point_classReference, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_y_0_0, (Optr)&t_send2, (Optr)PSend60, (Optr)&t_method_return);
    Method PMethod57 = new_Method_with(PArray58, empty_Array, empty_Array, PThreadedCode59, 1, PSend60);
    
    MethodClosure MC_SMB__at_ = new_MethodClosure((Method)PMethod57, Object_Class);
    store_method(Object_Class, SMB__at_, MC_SMB__at_);
}


static void init_SMB_class() {
    Symbol SMB_class = new_Symbol(L"class");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Type_minus_Object = new_Symbol(L"Type.Object");
    Annotation PAnnotation63 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_class, (Optr)SMB_Type_minus_Object);
    Array PArray62 = new_Array_with(1, (Optr)PAnnotation63);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend65 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode64 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend65, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod61 = new_NativeMethod_with(empty_Array, empty_Array, PArray62, PThreadedCode64, 2, PSend65, self);
    
    MethodClosure MC_SMB_class = new_MethodClosure((Method)PNativeMethod61, Object_Class);
    store_method(Object_Class, SMB_class, MC_SMB_class);
}


static void init_SMB_size() {
    Symbol SMB_size = new_Symbol(L"size");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Type_minus_Object = new_Symbol(L"Type.Object");
    Annotation PAnnotation68 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_size, (Optr)SMB_Type_minus_Object);
    Array PArray67 = new_Array_with(1, (Optr)PAnnotation68);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend70 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode69 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend70, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod66 = new_NativeMethod_with(empty_Array, empty_Array, PArray67, PThreadedCode69, 2, PSend70, self);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PNativeMethod66, Object_Class);
    store_method(Object_Class, SMB_size, MC_SMB_size);
}


static void init_SMB_inspectNameOn_() {
    Symbol SMB_inspectNameOn_ = new_Symbol(L"inspectNameOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray72 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend74 = new_Send((Optr)self, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode73 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend74, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod71 = new_Method_with(PArray72, empty_Array, empty_Array, PThreadedCode73, 2, PSend74, self);
    
    MethodClosure MC_SMB_inspectNameOn_ = new_MethodClosure((Method)PMethod71, Object_Class);
    store_method(Object_Class, SMB_inspectNameOn_, MC_SMB_inspectNameOn_);
}


static void init_SMB_ifNil_ifNotNil_() {
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Variable VAR_otherBlock_0_1 = new_Variable_named(L"otherBlock", 0);
    Array PArray76 = new_Array_with(2, (Optr)VAR_aBlock_0_0, (Optr)VAR_otherBlock_0_1);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend78 = new_Send((Optr)self, SMB_ifNotNil_, 1, (Optr)VAR_otherBlock_0_1);
    Array PThreadedCode77 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_otherBlock_0_1, (Optr)&t_send1, (Optr)PSend78, (Optr)&t_method_return);
    Method PMethod75 = new_Method_with(PArray76, empty_Array, empty_Array, PThreadedCode77, 1, PSend78);
    
    MethodClosure MC_SMB_ifNil_ifNotNil_ = new_MethodClosure((Method)PMethod75, Object_Class);
    store_method(Object_Class, SMB_ifNil_ifNotNil_, MC_SMB_ifNil_ifNotNil_);
}


static void init_SMB_ifNotNil_() {
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray80 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend82 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend83 = new_Send((Optr)VAR_aBlock_0_0, SMB_valueWithPossibleArgs_, 1, (Optr)PSend82);
    Array PThreadedCode81 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend82, (Optr)&t_send1, (Optr)PSend83, (Optr)&t_method_return);
    Method PMethod79 = new_Method_with(PArray80, empty_Array, empty_Array, PThreadedCode81, 1, PSend83);
    
    MethodClosure MC_SMB_ifNotNil_ = new_MethodClosure((Method)PMethod79, Object_Class);
    store_method(Object_Class, SMB_ifNotNil_, MC_SMB_ifNotNil_);
}


static void init_SMB_ifNotNilDo_() {
    Symbol SMB_ifNotNilDo_ = new_Symbol(L"ifNotNilDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray85 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend87 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)self);
    Array PThreadedCode86 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend87, (Optr)&t_method_return);
    Method PMethod84 = new_Method_with(PArray85, empty_Array, empty_Array, PThreadedCode86, 1, PSend87);
    
    MethodClosure MC_SMB_ifNotNilDo_ = new_MethodClosure((Method)PMethod84, Object_Class);
    store_method(Object_Class, SMB_ifNotNilDo_, MC_SMB_ifNotNilDo_);
}


static void init_SMB__notPEquals_() {
    Symbol SMB__notPEquals_ = new_Symbol(L"~~");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray89 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray92 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend94 = new_Send((Optr)self, SMB__pequals_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend98 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode97 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend98, (Optr)&t_block_return);
    Block PBlock96 = new_Block_with(empty_Array, empty_Array, PThreadedCode97, 1, PSend98);
    // escape:. 
    Send PSend101 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode100 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend101, (Optr)&t_block_return);
    Block PBlock99 = new_Block_with(empty_Array, empty_Array, PThreadedCode100, 1, PSend101);
    // ifTrue:ifFalse:. 
    Send PSend95 = new_Send((Optr)PSend94, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock96, (Optr)PBlock99);
    Array PThreadedCode93 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend94, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend95, (Optr)PBlock96, (Optr)PBlock99, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock91 = new_Block_with(PArray92, empty_Array, PThreadedCode93, 2, PSend95, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend102 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock91);
    Array PThreadedCode90 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock91, (Optr)&t_send1, (Optr)PSend102, (Optr)&t_method_return);
    Method PMethod88 = new_Method_with(PArray89, empty_Array, empty_Array, PThreadedCode90, 1, PSend102);
    
    MethodClosure MC_SMB__notPEquals_ = new_MethodClosure((Method)PMethod88, Object_Class);
    store_method(Object_Class, SMB__notPEquals_, MC_SMB__notPEquals_);
}


static void init_SMB_swapInvokeNative() {
    Symbol SMB_swapInvokeNative = new_Symbol(L"swapInvokeNative");
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_swapInvokeNativeOn_message_ = new_Symbol(L"swapInvokeNativeOn:message:");
    Annotation PAnnotation105 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_swapInvokeNativeOn_message_);
    Array PArray104 = new_Array_with(1, (Optr)PAnnotation105);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend107 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_nextInterpreter_ = new_Symbol(L"nextInterpreter:");
    // nextInterpreter:. 
    Send PSend108 = new_Send((Optr)PSend107, SMB_nextInterpreter_, 1, (Optr)self);
    Array PThreadedCode106 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend107, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend108, (Optr)&t_zap, (Optr)&t_method_return_self);
    ReflectionMethod PReflectionMethod103 = new_ReflectionMethod_with(empty_Array, empty_Array, PArray104, PThreadedCode106, 2, PSend108, self);
    
    MethodClosure MC_SMB_swapInvokeNative = new_MethodClosure((Method)PReflectionMethod103, Object_Class);
    store_method(Object_Class, SMB_swapInvokeNative, MC_SMB_swapInvokeNative);
}


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    Symbol SMB_printString = new_Symbol(L"printString");
    // printString. 
    Send PSend111 = new_Send((Optr)self, SMB_printString, 0);
    Array PThreadedCode110 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend111, (Optr)&t_method_return);
    Method PMethod109 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode110, 1, PSend111);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PMethod109, Object_Class);
    store_method(Object_Class, SMB_asString, MC_SMB_asString);
}


static void init_SMB_perform_withArguments_() {
    Symbol SMB_perform_withArguments_ = new_Symbol(L"perform:withArguments:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Variable VAR_arguments_0_1 = new_Variable_named(L"arguments", 0);
    Array PArray113 = new_Array_with(2, (Optr)VAR_aSymbol_0_0, (Optr)VAR_arguments_0_1);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Type_minus_Object = new_Symbol(L"Type.Object");
    Annotation PAnnotation115 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_perform_withArguments_, (Optr)SMB_Type_minus_Object);
    Array PArray114 = new_Array_with(1, (Optr)PAnnotation115);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend117 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode116 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend117, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod112 = new_NativeMethod_with(PArray113, empty_Array, PArray114, PThreadedCode116, 2, PSend117, self);
    
    MethodClosure MC_SMB_perform_withArguments_ = new_MethodClosure((Method)PNativeMethod112, Object_Class);
    store_method(Object_Class, SMB_perform_withArguments_, MC_SMB_perform_withArguments_);
}


static void init_SMB_error_() {
    Symbol SMB_error_ = new_Symbol(L"error:");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Array PArray119 = new_Array_with(1, (Optr)VAR_message_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray122 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend124 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)VAR_message_0_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend125 = new_Send((Optr)VAR__receiver__1_0, SMB_signal, 0);
    Array PThreadedCode123 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_send1, (Optr)PSend124, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend125, (Optr)&t_method_return);
    Block PBlock121 = new_Block_with(PArray122, empty_Array, PThreadedCode123, 2, PSend124, PSend125);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend126 = new_Send((Optr)Error_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend127 = new_Send((Optr)PBlock121, SMB_value_, 1, (Optr)PSend126);
    Array PThreadedCode120 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock121, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_send0, (Optr)PSend126, (Optr)&t_send1, (Optr)PSend127, (Optr)&t_method_return);
    Method PMethod118 = new_Method_with(PArray119, empty_Array, empty_Array, PThreadedCode120, 1, PSend127);
    
    MethodClosure MC_SMB_error_ = new_MethodClosure((Method)PMethod118, Object_Class);
    store_method(Object_Class, SMB_error_, MC_SMB_error_);
}


static void init_SMB_isNil() {
    Symbol SMB_isNil = new_Symbol(L"isNil");
    Array PThreadedCode129 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_false);
    Method PMethod128 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode129, 1, false_Const);
    
    MethodClosure MC_SMB_isNil = new_MethodClosure((Method)PMethod128, Object_Class);
    store_method(Object_Class, SMB_isNil, MC_SMB_isNil);
}


static void init_SMB_warn_() {
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Variable VAR_msg_0_0 = new_Variable_named(L"msg", 0);
    Array PArray131 = new_Array_with(1, (Optr)VAR_msg_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray134 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_red_ = new_Symbol(L"red:");
    // red:. 
    Send PSend136 = new_Send((Optr)VAR__receiver__1_0, SMB_red_, 1, (Optr)VAR_msg_0_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend137 = new_Send((Optr)VAR__receiver__1_0, SMB_lf, 0);
    Array PThreadedCode135 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_msg_0_0, (Optr)&t_send1, (Optr)PSend136, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend137, (Optr)&t_method_return);
    Block PBlock133 = new_Block_with(PArray134, empty_Array, PThreadedCode135, 2, PSend136, PSend137);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend138 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend139 = new_Send((Optr)PBlock133, SMB_value_, 1, (Optr)PSend138);
    Array PThreadedCode132 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock133, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend138, (Optr)&t_send1, (Optr)PSend139, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod130 = new_Method_with(PArray131, empty_Array, empty_Array, PThreadedCode132, 2, PSend139, self);
    
    MethodClosure MC_SMB_warn_ = new_MethodClosure((Method)PMethod130, Object_Class);
    store_method(Object_Class, SMB_warn_, MC_SMB_warn_);
}


static void init_SMB_halt() {
    Symbol SMB_halt = new_Symbol(L"halt");
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend142 = new_Send((Optr)PHalt_classReference, SMB_signal, 0);
    Array PThreadedCode141 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PHalt_classReference, (Optr)&t_send0, (Optr)PSend142, (Optr)&t_method_return);
    Method PMethod140 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode141, 1, PSend142);
    
    MethodClosure MC_SMB_halt = new_MethodClosure((Method)PMethod140, Object_Class);
    store_method(Object_Class, SMB_halt, MC_SMB_halt);
}


static void init_SMB_ifNil_ifNotNilDo_() {
    Symbol SMB_ifNil_ifNotNilDo_ = new_Symbol(L"ifNil:ifNotNilDo:");
    Variable VAR_nilBlock_0_0 = new_Variable_named(L"nilBlock", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray144 = new_Array_with(2, (Optr)VAR_nilBlock_0_0, (Optr)VAR_aBlock_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend146 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)self);
    Array PThreadedCode145 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend146, (Optr)&t_method_return);
    Method PMethod143 = new_Method_with(PArray144, empty_Array, empty_Array, PThreadedCode145, 1, PSend146);
    
    MethodClosure MC_SMB_ifNil_ifNotNilDo_ = new_MethodClosure((Method)PMethod143, Object_Class);
    store_method(Object_Class, SMB_ifNil_ifNotNilDo_, MC_SMB_ifNil_ifNotNilDo_);
}


static void init_SMB_respondsTo_() {
    Symbol SMB_respondsTo_ = new_Symbol(L"respondsTo:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray148 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend150 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_canUnderstand_ = new_Symbol(L"canUnderstand:");
    // canUnderstand:. 
    Send PSend151 = new_Send((Optr)PSend150, SMB_canUnderstand_, 1, (Optr)VAR_selector_0_0);
    Array PThreadedCode149 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend150, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend151, (Optr)&t_method_return);
    Method PMethod147 = new_Method_with(PArray148, empty_Array, empty_Array, PThreadedCode149, 1, PSend151);
    
    MethodClosure MC_SMB_respondsTo_ = new_MethodClosure((Method)PMethod147, Object_Class);
    store_method(Object_Class, SMB_respondsTo_, MC_SMB_respondsTo_);
}


static void init_SMB_isCollection() {
    Symbol SMB_isCollection = new_Symbol(L"isCollection");
    Array PThreadedCode153 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_false);
    Method PMethod152 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode153, 1, false_Const);
    
    MethodClosure MC_SMB_isCollection = new_MethodClosure((Method)PMethod152, Object_Class);
    store_method(Object_Class, SMB_isCollection, MC_SMB_isCollection);
}


static void init_SMB_perform_with_() {
    Symbol SMB_perform_with_ = new_Symbol(L"perform:with:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Variable VAR_anObject_0_1 = new_Variable_named(L"anObject", 0);
    Array PArray155 = new_Array_with(2, (Optr)VAR_aSymbol_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend157 = new_Send((Optr)PMessage_classReference, SMB_with_, 1, (Optr)VAR_anObject_0_1);
    Symbol SMB_perform_withArguments_ = new_Symbol(L"perform:withArguments:");
    // perform:withArguments:. 
    Send PSend158 = new_Send((Optr)self, SMB_perform_withArguments_, 2, (Optr)VAR_aSymbol_0_0, (Optr)PSend157);
    Array PThreadedCode156 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send1, (Optr)PSend157, (Optr)&t_send2, (Optr)PSend158, (Optr)&t_method_return);
    Method PMethod154 = new_Method_with(PArray155, empty_Array, empty_Array, PThreadedCode156, 1, PSend158);
    
    MethodClosure MC_SMB_perform_with_ = new_MethodClosure((Method)PMethod154, Object_Class);
    store_method(Object_Class, SMB_perform_with_, MC_SMB_perform_with_);
}


static void init_SMB_species() {
    Symbol SMB_species = new_Symbol(L"species");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend161 = new_Send((Optr)self, SMB_class, 0);
    Array PThreadedCode160 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend161, (Optr)&t_method_return);
    Method PMethod159 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode160, 1, PSend161);
    
    MethodClosure MC_SMB_species = new_MethodClosure((Method)PMethod159, Object_Class);
    store_method(Object_Class, SMB_species, MC_SMB_species);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray163 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Type_minus_Object = new_Symbol(L"Type.Object");
    Annotation PAnnotation165 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__equals_, (Optr)SMB_Type_minus_Object);
    Array PArray164 = new_Array_with(1, (Optr)PAnnotation165);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend167 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode166 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend167, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod162 = new_NativeMethod_with(PArray163, empty_Array, PArray164, PThreadedCode166, 2, PSend167, self);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PNativeMethod162, Object_Class);
    store_method(Object_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_perform_with_with_() {
    Symbol SMB_perform_with_with_ = new_Symbol(L"perform:with:with:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Variable VAR_firstObject_0_1 = new_Variable_named(L"firstObject", 0);
    Variable VAR_secondObject_0_2 = new_Variable_named(L"secondObject", 0);
    Array PArray169 = new_Array_with(3, (Optr)VAR_aSymbol_0_0, (Optr)VAR_firstObject_0_1, (Optr)VAR_secondObject_0_2);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend171 = new_Send((Optr)PMessage_classReference, SMB_with_with_, 2, (Optr)VAR_firstObject_0_1, (Optr)VAR_secondObject_0_2);
    Symbol SMB_perform_withArguments_ = new_Symbol(L"perform:withArguments:");
    // perform:withArguments:. 
    Send PSend172 = new_Send((Optr)self, SMB_perform_withArguments_, 2, (Optr)VAR_aSymbol_0_0, (Optr)PSend171);
    Array PThreadedCode170 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_push_variable, (Optr)VAR_firstObject_0_1, (Optr)&t_push_variable, (Optr)VAR_secondObject_0_2, (Optr)&t_send2, (Optr)PSend171, (Optr)&t_send2, (Optr)PSend172, (Optr)&t_method_return);
    Method PMethod168 = new_Method_with(PArray169, empty_Array, empty_Array, PThreadedCode170, 1, PSend172);
    
    MethodClosure MC_SMB_perform_with_with_ = new_MethodClosure((Method)PMethod168, Object_Class);
    store_method(Object_Class, SMB_perform_with_with_, MC_SMB_perform_with_with_);
}


static void init_SMB_basicAt_() {
    Symbol SMB_basicAt_ = new_Symbol(L"basicAt:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Array PArray174 = new_Array_with(1, (Optr)VAR_index_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    Symbol SMB_Type_minus_Object = new_Symbol(L"Type.Object");
    Annotation PAnnotation176 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_at_, (Optr)SMB_Type_minus_Object);
    Array PArray175 = new_Array_with(1, (Optr)PAnnotation176);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend178 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode177 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend178, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod173 = new_NativeMethod_with(PArray174, empty_Array, PArray175, PThreadedCode177, 2, PSend178, self);
    
    MethodClosure MC_SMB_basicAt_ = new_MethodClosure((Method)PNativeMethod173, Object_Class);
    store_method(Object_Class, SMB_basicAt_, MC_SMB_basicAt_);
}


static void init_SMB_ifNotNil_ifNil_() {
    Symbol SMB_ifNotNil_ifNil_ = new_Symbol(L"ifNotNil:ifNil:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Variable VAR_otherBlock_0_1 = new_Variable_named(L"otherBlock", 0);
    Array PArray180 = new_Array_with(2, (Optr)VAR_aBlock_0_0, (Optr)VAR_otherBlock_0_1);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend182 = new_Send((Optr)self, SMB_ifNotNil_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode181 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend182, (Optr)&t_method_return);
    Method PMethod179 = new_Method_with(PArray180, empty_Array, empty_Array, PThreadedCode181, 1, PSend182);
    
    MethodClosure MC_SMB_ifNotNil_ifNil_ = new_MethodClosure((Method)PMethod179, Object_Class);
    store_method(Object_Class, SMB_ifNotNil_ifNil_, MC_SMB_ifNotNil_ifNil_);
}


static void init_SMB_isCharacter() {
    Symbol SMB_isCharacter = new_Symbol(L"isCharacter");
    Array PThreadedCode184 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_false);
    Method PMethod183 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode184, 1, false_Const);
    
    MethodClosure MC_SMB_isCharacter = new_MethodClosure((Method)PMethod183, Object_Class);
    store_method(Object_Class, SMB_isCharacter, MC_SMB_isCharacter);
}


static void init_SMB_instVarAt_() {
    Symbol SMB_instVarAt_ = new_Symbol(L"instVarAt:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Array PArray186 = new_Array_with(1, (Optr)VAR_index_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend188 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_layout = new_Symbol(L"layout");
    // layout. 
    Send PSend189 = new_Send((Optr)PSend188, SMB_layout, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend190 = new_Send((Optr)PSend189, SMB_at_, 1, (Optr)VAR_index_0_0);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend191 = new_Send((Optr)PSend190, SMB_readFrom_, 1, (Optr)self);
    Array PThreadedCode187 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend188, (Optr)&t_send0, (Optr)PSend189, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_send1, (Optr)PSend190, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend191, (Optr)&t_method_return);
    Method PMethod185 = new_Method_with(PArray186, empty_Array, empty_Array, PThreadedCode187, 1, PSend191);
    
    MethodClosure MC_SMB_instVarAt_ = new_MethodClosure((Method)PMethod185, Object_Class);
    store_method(Object_Class, SMB_instVarAt_, MC_SMB_instVarAt_);
}


static void init_SMB_removeNatives() {
    Symbol SMB_removeNatives = new_Symbol(L"removeNatives");
    Symbol SMB_methods = new_Symbol(L"methods");
    // methods. 
    Send PSend194 = new_Send((Optr)self, SMB_methods, 0);
    Variable VAR_method_1_0 = new_Variable_named(L"method", 1);
    Array PArray196 = new_Array_with(1, (Optr)VAR_method_1_0);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend198 = new_Send((Optr)VAR_method_1_0, SMB_code, 0);
    Symbol SMB_clearNative = new_Symbol(L"clearNative");
    // clearNative. 
    Send PSend199 = new_Send((Optr)PSend198, SMB_clearNative, 0);
    Array PThreadedCode197 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_method_1_0, (Optr)&t_send0, (Optr)PSend198, (Optr)&t_send0, (Optr)PSend199, (Optr)&t_method_return);
    Block PBlock195 = new_Block_with(PArray196, empty_Array, PThreadedCode197, 1, PSend199);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend200 = new_Send((Optr)PSend194, SMB_do_, 1, (Optr)PBlock195);
    Array PThreadedCode193 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend194, (Optr)&t_push_closure, (Optr)PBlock195, (Optr)&t_send1, (Optr)PSend200, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod192 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode193, 2, PSend200, self);
    
    MethodClosure MC_SMB_removeNatives = new_MethodClosure((Method)PMethod192, Object_Class);
    store_method(Object_Class, SMB_removeNatives, MC_SMB_removeNatives);
}


static void init_SMB_printString() {
    Symbol SMB_printString = new_Symbol(L"printString");
    Variable VAR_stream_1_0 = new_Variable_named(L"stream", 1);
    Array PArray204 = new_Array_with(1, (Optr)VAR_stream_1_0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend206 = new_Send((Optr)self, SMB_printOn_, 1, (Optr)VAR_stream_1_0);
    Array PThreadedCode205 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_stream_1_0, (Optr)&t_send1, (Optr)PSend206, (Optr)&t_method_return);
    Block PBlock203 = new_Block_with(PArray204, empty_Array, PThreadedCode205, 1, PSend206);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend207 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock203);
    Array PThreadedCode202 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock203, (Optr)&t_send1, (Optr)PSend207, (Optr)&t_method_return);
    Method PMethod201 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode202, 1, PSend207);
    
    MethodClosure MC_SMB_printString = new_MethodClosure((Method)PMethod201, Object_Class);
    store_method(Object_Class, SMB_printString, MC_SMB_printString);
}


static void init_SMB_ifNil_() {
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray209 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode210 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod208 = new_Method_with(PArray209, empty_Array, empty_Array, PThreadedCode210, 1, self);
    
    MethodClosure MC_SMB_ifNil_ = new_MethodClosure((Method)PMethod208, Object_Class);
    store_method(Object_Class, SMB_ifNil_, MC_SMB_ifNil_);
}


static void init_SMB_isNotNil() {
    Symbol SMB_isNotNil = new_Symbol(L"isNotNil");
    Array PThreadedCode212 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod211 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode212, 1, true_Const);
    
    MethodClosure MC_SMB_isNotNil = new_MethodClosure((Method)PMethod211, Object_Class);
    store_method(Object_Class, SMB_isNotNil, MC_SMB_isNotNil);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray214 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend216 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend217 = new_Send((Optr)PSend216, SMB_name, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend218 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend217);
    Array PThreadedCode215 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend216, (Optr)&t_send0, (Optr)PSend217, (Optr)&t_send1, (Optr)PSend218, (Optr)&t_method_return);
    Method PMethod213 = new_Method_with(PArray214, empty_Array, empty_Array, PThreadedCode215, 1, PSend218);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod213, Object_Class);
    store_method(Object_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_assert_() {
    Symbol SMB_assert_ = new_Symbol(L"assert:");
    Variable VAR_bool_0_0 = new_Variable_named(L"bool", 0);
    Array PArray220 = new_Array_with(1, (Optr)VAR_bool_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend225 = new_Send((Optr)PAssertionFailure_classReference, SMB_new, 0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend226 = new_Send((Optr)PSend225, SMB_signal, 0);
    Array PThreadedCode224 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PAssertionFailure_classReference, (Optr)&t_send0, (Optr)PSend225, (Optr)&t_send0, (Optr)PSend226, (Optr)&t_block_return);
    Block PBlock223 = new_Block_with(empty_Array, empty_Array, PThreadedCode224, 1, PSend226);
    // ifFalse:. 
    Send PSend222 = new_Send((Optr)VAR_bool_0_0, SMB_ifFalse_, 1, (Optr)PBlock223);
    Array PThreadedCode221 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_bool_0_0, (Optr)&t_send_ifFalse_, (Optr)PSend222, (Optr)PBlock223, (Optr)&t_method_return);
    Method PMethod219 = new_Method_with(PArray220, empty_Array, empty_Array, PThreadedCode221, 1, PSend222);
    
    MethodClosure MC_SMB_assert_ = new_MethodClosure((Method)PMethod219, Object_Class);
    store_method(Object_Class, SMB_assert_, MC_SMB_assert_);
}


static void init_SMB_hash() {
    Symbol SMB_hash = new_Symbol(L"hash");
    Symbol SMB_identityHash = new_Symbol(L"identityHash");
    // identityHash. 
    Send PSend229 = new_Send((Optr)self, SMB_identityHash, 0);
    Array PThreadedCode228 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend229, (Optr)&t_method_return);
    Method PMethod227 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode228, 1, PSend229);
    
    MethodClosure MC_SMB_hash = new_MethodClosure((Method)PMethod227, Object_Class);
    store_method(Object_Class, SMB_hash, MC_SMB_hash);
}


static void init_SMB_yourself() {
    Symbol SMB_yourself = new_Symbol(L"yourself");
    Array PThreadedCode231 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod230 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode231, 1, self);
    
    MethodClosure MC_SMB_yourself = new_MethodClosure((Method)PMethod230, Object_Class);
    store_method(Object_Class, SMB_yourself, MC_SMB_yourself);
}


static void init_SMB_isKindOf_() {
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    Variable VAR_aClass_0_0 = new_Variable_named(L"aClass", 0);
    Array PArray233 = new_Array_with(1, (Optr)VAR_aClass_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray236 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend238 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend239 = new_Send((Optr)PSend238, SMB__pequals_, 1, (Optr)VAR_aClass_0_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend243 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode242 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend243, (Optr)&t_block_return);
    Block PBlock241 = new_Block_with(empty_Array, empty_Array, PThreadedCode242, 1, PSend243);
    // class. 
    Send PSend246 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_inheritsFrom_ = new_Symbol(L"inheritsFrom:");
    // inheritsFrom:. 
    Send PSend247 = new_Send((Optr)PSend246, SMB_inheritsFrom_, 1, (Optr)VAR_aClass_0_0);
    // escape:. 
    Send PSend248 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend247);
    Array PThreadedCode245 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend246, (Optr)&t_push_variable, (Optr)VAR_aClass_0_0, (Optr)&t_send1, (Optr)PSend247, (Optr)&t_send1, (Optr)PSend248, (Optr)&t_block_return);
    Block PBlock244 = new_Block_with(empty_Array, empty_Array, PThreadedCode245, 1, PSend248);
    // ifTrue:ifFalse:. 
    Send PSend240 = new_Send((Optr)PSend239, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock241, (Optr)PBlock244);
    Array PThreadedCode237 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend238, (Optr)&t_push_variable, (Optr)VAR_aClass_0_0, (Optr)&t_send1, (Optr)PSend239, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend240, (Optr)PBlock241, (Optr)PBlock244, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock235 = new_Block_with(PArray236, empty_Array, PThreadedCode237, 2, PSend240, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend249 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock235);
    Array PThreadedCode234 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock235, (Optr)&t_send1, (Optr)PSend249, (Optr)&t_method_return);
    Method PMethod232 = new_Method_with(PArray233, empty_Array, empty_Array, PThreadedCode234, 1, PSend249);
    
    MethodClosure MC_SMB_isKindOf_ = new_MethodClosure((Method)PMethod232, Object_Class);
    store_method(Object_Class, SMB_isKindOf_, MC_SMB_isKindOf_);
}


static void init_SMB_should() {
    Symbol SMB_should = new_Symbol(L"should");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend252 = new_Send((Optr)PPexMatcher_classReference, SMB_new_, 1, (Optr)self);
    Array PThreadedCode251 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PPexMatcher_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend252, (Optr)&t_method_return);
    Method PMethod250 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode251, 1, PSend252);
    
    MethodClosure MC_SMB_should = new_MethodClosure((Method)PMethod250, Object_Class);
    store_method(Object_Class, SMB_should, MC_SMB_should);
}


static void init_SMB_at_put_() {
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray254 = new_Array_with(2, (Optr)VAR_index_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Type_minus_Object = new_Symbol(L"Type.Object");
    Annotation PAnnotation256 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_at_put_, (Optr)SMB_Type_minus_Object);
    Array PArray255 = new_Array_with(1, (Optr)PAnnotation256);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend258 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode257 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend258, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod253 = new_NativeMethod_with(PArray254, empty_Array, PArray255, PThreadedCode257, 2, PSend258, self);
    
    MethodClosure MC_SMB_at_put_ = new_MethodClosure((Method)PNativeMethod253, Object_Class);
    store_method(Object_Class, SMB_at_put_, MC_SMB_at_put_);
}


static void init_SMB_inspect() {
    Symbol SMB_inspect = new_Symbol(L"inspect");
    Symbol SMB_inspect_ = new_Symbol(L"inspect:");
    // inspect:. 
    Send PSend261 = new_Send((Optr)PStreamInspector_classReference, SMB_inspect_, 1, (Optr)self);
    Array PThreadedCode260 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PStreamInspector_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend261, (Optr)&t_method_return);
    Method PMethod259 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode260, 1, PSend261);
    
    MethodClosure MC_SMB_inspect = new_MethodClosure((Method)PMethod259, Object_Class);
    store_method(Object_Class, SMB_inspect, MC_SMB_inspect);
}


static void init_SMB_doesNotUnderstand_() {
    Symbol SMB_doesNotUnderstand_ = new_Symbol(L"doesNotUnderstand:");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Array PArray263 = new_Array_with(1, (Optr)VAR_message_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray266 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend268 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)VAR_message_0_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend269 = new_Send((Optr)VAR__receiver__1_0, SMB_receiver_, 1, (Optr)self);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend270 = new_Send((Optr)VAR__receiver__1_0, SMB_signal, 0);
    Array PThreadedCode267 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_send1, (Optr)PSend268, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend269, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend270, (Optr)&t_method_return);
    Block PBlock265 = new_Block_with(PArray266, empty_Array, PThreadedCode267, 3, PSend268, PSend269, PSend270);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend271 = new_Send((Optr)PDoesNotUnderstand_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend272 = new_Send((Optr)PBlock265, SMB_value_, 1, (Optr)PSend271);
    Array PThreadedCode264 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock265, (Optr)&t_push_class_reference, (Optr)PDoesNotUnderstand_classReference, (Optr)&t_send0, (Optr)PSend271, (Optr)&t_send1, (Optr)PSend272, (Optr)&t_method_return);
    Method PMethod262 = new_Method_with(PArray263, empty_Array, empty_Array, PThreadedCode264, 1, PSend272);
    
    MethodClosure MC_SMB_doesNotUnderstand_ = new_MethodClosure((Method)PMethod262, Object_Class);
    store_method(Object_Class, SMB_doesNotUnderstand_, MC_SMB_doesNotUnderstand_);
}


static void init_SMB_instVarAt_put_() {
    Symbol SMB_instVarAt_put_ = new_Symbol(L"instVarAt:put:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray274 = new_Array_with(2, (Optr)VAR_index_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend276 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_layout = new_Symbol(L"layout");
    // layout. 
    Send PSend277 = new_Send((Optr)PSend276, SMB_layout, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend278 = new_Send((Optr)PSend277, SMB_at_, 1, (Optr)VAR_index_0_0);
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    // assign:on:. 
    Send PSend279 = new_Send((Optr)PSend278, SMB_assign_on_, 2, (Optr)VAR_value_0_1, (Optr)self);
    Array PThreadedCode275 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend276, (Optr)&t_send0, (Optr)PSend277, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_send1, (Optr)PSend278, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend279, (Optr)&t_method_return);
    Method PMethod273 = new_Method_with(PArray274, empty_Array, empty_Array, PThreadedCode275, 1, PSend279);
    
    MethodClosure MC_SMB_instVarAt_put_ = new_MethodClosure((Method)PMethod273, Object_Class);
    store_method(Object_Class, SMB_instVarAt_put_, MC_SMB_instVarAt_put_);
}

void init_Kernel_Object_Object_layout() {
    slot_Kernel_Object_Object_Class_class_layout = (Optr)new_Slot(0, L"layout");
    slot_Kernel_Object_Object_Class_class_superclass = (Optr)new_Slot(1, L"superclass");
    slot_Kernel_Object_Object_Class_class_methods = (Optr)new_Slot(2, L"methods");
    slot_Kernel_Object_Object_Class_class_name = (Optr)new_Slot(3, L"name");
    slot_Kernel_Object_Object_Class_class_package = (Optr)new_Slot(4, L"package");
    layout_Kernel_Object_Object_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_Object_Object_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_Object_Object_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_Object_Object_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_Object_Object_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_Object_Object_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Object = new_Symbol(L"Object");
    Class_set_superclass(Object_Class, nil);
    Object_Class->layout = empty_object_layout;
    HEADER(Object_Class)->layout = layout_Kernel_Object_Object_Class_class;
    Object_Class->name = SMB_Object;
    
}

void init_Kernel_Object_Object_methods() {
    init_SMB_isNumber();
    init_SMB_identityHash();
    init_SMB__notEquals_();
    init_SMB_at_();
    init_SMB__pequals_();
    init_SMB_perform_();
    init_SMB_inspectChildrenOn_();
    init_SMB_pinocchioPrimitiveFailed();
    init_SMB_initialize();
    init_SMB_asAllocationAlias_();
    init_SMB_isString();
    init_SMB_value();
    init_SMB_inspectLabelOn_();
    init_SMB__at_();
    init_SMB_class();
    init_SMB_size();
    init_SMB_inspectNameOn_();
    init_SMB_ifNil_ifNotNil_();
    init_SMB_ifNotNil_();
    init_SMB_ifNotNilDo_();
    init_SMB__notPEquals_();
    init_SMB_swapInvokeNative();
    init_SMB_asString();
    init_SMB_perform_withArguments_();
    init_SMB_error_();
    init_SMB_isNil();
    init_SMB_warn_();
    init_SMB_halt();
    init_SMB_ifNil_ifNotNilDo_();
    init_SMB_respondsTo_();
    init_SMB_isCollection();
    init_SMB_perform_with_();
    init_SMB_species();
    init_SMB__equals_();
    init_SMB_perform_with_with_();
    init_SMB_basicAt_();
    init_SMB_ifNotNil_ifNil_();
    init_SMB_isCharacter();
    init_SMB_instVarAt_();
    init_SMB_removeNatives();
    init_SMB_printString();
    init_SMB_ifNil_();
    init_SMB_isNotNil();
    init_SMB_printOn_();
    init_SMB_assert_();
    init_SMB_hash();
    init_SMB_yourself();
    init_SMB_isKindOf_();
    init_SMB_should();
    init_SMB_at_put_();
    init_SMB_inspect();
    init_SMB_doesNotUnderstand_();
    init_SMB_instVarAt_put_();
    
}