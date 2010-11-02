#include <lib/class/Kernel/Layout/ObjectLayout.h>


Optr layout_Kernel_Layout_ObjectLayout_Class_class;


static void init_SMB_alias_in_() {
    Symbol SMB_alias_in_ = new_Symbol(L"alias:in:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_aContext_0_1 = new_Variable_named(L"aContext", 0);
    Array PArray4991 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_aContext_0_1);
    Variable VAR_clone_0_2 = new_Variable_named(L"clone", 0);
    Array PArray4992 = new_Array_with(1, (Optr)VAR_clone_0_2);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend4996 = new_Send((Optr)VAR_anObject_0_0, SMB_species, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend4995 = new_Send((Optr)PSend4996, SMB_new, 0);
    Assign PAssign4994 = new_Assign((Optr)VAR_clone_0_2, (Optr)PSend4995);
    Symbol SMB_aliasChildrenFrom_to_in_ = new_Symbol(L"aliasChildrenFrom:to:in:");
    // aliasChildrenFrom:to:in:. 
    Send PSend4997 = new_Send((Optr)self, SMB_aliasChildrenFrom_to_in_, 3, (Optr)VAR_anObject_0_0, (Optr)VAR_clone_0_2, (Optr)VAR_aContext_0_1);
    Symbol SMB_basicAlias_in_ = new_Symbol(L"basicAlias:in:");
    Super PSuper4998 = new_Super(SMB_basicAlias_in_, 2, (Optr)VAR_clone_0_2, (Optr)VAR_aContext_0_1);
    Array PThreadedCode4993 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign4994, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend4996, (Optr)&t_send0, (Optr)PSend4995, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_variable, (Optr)VAR_clone_0_2, (Optr)&t_push_variable, (Optr)VAR_aContext_0_1, (Optr)&t_send3, (Optr)PSend4997, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_clone_0_2, (Optr)&t_push_variable, (Optr)VAR_aContext_0_1, (Optr)&t_super2, (Optr)PSuper4998, (Optr)&t_method_return);
    Method PMethod4990 = new_Method_with(PArray4991, PArray4992, empty_Array, PThreadedCode4993, 3, PAssign4994, PSend4997, PSuper4998);
    
    MethodClosure MC_SMB_alias_in_ = new_MethodClosure((Method)PMethod4990, ObjectLayout_Class);
    store_method(ObjectLayout_Class, SMB_alias_in_, MC_SMB_alias_in_);
}


static void init_SMB_aliasChildrenFrom_to_in_() {
    Symbol SMB_aliasChildrenFrom_to_in_ = new_Symbol(L"aliasChildrenFrom:to:in:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_anotherObject_0_1 = new_Variable_named(L"anotherObject", 0);
    Variable VAR_aContext_0_2 = new_Variable_named(L"aContext", 0);
    Array PArray5000 = new_Array_with(3, (Optr)VAR_anObject_0_0, (Optr)VAR_anotherObject_0_1, (Optr)VAR_aContext_0_2);
    Variable VAR_instVariable_1_0 = new_Variable_named(L"instVariable", 1);
    Array PArray5003 = new_Array_with(1, (Optr)VAR_instVariable_1_0);
    Symbol SMB_aliasFrom_to_in_ = new_Symbol(L"aliasFrom:to:in:");
    // aliasFrom:to:in:. 
    Send PSend5005 = new_Send((Optr)VAR_instVariable_1_0, SMB_aliasFrom_to_in_, 3, (Optr)VAR_anObject_0_0, (Optr)VAR_anotherObject_0_1, (Optr)VAR_aContext_0_2);
    Array PThreadedCode5004 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_instVariable_1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_variable, (Optr)VAR_anotherObject_0_1, (Optr)&t_push_variable, (Optr)VAR_aContext_0_2, (Optr)&t_send3, (Optr)PSend5005, (Optr)&t_method_return);
    Block PBlock5002 = new_Block_with(PArray5003, empty_Array, PThreadedCode5004, 1, PSend5005);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend5006 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock5002);
    Array PThreadedCode5001 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock5002, (Optr)&t_send1, (Optr)PSend5006, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4999 = new_Method_with(PArray5000, empty_Array, empty_Array, PThreadedCode5001, 2, PSend5006, self);
    
    MethodClosure MC_SMB_aliasChildrenFrom_to_in_ = new_MethodClosure((Method)PMethod4999, ObjectLayout_Class);
    store_method(ObjectLayout_Class, SMB_aliasChildrenFrom_to_in_, MC_SMB_aliasChildrenFrom_to_in_);
}


static void init_SMB_basicInstantiate_() {
    Symbol SMB_basicInstantiate_ = new_Symbol(L"basicInstantiate:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Array PArray5008 = new_Array_with(1, (Optr)VAR_class_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Class_minus_Layout_minus_Object = new_Symbol(L"Class.Layout.Object");
    Annotation PAnnotation5010 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_basicInstantiate_, (Optr)SMB_Class_minus_Layout_minus_Object);
    Array PArray5009 = new_Array_with(1, (Optr)PAnnotation5010);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend5012 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode5011 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5012, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod5007 = new_NativeMethod_with(PArray5008, empty_Array, PArray5009, PThreadedCode5011, 2, PSend5012, self);
    
    MethodClosure MC_SMB_basicInstantiate_ = new_MethodClosure((Method)PNativeMethod5007, ObjectLayout_Class);
    store_method(ObjectLayout_Class, SMB_basicInstantiate_, MC_SMB_basicInstantiate_);
}


static void init_SMB_withIndexDo_() {
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    Variable VAR_elementAndIndexBlock_0_0 = new_Variable_named(L"elementAndIndexBlock", 0);
    Array PArray5014 = new_Array_with(1, (Optr)VAR_elementAndIndexBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5016 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray5018 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend5020 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend5021 = new_Send((Optr)VAR_elementAndIndexBlock_0_0, SMB_value_value_, 2, (Optr)PSend5020, (Optr)VAR_index_1_0);
    Array PThreadedCode5019 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_elementAndIndexBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend5020, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send2, (Optr)PSend5021, (Optr)&t_method_return);
    Block PBlock5017 = new_Block_with(PArray5018, empty_Array, PThreadedCode5019, 1, PSend5021);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend5022 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend5016, (Optr)PBlock5017);
    Array PThreadedCode5015 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5016, (Optr)&t_push_closure, (Optr)PBlock5017, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend5022, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5013 = new_Method_with(PArray5014, empty_Array, empty_Array, PThreadedCode5015, 2, PSend5022, self);
    
    MethodClosure MC_SMB_withIndexDo_ = new_MethodClosure((Method)PMethod5013, ObjectLayout_Class);
    store_method(ObjectLayout_Class, SMB_withIndexDo_, MC_SMB_withIndexDo_);
}


static void init_SMB_includesSlot_() {
    Symbol SMB_includesSlot_ = new_Symbol(L"includesSlot:");
    Variable VAR_name_0_0 = new_Variable_named(L"name", 0);
    Array PArray5024 = new_Array_with(1, (Optr)VAR_name_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5027 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5031 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode5030 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend5031, (Optr)&t_block_return);
    Block PBlock5029 = new_Block_with(empty_Array, empty_Array, PThreadedCode5030, 1, PSend5031);
    Symbol SMB_slotAt_ifAbsent_ = new_Symbol(L"slotAt:ifAbsent:");
    // slotAt:ifAbsent:. 
    Send PSend5032 = new_Send((Optr)self, SMB_slotAt_ifAbsent_, 2, (Optr)VAR_name_0_0, (Optr)PBlock5029);
    Array PThreadedCode5028 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_push_closure, (Optr)PBlock5029, (Optr)&t_send2, (Optr)PSend5032, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock5026 = new_Block_with(PArray5027, empty_Array, PThreadedCode5028, 2, PSend5032, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5033 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5026);
    Array PThreadedCode5025 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5026, (Optr)&t_send1, (Optr)PSend5033, (Optr)&t_method_return);
    Method PMethod5023 = new_Method_with(PArray5024, empty_Array, empty_Array, PThreadedCode5025, 1, PSend5033);
    
    MethodClosure MC_SMB_includesSlot_ = new_MethodClosure((Method)PMethod5023, ObjectLayout_Class);
    store_method(ObjectLayout_Class, SMB_includesSlot_, MC_SMB_includesSlot_);
}


static void init_SMB_select_() {
    Symbol SMB_select_ = new_Symbol(L"select:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray5035 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Array PArray5036 = new_Array_with(1, (Optr)VAR_newCollection_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend5039 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign5038 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend5039);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray5041 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend5043 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)VAR_each_1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend5047 = new_Send((Optr)VAR_newCollection_0_1, SMB_add_, 1, (Optr)VAR_each_1_0);
    Array PThreadedCode5046 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send1, (Optr)PSend5047, (Optr)&t_block_return);
    Block PBlock5045 = new_Block_with(empty_Array, empty_Array, PThreadedCode5046, 1, PSend5047);
    // ifTrue:. 
    Send PSend5044 = new_Send((Optr)PSend5043, SMB_ifTrue_, 1, (Optr)PBlock5045);
    Array PThreadedCode5042 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send1, (Optr)PSend5043, (Optr)&t_send_ifTrue_, (Optr)PSend5044, (Optr)PBlock5045, (Optr)&t_method_return);
    Block PBlock5040 = new_Block_with(PArray5041, empty_Array, PThreadedCode5042, 1, PSend5044);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend5048 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock5040);
    Array PThreadedCode5037 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign5038, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend5039, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock5040, (Optr)&t_send1, (Optr)PSend5048, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod5034 = new_Method_with(PArray5035, PArray5036, empty_Array, PThreadedCode5037, 3, PAssign5038, PSend5048, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_select_ = new_MethodClosure((Method)PMethod5034, ObjectLayout_Class);
    store_method(ObjectLayout_Class, SMB_select_, MC_SMB_select_);
}


static void init_SMB_slotAt_ifAbsent_() {
    Symbol SMB_slotAt_ifAbsent_ = new_Symbol(L"slotAt:ifAbsent:");
    Variable VAR_name_0_0 = new_Variable_named(L"name", 0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Array PArray5050 = new_Array_with(2, (Optr)VAR_name_0_0, (Optr)VAR_block_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5053 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_aSlot_2_0 = new_Variable_named(L"aSlot", 2);
    Array PArray5056 = new_Array_with(1, (Optr)VAR_aSlot_2_0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend5058 = new_Send((Optr)VAR_aSlot_2_0, SMB_name, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend5059 = new_Send((Optr)PSend5058, SMB__equals_, 1, (Optr)VAR_name_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5063 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_aSlot_2_0);
    Array PThreadedCode5062 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aSlot_2_0, (Optr)&t_send1, (Optr)PSend5063, (Optr)&t_block_return);
    Block PBlock5061 = new_Block_with(empty_Array, empty_Array, PThreadedCode5062, 1, PSend5063);
    // ifTrue:. 
    Send PSend5060 = new_Send((Optr)PSend5059, SMB_ifTrue_, 1, (Optr)PBlock5061);
    Array PThreadedCode5057 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_aSlot_2_0, (Optr)&t_send0, (Optr)PSend5058, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_send1, (Optr)PSend5059, (Optr)&t_send_ifTrue_, (Optr)PSend5060, (Optr)PBlock5061, (Optr)&t_method_return);
    Block PBlock5055 = new_Block_with(PArray5056, empty_Array, PThreadedCode5057, 1, PSend5060);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend5064 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock5055);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend5065 = new_Send((Optr)VAR_block_0_1, SMB_value, 0);
    Array PThreadedCode5054 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock5055, (Optr)&t_send1, (Optr)PSend5064, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_send0, (Optr)PSend5065, (Optr)&t_method_return);
    Block PBlock5052 = new_Block_with(PArray5053, empty_Array, PThreadedCode5054, 2, PSend5064, PSend5065);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5066 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5052);
    Array PThreadedCode5051 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5052, (Optr)&t_send1, (Optr)PSend5066, (Optr)&t_method_return);
    Method PMethod5049 = new_Method_with(PArray5050, empty_Array, empty_Array, PThreadedCode5051, 1, PSend5066);
    
    MethodClosure MC_SMB_slotAt_ifAbsent_ = new_MethodClosure((Method)PMethod5049, ObjectLayout_Class);
    store_method(ObjectLayout_Class, SMB_slotAt_ifAbsent_, MC_SMB_slotAt_ifAbsent_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlockClosure_0_0 = new_Variable_named(L"aBlockClosure", 0);
    Array PArray5068 = new_Array_with(1, (Optr)VAR_aBlockClosure_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5070 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray5072 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend5074 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend5075 = new_Send((Optr)VAR_aBlockClosure_0_0, SMB_value_, 1, (Optr)PSend5074);
    Array PThreadedCode5073 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend5074, (Optr)&t_send1, (Optr)PSend5075, (Optr)&t_method_return);
    Block PBlock5071 = new_Block_with(PArray5072, empty_Array, PThreadedCode5073, 1, PSend5075);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend5076 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend5070, (Optr)PBlock5071);
    Array PThreadedCode5069 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5070, (Optr)&t_push_closure, (Optr)PBlock5071, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend5076, (Optr)&t_method_return);
    Method PMethod5067 = new_Method_with(PArray5068, empty_Array, empty_Array, PThreadedCode5069, 1, PSend5076);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod5067, ObjectLayout_Class);
    store_method(ObjectLayout_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray5078 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitObjectLayout_ = new_Symbol(L"visitObjectLayout:");
    // visitObjectLayout:. 
    Send PSend5080 = new_Send((Optr)VAR_visitor_0_0, SMB_visitObjectLayout_, 1, (Optr)self);
    Array PThreadedCode5079 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend5080, (Optr)&t_method_return);
    Method PMethod5077 = new_Method_with(PArray5078, empty_Array, empty_Array, PThreadedCode5079, 1, PSend5080);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod5077, ObjectLayout_Class);
    store_method(ObjectLayout_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray5082 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend5084 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend5085 = new_Send((Optr)PSend5084, SMB_name, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend5086 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend5085);
    String string_5087 = new_String(L" (");
    Constant string_5087_Const = new_Constant((Optr)string_5087);
    // <<. 
    Send PSend5088 = new_Send((Optr)PSend5086, SMB__shiftLeft_, 1, (Optr)string_5087_Const);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray5090 = new_Array_with(1, (Optr)VAR_each_1_0);
    // printOn:. 
    Send PSend5092 = new_Send((Optr)VAR_each_1_0, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode5091 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend5092, (Optr)&t_method_return);
    Block PBlock5089 = new_Block_with(PArray5090, empty_Array, PThreadedCode5091, 1, PSend5092);
    String string_5095 = new_String(L", ");
    Constant string_5095_Const = new_Constant((Optr)string_5095);
    // <<. 
    Send PSend5096 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_5095_Const);
    Array PThreadedCode5094 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_5095, (Optr)&t_send1, (Optr)PSend5096, (Optr)&t_block_return);
    Block PBlock5093 = new_Block_with(empty_Array, empty_Array, PThreadedCode5094, 1, PSend5096);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend5097 = new_Send((Optr)self, SMB_do_separatedBy_, 2, (Optr)PBlock5089, (Optr)PBlock5093);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend5098 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode5083 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5084, (Optr)&t_send0, (Optr)PSend5085, (Optr)&t_send1, (Optr)PSend5086, (Optr)&t_push1, (Optr)string_5087, (Optr)&t_send1, (Optr)PSend5088, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock5089, (Optr)&t_push_closure, (Optr)PBlock5093, (Optr)&t_send2, (Optr)PSend5097, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend5098, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5081 = new_Method_with(PArray5082, empty_Array, empty_Array, PThreadedCode5083, 4, PSend5088, PSend5097, PSend5098, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod5081, ObjectLayout_Class);
    store_method(ObjectLayout_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_inspectChildrenFrom_on_() {
    Symbol SMB_inspectChildrenFrom_on_ = new_Symbol(L"inspectChildrenFrom:on:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_inspector_0_1 = new_Variable_named(L"inspector", 0);
    Array PArray5100 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_inspector_0_1);
    Variable VAR_slot_1_0 = new_Variable_named(L"slot", 1);
    Array PArray5103 = new_Array_with(1, (Optr)VAR_slot_1_0);
    Symbol SMB_isInspectable = new_Symbol(L"isInspectable");
    // isInspectable. 
    Send PSend5105 = new_Send((Optr)VAR_slot_1_0, SMB_isInspectable, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend5111 = new_Send((Optr)VAR_slot_1_0, SMB_readFrom_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode5110 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_slot_1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend5111, (Optr)&t_block_return);
    Block PBlock5109 = new_Block_with(empty_Array, empty_Array, PThreadedCode5110, 1, PSend5111);
    Symbol SMB_child_value_ = new_Symbol(L"child:value:");
    // child:value:. 
    Send PSend5112 = new_Send((Optr)VAR_inspector_0_1, SMB_child_value_, 2, (Optr)VAR_slot_1_0, (Optr)PBlock5109);
    Array PThreadedCode5108 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_inspector_0_1, (Optr)&t_push_variable, (Optr)VAR_slot_1_0, (Optr)&t_push_closure, (Optr)PBlock5109, (Optr)&t_send2, (Optr)PSend5112, (Optr)&t_block_return);
    Block PBlock5107 = new_Block_with(empty_Array, empty_Array, PThreadedCode5108, 1, PSend5112);
    // ifTrue:. 
    Send PSend5106 = new_Send((Optr)PSend5105, SMB_ifTrue_, 1, (Optr)PBlock5107);
    Array PThreadedCode5104 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_slot_1_0, (Optr)&t_send0, (Optr)PSend5105, (Optr)&t_send_ifTrue_, (Optr)PSend5106, (Optr)PBlock5107, (Optr)&t_method_return);
    Block PBlock5102 = new_Block_with(PArray5103, empty_Array, PThreadedCode5104, 1, PSend5106);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend5113 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock5102);
    Array PThreadedCode5101 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock5102, (Optr)&t_send1, (Optr)PSend5113, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5099 = new_Method_with(PArray5100, empty_Array, empty_Array, PThreadedCode5101, 2, PSend5113, self);
    
    MethodClosure MC_SMB_inspectChildrenFrom_on_ = new_MethodClosure((Method)PMethod5099, ObjectLayout_Class);
    store_method(ObjectLayout_Class, SMB_inspectChildrenFrom_on_, MC_SMB_inspectChildrenFrom_on_);
}


static void init_SMB_do_separatedBy_() {
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    Variable VAR_elementBlock_0_0 = new_Variable_named(L"elementBlock", 0);
    Variable VAR_separatorBlock_0_1 = new_Variable_named(L"separatorBlock", 0);
    Array PArray5115 = new_Array_with(2, (Optr)VAR_elementBlock_0_0, (Optr)VAR_separatorBlock_0_1);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5117 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray5119 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend5121 = new_Send((Optr)VAR_index_1_0, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend5125 = new_Send((Optr)VAR_separatorBlock_0_1, SMB_value, 0);
    Array PThreadedCode5124 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_separatorBlock_0_1, (Optr)&t_send0, (Optr)PSend5125, (Optr)&t_block_return);
    Block PBlock5123 = new_Block_with(empty_Array, empty_Array, PThreadedCode5124, 1, PSend5125);
    // ifFalse:. 
    Send PSend5122 = new_Send((Optr)PSend5121, SMB_ifFalse_, 1, (Optr)PBlock5123);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend5126 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend5127 = new_Send((Optr)VAR_elementBlock_0_0, SMB_value_, 1, (Optr)PSend5126);
    Array PThreadedCode5120 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5121, (Optr)&t_send_ifFalse_, (Optr)PSend5122, (Optr)PBlock5123, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_elementBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend5126, (Optr)&t_send1, (Optr)PSend5127, (Optr)&t_method_return);
    Block PBlock5118 = new_Block_with(PArray5119, empty_Array, PThreadedCode5120, 2, PSend5122, PSend5127);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend5128 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend5117, (Optr)PBlock5118);
    Array PThreadedCode5116 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5117, (Optr)&t_push_closure, (Optr)PBlock5118, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend5128, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5114 = new_Method_with(PArray5115, empty_Array, empty_Array, PThreadedCode5116, 2, PSend5128, self);
    
    MethodClosure MC_SMB_do_separatedBy_ = new_MethodClosure((Method)PMethod5114, ObjectLayout_Class);
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