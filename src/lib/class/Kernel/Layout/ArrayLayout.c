#include <lib/class/Kernel/Layout/ArrayLayout.h>


Optr layout_Kernel_Layout_ArrayLayout_Class_class;


static void init_SMB_aliasChildrenFrom_to_in_() {
    Symbol SMB_aliasChildrenFrom_to_in_ = new_Symbol(L"aliasChildrenFrom:to:in:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_anotherObject_0_1 = new_Variable_named(L"anotherObject", 0);
    Variable VAR_aContext_0_2 = new_Variable_named(L"aContext", 0);
    Array PArray5129 = new_Array_with(3, (Optr)VAR_anObject_0_0, (Optr)VAR_anotherObject_0_1, (Optr)VAR_aContext_0_2);
    Super PSuper5131 = new_Super(SMB_aliasChildrenFrom_to_in_, 3, (Optr)VAR_anObject_0_0, (Optr)VAR_anotherObject_0_1, (Optr)VAR_aContext_0_2);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5132 = new_Send((Optr)VAR_anObject_0_0, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray5134 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend5136 = new_Send((Optr)VAR_anObject_0_0, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend5137 = new_Send((Optr)VAR_anotherObject_0_1, SMB_at_put_, 2, (Optr)VAR_index_1_0, (Optr)PSend5136);
    Array PThreadedCode5135 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_anotherObject_0_1, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend5136, (Optr)&t_send2, (Optr)PSend5137, (Optr)&t_method_return);
    Block PBlock5133 = new_Block_with(PArray5134, empty_Array, PThreadedCode5135, 1, PSend5137);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend5138 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend5132, (Optr)PBlock5133);
    Array PThreadedCode5130 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_variable, (Optr)VAR_anotherObject_0_1, (Optr)&t_push_variable, (Optr)VAR_aContext_0_2, (Optr)&t_super3, (Optr)PSuper5131, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend5132, (Optr)&t_push_closure, (Optr)PBlock5133, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend5138, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5128 = new_Method_with(PArray5129, empty_Array, empty_Array, PThreadedCode5130, 3, PSuper5131, PSend5138, self);
    
    MethodClosure MC_SMB_aliasChildrenFrom_to_in_ = new_MethodClosure((Method)PMethod5128, ArrayLayout_Class);
    store_method(ArrayLayout_Class, SMB_aliasChildrenFrom_to_in_, MC_SMB_aliasChildrenFrom_to_in_);
}


static void init_SMB_basicInstantiate_() {
    Symbol SMB_basicInstantiate_ = new_Symbol(L"basicInstantiate:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Array PArray5140 = new_Array_with(1, (Optr)VAR_class_0_0);
    Symbol SMB_basicInstantiate_sized_ = new_Symbol(L"basicInstantiate:sized:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // basicInstantiate:sized:. 
    Send PSend5142 = new_Send((Optr)self, SMB_basicInstantiate_sized_, 2, (Optr)VAR_class_0_0, (Optr)int_0_Const);
    Array PThreadedCode5141 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend5142, (Optr)&t_method_return);
    Method PMethod5139 = new_Method_with(PArray5140, empty_Array, empty_Array, PThreadedCode5141, 1, PSend5142);
    
    MethodClosure MC_SMB_basicInstantiate_ = new_MethodClosure((Method)PMethod5139, ArrayLayout_Class);
    store_method(ArrayLayout_Class, SMB_basicInstantiate_, MC_SMB_basicInstantiate_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray5144 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitArrayLayout_ = new_Symbol(L"visitArrayLayout:");
    // visitArrayLayout:. 
    Send PSend5146 = new_Send((Optr)VAR_visitor_0_0, SMB_visitArrayLayout_, 1, (Optr)self);
    Array PThreadedCode5145 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend5146, (Optr)&t_method_return);
    Method PMethod5143 = new_Method_with(PArray5144, empty_Array, empty_Array, PThreadedCode5145, 1, PSend5146);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod5143, ArrayLayout_Class);
    store_method(ArrayLayout_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_inspectChildrenFrom_on_() {
    Symbol SMB_inspectChildrenFrom_on_ = new_Symbol(L"inspectChildrenFrom:on:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_inspector_0_1 = new_Variable_named(L"inspector", 0);
    Array PArray5148 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_inspector_0_1);
    Super PSuper5150 = new_Super(SMB_inspectChildrenFrom_on_, 2, (Optr)VAR_anObject_0_0, (Optr)VAR_inspector_0_1);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5151 = new_Send((Optr)VAR_anObject_0_0, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray5153 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend5157 = new_Send((Optr)VAR_anObject_0_0, SMB_at_, 1, (Optr)VAR_index_1_0);
    Array PThreadedCode5156 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend5157, (Optr)&t_block_return);
    Block PBlock5155 = new_Block_with(empty_Array, empty_Array, PThreadedCode5156, 1, PSend5157);
    Symbol SMB_child_value_ = new_Symbol(L"child:value:");
    // child:value:. 
    Send PSend5158 = new_Send((Optr)VAR_inspector_0_1, SMB_child_value_, 2, (Optr)VAR_index_1_0, (Optr)PBlock5155);
    Array PThreadedCode5154 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_inspector_0_1, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_push_closure, (Optr)PBlock5155, (Optr)&t_send2, (Optr)PSend5158, (Optr)&t_method_return);
    Block PBlock5152 = new_Block_with(PArray5153, empty_Array, PThreadedCode5154, 1, PSend5158);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend5159 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend5151, (Optr)PBlock5152);
    Array PThreadedCode5149 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_variable, (Optr)VAR_inspector_0_1, (Optr)&t_super2, (Optr)PSuper5150, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend5151, (Optr)&t_push_closure, (Optr)PBlock5152, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend5159, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5147 = new_Method_with(PArray5148, empty_Array, empty_Array, PThreadedCode5149, 3, PSuper5150, PSend5159, self);
    
    MethodClosure MC_SMB_inspectChildrenFrom_on_ = new_MethodClosure((Method)PMethod5147, ArrayLayout_Class);
    store_method(ArrayLayout_Class, SMB_inspectChildrenFrom_on_, MC_SMB_inspectChildrenFrom_on_);
}


static void init_SMB_basicInstantiate_sized_() {
    Symbol SMB_basicInstantiate_sized_ = new_Symbol(L"basicInstantiate:sized:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_sizeRequested_0_1 = new_Variable_named(L"sizeRequested", 0);
    Array PArray5161 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_sizeRequested_0_1);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Class_minus_Layout_minus_Array = new_Symbol(L"Class.Layout.Array");
    Annotation PAnnotation5163 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_basicInstantiate_sized_, (Optr)SMB_Class_minus_Layout_minus_Array);
    Array PArray5162 = new_Array_with(1, (Optr)PAnnotation5163);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend5165 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode5164 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5165, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod5160 = new_NativeMethod_with(PArray5161, empty_Array, PArray5162, PThreadedCode5164, 2, PSend5165, self);
    
    MethodClosure MC_SMB_basicInstantiate_sized_ = new_MethodClosure((Method)PNativeMethod5160, ArrayLayout_Class);
    store_method(ArrayLayout_Class, SMB_basicInstantiate_sized_, MC_SMB_basicInstantiate_sized_);
}


static void init_SMB_alias_in_() {
    Symbol SMB_alias_in_ = new_Symbol(L"alias:in:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_aContext_0_1 = new_Variable_named(L"aContext", 0);
    Array PArray5167 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_aContext_0_1);
    Variable VAR_clone_0_2 = new_Variable_named(L"clone", 0);
    Array PArray5168 = new_Array_with(1, (Optr)VAR_clone_0_2);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend5172 = new_Send((Optr)VAR_anObject_0_0, SMB_species, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5173 = new_Send((Optr)VAR_anObject_0_0, SMB_size, 0);
    // new:. 
    Send PSend5171 = new_Send((Optr)PSend5172, SMB_new_, 1, (Optr)PSend5173);
    Assign PAssign5170 = new_Assign((Optr)VAR_clone_0_2, (Optr)PSend5171);
    Symbol SMB_aliasChildrenFrom_to_in_ = new_Symbol(L"aliasChildrenFrom:to:in:");
    // aliasChildrenFrom:to:in:. 
    Send PSend5174 = new_Send((Optr)self, SMB_aliasChildrenFrom_to_in_, 3, (Optr)VAR_anObject_0_0, (Optr)VAR_clone_0_2, (Optr)VAR_aContext_0_1);
    Symbol SMB_basicAlias_in_ = new_Symbol(L"basicAlias:in:");
    Super PSuper5175 = new_Super(SMB_basicAlias_in_, 2, (Optr)VAR_clone_0_2, (Optr)VAR_aContext_0_1);
    Array PThreadedCode5169 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign5170, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend5172, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend5173, (Optr)&t_send1, (Optr)PSend5171, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_variable, (Optr)VAR_clone_0_2, (Optr)&t_push_variable, (Optr)VAR_aContext_0_1, (Optr)&t_send3, (Optr)PSend5174, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_clone_0_2, (Optr)&t_push_variable, (Optr)VAR_aContext_0_1, (Optr)&t_super2, (Optr)PSuper5175, (Optr)&t_method_return);
    Method PMethod5166 = new_Method_with(PArray5167, PArray5168, empty_Array, PThreadedCode5169, 3, PAssign5170, PSend5174, PSuper5175);
    
    MethodClosure MC_SMB_alias_in_ = new_MethodClosure((Method)PMethod5166, ArrayLayout_Class);
    store_method(ArrayLayout_Class, SMB_alias_in_, MC_SMB_alias_in_);
}

void init_Kernel_Layout_PArrayLayout_layout() {
    layout_Kernel_Layout_ArrayLayout_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_Layout_ArrayLayout_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_Layout_ArrayLayout_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_Layout_ArrayLayout_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_Layout_ArrayLayout_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_Layout_ArrayLayout_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_ArrayLayout = new_Symbol(L"ArrayLayout");
    Class_set_superclass(ArrayLayout_Class, ObjectLayout_Class);
    ArrayLayout_Class->layout = empty_array_layout;
    HEADER(ArrayLayout_Class)->layout = layout_Kernel_Layout_ArrayLayout_Class_class;
    ArrayLayout_Class->name = SMB_ArrayLayout;
    
}

void init_Kernel_Layout_PArrayLayout_methods() {
    init_SMB_aliasChildrenFrom_to_in_();
    init_SMB_basicInstantiate_();
    init_SMB_accept_();
    init_SMB_inspectChildrenFrom_on_();
    init_SMB_basicInstantiate_sized_();
    init_SMB_alias_in_();
    
}