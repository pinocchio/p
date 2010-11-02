#include <lib/class/Kernel/Layout/ArrayLayout.h>


Optr layout_Kernel_Layout_ArrayLayout_Class_class;


static void init_SMB_aliasChildrenFrom_to_in_() {
    Symbol SMB_aliasChildrenFrom_to_in_ = new_Symbol(L"aliasChildrenFrom:to:in:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_anotherObject_0_1 = new_Variable_named(L"anotherObject", 0);
    Variable VAR_aContext_0_2 = new_Variable_named(L"aContext", 0);
    Array PArray5130 = new_Array_with(3, (Optr)VAR_anObject_0_0, (Optr)VAR_anotherObject_0_1, (Optr)VAR_aContext_0_2);
    Super PSuper5132 = new_Super(SMB_aliasChildrenFrom_to_in_, 3, (Optr)VAR_anObject_0_0, (Optr)VAR_anotherObject_0_1, (Optr)VAR_aContext_0_2);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5133 = new_Send((Optr)VAR_anObject_0_0, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray5135 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend5137 = new_Send((Optr)VAR_anObject_0_0, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend5138 = new_Send((Optr)VAR_anotherObject_0_1, SMB_at_put_, 2, (Optr)VAR_index_1_0, (Optr)PSend5137);
    Array PThreadedCode5136 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_anotherObject_0_1, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend5137, (Optr)&t_send2, (Optr)PSend5138, (Optr)&t_method_return);
    Block PBlock5134 = new_Block_with(PArray5135, empty_Array, PThreadedCode5136, 1, PSend5138);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend5139 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend5133, (Optr)PBlock5134);
    Array PThreadedCode5131 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_variable, (Optr)VAR_anotherObject_0_1, (Optr)&t_push_variable, (Optr)VAR_aContext_0_2, (Optr)&t_super3, (Optr)PSuper5132, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend5133, (Optr)&t_push_closure, (Optr)PBlock5134, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend5139, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5129 = new_Method_with(PArray5130, empty_Array, empty_Array, PThreadedCode5131, 3, PSuper5132, PSend5139, self);
    
    MethodClosure MC_SMB_aliasChildrenFrom_to_in_ = new_MethodClosure((Method)PMethod5129, ArrayLayout_Class);
    store_method(ArrayLayout_Class, SMB_aliasChildrenFrom_to_in_, MC_SMB_aliasChildrenFrom_to_in_);
}


static void init_SMB_basicInstantiate_() {
    Symbol SMB_basicInstantiate_ = new_Symbol(L"basicInstantiate:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Array PArray5141 = new_Array_with(1, (Optr)VAR_class_0_0);
    Symbol SMB_basicInstantiate_sized_ = new_Symbol(L"basicInstantiate:sized:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // basicInstantiate:sized:. 
    Send PSend5143 = new_Send((Optr)self, SMB_basicInstantiate_sized_, 2, (Optr)VAR_class_0_0, (Optr)int_0_Const);
    Array PThreadedCode5142 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend5143, (Optr)&t_method_return);
    Method PMethod5140 = new_Method_with(PArray5141, empty_Array, empty_Array, PThreadedCode5142, 1, PSend5143);
    
    MethodClosure MC_SMB_basicInstantiate_ = new_MethodClosure((Method)PMethod5140, ArrayLayout_Class);
    store_method(ArrayLayout_Class, SMB_basicInstantiate_, MC_SMB_basicInstantiate_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray5145 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitArrayLayout_ = new_Symbol(L"visitArrayLayout:");
    // visitArrayLayout:. 
    Send PSend5147 = new_Send((Optr)VAR_visitor_0_0, SMB_visitArrayLayout_, 1, (Optr)self);
    Array PThreadedCode5146 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend5147, (Optr)&t_method_return);
    Method PMethod5144 = new_Method_with(PArray5145, empty_Array, empty_Array, PThreadedCode5146, 1, PSend5147);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod5144, ArrayLayout_Class);
    store_method(ArrayLayout_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_basicInstantiate_sized_() {
    Symbol SMB_basicInstantiate_sized_ = new_Symbol(L"basicInstantiate:sized:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_sizeRequested_0_1 = new_Variable_named(L"sizeRequested", 0);
    Array PArray5149 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_sizeRequested_0_1);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Class_minus_Layout_minus_Array = new_Symbol(L"Class.Layout.Array");
    Annotation PAnnotation5151 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_basicInstantiate_sized_, (Optr)SMB_Class_minus_Layout_minus_Array);
    Array PArray5150 = new_Array_with(1, (Optr)PAnnotation5151);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend5153 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode5152 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5153, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod5148 = new_NativeMethod_with(PArray5149, empty_Array, PArray5150, PThreadedCode5152, 2, PSend5153, self);
    
    MethodClosure MC_SMB_basicInstantiate_sized_ = new_MethodClosure((Method)PNativeMethod5148, ArrayLayout_Class);
    store_method(ArrayLayout_Class, SMB_basicInstantiate_sized_, MC_SMB_basicInstantiate_sized_);
}


static void init_SMB_inspectChildrenFrom_on_() {
    Symbol SMB_inspectChildrenFrom_on_ = new_Symbol(L"inspectChildrenFrom:on:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_inspector_0_1 = new_Variable_named(L"inspector", 0);
    Array PArray5155 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_inspector_0_1);
    Super PSuper5157 = new_Super(SMB_inspectChildrenFrom_on_, 2, (Optr)VAR_anObject_0_0, (Optr)VAR_inspector_0_1);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5158 = new_Send((Optr)VAR_anObject_0_0, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray5160 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend5164 = new_Send((Optr)VAR_anObject_0_0, SMB_at_, 1, (Optr)VAR_index_1_0);
    Array PThreadedCode5163 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend5164, (Optr)&t_block_return);
    Block PBlock5162 = new_Block_with(empty_Array, empty_Array, PThreadedCode5163, 1, PSend5164);
    Symbol SMB_child_value_ = new_Symbol(L"child:value:");
    // child:value:. 
    Send PSend5165 = new_Send((Optr)VAR_inspector_0_1, SMB_child_value_, 2, (Optr)VAR_index_1_0, (Optr)PBlock5162);
    Array PThreadedCode5161 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_inspector_0_1, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_push_closure, (Optr)PBlock5162, (Optr)&t_send2, (Optr)PSend5165, (Optr)&t_method_return);
    Block PBlock5159 = new_Block_with(PArray5160, empty_Array, PThreadedCode5161, 1, PSend5165);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend5166 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend5158, (Optr)PBlock5159);
    Array PThreadedCode5156 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_variable, (Optr)VAR_inspector_0_1, (Optr)&t_super2, (Optr)PSuper5157, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend5158, (Optr)&t_push_closure, (Optr)PBlock5159, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend5166, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5154 = new_Method_with(PArray5155, empty_Array, empty_Array, PThreadedCode5156, 3, PSuper5157, PSend5166, self);
    
    MethodClosure MC_SMB_inspectChildrenFrom_on_ = new_MethodClosure((Method)PMethod5154, ArrayLayout_Class);
    store_method(ArrayLayout_Class, SMB_inspectChildrenFrom_on_, MC_SMB_inspectChildrenFrom_on_);
}


static void init_SMB_alias_in_() {
    Symbol SMB_alias_in_ = new_Symbol(L"alias:in:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_aContext_0_1 = new_Variable_named(L"aContext", 0);
    Array PArray5168 = new_Array_with(2, (Optr)VAR_anObject_0_0, (Optr)VAR_aContext_0_1);
    Variable VAR_clone_0_2 = new_Variable_named(L"clone", 0);
    Array PArray5169 = new_Array_with(1, (Optr)VAR_clone_0_2);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend5173 = new_Send((Optr)VAR_anObject_0_0, SMB_species, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5174 = new_Send((Optr)VAR_anObject_0_0, SMB_size, 0);
    // new:. 
    Send PSend5172 = new_Send((Optr)PSend5173, SMB_new_, 1, (Optr)PSend5174);
    Assign PAssign5171 = new_Assign((Optr)VAR_clone_0_2, (Optr)PSend5172);
    Symbol SMB_aliasChildrenFrom_to_in_ = new_Symbol(L"aliasChildrenFrom:to:in:");
    // aliasChildrenFrom:to:in:. 
    Send PSend5175 = new_Send((Optr)self, SMB_aliasChildrenFrom_to_in_, 3, (Optr)VAR_anObject_0_0, (Optr)VAR_clone_0_2, (Optr)VAR_aContext_0_1);
    Symbol SMB_basicAlias_in_ = new_Symbol(L"basicAlias:in:");
    Super PSuper5176 = new_Super(SMB_basicAlias_in_, 2, (Optr)VAR_clone_0_2, (Optr)VAR_aContext_0_1);
    Array PThreadedCode5170 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign5171, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend5173, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend5174, (Optr)&t_send1, (Optr)PSend5172, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_variable, (Optr)VAR_clone_0_2, (Optr)&t_push_variable, (Optr)VAR_aContext_0_1, (Optr)&t_send3, (Optr)PSend5175, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_clone_0_2, (Optr)&t_push_variable, (Optr)VAR_aContext_0_1, (Optr)&t_super2, (Optr)PSuper5176, (Optr)&t_method_return);
    Method PMethod5167 = new_Method_with(PArray5168, PArray5169, empty_Array, PThreadedCode5170, 3, PAssign5171, PSend5175, PSuper5176);
    
    MethodClosure MC_SMB_alias_in_ = new_MethodClosure((Method)PMethod5167, ArrayLayout_Class);
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
    init_SMB_basicInstantiate_sized_();
    init_SMB_inspectChildrenFrom_on_();
    init_SMB_alias_in_();
    
}