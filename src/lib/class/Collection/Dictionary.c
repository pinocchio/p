#include <lib/class/Collection/Dictionary.h>


Optr layout_Collection_Dictionary_Class_class;
Optr layout_Collection_Dictionary;


static void init_SMB_grow() {
    Symbol SMB_grow = new_Symbol(L"grow");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Collection_minus_Dictionary = new_Symbol(L"Collection.Dictionary");
    Annotation PAnnotation3067 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_grow, (Optr)SMB_Collection_minus_Dictionary);
    Array PArray3066 = new_Array_with(1, (Optr)PAnnotation3067);
    Super PSuper3069 = new_Super(SMB_grow, 0);
    Array PThreadedCode3068 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper3069, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3065 = new_NativeMethod_with(empty_Array, empty_Array, PArray3066, PThreadedCode3068, 2, PSuper3069, self);
    
    MethodClosure MC_SMB_grow = new_MethodClosure((Method)PNativeMethod3065, Dictionary_Class);
    store_method(Dictionary_Class, SMB_grow, MC_SMB_grow);
}


static void init_SMB_addAll_() {
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    Variable VAR_aDictionary_0_0 = new_Variable_named(L"aDictionary", 0);
    Array PArray3071 = new_Array_with(1, (Optr)VAR_aDictionary_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3074 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend3076 = new_Send((Optr)VAR_aDictionary_0_0, SMB__pequals_, 1, (Optr)self);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3080 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode3079 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend3080, (Optr)&t_block_return);
    Block PBlock3078 = new_Block_with(empty_Array, empty_Array, PThreadedCode3079, 1, PSend3080);
    // ifTrue:. 
    Send PSend3077 = new_Send((Optr)PSend3076, SMB_ifTrue_, 1, (Optr)PBlock3078);
    Variable VAR_key_2_0 = new_Variable_named(L"key", 2);
    Variable VAR_value_2_1 = new_Variable_named(L"value", 2);
    Array PArray3082 = new_Array_with(2, (Optr)VAR_key_2_0, (Optr)VAR_value_2_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend3084 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)VAR_key_2_0, (Optr)VAR_value_2_1);
    Array PThreadedCode3083 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_2_0, (Optr)&t_push_variable, (Optr)VAR_value_2_1, (Optr)&t_send2, (Optr)PSend3084, (Optr)&t_method_return);
    Block PBlock3081 = new_Block_with(PArray3082, empty_Array, PThreadedCode3083, 1, PSend3084);
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    // keysAndValuesDo:. 
    Send PSend3085 = new_Send((Optr)VAR_aDictionary_0_0, SMB_keysAndValuesDo_, 1, (Optr)PBlock3081);
    Array PThreadedCode3075 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_aDictionary_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend3076, (Optr)&t_send_ifTrue_, (Optr)PSend3077, (Optr)PBlock3078, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aDictionary_0_0, (Optr)&t_push_closure, (Optr)PBlock3081, (Optr)&t_send1, (Optr)PSend3085, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aDictionary_0_0, (Optr)&t_method_return);
    Block PBlock3073 = new_Block_with(PArray3074, empty_Array, PThreadedCode3075, 3, PSend3077, PSend3085, VAR_aDictionary_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3086 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3073);
    Array PThreadedCode3072 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3073, (Optr)&t_send1, (Optr)PSend3086, (Optr)&t_method_return);
    Method PMethod3070 = new_Method_with(PArray3071, empty_Array, empty_Array, PThreadedCode3072, 1, PSend3086);
    
    MethodClosure MC_SMB_addAll_ = new_MethodClosure((Method)PMethod3070, Dictionary_Class);
    store_method(Dictionary_Class, SMB_addAll_, MC_SMB_addAll_);
}


static void init_SMB_inspectChildrenOn_() {
    Symbol SMB_inspectChildrenOn_ = new_Symbol(L"inspectChildrenOn:");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
    Array PArray3088 = new_Array_with(1, (Optr)VAR_inspector_0_0);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray3091 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Array PThreadedCode3094 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_block_return);
    Block PBlock3093 = new_Block_with(empty_Array, empty_Array, PThreadedCode3094, 1, VAR_value_1_1);
    Symbol SMB_child_value_ = new_Symbol(L"child:value:");
    // child:value:. 
    Send PSend3095 = new_Send((Optr)VAR_inspector_0_0, SMB_child_value_, 2, (Optr)VAR_key_1_0, (Optr)PBlock3093);
    Array PThreadedCode3092 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_closure, (Optr)PBlock3093, (Optr)&t_send2, (Optr)PSend3095, (Optr)&t_method_return);
    Block PBlock3090 = new_Block_with(PArray3091, empty_Array, PThreadedCode3092, 1, PSend3095);
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    // keysAndValuesDo:. 
    Send PSend3096 = new_Send((Optr)self, SMB_keysAndValuesDo_, 1, (Optr)PBlock3090);
    Array PThreadedCode3089 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock3090, (Optr)&t_send1, (Optr)PSend3096, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3087 = new_Method_with(PArray3088, empty_Array, empty_Array, PThreadedCode3089, 2, PSend3096, self);
    
    MethodClosure MC_SMB_inspectChildrenOn_ = new_MethodClosure((Method)PMethod3087, Dictionary_Class);
    store_method(Dictionary_Class, SMB_inspectChildrenOn_, MC_SMB_inspectChildrenOn_);
}


static void init_SMB_removeKey_ifAbsent_() {
    Symbol SMB_removeKey_ifAbsent_ = new_Symbol(L"removeKey:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray3098 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_value_0_2 = new_Variable_named(L"value", 0);
    Variable VAR_bucket_0_3 = new_Variable_named(L"bucket", 0);
    Array PArray3099 = new_Array_with(2, (Optr)VAR_value_0_2, (Optr)VAR_bucket_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3102 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend3109 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend3112 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3113 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3112);
    Array PThreadedCode3111 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend3112, (Optr)&t_send1, (Optr)PSend3113, (Optr)&t_block_return);
    Block PBlock3110 = new_Block_with(empty_Array, empty_Array, PThreadedCode3111, 1, PSend3113);
    // remove:ifAbsent:. 
    Send PSend3108 = new_Send((Optr)PSend3109, SMB_remove_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock3110);
    Assign PAssign3107 = new_Assign((Optr)VAR_value_0_2, (Optr)PSend3108);
    Symbol SMB_checkShrink = new_Symbol(L"checkShrink");
    // checkShrink. 
    Send PSend3114 = new_Send((Optr)self, SMB_checkShrink, 0);
    // escape:. 
    Send PSend3115 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_2);
    Array PThreadedCode3106 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign3107, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3109, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock3110, (Optr)&t_send2, (Optr)PSend3108, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3114, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_send1, (Optr)PSend3115, (Optr)&t_block_return);
    Block PBlock3105 = new_Block_with(empty_Array, empty_Array, PThreadedCode3106, 3, PAssign3107, PSend3114, PSend3115);
    // ifTrue:. 
    Send PSend3104 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock3105);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend3120 = new_Send((Optr)VAR_key_0_0, SMB_hash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3121 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend3119 = new_Send((Optr)PSend3120, SMB__modulo_, 1, (Optr)PSend3121);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3118 = new_Send((Optr)PSend3119, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend3117 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)PSend3118);
    Assign PAssign3116 = new_Assign((Optr)VAR_bucket_0_3, (Optr)PSend3117);
    // value. 
    Send PSend3124 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    // escape:. 
    Send PSend3125 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3124);
    Array PThreadedCode3123 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend3124, (Optr)&t_send1, (Optr)PSend3125, (Optr)&t_block_return);
    Block PBlock3122 = new_Block_with(empty_Array, empty_Array, PThreadedCode3123, 1, PSend3125);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend3126 = new_Send((Optr)VAR_bucket_0_3, SMB_ifNil_, 1, (Optr)PBlock3122);
    // value. 
    Send PSend3131 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    // escape:. 
    Send PSend3132 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3131);
    Array PThreadedCode3130 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend3131, (Optr)&t_send1, (Optr)PSend3132, (Optr)&t_block_return);
    Block PBlock3129 = new_Block_with(empty_Array, empty_Array, PThreadedCode3130, 1, PSend3132);
    // remove:ifAbsent:. 
    Send PSend3128 = new_Send((Optr)VAR_bucket_0_3, SMB_remove_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock3129);
    Assign PAssign3127 = new_Assign((Optr)VAR_value_0_2, (Optr)PSend3128);
    // checkShrink. 
    Send PSend3133 = new_Send((Optr)self, SMB_checkShrink, 0);
    Array PThreadedCode3103 = instantiate_Array_with(ThreadedCode_Class, 0, 53, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend3104, (Optr)PBlock3105, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3116, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend3120, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend3121, (Optr)&t_send1, (Optr)PSend3119, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3118, (Optr)&t_send1, (Optr)PSend3117, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_3, (Optr)&t_push_closure, (Optr)PBlock3122, (Optr)&t_send1, (Optr)PSend3126, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3127, (Optr)&t_push_variable, (Optr)VAR_bucket_0_3, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock3129, (Optr)&t_send2, (Optr)PSend3128, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3133, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_method_return);
    Block PBlock3101 = new_Block_with(PArray3102, empty_Array, PThreadedCode3103, 6, PSend3104, PAssign3116, PSend3126, PAssign3127, PSend3133, VAR_value_0_2);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3134 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3101);
    Array PThreadedCode3100 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3101, (Optr)&t_send1, (Optr)PSend3134, (Optr)&t_method_return);
    Method PMethod3097 = new_Method_with(PArray3098, PArray3099, empty_Array, PThreadedCode3100, 1, PSend3134);
    
    MethodClosure MC_SMB_removeKey_ifAbsent_ = new_MethodClosure((Method)PMethod3097, Dictionary_Class);
    store_method(Dictionary_Class, SMB_removeKey_ifAbsent_, MC_SMB_removeKey_ifAbsent_);
}


static void init_SMB_at_ifPresent_() {
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray3136 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3139 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3143 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode3142 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend3143, (Optr)&t_block_return);
    Block PBlock3141 = new_Block_with(empty_Array, empty_Array, PThreadedCode3142, 1, PSend3143);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend3144 = new_Send((Optr)self, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock3141);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend3145 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)PSend3144);
    Array PThreadedCode3140 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock3141, (Optr)&t_send2, (Optr)PSend3144, (Optr)&t_send1, (Optr)PSend3145, (Optr)&t_method_return);
    Block PBlock3138 = new_Block_with(PArray3139, empty_Array, PThreadedCode3140, 1, PSend3145);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3146 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3138);
    Array PThreadedCode3137 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3138, (Optr)&t_send1, (Optr)PSend3146, (Optr)&t_method_return);
    Method PMethod3135 = new_Method_with(PArray3136, empty_Array, empty_Array, PThreadedCode3137, 1, PSend3146);
    
    MethodClosure MC_SMB_at_ifPresent_ = new_MethodClosure((Method)PMethod3135, Dictionary_Class);
    store_method(Dictionary_Class, SMB_at_ifPresent_, MC_SMB_at_ifPresent_);
}


static void init_SMB_at_() {
    Symbol SMB_at_ = new_Symbol(L"at:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray3148 = new_Array_with(1, (Optr)VAR_key_0_0);
    Symbol SMB_errorKeyNotFound_ = new_Symbol(L"errorKeyNotFound:");
    // errorKeyNotFound:. 
    Send PSend3152 = new_Send((Optr)self, SMB_errorKeyNotFound_, 1, (Optr)VAR_key_0_0);
    Array PThreadedCode3151 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send1, (Optr)PSend3152, (Optr)&t_block_return);
    Block PBlock3150 = new_Block_with(empty_Array, empty_Array, PThreadedCode3151, 1, PSend3152);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend3153 = new_Send((Optr)self, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock3150);
    Array PThreadedCode3149 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock3150, (Optr)&t_send2, (Optr)PSend3153, (Optr)&t_method_return);
    Method PMethod3147 = new_Method_with(PArray3148, empty_Array, empty_Array, PThreadedCode3149, 1, PSend3153);
    
    MethodClosure MC_SMB_at_ = new_MethodClosure((Method)PMethod3147, Dictionary_Class);
    store_method(Dictionary_Class, SMB_at_, MC_SMB_at_);
}


static void init_SMB_at_ifAbsent_() {
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray3155 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Collection_minus_Dictionary = new_Symbol(L"Collection.Dictionary");
    Annotation PAnnotation3157 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_at_ifAbsent_, (Optr)SMB_Collection_minus_Dictionary);
    Array PArray3156 = new_Array_with(1, (Optr)PAnnotation3157);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3160 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend3165 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    // at:ifAbsent:. 
    Send PSend3166 = new_Send((Optr)PSend3165, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3167 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3166);
    Array PThreadedCode3164 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3165, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send2, (Optr)PSend3166, (Optr)&t_send1, (Optr)PSend3167, (Optr)&t_block_return);
    Block PBlock3163 = new_Block_with(empty_Array, empty_Array, PThreadedCode3164, 1, PSend3167);
    // ifTrue:. 
    Send PSend3162 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock3163);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend3168 = new_Send((Optr)VAR_key_0_0, SMB_hash, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3169 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    // \\. 
    Send PSend3170 = new_Send((Optr)PSend3168, SMB__modulo_, 1, (Optr)PSend3169);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3171 = new_Send((Optr)PSend3170, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend3172 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)PSend3171);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend3175 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode3174 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend3175, (Optr)&t_block_return);
    Block PBlock3173 = new_Block_with(empty_Array, empty_Array, PThreadedCode3174, 1, PSend3175);
    Variable VAR_bucket_2_0 = new_Variable_named(L"bucket", 2);
    Array PArray3177 = new_Array_with(1, (Optr)VAR_bucket_2_0);
    // at:ifAbsent:. 
    Send PSend3179 = new_Send((Optr)VAR_bucket_2_0, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Array PThreadedCode3178 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_bucket_2_0, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send2, (Optr)PSend3179, (Optr)&t_method_return);
    Block PBlock3176 = new_Block_with(PArray3177, empty_Array, PThreadedCode3178, 1, PSend3179);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend3180 = new_Send((Optr)PSend3172, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock3173, (Optr)PBlock3176);
    Array PThreadedCode3161 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend3162, (Optr)PBlock3163, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend3168, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend3169, (Optr)&t_send1, (Optr)PSend3170, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3171, (Optr)&t_send1, (Optr)PSend3172, (Optr)&t_push_closure, (Optr)PBlock3173, (Optr)&t_push_closure, (Optr)PBlock3176, (Optr)&t_send2, (Optr)PSend3180, (Optr)&t_method_return);
    Block PBlock3159 = new_Block_with(PArray3160, empty_Array, PThreadedCode3161, 2, PSend3162, PSend3180);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3181 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3159);
    Array PThreadedCode3158 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3159, (Optr)&t_send1, (Optr)PSend3181, (Optr)&t_method_return);
    NativeMethod PNativeMethod3154 = new_NativeMethod_with(PArray3155, empty_Array, PArray3156, PThreadedCode3158, 1, PSend3181);
    
    MethodClosure MC_SMB_at_ifAbsent_ = new_MethodClosure((Method)PNativeMethod3154, Dictionary_Class);
    store_method(Dictionary_Class, SMB_at_ifAbsent_, MC_SMB_at_ifAbsent_);
}


static void init_SMB_valuesDo_() {
    Symbol SMB_valuesDo_ = new_Symbol(L"valuesDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray3183 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_bucket_1_0 = new_Variable_named(L"bucket", 1);
    Array PArray3186 = new_Array_with(1, (Optr)VAR_bucket_1_0);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend3188 = new_Send((Optr)VAR_bucket_1_0, SMB_do_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode3187 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_bucket_1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend3188, (Optr)&t_method_return);
    Block PBlock3185 = new_Block_with(PArray3186, empty_Array, PThreadedCode3187, 1, PSend3188);
    Symbol SMB_bucketsDo_ = new_Symbol(L"bucketsDo:");
    // bucketsDo:. 
    Send PSend3189 = new_Send((Optr)self, SMB_bucketsDo_, 1, (Optr)PBlock3185);
    Array PThreadedCode3184 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock3185, (Optr)&t_send1, (Optr)PSend3189, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3182 = new_Method_with(PArray3183, empty_Array, empty_Array, PThreadedCode3184, 2, PSend3189, self);
    
    MethodClosure MC_SMB_valuesDo_ = new_MethodClosure((Method)PMethod3182, Dictionary_Class);
    store_method(Dictionary_Class, SMB_valuesDo_, MC_SMB_valuesDo_);
}


static void init_SMB_includesKey_() {
    Symbol SMB_includesKey_ = new_Symbol(L"includesKey:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray3191 = new_Array_with(1, (Optr)VAR_key_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Collection_minus_Dictionary = new_Symbol(L"Collection.Dictionary");
    Annotation PAnnotation3193 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_includesKey_, (Optr)SMB_Collection_minus_Dictionary);
    Array PArray3192 = new_Array_with(1, (Optr)PAnnotation3193);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3196 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend3201 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    // includesKey:. 
    Send PSend3202 = new_Send((Optr)PSend3201, SMB_includesKey_, 1, (Optr)VAR_key_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3203 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3202);
    Array PThreadedCode3200 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3201, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send1, (Optr)PSend3202, (Optr)&t_send1, (Optr)PSend3203, (Optr)&t_block_return);
    Block PBlock3199 = new_Block_with(empty_Array, empty_Array, PThreadedCode3200, 1, PSend3203);
    // ifTrue:. 
    Send PSend3198 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock3199);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend3204 = new_Send((Optr)VAR_key_0_0, SMB_hash, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3205 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    // \\. 
    Send PSend3206 = new_Send((Optr)PSend3204, SMB__modulo_, 1, (Optr)PSend3205);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3207 = new_Send((Optr)PSend3206, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend3208 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)PSend3207);
    Array PThreadedCode3210 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock3209 = new_Block_with(empty_Array, empty_Array, PThreadedCode3210, 1, false_Const);
    Variable VAR_bucket_2_0 = new_Variable_named(L"bucket", 2);
    Array PArray3212 = new_Array_with(1, (Optr)VAR_bucket_2_0);
    // includesKey:. 
    Send PSend3214 = new_Send((Optr)VAR_bucket_2_0, SMB_includesKey_, 1, (Optr)VAR_key_0_0);
    Array PThreadedCode3213 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_bucket_2_0, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send1, (Optr)PSend3214, (Optr)&t_method_return);
    Block PBlock3211 = new_Block_with(PArray3212, empty_Array, PThreadedCode3213, 1, PSend3214);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend3215 = new_Send((Optr)PSend3208, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock3209, (Optr)PBlock3211);
    Array PThreadedCode3197 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend3198, (Optr)PBlock3199, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend3204, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend3205, (Optr)&t_send1, (Optr)PSend3206, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3207, (Optr)&t_send1, (Optr)PSend3208, (Optr)&t_push_closure, (Optr)PBlock3209, (Optr)&t_push_closure, (Optr)PBlock3211, (Optr)&t_send2, (Optr)PSend3215, (Optr)&t_method_return);
    Block PBlock3195 = new_Block_with(PArray3196, empty_Array, PThreadedCode3197, 2, PSend3198, PSend3215);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3216 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3195);
    Array PThreadedCode3194 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3195, (Optr)&t_send1, (Optr)PSend3216, (Optr)&t_method_return);
    NativeMethod PNativeMethod3190 = new_NativeMethod_with(PArray3191, empty_Array, PArray3192, PThreadedCode3194, 1, PSend3216);
    
    MethodClosure MC_SMB_includesKey_ = new_MethodClosure((Method)PNativeMethod3190, Dictionary_Class);
    store_method(Dictionary_Class, SMB_includesKey_, MC_SMB_includesKey_);
}


static void init_SMB_reAddBucket_at_() {
    Symbol SMB_reAddBucket_at_ = new_Symbol(L"reAddBucket:at:");
    Variable VAR_bucket_0_0 = new_Variable_named(L"bucket", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray3218 = new_Array_with(2, (Optr)VAR_bucket_0_0, (Optr)VAR_index_0_1);
    Variable VAR_c_0_2 = new_Variable_named(L"c", 0);
    Variable VAR_key_0_3 = new_Variable_named(L"key", 0);
    Variable VAR_bucketIndex_0_4 = new_Variable_named(L"bucketIndex", 0);
    Array PArray3219 = new_Array_with(3, (Optr)VAR_c_0_2, (Optr)VAR_key_0_3, (Optr)VAR_bucketIndex_0_4);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign3221 = new_Assign((Optr)VAR_c_0_2, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend3222 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_put_, 2, (Optr)VAR_index_0_1, (Optr)VAR_bucket_0_0);
    Symbol SMB_bucketSize = new_Symbol(L"bucketSize");
    // bucketSize. 
    Send PSend3225 = new_Send((Optr)VAR_bucket_0_0, SMB_bucketSize, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend3226 = new_Send((Optr)VAR_c_0_2, SMB__lt__equals_, 1, (Optr)PSend3225);
    Array PThreadedCode3224 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_send0, (Optr)PSend3225, (Optr)&t_send1, (Optr)PSend3226, (Optr)&t_block_return);
    Block PBlock3223 = new_Block_with(empty_Array, empty_Array, PThreadedCode3224, 1, PSend3226);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend3230 = new_Send((Optr)VAR_bucket_0_0, SMB_at_, 1, (Optr)VAR_c_0_2);
    Assign PAssign3229 = new_Assign((Optr)VAR_key_0_3, (Optr)PSend3230);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend3234 = new_Send((Optr)VAR_key_0_3, SMB_hash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3235 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend3233 = new_Send((Optr)PSend3234, SMB__modulo_, 1, (Optr)PSend3235);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3232 = new_Send((Optr)PSend3233, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign3231 = new_Assign((Optr)VAR_bucketIndex_0_4, (Optr)PSend3232);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend3236 = new_Send((Optr)VAR_bucketIndex_0_4, SMB__equals_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // +. 
    Send PSend3241 = new_Send((Optr)VAR_c_0_2, SMB__plus_, 1, (Optr)int_2_Const);
    Assign PAssign3240 = new_Assign((Optr)VAR_c_0_2, (Optr)PSend3241);
    Array PThreadedCode3239 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign3240, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend3241, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock3238 = new_Block_with(empty_Array, empty_Array, PThreadedCode3239, 1, PAssign3240);
    Symbol SMB_bucketWithRoomAt_ = new_Symbol(L"bucketWithRoomAt:");
    // bucketWithRoomAt:. 
    Send PSend3244 = new_Send((Optr)self, SMB_bucketWithRoomAt_, 1, (Optr)VAR_bucketIndex_0_4);
    // +. 
    Send PSend3245 = new_Send((Optr)VAR_c_0_2, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend3246 = new_Send((Optr)VAR_bucket_0_0, SMB_at_, 1, (Optr)PSend3245);
    Symbol SMB_newKey_value_ = new_Symbol(L"newKey:value:");
    // newKey:value:. 
    Send PSend3247 = new_Send((Optr)PSend3244, SMB_newKey_value_, 2, (Optr)VAR_key_0_3, (Optr)PSend3246);
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    // removeAt:. 
    Send PSend3248 = new_Send((Optr)VAR_bucket_0_0, SMB_removeAt_, 1, (Optr)VAR_c_0_2);
    Array PThreadedCode3243 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_4, (Optr)&t_send1, (Optr)PSend3244, (Optr)&t_push_variable, (Optr)VAR_key_0_3, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3245, (Optr)&t_send1, (Optr)PSend3246, (Optr)&t_send2, (Optr)PSend3247, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_send1, (Optr)PSend3248, (Optr)&t_block_return);
    Block PBlock3242 = new_Block_with(empty_Array, empty_Array, PThreadedCode3243, 2, PSend3247, PSend3248);
    // ifTrue:ifFalse:. 
    Send PSend3237 = new_Send((Optr)PSend3236, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock3238, (Optr)PBlock3242);
    Array PThreadedCode3228 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign3229, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_send1, (Optr)PSend3230, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3231, (Optr)&t_push_variable, (Optr)VAR_key_0_3, (Optr)&t_send0, (Optr)PSend3234, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend3235, (Optr)&t_send1, (Optr)PSend3233, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3232, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_4, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend3236, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend3237, (Optr)PBlock3238, (Optr)PBlock3242, (Optr)&t_block_return);
    Block PBlock3227 = new_Block_with(empty_Array, empty_Array, PThreadedCode3228, 3, PAssign3229, PAssign3231, PSend3237);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend3249 = new_Send((Optr)PBlock3223, SMB_whileTrue_, 1, (Optr)PBlock3227);
    Array PThreadedCode3220 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign3221, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_send2, (Optr)PSend3222, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock3223, (Optr)&t_push_closure, (Optr)PBlock3227, (Optr)&t_send1, (Optr)PSend3249, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3217 = new_Method_with(PArray3218, PArray3219, empty_Array, PThreadedCode3220, 4, PAssign3221, PSend3222, PSend3249, self);
    
    MethodClosure MC_SMB_reAddBucket_at_ = new_MethodClosure((Method)PMethod3217, Dictionary_Class);
    store_method(Dictionary_Class, SMB_reAddBucket_at_, MC_SMB_reAddBucket_at_);
}


static void init_SMB_at_ifAbsentPut_() {
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray3251 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend3255 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend3256 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)VAR_key_0_0, (Optr)PSend3255);
    Array PThreadedCode3254 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend3255, (Optr)&t_send2, (Optr)PSend3256, (Optr)&t_block_return);
    Block PBlock3253 = new_Block_with(empty_Array, empty_Array, PThreadedCode3254, 1, PSend3256);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend3257 = new_Send((Optr)self, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock3253);
    Array PThreadedCode3252 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock3253, (Optr)&t_send2, (Optr)PSend3257, (Optr)&t_method_return);
    Method PMethod3250 = new_Method_with(PArray3251, empty_Array, empty_Array, PThreadedCode3252, 1, PSend3257);
    
    MethodClosure MC_SMB_at_ifAbsentPut_ = new_MethodClosure((Method)PMethod3250, Dictionary_Class);
    store_method(Dictionary_Class, SMB_at_ifAbsentPut_, MC_SMB_at_ifAbsentPut_);
}


static void init_SMB_inFirstBucketAt_put_() {
    Symbol SMB_inFirstBucketAt_put_ = new_Symbol(L"inFirstBucketAt:put:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_anObject_0_1 = new_Variable_named(L"anObject", 0);
    Array PArray3259 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend3261 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    Symbol SMB_assign_to_ = new_Symbol(L"assign:to:");
    // assign:to:. 
    Send PSend3262 = new_Send((Optr)PSend3261, SMB_assign_to_, 2, (Optr)VAR_key_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode3265 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_block_return);
    Block PBlock3264 = new_Block_with(empty_Array, empty_Array, PThreadedCode3265, 1, VAR_anObject_0_1);
    Symbol SMB_inFirstBucketAtNew_put_ = new_Symbol(L"inFirstBucketAtNew:put:");
    // inFirstBucketAtNew:put:. 
    Send PSend3268 = new_Send((Optr)self, SMB_inFirstBucketAtNew_put_, 2, (Optr)VAR_key_0_0, (Optr)VAR_anObject_0_1);
    Array PThreadedCode3267 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend3268, (Optr)&t_block_return);
    Block PBlock3266 = new_Block_with(empty_Array, empty_Array, PThreadedCode3267, 1, PSend3268);
    // ifTrue:ifFalse:. 
    Send PSend3263 = new_Send((Optr)PSend3262, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock3264, (Optr)PBlock3266);
    Array PThreadedCode3260 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3261, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend3262, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend3263, (Optr)PBlock3264, (Optr)PBlock3266, (Optr)&t_method_return);
    Method PMethod3258 = new_Method_with(PArray3259, empty_Array, empty_Array, PThreadedCode3260, 1, PSend3263);
    
    MethodClosure MC_SMB_inFirstBucketAt_put_ = new_MethodClosure((Method)PMethod3258, Dictionary_Class);
    store_method(Dictionary_Class, SMB_inFirstBucketAt_put_, MC_SMB_inFirstBucketAt_put_);
}


static void init_SMB_errorKeyNotFound_() {
    Symbol SMB_errorKeyNotFound_ = new_Symbol(L"errorKeyNotFound:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Array PArray3270 = new_Array_with(1, (Optr)VAR_aKey_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray3273 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_key_ = new_Symbol(L"key:");
    // key:. 
    Send PSend3275 = new_Send((Optr)VAR__receiver__1_0, SMB_key_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_dictionary_ = new_Symbol(L"dictionary:");
    // dictionary:. 
    Send PSend3276 = new_Send((Optr)VAR__receiver__1_0, SMB_dictionary_, 1, (Optr)self);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend3277 = new_Send((Optr)VAR__receiver__1_0, SMB_signal, 0);
    Array PThreadedCode3274 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend3275, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend3276, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend3277, (Optr)&t_method_return);
    Block PBlock3272 = new_Block_with(PArray3273, empty_Array, PThreadedCode3274, 3, PSend3275, PSend3276, PSend3277);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend3278 = new_Send((Optr)PKeyNotFound_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend3279 = new_Send((Optr)PBlock3272, SMB_value_, 1, (Optr)PSend3278);
    Array PThreadedCode3271 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock3272, (Optr)&t_push_class_reference, (Optr)PKeyNotFound_classReference, (Optr)&t_send0, (Optr)PSend3278, (Optr)&t_send1, (Optr)PSend3279, (Optr)&t_method_return);
    Method PMethod3269 = new_Method_with(PArray3270, empty_Array, empty_Array, PThreadedCode3271, 1, PSend3279);
    
    MethodClosure MC_SMB_errorKeyNotFound_ = new_MethodClosure((Method)PMethod3269, Dictionary_Class);
    store_method(Dictionary_Class, SMB_errorKeyNotFound_, MC_SMB_errorKeyNotFound_);
}


static void init_SMB_values() {
    Symbol SMB_values = new_Symbol(L"values");
    Variable VAR_values_0_0 = new_Variable_named(L"values", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray3281 = new_Array_with(2, (Optr)VAR_values_0_0, (Optr)VAR_index_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend3284 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)slot_Collection_HashedCollection_size);
    Assign PAssign3283 = new_Assign((Optr)VAR_values_0_0, (Optr)PSend3284);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign3285 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Variable VAR_value_1_0 = new_Variable_named(L"value", 1);
    Array PArray3287 = new_Array_with(1, (Optr)VAR_value_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend3290 = new_Send((Optr)VAR_index_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign3289 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend3290);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend3291 = new_Send((Optr)VAR_values_0_0, SMB_at_put_, 2, (Optr)PAssign3289, (Optr)VAR_value_1_0);
    Array PThreadedCode3288 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_push1, (Optr)PAssign3289, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3290, (Optr)&t_assign, (Optr)&t_push_variable, (Optr)VAR_value_1_0, (Optr)&t_send2, (Optr)PSend3291, (Optr)&t_method_return);
    Block PBlock3286 = new_Block_with(PArray3287, empty_Array, PThreadedCode3288, 1, PSend3291);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend3292 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock3286);
    Array PThreadedCode3282 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign3283, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_size, (Optr)&t_send1, (Optr)PSend3284, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3285, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock3286, (Optr)&t_send1, (Optr)PSend3292, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_method_return);
    Method PMethod3280 = new_Method_with(empty_Array, PArray3281, empty_Array, PThreadedCode3282, 4, PAssign3283, PAssign3285, PSend3292, VAR_values_0_0);
    
    MethodClosure MC_SMB_values = new_MethodClosure((Method)PMethod3280, Dictionary_Class);
    store_method(Dictionary_Class, SMB_values, MC_SMB_values);
}


static void init_SMB_keys() {
    Symbol SMB_keys = new_Symbol(L"keys");
    Variable VAR_keys_0_0 = new_Variable_named(L"keys", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray3294 = new_Array_with(2, (Optr)VAR_keys_0_0, (Optr)VAR_index_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend3297 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)slot_Collection_HashedCollection_size);
    Assign PAssign3296 = new_Assign((Optr)VAR_keys_0_0, (Optr)PSend3297);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign3298 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Array PArray3300 = new_Array_with(1, (Optr)VAR_key_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend3303 = new_Send((Optr)VAR_index_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign3302 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend3303);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend3304 = new_Send((Optr)VAR_keys_0_0, SMB_at_put_, 2, (Optr)PAssign3302, (Optr)VAR_key_1_0);
    Array PThreadedCode3301 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_keys_0_0, (Optr)&t_push1, (Optr)PAssign3302, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3303, (Optr)&t_assign, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_send2, (Optr)PSend3304, (Optr)&t_method_return);
    Block PBlock3299 = new_Block_with(PArray3300, empty_Array, PThreadedCode3301, 1, PSend3304);
    Symbol SMB_keysDo_ = new_Symbol(L"keysDo:");
    // keysDo:. 
    Send PSend3305 = new_Send((Optr)self, SMB_keysDo_, 1, (Optr)PBlock3299);
    Array PThreadedCode3295 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign3296, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_size, (Optr)&t_send1, (Optr)PSend3297, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3298, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock3299, (Optr)&t_send1, (Optr)PSend3305, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_keys_0_0, (Optr)&t_method_return);
    Method PMethod3293 = new_Method_with(empty_Array, PArray3294, empty_Array, PThreadedCode3295, 4, PAssign3296, PAssign3298, PSend3305, VAR_keys_0_0);
    
    MethodClosure MC_SMB_keys = new_MethodClosure((Method)PMethod3293, Dictionary_Class);
    store_method(Dictionary_Class, SMB_keys, MC_SMB_keys);
}


static void init_SMB_remove_ifAbsent_() {
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray3307 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_aBlock_0_1);
    Symbol SMB_shouldNotCall = new_Symbol(L"shouldNotCall");
    // shouldNotCall. 
    Send PSend3309 = new_Send((Optr)self, SMB_shouldNotCall, 0);
    Array PThreadedCode3308 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3309, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3306 = new_Method_with(PArray3307, empty_Array, empty_Array, PThreadedCode3308, 2, PSend3309, self);
    
    MethodClosure MC_SMB_remove_ifAbsent_ = new_MethodClosure((Method)PMethod3306, Dictionary_Class);
    store_method(Dictionary_Class, SMB_remove_ifAbsent_, MC_SMB_remove_ifAbsent_);
}


static void init_SMB_inFirstBucketAtNew_put_() {
    Symbol SMB_inFirstBucketAtNew_put_ = new_Symbol(L"inFirstBucketAtNew:put:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray3311 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Variable VAR_bucket_0_2 = new_Variable_named(L"bucket", 0);
    Array PArray3312 = new_Array_with(1, (Optr)VAR_bucket_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3315 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend3318 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign3317 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend3318);
    Symbol SMB_isFull = new_Symbol(L"isFull");
    // isFull. 
    Send PSend3319 = new_Send((Optr)VAR_bucket_0_2, SMB_isFull, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3323 = new_Send((Optr)VAR_bucket_0_2, SMB_size, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend3324 = new_Send((Optr)PSend3323, SMB__lt_, 1, (Optr)slot_Collection_HashedCollection_maxLinear);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Assign PAssign3328 = new_Assign((Optr)slot_Collection_HashedCollection_linear, (Optr)false_Const);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_32 = new_SmallInt(32);
    Constant int_32_Const = new_Constant((Optr)int_32);
    // new:. 
    Send PSend3330 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_32_Const);
    Assign PAssign3329 = new_Assign((Optr)slot_Collection_HashedCollection_buckets, (Optr)PSend3330);
    Symbol SMB_reAddBucket_at_ = new_Symbol(L"reAddBucket:at:");
    // reAddBucket:at:. 
    Send PSend3331 = new_Send((Optr)self, SMB_reAddBucket_at_, 2, (Optr)VAR_bucket_0_2, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend3332 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3333 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3332);
    Array PThreadedCode3327 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign3328, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3329, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)int_32, (Optr)&t_send1, (Optr)PSend3330, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_1, (Optr)&t_send2, (Optr)PSend3331, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend3332, (Optr)&t_send1, (Optr)PSend3333, (Optr)&t_block_return);
    Block PBlock3326 = new_Block_with(empty_Array, empty_Array, PThreadedCode3327, 4, PAssign3328, PAssign3329, PSend3331, PSend3333);
    // ifFalse:. 
    Send PSend3325 = new_Send((Optr)PSend3324, SMB_ifFalse_, 1, (Optr)PBlock3326);
    Symbol SMB_growBucketAt_ = new_Symbol(L"growBucketAt:");
    // growBucketAt:. 
    Send PSend3335 = new_Send((Optr)self, SMB_growBucketAt_, 1, (Optr)int_1_Const);
    Assign PAssign3334 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend3335);
    Array PThreadedCode3322 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_send0, (Optr)PSend3323, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_maxLinear, (Optr)&t_send1, (Optr)PSend3324, (Optr)&t_send_ifFalse_, (Optr)PSend3325, (Optr)PBlock3326, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3334, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3335, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock3321 = new_Block_with(empty_Array, empty_Array, PThreadedCode3322, 2, PSend3325, PAssign3334);
    // ifTrue:. 
    Send PSend3320 = new_Send((Optr)PSend3319, SMB_ifTrue_, 1, (Optr)PBlock3321);
    Symbol SMB_newKey_value_ = new_Symbol(L"newKey:value:");
    // newKey:value:. 
    Send PSend3336 = new_Send((Optr)VAR_bucket_0_2, SMB_newKey_value_, 2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3338 = new_Send((Optr)slot_Collection_HashedCollection_size, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign3337 = new_Assign((Optr)slot_Collection_HashedCollection_size, (Optr)PSend3338);
    Array PThreadedCode3316 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign3317, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3318, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_send0, (Optr)PSend3319, (Optr)&t_send_ifTrue_, (Optr)PSend3320, (Optr)PBlock3321, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend3336, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3337, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_size, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3338, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_method_return);
    Block PBlock3314 = new_Block_with(PArray3315, empty_Array, PThreadedCode3316, 5, PAssign3317, PSend3320, PSend3336, PAssign3337, VAR_value_0_1);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3339 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3314);
    Array PThreadedCode3313 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3314, (Optr)&t_send1, (Optr)PSend3339, (Optr)&t_method_return);
    Method PMethod3310 = new_Method_with(PArray3311, PArray3312, empty_Array, PThreadedCode3313, 1, PSend3339);
    
    MethodClosure MC_SMB_inFirstBucketAtNew_put_ = new_MethodClosure((Method)PMethod3310, Dictionary_Class);
    store_method(Dictionary_Class, SMB_inFirstBucketAtNew_put_, MC_SMB_inFirstBucketAtNew_put_);
}


static void init_SMB_removeKey_() {
    Symbol SMB_removeKey_ = new_Symbol(L"removeKey:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray3341 = new_Array_with(1, (Optr)VAR_key_0_0);
    Symbol SMB_errorKeyNotFound = new_Symbol(L"errorKeyNotFound");
    // errorKeyNotFound. 
    Send PSend3345 = new_Send((Optr)self, SMB_errorKeyNotFound, 0);
    Array PThreadedCode3344 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3345, (Optr)&t_block_return);
    Block PBlock3343 = new_Block_with(empty_Array, empty_Array, PThreadedCode3344, 1, PSend3345);
    Symbol SMB_removeKey_ifAbsent_ = new_Symbol(L"removeKey:ifAbsent:");
    // removeKey:ifAbsent:. 
    Send PSend3346 = new_Send((Optr)self, SMB_removeKey_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock3343);
    Array PThreadedCode3342 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock3343, (Optr)&t_send2, (Optr)PSend3346, (Optr)&t_method_return);
    Method PMethod3340 = new_Method_with(PArray3341, empty_Array, empty_Array, PThreadedCode3342, 1, PSend3346);
    
    MethodClosure MC_SMB_removeKey_ = new_MethodClosure((Method)PMethod3340, Dictionary_Class);
    store_method(Dictionary_Class, SMB_removeKey_, MC_SMB_removeKey_);
}


static void init_SMB_newBucket_() {
    Symbol SMB_newBucket_ = new_Symbol(L"newBucket:");
    Variable VAR_sizeRequested_0_0 = new_Variable_named(L"sizeRequested", 0);
    Array PArray3348 = new_Array_with(1, (Optr)VAR_sizeRequested_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend3350 = new_Send((Optr)PDictBucket_classReference, SMB_new_, 1, (Optr)VAR_sizeRequested_0_0);
    Array PThreadedCode3349 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PDictBucket_classReference, (Optr)&t_push_variable, (Optr)VAR_sizeRequested_0_0, (Optr)&t_send1, (Optr)PSend3350, (Optr)&t_method_return);
    Method PMethod3347 = new_Method_with(PArray3348, empty_Array, empty_Array, PThreadedCode3349, 1, PSend3350);
    
    MethodClosure MC_SMB_newBucket_ = new_MethodClosure((Method)PMethod3347, Dictionary_Class);
    store_method(Dictionary_Class, SMB_newBucket_, MC_SMB_newBucket_);
}


static void init_SMB_includes_() {
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray3352 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3355 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_bucket_2_0 = new_Variable_named(L"bucket", 2);
    Array PArray3358 = new_Array_with(1, (Optr)VAR_bucket_2_0);
    // includes:. 
    Send PSend3360 = new_Send((Optr)VAR_bucket_2_0, SMB_includes_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3364 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode3363 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend3364, (Optr)&t_block_return);
    Block PBlock3362 = new_Block_with(empty_Array, empty_Array, PThreadedCode3363, 1, PSend3364);
    // ifTrue:. 
    Send PSend3361 = new_Send((Optr)PSend3360, SMB_ifTrue_, 1, (Optr)PBlock3362);
    Array PThreadedCode3359 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_bucket_2_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend3360, (Optr)&t_send_ifTrue_, (Optr)PSend3361, (Optr)PBlock3362, (Optr)&t_method_return);
    Block PBlock3357 = new_Block_with(PArray3358, empty_Array, PThreadedCode3359, 1, PSend3361);
    Symbol SMB_bucketsDo_ = new_Symbol(L"bucketsDo:");
    // bucketsDo:. 
    Send PSend3365 = new_Send((Optr)self, SMB_bucketsDo_, 1, (Optr)PBlock3357);
    Array PThreadedCode3356 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock3357, (Optr)&t_send1, (Optr)PSend3365, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock3354 = new_Block_with(PArray3355, empty_Array, PThreadedCode3356, 2, PSend3365, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3366 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3354);
    Array PThreadedCode3353 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3354, (Optr)&t_send1, (Optr)PSend3366, (Optr)&t_method_return);
    Method PMethod3351 = new_Method_with(PArray3352, empty_Array, empty_Array, PThreadedCode3353, 1, PSend3366);
    
    MethodClosure MC_SMB_includes_ = new_MethodClosure((Method)PMethod3351, Dictionary_Class);
    store_method(Dictionary_Class, SMB_includes_, MC_SMB_includes_);
}


static void init_SMB_keysDo_() {
    Symbol SMB_keysDo_ = new_Symbol(L"keysDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray3368 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_bucket_1_0 = new_Variable_named(L"bucket", 1);
    Array PArray3371 = new_Array_with(1, (Optr)VAR_bucket_1_0);
    // keysDo:. 
    Send PSend3373 = new_Send((Optr)VAR_bucket_1_0, SMB_keysDo_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode3372 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_bucket_1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend3373, (Optr)&t_method_return);
    Block PBlock3370 = new_Block_with(PArray3371, empty_Array, PThreadedCode3372, 1, PSend3373);
    Symbol SMB_bucketsDo_ = new_Symbol(L"bucketsDo:");
    // bucketsDo:. 
    Send PSend3374 = new_Send((Optr)self, SMB_bucketsDo_, 1, (Optr)PBlock3370);
    Array PThreadedCode3369 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock3370, (Optr)&t_send1, (Optr)PSend3374, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3367 = new_Method_with(PArray3368, empty_Array, empty_Array, PThreadedCode3369, 2, PSend3374, self);
    
    MethodClosure MC_SMB_keysDo_ = new_MethodClosure((Method)PMethod3367, Dictionary_Class);
    store_method(Dictionary_Class, SMB_keysDo_, MC_SMB_keysDo_);
}


static void init_SMB_select_() {
    Symbol SMB_select_ = new_Symbol(L"select:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray3376 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Array PArray3377 = new_Array_with(1, (Optr)VAR_newCollection_0_1);
    Symbol SMB_copyEmpty = new_Symbol(L"copyEmpty");
    // copyEmpty. 
    Send PSend3380 = new_Send((Optr)self, SMB_copyEmpty, 0);
    Assign PAssign3379 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend3380);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray3382 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend3384 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)VAR_value_1_1);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend3388 = new_Send((Optr)VAR_newCollection_0_1, SMB_at_put_, 2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Array PThreadedCode3387 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send2, (Optr)PSend3388, (Optr)&t_block_return);
    Block PBlock3386 = new_Block_with(empty_Array, empty_Array, PThreadedCode3387, 1, PSend3388);
    // ifTrue:. 
    Send PSend3385 = new_Send((Optr)PSend3384, SMB_ifTrue_, 1, (Optr)PBlock3386);
    Array PThreadedCode3383 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send1, (Optr)PSend3384, (Optr)&t_send_ifTrue_, (Optr)PSend3385, (Optr)PBlock3386, (Optr)&t_method_return);
    Block PBlock3381 = new_Block_with(PArray3382, empty_Array, PThreadedCode3383, 1, PSend3385);
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    // keysAndValuesDo:. 
    Send PSend3389 = new_Send((Optr)self, SMB_keysAndValuesDo_, 1, (Optr)PBlock3381);
    Array PThreadedCode3378 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign3379, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3380, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock3381, (Optr)&t_send1, (Optr)PSend3389, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod3375 = new_Method_with(PArray3376, PArray3377, empty_Array, PThreadedCode3378, 3, PAssign3379, PSend3389, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_select_ = new_MethodClosure((Method)PMethod3375, Dictionary_Class);
    store_method(Dictionary_Class, SMB_select_, MC_SMB_select_);
}


static void init_SMB_at_put_() {
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_anObject_0_1 = new_Variable_named(L"anObject", 0);
    Array PArray3391 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_anObject_0_1);
    Variable VAR_bucketIndex_0_2 = new_Variable_named(L"bucketIndex", 0);
    Variable VAR_bucket_0_3 = new_Variable_named(L"bucket", 0);
    Array PArray3392 = new_Array_with(2, (Optr)VAR_bucketIndex_0_2, (Optr)VAR_bucket_0_3);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Collection_minus_Dictionary = new_Symbol(L"Collection.Dictionary");
    Annotation PAnnotation3394 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_at_put_, (Optr)SMB_Collection_minus_Dictionary);
    Array PArray3393 = new_Array_with(1, (Optr)PAnnotation3394);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3397 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_inFirstBucketAt_put_ = new_Symbol(L"inFirstBucketAt:put:");
    // inFirstBucketAt:put:. 
    Send PSend3402 = new_Send((Optr)self, SMB_inFirstBucketAt_put_, 2, (Optr)VAR_key_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3403 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3402);
    Array PThreadedCode3401 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend3402, (Optr)&t_send1, (Optr)PSend3403, (Optr)&t_block_return);
    Block PBlock3400 = new_Block_with(empty_Array, empty_Array, PThreadedCode3401, 1, PSend3403);
    // ifTrue:. 
    Send PSend3399 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock3400);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend3407 = new_Send((Optr)VAR_key_0_0, SMB_hash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3408 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend3406 = new_Send((Optr)PSend3407, SMB__modulo_, 1, (Optr)PSend3408);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend3405 = new_Send((Optr)PSend3406, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign3404 = new_Assign((Optr)VAR_bucketIndex_0_2, (Optr)PSend3405);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend3410 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)VAR_bucketIndex_0_2);
    Assign PAssign3409 = new_Assign((Optr)VAR_bucket_0_3, (Optr)PSend3410);
    Symbol SMB_newBucketAt_ = new_Symbol(L"newBucketAt:");
    // newBucketAt:. 
    Send PSend3413 = new_Send((Optr)self, SMB_newBucketAt_, 1, (Optr)VAR_bucketIndex_0_2);
    Symbol SMB_newKey_value_ = new_Symbol(L"newKey:value:");
    // newKey:value:. 
    Send PSend3414 = new_Send((Optr)PSend3413, SMB_newKey_value_, 2, (Optr)VAR_key_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_checkGrow = new_Symbol(L"checkGrow");
    // checkGrow. 
    Send PSend3415 = new_Send((Optr)self, SMB_checkGrow, 0);
    // escape:. 
    Send PSend3416 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_anObject_0_1);
    Array PThreadedCode3412 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_2, (Optr)&t_send1, (Optr)PSend3413, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend3414, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3415, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send1, (Optr)PSend3416, (Optr)&t_block_return);
    Block PBlock3411 = new_Block_with(empty_Array, empty_Array, PThreadedCode3412, 3, PSend3414, PSend3415, PSend3416);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend3417 = new_Send((Optr)VAR_bucket_0_3, SMB_ifNil_, 1, (Optr)PBlock3411);
    Symbol SMB_assign_to_ = new_Symbol(L"assign:to:");
    // assign:to:. 
    Send PSend3418 = new_Send((Optr)VAR_bucket_0_3, SMB_assign_to_, 2, (Optr)VAR_key_0_0, (Optr)VAR_anObject_0_1);
    // escape:. 
    Send PSend3422 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_anObject_0_1);
    Array PThreadedCode3421 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send1, (Optr)PSend3422, (Optr)&t_block_return);
    Block PBlock3420 = new_Block_with(empty_Array, empty_Array, PThreadedCode3421, 1, PSend3422);
    // ifTrue:. 
    Send PSend3419 = new_Send((Optr)PSend3418, SMB_ifTrue_, 1, (Optr)PBlock3420);
    Symbol SMB_isFull = new_Symbol(L"isFull");
    // isFull. 
    Send PSend3423 = new_Send((Optr)VAR_bucket_0_3, SMB_isFull, 0);
    Symbol SMB_growBucketAt_ = new_Symbol(L"growBucketAt:");
    // growBucketAt:. 
    Send PSend3428 = new_Send((Optr)self, SMB_growBucketAt_, 1, (Optr)VAR_bucketIndex_0_2);
    Assign PAssign3427 = new_Assign((Optr)VAR_bucket_0_3, (Optr)PSend3428);
    Array PThreadedCode3426 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign3427, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_2, (Optr)&t_send1, (Optr)PSend3428, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock3425 = new_Block_with(empty_Array, empty_Array, PThreadedCode3426, 1, PAssign3427);
    // ifTrue:. 
    Send PSend3424 = new_Send((Optr)PSend3423, SMB_ifTrue_, 1, (Optr)PBlock3425);
    // newKey:value:. 
    Send PSend3429 = new_Send((Optr)VAR_bucket_0_3, SMB_newKey_value_, 2, (Optr)VAR_key_0_0, (Optr)VAR_anObject_0_1);
    // checkGrow. 
    Send PSend3430 = new_Send((Optr)self, SMB_checkGrow, 0);
    Array PThreadedCode3398 = instantiate_Array_with(ThreadedCode_Class, 0, 76, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend3399, (Optr)PBlock3400, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3404, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend3407, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend3408, (Optr)&t_send1, (Optr)PSend3406, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3405, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3409, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_2, (Optr)&t_send1, (Optr)PSend3410, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_3, (Optr)&t_push_closure, (Optr)PBlock3411, (Optr)&t_send1, (Optr)PSend3417, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_3, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend3418, (Optr)&t_send_ifTrue_, (Optr)PSend3419, (Optr)PBlock3420, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_3, (Optr)&t_send0, (Optr)PSend3423, (Optr)&t_send_ifTrue_, (Optr)PSend3424, (Optr)PBlock3425, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_3, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend3429, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3430, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_method_return);
    Block PBlock3396 = new_Block_with(PArray3397, empty_Array, PThreadedCode3398, 9, PSend3399, PAssign3404, PAssign3409, PSend3417, PSend3419, PSend3424, PSend3429, PSend3430, VAR_anObject_0_1);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3431 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3396);
    Array PThreadedCode3395 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3396, (Optr)&t_send1, (Optr)PSend3431, (Optr)&t_method_return);
    NativeMethod PNativeMethod3390 = new_NativeMethod_with(PArray3391, PArray3392, PArray3393, PThreadedCode3395, 1, PSend3431);
    
    MethodClosure MC_SMB_at_put_ = new_MethodClosure((Method)PNativeMethod3390, Dictionary_Class);
    store_method(Dictionary_Class, SMB_at_put_, MC_SMB_at_put_);
}


static void init_SMB_keysAndValuesDo_() {
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray3433 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_bucket_1_0 = new_Variable_named(L"bucket", 1);
    Array PArray3436 = new_Array_with(1, (Optr)VAR_bucket_1_0);
    // keysAndValuesDo:. 
    Send PSend3438 = new_Send((Optr)VAR_bucket_1_0, SMB_keysAndValuesDo_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode3437 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_bucket_1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend3438, (Optr)&t_method_return);
    Block PBlock3435 = new_Block_with(PArray3436, empty_Array, PThreadedCode3437, 1, PSend3438);
    Symbol SMB_bucketsDo_ = new_Symbol(L"bucketsDo:");
    // bucketsDo:. 
    Send PSend3439 = new_Send((Optr)self, SMB_bucketsDo_, 1, (Optr)PBlock3435);
    Array PThreadedCode3434 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock3435, (Optr)&t_send1, (Optr)PSend3439, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3432 = new_Method_with(PArray3433, empty_Array, empty_Array, PThreadedCode3434, 2, PSend3439, self);
    
    MethodClosure MC_SMB_keysAndValuesDo_ = new_MethodClosure((Method)PMethod3432, Dictionary_Class);
    store_method(Dictionary_Class, SMB_keysAndValuesDo_, MC_SMB_keysAndValuesDo_);
}


static void init_SMB_inFirstBucketAt_ifAbsentPut_() {
    Symbol SMB_inFirstBucketAt_ifAbsentPut_ = new_Symbol(L"inFirstBucketAt:ifAbsentPut:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray3441 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3444 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend3446 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend3449 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Symbol SMB_inFirstBucketAtNew_put_ = new_Symbol(L"inFirstBucketAtNew:put:");
    // inFirstBucketAtNew:put:. 
    Send PSend3450 = new_Send((Optr)self, SMB_inFirstBucketAtNew_put_, 2, (Optr)VAR_key_0_0, (Optr)PSend3449);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3451 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3450);
    Array PThreadedCode3448 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend3449, (Optr)&t_send2, (Optr)PSend3450, (Optr)&t_send1, (Optr)PSend3451, (Optr)&t_block_return);
    Block PBlock3447 = new_Block_with(empty_Array, empty_Array, PThreadedCode3448, 1, PSend3451);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend3452 = new_Send((Optr)PSend3446, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock3447);
    Array PThreadedCode3445 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3446, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock3447, (Optr)&t_send2, (Optr)PSend3452, (Optr)&t_method_return);
    Block PBlock3443 = new_Block_with(PArray3444, empty_Array, PThreadedCode3445, 1, PSend3452);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3453 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3443);
    Array PThreadedCode3442 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3443, (Optr)&t_send1, (Optr)PSend3453, (Optr)&t_method_return);
    Method PMethod3440 = new_Method_with(PArray3441, empty_Array, empty_Array, PThreadedCode3442, 1, PSend3453);
    
    MethodClosure MC_SMB_inFirstBucketAt_ifAbsentPut_ = new_MethodClosure((Method)PMethod3440, Dictionary_Class);
    store_method(Dictionary_Class, SMB_inFirstBucketAt_ifAbsentPut_, MC_SMB_inFirstBucketAt_ifAbsentPut_);
}


static void init_class_SMB_removeNatives() {
    Symbol SMB_removeNatives = new_Symbol(L"removeNatives");
    Symbol SMB_methods = new_Symbol(L"methods");
    // methods. 
    Send PSend3456 = new_Send((Optr)self, SMB_methods, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Variable VAR_method_1_1 = new_Variable_named(L"method", 1);
    Array PArray3458 = new_Array_with(2, (Optr)VAR_selector_1_0, (Optr)VAR_method_1_1);
    Symbol SMB_clearNative = new_Symbol(L"clearNative");
    // clearNative. 
    Send PSend3460 = new_Send((Optr)VAR_method_1_1, SMB_clearNative, 0);
    Array PThreadedCode3459 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_method_1_1, (Optr)&t_send0, (Optr)PSend3460, (Optr)&t_method_return);
    Block PBlock3457 = new_Block_with(PArray3458, empty_Array, PThreadedCode3459, 1, PSend3460);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend3461 = new_Send((Optr)PSend3456, SMB_do_, 1, (Optr)PBlock3457);
    Array PThreadedCode3455 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3456, (Optr)&t_push_closure, (Optr)PBlock3457, (Optr)&t_send1, (Optr)PSend3461, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3454 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3455, 2, PSend3461, self);
    
    MethodClosure MC_SMB_removeNatives = new_MethodClosure((Method)PMethod3454, HEADER(Dictionary_Class));
    store_method(HEADER(Dictionary_Class), SMB_removeNatives, MC_SMB_removeNatives);
}

void init_Collection_Dictionary_layout() {
    layout_Collection_Dictionary_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collection_Dictionary_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Collection_Dictionary_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Collection_Dictionary_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Collection_Dictionary_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Collection_Dictionary_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Dictionary = new_Symbol(L"Dictionary");
    layout_Collection_Dictionary = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collection_Dictionary)->values[0] = slot_Collection_HashedCollection_size; // size 
    ((Array)layout_Collection_Dictionary)->values[1] = slot_Collection_HashedCollection_maxLinear; // maxLinear 
    ((Array)layout_Collection_Dictionary)->values[2] = slot_Collection_HashedCollection_ratio; // ratio 
    ((Array)layout_Collection_Dictionary)->values[3] = slot_Collection_HashedCollection_buckets; // buckets 
    ((Array)layout_Collection_Dictionary)->values[4] = slot_Collection_HashedCollection_linear; // linear 
    Class_set_superclass(Dictionary_Class, Collection_HashedCollection_Class);
    Dictionary_Class->layout = layout_Collection_Dictionary;
    HEADER(Dictionary_Class)->layout = layout_Collection_Dictionary_Class_class;
    Dictionary_Class->name = SMB_Dictionary;
    
}

void init_Collection_Dictionary_methods() {
    init_SMB_grow();
    init_SMB_addAll_();
    init_SMB_inspectChildrenOn_();
    init_SMB_removeKey_ifAbsent_();
    init_SMB_at_ifPresent_();
    init_SMB_at_();
    init_SMB_at_ifAbsent_();
    init_SMB_valuesDo_();
    init_SMB_includesKey_();
    init_SMB_reAddBucket_at_();
    init_SMB_at_ifAbsentPut_();
    init_SMB_inFirstBucketAt_put_();
    init_SMB_errorKeyNotFound_();
    init_SMB_values();
    init_SMB_keys();
    init_SMB_remove_ifAbsent_();
    init_SMB_inFirstBucketAtNew_put_();
    init_SMB_removeKey_();
    init_SMB_newBucket_();
    init_SMB_includes_();
    init_SMB_keysDo_();
    init_SMB_select_();
    init_SMB_at_put_();
    init_SMB_keysAndValuesDo_();
    init_SMB_inFirstBucketAt_ifAbsentPut_();
    init_class_SMB_removeNatives();
    
}