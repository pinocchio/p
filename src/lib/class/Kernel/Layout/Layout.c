#include <lib/class/Kernel/Layout/Layout.h>


Optr layout_Kernel_Layout_Layout_Class_class;


static void init_SMB_basicInstantiate_() {
    Symbol SMB_basicInstantiate_ = new_Symbol(L"basicInstantiate:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Array PArray4923 = new_Array_with(1, (Optr)VAR_class_0_0);
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend4925 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode4924 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4925, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4922 = new_Method_with(PArray4923, empty_Array, empty_Array, PThreadedCode4924, 2, PSend4925, self);
    
    MethodClosure MC_SMB_basicInstantiate_ = new_MethodClosure((Method)PMethod4922, Kernel_Layout_Layout_Class);
    store_method(Kernel_Layout_Layout_Class, SMB_basicInstantiate_, MC_SMB_basicInstantiate_);
}


static void init_SMB_instantiate_sized_() {
    Symbol SMB_instantiate_sized_ = new_Symbol(L"instantiate:sized:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_sizeRequested_0_1 = new_Variable_named(L"sizeRequested", 0);
    Array PArray4927 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_sizeRequested_0_1);
    Symbol SMB_basicInstantiate_sized_ = new_Symbol(L"basicInstantiate:sized:");
    // basicInstantiate:sized:. 
    Send PSend4929 = new_Send((Optr)self, SMB_basicInstantiate_sized_, 2, (Optr)VAR_class_0_0, (Optr)VAR_sizeRequested_0_1);
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    // initialize:. 
    Send PSend4930 = new_Send((Optr)self, SMB_initialize_, 1, (Optr)PSend4929);
    Array PThreadedCode4928 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_push_variable, (Optr)VAR_sizeRequested_0_1, (Optr)&t_send2, (Optr)PSend4929, (Optr)&t_send1, (Optr)PSend4930, (Optr)&t_method_return);
    Method PMethod4926 = new_Method_with(PArray4927, empty_Array, empty_Array, PThreadedCode4928, 1, PSend4930);
    
    MethodClosure MC_SMB_instantiate_sized_ = new_MethodClosure((Method)PMethod4926, Kernel_Layout_Layout_Class);
    store_method(Kernel_Layout_Layout_Class, SMB_instantiate_sized_, MC_SMB_instantiate_sized_);
}


static void init_SMB_basicAlias_in_() {
    Symbol SMB_basicAlias_in_ = new_Symbol(L"basicAlias:in:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_aContext_0_1 = new_Variable_named(L"aContext", 0);
    Array PArray4932 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_aContext_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray4935 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend4937 = new_Send((Optr)VAR__receiver__1_0, SMB_value_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend4938 = new_Send((Optr)VAR__receiver__1_0, SMB_context_, 1, (Optr)VAR_aContext_0_1);
    Array PThreadedCode4936 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend4937, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aContext_0_1, (Optr)&t_send1, (Optr)PSend4938, (Optr)&t_method_return);
    Block PBlock4934 = new_Block_with(PArray4935, empty_Array, PThreadedCode4936, 2, PSend4937, PSend4938);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend4939 = new_Send((Optr)PAllocationAlias_classReference, SMB_new, 0);
    // value:. 
    Send PSend4940 = new_Send((Optr)PBlock4934, SMB_value_, 1, (Optr)PSend4939);
    Array PThreadedCode4933 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock4934, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send0, (Optr)PSend4939, (Optr)&t_send1, (Optr)PSend4940, (Optr)&t_method_return);
    Method PMethod4931 = new_Method_with(PArray4932, empty_Array, empty_Array, PThreadedCode4933, 1, PSend4940);
    
    MethodClosure MC_SMB_basicAlias_in_ = new_MethodClosure((Method)PMethod4931, Kernel_Layout_Layout_Class);
    store_method(Kernel_Layout_Layout_Class, SMB_basicAlias_in_, MC_SMB_basicAlias_in_);
}


static void init_SMB_initialize_() {
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4942 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode4943 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_method_return);
    Method PMethod4941 = new_Method_with(PArray4942, empty_Array, empty_Array, PThreadedCode4943, 1, VAR_anObject_0_0);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod4941, Kernel_Layout_Layout_Class);
    store_method(Kernel_Layout_Layout_Class, SMB_initialize_, MC_SMB_initialize_);
}


static void init_SMB_includesSlot_() {
    Symbol SMB_includesSlot_ = new_Symbol(L"includesSlot:");
    Variable VAR_name_0_0 = new_Variable_named(L"name", 0);
    Array PArray4945 = new_Array_with(1, (Optr)VAR_name_0_0);
    Array PThreadedCode4946 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_false);
    Method PMethod4944 = new_Method_with(PArray4945, empty_Array, empty_Array, PThreadedCode4946, 1, false_Const);
    
    MethodClosure MC_SMB_includesSlot_ = new_MethodClosure((Method)PMethod4944, Kernel_Layout_Layout_Class);
    store_method(Kernel_Layout_Layout_Class, SMB_includesSlot_, MC_SMB_includesSlot_);
}


static void init_SMB_instantiate_() {
    Symbol SMB_instantiate_ = new_Symbol(L"instantiate:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Array PArray4948 = new_Array_with(1, (Optr)VAR_class_0_0);
    Symbol SMB_basicInstantiate_ = new_Symbol(L"basicInstantiate:");
    // basicInstantiate:. 
    Send PSend4950 = new_Send((Optr)self, SMB_basicInstantiate_, 1, (Optr)VAR_class_0_0);
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    // initialize:. 
    Send PSend4951 = new_Send((Optr)self, SMB_initialize_, 1, (Optr)PSend4950);
    Array PThreadedCode4949 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_send1, (Optr)PSend4950, (Optr)&t_send1, (Optr)PSend4951, (Optr)&t_method_return);
    Method PMethod4947 = new_Method_with(PArray4948, empty_Array, empty_Array, PThreadedCode4949, 1, PSend4951);
    
    MethodClosure MC_SMB_instantiate_ = new_MethodClosure((Method)PMethod4947, Kernel_Layout_Layout_Class);
    store_method(Kernel_Layout_Layout_Class, SMB_instantiate_, MC_SMB_instantiate_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray4953 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitLayout_ = new_Symbol(L"visitLayout:");
    // visitLayout:. 
    Send PSend4955 = new_Send((Optr)VAR_visitor_0_0, SMB_visitLayout_, 1, (Optr)self);
    Array PThreadedCode4954 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend4955, (Optr)&t_method_return);
    Method PMethod4952 = new_Method_with(PArray4953, empty_Array, empty_Array, PThreadedCode4954, 1, PSend4955);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod4952, Kernel_Layout_Layout_Class);
    store_method(Kernel_Layout_Layout_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_inspectChildrenFrom_on_() {
    Symbol SMB_inspectChildrenFrom_on_ = new_Symbol(L"inspectChildrenFrom:on:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_inspector_0_1 = new_Variable_named(L"inspector", 0);
    Array PArray4957 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_inspector_0_1);
    Array PThreadedCode4958 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod4956 = new_Method_with(PArray4957, empty_Array, empty_Array, PThreadedCode4958, 1, self);
    
    MethodClosure MC_SMB_inspectChildrenFrom_on_ = new_MethodClosure((Method)PMethod4956, Kernel_Layout_Layout_Class);
    store_method(Kernel_Layout_Layout_Class, SMB_inspectChildrenFrom_on_, MC_SMB_inspectChildrenFrom_on_);
}


static void init_SMB_basicInstantiate_sized_() {
    Symbol SMB_basicInstantiate_sized_ = new_Symbol(L"basicInstantiate:sized:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_sizeRequested_0_1 = new_Variable_named(L"sizeRequested", 0);
    Array PArray4960 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_sizeRequested_0_1);
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend4962 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode4961 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4962, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4959 = new_Method_with(PArray4960, empty_Array, empty_Array, PThreadedCode4961, 2, PSend4962, self);
    
    MethodClosure MC_SMB_basicInstantiate_sized_ = new_MethodClosure((Method)PMethod4959, Kernel_Layout_Layout_Class);
    store_method(Kernel_Layout_Layout_Class, SMB_basicInstantiate_sized_, MC_SMB_basicInstantiate_sized_);
}


static void init_SMB_alias_in_() {
    Symbol SMB_alias_in_ = new_Symbol(L"alias:in:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_aContext_0_1 = new_Variable_named(L"aContext", 0);
    Array PArray4964 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_aContext_0_1);
    Symbol SMB_basicAlias_in_ = new_Symbol(L"basicAlias:in:");
    // basicAlias:in:. 
    Send PSend4966 = new_Send((Optr)self, SMB_basicAlias_in_, 2, (Optr)VAR_anObject_0_0, (Optr)VAR_aContext_0_1);
    Array PThreadedCode4965 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_variable, (Optr)VAR_aContext_0_1, (Optr)&t_send2, (Optr)PSend4966, (Optr)&t_method_return);
    Method PMethod4963 = new_Method_with(PArray4964, empty_Array, empty_Array, PThreadedCode4965, 1, PSend4966);
    
    MethodClosure MC_SMB_alias_in_ = new_MethodClosure((Method)PMethod4963, Kernel_Layout_Layout_Class);
    store_method(Kernel_Layout_Layout_Class, SMB_alias_in_, MC_SMB_alias_in_);
}


static void init_class_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlockClosure_0_0 = new_Variable_named(L"aBlockClosure", 0);
    Array PArray4968 = new_Array_with(1, (Optr)VAR_aBlockClosure_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4970 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray4972 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend4974 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend4975 = new_Send((Optr)VAR_aBlockClosure_0_0, SMB_value_, 1, (Optr)PSend4974);
    Array PThreadedCode4973 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend4974, (Optr)&t_send1, (Optr)PSend4975, (Optr)&t_method_return);
    Block PBlock4971 = new_Block_with(PArray4972, empty_Array, PThreadedCode4973, 1, PSend4975);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend4976 = new_Send((Optr)PSend4970, SMB_timesRepeat_, 1, (Optr)PBlock4971);
    Array PThreadedCode4969 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4970, (Optr)&t_push_closure, (Optr)PBlock4971, (Optr)&t_send1, (Optr)PSend4976, (Optr)&t_method_return);
    Method PMethod4967 = new_Method_with(PArray4968, empty_Array, empty_Array, PThreadedCode4969, 1, PSend4976);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod4967, HEADER(Kernel_Layout_Layout_Class));
    store_method(HEADER(Kernel_Layout_Layout_Class), SMB_do_, MC_SMB_do_);
}


static void init_class_SMB_newFrom_() {
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray4978 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_instance_0_1 = new_Variable_named(L"instance", 0);
    Variable VAR_index_0_2 = new_Variable_named(L"index", 0);
    Array PArray4979 = new_Array_with(2, (Optr)VAR_instance_0_1, (Optr)VAR_index_0_2);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4983 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    // new:. 
    Send PSend4982 = new_Send((Optr)self, SMB_new_, 1, (Optr)PSend4983);
    Assign PAssign4981 = new_Assign((Optr)VAR_instance_0_1, (Optr)PSend4982);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign4984 = new_Assign((Optr)VAR_index_0_2, (Optr)int_1_Const);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray4986 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend4988 = new_Send((Optr)VAR_instance_0_1, SMB_at_put_, 2, (Optr)VAR_index_0_2, (Optr)VAR_each_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend4990 = new_Send((Optr)VAR_index_0_2, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign4989 = new_Assign((Optr)VAR_index_0_2, (Optr)PSend4990);
    Array PThreadedCode4987 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_instance_0_1, (Optr)&t_push_variable, (Optr)VAR_index_0_2, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send2, (Optr)PSend4988, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign4989, (Optr)&t_push_variable, (Optr)VAR_index_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend4990, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock4985 = new_Block_with(PArray4986, empty_Array, PThreadedCode4987, 2, PSend4988, PAssign4989);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend4991 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock4985);
    Array PThreadedCode4980 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign4981, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend4983, (Optr)&t_send1, (Optr)PSend4982, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign4984, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock4985, (Optr)&t_send1, (Optr)PSend4991, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_instance_0_1, (Optr)&t_method_return);
    Method PMethod4977 = new_Method_with(PArray4978, PArray4979, empty_Array, PThreadedCode4980, 4, PAssign4981, PAssign4984, PSend4991, VAR_instance_0_1);
    
    MethodClosure MC_SMB_newFrom_ = new_MethodClosure((Method)PMethod4977, HEADER(Kernel_Layout_Layout_Class));
    store_method(HEADER(Kernel_Layout_Layout_Class), SMB_newFrom_, MC_SMB_newFrom_);
}

void init_Kernel_Layout_PLayout_layout() {
    layout_Kernel_Layout_Layout_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_Layout_Layout_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_Layout_Layout_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_Layout_Layout_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_Layout_Layout_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_Layout_Layout_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Layout = new_Symbol(L"Layout");
    Kernel_Layout_Layout_Class = (Class)new_Class(Object_Class, layout_Kernel_Layout_Layout_Class_class);
    Kernel_Layout_Layout_Class->layout = empty_object_layout;
    Kernel_Layout_Layout_Class->name = SMB_Layout;
    
}

void init_Kernel_Layout_PLayout_methods() {
    init_SMB_basicInstantiate_();
    init_SMB_instantiate_sized_();
    init_SMB_basicAlias_in_();
    init_SMB_initialize_();
    init_SMB_includesSlot_();
    init_SMB_instantiate_();
    init_SMB_accept_();
    init_SMB_inspectChildrenFrom_on_();
    init_SMB_basicInstantiate_sized_();
    init_SMB_alias_in_();
    init_class_SMB_do_();
    init_class_SMB_newFrom_();
    
}