#include <lib/class/Collection/Dictionary.h>


Optr layout_Collection_Dictionary_Class_class;
Optr layout_Collection_Dictionary;


static void init_SMB_grow() {
    Symbol SMB_grow = new_Symbol(L"grow");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Collection_minus_Dictionary = new_Symbol(L"Collection.Dictionary");
    Annotation PAnnotation3076 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_grow, (Optr)SMB_Collection_minus_Dictionary);
    Array PArray3075 = new_Array_with(1, (Optr)PAnnotation3076);
    Super PSuper3078 = new_Super(SMB_grow, 0);
    Array PThreadedCode3077 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper3078, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3074 = new_NativeMethod_with(empty_Array, empty_Array, PArray3075, PThreadedCode3077, 2, PSuper3078, self);
    
    MethodClosure MC_SMB_grow = new_MethodClosure((Method)PNativeMethod3074, Dictionary_Class);
    store_method(Dictionary_Class, SMB_grow, MC_SMB_grow);
}


static void init_SMB_addAll_() {
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    Variable VAR_aDictionary_0_0 = new_Variable_named(L"aDictionary", 0);
    Array PArray3080 = new_Array_with(1, (Optr)VAR_aDictionary_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3083 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend3085 = new_Send((Optr)VAR_aDictionary_0_0, SMB__pequals_, 1, (Optr)self);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3089 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode3088 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend3089, (Optr)&t_block_return);
    Block PBlock3087 = new_Block_with(empty_Array, empty_Array, PThreadedCode3088, 1, PSend3089);
    // ifTrue:. 
    Send PSend3086 = new_Send((Optr)PSend3085, SMB_ifTrue_, 1, (Optr)PBlock3087);
    Variable VAR_key_2_0 = new_Variable_named(L"key", 2);
    Variable VAR_value_2_1 = new_Variable_named(L"value", 2);
    Array PArray3091 = new_Array_with(2, (Optr)VAR_key_2_0, (Optr)VAR_value_2_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend3093 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)VAR_key_2_0, (Optr)VAR_value_2_1);
    Array PThreadedCode3092 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_2_0, (Optr)&t_push_variable, (Optr)VAR_value_2_1, (Optr)&t_send2, (Optr)PSend3093, (Optr)&t_method_return);
    Block PBlock3090 = new_Block_with(PArray3091, empty_Array, PThreadedCode3092, 1, PSend3093);
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    // keysAndValuesDo:. 
    Send PSend3094 = new_Send((Optr)VAR_aDictionary_0_0, SMB_keysAndValuesDo_, 1, (Optr)PBlock3090);
    Array PThreadedCode3084 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_aDictionary_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend3085, (Optr)&t_send_ifTrue_, (Optr)PSend3086, (Optr)PBlock3087, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aDictionary_0_0, (Optr)&t_push_closure, (Optr)PBlock3090, (Optr)&t_send1, (Optr)PSend3094, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aDictionary_0_0, (Optr)&t_method_return);
    Block PBlock3082 = new_Block_with(PArray3083, empty_Array, PThreadedCode3084, 3, PSend3086, PSend3094, VAR_aDictionary_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3095 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3082);
    Array PThreadedCode3081 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3082, (Optr)&t_send1, (Optr)PSend3095, (Optr)&t_method_return);
    Method PMethod3079 = new_Method_with(PArray3080, empty_Array, empty_Array, PThreadedCode3081, 1, PSend3095);
    
    MethodClosure MC_SMB_addAll_ = new_MethodClosure((Method)PMethod3079, Dictionary_Class);
    store_method(Dictionary_Class, SMB_addAll_, MC_SMB_addAll_);
}


static void init_SMB_removeKey_ifAbsent_() {
    Symbol SMB_removeKey_ifAbsent_ = new_Symbol(L"removeKey:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray3097 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_value_0_2 = new_Variable_named(L"value", 0);
    Variable VAR_bucket_0_3 = new_Variable_named(L"bucket", 0);
    Array PArray3098 = new_Array_with(2, (Optr)VAR_value_0_2, (Optr)VAR_bucket_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3101 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend3108 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend3111 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3112 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3111);
    Array PThreadedCode3110 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend3111, (Optr)&t_send1, (Optr)PSend3112, (Optr)&t_block_return);
    Block PBlock3109 = new_Block_with(empty_Array, empty_Array, PThreadedCode3110, 1, PSend3112);
    // remove:ifAbsent:. 
    Send PSend3107 = new_Send((Optr)PSend3108, SMB_remove_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock3109);
    Assign PAssign3106 = new_Assign((Optr)VAR_value_0_2, (Optr)PSend3107);
    Symbol SMB_checkShrink = new_Symbol(L"checkShrink");
    // checkShrink. 
    Send PSend3113 = new_Send((Optr)self, SMB_checkShrink, 0);
    // escape:. 
    Send PSend3114 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_2);
    Array PThreadedCode3105 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign3106, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3108, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock3109, (Optr)&t_send2, (Optr)PSend3107, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3113, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_send1, (Optr)PSend3114, (Optr)&t_block_return);
    Block PBlock3104 = new_Block_with(empty_Array, empty_Array, PThreadedCode3105, 3, PAssign3106, PSend3113, PSend3114);
    // ifTrue:. 
    Send PSend3103 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock3104);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend3119 = new_Send((Optr)VAR_key_0_0, SMB_hash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3120 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend3118 = new_Send((Optr)PSend3119, SMB__modulo_, 1, (Optr)PSend3120);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3117 = new_Send((Optr)PSend3118, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend3116 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)PSend3117);
    Assign PAssign3115 = new_Assign((Optr)VAR_bucket_0_3, (Optr)PSend3116);
    // value. 
    Send PSend3123 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    // escape:. 
    Send PSend3124 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3123);
    Array PThreadedCode3122 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend3123, (Optr)&t_send1, (Optr)PSend3124, (Optr)&t_block_return);
    Block PBlock3121 = new_Block_with(empty_Array, empty_Array, PThreadedCode3122, 1, PSend3124);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend3125 = new_Send((Optr)VAR_bucket_0_3, SMB_ifNil_, 1, (Optr)PBlock3121);
    // value. 
    Send PSend3130 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    // escape:. 
    Send PSend3131 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3130);
    Array PThreadedCode3129 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend3130, (Optr)&t_send1, (Optr)PSend3131, (Optr)&t_block_return);
    Block PBlock3128 = new_Block_with(empty_Array, empty_Array, PThreadedCode3129, 1, PSend3131);
    // remove:ifAbsent:. 
    Send PSend3127 = new_Send((Optr)VAR_bucket_0_3, SMB_remove_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock3128);
    Assign PAssign3126 = new_Assign((Optr)VAR_value_0_2, (Optr)PSend3127);
    // checkShrink. 
    Send PSend3132 = new_Send((Optr)self, SMB_checkShrink, 0);
    Array PThreadedCode3102 = instantiate_Array_with(ThreadedCode_Class, 0, 53, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend3103, (Optr)PBlock3104, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3115, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend3119, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend3120, (Optr)&t_send1, (Optr)PSend3118, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3117, (Optr)&t_send1, (Optr)PSend3116, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_3, (Optr)&t_push_closure, (Optr)PBlock3121, (Optr)&t_send1, (Optr)PSend3125, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3126, (Optr)&t_push_variable, (Optr)VAR_bucket_0_3, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock3128, (Optr)&t_send2, (Optr)PSend3127, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3132, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_method_return);
    Block PBlock3100 = new_Block_with(PArray3101, empty_Array, PThreadedCode3102, 6, PSend3103, PAssign3115, PSend3125, PAssign3126, PSend3132, VAR_value_0_2);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3133 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3100);
    Array PThreadedCode3099 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3100, (Optr)&t_send1, (Optr)PSend3133, (Optr)&t_method_return);
    Method PMethod3096 = new_Method_with(PArray3097, PArray3098, empty_Array, PThreadedCode3099, 1, PSend3133);
    
    MethodClosure MC_SMB_removeKey_ifAbsent_ = new_MethodClosure((Method)PMethod3096, Dictionary_Class);
    store_method(Dictionary_Class, SMB_removeKey_ifAbsent_, MC_SMB_removeKey_ifAbsent_);
}


static void init_SMB_at_ifPresent_() {
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray3135 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3138 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3142 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode3141 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend3142, (Optr)&t_block_return);
    Block PBlock3140 = new_Block_with(empty_Array, empty_Array, PThreadedCode3141, 1, PSend3142);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend3143 = new_Send((Optr)self, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock3140);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend3144 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)PSend3143);
    Array PThreadedCode3139 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock3140, (Optr)&t_send2, (Optr)PSend3143, (Optr)&t_send1, (Optr)PSend3144, (Optr)&t_method_return);
    Block PBlock3137 = new_Block_with(PArray3138, empty_Array, PThreadedCode3139, 1, PSend3144);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3145 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3137);
    Array PThreadedCode3136 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3137, (Optr)&t_send1, (Optr)PSend3145, (Optr)&t_method_return);
    Method PMethod3134 = new_Method_with(PArray3135, empty_Array, empty_Array, PThreadedCode3136, 1, PSend3145);
    
    MethodClosure MC_SMB_at_ifPresent_ = new_MethodClosure((Method)PMethod3134, Dictionary_Class);
    store_method(Dictionary_Class, SMB_at_ifPresent_, MC_SMB_at_ifPresent_);
}


static void init_SMB_at_() {
    Symbol SMB_at_ = new_Symbol(L"at:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray3147 = new_Array_with(1, (Optr)VAR_key_0_0);
    Symbol SMB_errorKeyNotFound_ = new_Symbol(L"errorKeyNotFound:");
    // errorKeyNotFound:. 
    Send PSend3151 = new_Send((Optr)self, SMB_errorKeyNotFound_, 1, (Optr)VAR_key_0_0);
    Array PThreadedCode3150 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send1, (Optr)PSend3151, (Optr)&t_block_return);
    Block PBlock3149 = new_Block_with(empty_Array, empty_Array, PThreadedCode3150, 1, PSend3151);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend3152 = new_Send((Optr)self, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock3149);
    Array PThreadedCode3148 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock3149, (Optr)&t_send2, (Optr)PSend3152, (Optr)&t_method_return);
    Method PMethod3146 = new_Method_with(PArray3147, empty_Array, empty_Array, PThreadedCode3148, 1, PSend3152);
    
    MethodClosure MC_SMB_at_ = new_MethodClosure((Method)PMethod3146, Dictionary_Class);
    store_method(Dictionary_Class, SMB_at_, MC_SMB_at_);
}


static void init_SMB_at_ifAbsent_() {
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray3154 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Collection_minus_Dictionary = new_Symbol(L"Collection.Dictionary");
    Annotation PAnnotation3156 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_at_ifAbsent_, (Optr)SMB_Collection_minus_Dictionary);
    Array PArray3155 = new_Array_with(1, (Optr)PAnnotation3156);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3159 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend3164 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    // at:ifAbsent:. 
    Send PSend3165 = new_Send((Optr)PSend3164, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3166 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3165);
    Array PThreadedCode3163 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3164, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send2, (Optr)PSend3165, (Optr)&t_send1, (Optr)PSend3166, (Optr)&t_block_return);
    Block PBlock3162 = new_Block_with(empty_Array, empty_Array, PThreadedCode3163, 1, PSend3166);
    // ifTrue:. 
    Send PSend3161 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock3162);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend3167 = new_Send((Optr)VAR_key_0_0, SMB_hash, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3168 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    // \\. 
    Send PSend3169 = new_Send((Optr)PSend3167, SMB__modulo_, 1, (Optr)PSend3168);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3170 = new_Send((Optr)PSend3169, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend3171 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)PSend3170);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend3174 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode3173 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend3174, (Optr)&t_block_return);
    Block PBlock3172 = new_Block_with(empty_Array, empty_Array, PThreadedCode3173, 1, PSend3174);
    Variable VAR_bucket_2_0 = new_Variable_named(L"bucket", 2);
    Array PArray3176 = new_Array_with(1, (Optr)VAR_bucket_2_0);
    // at:ifAbsent:. 
    Send PSend3178 = new_Send((Optr)VAR_bucket_2_0, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Array PThreadedCode3177 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_bucket_2_0, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send2, (Optr)PSend3178, (Optr)&t_method_return);
    Block PBlock3175 = new_Block_with(PArray3176, empty_Array, PThreadedCode3177, 1, PSend3178);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend3179 = new_Send((Optr)PSend3171, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock3172, (Optr)PBlock3175);
    Array PThreadedCode3160 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend3161, (Optr)PBlock3162, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend3167, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend3168, (Optr)&t_send1, (Optr)PSend3169, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3170, (Optr)&t_send1, (Optr)PSend3171, (Optr)&t_push_closure, (Optr)PBlock3172, (Optr)&t_push_closure, (Optr)PBlock3175, (Optr)&t_send2, (Optr)PSend3179, (Optr)&t_method_return);
    Block PBlock3158 = new_Block_with(PArray3159, empty_Array, PThreadedCode3160, 2, PSend3161, PSend3179);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3180 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3158);
    Array PThreadedCode3157 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3158, (Optr)&t_send1, (Optr)PSend3180, (Optr)&t_method_return);
    NativeMethod PNativeMethod3153 = new_NativeMethod_with(PArray3154, empty_Array, PArray3155, PThreadedCode3157, 1, PSend3180);
    
    MethodClosure MC_SMB_at_ifAbsent_ = new_MethodClosure((Method)PNativeMethod3153, Dictionary_Class);
    store_method(Dictionary_Class, SMB_at_ifAbsent_, MC_SMB_at_ifAbsent_);
}


static void init_SMB_valuesDo_() {
    Symbol SMB_valuesDo_ = new_Symbol(L"valuesDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray3182 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_bucket_1_0 = new_Variable_named(L"bucket", 1);
    Array PArray3185 = new_Array_with(1, (Optr)VAR_bucket_1_0);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend3187 = new_Send((Optr)VAR_bucket_1_0, SMB_do_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode3186 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_bucket_1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend3187, (Optr)&t_method_return);
    Block PBlock3184 = new_Block_with(PArray3185, empty_Array, PThreadedCode3186, 1, PSend3187);
    Symbol SMB_bucketsDo_ = new_Symbol(L"bucketsDo:");
    // bucketsDo:. 
    Send PSend3188 = new_Send((Optr)self, SMB_bucketsDo_, 1, (Optr)PBlock3184);
    Array PThreadedCode3183 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock3184, (Optr)&t_send1, (Optr)PSend3188, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3181 = new_Method_with(PArray3182, empty_Array, empty_Array, PThreadedCode3183, 2, PSend3188, self);
    
    MethodClosure MC_SMB_valuesDo_ = new_MethodClosure((Method)PMethod3181, Dictionary_Class);
    store_method(Dictionary_Class, SMB_valuesDo_, MC_SMB_valuesDo_);
}


static void init_SMB_includesKey_() {
    Symbol SMB_includesKey_ = new_Symbol(L"includesKey:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray3190 = new_Array_with(1, (Optr)VAR_key_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Collection_minus_Dictionary = new_Symbol(L"Collection.Dictionary");
    Annotation PAnnotation3192 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_includesKey_, (Optr)SMB_Collection_minus_Dictionary);
    Array PArray3191 = new_Array_with(1, (Optr)PAnnotation3192);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3195 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend3200 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    // includesKey:. 
    Send PSend3201 = new_Send((Optr)PSend3200, SMB_includesKey_, 1, (Optr)VAR_key_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3202 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3201);
    Array PThreadedCode3199 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3200, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send1, (Optr)PSend3201, (Optr)&t_send1, (Optr)PSend3202, (Optr)&t_block_return);
    Block PBlock3198 = new_Block_with(empty_Array, empty_Array, PThreadedCode3199, 1, PSend3202);
    // ifTrue:. 
    Send PSend3197 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock3198);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend3203 = new_Send((Optr)VAR_key_0_0, SMB_hash, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3204 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    // \\. 
    Send PSend3205 = new_Send((Optr)PSend3203, SMB__modulo_, 1, (Optr)PSend3204);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3206 = new_Send((Optr)PSend3205, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend3207 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)PSend3206);
    Array PThreadedCode3209 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock3208 = new_Block_with(empty_Array, empty_Array, PThreadedCode3209, 1, false_Const);
    Variable VAR_bucket_2_0 = new_Variable_named(L"bucket", 2);
    Array PArray3211 = new_Array_with(1, (Optr)VAR_bucket_2_0);
    // includesKey:. 
    Send PSend3213 = new_Send((Optr)VAR_bucket_2_0, SMB_includesKey_, 1, (Optr)VAR_key_0_0);
    Array PThreadedCode3212 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_bucket_2_0, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send1, (Optr)PSend3213, (Optr)&t_method_return);
    Block PBlock3210 = new_Block_with(PArray3211, empty_Array, PThreadedCode3212, 1, PSend3213);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend3214 = new_Send((Optr)PSend3207, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock3208, (Optr)PBlock3210);
    Array PThreadedCode3196 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend3197, (Optr)PBlock3198, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend3203, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend3204, (Optr)&t_send1, (Optr)PSend3205, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3206, (Optr)&t_send1, (Optr)PSend3207, (Optr)&t_push_closure, (Optr)PBlock3208, (Optr)&t_push_closure, (Optr)PBlock3210, (Optr)&t_send2, (Optr)PSend3214, (Optr)&t_method_return);
    Block PBlock3194 = new_Block_with(PArray3195, empty_Array, PThreadedCode3196, 2, PSend3197, PSend3214);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3215 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3194);
    Array PThreadedCode3193 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3194, (Optr)&t_send1, (Optr)PSend3215, (Optr)&t_method_return);
    NativeMethod PNativeMethod3189 = new_NativeMethod_with(PArray3190, empty_Array, PArray3191, PThreadedCode3193, 1, PSend3215);
    
    MethodClosure MC_SMB_includesKey_ = new_MethodClosure((Method)PNativeMethod3189, Dictionary_Class);
    store_method(Dictionary_Class, SMB_includesKey_, MC_SMB_includesKey_);
}


static void init_SMB_reAddBucket_at_() {
    Symbol SMB_reAddBucket_at_ = new_Symbol(L"reAddBucket:at:");
    Variable VAR_bucket_0_0 = new_Variable_named(L"bucket", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray3217 = new_Array_with(2, (Optr)VAR_bucket_0_0, (Optr)VAR_index_0_1);
    Variable VAR_c_0_2 = new_Variable_named(L"c", 0);
    Variable VAR_key_0_3 = new_Variable_named(L"key", 0);
    Variable VAR_bucketIndex_0_4 = new_Variable_named(L"bucketIndex", 0);
    Array PArray3218 = new_Array_with(3, (Optr)VAR_c_0_2, (Optr)VAR_key_0_3, (Optr)VAR_bucketIndex_0_4);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign3220 = new_Assign((Optr)VAR_c_0_2, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend3221 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_put_, 2, (Optr)VAR_index_0_1, (Optr)VAR_bucket_0_0);
    Symbol SMB_bucketSize = new_Symbol(L"bucketSize");
    // bucketSize. 
    Send PSend3224 = new_Send((Optr)VAR_bucket_0_0, SMB_bucketSize, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend3225 = new_Send((Optr)VAR_c_0_2, SMB__lt__equals_, 1, (Optr)PSend3224);
    Array PThreadedCode3223 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_send0, (Optr)PSend3224, (Optr)&t_send1, (Optr)PSend3225, (Optr)&t_block_return);
    Block PBlock3222 = new_Block_with(empty_Array, empty_Array, PThreadedCode3223, 1, PSend3225);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend3229 = new_Send((Optr)VAR_bucket_0_0, SMB_at_, 1, (Optr)VAR_c_0_2);
    Assign PAssign3228 = new_Assign((Optr)VAR_key_0_3, (Optr)PSend3229);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend3233 = new_Send((Optr)VAR_key_0_3, SMB_hash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3234 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend3232 = new_Send((Optr)PSend3233, SMB__modulo_, 1, (Optr)PSend3234);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3231 = new_Send((Optr)PSend3232, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign3230 = new_Assign((Optr)VAR_bucketIndex_0_4, (Optr)PSend3231);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend3235 = new_Send((Optr)VAR_bucketIndex_0_4, SMB__equals_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // +. 
    Send PSend3240 = new_Send((Optr)VAR_c_0_2, SMB__plus_, 1, (Optr)int_2_Const);
    Assign PAssign3239 = new_Assign((Optr)VAR_c_0_2, (Optr)PSend3240);
    Array PThreadedCode3238 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign3239, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend3240, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock3237 = new_Block_with(empty_Array, empty_Array, PThreadedCode3238, 1, PAssign3239);
    Symbol SMB_bucketWithRoomAt_ = new_Symbol(L"bucketWithRoomAt:");
    // bucketWithRoomAt:. 
    Send PSend3243 = new_Send((Optr)self, SMB_bucketWithRoomAt_, 1, (Optr)VAR_bucketIndex_0_4);
    // +. 
    Send PSend3244 = new_Send((Optr)VAR_c_0_2, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend3245 = new_Send((Optr)VAR_bucket_0_0, SMB_at_, 1, (Optr)PSend3244);
    Symbol SMB_newKey_value_ = new_Symbol(L"newKey:value:");
    // newKey:value:. 
    Send PSend3246 = new_Send((Optr)PSend3243, SMB_newKey_value_, 2, (Optr)VAR_key_0_3, (Optr)PSend3245);
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    // removeAt:. 
    Send PSend3247 = new_Send((Optr)VAR_bucket_0_0, SMB_removeAt_, 1, (Optr)VAR_c_0_2);
    Array PThreadedCode3242 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_4, (Optr)&t_send1, (Optr)PSend3243, (Optr)&t_push_variable, (Optr)VAR_key_0_3, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3244, (Optr)&t_send1, (Optr)PSend3245, (Optr)&t_send2, (Optr)PSend3246, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_send1, (Optr)PSend3247, (Optr)&t_block_return);
    Block PBlock3241 = new_Block_with(empty_Array, empty_Array, PThreadedCode3242, 2, PSend3246, PSend3247);
    // ifTrue:ifFalse:. 
    Send PSend3236 = new_Send((Optr)PSend3235, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock3237, (Optr)PBlock3241);
    Array PThreadedCode3227 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign3228, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_send1, (Optr)PSend3229, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3230, (Optr)&t_push_variable, (Optr)VAR_key_0_3, (Optr)&t_send0, (Optr)PSend3233, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend3234, (Optr)&t_send1, (Optr)PSend3232, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3231, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_4, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend3235, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend3236, (Optr)PBlock3237, (Optr)PBlock3241, (Optr)&t_block_return);
    Block PBlock3226 = new_Block_with(empty_Array, empty_Array, PThreadedCode3227, 3, PAssign3228, PAssign3230, PSend3236);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend3248 = new_Send((Optr)PBlock3222, SMB_whileTrue_, 1, (Optr)PBlock3226);
    Array PThreadedCode3219 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign3220, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_send2, (Optr)PSend3221, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock3222, (Optr)&t_push_closure, (Optr)PBlock3226, (Optr)&t_send1, (Optr)PSend3248, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3216 = new_Method_with(PArray3217, PArray3218, empty_Array, PThreadedCode3219, 4, PAssign3220, PSend3221, PSend3248, self);
    
    MethodClosure MC_SMB_reAddBucket_at_ = new_MethodClosure((Method)PMethod3216, Dictionary_Class);
    store_method(Dictionary_Class, SMB_reAddBucket_at_, MC_SMB_reAddBucket_at_);
}


static void init_SMB_at_ifAbsentPut_() {
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray3250 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend3254 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend3255 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)VAR_key_0_0, (Optr)PSend3254);
    Array PThreadedCode3253 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend3254, (Optr)&t_send2, (Optr)PSend3255, (Optr)&t_block_return);
    Block PBlock3252 = new_Block_with(empty_Array, empty_Array, PThreadedCode3253, 1, PSend3255);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend3256 = new_Send((Optr)self, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock3252);
    Array PThreadedCode3251 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock3252, (Optr)&t_send2, (Optr)PSend3256, (Optr)&t_method_return);
    Method PMethod3249 = new_Method_with(PArray3250, empty_Array, empty_Array, PThreadedCode3251, 1, PSend3256);
    
    MethodClosure MC_SMB_at_ifAbsentPut_ = new_MethodClosure((Method)PMethod3249, Dictionary_Class);
    store_method(Dictionary_Class, SMB_at_ifAbsentPut_, MC_SMB_at_ifAbsentPut_);
}


static void init_SMB_inFirstBucketAt_put_() {
    Symbol SMB_inFirstBucketAt_put_ = new_Symbol(L"inFirstBucketAt:put:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_anObject_0_1 = new_Variable_named(L"anObject", 0);
    Array PArray3258 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend3260 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    Symbol SMB_assign_to_ = new_Symbol(L"assign:to:");
    // assign:to:. 
    Send PSend3261 = new_Send((Optr)PSend3260, SMB_assign_to_, 2, (Optr)VAR_key_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode3264 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_block_return);
    Block PBlock3263 = new_Block_with(empty_Array, empty_Array, PThreadedCode3264, 1, VAR_anObject_0_1);
    Symbol SMB_inFirstBucketAtNew_put_ = new_Symbol(L"inFirstBucketAtNew:put:");
    // inFirstBucketAtNew:put:. 
    Send PSend3267 = new_Send((Optr)self, SMB_inFirstBucketAtNew_put_, 2, (Optr)VAR_key_0_0, (Optr)VAR_anObject_0_1);
    Array PThreadedCode3266 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend3267, (Optr)&t_block_return);
    Block PBlock3265 = new_Block_with(empty_Array, empty_Array, PThreadedCode3266, 1, PSend3267);
    // ifTrue:ifFalse:. 
    Send PSend3262 = new_Send((Optr)PSend3261, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock3263, (Optr)PBlock3265);
    Array PThreadedCode3259 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3260, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend3261, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend3262, (Optr)PBlock3263, (Optr)PBlock3265, (Optr)&t_method_return);
    Method PMethod3257 = new_Method_with(PArray3258, empty_Array, empty_Array, PThreadedCode3259, 1, PSend3262);
    
    MethodClosure MC_SMB_inFirstBucketAt_put_ = new_MethodClosure((Method)PMethod3257, Dictionary_Class);
    store_method(Dictionary_Class, SMB_inFirstBucketAt_put_, MC_SMB_inFirstBucketAt_put_);
}


static void init_SMB_errorKeyNotFound_() {
    Symbol SMB_errorKeyNotFound_ = new_Symbol(L"errorKeyNotFound:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Array PArray3269 = new_Array_with(1, (Optr)VAR_aKey_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray3272 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_key_ = new_Symbol(L"key:");
    // key:. 
    Send PSend3274 = new_Send((Optr)VAR__receiver__1_0, SMB_key_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_dictionary_ = new_Symbol(L"dictionary:");
    // dictionary:. 
    Send PSend3275 = new_Send((Optr)VAR__receiver__1_0, SMB_dictionary_, 1, (Optr)self);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend3276 = new_Send((Optr)VAR__receiver__1_0, SMB_signal, 0);
    Array PThreadedCode3273 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend3274, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend3275, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend3276, (Optr)&t_method_return);
    Block PBlock3271 = new_Block_with(PArray3272, empty_Array, PThreadedCode3273, 3, PSend3274, PSend3275, PSend3276);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend3277 = new_Send((Optr)PKeyNotFound_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend3278 = new_Send((Optr)PBlock3271, SMB_value_, 1, (Optr)PSend3277);
    Array PThreadedCode3270 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock3271, (Optr)&t_push_class_reference, (Optr)PKeyNotFound_classReference, (Optr)&t_send0, (Optr)PSend3277, (Optr)&t_send1, (Optr)PSend3278, (Optr)&t_method_return);
    Method PMethod3268 = new_Method_with(PArray3269, empty_Array, empty_Array, PThreadedCode3270, 1, PSend3278);
    
    MethodClosure MC_SMB_errorKeyNotFound_ = new_MethodClosure((Method)PMethod3268, Dictionary_Class);
    store_method(Dictionary_Class, SMB_errorKeyNotFound_, MC_SMB_errorKeyNotFound_);
}


static void init_SMB_values() {
    Symbol SMB_values = new_Symbol(L"values");
    Variable VAR_values_0_0 = new_Variable_named(L"values", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray3280 = new_Array_with(2, (Optr)VAR_values_0_0, (Optr)VAR_index_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend3283 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)slot_Collection_HashedCollection_size);
    Assign PAssign3282 = new_Assign((Optr)VAR_values_0_0, (Optr)PSend3283);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign3284 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Variable VAR_value_1_0 = new_Variable_named(L"value", 1);
    Array PArray3286 = new_Array_with(1, (Optr)VAR_value_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend3289 = new_Send((Optr)VAR_index_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign3288 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend3289);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend3290 = new_Send((Optr)VAR_values_0_0, SMB_at_put_, 2, (Optr)PAssign3288, (Optr)VAR_value_1_0);
    Array PThreadedCode3287 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_push1, (Optr)PAssign3288, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3289, (Optr)&t_assign, (Optr)&t_push_variable, (Optr)VAR_value_1_0, (Optr)&t_send2, (Optr)PSend3290, (Optr)&t_method_return);
    Block PBlock3285 = new_Block_with(PArray3286, empty_Array, PThreadedCode3287, 1, PSend3290);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend3291 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock3285);
    Array PThreadedCode3281 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign3282, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_size, (Optr)&t_send1, (Optr)PSend3283, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3284, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock3285, (Optr)&t_send1, (Optr)PSend3291, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_method_return);
    Method PMethod3279 = new_Method_with(empty_Array, PArray3280, empty_Array, PThreadedCode3281, 4, PAssign3282, PAssign3284, PSend3291, VAR_values_0_0);
    
    MethodClosure MC_SMB_values = new_MethodClosure((Method)PMethod3279, Dictionary_Class);
    store_method(Dictionary_Class, SMB_values, MC_SMB_values);
}


static void init_SMB_keys() {
    Symbol SMB_keys = new_Symbol(L"keys");
    Variable VAR_keys_0_0 = new_Variable_named(L"keys", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray3293 = new_Array_with(2, (Optr)VAR_keys_0_0, (Optr)VAR_index_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend3296 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)slot_Collection_HashedCollection_size);
    Assign PAssign3295 = new_Assign((Optr)VAR_keys_0_0, (Optr)PSend3296);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign3297 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Array PArray3299 = new_Array_with(1, (Optr)VAR_key_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend3302 = new_Send((Optr)VAR_index_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign3301 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend3302);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend3303 = new_Send((Optr)VAR_keys_0_0, SMB_at_put_, 2, (Optr)PAssign3301, (Optr)VAR_key_1_0);
    Array PThreadedCode3300 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_keys_0_0, (Optr)&t_push1, (Optr)PAssign3301, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3302, (Optr)&t_assign, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_send2, (Optr)PSend3303, (Optr)&t_method_return);
    Block PBlock3298 = new_Block_with(PArray3299, empty_Array, PThreadedCode3300, 1, PSend3303);
    Symbol SMB_keysDo_ = new_Symbol(L"keysDo:");
    // keysDo:. 
    Send PSend3304 = new_Send((Optr)self, SMB_keysDo_, 1, (Optr)PBlock3298);
    Array PThreadedCode3294 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign3295, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_size, (Optr)&t_send1, (Optr)PSend3296, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3297, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock3298, (Optr)&t_send1, (Optr)PSend3304, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_keys_0_0, (Optr)&t_method_return);
    Method PMethod3292 = new_Method_with(empty_Array, PArray3293, empty_Array, PThreadedCode3294, 4, PAssign3295, PAssign3297, PSend3304, VAR_keys_0_0);
    
    MethodClosure MC_SMB_keys = new_MethodClosure((Method)PMethod3292, Dictionary_Class);
    store_method(Dictionary_Class, SMB_keys, MC_SMB_keys);
}


static void init_SMB_remove_ifAbsent_() {
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray3306 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_aBlock_0_1);
    Symbol SMB_shouldNotCall = new_Symbol(L"shouldNotCall");
    // shouldNotCall. 
    Send PSend3308 = new_Send((Optr)self, SMB_shouldNotCall, 0);
    Array PThreadedCode3307 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3308, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3305 = new_Method_with(PArray3306, empty_Array, empty_Array, PThreadedCode3307, 2, PSend3308, self);
    
    MethodClosure MC_SMB_remove_ifAbsent_ = new_MethodClosure((Method)PMethod3305, Dictionary_Class);
    store_method(Dictionary_Class, SMB_remove_ifAbsent_, MC_SMB_remove_ifAbsent_);
}


static void init_SMB_inFirstBucketAtNew_put_() {
    Symbol SMB_inFirstBucketAtNew_put_ = new_Symbol(L"inFirstBucketAtNew:put:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray3310 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Variable VAR_bucket_0_2 = new_Variable_named(L"bucket", 0);
    Array PArray3311 = new_Array_with(1, (Optr)VAR_bucket_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3314 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend3317 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign3316 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend3317);
    Symbol SMB_isFull = new_Symbol(L"isFull");
    // isFull. 
    Send PSend3318 = new_Send((Optr)VAR_bucket_0_2, SMB_isFull, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3322 = new_Send((Optr)VAR_bucket_0_2, SMB_size, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend3323 = new_Send((Optr)PSend3322, SMB__lt_, 1, (Optr)slot_Collection_HashedCollection_maxLinear);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Assign PAssign3327 = new_Assign((Optr)slot_Collection_HashedCollection_linear, (Optr)false_Const);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_32 = new_SmallInt(32);
    Constant int_32_Const = new_Constant((Optr)int_32);
    // new:. 
    Send PSend3329 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_32_Const);
    Assign PAssign3328 = new_Assign((Optr)slot_Collection_HashedCollection_buckets, (Optr)PSend3329);
    Symbol SMB_reAddBucket_at_ = new_Symbol(L"reAddBucket:at:");
    // reAddBucket:at:. 
    Send PSend3330 = new_Send((Optr)self, SMB_reAddBucket_at_, 2, (Optr)VAR_bucket_0_2, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend3331 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3332 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3331);
    Array PThreadedCode3326 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign3327, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3328, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)int_32, (Optr)&t_send1, (Optr)PSend3329, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_1, (Optr)&t_send2, (Optr)PSend3330, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend3331, (Optr)&t_send1, (Optr)PSend3332, (Optr)&t_block_return);
    Block PBlock3325 = new_Block_with(empty_Array, empty_Array, PThreadedCode3326, 4, PAssign3327, PAssign3328, PSend3330, PSend3332);
    // ifFalse:. 
    Send PSend3324 = new_Send((Optr)PSend3323, SMB_ifFalse_, 1, (Optr)PBlock3325);
    Symbol SMB_growBucketAt_ = new_Symbol(L"growBucketAt:");
    // growBucketAt:. 
    Send PSend3334 = new_Send((Optr)self, SMB_growBucketAt_, 1, (Optr)int_1_Const);
    Assign PAssign3333 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend3334);
    Array PThreadedCode3321 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_send0, (Optr)PSend3322, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_maxLinear, (Optr)&t_send1, (Optr)PSend3323, (Optr)&t_send_ifFalse_, (Optr)PSend3324, (Optr)PBlock3325, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3333, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3334, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock3320 = new_Block_with(empty_Array, empty_Array, PThreadedCode3321, 2, PSend3324, PAssign3333);
    // ifTrue:. 
    Send PSend3319 = new_Send((Optr)PSend3318, SMB_ifTrue_, 1, (Optr)PBlock3320);
    Symbol SMB_newKey_value_ = new_Symbol(L"newKey:value:");
    // newKey:value:. 
    Send PSend3335 = new_Send((Optr)VAR_bucket_0_2, SMB_newKey_value_, 2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3337 = new_Send((Optr)slot_Collection_HashedCollection_size, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign3336 = new_Assign((Optr)slot_Collection_HashedCollection_size, (Optr)PSend3337);
    Array PThreadedCode3315 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign3316, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3317, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_send0, (Optr)PSend3318, (Optr)&t_send_ifTrue_, (Optr)PSend3319, (Optr)PBlock3320, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend3335, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3336, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_size, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3337, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_method_return);
    Block PBlock3313 = new_Block_with(PArray3314, empty_Array, PThreadedCode3315, 5, PAssign3316, PSend3319, PSend3335, PAssign3336, VAR_value_0_1);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3338 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3313);
    Array PThreadedCode3312 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3313, (Optr)&t_send1, (Optr)PSend3338, (Optr)&t_method_return);
    Method PMethod3309 = new_Method_with(PArray3310, PArray3311, empty_Array, PThreadedCode3312, 1, PSend3338);
    
    MethodClosure MC_SMB_inFirstBucketAtNew_put_ = new_MethodClosure((Method)PMethod3309, Dictionary_Class);
    store_method(Dictionary_Class, SMB_inFirstBucketAtNew_put_, MC_SMB_inFirstBucketAtNew_put_);
}


static void init_SMB_removeKey_() {
    Symbol SMB_removeKey_ = new_Symbol(L"removeKey:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray3340 = new_Array_with(1, (Optr)VAR_key_0_0);
    Symbol SMB_errorKeyNotFound = new_Symbol(L"errorKeyNotFound");
    // errorKeyNotFound. 
    Send PSend3344 = new_Send((Optr)self, SMB_errorKeyNotFound, 0);
    Array PThreadedCode3343 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3344, (Optr)&t_block_return);
    Block PBlock3342 = new_Block_with(empty_Array, empty_Array, PThreadedCode3343, 1, PSend3344);
    Symbol SMB_removeKey_ifAbsent_ = new_Symbol(L"removeKey:ifAbsent:");
    // removeKey:ifAbsent:. 
    Send PSend3345 = new_Send((Optr)self, SMB_removeKey_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock3342);
    Array PThreadedCode3341 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock3342, (Optr)&t_send2, (Optr)PSend3345, (Optr)&t_method_return);
    Method PMethod3339 = new_Method_with(PArray3340, empty_Array, empty_Array, PThreadedCode3341, 1, PSend3345);
    
    MethodClosure MC_SMB_removeKey_ = new_MethodClosure((Method)PMethod3339, Dictionary_Class);
    store_method(Dictionary_Class, SMB_removeKey_, MC_SMB_removeKey_);
}


static void init_SMB_newBucket_() {
    Symbol SMB_newBucket_ = new_Symbol(L"newBucket:");
    Variable VAR_sizeRequested_0_0 = new_Variable_named(L"sizeRequested", 0);
    Array PArray3347 = new_Array_with(1, (Optr)VAR_sizeRequested_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend3349 = new_Send((Optr)PDictBucket_classReference, SMB_new_, 1, (Optr)VAR_sizeRequested_0_0);
    Array PThreadedCode3348 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PDictBucket_classReference, (Optr)&t_push_variable, (Optr)VAR_sizeRequested_0_0, (Optr)&t_send1, (Optr)PSend3349, (Optr)&t_method_return);
    Method PMethod3346 = new_Method_with(PArray3347, empty_Array, empty_Array, PThreadedCode3348, 1, PSend3349);
    
    MethodClosure MC_SMB_newBucket_ = new_MethodClosure((Method)PMethod3346, Dictionary_Class);
    store_method(Dictionary_Class, SMB_newBucket_, MC_SMB_newBucket_);
}


static void init_SMB_inspectChildrenOn_() {
    Symbol SMB_inspectChildrenOn_ = new_Symbol(L"inspectChildrenOn:");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
    Array PArray3351 = new_Array_with(1, (Optr)VAR_inspector_0_0);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray3354 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Array PThreadedCode3357 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_block_return);
    Block PBlock3356 = new_Block_with(empty_Array, empty_Array, PThreadedCode3357, 1, VAR_value_1_1);
    Symbol SMB_child_value_ = new_Symbol(L"child:value:");
    // child:value:. 
    Send PSend3358 = new_Send((Optr)VAR_inspector_0_0, SMB_child_value_, 2, (Optr)VAR_key_1_0, (Optr)PBlock3356);
    Array PThreadedCode3355 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_closure, (Optr)PBlock3356, (Optr)&t_send2, (Optr)PSend3358, (Optr)&t_method_return);
    Block PBlock3353 = new_Block_with(PArray3354, empty_Array, PThreadedCode3355, 1, PSend3358);
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    // keysAndValuesDo:. 
    Send PSend3359 = new_Send((Optr)self, SMB_keysAndValuesDo_, 1, (Optr)PBlock3353);
    Array PThreadedCode3352 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock3353, (Optr)&t_send1, (Optr)PSend3359, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3350 = new_Method_with(PArray3351, empty_Array, empty_Array, PThreadedCode3352, 2, PSend3359, self);
    
    MethodClosure MC_SMB_inspectChildrenOn_ = new_MethodClosure((Method)PMethod3350, Dictionary_Class);
    store_method(Dictionary_Class, SMB_inspectChildrenOn_, MC_SMB_inspectChildrenOn_);
}


static void init_SMB_includes_() {
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray3361 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3364 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_bucket_2_0 = new_Variable_named(L"bucket", 2);
    Array PArray3367 = new_Array_with(1, (Optr)VAR_bucket_2_0);
    // includes:. 
    Send PSend3369 = new_Send((Optr)VAR_bucket_2_0, SMB_includes_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3373 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode3372 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend3373, (Optr)&t_block_return);
    Block PBlock3371 = new_Block_with(empty_Array, empty_Array, PThreadedCode3372, 1, PSend3373);
    // ifTrue:. 
    Send PSend3370 = new_Send((Optr)PSend3369, SMB_ifTrue_, 1, (Optr)PBlock3371);
    Array PThreadedCode3368 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_bucket_2_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend3369, (Optr)&t_send_ifTrue_, (Optr)PSend3370, (Optr)PBlock3371, (Optr)&t_method_return);
    Block PBlock3366 = new_Block_with(PArray3367, empty_Array, PThreadedCode3368, 1, PSend3370);
    Symbol SMB_bucketsDo_ = new_Symbol(L"bucketsDo:");
    // bucketsDo:. 
    Send PSend3374 = new_Send((Optr)self, SMB_bucketsDo_, 1, (Optr)PBlock3366);
    Array PThreadedCode3365 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock3366, (Optr)&t_send1, (Optr)PSend3374, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock3363 = new_Block_with(PArray3364, empty_Array, PThreadedCode3365, 2, PSend3374, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3375 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3363);
    Array PThreadedCode3362 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3363, (Optr)&t_send1, (Optr)PSend3375, (Optr)&t_method_return);
    Method PMethod3360 = new_Method_with(PArray3361, empty_Array, empty_Array, PThreadedCode3362, 1, PSend3375);
    
    MethodClosure MC_SMB_includes_ = new_MethodClosure((Method)PMethod3360, Dictionary_Class);
    store_method(Dictionary_Class, SMB_includes_, MC_SMB_includes_);
}


static void init_SMB_keysDo_() {
    Symbol SMB_keysDo_ = new_Symbol(L"keysDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray3377 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_bucket_1_0 = new_Variable_named(L"bucket", 1);
    Array PArray3380 = new_Array_with(1, (Optr)VAR_bucket_1_0);
    // keysDo:. 
    Send PSend3382 = new_Send((Optr)VAR_bucket_1_0, SMB_keysDo_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode3381 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_bucket_1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend3382, (Optr)&t_method_return);
    Block PBlock3379 = new_Block_with(PArray3380, empty_Array, PThreadedCode3381, 1, PSend3382);
    Symbol SMB_bucketsDo_ = new_Symbol(L"bucketsDo:");
    // bucketsDo:. 
    Send PSend3383 = new_Send((Optr)self, SMB_bucketsDo_, 1, (Optr)PBlock3379);
    Array PThreadedCode3378 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock3379, (Optr)&t_send1, (Optr)PSend3383, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3376 = new_Method_with(PArray3377, empty_Array, empty_Array, PThreadedCode3378, 2, PSend3383, self);
    
    MethodClosure MC_SMB_keysDo_ = new_MethodClosure((Method)PMethod3376, Dictionary_Class);
    store_method(Dictionary_Class, SMB_keysDo_, MC_SMB_keysDo_);
}


static void init_SMB_select_() {
    Symbol SMB_select_ = new_Symbol(L"select:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray3385 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Array PArray3386 = new_Array_with(1, (Optr)VAR_newCollection_0_1);
    Symbol SMB_copyEmpty = new_Symbol(L"copyEmpty");
    // copyEmpty. 
    Send PSend3389 = new_Send((Optr)self, SMB_copyEmpty, 0);
    Assign PAssign3388 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend3389);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray3391 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend3393 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)VAR_value_1_1);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend3397 = new_Send((Optr)VAR_newCollection_0_1, SMB_at_put_, 2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Array PThreadedCode3396 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send2, (Optr)PSend3397, (Optr)&t_block_return);
    Block PBlock3395 = new_Block_with(empty_Array, empty_Array, PThreadedCode3396, 1, PSend3397);
    // ifTrue:. 
    Send PSend3394 = new_Send((Optr)PSend3393, SMB_ifTrue_, 1, (Optr)PBlock3395);
    Array PThreadedCode3392 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_send1, (Optr)PSend3393, (Optr)&t_send_ifTrue_, (Optr)PSend3394, (Optr)PBlock3395, (Optr)&t_method_return);
    Block PBlock3390 = new_Block_with(PArray3391, empty_Array, PThreadedCode3392, 1, PSend3394);
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    // keysAndValuesDo:. 
    Send PSend3398 = new_Send((Optr)self, SMB_keysAndValuesDo_, 1, (Optr)PBlock3390);
    Array PThreadedCode3387 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign3388, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3389, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock3390, (Optr)&t_send1, (Optr)PSend3398, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod3384 = new_Method_with(PArray3385, PArray3386, empty_Array, PThreadedCode3387, 3, PAssign3388, PSend3398, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_select_ = new_MethodClosure((Method)PMethod3384, Dictionary_Class);
    store_method(Dictionary_Class, SMB_select_, MC_SMB_select_);
}


static void init_SMB_at_put_() {
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_anObject_0_1 = new_Variable_named(L"anObject", 0);
    Array PArray3400 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_anObject_0_1);
    Variable VAR_bucketIndex_0_2 = new_Variable_named(L"bucketIndex", 0);
    Variable VAR_bucket_0_3 = new_Variable_named(L"bucket", 0);
    Array PArray3401 = new_Array_with(2, (Optr)VAR_bucketIndex_0_2, (Optr)VAR_bucket_0_3);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Collection_minus_Dictionary = new_Symbol(L"Collection.Dictionary");
    Annotation PAnnotation3403 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_at_put_, (Optr)SMB_Collection_minus_Dictionary);
    Array PArray3402 = new_Array_with(1, (Optr)PAnnotation3403);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3406 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_inFirstBucketAt_put_ = new_Symbol(L"inFirstBucketAt:put:");
    // inFirstBucketAt:put:. 
    Send PSend3411 = new_Send((Optr)self, SMB_inFirstBucketAt_put_, 2, (Optr)VAR_key_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3412 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3411);
    Array PThreadedCode3410 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend3411, (Optr)&t_send1, (Optr)PSend3412, (Optr)&t_block_return);
    Block PBlock3409 = new_Block_with(empty_Array, empty_Array, PThreadedCode3410, 1, PSend3412);
    // ifTrue:. 
    Send PSend3408 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock3409);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend3416 = new_Send((Optr)VAR_key_0_0, SMB_hash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3417 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend3415 = new_Send((Optr)PSend3416, SMB__modulo_, 1, (Optr)PSend3417);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend3414 = new_Send((Optr)PSend3415, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign3413 = new_Assign((Optr)VAR_bucketIndex_0_2, (Optr)PSend3414);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend3419 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)VAR_bucketIndex_0_2);
    Assign PAssign3418 = new_Assign((Optr)VAR_bucket_0_3, (Optr)PSend3419);
    Symbol SMB_newBucketAt_ = new_Symbol(L"newBucketAt:");
    // newBucketAt:. 
    Send PSend3422 = new_Send((Optr)self, SMB_newBucketAt_, 1, (Optr)VAR_bucketIndex_0_2);
    Symbol SMB_newKey_value_ = new_Symbol(L"newKey:value:");
    // newKey:value:. 
    Send PSend3423 = new_Send((Optr)PSend3422, SMB_newKey_value_, 2, (Optr)VAR_key_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_checkGrow = new_Symbol(L"checkGrow");
    // checkGrow. 
    Send PSend3424 = new_Send((Optr)self, SMB_checkGrow, 0);
    // escape:. 
    Send PSend3425 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_anObject_0_1);
    Array PThreadedCode3421 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_2, (Optr)&t_send1, (Optr)PSend3422, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend3423, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3424, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send1, (Optr)PSend3425, (Optr)&t_block_return);
    Block PBlock3420 = new_Block_with(empty_Array, empty_Array, PThreadedCode3421, 3, PSend3423, PSend3424, PSend3425);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend3426 = new_Send((Optr)VAR_bucket_0_3, SMB_ifNil_, 1, (Optr)PBlock3420);
    Symbol SMB_assign_to_ = new_Symbol(L"assign:to:");
    // assign:to:. 
    Send PSend3427 = new_Send((Optr)VAR_bucket_0_3, SMB_assign_to_, 2, (Optr)VAR_key_0_0, (Optr)VAR_anObject_0_1);
    // escape:. 
    Send PSend3431 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_anObject_0_1);
    Array PThreadedCode3430 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send1, (Optr)PSend3431, (Optr)&t_block_return);
    Block PBlock3429 = new_Block_with(empty_Array, empty_Array, PThreadedCode3430, 1, PSend3431);
    // ifTrue:. 
    Send PSend3428 = new_Send((Optr)PSend3427, SMB_ifTrue_, 1, (Optr)PBlock3429);
    Symbol SMB_isFull = new_Symbol(L"isFull");
    // isFull. 
    Send PSend3432 = new_Send((Optr)VAR_bucket_0_3, SMB_isFull, 0);
    Symbol SMB_growBucketAt_ = new_Symbol(L"growBucketAt:");
    // growBucketAt:. 
    Send PSend3437 = new_Send((Optr)self, SMB_growBucketAt_, 1, (Optr)VAR_bucketIndex_0_2);
    Assign PAssign3436 = new_Assign((Optr)VAR_bucket_0_3, (Optr)PSend3437);
    Array PThreadedCode3435 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign3436, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_2, (Optr)&t_send1, (Optr)PSend3437, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock3434 = new_Block_with(empty_Array, empty_Array, PThreadedCode3435, 1, PAssign3436);
    // ifTrue:. 
    Send PSend3433 = new_Send((Optr)PSend3432, SMB_ifTrue_, 1, (Optr)PBlock3434);
    // newKey:value:. 
    Send PSend3438 = new_Send((Optr)VAR_bucket_0_3, SMB_newKey_value_, 2, (Optr)VAR_key_0_0, (Optr)VAR_anObject_0_1);
    // checkGrow. 
    Send PSend3439 = new_Send((Optr)self, SMB_checkGrow, 0);
    Array PThreadedCode3407 = instantiate_Array_with(ThreadedCode_Class, 0, 76, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend3408, (Optr)PBlock3409, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3413, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend3416, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend3417, (Optr)&t_send1, (Optr)PSend3415, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3414, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3418, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_2, (Optr)&t_send1, (Optr)PSend3419, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_3, (Optr)&t_push_closure, (Optr)PBlock3420, (Optr)&t_send1, (Optr)PSend3426, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_3, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend3427, (Optr)&t_send_ifTrue_, (Optr)PSend3428, (Optr)PBlock3429, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_3, (Optr)&t_send0, (Optr)PSend3432, (Optr)&t_send_ifTrue_, (Optr)PSend3433, (Optr)PBlock3434, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_3, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend3438, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3439, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_method_return);
    Block PBlock3405 = new_Block_with(PArray3406, empty_Array, PThreadedCode3407, 9, PSend3408, PAssign3413, PAssign3418, PSend3426, PSend3428, PSend3433, PSend3438, PSend3439, VAR_anObject_0_1);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3440 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3405);
    Array PThreadedCode3404 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3405, (Optr)&t_send1, (Optr)PSend3440, (Optr)&t_method_return);
    NativeMethod PNativeMethod3399 = new_NativeMethod_with(PArray3400, PArray3401, PArray3402, PThreadedCode3404, 1, PSend3440);
    
    MethodClosure MC_SMB_at_put_ = new_MethodClosure((Method)PNativeMethod3399, Dictionary_Class);
    store_method(Dictionary_Class, SMB_at_put_, MC_SMB_at_put_);
}


static void init_SMB_keysAndValuesDo_() {
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray3442 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_bucket_1_0 = new_Variable_named(L"bucket", 1);
    Array PArray3445 = new_Array_with(1, (Optr)VAR_bucket_1_0);
    // keysAndValuesDo:. 
    Send PSend3447 = new_Send((Optr)VAR_bucket_1_0, SMB_keysAndValuesDo_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode3446 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_bucket_1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend3447, (Optr)&t_method_return);
    Block PBlock3444 = new_Block_with(PArray3445, empty_Array, PThreadedCode3446, 1, PSend3447);
    Symbol SMB_bucketsDo_ = new_Symbol(L"bucketsDo:");
    // bucketsDo:. 
    Send PSend3448 = new_Send((Optr)self, SMB_bucketsDo_, 1, (Optr)PBlock3444);
    Array PThreadedCode3443 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock3444, (Optr)&t_send1, (Optr)PSend3448, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3441 = new_Method_with(PArray3442, empty_Array, empty_Array, PThreadedCode3443, 2, PSend3448, self);
    
    MethodClosure MC_SMB_keysAndValuesDo_ = new_MethodClosure((Method)PMethod3441, Dictionary_Class);
    store_method(Dictionary_Class, SMB_keysAndValuesDo_, MC_SMB_keysAndValuesDo_);
}


static void init_SMB_inFirstBucketAt_ifAbsentPut_() {
    Symbol SMB_inFirstBucketAt_ifAbsentPut_ = new_Symbol(L"inFirstBucketAt:ifAbsentPut:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray3450 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3453 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend3455 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend3458 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Symbol SMB_inFirstBucketAtNew_put_ = new_Symbol(L"inFirstBucketAtNew:put:");
    // inFirstBucketAtNew:put:. 
    Send PSend3459 = new_Send((Optr)self, SMB_inFirstBucketAtNew_put_, 2, (Optr)VAR_key_0_0, (Optr)PSend3458);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3460 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3459);
    Array PThreadedCode3457 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend3458, (Optr)&t_send2, (Optr)PSend3459, (Optr)&t_send1, (Optr)PSend3460, (Optr)&t_block_return);
    Block PBlock3456 = new_Block_with(empty_Array, empty_Array, PThreadedCode3457, 1, PSend3460);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend3461 = new_Send((Optr)PSend3455, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock3456);
    Array PThreadedCode3454 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3455, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock3456, (Optr)&t_send2, (Optr)PSend3461, (Optr)&t_method_return);
    Block PBlock3452 = new_Block_with(PArray3453, empty_Array, PThreadedCode3454, 1, PSend3461);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3462 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3452);
    Array PThreadedCode3451 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3452, (Optr)&t_send1, (Optr)PSend3462, (Optr)&t_method_return);
    Method PMethod3449 = new_Method_with(PArray3450, empty_Array, empty_Array, PThreadedCode3451, 1, PSend3462);
    
    MethodClosure MC_SMB_inFirstBucketAt_ifAbsentPut_ = new_MethodClosure((Method)PMethod3449, Dictionary_Class);
    store_method(Dictionary_Class, SMB_inFirstBucketAt_ifAbsentPut_, MC_SMB_inFirstBucketAt_ifAbsentPut_);
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
    
}