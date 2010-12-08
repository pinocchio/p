#include <lib/class/Kernel/Layout/ObjectLayout.h>


Optr layout_Kernel_Layout_ObjectLayout_Class_class;


static void init_SMB_alias_in_() {
    Symbol SMB_alias_in_ = new_Symbol(L"alias:in:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_aContext_0_1 = new_Variable_named(L"aContext", 0);
    Array PArray4993 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_aContext_0_1);
    Variable VAR_clone_0_2 = new_Variable_named(L"clone", 0);
    Array PArray4994 = new_Array_with(1, (Optr)VAR_clone_0_2);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend4998 = new_Send((Optr)VAR_anObject_0_0, SMB_species, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend4997 = new_Send((Optr)PSend4998, SMB_new, 0);
    Assign PAssign4996 = new_Assign((Optr)VAR_clone_0_2, (Optr)PSend4997);
    Symbol SMB_aliasChildrenFrom_to_in_ = new_Symbol(L"aliasChildrenFrom:to:in:");
    // aliasChildrenFrom:to:in:. 
    Send PSend4999 = new_Send((Optr)self, SMB_aliasChildrenFrom_to_in_, 3, (Optr)VAR_anObject_0_0, (Optr)VAR_clone_0_2, (Optr)VAR_aContext_0_1);
    Symbol SMB_basicAlias_in_ = new_Symbol(L"basicAlias:in:");
    Super PSuper5000 = new_Super(SMB_basicAlias_in_, 2, (Optr)VAR_clone_0_2, (Optr)VAR_aContext_0_1);
    Array PThreadedCode4995 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign4996, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend4998, (Optr)&t_send0, (Optr)PSend4997, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_variable, (Optr)VAR_clone_0_2, (Optr)&t_push_variable, (Optr)VAR_aContext_0_1, (Optr)&t_send3, (Optr)PSend4999, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_clone_0_2, (Optr)&t_push_variable, (Optr)VAR_aContext_0_1, (Optr)&t_super2, (Optr)PSuper5000, (Optr)&t_method_return);
    Method PMethod4992 = new_Method_with(PArray4993, PArray4994, empty_Array, PThreadedCode4995, 3, PAssign4996, PSend4999, PSuper5000);
    
    MethodClosure MC_SMB_alias_in_ = new_MethodClosure((Method)PMethod4992, ObjectLayout_Class);
    store_method(ObjectLayout_Class, SMB_alias_in_, MC_SMB_alias_in_);
}


static void init_SMB_aliasChildrenFrom_to_in_() {
    Symbol SMB_aliasChildrenFrom_to_in_ = new_Symbol(L"aliasChildrenFrom:to:in:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_anotherObject_0_1 = new_Variable_named(L"anotherObject", 0);
    Variable VAR_aContext_0_2 = new_Variable_named(L"aContext", 0);
    Array PArray5002 = new_Array_with(3, (Optr)VAR_anObject_0_0, (Optr)VAR_anotherObject_0_1, (Optr)VAR_aContext_0_2);
    Variable VAR_instVariable_1_0 = new_Variable_named(L"instVariable", 1);
    Array PArray5005 = new_Array_with(1, (Optr)VAR_instVariable_1_0);
    Symbol SMB_aliasFrom_to_in_ = new_Symbol(L"aliasFrom:to:in:");
    // aliasFrom:to:in:. 
    Send PSend5007 = new_Send((Optr)VAR_instVariable_1_0, SMB_aliasFrom_to_in_, 3, (Optr)VAR_anObject_0_0, (Optr)VAR_anotherObject_0_1, (Optr)VAR_aContext_0_2);
    Array PThreadedCode5006 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_instVariable_1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_variable, (Optr)VAR_anotherObject_0_1, (Optr)&t_push_variable, (Optr)VAR_aContext_0_2, (Optr)&t_send3, (Optr)PSend5007, (Optr)&t_method_return);
    Block PBlock5004 = new_Block_with(PArray5005, empty_Array, PThreadedCode5006, 1, PSend5007);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend5008 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock5004);
    Array PThreadedCode5003 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock5004, (Optr)&t_send1, (Optr)PSend5008, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5001 = new_Method_with(PArray5002, empty_Array, empty_Array, PThreadedCode5003, 2, PSend5008, self);
    
    MethodClosure MC_SMB_aliasChildrenFrom_to_in_ = new_MethodClosure((Method)PMethod5001, ObjectLayout_Class);
    store_method(ObjectLayout_Class, SMB_aliasChildrenFrom_to_in_, MC_SMB_aliasChildrenFrom_to_in_);
}


static void init_SMB_basicInstantiate_() {
    Symbol SMB_basicInstantiate_ = new_Symbol(L"basicInstantiate:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Array PArray5010 = new_Array_with(1, (Optr)VAR_class_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Class_minus_Layout_minus_Object = new_Symbol(L"Class.Layout.Object");
    Annotation PAnnotation5012 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_basicInstantiate_, (Optr)SMB_Class_minus_Layout_minus_Object);
    Array PArray5011 = new_Array_with(1, (Optr)PAnnotation5012);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend5014 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode5013 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5014, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod5009 = new_NativeMethod_with(PArray5010, empty_Array, PArray5011, PThreadedCode5013, 2, PSend5014, self);
    
    MethodClosure MC_SMB_basicInstantiate_ = new_MethodClosure((Method)PNativeMethod5009, ObjectLayout_Class);
    store_method(ObjectLayout_Class, SMB_basicInstantiate_, MC_SMB_basicInstantiate_);
}


static void init_SMB_withIndexDo_() {
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    Variable VAR_elementAndIndexBlock_0_0 = new_Variable_named(L"elementAndIndexBlock", 0);
    Array PArray5016 = new_Array_with(1, (Optr)VAR_elementAndIndexBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5018 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray5020 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend5022 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend5023 = new_Send((Optr)VAR_elementAndIndexBlock_0_0, SMB_value_value_, 2, (Optr)PSend5022, (Optr)VAR_index_1_0);
    Array PThreadedCode5021 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_elementAndIndexBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend5022, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send2, (Optr)PSend5023, (Optr)&t_method_return);
    Block PBlock5019 = new_Block_with(PArray5020, empty_Array, PThreadedCode5021, 1, PSend5023);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend5024 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend5018, (Optr)PBlock5019);
    Array PThreadedCode5017 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5018, (Optr)&t_push_closure, (Optr)PBlock5019, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend5024, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5015 = new_Method_with(PArray5016, empty_Array, empty_Array, PThreadedCode5017, 2, PSend5024, self);
    
    MethodClosure MC_SMB_withIndexDo_ = new_MethodClosure((Method)PMethod5015, ObjectLayout_Class);
    store_method(ObjectLayout_Class, SMB_withIndexDo_, MC_SMB_withIndexDo_);
}


static void init_SMB_includesSlot_() {
    Symbol SMB_includesSlot_ = new_Symbol(L"includesSlot:");
    Variable VAR_name_0_0 = new_Variable_named(L"name", 0);
    Array PArray5026 = new_Array_with(1, (Optr)VAR_name_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5029 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5033 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode5032 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend5033, (Optr)&t_block_return);
    Block PBlock5031 = new_Block_with(empty_Array, empty_Array, PThreadedCode5032, 1, PSend5033);
    Symbol SMB_slotAt_ifAbsent_ = new_Symbol(L"slotAt:ifAbsent:");
    // slotAt:ifAbsent:. 
    Send PSend5034 = new_Send((Optr)self, SMB_slotAt_ifAbsent_, 2, (Optr)VAR_name_0_0, (Optr)PBlock5031);
    Array PThreadedCode5030 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_closure, (Optr)PBlock5031, (Optr)&t_send2, (Optr)PSend5034, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock5028 = new_Block_with(PArray5029, empty_Array, PThreadedCode5030, 2, PSend5034, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5035 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5028);
    Array PThreadedCode5027 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5028, (Optr)&t_send1, (Optr)PSend5035, (Optr)&t_method_return);
    Method PMethod5025 = new_Method_with(PArray5026, empty_Array, empty_Array, PThreadedCode5027, 1, PSend5035);
    
    MethodClosure MC_SMB_includesSlot_ = new_MethodClosure((Method)PMethod5025, ObjectLayout_Class);
    store_method(ObjectLayout_Class, SMB_includesSlot_, MC_SMB_includesSlot_);
}


static void init_SMB_select_() {
    Symbol SMB_select_ = new_Symbol(L"select:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray5037 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Array PArray5038 = new_Array_with(1, (Optr)VAR_newCollection_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend5041 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign5040 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend5041);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray5043 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend5045 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)VAR_each_1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend5049 = new_Send((Optr)VAR_newCollection_0_1, SMB_add_, 1, (Optr)VAR_each_1_0);
    Array PThreadedCode5048 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send1, (Optr)PSend5049, (Optr)&t_block_return);
    Block PBlock5047 = new_Block_with(empty_Array, empty_Array, PThreadedCode5048, 1, PSend5049);
    // ifTrue:. 
    Send PSend5046 = new_Send((Optr)PSend5045, SMB_ifTrue_, 1, (Optr)PBlock5047);
    Array PThreadedCode5044 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send1, (Optr)PSend5045, (Optr)&t_send_ifTrue_, (Optr)PSend5046, (Optr)PBlock5047, (Optr)&t_method_return);
    Block PBlock5042 = new_Block_with(PArray5043, empty_Array, PThreadedCode5044, 1, PSend5046);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend5050 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock5042);
    Array PThreadedCode5039 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign5040, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend5041, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock5042, (Optr)&t_send1, (Optr)PSend5050, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod5036 = new_Method_with(PArray5037, PArray5038, empty_Array, PThreadedCode5039, 3, PAssign5040, PSend5050, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_select_ = new_MethodClosure((Method)PMethod5036, ObjectLayout_Class);
    store_method(ObjectLayout_Class, SMB_select_, MC_SMB_select_);
}


static void init_SMB_slotAt_ifAbsent_() {
    Symbol SMB_slotAt_ifAbsent_ = new_Symbol(L"slotAt:ifAbsent:");
    Variable VAR_name_0_0 = new_Variable_named(L"name", 0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Array PArray5052 = new_Array_with(2, (Optr)VAR_name_0_0, (Optr)VAR_block_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5055 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_aSlot_2_0 = new_Variable_named(L"aSlot", 2);
    Array PArray5058 = new_Array_with(1, (Optr)VAR_aSlot_2_0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend5060 = new_Send((Optr)VAR_aSlot_2_0, SMB_name, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend5061 = new_Send((Optr)PSend5060, SMB__equals_, 1, (Optr)VAR_name_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5065 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_aSlot_2_0);
    Array PThreadedCode5064 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aSlot_2_0, (Optr)&t_send1, (Optr)PSend5065, (Optr)&t_block_return);
    Block PBlock5063 = new_Block_with(empty_Array, empty_Array, PThreadedCode5064, 1, PSend5065);
    // ifTrue:. 
    Send PSend5062 = new_Send((Optr)PSend5061, SMB_ifTrue_, 1, (Optr)PBlock5063);
    Array PThreadedCode5059 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_aSlot_2_0, (Optr)&t_send0, (Optr)PSend5060, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_send1, (Optr)PSend5061, (Optr)&t_send_ifTrue_, (Optr)PSend5062, (Optr)PBlock5063, (Optr)&t_method_return);
    Block PBlock5057 = new_Block_with(PArray5058, empty_Array, PThreadedCode5059, 1, PSend5062);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend5066 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock5057);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend5067 = new_Send((Optr)VAR_block_0_1, SMB_value, 0);
    Array PThreadedCode5056 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock5057, (Optr)&t_send1, (Optr)PSend5066, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_send0, (Optr)PSend5067, (Optr)&t_method_return);
    Block PBlock5054 = new_Block_with(PArray5055, empty_Array, PThreadedCode5056, 2, PSend5066, PSend5067);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5068 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5054);
    Array PThreadedCode5053 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5054, (Optr)&t_send1, (Optr)PSend5068, (Optr)&t_method_return);
    Method PMethod5051 = new_Method_with(PArray5052, empty_Array, empty_Array, PThreadedCode5053, 1, PSend5068);
    
    MethodClosure MC_SMB_slotAt_ifAbsent_ = new_MethodClosure((Method)PMethod5051, ObjectLayout_Class);
    store_method(ObjectLayout_Class, SMB_slotAt_ifAbsent_, MC_SMB_slotAt_ifAbsent_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlockClosure_0_0 = new_Variable_named(L"aBlockClosure", 0);
    Array PArray5070 = new_Array_with(1, (Optr)VAR_aBlockClosure_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5072 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray5074 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend5076 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend5077 = new_Send((Optr)VAR_aBlockClosure_0_0, SMB_value_, 1, (Optr)PSend5076);
    Array PThreadedCode5075 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend5076, (Optr)&t_send1, (Optr)PSend5077, (Optr)&t_method_return);
    Block PBlock5073 = new_Block_with(PArray5074, empty_Array, PThreadedCode5075, 1, PSend5077);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend5078 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend5072, (Optr)PBlock5073);
    Array PThreadedCode5071 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5072, (Optr)&t_push_closure, (Optr)PBlock5073, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend5078, (Optr)&t_method_return);
    Method PMethod5069 = new_Method_with(PArray5070, empty_Array, empty_Array, PThreadedCode5071, 1, PSend5078);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod5069, ObjectLayout_Class);
    store_method(ObjectLayout_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray5080 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitObjectLayout_ = new_Symbol(L"visitObjectLayout:");
    // visitObjectLayout:. 
    Send PSend5082 = new_Send((Optr)VAR_visitor_0_0, SMB_visitObjectLayout_, 1, (Optr)self);
    Array PThreadedCode5081 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend5082, (Optr)&t_method_return);
    Method PMethod5079 = new_Method_with(PArray5080, empty_Array, empty_Array, PThreadedCode5081, 1, PSend5082);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod5079, ObjectLayout_Class);
    store_method(ObjectLayout_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray5084 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend5086 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend5087 = new_Send((Optr)PSend5086, SMB_name, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend5088 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend5087);
    String string_5089 = new_String(L" (");
    Constant string_5089_Const = new_Constant((Optr)string_5089);
    // <<. 
    Send PSend5090 = new_Send((Optr)PSend5088, SMB__shiftLeft_, 1, (Optr)string_5089_Const);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray5092 = new_Array_with(1, (Optr)VAR_each_1_0);
    // printOn:. 
    Send PSend5094 = new_Send((Optr)VAR_each_1_0, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode5093 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend5094, (Optr)&t_method_return);
    Block PBlock5091 = new_Block_with(PArray5092, empty_Array, PThreadedCode5093, 1, PSend5094);
    String string_5097 = new_String(L", ");
    Constant string_5097_Const = new_Constant((Optr)string_5097);
    // <<. 
    Send PSend5098 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_5097_Const);
    Array PThreadedCode5096 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_5097, (Optr)&t_send1, (Optr)PSend5098, (Optr)&t_block_return);
    Block PBlock5095 = new_Block_with(empty_Array, empty_Array, PThreadedCode5096, 1, PSend5098);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend5099 = new_Send((Optr)self, SMB_do_separatedBy_, 2, (Optr)PBlock5091, (Optr)PBlock5095);
    Character char_4149 = new_Character(L')');
    Constant char_4149_Const = new_Constant((Optr)char_4149);
    // <<. 
    Send PSend5100 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4149_Const);
    Array PThreadedCode5085 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5086, (Optr)&t_send0, (Optr)PSend5087, (Optr)&t_send1, (Optr)PSend5088, (Optr)&t_push1, (Optr)string_5089, (Optr)&t_send1, (Optr)PSend5090, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock5091, (Optr)&t_push_closure, (Optr)PBlock5095, (Optr)&t_send2, (Optr)PSend5099, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4149, (Optr)&t_send1, (Optr)PSend5100, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5083 = new_Method_with(PArray5084, empty_Array, empty_Array, PThreadedCode5085, 4, PSend5090, PSend5099, PSend5100, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod5083, ObjectLayout_Class);
    store_method(ObjectLayout_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_inspectChildrenFrom_on_() {
    Symbol SMB_inspectChildrenFrom_on_ = new_Symbol(L"inspectChildrenFrom:on:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_inspector_0_1 = new_Variable_named(L"inspector", 0);
    Array PArray5102 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_inspector_0_1);
    Variable VAR_slot_1_0 = new_Variable_named(L"slot", 1);
    Array PArray5105 = new_Array_with(1, (Optr)VAR_slot_1_0);
    Symbol SMB_isInspectable = new_Symbol(L"isInspectable");
    // isInspectable. 
    Send PSend5107 = new_Send((Optr)VAR_slot_1_0, SMB_isInspectable, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend5113 = new_Send((Optr)VAR_slot_1_0, SMB_readFrom_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode5112 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_slot_1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend5113, (Optr)&t_block_return);
    Block PBlock5111 = new_Block_with(empty_Array, empty_Array, PThreadedCode5112, 1, PSend5113);
    Symbol SMB_child_value_ = new_Symbol(L"child:value:");
    // child:value:. 
    Send PSend5114 = new_Send((Optr)VAR_inspector_0_1, SMB_child_value_, 2, (Optr)VAR_slot_1_0, (Optr)PBlock5111);
    Array PThreadedCode5110 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_inspector_0_1, (Optr)&t_push_variable, (Optr)VAR_slot_1_0, (Optr)&t_push_closure, (Optr)PBlock5111, (Optr)&t_send2, (Optr)PSend5114, (Optr)&t_block_return);
    Block PBlock5109 = new_Block_with(empty_Array, empty_Array, PThreadedCode5110, 1, PSend5114);
    // ifTrue:. 
    Send PSend5108 = new_Send((Optr)PSend5107, SMB_ifTrue_, 1, (Optr)PBlock5109);
    Array PThreadedCode5106 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_slot_1_0, (Optr)&t_send0, (Optr)PSend5107, (Optr)&t_send_ifTrue_, (Optr)PSend5108, (Optr)PBlock5109, (Optr)&t_method_return);
    Block PBlock5104 = new_Block_with(PArray5105, empty_Array, PThreadedCode5106, 1, PSend5108);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend5115 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock5104);
    Array PThreadedCode5103 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock5104, (Optr)&t_send1, (Optr)PSend5115, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5101 = new_Method_with(PArray5102, empty_Array, empty_Array, PThreadedCode5103, 2, PSend5115, self);
    
    MethodClosure MC_SMB_inspectChildrenFrom_on_ = new_MethodClosure((Method)PMethod5101, ObjectLayout_Class);
    store_method(ObjectLayout_Class, SMB_inspectChildrenFrom_on_, MC_SMB_inspectChildrenFrom_on_);
}


static void init_SMB_do_separatedBy_() {
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    Variable VAR_elementBlock_0_0 = new_Variable_named(L"elementBlock", 0);
    Variable VAR_separatorBlock_0_1 = new_Variable_named(L"separatorBlock", 0);
    Array PArray5117 = new_Array_with(2, (Optr)VAR_elementBlock_0_0, (Optr)VAR_separatorBlock_0_1);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5119 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray5121 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend5123 = new_Send((Optr)VAR_index_1_0, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend5127 = new_Send((Optr)VAR_separatorBlock_0_1, SMB_value, 0);
    Array PThreadedCode5126 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_separatorBlock_0_1, (Optr)&t_send0, (Optr)PSend5127, (Optr)&t_block_return);
    Block PBlock5125 = new_Block_with(empty_Array, empty_Array, PThreadedCode5126, 1, PSend5127);
    // ifFalse:. 
    Send PSend5124 = new_Send((Optr)PSend5123, SMB_ifFalse_, 1, (Optr)PBlock5125);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend5128 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend5129 = new_Send((Optr)VAR_elementBlock_0_0, SMB_value_, 1, (Optr)PSend5128);
    Array PThreadedCode5122 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5123, (Optr)&t_send_ifFalse_, (Optr)PSend5124, (Optr)PBlock5125, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_elementBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend5128, (Optr)&t_send1, (Optr)PSend5129, (Optr)&t_method_return);
    Block PBlock5120 = new_Block_with(PArray5121, empty_Array, PThreadedCode5122, 2, PSend5124, PSend5129);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend5130 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend5119, (Optr)PBlock5120);
    Array PThreadedCode5118 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5119, (Optr)&t_push_closure, (Optr)PBlock5120, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend5130, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5116 = new_Method_with(PArray5117, empty_Array, empty_Array, PThreadedCode5118, 2, PSend5130, self);
    
    MethodClosure MC_SMB_do_separatedBy_ = new_MethodClosure((Method)PMethod5116, ObjectLayout_Class);
    store_method(ObjectLayout_Class, SMB_do_separatedBy_, MC_SMB_do_separatedBy_);
}

void init_Kernel_Layout_PObjectLayout_layout() {
    layout_Kernel_Layout_ObjectLayout_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_Layout_ObjectLayout_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_Layout_ObjectLayout_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_Layout_ObjectLayout_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_Layout_ObjectLayout_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_Layout_ObjectLayout_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_ObjectLayout = new_Symbol(L"ObjectLayout");
    Class_set_superclass(ObjectLayout_Class, Kernel_Layout_Layout_Class);
    ObjectLayout_Class->layout = empty_array_layout;
    HEADER(ObjectLayout_Class)->layout = layout_Kernel_Layout_ObjectLayout_Class_class;
    ObjectLayout_Class->name = SMB_ObjectLayout;
    
}

void init_Kernel_Layout_PObjectLayout_methods() {
    init_SMB_alias_in_();
    init_SMB_aliasChildrenFrom_to_in_();
    init_SMB_basicInstantiate_();
    init_SMB_withIndexDo_();
    init_SMB_includesSlot_();
    init_SMB_select_();
    init_SMB_slotAt_ifAbsent_();
    init_SMB_do_();
    init_SMB_accept_();
    init_SMB_printOn_();
    init_SMB_inspectChildrenFrom_on_();
    init_SMB_do_separatedBy_();
    
}