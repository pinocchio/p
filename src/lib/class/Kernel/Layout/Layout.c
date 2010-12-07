#include <lib/class/Kernel/Layout/Layout.h>


Optr layout_Kernel_Layout_Layout_Class_class;


static void init_SMB_basicAlias_in_() {
    Symbol SMB_basicAlias_in_ = new_Symbol(L"basicAlias:in:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_aContext_0_1 = new_Variable_named(L"aContext", 0);
    Array PArray4921 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_aContext_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray4924 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend4926 = new_Send((Optr)VAR__receiver__1_0, SMB_value_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend4927 = new_Send((Optr)VAR__receiver__1_0, SMB_context_, 1, (Optr)VAR_aContext_0_1);
    Array PThreadedCode4925 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend4926, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aContext_0_1, (Optr)&t_send1, (Optr)PSend4927, (Optr)&t_method_return);
    Block PBlock4923 = new_Block_with(PArray4924, empty_Array, PThreadedCode4925, 2, PSend4926, PSend4927);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend4928 = new_Send((Optr)PAllocationAlias_classReference, SMB_new, 0);
    // value:. 
    Send PSend4929 = new_Send((Optr)PBlock4923, SMB_value_, 1, (Optr)PSend4928);
    Array PThreadedCode4922 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock4923, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send0, (Optr)PSend4928, (Optr)&t_send1, (Optr)PSend4929, (Optr)&t_method_return);
    Method PMethod4920 = new_Method_with(PArray4921, empty_Array, empty_Array, PThreadedCode4922, 1, PSend4929);
    
    MethodClosure MC_SMB_basicAlias_in_ = new_MethodClosure((Method)PMethod4920, Kernel_Layout_Layout_Class);
    store_method(Kernel_Layout_Layout_Class, SMB_basicAlias_in_, MC_SMB_basicAlias_in_);
}


static void init_SMB_basicInstantiate_() {
    Symbol SMB_basicInstantiate_ = new_Symbol(L"basicInstantiate:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Array PArray4931 = new_Array_with(1, (Optr)VAR_class_0_0);
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend4933 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode4932 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4933, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4930 = new_Method_with(PArray4931, empty_Array, empty_Array, PThreadedCode4932, 2, PSend4933, self);
    
    MethodClosure MC_SMB_basicInstantiate_ = new_MethodClosure((Method)PMethod4930, Kernel_Layout_Layout_Class);
    store_method(Kernel_Layout_Layout_Class, SMB_basicInstantiate_, MC_SMB_basicInstantiate_);
}


static void init_SMB_instantiate_sized_() {
    Symbol SMB_instantiate_sized_ = new_Symbol(L"instantiate:sized:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_sizeRequested_0_1 = new_Variable_named(L"sizeRequested", 0);
    Array PArray4935 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_sizeRequested_0_1);
    Symbol SMB_basicInstantiate_sized_ = new_Symbol(L"basicInstantiate:sized:");
    // basicInstantiate:sized:. 
    Send PSend4937 = new_Send((Optr)self, SMB_basicInstantiate_sized_, 2, (Optr)VAR_class_0_0, (Optr)VAR_sizeRequested_0_1);
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    // initialize:. 
    Send PSend4938 = new_Send((Optr)self, SMB_initialize_, 1, (Optr)PSend4937);
    Array PThreadedCode4936 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_push_variable, (Optr)VAR_sizeRequested_0_1, (Optr)&t_send2, (Optr)PSend4937, (Optr)&t_send1, (Optr)PSend4938, (Optr)&t_method_return);
    Method PMethod4934 = new_Method_with(PArray4935, empty_Array, empty_Array, PThreadedCode4936, 1, PSend4938);
    
    MethodClosure MC_SMB_instantiate_sized_ = new_MethodClosure((Method)PMethod4934, Kernel_Layout_Layout_Class);
    store_method(Kernel_Layout_Layout_Class, SMB_instantiate_sized_, MC_SMB_instantiate_sized_);
}


static void init_SMB_initialize_() {
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4940 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode4941 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_method_return);
    Method PMethod4939 = new_Method_with(PArray4940, empty_Array, empty_Array, PThreadedCode4941, 1, VAR_anObject_0_0);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod4939, Kernel_Layout_Layout_Class);
    store_method(Kernel_Layout_Layout_Class, SMB_initialize_, MC_SMB_initialize_);
}


static void init_SMB_includesSlot_() {
    Symbol SMB_includesSlot_ = new_Symbol(L"includesSlot:");
    Variable VAR_name_0_0 = new_Variable_named(L"name", 0);
    Array PArray4943 = new_Array_with(1, (Optr)VAR_name_0_0);
    Array PThreadedCode4944 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_false);
    Method PMethod4942 = new_Method_with(PArray4943, empty_Array, empty_Array, PThreadedCode4944, 1, false_Const);
    
    MethodClosure MC_SMB_includesSlot_ = new_MethodClosure((Method)PMethod4942, Kernel_Layout_Layout_Class);
    store_method(Kernel_Layout_Layout_Class, SMB_includesSlot_, MC_SMB_includesSlot_);
}


static void init_SMB_instantiate_() {
    Symbol SMB_instantiate_ = new_Symbol(L"instantiate:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Array PArray4946 = new_Array_with(1, (Optr)VAR_class_0_0);
    Symbol SMB_basicInstantiate_ = new_Symbol(L"basicInstantiate:");
    // basicInstantiate:. 
    Send PSend4948 = new_Send((Optr)self, SMB_basicInstantiate_, 1, (Optr)VAR_class_0_0);
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    // initialize:. 
    Send PSend4949 = new_Send((Optr)self, SMB_initialize_, 1, (Optr)PSend4948);
    Array PThreadedCode4947 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_send1, (Optr)PSend4948, (Optr)&t_send1, (Optr)PSend4949, (Optr)&t_method_return);
    Method PMethod4945 = new_Method_with(PArray4946, empty_Array, empty_Array, PThreadedCode4947, 1, PSend4949);
    
    MethodClosure MC_SMB_instantiate_ = new_MethodClosure((Method)PMethod4945, Kernel_Layout_Layout_Class);
    store_method(Kernel_Layout_Layout_Class, SMB_instantiate_, MC_SMB_instantiate_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray4951 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitLayout_ = new_Symbol(L"visitLayout:");
    // visitLayout:. 
    Send PSend4953 = new_Send((Optr)VAR_visitor_0_0, SMB_visitLayout_, 1, (Optr)self);
    Array PThreadedCode4952 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend4953, (Optr)&t_method_return);
    Method PMethod4950 = new_Method_with(PArray4951, empty_Array, empty_Array, PThreadedCode4952, 1, PSend4953);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod4950, Kernel_Layout_Layout_Class);
    store_method(Kernel_Layout_Layout_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_basicInstantiate_sized_() {
    Symbol SMB_basicInstantiate_sized_ = new_Symbol(L"basicInstantiate:sized:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_sizeRequested_0_1 = new_Variable_named(L"sizeRequested", 0);
    Array PArray4955 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_sizeRequested_0_1);
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend4957 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode4956 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4957, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4954 = new_Method_with(PArray4955, empty_Array, empty_Array, PThreadedCode4956, 2, PSend4957, self);
    
    MethodClosure MC_SMB_basicInstantiate_sized_ = new_MethodClosure((Method)PMethod4954, Kernel_Layout_Layout_Class);
    store_method(Kernel_Layout_Layout_Class, SMB_basicInstantiate_sized_, MC_SMB_basicInstantiate_sized_);
}


static void init_SMB_inspectChildrenFrom_on_() {
    Symbol SMB_inspectChildrenFrom_on_ = new_Symbol(L"inspectChildrenFrom:on:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_inspector_0_1 = new_Variable_named(L"inspector", 0);
    Array PArray4959 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_inspector_0_1);
    Array PThreadedCode4960 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod4958 = new_Method_with(PArray4959, empty_Array, empty_Array, PThreadedCode4960, 1, self);
    
    MethodClosure MC_SMB_inspectChildrenFrom_on_ = new_MethodClosure((Method)PMethod4958, Kernel_Layout_Layout_Class);
    store_method(Kernel_Layout_Layout_Class, SMB_inspectChildrenFrom_on_, MC_SMB_inspectChildrenFrom_on_);
}


static void init_SMB_alias_in_() {
    Symbol SMB_alias_in_ = new_Symbol(L"alias:in:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_aContext_0_1 = new_Variable_named(L"aContext", 0);
    Array PArray4962 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_aContext_0_1);
    Symbol SMB_basicAlias_in_ = new_Symbol(L"basicAlias:in:");
    // basicAlias:in:. 
    Send PSend4964 = new_Send((Optr)self, SMB_basicAlias_in_, 2, (Optr)VAR_anObject_0_0, (Optr)VAR_aContext_0_1);
    Array PThreadedCode4963 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_variable, (Optr)VAR_aContext_0_1, (Optr)&t_send2, (Optr)PSend4964, (Optr)&t_method_return);
    Method PMethod4961 = new_Method_with(PArray4962, empty_Array, empty_Array, PThreadedCode4963, 1, PSend4964);
    
    MethodClosure MC_SMB_alias_in_ = new_MethodClosure((Method)PMethod4961, Kernel_Layout_Layout_Class);
    store_method(Kernel_Layout_Layout_Class, SMB_alias_in_, MC_SMB_alias_in_);
}


static void init_class_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlockClosure_0_0 = new_Variable_named(L"aBlockClosure", 0);
    Array PArray4966 = new_Array_with(1, (Optr)VAR_aBlockClosure_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4968 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray4970 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend4972 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend4973 = new_Send((Optr)VAR_aBlockClosure_0_0, SMB_value_, 1, (Optr)PSend4972);
    Array PThreadedCode4971 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend4972, (Optr)&t_send1, (Optr)PSend4973, (Optr)&t_method_return);
    Block PBlock4969 = new_Block_with(PArray4970, empty_Array, PThreadedCode4971, 1, PSend4973);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend4974 = new_Send((Optr)PSend4968, SMB_timesRepeat_, 1, (Optr)PBlock4969);
    Array PThreadedCode4967 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4968, (Optr)&t_push_closure, (Optr)PBlock4969, (Optr)&t_send1, (Optr)PSend4974, (Optr)&t_method_return);
    Method PMethod4965 = new_Method_with(PArray4966, empty_Array, empty_Array, PThreadedCode4967, 1, PSend4974);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod4965, HEADER(Kernel_Layout_Layout_Class));
    store_method(HEADER(Kernel_Layout_Layout_Class), SMB_do_, MC_SMB_do_);
}


static void init_class_SMB_newFrom_() {
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray4976 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_instance_0_1 = new_Variable_named(L"instance", 0);
    Variable VAR_index_0_2 = new_Variable_named(L"index", 0);
    Array PArray4977 = new_Array_with(2, (Optr)VAR_instance_0_1, (Optr)VAR_index_0_2);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4981 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    // new:. 
    Send PSend4980 = new_Send((Optr)self, SMB_new_, 1, (Optr)PSend4981);
    Assign PAssign4979 = new_Assign((Optr)VAR_instance_0_1, (Optr)PSend4980);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign4982 = new_Assign((Optr)VAR_index_0_2, (Optr)int_1_Const);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray4984 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend4986 = new_Send((Optr)VAR_instance_0_1, SMB_at_put_, 2, (Optr)VAR_index_0_2, (Optr)VAR_each_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend4988 = new_Send((Optr)VAR_index_0_2, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign4987 = new_Assign((Optr)VAR_index_0_2, (Optr)PSend4988);
    Array PThreadedCode4985 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_instance_0_1, (Optr)&t_push_variable, (Optr)VAR_index_0_2, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send2, (Optr)PSend4986, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign4987, (Optr)&t_push_variable, (Optr)VAR_index_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend4988, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock4983 = new_Block_with(PArray4984, empty_Array, PThreadedCode4985, 2, PSend4986, PAssign4987);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend4989 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock4983);
    Array PThreadedCode4978 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign4979, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend4981, (Optr)&t_send1, (Optr)PSend4980, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign4982, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock4983, (Optr)&t_send1, (Optr)PSend4989, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_instance_0_1, (Optr)&t_method_return);
    Method PMethod4975 = new_Method_with(PArray4976, PArray4977, empty_Array, PThreadedCode4978, 4, PAssign4979, PAssign4982, PSend4989, VAR_instance_0_1);
    
    MethodClosure MC_SMB_newFrom_ = new_MethodClosure((Method)PMethod4975, HEADER(Kernel_Layout_Layout_Class));
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
    init_SMB_basicAlias_in_();
    init_SMB_basicInstantiate_();
    init_SMB_instantiate_sized_();
    init_SMB_initialize_();
    init_SMB_includesSlot_();
    init_SMB_instantiate_();
    init_SMB_accept_();
    init_SMB_basicInstantiate_sized_();
    init_SMB_inspectChildrenFrom_on_();
    init_SMB_alias_in_();
    init_class_SMB_do_();
    init_class_SMB_newFrom_();
    
}