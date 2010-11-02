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


static void init_SMB_removeKey_ifAbsent_() {
    Symbol SMB_removeKey_ifAbsent_ = new_Symbol(L"removeKey:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray3088 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_value_0_2 = new_Variable_named(L"value", 0);
    Variable VAR_bucket_0_3 = new_Variable_named(L"bucket", 0);
    Array PArray3089 = new_Array_with(2, (Optr)VAR_value_0_2, (Optr)VAR_bucket_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3092 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend3099 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend3102 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3103 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3102);
    Array PThreadedCode3101 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend3102, (Optr)&t_send1, (Optr)PSend3103, (Optr)&t_block_return);
    Block PBlock3100 = new_Block_with(empty_Array, empty_Array, PThreadedCode3101, 1, PSend3103);
    // remove:ifAbsent:. 
    Send PSend3098 = new_Send((Optr)PSend3099, SMB_remove_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock3100);
    Assign PAssign3097 = new_Assign((Optr)VAR_value_0_2, (Optr)PSend3098);
    Symbol SMB_checkShrink = new_Symbol(L"checkShrink");
    // checkShrink. 
    Send PSend3104 = new_Send((Optr)self, SMB_checkShrink, 0);
    // escape:. 
    Send PSend3105 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_2);
    Array PThreadedCode3096 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign3097, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3099, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock3100, (Optr)&t_send2, (Optr)PSend3098, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3104, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_send1, (Optr)PSend3105, (Optr)&t_block_return);
    Block PBlock3095 = new_Block_with(empty_Array, empty_Array, PThreadedCode3096, 3, PAssign3097, PSend3104, PSend3105);
    // ifTrue:. 
    Send PSend3094 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock3095);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend3110 = new_Send((Optr)VAR_key_0_0, SMB_hash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3111 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend3109 = new_Send((Optr)PSend3110, SMB__modulo_, 1, (Optr)PSend3111);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3108 = new_Send((Optr)PSend3109, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend3107 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)PSend3108);
    Assign PAssign3106 = new_Assign((Optr)VAR_bucket_0_3, (Optr)PSend3107);
    // value. 
    Send PSend3114 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    // escape:. 
    Send PSend3115 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3114);
    Array PThreadedCode3113 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend3114, (Optr)&t_send1, (Optr)PSend3115, (Optr)&t_block_return);
    Block PBlock3112 = new_Block_with(empty_Array, empty_Array, PThreadedCode3113, 1, PSend3115);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend3116 = new_Send((Optr)VAR_bucket_0_3, SMB_ifNil_, 1, (Optr)PBlock3112);
    // value. 
    Send PSend3121 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    // escape:. 
    Send PSend3122 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3121);
    Array PThreadedCode3120 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend3121, (Optr)&t_send1, (Optr)PSend3122, (Optr)&t_block_return);
    Block PBlock3119 = new_Block_with(empty_Array, empty_Array, PThreadedCode3120, 1, PSend3122);
    // remove:ifAbsent:. 
    Send PSend3118 = new_Send((Optr)VAR_bucket_0_3, SMB_remove_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock3119);
    Assign PAssign3117 = new_Assign((Optr)VAR_value_0_2, (Optr)PSend3118);
    // checkShrink. 
    Send PSend3123 = new_Send((Optr)self, SMB_checkShrink, 0);
    Array PThreadedCode3093 = instantiate_Array_with(ThreadedCode_Class, 0, 53, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend3094, (Optr)PBlock3095, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3106, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend3110, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend3111, (Optr)&t_send1, (Optr)PSend3109, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3108, (Optr)&t_send1, (Optr)PSend3107, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_3, (Optr)&t_push_closure, (Optr)PBlock3112, (Optr)&t_send1, (Optr)PSend3116, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3117, (Optr)&t_push_variable, (Optr)VAR_bucket_0_3, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock3119, (Optr)&t_send2, (Optr)PSend3118, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3123, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_method_return);
    Block PBlock3091 = new_Block_with(PArray3092, empty_Array, PThreadedCode3093, 6, PSend3094, PAssign3106, PSend3116, PAssign3117, PSend3123, VAR_value_0_2);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3124 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3091);
    Array PThreadedCode3090 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3091, (Optr)&t_send1, (Optr)PSend3124, (Optr)&t_method_return);
    Method PMethod3087 = new_Method_with(PArray3088, PArray3089, empty_Array, PThreadedCode3090, 1, PSend3124);
    
    MethodClosure MC_SMB_removeKey_ifAbsent_ = new_MethodClosure((Method)PMethod3087, Dictionary_Class);
    store_method(Dictionary_Class, SMB_removeKey_ifAbsent_, MC_SMB_removeKey_ifAbsent_);
}


static void init_SMB_at_ifPresent_() {
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray3126 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3129 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3133 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode3132 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend3133, (Optr)&t_block_return);
    Block PBlock3131 = new_Block_with(empty_Array, empty_Array, PThreadedCode3132, 1, PSend3133);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend3134 = new_Send((Optr)self, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock3131);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend3135 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)PSend3134);
    Array PThreadedCode3130 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock3131, (Optr)&t_send2, (Optr)PSend3134, (Optr)&t_send1, (Optr)PSend3135, (Optr)&t_method_return);
    Block PBlock3128 = new_Block_with(PArray3129, empty_Array, PThreadedCode3130, 1, PSend3135);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3136 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3128);
    Array PThreadedCode3127 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3128, (Optr)&t_send1, (Optr)PSend3136, (Optr)&t_method_return);
    Method PMethod3125 = new_Method_with(PArray3126, empty_Array, empty_Array, PThreadedCode3127, 1, PSend3136);
    
    MethodClosure MC_SMB_at_ifPresent_ = new_MethodClosure((Method)PMethod3125, Dictionary_Class);
    store_method(Dictionary_Class, SMB_at_ifPresent_, MC_SMB_at_ifPresent_);
}


static void init_SMB_at_() {
    Symbol SMB_at_ = new_Symbol(L"at:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray3138 = new_Array_with(1, (Optr)VAR_key_0_0);
    Symbol SMB_errorKeyNotFound_ = new_Symbol(L"errorKeyNotFound:");
    // errorKeyNotFound:. 
    Send PSend3142 = new_Send((Optr)self, SMB_errorKeyNotFound_, 1, (Optr)VAR_key_0_0);
    Array PThreadedCode3141 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send1, (Optr)PSend3142, (Optr)&t_block_return);
    Block PBlock3140 = new_Block_with(empty_Array, empty_Array, PThreadedCode3141, 1, PSend3142);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend3143 = new_Send((Optr)self, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock3140);
    Array PThreadedCode3139 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock3140, (Optr)&t_send2, (Optr)PSend3143, (Optr)&t_method_return);
    Method PMethod3137 = new_Method_with(PArray3138, empty_Array, empty_Array, PThreadedCode3139, 1, PSend3143);
    
    MethodClosure MC_SMB_at_ = new_MethodClosure((Method)PMethod3137, Dictionary_Class);
    store_method(Dictionary_Class, SMB_at_, MC_SMB_at_);
}


static void init_SMB_at_ifAbsent_() {
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray3145 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Collection_minus_Dictionary = new_Symbol(L"Collection.Dictionary");
    Annotation PAnnotation3147 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_at_ifAbsent_, (Optr)SMB_Collection_minus_Dictionary);
    Array PArray3146 = new_Array_with(1, (Optr)PAnnotation3147);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3150 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend3155 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    // at:ifAbsent:. 
    Send PSend3156 = new_Send((Optr)PSend3155, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3157 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3156);
    Array PThreadedCode3154 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3155, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send2, (Optr)PSend3156, (Optr)&t_send1, (Optr)PSend3157, (Optr)&t_block_return);
    Block PBlock3153 = new_Block_with(empty_Array, empty_Array, PThreadedCode3154, 1, PSend3157);
    // ifTrue:. 
    Send PSend3152 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock3153);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend3158 = new_Send((Optr)VAR_key_0_0, SMB_hash, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3159 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    // \\. 
    Send PSend3160 = new_Send((Optr)PSend3158, SMB__modulo_, 1, (Optr)PSend3159);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3161 = new_Send((Optr)PSend3160, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend3162 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)PSend3161);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend3165 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode3164 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend3165, (Optr)&t_block_return);
    Block PBlock3163 = new_Block_with(empty_Array, empty_Array, PThreadedCode3164, 1, PSend3165);
    Variable VAR_bucket_2_0 = new_Variable_named(L"bucket", 2);
    Array PArray3167 = new_Array_with(1, (Optr)VAR_bucket_2_0);
    // at:ifAbsent:. 
    Send PSend3169 = new_Send((Optr)VAR_bucket_2_0, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Array PThreadedCode3168 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_bucket_2_0, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send2, (Optr)PSend3169, (Optr)&t_method_return);
    Block PBlock3166 = new_Block_with(PArray3167, empty_Array, PThreadedCode3168, 1, PSend3169);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend3170 = new_Send((Optr)PSend3162, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock3163, (Optr)PBlock3166);
    Array PThreadedCode3151 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend3152, (Optr)PBlock3153, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend3158, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend3159, (Optr)&t_send1, (Optr)PSend3160, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3161, (Optr)&t_send1, (Optr)PSend3162, (Optr)&t_push_closure, (Optr)PBlock3163, (Optr)&t_push_closure, (Optr)PBlock3166, (Optr)&t_send2, (Optr)PSend3170, (Optr)&t_method_return);
    Block PBlock3149 = new_Block_with(PArray3150, empty_Array, PThreadedCode3151, 2, PSend3152, PSend3170);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3171 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3149);
    Array PThreadedCode3148 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3149, (Optr)&t_send1, (Optr)PSend3171, (Optr)&t_method_return);
    NativeMethod PNativeMethod3144 = new_NativeMethod_with(PArray3145, empty_Array, PArray3146, PThreadedCode3148, 1, PSend3171);
    
    MethodClosure MC_SMB_at_ifAbsent_ = new_MethodClosure((Method)PNativeMethod3144, Dictionary_Class);
    store_method(Dictionary_Class, SMB_at_ifAbsent_, MC_SMB_at_ifAbsent_);
}


static void init_SMB_valuesDo_() {
    Symbol SMB_valuesDo_ = new_Symbol(L"valuesDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray3173 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_bucket_1_0 = new_Variable_named(L"bucket", 1);
    Array PArray3176 = new_Array_with(1, (Optr)VAR_bucket_1_0);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend3178 = new_Send((Optr)VAR_bucket_1_0, SMB_do_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode3177 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_bucket_1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend3178, (Optr)&t_method_return);
    Block PBlock3175 = new_Block_with(PArray3176, empty_Array, PThreadedCode3177, 1, PSend3178);
    Symbol SMB_bucketsDo_ = new_Symbol(L"bucketsDo:");
    // bucketsDo:. 
    Send PSend3179 = new_Send((Optr)self, SMB_bucketsDo_, 1, (Optr)PBlock3175);
    Array PThreadedCode3174 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock3175, (Optr)&t_send1, (Optr)PSend3179, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3172 = new_Method_with(PArray3173, empty_Array, empty_Array, PThreadedCode3174, 2, PSend3179, self);
    
    MethodClosure MC_SMB_valuesDo_ = new_MethodClosure((Method)PMethod3172, Dictionary_Class);
    store_method(Dictionary_Class, SMB_valuesDo_, MC_SMB_valuesDo_);
}


static void init_SMB_includesKey_() {
    Symbol SMB_includesKey_ = new_Symbol(L"includesKey:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray3181 = new_Array_with(1, (Optr)VAR_key_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Collection_minus_Dictionary = new_Symbol(L"Collection.Dictionary");
    Annotation PAnnotation3183 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_includesKey_, (Optr)SMB_Collection_minus_Dictionary);
    Array PArray3182 = new_Array_with(1, (Optr)PAnnotation3183);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3186 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend3191 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    // includesKey:. 
    Send PSend3192 = new_Send((Optr)PSend3191, SMB_includesKey_, 1, (Optr)VAR_key_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3193 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3192);
    Array PThreadedCode3190 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3191, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send1, (Optr)PSend3192, (Optr)&t_send1, (Optr)PSend3193, (Optr)&t_block_return);
    Block PBlock3189 = new_Block_with(empty_Array, empty_Array, PThreadedCode3190, 1, PSend3193);
    // ifTrue:. 
    Send PSend3188 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock3189);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend3194 = new_Send((Optr)VAR_key_0_0, SMB_hash, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3195 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    // \\. 
    Send PSend3196 = new_Send((Optr)PSend3194, SMB__modulo_, 1, (Optr)PSend3195);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3197 = new_Send((Optr)PSend3196, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend3198 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)PSend3197);
    Array PThreadedCode3200 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock3199 = new_Block_with(empty_Array, empty_Array, PThreadedCode3200, 1, false_Const);
    Variable VAR_bucket_2_0 = new_Variable_named(L"bucket", 2);
    Array PArray3202 = new_Array_with(1, (Optr)VAR_bucket_2_0);
    // includesKey:. 
    Send PSend3204 = new_Send((Optr)VAR_bucket_2_0, SMB_includesKey_, 1, (Optr)VAR_key_0_0);
    Array PThreadedCode3203 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_bucket_2_0, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send1, (Optr)PSend3204, (Optr)&t_method_return);
    Block PBlock3201 = new_Block_with(PArray3202, empty_Array, PThreadedCode3203, 1, PSend3204);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend3205 = new_Send((Optr)PSend3198, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock3199, (Optr)PBlock3201);
    Array PThreadedCode3187 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend3188, (Optr)PBlock3189, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend3194, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend3195, (Optr)&t_send1, (Optr)PSend3196, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3197, (Optr)&t_send1, (Optr)PSend3198, (Optr)&t_push_closure, (Optr)PBlock3199, (Optr)&t_push_closure, (Optr)PBlock3201, (Optr)&t_send2, (Optr)PSend3205, (Optr)&t_method_return);
    Block PBlock3185 = new_Block_with(PArray3186, empty_Array, PThreadedCode3187, 2, PSend3188, PSend3205);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3206 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3185);
    Array PThreadedCode3184 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3185, (Optr)&t_send1, (Optr)PSend3206, (Optr)&t_method_return);
    NativeMethod PNativeMethod3180 = new_NativeMethod_with(PArray3181, empty_Array, PArray3182, PThreadedCode3184, 1, PSend3206);
    
    MethodClosure MC_SMB_includesKey_ = new_MethodClosure((Method)PNativeMethod3180, Dictionary_Class);
    store_method(Dictionary_Class, SMB_includesKey_, MC_SMB_includesKey_);
}


static void init_SMB_reAddBucket_at_() {
    Symbol SMB_reAddBucket_at_ = new_Symbol(L"reAddBucket:at:");
    Variable VAR_bucket_0_0 = new_Variable_named(L"bucket", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray3208 = new_Array_with(2, (Optr)VAR_bucket_0_0, (Optr)VAR_index_0_1);
    Variable VAR_c_0_2 = new_Variable_named(L"c", 0);
    Variable VAR_key_0_3 = new_Variable_named(L"key", 0);
    Variable VAR_bucketIndex_0_4 = new_Variable_named(L"bucketIndex", 0);
    Array PArray3209 = new_Array_with(3, (Optr)VAR_c_0_2, (Optr)VAR_key_0_3, (Optr)VAR_bucketIndex_0_4);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign3211 = new_Assign((Optr)VAR_c_0_2, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend3212 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_put_, 2, (Optr)VAR_index_0_1, (Optr)VAR_bucket_0_0);
    Symbol SMB_bucketSize = new_Symbol(L"bucketSize");
    // bucketSize. 
    Send PSend3215 = new_Send((Optr)VAR_bucket_0_0, SMB_bucketSize, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend3216 = new_Send((Optr)VAR_c_0_2, SMB__lt__equals_, 1, (Optr)PSend3215);
    Array PThreadedCode3214 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_send0, (Optr)PSend3215, (Optr)&t_send1, (Optr)PSend3216, (Optr)&t_block_return);
    Block PBlock3213 = new_Block_with(empty_Array, empty_Array, PThreadedCode3214, 1, PSend3216);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend3220 = new_Send((Optr)VAR_bucket_0_0, SMB_at_, 1, (Optr)VAR_c_0_2);
    Assign PAssign3219 = new_Assign((Optr)VAR_key_0_3, (Optr)PSend3220);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend3224 = new_Send((Optr)VAR_key_0_3, SMB_hash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3225 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend3223 = new_Send((Optr)PSend3224, SMB__modulo_, 1, (Optr)PSend3225);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3222 = new_Send((Optr)PSend3223, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign3221 = new_Assign((Optr)VAR_bucketIndex_0_4, (Optr)PSend3222);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend3226 = new_Send((Optr)VAR_bucketIndex_0_4, SMB__equals_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // +. 
    Send PSend3231 = new_Send((Optr)VAR_c_0_2, SMB__plus_, 1, (Optr)int_2_Const);
    Assign PAssign3230 = new_Assign((Optr)VAR_c_0_2, (Optr)PSend3231);
    Array PThreadedCode3229 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign3230, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend3231, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock3228 = new_Block_with(empty_Array, empty_Array, PThreadedCode3229, 1, PAssign3230);
    Symbol SMB_bucketWithRoomAt_ = new_Symbol(L"bucketWithRoomAt:");
    // bucketWithRoomAt:. 
    Send PSend3234 = new_Send((Optr)self, SMB_bucketWithRoomAt_, 1, (Optr)VAR_bucketIndex_0_4);
    // +. 
    Send PSend3235 = new_Send((Optr)VAR_c_0_2, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend3236 = new_Send((Optr)VAR_bucket_0_0, SMB_at_, 1, (Optr)PSend3235);
    Symbol SMB_newKey_value_ = new_Symbol(L"newKey:value:");
    // newKey:value:. 
    Send PSend3237 = new_Send((Optr)PSend3234, SMB_newKey_value_, 2, (Optr)VAR_key_0_3, (Optr)PSend3236);
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    // removeAt:. 
    Send PSend3238 = new_Send((Optr)VAR_bucket_0_0, SMB_removeAt_, 1, (Optr)VAR_c_0_2);
    Array PThreadedCode3233 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_4, (Optr)&t_send1, (Optr)PSend3234, (Optr)&t_push_variable, (Optr)VAR_key_0_3, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3235, (Optr)&t_send1, (Optr)PSend3236, (Optr)&t_send2, (Optr)PSend3237, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_send1, (Optr)PSend3238, (Optr)&t_block_return);
    Block PBlock3232 = new_Block_with(empty_Array, empty_Array, PThreadedCode3233, 2, PSend3237, PSend3238);
    // ifTrue:ifFalse:. 
    Send PSend3227 = new_Send((Optr)PSend3226, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock3228, (Optr)PBlock3232);
    Array PThreadedCode3218 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign3219, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_send1, (Optr)PSend3220, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3221, (Optr)&t_push_variable, (Optr)VAR_key_0_3, (Optr)&t_send0, (Optr)PSend3224, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend3225, (Optr)&t_send1, (Optr)PSend3223, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3222, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_4, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend3226, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend3227, (Optr)PBlock3228, (Optr)PBlock3232, (Optr)&t_block_return);
    Block PBlock3217 = new_Block_with(empty_Array, empty_Array, PThreadedCode3218, 3, PAssign3219, PAssign3221, PSend3227);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend3239 = new_Send((Optr)PBlock3213, SMB_whileTrue_, 1, (Optr)PBlock3217);
    Array PThreadedCode3210 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign3211, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_send2, (Optr)PSend3212, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock3213, (Optr)&t_push_closure, (Optr)PBlock3217, (Optr)&t_send1, (Optr)PSend3239, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3207 = new_Method_with(PArray3208, PArray3209, empty_Array, PThreadedCode3210, 4, PAssign3211, PSend3212, PSend3239, self);
    
    MethodClosure MC_SMB_reAddBucket_at_ = new_MethodClosure((Method)PMethod3207, Dictionary_Class);
    store_method(Dictionary_Class, SMB_reAddBucket_at_, MC_SMB_reAddBucket_at_);
}


static void init_SMB_at_ifAbsentPut_() {
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray3241 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend3245 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend3246 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)VAR_key_0_0, (Optr)PSend3245);
    Array PThreadedCode3244 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend3245, (Optr)&t_send2, (Optr)PSend3246, (Optr)&t_block_return);
    Block PBlock3243 = new_Block_with(empty_Array, empty_Array, PThreadedCode3244, 1, PSend3246);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend3247 = new_Send((Optr)self, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock3243);
    Array PThreadedCode3242 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock3243, (Optr)&t_send2, (Optr)PSend3247, (Optr)&t_method_return);
    Method PMethod3240 = new_Method_with(PArray3241, empty_Array, empty_Array, PThreadedCode3242, 1, PSend3247);
    
    MethodClosure MC_SMB_at_ifAbsentPut_ = new_MethodClosure((Method)PMethod3240, Dictionary_Class);
    store_method(Dictionary_Class, SMB_at_ifAbsentPut_, MC_SMB_at_ifAbsentPut_);
}


static void init_SMB_inFirstBucketAt_put_() {
    Symbol SMB_inFirstBucketAt_put_ = new_Symbol(L"inFirstBucketAt:put:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_anObject_0_1 = new_Variable_named(L"anObject", 0);
    Array PArray3249 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend3251 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    Symbol SMB_assign_to_ = new_Symbol(L"assign:to:");
    // assign:to:. 
    Send PSend3252 = new_Send((Optr)PSend3251, SMB_assign_to_, 2, (Optr)VAR_key_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode3255 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_block_return);
    Block PBlock3254 = new_Block_with(empty_Array, empty_Array, PThreadedCode3255, 1, VAR_anObject_0_1);
    Symbol SMB_inFirstBucketAtNew_put_ = new_Symbol(L"inFirstBucketAtNew:put:");
    // inFirstBucketAtNew:put:. 
    Send PSend3258 = new_Send((Optr)self, SMB_inFirstBucketAtNew_put_, 2, (Optr)VAR_key_0_0, (Optr)VAR_anObject_0_1);
    Array PThreadedCode3257 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend3258, (Optr)&t_block_return);
    Block PBlock3256 = new_Block_with(empty_Array, empty_Array, PThreadedCode3257, 1, PSend3258);
    // ifTrue:ifFalse:. 
    Send PSend3253 = new_Send((Optr)PSend3252, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock3254, (Optr)PBlock3256);
    Array PThreadedCode3250 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3251, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend3252, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend3253, (Optr)PBlock3254, (Optr)PBlock3256, (Optr)&t_method_return);
    Method PMethod3248 = new_Method_with(PArray3249, empty_Array, empty_Array, PThreadedCode3250, 1, PSend3253);
    
    MethodClosure MC_SMB_inFirstBucketAt_put_ = new_MethodClosure((Method)PMethod3248, Dictionary_Class);
    store_method(Dictionary_Class, SMB_inFirstBucketAt_put_, MC_SMB_inFirstBucketAt_put_);
}


static void init_SMB_errorKeyNotFound_() {
    Symbol SMB_errorKeyNotFound_ = new_Symbol(L"errorKeyNotFound:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Array PArray3260 = new_Array_with(1, (Optr)VAR_aKey_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray3263 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_key_ = new_Symbol(L"key:");
    // key:. 
    Send PSend3265 = new_Send((Optr)VAR__receiver__1_0, SMB_key_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_dictionary_ = new_Symbol(L"dictionary:");
    // dictionary:. 
    Send PSend3266 = new_Send((Optr)VAR__receiver__1_0, SMB_dictionary_, 1, (Optr)self);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend3267 = new_Send((Optr)VAR__receiver__1_0, SMB_signal, 0);
    Array PThreadedCode3264 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend3265, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend3266, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend3267, (Optr)&t_method_return);
    Block PBlock3262 = new_Block_with(PArray3263, empty_Array, PThreadedCode3264, 3, PSend3265, PSend3266, PSend3267);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend3268 = new_Send((Optr)PKeyNotFound_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend3269 = new_Send((Optr)PBlock3262, SMB_value_, 1, (Optr)PSend3268);
    Array PThreadedCode3261 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock3262, (Optr)&t_push_class_reference, (Optr)PKeyNotFound_classReference, (Optr)&t_send0, (Optr)PSend3268, (Optr)&t_send1, (Optr)PSend3269, (Optr)&t_method_return);
    Method PMethod3259 = new_Method_with(PArray3260, empty_Array, empty_Array, PThreadedCode3261, 1, PSend3269);
    
    MethodClosure MC_SMB_errorKeyNotFound_ = new_MethodClosure((Method)PMethod3259, Dictionary_Class);
    store_method(Dictionary_Class, SMB_errorKeyNotFound_, MC_SMB_errorKeyNotFound_);
}


static void init_SMB_values() {
    Symbol SMB_values = new_Symbol(L"values");
    Variable VAR_values_0_0 = new_Variable_named(L"values", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray3271 = new_Array_with(2, (Optr)VAR_values_0_0, (Optr)VAR_index_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend3274 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)slot_Collection_HashedCollection_size);
    Assign PAssign3273 = new_Assign((Optr)VAR_values_0_0, (Optr)PSend3274);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign3275 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Variable VAR_value_1_0 = new_Variable_named(L"value", 1);
    Array PArray3277 = new_Array_with(1, (Optr)VAR_value_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend3280 = new_Send((Optr)VAR_index_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign3279 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend3280);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend3281 = new_Send((Optr)VAR_values_0_0, SMB_at_put_, 2, (Optr)PAssign3279, (Optr)VAR_value_1_0);
    Array PThreadedCode3278 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_push1, (Optr)PAssign3279, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3280, (Optr)&t_assign, (Optr)&t_push_variable, (Optr)VAR_value_1_0, (Optr)&t_send2, (Optr)PSend3281, (Optr)&t_method_return);
    Block PBlock3276 = new_Block_with(PArray3277, empty_Array, PThreadedCode3278, 1, PSend3281);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend3282 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock3276);
    Array PThreadedCode3272 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign3273, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_size, (Optr)&t_send1, (Optr)PSend3274, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3275, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock3276, (Optr)&t_send1, (Optr)PSend3282, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_method_return);
    Method PMethod3270 = new_Method_with(empty_Array, PArray3271, empty_Array, PThreadedCode3272, 4, PAssign3273, PAssign3275, PSend3282, VAR_values_0_0);
    
    MethodClosure MC_SMB_values = new_MethodClosure((Method)PMethod3270, Dictionary_Class);
    store_method(Dictionary_Class, SMB_values, MC_SMB_values);
}


static void init_SMB_keys() {
    Symbol SMB_keys = new_Symbol(L"keys");
    Variable VAR_keys_0_0 = new_Variable_named(L"keys", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray3284 = new_Array_with(2, (Optr)VAR_keys_0_0, (Optr)VAR_index_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend3287 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)slot_Collection_HashedCollection_size);
    Assign PAssign3286 = new_Assign((Optr)VAR_keys_0_0, (Optr)PSend3287);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign3288 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Array PArray3290 = new_Array_with(1, (Optr)VAR_key_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend3293 = new_Send((Optr)VAR_index_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign3292 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend3293);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend3294 = new_Send((Optr)VAR_keys_0_0, SMB_at_put_, 2, (Optr)PAssign3292, (Optr)VAR_key_1_0);
    Array PThreadedCode3291 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_keys_0_0, (Optr)&t_push1, (Optr)PAssign3292, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3293, (Optr)&t_assign, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_send2, (Optr)PSend3294, (Optr)&t_method_return);
    Block PBlock3289 = new_Block_with(PArray3290, empty_Array, PThreadedCode3291, 1, PSend3294);
    Symbol SMB_keysDo_ = new_Symbol(L"keysDo:");
    // keysDo:. 
    Send PSend3295 = new_Send((Optr)self, SMB_keysDo_, 1, (Optr)PBlock3289);
    Array PThreadedCode3285 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign3286, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_size, (Optr)&t_send1, (Optr)PSend3287, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3288, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock3289, (Optr)&t_send1, (Optr)PSend3295, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_keys_0_0, (Optr)&t_method_return);
    Method PMethod3283 = new_Method_with(empty_Array, PArray3284, empty_Array, PThreadedCode3285, 4, PAssign3286, PAssign3288, PSend3295, VAR_keys_0_0);
    
    MethodClosure MC_SMB_keys = new_MethodClosure((Method)PMethod3283, Dictionary_Class);
    store_method(Dictionary_Class, SMB_keys, MC_SMB_keys);
}


static void init_SMB_remove_ifAbsent_() {
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray3297 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_aBlock_0_1);
    Symbol SMB_shouldNotCall = new_Symbol(L"shouldNotCall");
    // shouldNotCall. 
    Send PSend3299 = new_Send((Optr)self, SMB_shouldNotCall, 0);
    Array PThreadedCode3298 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3299, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3296 = new_Method_with(PArray3297, empty_Array, empty_Array, PThreadedCode3298, 2, PSend3299, self);
    
    MethodClosure MC_SMB_remove_ifAbsent_ = new_MethodClosure((Method)PMethod3296, Dictionary_Class);
    store_method(Dictionary_Class, SMB_remove_ifAbsent_, MC_SMB_remove_ifAbsent_);
}


static void init_SMB_inFirstBucketAtNew_put_() {
    Symbol SMB_inFirstBucketAtNew_put_ = new_Symbol(L"inFirstBucketAtNew:put:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray3301 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Variable VAR_bucket_0_2 = new_Variable_named(L"bucket", 0);
    Array PArray3302 = new_Array_with(1, (Optr)VAR_bucket_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3305 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend3308 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign3307 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend3308);
    Symbol SMB_isFull = new_Symbol(L"isFull");
    // isFull. 
    Send PSend3309 = new_Send((Optr)VAR_bucket_0_2, SMB_isFull, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3313 = new_Send((Optr)VAR_bucket_0_2, SMB_size, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend3314 = new_Send((Optr)PSend3313, SMB__lt_, 1, (Optr)slot_Collection_HashedCollection_maxLinear);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Assign PAssign3318 = new_Assign((Optr)slot_Collection_HashedCollection_linear, (Optr)false_Const);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_32 = new_SmallInt(32);
    Constant int_32_Const = new_Constant((Optr)int_32);
    // new:. 
    Send PSend3320 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_32_Const);
    Assign PAssign3319 = new_Assign((Optr)slot_Collection_HashedCollection_buckets, (Optr)PSend3320);
    Symbol SMB_reAddBucket_at_ = new_Symbol(L"reAddBucket:at:");
    // reAddBucket:at:. 
    Send PSend3321 = new_Send((Optr)self, SMB_reAddBucket_at_, 2, (Optr)VAR_bucket_0_2, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend3322 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3323 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3322);
    Array PThreadedCode3317 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign3318, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3319, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)int_32, (Optr)&t_send1, (Optr)PSend3320, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_1, (Optr)&t_send2, (Optr)PSend3321, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend3322, (Optr)&t_send1, (Optr)PSend3323, (Optr)&t_block_return);
    Block PBlock3316 = new_Block_with(empty_Array, empty_Array, PThreadedCode3317, 4, PAssign3318, PAssign3319, PSend3321, PSend3323);
    // ifFalse:. 
    Send PSend3315 = new_Send((Optr)PSend3314, SMB_ifFalse_, 1, (Optr)PBlock3316);
    Symbol SMB_growBucketAt_ = new_Symbol(L"growBucketAt:");
    // growBucketAt:. 
    Send PSend3325 = new_Send((Optr)self, SMB_growBucketAt_, 1, (Optr)int_1_Const);
    Assign PAssign3324 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend3325);
    Array PThreadedCode3312 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_send0, (Optr)PSend3313, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_maxLinear, (Optr)&t_send1, (Optr)PSend3314, (Optr)&t_send_ifFalse_, (Optr)PSend3315, (Optr)PBlock3316, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3324, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3325, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock3311 = new_Block_with(empty_Array, empty_Array, PThreadedCode3312, 2, PSend3315, PAssign3324);
    // ifTrue:. 
    Send PSend3310 = new_Send((Optr)PSend3309, SMB_ifTrue_, 1, (Optr)PBlock3311);
    Symbol SMB_newKey_value_ = new_Symbol(L"newKey:value:");
    // newKey:value:. 
    Send PSend3326 = new_Send((Optr)VAR_bucket_0_2, SMB_newKey_value_, 2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3328 = new_Send((Optr)slot_Collection_HashedCollection_size, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign3327 = new_Assign((Optr)slot_Collection_HashedCollection_size, (Optr)PSend3328);
    Array PThreadedCode3306 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign3307, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3308, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_send0, (Optr)PSend3309, (Optr)&t_send_ifTrue_, (Optr)PSend3310, (Optr)PBlock3311, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend3326, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3327, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_size, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3328, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_method_return);
    Block PBlock3304 = new_Block_with(PArray3305, empty_Array, PThreadedCode3306, 5, PAssign3307, PSend3310, PSend3326, PAssign3327, VAR_value_0_1);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3329 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3304);
    Array PThreadedCode3303 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3304, (Optr)&t_send1, (Optr)PSend3329, (Optr)&t_method_return);
    Method PMethod3300 = new_Method_with(PArray3301, PArray3302, empty_Array, PThreadedCode3303, 1, PSend3329);
    
    MethodClosure MC_SMB_inFirstBucketAtNew_put_ = new_MethodClosure((Method)PMethod3300, Dictionary_Class);
    store_method(Dictionary_Class, SMB_inFirstBucketAtNew_put_, MC_SMB_inFirstBucketAtNew_put_);
}


static void init_SMB_removeKey_() {
    Symbol SMB_removeKey_ = new_Symbol(L"removeKey:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray3331 = new_Array_with(1, (Optr)VAR_key_0_0);
    Symbol SMB_errorKeyNotFound = new_Symbol(L"errorKeyNotFound");
    // errorKeyNotFound. 
    Send PSend3335 = new_Send((Optr)self, SMB_errorKeyNotFound, 0);
    Array PThreadedCode3334 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3335, (Optr)&t_block_return);
    Block PBlock3333 = new_Block_with(empty_Array, empty_Array, PThreadedCode3334, 1, PSend3335);
    Symbol SMB_removeKey_ifAbsent_ = new_Symbol(L"removeKey:ifAbsent:");
    // removeKey:ifAbsent:. 
    Send PSend3336 = new_Send((Optr)self, SMB_removeKey_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock3333);
    Array PThreadedCode3332 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock3333, (Optr)&t_send2, (Optr)PSend3336, (Optr)&t_method_return);
    Method PMethod3330 = new_Method_with(PArray3331, empty_Array, empty_Array, PThreadedCode3332, 1, PSend3336);
    
    MethodClosure MC_SMB_removeKey_ = new_MethodClosure((Method)PMethod3330, Dictionary_Class);
    store_method(Dictionary_Class, SMB_removeKey_, MC_SMB_removeKey_);
}


static void init_SMB_newBucket_() {
    Symbol SMB_newBucket_ = new_Symbol(L"newBucket:");
    Variable VAR_sizeRequested_0_0 = new_Variable_named(L"sizeRequested", 0);
    Array PArray3338 = new_Array_with(1, (Optr)VAR_sizeRequested_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend3340 = new_Send((Optr)PDictBucket_classReference, SMB_new_, 1, (Optr)VAR_sizeRequested_0_0);
    Array PThreadedCode3339 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PDictBucket_classReference, (Optr)&t_push_variable, (Optr)VAR_sizeRequested_0_0, (Optr)&t_send1, (Optr)PSend3340, (Optr)&t_method_return);
    Method PMethod3337 = new_Method_with(PArray3338, empty_Array, empty_Array, PThreadedCode3339, 1, PSend3340);
    
    MethodClosure MC_SMB_newBucket_ = new_MethodClosure((Method)PMethod3337, Dictionary_Class);
    store_method(Dictionary_Class, SMB_newBucket_, MC_SMB_newBucket_);
}


static void init_SMB_inspectChildrenOn_() {
    Symbol SMB_inspectChildrenOn_ = new_Symbol(L"inspectChildrenOn:");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
    Array PArray3342 = new_Array_with(1, (Optr)VAR_inspector_0_0);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray3345 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Array PThreadedCode3348 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_block_return);
    Block PBlock3347 = new_Block_with(empty_Array, empty_Array, PThreadedCode3348, 1, VAR_value_1_1);
    Symbol SMB_child_value_ = new_Symbol(L"child:value:");
    // child:value:. 
    Send PSend3349 = new_Send((Optr)VAR_inspector_0_0, SMB_child_value_, 2, (Optr)VAR_key_1_0, (Optr)PBlock3347);
    Array PThreadedCode3346 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_closure, (Optr)PBlock3347, (Optr)&t_send2, (Optr)PSend3349, (Optr)&t_method_return);
    Block PBlock3344 = new_Block_with(PArray3345, empty_Array, PThreadedCode3346, 1, PSend3349);
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    // keysAndValuesDo:. 
    Send PSend3350 = new_Send((Optr)self, SMB_keysAndValuesDo_, 1, (Optr)PBlock3344);
    Array PThreadedCode3343 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock3344, (Optr)&t_send1, (Optr)PSend3350, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3341 = new_Method_with(PArray3342, empty_Array, empty_Array, PThreadedCode3343, 2, PSend3350, self);
    
    MethodClosure MC_SMB_inspectChildrenOn_ = new_MethodClosure((Method)PMethod3341, Dictionary_Class);
    store_method(Dictionary_Class, SMB_inspectChildrenOn_, MC_SMB_inspectChildrenOn_);
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
    Variable VAR_method_1_0 = new_Variable_named(L"method", 1);
    Array PArray3458 = new_Array_with(1, (Optr)VAR_method_1_0);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend3460 = new_Send((Optr)VAR_method_1_0, SMB_code, 0);
    Symbol SMB_clearNative = new_Symbol(L"clearNative");
    // clearNative. 
    Send PSend3461 = new_Send((Optr)PSend3460, SMB_clearNative, 0);
    Array PThreadedCode3459 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_method_1_0, (Optr)&t_send0, (Optr)PSend3460, (Optr)&t_send0, (Optr)PSend3461, (Optr)&t_method_return);
    Block PBlock3457 = new_Block_with(PArray3458, empty_Array, PThreadedCode3459, 1, PSend3461);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend3462 = new_Send((Optr)PSend3456, SMB_do_, 1, (Optr)PBlock3457);
    Array PThreadedCode3455 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3456, (Optr)&t_push_closure, (Optr)PBlock3457, (Optr)&t_send1, (Optr)PSend3462, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3454 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3455, 2, PSend3462, self);
    
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
    init_SMB_inspectChildrenOn_();
    init_SMB_includes_();
    init_SMB_keysDo_();
    init_SMB_select_();
    init_SMB_at_put_();
    init_SMB_keysAndValuesDo_();
    init_SMB_inFirstBucketAt_ifAbsentPut_();
    init_class_SMB_removeNatives();
    
}