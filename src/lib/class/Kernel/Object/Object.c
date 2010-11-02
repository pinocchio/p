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


static void init_SMB_pinocchioPrimitiveFailed() {
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    String string_33 = new_String(L"a pinocchio primitive has failed");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_33_Const = new_Constant((Optr)string_33);
    // error:. 
    Send PSend34 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_33_Const);
    Array PThreadedCode32 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_33, (Optr)&t_send1, (Optr)PSend34, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod31 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode32, 2, PSend34, self);
    
    MethodClosure MC_SMB_pinocchioPrimitiveFailed = new_MethodClosure((Method)PMethod31, Object_Class);
    store_method(Object_Class, SMB_pinocchioPrimitiveFailed, MC_SMB_pinocchioPrimitiveFailed);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Array PThreadedCode36 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod35 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode36, 1, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod35, Object_Class);
    store_method(Object_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_asAllocationAlias_() {
    Symbol SMB_asAllocationAlias_ = new_Symbol(L"asAllocationAlias:");
    Variable VAR_aContext_0_0 = new_Variable_named(L"aContext", 0);
    Array PArray38 = new_Array_with(1, (Optr)VAR_aContext_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend40 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_layout = new_Symbol(L"layout");
    // layout. 
    Send PSend41 = new_Send((Optr)PSend40, SMB_layout, 0);
    Symbol SMB_alias_in_ = new_Symbol(L"alias:in:");
    // alias:in:. 
    Send PSend42 = new_Send((Optr)PSend41, SMB_alias_in_, 2, (Optr)self, (Optr)VAR_aContext_0_0);
    Array PThreadedCode39 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend40, (Optr)&t_send0, (Optr)PSend41, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aContext_0_0, (Optr)&t_send2, (Optr)PSend42, (Optr)&t_method_return);
    Method PMethod37 = new_Method_with(PArray38, empty_Array, empty_Array, PThreadedCode39, 1, PSend42);
    
    MethodClosure MC_SMB_asAllocationAlias_ = new_MethodClosure((Method)PMethod37, Object_Class);
    store_method(Object_Class, SMB_asAllocationAlias_, MC_SMB_asAllocationAlias_);
}


static void init_SMB_isString() {
    Symbol SMB_isString = new_Symbol(L"isString");
    Array PThreadedCode44 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_false);
    Method PMethod43 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode44, 1, false_Const);
    
    MethodClosure MC_SMB_isString = new_MethodClosure((Method)PMethod43, Object_Class);
    store_method(Object_Class, SMB_isString, MC_SMB_isString);
}


static void init_SMB_value() {
    Symbol SMB_value = new_Symbol(L"value");
    Array PThreadedCode46 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod45 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode46, 1, self);
    
    MethodClosure MC_SMB_value = new_MethodClosure((Method)PMethod45, Object_Class);
    store_method(Object_Class, SMB_value, MC_SMB_value);
}


static void init_SMB__at_() {
    Symbol SMB__at_ = new_Symbol(L"@");
    Variable VAR_y_0_0 = new_Variable_named(L"y", 0);
    Array PArray48 = new_Array_with(1, (Optr)VAR_y_0_0);
    Symbol SMB_x_y_ = new_Symbol(L"x:y:");
    // x:y:. 
    Send PSend50 = new_Send((Optr)Point_classReference, SMB_x_y_, 2, (Optr)self, (Optr)VAR_y_0_0);
    Array PThreadedCode49 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)Point_classReference, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_y_0_0, (Optr)&t_send2, (Optr)PSend50, (Optr)&t_method_return);
    Method PMethod47 = new_Method_with(PArray48, empty_Array, empty_Array, PThreadedCode49, 1, PSend50);
    
    MethodClosure MC_SMB__at_ = new_MethodClosure((Method)PMethod47, Object_Class);
    store_method(Object_Class, SMB__at_, MC_SMB__at_);
}


static void init_SMB_class() {
    Symbol SMB_class = new_Symbol(L"class");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Type_minus_Object = new_Symbol(L"Type.Object");
    Annotation PAnnotation53 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_class, (Optr)SMB_Type_minus_Object);
    Array PArray52 = new_Array_with(1, (Optr)PAnnotation53);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend55 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode54 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend55, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod51 = new_NativeMethod_with(empty_Array, empty_Array, PArray52, PThreadedCode54, 2, PSend55, self);
    
    MethodClosure MC_SMB_class = new_MethodClosure((Method)PNativeMethod51, Object_Class);
    store_method(Object_Class, SMB_class, MC_SMB_class);
}


static void init_SMB_size() {
    Symbol SMB_size = new_Symbol(L"size");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Type_minus_Object = new_Symbol(L"Type.Object");
    Annotation PAnnotation58 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_size, (Optr)SMB_Type_minus_Object);
    Array PArray57 = new_Array_with(1, (Optr)PAnnotation58);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend60 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode59 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend60, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod56 = new_NativeMethod_with(empty_Array, empty_Array, PArray57, PThreadedCode59, 2, PSend60, self);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PNativeMethod56, Object_Class);
    store_method(Object_Class, SMB_size, MC_SMB_size);
}


static void init_SMB_ifNil_ifNotNil_() {
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Variable VAR_otherBlock_0_1 = new_Variable_named(L"otherBlock", 0);
    Array PArray62 = new_Array_with(2, (Optr)VAR_aBlock_0_0, (Optr)VAR_otherBlock_0_1);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend64 = new_Send((Optr)self, SMB_ifNotNil_, 1, (Optr)VAR_otherBlock_0_1);
    Array PThreadedCode63 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_otherBlock_0_1, (Optr)&t_send1, (Optr)PSend64, (Optr)&t_method_return);
    Method PMethod61 = new_Method_with(PArray62, empty_Array, empty_Array, PThreadedCode63, 1, PSend64);
    
    MethodClosure MC_SMB_ifNil_ifNotNil_ = new_MethodClosure((Method)PMethod61, Object_Class);
    store_method(Object_Class, SMB_ifNil_ifNotNil_, MC_SMB_ifNil_ifNotNil_);
}


static void init_SMB_ifNotNil_() {
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray66 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend68 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)self);
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    // valueWithPossibleArgs:. 
    Send PSend69 = new_Send((Optr)VAR_aBlock_0_0, SMB_valueWithPossibleArgs_, 1, (Optr)PSend68);
    Array PThreadedCode67 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend68, (Optr)&t_send1, (Optr)PSend69, (Optr)&t_method_return);
    Method PMethod65 = new_Method_with(PArray66, empty_Array, empty_Array, PThreadedCode67, 1, PSend69);
    
    MethodClosure MC_SMB_ifNotNil_ = new_MethodClosure((Method)PMethod65, Object_Class);
    store_method(Object_Class, SMB_ifNotNil_, MC_SMB_ifNotNil_);
}


static void init_SMB_ifNotNilDo_() {
    Symbol SMB_ifNotNilDo_ = new_Symbol(L"ifNotNilDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray71 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend73 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)self);
    Array PThreadedCode72 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend73, (Optr)&t_method_return);
    Method PMethod70 = new_Method_with(PArray71, empty_Array, empty_Array, PThreadedCode72, 1, PSend73);
    
    MethodClosure MC_SMB_ifNotNilDo_ = new_MethodClosure((Method)PMethod70, Object_Class);
    store_method(Object_Class, SMB_ifNotNilDo_, MC_SMB_ifNotNilDo_);
}


static void init_SMB__notPEquals_() {
    Symbol SMB__notPEquals_ = new_Symbol(L"~~");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray75 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray78 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend80 = new_Send((Optr)self, SMB__pequals_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend84 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode83 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend84, (Optr)&t_block_return);
    Block PBlock82 = new_Block_with(empty_Array, empty_Array, PThreadedCode83, 1, PSend84);
    // escape:. 
    Send PSend87 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode86 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend87, (Optr)&t_block_return);
    Block PBlock85 = new_Block_with(empty_Array, empty_Array, PThreadedCode86, 1, PSend87);
    // ifTrue:ifFalse:. 
    Send PSend81 = new_Send((Optr)PSend80, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock82, (Optr)PBlock85);
    Array PThreadedCode79 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend80, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend81, (Optr)PBlock82, (Optr)PBlock85, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock77 = new_Block_with(PArray78, empty_Array, PThreadedCode79, 2, PSend81, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend88 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock77);
    Array PThreadedCode76 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock77, (Optr)&t_send1, (Optr)PSend88, (Optr)&t_method_return);
    Method PMethod74 = new_Method_with(PArray75, empty_Array, empty_Array, PThreadedCode76, 1, PSend88);
    
    MethodClosure MC_SMB__notPEquals_ = new_MethodClosure((Method)PMethod74, Object_Class);
    store_method(Object_Class, SMB__notPEquals_, MC_SMB__notPEquals_);
}


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    Symbol SMB_printString = new_Symbol(L"printString");
    // printString. 
    Send PSend91 = new_Send((Optr)self, SMB_printString, 0);
    Array PThreadedCode90 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend91, (Optr)&t_method_return);
    Method PMethod89 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode90, 1, PSend91);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PMethod89, Object_Class);
    store_method(Object_Class, SMB_asString, MC_SMB_asString);
}


static void init_SMB_perform_withArguments_() {
    Symbol SMB_perform_withArguments_ = new_Symbol(L"perform:withArguments:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Variable VAR_arguments_0_1 = new_Variable_named(L"arguments", 0);
    Array PArray93 = new_Array_with(2, (Optr)VAR_aSymbol_0_0, (Optr)VAR_arguments_0_1);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Type_minus_Object = new_Symbol(L"Type.Object");
    Annotation PAnnotation95 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_perform_withArguments_, (Optr)SMB_Type_minus_Object);
    Array PArray94 = new_Array_with(1, (Optr)PAnnotation95);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend97 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode96 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend97, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod92 = new_NativeMethod_with(PArray93, empty_Array, PArray94, PThreadedCode96, 2, PSend97, self);
    
    MethodClosure MC_SMB_perform_withArguments_ = new_MethodClosure((Method)PNativeMethod92, Object_Class);
    store_method(Object_Class, SMB_perform_withArguments_, MC_SMB_perform_withArguments_);
}


static void init_SMB_error_() {
    Symbol SMB_error_ = new_Symbol(L"error:");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Array PArray99 = new_Array_with(1, (Optr)VAR_message_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray102 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend104 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)VAR_message_0_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend105 = new_Send((Optr)VAR__receiver__1_0, SMB_signal, 0);
    Array PThreadedCode103 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_send1, (Optr)PSend104, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend105, (Optr)&t_method_return);
    Block PBlock101 = new_Block_with(PArray102, empty_Array, PThreadedCode103, 2, PSend104, PSend105);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend106 = new_Send((Optr)Error_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend107 = new_Send((Optr)PBlock101, SMB_value_, 1, (Optr)PSend106);
    Array PThreadedCode100 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock101, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_send0, (Optr)PSend106, (Optr)&t_send1, (Optr)PSend107, (Optr)&t_method_return);
    Method PMethod98 = new_Method_with(PArray99, empty_Array, empty_Array, PThreadedCode100, 1, PSend107);
    
    MethodClosure MC_SMB_error_ = new_MethodClosure((Method)PMethod98, Object_Class);
    store_method(Object_Class, SMB_error_, MC_SMB_error_);
}


static void init_SMB_inspectChildrenOn_() {
    Symbol SMB_inspectChildrenOn_ = new_Symbol(L"inspectChildrenOn:");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
    Array PArray109 = new_Array_with(1, (Optr)VAR_inspector_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend111 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_layout = new_Symbol(L"layout");
    // layout. 
    Send PSend112 = new_Send((Optr)PSend111, SMB_layout, 0);
    Symbol SMB_inspectChildrenFrom_on_ = new_Symbol(L"inspectChildrenFrom:on:");
    // inspectChildrenFrom:on:. 
    Send PSend113 = new_Send((Optr)PSend112, SMB_inspectChildrenFrom_on_, 2, (Optr)self, (Optr)VAR_inspector_0_0);
    Array PThreadedCode110 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend111, (Optr)&t_send0, (Optr)PSend112, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_send2, (Optr)PSend113, (Optr)&t_method_return);
    Method PMethod108 = new_Method_with(PArray109, empty_Array, empty_Array, PThreadedCode110, 1, PSend113);
    
    MethodClosure MC_SMB_inspectChildrenOn_ = new_MethodClosure((Method)PMethod108, Object_Class);
    store_method(Object_Class, SMB_inspectChildrenOn_, MC_SMB_inspectChildrenOn_);
}


static void init_SMB_isNil() {
    Symbol SMB_isNil = new_Symbol(L"isNil");
    Array PThreadedCode115 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_false);
    Method PMethod114 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode115, 1, false_Const);
    
    MethodClosure MC_SMB_isNil = new_MethodClosure((Method)PMethod114, Object_Class);
    store_method(Object_Class, SMB_isNil, MC_SMB_isNil);
}


static void init_SMB_warn_() {
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    Variable VAR_msg_0_0 = new_Variable_named(L"msg", 0);
    Array PArray117 = new_Array_with(1, (Optr)VAR_msg_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray120 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_red_ = new_Symbol(L"red:");
    // red:. 
    Send PSend122 = new_Send((Optr)VAR__receiver__1_0, SMB_red_, 1, (Optr)VAR_msg_0_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend123 = new_Send((Optr)VAR__receiver__1_0, SMB_lf, 0);
    Array PThreadedCode121 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_msg_0_0, (Optr)&t_send1, (Optr)PSend122, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend123, (Optr)&t_method_return);
    Block PBlock119 = new_Block_with(PArray120, empty_Array, PThreadedCode121, 2, PSend122, PSend123);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend124 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend125 = new_Send((Optr)PBlock119, SMB_value_, 1, (Optr)PSend124);
    Array PThreadedCode118 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock119, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend124, (Optr)&t_send1, (Optr)PSend125, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod116 = new_Method_with(PArray117, empty_Array, empty_Array, PThreadedCode118, 2, PSend125, self);
    
    MethodClosure MC_SMB_warn_ = new_MethodClosure((Method)PMethod116, Object_Class);
    store_method(Object_Class, SMB_warn_, MC_SMB_warn_);
}


static void init_SMB_halt() {
    Symbol SMB_halt = new_Symbol(L"halt");
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend128 = new_Send((Optr)PHalt_classReference, SMB_signal, 0);
    Array PThreadedCode127 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PHalt_classReference, (Optr)&t_send0, (Optr)PSend128, (Optr)&t_method_return);
    Method PMethod126 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode127, 1, PSend128);
    
    MethodClosure MC_SMB_halt = new_MethodClosure((Method)PMethod126, Object_Class);
    store_method(Object_Class, SMB_halt, MC_SMB_halt);
}


static void init_SMB_ifNil_ifNotNilDo_() {
    Symbol SMB_ifNil_ifNotNilDo_ = new_Symbol(L"ifNil:ifNotNilDo:");
    Variable VAR_nilBlock_0_0 = new_Variable_named(L"nilBlock", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray130 = new_Array_with(2, (Optr)VAR_nilBlock_0_0, (Optr)VAR_aBlock_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend132 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)self);
    Array PThreadedCode131 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend132, (Optr)&t_method_return);
    Method PMethod129 = new_Method_with(PArray130, empty_Array, empty_Array, PThreadedCode131, 1, PSend132);
    
    MethodClosure MC_SMB_ifNil_ifNotNilDo_ = new_MethodClosure((Method)PMethod129, Object_Class);
    store_method(Object_Class, SMB_ifNil_ifNotNilDo_, MC_SMB_ifNil_ifNotNilDo_);
}


static void init_SMB_respondsTo_() {
    Symbol SMB_respondsTo_ = new_Symbol(L"respondsTo:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray134 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend136 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_canUnderstand_ = new_Symbol(L"canUnderstand:");
    // canUnderstand:. 
    Send PSend137 = new_Send((Optr)PSend136, SMB_canUnderstand_, 1, (Optr)VAR_selector_0_0);
    Array PThreadedCode135 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend136, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend137, (Optr)&t_method_return);
    Method PMethod133 = new_Method_with(PArray134, empty_Array, empty_Array, PThreadedCode135, 1, PSend137);
    
    MethodClosure MC_SMB_respondsTo_ = new_MethodClosure((Method)PMethod133, Object_Class);
    store_method(Object_Class, SMB_respondsTo_, MC_SMB_respondsTo_);
}


static void init_SMB_isCollection() {
    Symbol SMB_isCollection = new_Symbol(L"isCollection");
    Array PThreadedCode139 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_false);
    Method PMethod138 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode139, 1, false_Const);
    
    MethodClosure MC_SMB_isCollection = new_MethodClosure((Method)PMethod138, Object_Class);
    store_method(Object_Class, SMB_isCollection, MC_SMB_isCollection);
}


static void init_SMB_perform_with_() {
    Symbol SMB_perform_with_ = new_Symbol(L"perform:with:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Variable VAR_anObject_0_1 = new_Variable_named(L"anObject", 0);
    Array PArray141 = new_Array_with(2, (Optr)VAR_aSymbol_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend143 = new_Send((Optr)PMessage_classReference, SMB_with_, 1, (Optr)VAR_anObject_0_1);
    Symbol SMB_perform_withArguments_ = new_Symbol(L"perform:withArguments:");
    // perform:withArguments:. 
    Send PSend144 = new_Send((Optr)self, SMB_perform_withArguments_, 2, (Optr)VAR_aSymbol_0_0, (Optr)PSend143);
    Array PThreadedCode142 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send1, (Optr)PSend143, (Optr)&t_send2, (Optr)PSend144, (Optr)&t_method_return);
    Method PMethod140 = new_Method_with(PArray141, empty_Array, empty_Array, PThreadedCode142, 1, PSend144);
    
    MethodClosure MC_SMB_perform_with_ = new_MethodClosure((Method)PMethod140, Object_Class);
    store_method(Object_Class, SMB_perform_with_, MC_SMB_perform_with_);
}


static void init_SMB_species() {
    Symbol SMB_species = new_Symbol(L"species");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend147 = new_Send((Optr)self, SMB_class, 0);
    Array PThreadedCode146 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend147, (Optr)&t_method_return);
    Method PMethod145 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode146, 1, PSend147);
    
    MethodClosure MC_SMB_species = new_MethodClosure((Method)PMethod145, Object_Class);
    store_method(Object_Class, SMB_species, MC_SMB_species);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray149 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Type_minus_Object = new_Symbol(L"Type.Object");
    Annotation PAnnotation151 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__equals_, (Optr)SMB_Type_minus_Object);
    Array PArray150 = new_Array_with(1, (Optr)PAnnotation151);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend153 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode152 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend153, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod148 = new_NativeMethod_with(PArray149, empty_Array, PArray150, PThreadedCode152, 2, PSend153, self);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PNativeMethod148, Object_Class);
    store_method(Object_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_perform_with_with_() {
    Symbol SMB_perform_with_with_ = new_Symbol(L"perform:with:with:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Variable VAR_firstObject_0_1 = new_Variable_named(L"firstObject", 0);
    Variable VAR_secondObject_0_2 = new_Variable_named(L"secondObject", 0);
    Array PArray155 = new_Array_with(3, (Optr)VAR_aSymbol_0_0, (Optr)VAR_firstObject_0_1, (Optr)VAR_secondObject_0_2);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend157 = new_Send((Optr)PMessage_classReference, SMB_with_with_, 2, (Optr)VAR_firstObject_0_1, (Optr)VAR_secondObject_0_2);
    Symbol SMB_perform_withArguments_ = new_Symbol(L"perform:withArguments:");
    // perform:withArguments:. 
    Send PSend158 = new_Send((Optr)self, SMB_perform_withArguments_, 2, (Optr)VAR_aSymbol_0_0, (Optr)PSend157);
    Array PThreadedCode156 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_push_variable, (Optr)VAR_firstObject_0_1, (Optr)&t_push_variable, (Optr)VAR_secondObject_0_2, (Optr)&t_send2, (Optr)PSend157, (Optr)&t_send2, (Optr)PSend158, (Optr)&t_method_return);
    Method PMethod154 = new_Method_with(PArray155, empty_Array, empty_Array, PThreadedCode156, 1, PSend158);
    
    MethodClosure MC_SMB_perform_with_with_ = new_MethodClosure((Method)PMethod154, Object_Class);
    store_method(Object_Class, SMB_perform_with_with_, MC_SMB_perform_with_with_);
}


static void init_SMB_basicAt_() {
    Symbol SMB_basicAt_ = new_Symbol(L"basicAt:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Array PArray160 = new_Array_with(1, (Optr)VAR_index_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    Symbol SMB_Type_minus_Object = new_Symbol(L"Type.Object");
    Annotation PAnnotation162 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_at_, (Optr)SMB_Type_minus_Object);
    Array PArray161 = new_Array_with(1, (Optr)PAnnotation162);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend164 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode163 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend164, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod159 = new_NativeMethod_with(PArray160, empty_Array, PArray161, PThreadedCode163, 2, PSend164, self);
    
    MethodClosure MC_SMB_basicAt_ = new_MethodClosure((Method)PNativeMethod159, Object_Class);
    store_method(Object_Class, SMB_basicAt_, MC_SMB_basicAt_);
}


static void init_SMB_ifNotNil_ifNil_() {
    Symbol SMB_ifNotNil_ifNil_ = new_Symbol(L"ifNotNil:ifNil:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Variable VAR_otherBlock_0_1 = new_Variable_named(L"otherBlock", 0);
    Array PArray166 = new_Array_with(2, (Optr)VAR_aBlock_0_0, (Optr)VAR_otherBlock_0_1);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend168 = new_Send((Optr)self, SMB_ifNotNil_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode167 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend168, (Optr)&t_method_return);
    Method PMethod165 = new_Method_with(PArray166, empty_Array, empty_Array, PThreadedCode167, 1, PSend168);
    
    MethodClosure MC_SMB_ifNotNil_ifNil_ = new_MethodClosure((Method)PMethod165, Object_Class);
    store_method(Object_Class, SMB_ifNotNil_ifNil_, MC_SMB_ifNotNil_ifNil_);
}


static void init_SMB_inspectNameOn_() {
    Symbol SMB_inspectNameOn_ = new_Symbol(L"inspectNameOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray170 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend172 = new_Send((Optr)self, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode171 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend172, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod169 = new_Method_with(PArray170, empty_Array, empty_Array, PThreadedCode171, 2, PSend172, self);
    
    MethodClosure MC_SMB_inspectNameOn_ = new_MethodClosure((Method)PMethod169, Object_Class);
    store_method(Object_Class, SMB_inspectNameOn_, MC_SMB_inspectNameOn_);
}


static void init_SMB_isCharacter() {
    Symbol SMB_isCharacter = new_Symbol(L"isCharacter");
    Array PThreadedCode174 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_false);
    Method PMethod173 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode174, 1, false_Const);
    
    MethodClosure MC_SMB_isCharacter = new_MethodClosure((Method)PMethod173, Object_Class);
    store_method(Object_Class, SMB_isCharacter, MC_SMB_isCharacter);
}


static void init_SMB_instVarAt_() {
    Symbol SMB_instVarAt_ = new_Symbol(L"instVarAt:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Array PArray176 = new_Array_with(1, (Optr)VAR_index_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend178 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_layout = new_Symbol(L"layout");
    // layout. 
    Send PSend179 = new_Send((Optr)PSend178, SMB_layout, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend180 = new_Send((Optr)PSend179, SMB_at_, 1, (Optr)VAR_index_0_0);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend181 = new_Send((Optr)PSend180, SMB_readFrom_, 1, (Optr)self);
    Array PThreadedCode177 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend178, (Optr)&t_send0, (Optr)PSend179, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_send1, (Optr)PSend180, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend181, (Optr)&t_method_return);
    Method PMethod175 = new_Method_with(PArray176, empty_Array, empty_Array, PThreadedCode177, 1, PSend181);
    
    MethodClosure MC_SMB_instVarAt_ = new_MethodClosure((Method)PMethod175, Object_Class);
    store_method(Object_Class, SMB_instVarAt_, MC_SMB_instVarAt_);
}


static void init_SMB_inspectLabelOn_() {
    Symbol SMB_inspectLabelOn_ = new_Symbol(L"inspectLabelOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray183 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend185 = new_Send((Optr)self, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode184 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend185, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod182 = new_Method_with(PArray183, empty_Array, empty_Array, PThreadedCode184, 2, PSend185, self);
    
    MethodClosure MC_SMB_inspectLabelOn_ = new_MethodClosure((Method)PMethod182, Object_Class);
    store_method(Object_Class, SMB_inspectLabelOn_, MC_SMB_inspectLabelOn_);
}


static void init_SMB_printString() {
    Symbol SMB_printString = new_Symbol(L"printString");
    Variable VAR_stream_1_0 = new_Variable_named(L"stream", 1);
    Array PArray189 = new_Array_with(1, (Optr)VAR_stream_1_0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend191 = new_Send((Optr)self, SMB_printOn_, 1, (Optr)VAR_stream_1_0);
    Array PThreadedCode190 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_stream_1_0, (Optr)&t_send1, (Optr)PSend191, (Optr)&t_method_return);
    Block PBlock188 = new_Block_with(PArray189, empty_Array, PThreadedCode190, 1, PSend191);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend192 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock188);
    Array PThreadedCode187 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock188, (Optr)&t_send1, (Optr)PSend192, (Optr)&t_method_return);
    Method PMethod186 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode187, 1, PSend192);
    
    MethodClosure MC_SMB_printString = new_MethodClosure((Method)PMethod186, Object_Class);
    store_method(Object_Class, SMB_printString, MC_SMB_printString);
}


static void init_SMB_ifNil_() {
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray194 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode195 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod193 = new_Method_with(PArray194, empty_Array, empty_Array, PThreadedCode195, 1, self);
    
    MethodClosure MC_SMB_ifNil_ = new_MethodClosure((Method)PMethod193, Object_Class);
    store_method(Object_Class, SMB_ifNil_, MC_SMB_ifNil_);
}


static void init_SMB_isNotNil() {
    Symbol SMB_isNotNil = new_Symbol(L"isNotNil");
    Array PThreadedCode197 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod196 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode197, 1, true_Const);
    
    MethodClosure MC_SMB_isNotNil = new_MethodClosure((Method)PMethod196, Object_Class);
    store_method(Object_Class, SMB_isNotNil, MC_SMB_isNotNil);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray199 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend201 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend202 = new_Send((Optr)PSend201, SMB_name, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend203 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend202);
    Array PThreadedCode200 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend201, (Optr)&t_send0, (Optr)PSend202, (Optr)&t_send1, (Optr)PSend203, (Optr)&t_method_return);
    Method PMethod198 = new_Method_with(PArray199, empty_Array, empty_Array, PThreadedCode200, 1, PSend203);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod198, Object_Class);
    store_method(Object_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_assert_() {
    Symbol SMB_assert_ = new_Symbol(L"assert:");
    Variable VAR_bool_0_0 = new_Variable_named(L"bool", 0);
    Array PArray205 = new_Array_with(1, (Optr)VAR_bool_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend210 = new_Send((Optr)PAssertionFailure_classReference, SMB_new, 0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend211 = new_Send((Optr)PSend210, SMB_signal, 0);
    Array PThreadedCode209 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PAssertionFailure_classReference, (Optr)&t_send0, (Optr)PSend210, (Optr)&t_send0, (Optr)PSend211, (Optr)&t_block_return);
    Block PBlock208 = new_Block_with(empty_Array, empty_Array, PThreadedCode209, 1, PSend211);
    // ifFalse:. 
    Send PSend207 = new_Send((Optr)VAR_bool_0_0, SMB_ifFalse_, 1, (Optr)PBlock208);
    Array PThreadedCode206 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_bool_0_0, (Optr)&t_send_ifFalse_, (Optr)PSend207, (Optr)PBlock208, (Optr)&t_method_return);
    Method PMethod204 = new_Method_with(PArray205, empty_Array, empty_Array, PThreadedCode206, 1, PSend207);
    
    MethodClosure MC_SMB_assert_ = new_MethodClosure((Method)PMethod204, Object_Class);
    store_method(Object_Class, SMB_assert_, MC_SMB_assert_);
}


static void init_SMB_hash() {
    Symbol SMB_hash = new_Symbol(L"hash");
    Symbol SMB_identityHash = new_Symbol(L"identityHash");
    // identityHash. 
    Send PSend214 = new_Send((Optr)self, SMB_identityHash, 0);
    Array PThreadedCode213 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend214, (Optr)&t_method_return);
    Method PMethod212 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode213, 1, PSend214);
    
    MethodClosure MC_SMB_hash = new_MethodClosure((Method)PMethod212, Object_Class);
    store_method(Object_Class, SMB_hash, MC_SMB_hash);
}


static void init_SMB_yourself() {
    Symbol SMB_yourself = new_Symbol(L"yourself");
    Array PThreadedCode216 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod215 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode216, 1, self);
    
    MethodClosure MC_SMB_yourself = new_MethodClosure((Method)PMethod215, Object_Class);
    store_method(Object_Class, SMB_yourself, MC_SMB_yourself);
}


static void init_SMB_isKindOf_() {
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    Variable VAR_aClass_0_0 = new_Variable_named(L"aClass", 0);
    Array PArray218 = new_Array_with(1, (Optr)VAR_aClass_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray221 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend223 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend224 = new_Send((Optr)PSend223, SMB__pequals_, 1, (Optr)VAR_aClass_0_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend228 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode227 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend228, (Optr)&t_block_return);
    Block PBlock226 = new_Block_with(empty_Array, empty_Array, PThreadedCode227, 1, PSend228);
    // class. 
    Send PSend231 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_inheritsFrom_ = new_Symbol(L"inheritsFrom:");
    // inheritsFrom:. 
    Send PSend232 = new_Send((Optr)PSend231, SMB_inheritsFrom_, 1, (Optr)VAR_aClass_0_0);
    // escape:. 
    Send PSend233 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend232);
    Array PThreadedCode230 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend231, (Optr)&t_push_variable, (Optr)VAR_aClass_0_0, (Optr)&t_send1, (Optr)PSend232, (Optr)&t_send1, (Optr)PSend233, (Optr)&t_block_return);
    Block PBlock229 = new_Block_with(empty_Array, empty_Array, PThreadedCode230, 1, PSend233);
    // ifTrue:ifFalse:. 
    Send PSend225 = new_Send((Optr)PSend224, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock226, (Optr)PBlock229);
    Array PThreadedCode222 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend223, (Optr)&t_push_variable, (Optr)VAR_aClass_0_0, (Optr)&t_send1, (Optr)PSend224, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend225, (Optr)PBlock226, (Optr)PBlock229, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock220 = new_Block_with(PArray221, empty_Array, PThreadedCode222, 2, PSend225, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend234 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock220);
    Array PThreadedCode219 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock220, (Optr)&t_send1, (Optr)PSend234, (Optr)&t_method_return);
    Method PMethod217 = new_Method_with(PArray218, empty_Array, empty_Array, PThreadedCode219, 1, PSend234);
    
    MethodClosure MC_SMB_isKindOf_ = new_MethodClosure((Method)PMethod217, Object_Class);
    store_method(Object_Class, SMB_isKindOf_, MC_SMB_isKindOf_);
}


static void init_SMB_should() {
    Symbol SMB_should = new_Symbol(L"should");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend237 = new_Send((Optr)PPexMatcher_classReference, SMB_new_, 1, (Optr)self);
    Array PThreadedCode236 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PPexMatcher_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend237, (Optr)&t_method_return);
    Method PMethod235 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode236, 1, PSend237);
    
    MethodClosure MC_SMB_should = new_MethodClosure((Method)PMethod235, Object_Class);
    store_method(Object_Class, SMB_should, MC_SMB_should);
}


static void init_SMB_at_put_() {
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray239 = new_Array_with(2, (Optr)VAR_index_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Type_minus_Object = new_Symbol(L"Type.Object");
    Annotation PAnnotation241 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_at_put_, (Optr)SMB_Type_minus_Object);
    Array PArray240 = new_Array_with(1, (Optr)PAnnotation241);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend243 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode242 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend243, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod238 = new_NativeMethod_with(PArray239, empty_Array, PArray240, PThreadedCode242, 2, PSend243, self);
    
    MethodClosure MC_SMB_at_put_ = new_MethodClosure((Method)PNativeMethod238, Object_Class);
    store_method(Object_Class, SMB_at_put_, MC_SMB_at_put_);
}


static void init_SMB_inspect() {
    Symbol SMB_inspect = new_Symbol(L"inspect");
    Symbol SMB_inspect_ = new_Symbol(L"inspect:");
    // inspect:. 
    Send PSend246 = new_Send((Optr)PStreamInspector_classReference, SMB_inspect_, 1, (Optr)self);
    Array PThreadedCode245 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PStreamInspector_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend246, (Optr)&t_method_return);
    Method PMethod244 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode245, 1, PSend246);
    
    MethodClosure MC_SMB_inspect = new_MethodClosure((Method)PMethod244, Object_Class);
    store_method(Object_Class, SMB_inspect, MC_SMB_inspect);
}


static void init_SMB_swapInvokeNative() {
    Symbol SMB_swapInvokeNative = new_Symbol(L"swapInvokeNative");
    Symbol SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Symbol SMB_swapInvokeNativeOn_message_ = new_Symbol(L"swapInvokeNativeOn:message:");
    Annotation PAnnotation249 = new_Annotation((Optr)SMB_pinocchioReflective_, 1, (Optr)SMB_swapInvokeNativeOn_message_);
    Array PArray248 = new_Array_with(1, (Optr)PAnnotation249);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend251 = new_Send((Optr)PThread_classReference, SMB_current, 0);
    Symbol SMB_nextInterpreter_ = new_Symbol(L"nextInterpreter:");
    // nextInterpreter:. 
    Send PSend252 = new_Send((Optr)PSend251, SMB_nextInterpreter_, 1, (Optr)self);
    Array PThreadedCode250 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PThread_classReference, (Optr)&t_send0, (Optr)PSend251, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend252, (Optr)&t_zap, (Optr)&t_method_return_self);
    ReflectionMethod PReflectionMethod247 = new_ReflectionMethod_with(empty_Array, empty_Array, PArray248, PThreadedCode250, 2, PSend252, self);
    
    MethodClosure MC_SMB_swapInvokeNative = new_MethodClosure((Method)PReflectionMethod247, Object_Class);
    store_method(Object_Class, SMB_swapInvokeNative, MC_SMB_swapInvokeNative);
}


static void init_SMB_doesNotUnderstand_() {
    Symbol SMB_doesNotUnderstand_ = new_Symbol(L"doesNotUnderstand:");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Array PArray254 = new_Array_with(1, (Optr)VAR_message_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray257 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend259 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)VAR_message_0_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend260 = new_Send((Optr)VAR__receiver__1_0, SMB_receiver_, 1, (Optr)self);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend261 = new_Send((Optr)VAR__receiver__1_0, SMB_signal, 0);
    Array PThreadedCode258 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_send1, (Optr)PSend259, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend260, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend261, (Optr)&t_method_return);
    Block PBlock256 = new_Block_with(PArray257, empty_Array, PThreadedCode258, 3, PSend259, PSend260, PSend261);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend262 = new_Send((Optr)PDoesNotUnderstand_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend263 = new_Send((Optr)PBlock256, SMB_value_, 1, (Optr)PSend262);
    Array PThreadedCode255 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock256, (Optr)&t_push_class_reference, (Optr)PDoesNotUnderstand_classReference, (Optr)&t_send0, (Optr)PSend262, (Optr)&t_send1, (Optr)PSend263, (Optr)&t_method_return);
    Method PMethod253 = new_Method_with(PArray254, empty_Array, empty_Array, PThreadedCode255, 1, PSend263);
    
    MethodClosure MC_SMB_doesNotUnderstand_ = new_MethodClosure((Method)PMethod253, Object_Class);
    store_method(Object_Class, SMB_doesNotUnderstand_, MC_SMB_doesNotUnderstand_);
}


static void init_SMB_instVarAt_put_() {
    Symbol SMB_instVarAt_put_ = new_Symbol(L"instVarAt:put:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray265 = new_Array_with(2, (Optr)VAR_index_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend267 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_layout = new_Symbol(L"layout");
    // layout. 
    Send PSend268 = new_Send((Optr)PSend267, SMB_layout, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend269 = new_Send((Optr)PSend268, SMB_at_, 1, (Optr)VAR_index_0_0);
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    // assign:on:. 
    Send PSend270 = new_Send((Optr)PSend269, SMB_assign_on_, 2, (Optr)VAR_value_0_1, (Optr)self);
    Array PThreadedCode266 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend267, (Optr)&t_send0, (Optr)PSend268, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_send1, (Optr)PSend269, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend270, (Optr)&t_method_return);
    Method PMethod264 = new_Method_with(PArray265, empty_Array, empty_Array, PThreadedCode266, 1, PSend270);
    
    MethodClosure MC_SMB_instVarAt_put_ = new_MethodClosure((Method)PMethod264, Object_Class);
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
    init_SMB_pinocchioPrimitiveFailed();
    init_SMB_initialize();
    init_SMB_asAllocationAlias_();
    init_SMB_isString();
    init_SMB_value();
    init_SMB__at_();
    init_SMB_class();
    init_SMB_size();
    init_SMB_ifNil_ifNotNil_();
    init_SMB_ifNotNil_();
    init_SMB_ifNotNilDo_();
    init_SMB__notPEquals_();
    init_SMB_asString();
    init_SMB_perform_withArguments_();
    init_SMB_error_();
    init_SMB_inspectChildrenOn_();
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
    init_SMB_inspectNameOn_();
    init_SMB_isCharacter();
    init_SMB_instVarAt_();
    init_SMB_inspectLabelOn_();
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
    init_SMB_swapInvokeNative();
    init_SMB_doesNotUnderstand_();
    init_SMB_instVarAt_put_();
    
}