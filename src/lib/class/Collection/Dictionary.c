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


static void init_SMB_inspectChildrenOn_() {
    Symbol SMB_inspectChildrenOn_ = new_Symbol(L"inspectChildrenOn:");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
    Array PArray3097 = new_Array_with(1, (Optr)VAR_inspector_0_0);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray3100 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Array PThreadedCode3103 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_block_return);
    Block PBlock3102 = new_Block_with(empty_Array, empty_Array, PThreadedCode3103, 1, VAR_value_1_1);
    Symbol SMB_child_value_ = new_Symbol(L"child:value:");
    // child:value:. 
    Send PSend3104 = new_Send((Optr)VAR_inspector_0_0, SMB_child_value_, 2, (Optr)VAR_key_1_0, (Optr)PBlock3102);
    Array PThreadedCode3101 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_closure, (Optr)PBlock3102, (Optr)&t_send2, (Optr)PSend3104, (Optr)&t_method_return);
    Block PBlock3099 = new_Block_with(PArray3100, empty_Array, PThreadedCode3101, 1, PSend3104);
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    // keysAndValuesDo:. 
    Send PSend3105 = new_Send((Optr)self, SMB_keysAndValuesDo_, 1, (Optr)PBlock3099);
    Array PThreadedCode3098 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock3099, (Optr)&t_send1, (Optr)PSend3105, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3096 = new_Method_with(PArray3097, empty_Array, empty_Array, PThreadedCode3098, 2, PSend3105, self);
    
    MethodClosure MC_SMB_inspectChildrenOn_ = new_MethodClosure((Method)PMethod3096, Dictionary_Class);
    store_method(Dictionary_Class, SMB_inspectChildrenOn_, MC_SMB_inspectChildrenOn_);
}


static void init_SMB_removeKey_ifAbsent_() {
    Symbol SMB_removeKey_ifAbsent_ = new_Symbol(L"removeKey:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray3107 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_value_0_2 = new_Variable_named(L"value", 0);
    Variable VAR_bucket_0_3 = new_Variable_named(L"bucket", 0);
    Array PArray3108 = new_Array_with(2, (Optr)VAR_value_0_2, (Optr)VAR_bucket_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3111 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend3118 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend3121 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3122 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3121);
    Array PThreadedCode3120 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend3121, (Optr)&t_send1, (Optr)PSend3122, (Optr)&t_block_return);
    Block PBlock3119 = new_Block_with(empty_Array, empty_Array, PThreadedCode3120, 1, PSend3122);
    // remove:ifAbsent:. 
    Send PSend3117 = new_Send((Optr)PSend3118, SMB_remove_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock3119);
    Assign PAssign3116 = new_Assign((Optr)VAR_value_0_2, (Optr)PSend3117);
    Symbol SMB_checkShrink = new_Symbol(L"checkShrink");
    // checkShrink. 
    Send PSend3123 = new_Send((Optr)self, SMB_checkShrink, 0);
    // escape:. 
    Send PSend3124 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_2);
    Array PThreadedCode3115 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign3116, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3118, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock3119, (Optr)&t_send2, (Optr)PSend3117, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3123, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_send1, (Optr)PSend3124, (Optr)&t_block_return);
    Block PBlock3114 = new_Block_with(empty_Array, empty_Array, PThreadedCode3115, 3, PAssign3116, PSend3123, PSend3124);
    // ifTrue:. 
    Send PSend3113 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock3114);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend3129 = new_Send((Optr)VAR_key_0_0, SMB_hash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3130 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend3128 = new_Send((Optr)PSend3129, SMB__modulo_, 1, (Optr)PSend3130);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3127 = new_Send((Optr)PSend3128, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend3126 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)PSend3127);
    Assign PAssign3125 = new_Assign((Optr)VAR_bucket_0_3, (Optr)PSend3126);
    // value. 
    Send PSend3133 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    // escape:. 
    Send PSend3134 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3133);
    Array PThreadedCode3132 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend3133, (Optr)&t_send1, (Optr)PSend3134, (Optr)&t_block_return);
    Block PBlock3131 = new_Block_with(empty_Array, empty_Array, PThreadedCode3132, 1, PSend3134);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend3135 = new_Send((Optr)VAR_bucket_0_3, SMB_ifNil_, 1, (Optr)PBlock3131);
    // value. 
    Send PSend3140 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    // escape:. 
    Send PSend3141 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3140);
    Array PThreadedCode3139 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend3140, (Optr)&t_send1, (Optr)PSend3141, (Optr)&t_block_return);
    Block PBlock3138 = new_Block_with(empty_Array, empty_Array, PThreadedCode3139, 1, PSend3141);
    // remove:ifAbsent:. 
    Send PSend3137 = new_Send((Optr)VAR_bucket_0_3, SMB_remove_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock3138);
    Assign PAssign3136 = new_Assign((Optr)VAR_value_0_2, (Optr)PSend3137);
    // checkShrink. 
    Send PSend3142 = new_Send((Optr)self, SMB_checkShrink, 0);
    Array PThreadedCode3112 = instantiate_Array_with(ThreadedCode_Class, 0, 53, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend3113, (Optr)PBlock3114, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3125, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend3129, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend3130, (Optr)&t_send1, (Optr)PSend3128, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3127, (Optr)&t_send1, (Optr)PSend3126, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_3, (Optr)&t_push_closure, (Optr)PBlock3131, (Optr)&t_send1, (Optr)PSend3135, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3136, (Optr)&t_push_variable, (Optr)VAR_bucket_0_3, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock3138, (Optr)&t_send2, (Optr)PSend3137, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3142, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_2, (Optr)&t_method_return);
    Block PBlock3110 = new_Block_with(PArray3111, empty_Array, PThreadedCode3112, 6, PSend3113, PAssign3125, PSend3135, PAssign3136, PSend3142, VAR_value_0_2);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3143 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3110);
    Array PThreadedCode3109 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3110, (Optr)&t_send1, (Optr)PSend3143, (Optr)&t_method_return);
    Method PMethod3106 = new_Method_with(PArray3107, PArray3108, empty_Array, PThreadedCode3109, 1, PSend3143);
    
    MethodClosure MC_SMB_removeKey_ifAbsent_ = new_MethodClosure((Method)PMethod3106, Dictionary_Class);
    store_method(Dictionary_Class, SMB_removeKey_ifAbsent_, MC_SMB_removeKey_ifAbsent_);
}


static void init_SMB_at_ifPresent_() {
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray3145 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3148 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3152 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode3151 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend3152, (Optr)&t_block_return);
    Block PBlock3150 = new_Block_with(empty_Array, empty_Array, PThreadedCode3151, 1, PSend3152);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend3153 = new_Send((Optr)self, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock3150);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend3154 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)PSend3153);
    Array PThreadedCode3149 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock3150, (Optr)&t_send2, (Optr)PSend3153, (Optr)&t_send1, (Optr)PSend3154, (Optr)&t_method_return);
    Block PBlock3147 = new_Block_with(PArray3148, empty_Array, PThreadedCode3149, 1, PSend3154);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3155 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3147);
    Array PThreadedCode3146 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3147, (Optr)&t_send1, (Optr)PSend3155, (Optr)&t_method_return);
    Method PMethod3144 = new_Method_with(PArray3145, empty_Array, empty_Array, PThreadedCode3146, 1, PSend3155);
    
    MethodClosure MC_SMB_at_ifPresent_ = new_MethodClosure((Method)PMethod3144, Dictionary_Class);
    store_method(Dictionary_Class, SMB_at_ifPresent_, MC_SMB_at_ifPresent_);
}


static void init_SMB_at_() {
    Symbol SMB_at_ = new_Symbol(L"at:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray3157 = new_Array_with(1, (Optr)VAR_key_0_0);
    Symbol SMB_errorKeyNotFound_ = new_Symbol(L"errorKeyNotFound:");
    // errorKeyNotFound:. 
    Send PSend3161 = new_Send((Optr)self, SMB_errorKeyNotFound_, 1, (Optr)VAR_key_0_0);
    Array PThreadedCode3160 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send1, (Optr)PSend3161, (Optr)&t_block_return);
    Block PBlock3159 = new_Block_with(empty_Array, empty_Array, PThreadedCode3160, 1, PSend3161);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend3162 = new_Send((Optr)self, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock3159);
    Array PThreadedCode3158 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock3159, (Optr)&t_send2, (Optr)PSend3162, (Optr)&t_method_return);
    Method PMethod3156 = new_Method_with(PArray3157, empty_Array, empty_Array, PThreadedCode3158, 1, PSend3162);
    
    MethodClosure MC_SMB_at_ = new_MethodClosure((Method)PMethod3156, Dictionary_Class);
    store_method(Dictionary_Class, SMB_at_, MC_SMB_at_);
}


static void init_SMB_at_ifAbsent_() {
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray3164 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Collection_minus_Dictionary = new_Symbol(L"Collection.Dictionary");
    Annotation PAnnotation3166 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_at_ifAbsent_, (Optr)SMB_Collection_minus_Dictionary);
    Array PArray3165 = new_Array_with(1, (Optr)PAnnotation3166);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3169 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend3174 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    // at:ifAbsent:. 
    Send PSend3175 = new_Send((Optr)PSend3174, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3176 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3175);
    Array PThreadedCode3173 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3174, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send2, (Optr)PSend3175, (Optr)&t_send1, (Optr)PSend3176, (Optr)&t_block_return);
    Block PBlock3172 = new_Block_with(empty_Array, empty_Array, PThreadedCode3173, 1, PSend3176);
    // ifTrue:. 
    Send PSend3171 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock3172);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend3177 = new_Send((Optr)VAR_key_0_0, SMB_hash, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3178 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    // \\. 
    Send PSend3179 = new_Send((Optr)PSend3177, SMB__modulo_, 1, (Optr)PSend3178);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3180 = new_Send((Optr)PSend3179, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend3181 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)PSend3180);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend3184 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Array PThreadedCode3183 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend3184, (Optr)&t_block_return);
    Block PBlock3182 = new_Block_with(empty_Array, empty_Array, PThreadedCode3183, 1, PSend3184);
    Variable VAR_bucket_2_0 = new_Variable_named(L"bucket", 2);
    Array PArray3186 = new_Array_with(1, (Optr)VAR_bucket_2_0);
    // at:ifAbsent:. 
    Send PSend3188 = new_Send((Optr)VAR_bucket_2_0, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Array PThreadedCode3187 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_bucket_2_0, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send2, (Optr)PSend3188, (Optr)&t_method_return);
    Block PBlock3185 = new_Block_with(PArray3186, empty_Array, PThreadedCode3187, 1, PSend3188);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend3189 = new_Send((Optr)PSend3181, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock3182, (Optr)PBlock3185);
    Array PThreadedCode3170 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend3171, (Optr)PBlock3172, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend3177, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend3178, (Optr)&t_send1, (Optr)PSend3179, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3180, (Optr)&t_send1, (Optr)PSend3181, (Optr)&t_push_closure, (Optr)PBlock3182, (Optr)&t_push_closure, (Optr)PBlock3185, (Optr)&t_send2, (Optr)PSend3189, (Optr)&t_method_return);
    Block PBlock3168 = new_Block_with(PArray3169, empty_Array, PThreadedCode3170, 2, PSend3171, PSend3189);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3190 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3168);
    Array PThreadedCode3167 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3168, (Optr)&t_send1, (Optr)PSend3190, (Optr)&t_method_return);
    NativeMethod PNativeMethod3163 = new_NativeMethod_with(PArray3164, empty_Array, PArray3165, PThreadedCode3167, 1, PSend3190);
    
    MethodClosure MC_SMB_at_ifAbsent_ = new_MethodClosure((Method)PNativeMethod3163, Dictionary_Class);
    store_method(Dictionary_Class, SMB_at_ifAbsent_, MC_SMB_at_ifAbsent_);
}


static void init_SMB_valuesDo_() {
    Symbol SMB_valuesDo_ = new_Symbol(L"valuesDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray3192 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_bucket_1_0 = new_Variable_named(L"bucket", 1);
    Array PArray3195 = new_Array_with(1, (Optr)VAR_bucket_1_0);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend3197 = new_Send((Optr)VAR_bucket_1_0, SMB_do_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode3196 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_bucket_1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend3197, (Optr)&t_method_return);
    Block PBlock3194 = new_Block_with(PArray3195, empty_Array, PThreadedCode3196, 1, PSend3197);
    Symbol SMB_bucketsDo_ = new_Symbol(L"bucketsDo:");
    // bucketsDo:. 
    Send PSend3198 = new_Send((Optr)self, SMB_bucketsDo_, 1, (Optr)PBlock3194);
    Array PThreadedCode3193 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock3194, (Optr)&t_send1, (Optr)PSend3198, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3191 = new_Method_with(PArray3192, empty_Array, empty_Array, PThreadedCode3193, 2, PSend3198, self);
    
    MethodClosure MC_SMB_valuesDo_ = new_MethodClosure((Method)PMethod3191, Dictionary_Class);
    store_method(Dictionary_Class, SMB_valuesDo_, MC_SMB_valuesDo_);
}


static void init_SMB_includesKey_() {
    Symbol SMB_includesKey_ = new_Symbol(L"includesKey:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray3200 = new_Array_with(1, (Optr)VAR_key_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Collection_minus_Dictionary = new_Symbol(L"Collection.Dictionary");
    Annotation PAnnotation3202 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_includesKey_, (Optr)SMB_Collection_minus_Dictionary);
    Array PArray3201 = new_Array_with(1, (Optr)PAnnotation3202);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3205 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend3210 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    // includesKey:. 
    Send PSend3211 = new_Send((Optr)PSend3210, SMB_includesKey_, 1, (Optr)VAR_key_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3212 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3211);
    Array PThreadedCode3209 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3210, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send1, (Optr)PSend3211, (Optr)&t_send1, (Optr)PSend3212, (Optr)&t_block_return);
    Block PBlock3208 = new_Block_with(empty_Array, empty_Array, PThreadedCode3209, 1, PSend3212);
    // ifTrue:. 
    Send PSend3207 = new_Send((Optr)slot_Collection_HashedCollection_linear, SMB_ifTrue_, 1, (Optr)PBlock3208);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend3213 = new_Send((Optr)VAR_key_0_0, SMB_hash, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3214 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    // \\. 
    Send PSend3215 = new_Send((Optr)PSend3213, SMB__modulo_, 1, (Optr)PSend3214);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3216 = new_Send((Optr)PSend3215, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend3217 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)PSend3216);
    Array PThreadedCode3219 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock3218 = new_Block_with(empty_Array, empty_Array, PThreadedCode3219, 1, false_Const);
    Variable VAR_bucket_2_0 = new_Variable_named(L"bucket", 2);
    Array PArray3221 = new_Array_with(1, (Optr)VAR_bucket_2_0);
    // includesKey:. 
    Send PSend3223 = new_Send((Optr)VAR_bucket_2_0, SMB_includesKey_, 1, (Optr)VAR_key_0_0);
    Array PThreadedCode3222 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_bucket_2_0, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send1, (Optr)PSend3223, (Optr)&t_method_return);
    Block PBlock3220 = new_Block_with(PArray3221, empty_Array, PThreadedCode3222, 1, PSend3223);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    // ifNil:ifNotNil:. 
    Send PSend3224 = new_Send((Optr)PSend3217, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock3218, (Optr)PBlock3220);
    Array PThreadedCode3206 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_linear, (Optr)&t_send_ifTrue_, (Optr)PSend3207, (Optr)PBlock3208, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_send0, (Optr)PSend3213, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend3214, (Optr)&t_send1, (Optr)PSend3215, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3216, (Optr)&t_send1, (Optr)PSend3217, (Optr)&t_push_closure, (Optr)PBlock3218, (Optr)&t_push_closure, (Optr)PBlock3220, (Optr)&t_send2, (Optr)PSend3224, (Optr)&t_method_return);
    Block PBlock3204 = new_Block_with(PArray3205, empty_Array, PThreadedCode3206, 2, PSend3207, PSend3224);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3225 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3204);
    Array PThreadedCode3203 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3204, (Optr)&t_send1, (Optr)PSend3225, (Optr)&t_method_return);
    NativeMethod PNativeMethod3199 = new_NativeMethod_with(PArray3200, empty_Array, PArray3201, PThreadedCode3203, 1, PSend3225);
    
    MethodClosure MC_SMB_includesKey_ = new_MethodClosure((Method)PNativeMethod3199, Dictionary_Class);
    store_method(Dictionary_Class, SMB_includesKey_, MC_SMB_includesKey_);
}


static void init_SMB_reAddBucket_at_() {
    Symbol SMB_reAddBucket_at_ = new_Symbol(L"reAddBucket:at:");
    Variable VAR_bucket_0_0 = new_Variable_named(L"bucket", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray3227 = new_Array_with(2, (Optr)VAR_bucket_0_0, (Optr)VAR_index_0_1);
    Variable VAR_c_0_2 = new_Variable_named(L"c", 0);
    Variable VAR_key_0_3 = new_Variable_named(L"key", 0);
    Variable VAR_bucketIndex_0_4 = new_Variable_named(L"bucketIndex", 0);
    Array PArray3228 = new_Array_with(3, (Optr)VAR_c_0_2, (Optr)VAR_key_0_3, (Optr)VAR_bucketIndex_0_4);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign3230 = new_Assign((Optr)VAR_c_0_2, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend3231 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_put_, 2, (Optr)VAR_index_0_1, (Optr)VAR_bucket_0_0);
    Symbol SMB_bucketSize = new_Symbol(L"bucketSize");
    // bucketSize. 
    Send PSend3234 = new_Send((Optr)VAR_bucket_0_0, SMB_bucketSize, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend3235 = new_Send((Optr)VAR_c_0_2, SMB__lt__equals_, 1, (Optr)PSend3234);
    Array PThreadedCode3233 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_send0, (Optr)PSend3234, (Optr)&t_send1, (Optr)PSend3235, (Optr)&t_block_return);
    Block PBlock3232 = new_Block_with(empty_Array, empty_Array, PThreadedCode3233, 1, PSend3235);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend3239 = new_Send((Optr)VAR_bucket_0_0, SMB_at_, 1, (Optr)VAR_c_0_2);
    Assign PAssign3238 = new_Assign((Optr)VAR_key_0_3, (Optr)PSend3239);
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend3243 = new_Send((Optr)VAR_key_0_3, SMB_hash, 0);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3244 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_size, 0);
    // \\. 
    Send PSend3242 = new_Send((Optr)PSend3243, SMB__modulo_, 1, (Optr)PSend3244);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3241 = new_Send((Optr)PSend3242, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign3240 = new_Assign((Optr)VAR_bucketIndex_0_4, (Optr)PSend3241);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend3245 = new_Send((Optr)VAR_bucketIndex_0_4, SMB__equals_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // +. 
    Send PSend3250 = new_Send((Optr)VAR_c_0_2, SMB__plus_, 1, (Optr)int_2_Const);
    Assign PAssign3249 = new_Assign((Optr)VAR_c_0_2, (Optr)PSend3250);
    Array PThreadedCode3248 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign3249, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend3250, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock3247 = new_Block_with(empty_Array, empty_Array, PThreadedCode3248, 1, PAssign3249);
    Symbol SMB_bucketWithRoomAt_ = new_Symbol(L"bucketWithRoomAt:");
    // bucketWithRoomAt:. 
    Send PSend3253 = new_Send((Optr)self, SMB_bucketWithRoomAt_, 1, (Optr)VAR_bucketIndex_0_4);
    // +. 
    Send PSend3254 = new_Send((Optr)VAR_c_0_2, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend3255 = new_Send((Optr)VAR_bucket_0_0, SMB_at_, 1, (Optr)PSend3254);
    Symbol SMB_newKey_value_ = new_Symbol(L"newKey:value:");
    // newKey:value:. 
    Send PSend3256 = new_Send((Optr)PSend3253, SMB_newKey_value_, 2, (Optr)VAR_key_0_3, (Optr)PSend3255);
    Symbol SMB_removeAt_ = new_Symbol(L"removeAt:");
    // removeAt:. 
    Send PSend3257 = new_Send((Optr)VAR_bucket_0_0, SMB_removeAt_, 1, (Optr)VAR_c_0_2);
    Array PThreadedCode3252 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_4, (Optr)&t_send1, (Optr)PSend3253, (Optr)&t_push_variable, (Optr)VAR_key_0_3, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3254, (Optr)&t_send1, (Optr)PSend3255, (Optr)&t_send2, (Optr)PSend3256, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_send1, (Optr)PSend3257, (Optr)&t_block_return);
    Block PBlock3251 = new_Block_with(empty_Array, empty_Array, PThreadedCode3252, 2, PSend3256, PSend3257);
    // ifTrue:ifFalse:. 
    Send PSend3246 = new_Send((Optr)PSend3245, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock3247, (Optr)PBlock3251);
    Array PThreadedCode3237 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign3238, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_send1, (Optr)PSend3239, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3240, (Optr)&t_push_variable, (Optr)VAR_key_0_3, (Optr)&t_send0, (Optr)PSend3243, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_send0, (Optr)PSend3244, (Optr)&t_send1, (Optr)PSend3242, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3241, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucketIndex_0_4, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend3245, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend3246, (Optr)PBlock3247, (Optr)PBlock3251, (Optr)&t_block_return);
    Block PBlock3236 = new_Block_with(empty_Array, empty_Array, PThreadedCode3237, 3, PAssign3238, PAssign3240, PSend3246);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend3258 = new_Send((Optr)PBlock3232, SMB_whileTrue_, 1, (Optr)PBlock3236);
    Array PThreadedCode3229 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign3230, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_bucket_0_0, (Optr)&t_send2, (Optr)PSend3231, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock3232, (Optr)&t_push_closure, (Optr)PBlock3236, (Optr)&t_send1, (Optr)PSend3258, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3226 = new_Method_with(PArray3227, PArray3228, empty_Array, PThreadedCode3229, 4, PAssign3230, PSend3231, PSend3258, self);
    
    MethodClosure MC_SMB_reAddBucket_at_ = new_MethodClosure((Method)PMethod3226, Dictionary_Class);
    store_method(Dictionary_Class, SMB_reAddBucket_at_, MC_SMB_reAddBucket_at_);
}


static void init_SMB_at_ifAbsentPut_() {
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray3260 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_aBlock_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend3264 = new_Send((Optr)VAR_aBlock_0_1, SMB_value, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend3265 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)VAR_key_0_0, (Optr)PSend3264);
    Array PThreadedCode3263 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_send0, (Optr)PSend3264, (Optr)&t_send2, (Optr)PSend3265, (Optr)&t_block_return);
    Block PBlock3262 = new_Block_with(empty_Array, empty_Array, PThreadedCode3263, 1, PSend3265);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend3266 = new_Send((Optr)self, SMB_at_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock3262);
    Array PThreadedCode3261 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock3262, (Optr)&t_send2, (Optr)PSend3266, (Optr)&t_method_return);
    Method PMethod3259 = new_Method_with(PArray3260, empty_Array, empty_Array, PThreadedCode3261, 1, PSend3266);
    
    MethodClosure MC_SMB_at_ifAbsentPut_ = new_MethodClosure((Method)PMethod3259, Dictionary_Class);
    store_method(Dictionary_Class, SMB_at_ifAbsentPut_, MC_SMB_at_ifAbsentPut_);
}


static void init_SMB_inFirstBucketAt_put_() {
    Symbol SMB_inFirstBucketAt_put_ = new_Symbol(L"inFirstBucketAt:put:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_anObject_0_1 = new_Variable_named(L"anObject", 0);
    Array PArray3268 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend3270 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    Symbol SMB_assign_to_ = new_Symbol(L"assign:to:");
    // assign:to:. 
    Send PSend3271 = new_Send((Optr)PSend3270, SMB_assign_to_, 2, (Optr)VAR_key_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode3274 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_block_return);
    Block PBlock3273 = new_Block_with(empty_Array, empty_Array, PThreadedCode3274, 1, VAR_anObject_0_1);
    Symbol SMB_inFirstBucketAtNew_put_ = new_Symbol(L"inFirstBucketAtNew:put:");
    // inFirstBucketAtNew:put:. 
    Send PSend3277 = new_Send((Optr)self, SMB_inFirstBucketAtNew_put_, 2, (Optr)VAR_key_0_0, (Optr)VAR_anObject_0_1);
    Array PThreadedCode3276 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend3277, (Optr)&t_block_return);
    Block PBlock3275 = new_Block_with(empty_Array, empty_Array, PThreadedCode3276, 1, PSend3277);
    // ifTrue:ifFalse:. 
    Send PSend3272 = new_Send((Optr)PSend3271, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock3273, (Optr)PBlock3275);
    Array PThreadedCode3269 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3270, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend3271, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend3272, (Optr)PBlock3273, (Optr)PBlock3275, (Optr)&t_method_return);
    Method PMethod3267 = new_Method_with(PArray3268, empty_Array, empty_Array, PThreadedCode3269, 1, PSend3272);
    
    MethodClosure MC_SMB_inFirstBucketAt_put_ = new_MethodClosure((Method)PMethod3267, Dictionary_Class);
    store_method(Dictionary_Class, SMB_inFirstBucketAt_put_, MC_SMB_inFirstBucketAt_put_);
}


static void init_SMB_errorKeyNotFound_() {
    Symbol SMB_errorKeyNotFound_ = new_Symbol(L"errorKeyNotFound:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Array PArray3279 = new_Array_with(1, (Optr)VAR_aKey_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray3282 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_key_ = new_Symbol(L"key:");
    // key:. 
    Send PSend3284 = new_Send((Optr)VAR__receiver__1_0, SMB_key_, 1, (Optr)VAR_aKey_0_0);
    Symbol SMB_dictionary_ = new_Symbol(L"dictionary:");
    // dictionary:. 
    Send PSend3285 = new_Send((Optr)VAR__receiver__1_0, SMB_dictionary_, 1, (Optr)self);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend3286 = new_Send((Optr)VAR__receiver__1_0, SMB_signal, 0);
    Array PThreadedCode3283 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend3284, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend3285, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend3286, (Optr)&t_method_return);
    Block PBlock3281 = new_Block_with(PArray3282, empty_Array, PThreadedCode3283, 3, PSend3284, PSend3285, PSend3286);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend3287 = new_Send((Optr)PKeyNotFound_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend3288 = new_Send((Optr)PBlock3281, SMB_value_, 1, (Optr)PSend3287);
    Array PThreadedCode3280 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock3281, (Optr)&t_push_class_reference, (Optr)PKeyNotFound_classReference, (Optr)&t_send0, (Optr)PSend3287, (Optr)&t_send1, (Optr)PSend3288, (Optr)&t_method_return);
    Method PMethod3278 = new_Method_with(PArray3279, empty_Array, empty_Array, PThreadedCode3280, 1, PSend3288);
    
    MethodClosure MC_SMB_errorKeyNotFound_ = new_MethodClosure((Method)PMethod3278, Dictionary_Class);
    store_method(Dictionary_Class, SMB_errorKeyNotFound_, MC_SMB_errorKeyNotFound_);
}


static void init_SMB_values() {
    Symbol SMB_values = new_Symbol(L"values");
    Variable VAR_values_0_0 = new_Variable_named(L"values", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray3290 = new_Array_with(2, (Optr)VAR_values_0_0, (Optr)VAR_index_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend3293 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)slot_Collection_HashedCollection_size);
    Assign PAssign3292 = new_Assign((Optr)VAR_values_0_0, (Optr)PSend3293);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign3294 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Variable VAR_value_1_0 = new_Variable_named(L"value", 1);
    Array PArray3296 = new_Array_with(1, (Optr)VAR_value_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend3299 = new_Send((Optr)VAR_index_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign3298 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend3299);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend3300 = new_Send((Optr)VAR_values_0_0, SMB_at_put_, 2, (Optr)PAssign3298, (Optr)VAR_value_1_0);
    Array PThreadedCode3297 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_push1, (Optr)PAssign3298, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3299, (Optr)&t_assign, (Optr)&t_push_variable, (Optr)VAR_value_1_0, (Optr)&t_send2, (Optr)PSend3300, (Optr)&t_method_return);
    Block PBlock3295 = new_Block_with(PArray3296, empty_Array, PThreadedCode3297, 1, PSend3300);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend3301 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock3295);
    Array PThreadedCode3291 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign3292, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_size, (Optr)&t_send1, (Optr)PSend3293, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3294, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock3295, (Optr)&t_send1, (Optr)PSend3301, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_method_return);
    Method PMethod3289 = new_Method_with(empty_Array, PArray3290, empty_Array, PThreadedCode3291, 4, PAssign3292, PAssign3294, PSend3301, VAR_values_0_0);
    
    MethodClosure MC_SMB_values = new_MethodClosure((Method)PMethod3289, Dictionary_Class);
    store_method(Dictionary_Class, SMB_values, MC_SMB_values);
}


static void init_SMB_keys() {
    Symbol SMB_keys = new_Symbol(L"keys");
    Variable VAR_keys_0_0 = new_Variable_named(L"keys", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray3303 = new_Array_with(2, (Optr)VAR_keys_0_0, (Optr)VAR_index_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend3306 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)slot_Collection_HashedCollection_size);
    Assign PAssign3305 = new_Assign((Optr)VAR_keys_0_0, (Optr)PSend3306);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign3307 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Array PArray3309 = new_Array_with(1, (Optr)VAR_key_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend3312 = new_Send((Optr)VAR_index_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign3311 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend3312);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend3313 = new_Send((Optr)VAR_keys_0_0, SMB_at_put_, 2, (Optr)PAssign3311, (Optr)VAR_key_1_0);
    Array PThreadedCode3310 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_keys_0_0, (Optr)&t_push1, (Optr)PAssign3311, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3312, (Optr)&t_assign, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_send2, (Optr)PSend3313, (Optr)&t_method_return);
    Block PBlock3308 = new_Block_with(PArray3309, empty_Array, PThreadedCode3310, 1, PSend3313);
    Symbol SMB_keysDo_ = new_Symbol(L"keysDo:");
    // keysDo:. 
    Send PSend3314 = new_Send((Optr)self, SMB_keysDo_, 1, (Optr)PBlock3308);
    Array PThreadedCode3304 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign3305, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_size, (Optr)&t_send1, (Optr)PSend3306, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3307, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock3308, (Optr)&t_send1, (Optr)PSend3314, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_keys_0_0, (Optr)&t_method_return);
    Method PMethod3302 = new_Method_with(empty_Array, PArray3303, empty_Array, PThreadedCode3304, 4, PAssign3305, PAssign3307, PSend3314, VAR_keys_0_0);
    
    MethodClosure MC_SMB_keys = new_MethodClosure((Method)PMethod3302, Dictionary_Class);
    store_method(Dictionary_Class, SMB_keys, MC_SMB_keys);
}


static void init_SMB_remove_ifAbsent_() {
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray3316 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_aBlock_0_1);
    Symbol SMB_shouldNotCall = new_Symbol(L"shouldNotCall");
    // shouldNotCall. 
    Send PSend3318 = new_Send((Optr)self, SMB_shouldNotCall, 0);
    Array PThreadedCode3317 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3318, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3315 = new_Method_with(PArray3316, empty_Array, empty_Array, PThreadedCode3317, 2, PSend3318, self);
    
    MethodClosure MC_SMB_remove_ifAbsent_ = new_MethodClosure((Method)PMethod3315, Dictionary_Class);
    store_method(Dictionary_Class, SMB_remove_ifAbsent_, MC_SMB_remove_ifAbsent_);
}


static void init_SMB_inFirstBucketAtNew_put_() {
    Symbol SMB_inFirstBucketAtNew_put_ = new_Symbol(L"inFirstBucketAtNew:put:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray3320 = new_Array_with(2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Variable VAR_bucket_0_2 = new_Variable_named(L"bucket", 0);
    Array PArray3321 = new_Array_with(1, (Optr)VAR_bucket_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3324 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend3327 = new_Send((Optr)slot_Collection_HashedCollection_buckets, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign3326 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend3327);
    Symbol SMB_isFull = new_Symbol(L"isFull");
    // isFull. 
    Send PSend3328 = new_Send((Optr)VAR_bucket_0_2, SMB_isFull, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend3332 = new_Send((Optr)VAR_bucket_0_2, SMB_size, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend3333 = new_Send((Optr)PSend3332, SMB__lt_, 1, (Optr)slot_Collection_HashedCollection_maxLinear);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Assign PAssign3337 = new_Assign((Optr)slot_Collection_HashedCollection_linear, (Optr)false_Const);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_32 = new_SmallInt(32);
    Constant int_32_Const = new_Constant((Optr)int_32);
    // new:. 
    Send PSend3339 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_32_Const);
    Assign PAssign3338 = new_Assign((Optr)slot_Collection_HashedCollection_buckets, (Optr)PSend3339);
    Symbol SMB_reAddBucket_at_ = new_Symbol(L"reAddBucket:at:");
    // reAddBucket:at:. 
    Send PSend3340 = new_Send((Optr)self, SMB_reAddBucket_at_, 2, (Optr)VAR_bucket_0_2, (Optr)int_1_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend3341 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3342 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3341);
    Array PThreadedCode3336 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign3337, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3338, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)int_32, (Optr)&t_send1, (Optr)PSend3339, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_1, (Optr)&t_send2, (Optr)PSend3340, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend3341, (Optr)&t_send1, (Optr)PSend3342, (Optr)&t_block_return);
    Block PBlock3335 = new_Block_with(empty_Array, empty_Array, PThreadedCode3336, 4, PAssign3337, PAssign3338, PSend3340, PSend3342);
    // ifFalse:. 
    Send PSend3334 = new_Send((Optr)PSend3333, SMB_ifFalse_, 1, (Optr)PBlock3335);
    Symbol SMB_growBucketAt_ = new_Symbol(L"growBucketAt:");
    // growBucketAt:. 
    Send PSend3344 = new_Send((Optr)self, SMB_growBucketAt_, 1, (Optr)int_1_Const);
    Assign PAssign3343 = new_Assign((Optr)VAR_bucket_0_2, (Optr)PSend3344);
    Array PThreadedCode3331 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_send0, (Optr)PSend3332, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_maxLinear, (Optr)&t_send1, (Optr)PSend3333, (Optr)&t_send_ifFalse_, (Optr)PSend3334, (Optr)PBlock3335, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3343, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3344, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock3330 = new_Block_with(empty_Array, empty_Array, PThreadedCode3331, 2, PSend3334, PAssign3343);
    // ifTrue:. 
    Send PSend3329 = new_Send((Optr)PSend3328, SMB_ifTrue_, 1, (Optr)PBlock3330);
    Symbol SMB_newKey_value_ = new_Symbol(L"newKey:value:");
    // newKey:value:. 
    Send PSend3345 = new_Send((Optr)VAR_bucket_0_2, SMB_newKey_value_, 2, (Optr)VAR_key_0_0, (Optr)VAR_value_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3347 = new_Send((Optr)slot_Collection_HashedCollection_size, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign3346 = new_Assign((Optr)slot_Collection_HashedCollection_size, (Optr)PSend3347);
    Array PThreadedCode3325 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign3326, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_buckets, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3327, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_send0, (Optr)PSend3328, (Optr)&t_send_ifTrue_, (Optr)PSend3329, (Optr)PBlock3330, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_bucket_0_2, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend3345, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3346, (Optr)&t_push_slot, (Optr)slot_Collection_HashedCollection_size, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3347, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_method_return);
    Block PBlock3323 = new_Block_with(PArray3324, empty_Array, PThreadedCode3325, 5, PAssign3326, PSend3329, PSend3345, PAssign3346, VAR_value_0_1);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3348 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3323);
    Array PThreadedCode3322 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3323, (Optr)&t_send1, (Optr)PSend3348, (Optr)&t_method_return);
    Method PMethod3319 = new_Method_with(PArray3320, PArray3321, empty_Array, PThreadedCode3322, 1, PSend3348);
    
    MethodClosure MC_SMB_inFirstBucketAtNew_put_ = new_MethodClosure((Method)PMethod3319, Dictionary_Class);
    store_method(Dictionary_Class, SMB_inFirstBucketAtNew_put_, MC_SMB_inFirstBucketAtNew_put_);
}


static void init_SMB_removeKey_() {
    Symbol SMB_removeKey_ = new_Symbol(L"removeKey:");
    Variable VAR_key_0_0 = new_Variable_named(L"key", 0);
    Array PArray3350 = new_Array_with(1, (Optr)VAR_key_0_0);
    Symbol SMB_errorKeyNotFound = new_Symbol(L"errorKeyNotFound");
    // errorKeyNotFound. 
    Send PSend3354 = new_Send((Optr)self, SMB_errorKeyNotFound, 0);
    Array PThreadedCode3353 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3354, (Optr)&t_block_return);
    Block PBlock3352 = new_Block_with(empty_Array, empty_Array, PThreadedCode3353, 1, PSend3354);
    Symbol SMB_removeKey_ifAbsent_ = new_Symbol(L"removeKey:ifAbsent:");
    // removeKey:ifAbsent:. 
    Send PSend3355 = new_Send((Optr)self, SMB_removeKey_ifAbsent_, 2, (Optr)VAR_key_0_0, (Optr)PBlock3352);
    Array PThreadedCode3351 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_key_0_0, (Optr)&t_push_closure, (Optr)PBlock3352, (Optr)&t_send2, (Optr)PSend3355, (Optr)&t_method_return);
    Method PMethod3349 = new_Method_with(PArray3350, empty_Array, empty_Array, PThreadedCode3351, 1, PSend3355);
    
    MethodClosure MC_SMB_removeKey_ = new_MethodClosure((Method)PMethod3349, Dictionary_Class);
    store_method(Dictionary_Class, SMB_removeKey_, MC_SMB_removeKey_);
}


static void init_SMB_newBucket_() {
    Symbol SMB_newBucket_ = new_Symbol(L"newBucket:");
    Variable VAR_sizeRequested_0_0 = new_Variable_named(L"sizeRequested", 0);
    Array PArray3357 = new_Array_with(1, (Optr)VAR_sizeRequested_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend3359 = new_Send((Optr)PDictBucket_classReference, SMB_new_, 1, (Optr)VAR_sizeRequested_0_0);
    Array PThreadedCode3358 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PDictBucket_classReference, (Optr)&t_push_variable, (Optr)VAR_sizeRequested_0_0, (Optr)&t_send1, (Optr)PSend3359, (Optr)&t_method_return);
    Method PMethod3356 = new_Method_with(PArray3357, empty_Array, empty_Array, PThreadedCode3358, 1, PSend3359);
    
    MethodClosure MC_SMB_newBucket_ = new_MethodClosure((Method)PMethod3356, Dictionary_Class);
    store_method(Dictionary_Class, SMB_newBucket_, MC_SMB_newBucket_);
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
    
}