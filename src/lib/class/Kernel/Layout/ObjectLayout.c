#include <lib/class/Kernel/Layout/ObjectLayout.h>


Optr layout_Kernel_Layout_ObjectLayout_Class_class;


static void init_SMB_alias_in_() {
    Symbol SMB_alias_in_ = new_Symbol(L"alias:in:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_aContext_0_1 = new_Variable_named(L"aContext", 0);
    Array PArray4990 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_aContext_0_1);
    Variable VAR_clone_0_2 = new_Variable_named(L"clone", 0);
    Array PArray4991 = new_Array_with(1, (Optr)VAR_clone_0_2);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend4995 = new_Send((Optr)VAR_anObject_0_0, SMB_species, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend4994 = new_Send((Optr)PSend4995, SMB_new, 0);
    Assign PAssign4993 = new_Assign((Optr)VAR_clone_0_2, (Optr)PSend4994);
    Symbol SMB_aliasChildrenFrom_to_in_ = new_Symbol(L"aliasChildrenFrom:to:in:");
    // aliasChildrenFrom:to:in:. 
    Send PSend4996 = new_Send((Optr)self, SMB_aliasChildrenFrom_to_in_, 3, (Optr)VAR_anObject_0_0, (Optr)VAR_clone_0_2, (Optr)VAR_aContext_0_1);
    Symbol SMB_basicAlias_in_ = new_Symbol(L"basicAlias:in:");
    Super PSuper4997 = new_Super(SMB_basicAlias_in_, 2, (Optr)VAR_clone_0_2, (Optr)VAR_aContext_0_1);
    Array PThreadedCode4992 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign4993, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend4995, (Optr)&t_send0, (Optr)PSend4994, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_variable, (Optr)VAR_clone_0_2, (Optr)&t_push_variable, (Optr)VAR_aContext_0_1, (Optr)&t_send3, (Optr)PSend4996, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_clone_0_2, (Optr)&t_push_variable, (Optr)VAR_aContext_0_1, (Optr)&t_super2, (Optr)PSuper4997, (Optr)&t_method_return);
    Method PMethod4989 = new_Method_with(PArray4990, PArray4991, empty_Array, PThreadedCode4992, 3, PAssign4993, PSend4996, PSuper4997);
    
    MethodClosure MC_SMB_alias_in_ = new_MethodClosure((Method)PMethod4989, ObjectLayout_Class);
    store_method(ObjectLayout_Class, SMB_alias_in_, MC_SMB_alias_in_);
}


static void init_SMB_aliasChildrenFrom_to_in_() {
    Symbol SMB_aliasChildrenFrom_to_in_ = new_Symbol(L"aliasChildrenFrom:to:in:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_anotherObject_0_1 = new_Variable_named(L"anotherObject", 0);
    Variable VAR_aContext_0_2 = new_Variable_named(L"aContext", 0);
    Array PArray4999 = new_Array_with(3, (Optr)VAR_anObject_0_0, (Optr)VAR_anotherObject_0_1, (Optr)VAR_aContext_0_2);
    Variable VAR_instVariable_1_0 = new_Variable_named(L"instVariable", 1);
    Array PArray5002 = new_Array_with(1, (Optr)VAR_instVariable_1_0);
    Symbol SMB_aliasFrom_to_in_ = new_Symbol(L"aliasFrom:to:in:");
    // aliasFrom:to:in:. 
    Send PSend5004 = new_Send((Optr)VAR_instVariable_1_0, SMB_aliasFrom_to_in_, 3, (Optr)VAR_anObject_0_0, (Optr)VAR_anotherObject_0_1, (Optr)VAR_aContext_0_2);
    Array PThreadedCode5003 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_instVariable_1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_variable, (Optr)VAR_anotherObject_0_1, (Optr)&t_push_variable, (Optr)VAR_aContext_0_2, (Optr)&t_send3, (Optr)PSend5004, (Optr)&t_method_return);
    Block PBlock5001 = new_Block_with(PArray5002, empty_Array, PThreadedCode5003, 1, PSend5004);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend5005 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock5001);
    Array PThreadedCode5000 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock5001, (Optr)&t_send1, (Optr)PSend5005, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4998 = new_Method_with(PArray4999, empty_Array, empty_Array, PThreadedCode5000, 2, PSend5005, self);
    
    MethodClosure MC_SMB_aliasChildrenFrom_to_in_ = new_MethodClosure((Method)PMethod4998, ObjectLayout_Class);
    store_method(ObjectLayout_Class, SMB_aliasChildrenFrom_to_in_, MC_SMB_aliasChildrenFrom_to_in_);
}


static void init_SMB_basicInstantiate_() {
    Symbol SMB_basicInstantiate_ = new_Symbol(L"basicInstantiate:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Array PArray5007 = new_Array_with(1, (Optr)VAR_class_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Class_minus_Layout_minus_Object = new_Symbol(L"Class.Layout.Object");
    Annotation PAnnotation5009 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_basicInstantiate_, (Optr)SMB_Class_minus_Layout_minus_Object);
    Array PArray5008 = new_Array_with(1, (Optr)PAnnotation5009);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend5011 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode5010 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5011, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod5006 = new_NativeMethod_with(PArray5007, empty_Array, PArray5008, PThreadedCode5010, 2, PSend5011, self);
    
    MethodClosure MC_SMB_basicInstantiate_ = new_MethodClosure((Method)PNativeMethod5006, ObjectLayout_Class);
    store_method(ObjectLayout_Class, SMB_basicInstantiate_, MC_SMB_basicInstantiate_);
}


static void init_SMB_withIndexDo_() {
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    Variable VAR_elementAndIndexBlock_0_0 = new_Variable_named(L"elementAndIndexBlock", 0);
    Array PArray5013 = new_Array_with(1, (Optr)VAR_elementAndIndexBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5015 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray5017 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend5019 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend5020 = new_Send((Optr)VAR_elementAndIndexBlock_0_0, SMB_value_value_, 2, (Optr)PSend5019, (Optr)VAR_index_1_0);
    Array PThreadedCode5018 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_elementAndIndexBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend5019, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send2, (Optr)PSend5020, (Optr)&t_method_return);
    Block PBlock5016 = new_Block_with(PArray5017, empty_Array, PThreadedCode5018, 1, PSend5020);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend5021 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend5015, (Optr)PBlock5016);
    Array PThreadedCode5014 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5015, (Optr)&t_push_closure, (Optr)PBlock5016, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend5021, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5012 = new_Method_with(PArray5013, empty_Array, empty_Array, PThreadedCode5014, 2, PSend5021, self);
    
    MethodClosure MC_SMB_withIndexDo_ = new_MethodClosure((Method)PMethod5012, ObjectLayout_Class);
    store_method(ObjectLayout_Class, SMB_withIndexDo_, MC_SMB_withIndexDo_);
}


static void init_SMB_includesSlot_() {
    Symbol SMB_includesSlot_ = new_Symbol(L"includesSlot:");
    Variable VAR_name_0_0 = new_Variable_named(L"name", 0);
    Array PArray5023 = new_Array_with(1, (Optr)VAR_name_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5026 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5030 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode5029 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend5030, (Optr)&t_block_return);
    Block PBlock5028 = new_Block_with(empty_Array, empty_Array, PThreadedCode5029, 1, PSend5030);
    Symbol SMB_slotAt_ifAbsent_ = new_Symbol(L"slotAt:ifAbsent:");
    // slotAt:ifAbsent:. 
    Send PSend5031 = new_Send((Optr)self, SMB_slotAt_ifAbsent_, 2, (Optr)VAR_name_0_0, (Optr)PBlock5028);
    Array PThreadedCode5027 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_closure, (Optr)PBlock5028, (Optr)&t_send2, (Optr)PSend5031, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock5025 = new_Block_with(PArray5026, empty_Array, PThreadedCode5027, 2, PSend5031, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5032 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5025);
    Array PThreadedCode5024 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5025, (Optr)&t_send1, (Optr)PSend5032, (Optr)&t_method_return);
    Method PMethod5022 = new_Method_with(PArray5023, empty_Array, empty_Array, PThreadedCode5024, 1, PSend5032);
    
    MethodClosure MC_SMB_includesSlot_ = new_MethodClosure((Method)PMethod5022, ObjectLayout_Class);
    store_method(ObjectLayout_Class, SMB_includesSlot_, MC_SMB_includesSlot_);
}


static void init_SMB_select_() {
    Symbol SMB_select_ = new_Symbol(L"select:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray5034 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Array PArray5035 = new_Array_with(1, (Optr)VAR_newCollection_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend5038 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign5037 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend5038);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray5040 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend5042 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)VAR_each_1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend5046 = new_Send((Optr)VAR_newCollection_0_1, SMB_add_, 1, (Optr)VAR_each_1_0);
    Array PThreadedCode5045 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send1, (Optr)PSend5046, (Optr)&t_block_return);
    Block PBlock5044 = new_Block_with(empty_Array, empty_Array, PThreadedCode5045, 1, PSend5046);
    // ifTrue:. 
    Send PSend5043 = new_Send((Optr)PSend5042, SMB_ifTrue_, 1, (Optr)PBlock5044);
    Array PThreadedCode5041 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send1, (Optr)PSend5042, (Optr)&t_send_ifTrue_, (Optr)PSend5043, (Optr)PBlock5044, (Optr)&t_method_return);
    Block PBlock5039 = new_Block_with(PArray5040, empty_Array, PThreadedCode5041, 1, PSend5043);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend5047 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock5039);
    Array PThreadedCode5036 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign5037, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend5038, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock5039, (Optr)&t_send1, (Optr)PSend5047, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod5033 = new_Method_with(PArray5034, PArray5035, empty_Array, PThreadedCode5036, 3, PAssign5037, PSend5047, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_select_ = new_MethodClosure((Method)PMethod5033, ObjectLayout_Class);
    store_method(ObjectLayout_Class, SMB_select_, MC_SMB_select_);
}


static void init_SMB_slotAt_ifAbsent_() {
    Symbol SMB_slotAt_ifAbsent_ = new_Symbol(L"slotAt:ifAbsent:");
    Variable VAR_name_0_0 = new_Variable_named(L"name", 0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Array PArray5049 = new_Array_with(2, (Optr)VAR_name_0_0, (Optr)VAR_block_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5052 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_aSlot_2_0 = new_Variable_named(L"aSlot", 2);
    Array PArray5055 = new_Array_with(1, (Optr)VAR_aSlot_2_0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend5057 = new_Send((Optr)VAR_aSlot_2_0, SMB_name, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend5058 = new_Send((Optr)PSend5057, SMB__equals_, 1, (Optr)VAR_name_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5062 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_aSlot_2_0);
    Array PThreadedCode5061 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aSlot_2_0, (Optr)&t_send1, (Optr)PSend5062, (Optr)&t_block_return);
    Block PBlock5060 = new_Block_with(empty_Array, empty_Array, PThreadedCode5061, 1, PSend5062);
    // ifTrue:. 
    Send PSend5059 = new_Send((Optr)PSend5058, SMB_ifTrue_, 1, (Optr)PBlock5060);
    Array PThreadedCode5056 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_aSlot_2_0, (Optr)&t_send0, (Optr)PSend5057, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_send1, (Optr)PSend5058, (Optr)&t_send_ifTrue_, (Optr)PSend5059, (Optr)PBlock5060, (Optr)&t_method_return);
    Block PBlock5054 = new_Block_with(PArray5055, empty_Array, PThreadedCode5056, 1, PSend5059);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend5063 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock5054);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend5064 = new_Send((Optr)VAR_block_0_1, SMB_value, 0);
    Array PThreadedCode5053 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock5054, (Optr)&t_send1, (Optr)PSend5063, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_send0, (Optr)PSend5064, (Optr)&t_method_return);
    Block PBlock5051 = new_Block_with(PArray5052, empty_Array, PThreadedCode5053, 2, PSend5063, PSend5064);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5065 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5051);
    Array PThreadedCode5050 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5051, (Optr)&t_send1, (Optr)PSend5065, (Optr)&t_method_return);
    Method PMethod5048 = new_Method_with(PArray5049, empty_Array, empty_Array, PThreadedCode5050, 1, PSend5065);
    
    MethodClosure MC_SMB_slotAt_ifAbsent_ = new_MethodClosure((Method)PMethod5048, ObjectLayout_Class);
    store_method(ObjectLayout_Class, SMB_slotAt_ifAbsent_, MC_SMB_slotAt_ifAbsent_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlockClosure_0_0 = new_Variable_named(L"aBlockClosure", 0);
    Array PArray5067 = new_Array_with(1, (Optr)VAR_aBlockClosure_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5069 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray5071 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend5073 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend5074 = new_Send((Optr)VAR_aBlockClosure_0_0, SMB_value_, 1, (Optr)PSend5073);
    Array PThreadedCode5072 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend5073, (Optr)&t_send1, (Optr)PSend5074, (Optr)&t_method_return);
    Block PBlock5070 = new_Block_with(PArray5071, empty_Array, PThreadedCode5072, 1, PSend5074);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend5075 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend5069, (Optr)PBlock5070);
    Array PThreadedCode5068 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5069, (Optr)&t_push_closure, (Optr)PBlock5070, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend5075, (Optr)&t_method_return);
    Method PMethod5066 = new_Method_with(PArray5067, empty_Array, empty_Array, PThreadedCode5068, 1, PSend5075);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod5066, ObjectLayout_Class);
    store_method(ObjectLayout_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray5077 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitObjectLayout_ = new_Symbol(L"visitObjectLayout:");
    // visitObjectLayout:. 
    Send PSend5079 = new_Send((Optr)VAR_visitor_0_0, SMB_visitObjectLayout_, 1, (Optr)self);
    Array PThreadedCode5078 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend5079, (Optr)&t_method_return);
    Method PMethod5076 = new_Method_with(PArray5077, empty_Array, empty_Array, PThreadedCode5078, 1, PSend5079);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod5076, ObjectLayout_Class);
    store_method(ObjectLayout_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray5081 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend5083 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend5084 = new_Send((Optr)PSend5083, SMB_name, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend5085 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend5084);
    String string_5086 = new_String(L" (");
    Constant string_5086_Const = new_Constant((Optr)string_5086);
    // <<. 
    Send PSend5087 = new_Send((Optr)PSend5085, SMB__shiftLeft_, 1, (Optr)string_5086_Const);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray5089 = new_Array_with(1, (Optr)VAR_each_1_0);
    // printOn:. 
    Send PSend5091 = new_Send((Optr)VAR_each_1_0, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode5090 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend5091, (Optr)&t_method_return);
    Block PBlock5088 = new_Block_with(PArray5089, empty_Array, PThreadedCode5090, 1, PSend5091);
    String string_5094 = new_String(L", ");
    Constant string_5094_Const = new_Constant((Optr)string_5094);
    // <<. 
    Send PSend5095 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_5094_Const);
    Array PThreadedCode5093 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_5094, (Optr)&t_send1, (Optr)PSend5095, (Optr)&t_block_return);
    Block PBlock5092 = new_Block_with(empty_Array, empty_Array, PThreadedCode5093, 1, PSend5095);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend5096 = new_Send((Optr)self, SMB_do_separatedBy_, 2, (Optr)PBlock5088, (Optr)PBlock5092);
    Character char_4146 = new_Character(L')');
    Constant char_4146_Const = new_Constant((Optr)char_4146);
    // <<. 
    Send PSend5097 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4146_Const);
    Array PThreadedCode5082 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5083, (Optr)&t_send0, (Optr)PSend5084, (Optr)&t_send1, (Optr)PSend5085, (Optr)&t_push1, (Optr)string_5086, (Optr)&t_send1, (Optr)PSend5087, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock5088, (Optr)&t_push_closure, (Optr)PBlock5092, (Optr)&t_send2, (Optr)PSend5096, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4146, (Optr)&t_send1, (Optr)PSend5097, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5080 = new_Method_with(PArray5081, empty_Array, empty_Array, PThreadedCode5082, 4, PSend5087, PSend5096, PSend5097, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod5080, ObjectLayout_Class);
    store_method(ObjectLayout_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_inspectChildrenFrom_on_() {
    Symbol SMB_inspectChildrenFrom_on_ = new_Symbol(L"inspectChildrenFrom:on:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_inspector_0_1 = new_Variable_named(L"inspector", 0);
    Array PArray5099 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_inspector_0_1);
    Variable VAR_slot_1_0 = new_Variable_named(L"slot", 1);
    Array PArray5102 = new_Array_with(1, (Optr)VAR_slot_1_0);
    Symbol SMB_isInspectable = new_Symbol(L"isInspectable");
    // isInspectable. 
    Send PSend5104 = new_Send((Optr)VAR_slot_1_0, SMB_isInspectable, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend5110 = new_Send((Optr)VAR_slot_1_0, SMB_readFrom_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode5109 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_slot_1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend5110, (Optr)&t_block_return);
    Block PBlock5108 = new_Block_with(empty_Array, empty_Array, PThreadedCode5109, 1, PSend5110);
    Symbol SMB_child_value_ = new_Symbol(L"child:value:");
    // child:value:. 
    Send PSend5111 = new_Send((Optr)VAR_inspector_0_1, SMB_child_value_, 2, (Optr)VAR_slot_1_0, (Optr)PBlock5108);
    Array PThreadedCode5107 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_inspector_0_1, (Optr)&t_push_variable, (Optr)VAR_slot_1_0, (Optr)&t_push_closure, (Optr)PBlock5108, (Optr)&t_send2, (Optr)PSend5111, (Optr)&t_block_return);
    Block PBlock5106 = new_Block_with(empty_Array, empty_Array, PThreadedCode5107, 1, PSend5111);
    // ifTrue:. 
    Send PSend5105 = new_Send((Optr)PSend5104, SMB_ifTrue_, 1, (Optr)PBlock5106);
    Array PThreadedCode5103 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_slot_1_0, (Optr)&t_send0, (Optr)PSend5104, (Optr)&t_send_ifTrue_, (Optr)PSend5105, (Optr)PBlock5106, (Optr)&t_method_return);
    Block PBlock5101 = new_Block_with(PArray5102, empty_Array, PThreadedCode5103, 1, PSend5105);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend5112 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock5101);
    Array PThreadedCode5100 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock5101, (Optr)&t_send1, (Optr)PSend5112, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5098 = new_Method_with(PArray5099, empty_Array, empty_Array, PThreadedCode5100, 2, PSend5112, self);
    
    MethodClosure MC_SMB_inspectChildrenFrom_on_ = new_MethodClosure((Method)PMethod5098, ObjectLayout_Class);
    store_method(ObjectLayout_Class, SMB_inspectChildrenFrom_on_, MC_SMB_inspectChildrenFrom_on_);
}


static void init_SMB_do_separatedBy_() {
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    Variable VAR_elementBlock_0_0 = new_Variable_named(L"elementBlock", 0);
    Variable VAR_separatorBlock_0_1 = new_Variable_named(L"separatorBlock", 0);
    Array PArray5114 = new_Array_with(2, (Optr)VAR_elementBlock_0_0, (Optr)VAR_separatorBlock_0_1);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5116 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray5118 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend5120 = new_Send((Optr)VAR_index_1_0, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend5124 = new_Send((Optr)VAR_separatorBlock_0_1, SMB_value, 0);
    Array PThreadedCode5123 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_separatorBlock_0_1, (Optr)&t_send0, (Optr)PSend5124, (Optr)&t_block_return);
    Block PBlock5122 = new_Block_with(empty_Array, empty_Array, PThreadedCode5123, 1, PSend5124);
    // ifFalse:. 
    Send PSend5121 = new_Send((Optr)PSend5120, SMB_ifFalse_, 1, (Optr)PBlock5122);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend5125 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend5126 = new_Send((Optr)VAR_elementBlock_0_0, SMB_value_, 1, (Optr)PSend5125);
    Array PThreadedCode5119 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5120, (Optr)&t_send_ifFalse_, (Optr)PSend5121, (Optr)PBlock5122, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_elementBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend5125, (Optr)&t_send1, (Optr)PSend5126, (Optr)&t_method_return);
    Block PBlock5117 = new_Block_with(PArray5118, empty_Array, PThreadedCode5119, 2, PSend5121, PSend5126);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend5127 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend5116, (Optr)PBlock5117);
    Array PThreadedCode5115 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5116, (Optr)&t_push_closure, (Optr)PBlock5117, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend5127, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5113 = new_Method_with(PArray5114, empty_Array, empty_Array, PThreadedCode5115, 2, PSend5127, self);
    
    MethodClosure MC_SMB_do_separatedBy_ = new_MethodClosure((Method)PMethod5113, ObjectLayout_Class);
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