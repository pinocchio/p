#include <lib/class/PEG/OrderedChoiceExpression.h>


Optr layout_PEG_OrderedChoiceExpression_Class_class;
Optr slot_PEG_OrderedChoiceExpression_children;
Optr layout_PEG_OrderedChoiceExpression;


static void init_SMB_children() {
    Symbol SMB_children = new_Symbol(L"children");
    Array PThreadedCode19137 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_method_return);
    Method PMethod19136 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19137, 1, slot_PEG_OrderedChoiceExpression_children);
    
    MethodClosure MC_SMB_children = new_MethodClosure((Method)PMethod19136, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_children, MC_SMB_children);
}


static void init_SMB_asChildParser() {
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend19141 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_asArray, 0);
    Assign PAssign19140 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19141);
    Array PThreadedCode19139 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19140, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19141, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19138 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19139, 2, PAssign19140, self);
    
    MethodClosure MC_SMB_asChildParser = new_MethodClosure((Method)PMethod19138, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_asChildParser, MC_SMB_asChildParser);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19145 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign19144 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19145);
    Array PThreadedCode19143 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19144, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend19145, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19142 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19143, 2, PAssign19144, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod19142, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19147 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19150 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19152 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19154 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19156 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // parseOn:. 
    Send PSend19157 = new_Send((Optr)PSend19156, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19161 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19160 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19161, (Optr)&t_block_return);
    Block PBlock19159 = new_Block_with(empty_Array, empty_Array, PThreadedCode19160, 1, PSend19161);
    // ifTrue:. 
    Send PSend19158 = new_Send((Optr)PSend19157, SMB_ifTrue_, 1, (Optr)PBlock19159);
    Array PThreadedCode19155 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19156, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19157, (Optr)&t_send_ifTrue_, (Optr)PSend19158, (Optr)PBlock19159, (Optr)&t_method_return);
    Block PBlock19153 = new_Block_with(PArray19154, empty_Array, PThreadedCode19155, 1, PSend19158);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19162 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend19152, (Optr)PBlock19153);
    Array PThreadedCode19151 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19152, (Optr)&t_push_closure, (Optr)PBlock19153, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19162, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock19149 = new_Block_with(PArray19150, empty_Array, PThreadedCode19151, 2, PSend19162, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19163 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19149);
    Array PThreadedCode19148 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19149, (Optr)&t_send1, (Optr)PSend19163, (Optr)&t_method_return);
    Method PMethod19146 = new_Method_with(PArray19147, empty_Array, empty_Array, PThreadedCode19148, 1, PSend19163);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19146, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19165 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19168 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19170 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19172 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19174 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // omitMatch:. 
    Send PSend19175 = new_Send((Optr)PSend19174, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19179 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19178 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19179, (Optr)&t_block_return);
    Block PBlock19177 = new_Block_with(empty_Array, empty_Array, PThreadedCode19178, 1, PSend19179);
    // ifTrue:. 
    Send PSend19176 = new_Send((Optr)PSend19175, SMB_ifTrue_, 1, (Optr)PBlock19177);
    Array PThreadedCode19173 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19174, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19175, (Optr)&t_send_ifTrue_, (Optr)PSend19176, (Optr)PBlock19177, (Optr)&t_method_return);
    Block PBlock19171 = new_Block_with(PArray19172, empty_Array, PThreadedCode19173, 1, PSend19176);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19180 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend19170, (Optr)PBlock19171);
    Array PThreadedCode19169 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19170, (Optr)&t_push_closure, (Optr)PBlock19171, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19180, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock19167 = new_Block_with(PArray19168, empty_Array, PThreadedCode19169, 2, PSend19180, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19181 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19167);
    Array PThreadedCode19166 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19167, (Optr)&t_send1, (Optr)PSend19181, (Optr)&t_method_return);
    Method PMethod19164 = new_Method_with(PArray19165, empty_Array, empty_Array, PThreadedCode19166, 1, PSend19181);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19164, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_SMB__lt__equals_() {
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Variable VAR_child_0_0 = new_Variable_named(L"child", 0);
    Array PArray19183 = new_Array_with(1, (Optr)VAR_child_0_0);
    Variable VAR_new_0_1 = new_Variable_named(L"new", 0);
    Variable VAR_convert_0_2 = new_Variable_named(L"convert", 0);
    Array PArray19184 = new_Array_with(2, (Optr)VAR_new_0_1, (Optr)VAR_convert_0_2);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend19186 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_isKindOf_, 1, (Optr)Array_classReference);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_asOrderedCollection = new_Symbol(L"asOrderedCollection");
    // asOrderedCollection. 
    Send PSend19191 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_asOrderedCollection, 0);
    Assign PAssign19190 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19191);
    Assign PAssign19192 = new_Assign((Optr)VAR_convert_0_2, (Optr)true_Const);
    Array PThreadedCode19189 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign19190, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19191, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19192, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock19188 = new_Block_with(empty_Array, empty_Array, PThreadedCode19189, 2, PAssign19190, PAssign19192);
    // ifTrue:. 
    Send PSend19187 = new_Send((Optr)PSend19186, SMB_ifTrue_, 1, (Optr)PBlock19188);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend19194 = new_Send((Optr)VAR_child_0_0, SMB_asParser, 0);
    Assign PAssign19193 = new_Assign((Optr)VAR_new_0_1, (Optr)PSend19194);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend19195 = new_Send((Optr)VAR_new_0_1, SMB_class, 0);
    // class. 
    Send PSend19196 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19197 = new_Send((Optr)PSend19195, SMB__equals_, 1, (Optr)PSend19196);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_children = new_Symbol(L"children");
    // children. 
    Send PSend19201 = new_Send((Optr)VAR_new_0_1, SMB_children, 0);
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray19203 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    // asChildParser. 
    Send PSend19205 = new_Send((Optr)VAR_c_1_0, SMB_asChildParser, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend19206 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_add_, 1, (Optr)PSend19205);
    Array PThreadedCode19204 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_send0, (Optr)PSend19205, (Optr)&t_send1, (Optr)PSend19206, (Optr)&t_method_return);
    Block PBlock19202 = new_Block_with(PArray19203, empty_Array, PThreadedCode19204, 1, PSend19206);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend19207 = new_Send((Optr)PSend19201, SMB_do_, 1, (Optr)PBlock19202);
    Array PThreadedCode19200 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19201, (Optr)&t_push_closure, (Optr)PBlock19202, (Optr)&t_send1, (Optr)PSend19207, (Optr)&t_block_return);
    Block PBlock19199 = new_Block_with(empty_Array, empty_Array, PThreadedCode19200, 1, PSend19207);
    // asChildParser. 
    Send PSend19210 = new_Send((Optr)VAR_new_0_1, SMB_asChildParser, 0);
    // add:. 
    Send PSend19211 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_add_, 1, (Optr)PSend19210);
    Array PThreadedCode19209 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19210, (Optr)&t_send1, (Optr)PSend19211, (Optr)&t_block_return);
    Block PBlock19208 = new_Block_with(empty_Array, empty_Array, PThreadedCode19209, 1, PSend19211);
    // ifTrue:ifFalse:. 
    Send PSend19198 = new_Send((Optr)PSend19197, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock19199, (Optr)PBlock19208);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend19212 = new_Send((Optr)VAR_convert_0_2, SMB_isNil, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend19217 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_asArray, 0);
    Assign PAssign19216 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19217);
    Array PThreadedCode19215 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign19216, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19217, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock19214 = new_Block_with(empty_Array, empty_Array, PThreadedCode19215, 1, PAssign19216);
    // ifFalse:. 
    Send PSend19213 = new_Send((Optr)PSend19212, SMB_ifFalse_, 1, (Optr)PBlock19214);
    Array PThreadedCode19185 = instantiate_Array_with(ThreadedCode_Class, 0, 41, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send1, (Optr)PSend19186, (Optr)&t_send_ifTrue_, (Optr)PSend19187, (Optr)PBlock19188, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19193, (Optr)&t_push_variable, (Optr)VAR_child_0_0, (Optr)&t_send0, (Optr)PSend19194, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19195, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19196, (Optr)&t_send1, (Optr)PSend19197, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend19198, (Optr)PBlock19199, (Optr)PBlock19208, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_convert_0_2, (Optr)&t_send0, (Optr)PSend19212, (Optr)&t_send_ifFalse_, (Optr)PSend19213, (Optr)PBlock19214, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19182 = new_Method_with(PArray19183, PArray19184, empty_Array, PThreadedCode19185, 5, PSend19187, PAssign19193, PSend19198, PSend19213, self);
    
    MethodClosure MC_SMB__lt__equals_ = new_MethodClosure((Method)PMethod19182, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB__lt__equals_, MC_SMB__lt__equals_);
}

void init_PEG_PEGOrderedChoiceExpression_layout() {
    layout_PEG_OrderedChoiceExpression_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_OrderedChoiceExpression_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_OrderedChoiceExpression_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_OrderedChoiceExpression_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_OrderedChoiceExpression_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_OrderedChoiceExpression_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_OrderedChoiceExpression = new_Symbol(L"OrderedChoiceExpression");
    slot_PEG_OrderedChoiceExpression_children = (Optr)new_Slot(0, L"children");
    layout_PEG_OrderedChoiceExpression = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PEG_OrderedChoiceExpression)->values[0] = slot_PEG_OrderedChoiceExpression_children; // children 
    PEG_OrderedChoiceExpression_Class = (Class)new_Class(PEG_Expression_Class, layout_PEG_OrderedChoiceExpression_Class_class);
    PEG_OrderedChoiceExpression_Class->layout = layout_PEG_OrderedChoiceExpression;
    PEG_OrderedChoiceExpression_Class->name = SMB_OrderedChoiceExpression;
    
}

void init_PEG_PEGOrderedChoiceExpression_methods() {
    init_SMB_children();
    init_SMB_asChildParser();
    init_SMB_initialize();
    init_SMB_parseOn_();
    init_SMB_omitMatch_();
    init_SMB__lt__equals_();
    
}