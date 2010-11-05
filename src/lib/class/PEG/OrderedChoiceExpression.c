#include <lib/class/PEG/OrderedChoiceExpression.h>


Optr layout_PEG_OrderedChoiceExpression_Class_class;
Optr slot_PEG_OrderedChoiceExpression_children;
Optr layout_PEG_OrderedChoiceExpression;


static void init_SMB_children() {
    Symbol SMB_children = new_Symbol(L"children");
    Array PThreadedCode19167 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_method_return);
    Method PMethod19166 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19167, 1, slot_PEG_OrderedChoiceExpression_children);
    
    MethodClosure MC_SMB_children = new_MethodClosure((Method)PMethod19166, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_children, MC_SMB_children);
}


static void init_SMB_asChildParser() {
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend19171 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_asArray, 0);
    Assign PAssign19170 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19171);
    Array PThreadedCode19169 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19170, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19171, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19168 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19169, 2, PAssign19170, self);
    
    MethodClosure MC_SMB_asChildParser = new_MethodClosure((Method)PMethod19168, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_asChildParser, MC_SMB_asChildParser);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19175 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign19174 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19175);
    Array PThreadedCode19173 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19174, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend19175, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19172 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19173, 2, PAssign19174, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod19172, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19177 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19180 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19182 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19184 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19186 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // parseOn:. 
    Send PSend19187 = new_Send((Optr)PSend19186, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19191 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19190 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19191, (Optr)&t_block_return);
    Block PBlock19189 = new_Block_with(empty_Array, empty_Array, PThreadedCode19190, 1, PSend19191);
    // ifTrue:. 
    Send PSend19188 = new_Send((Optr)PSend19187, SMB_ifTrue_, 1, (Optr)PBlock19189);
    Array PThreadedCode19185 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19186, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19187, (Optr)&t_send_ifTrue_, (Optr)PSend19188, (Optr)PBlock19189, (Optr)&t_method_return);
    Block PBlock19183 = new_Block_with(PArray19184, empty_Array, PThreadedCode19185, 1, PSend19188);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19192 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend19182, (Optr)PBlock19183);
    Array PThreadedCode19181 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19182, (Optr)&t_push_closure, (Optr)PBlock19183, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19192, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock19179 = new_Block_with(PArray19180, empty_Array, PThreadedCode19181, 2, PSend19192, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19193 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19179);
    Array PThreadedCode19178 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19179, (Optr)&t_send1, (Optr)PSend19193, (Optr)&t_method_return);
    Method PMethod19176 = new_Method_with(PArray19177, empty_Array, empty_Array, PThreadedCode19178, 1, PSend19193);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19176, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19195 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19198 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19200 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19202 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19204 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // omitMatch:. 
    Send PSend19205 = new_Send((Optr)PSend19204, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19209 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19208 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19209, (Optr)&t_block_return);
    Block PBlock19207 = new_Block_with(empty_Array, empty_Array, PThreadedCode19208, 1, PSend19209);
    // ifTrue:. 
    Send PSend19206 = new_Send((Optr)PSend19205, SMB_ifTrue_, 1, (Optr)PBlock19207);
    Array PThreadedCode19203 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19204, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19205, (Optr)&t_send_ifTrue_, (Optr)PSend19206, (Optr)PBlock19207, (Optr)&t_method_return);
    Block PBlock19201 = new_Block_with(PArray19202, empty_Array, PThreadedCode19203, 1, PSend19206);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19210 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend19200, (Optr)PBlock19201);
    Array PThreadedCode19199 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19200, (Optr)&t_push_closure, (Optr)PBlock19201, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19210, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock19197 = new_Block_with(PArray19198, empty_Array, PThreadedCode19199, 2, PSend19210, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19211 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19197);
    Array PThreadedCode19196 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19197, (Optr)&t_send1, (Optr)PSend19211, (Optr)&t_method_return);
    Method PMethod19194 = new_Method_with(PArray19195, empty_Array, empty_Array, PThreadedCode19196, 1, PSend19211);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19194, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_SMB__lt__equals_() {
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Variable VAR_child_0_0 = new_Variable_named(L"child", 0);
    Array PArray19213 = new_Array_with(1, (Optr)VAR_child_0_0);
    Variable VAR_new_0_1 = new_Variable_named(L"new", 0);
    Variable VAR_convert_0_2 = new_Variable_named(L"convert", 0);
    Array PArray19214 = new_Array_with(2, (Optr)VAR_new_0_1, (Optr)VAR_convert_0_2);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend19216 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_isKindOf_, 1, (Optr)Array_classReference);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_asOrderedCollection = new_Symbol(L"asOrderedCollection");
    // asOrderedCollection. 
    Send PSend19221 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_asOrderedCollection, 0);
    Assign PAssign19220 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19221);
    Assign PAssign19222 = new_Assign((Optr)VAR_convert_0_2, (Optr)true_Const);
    Array PThreadedCode19219 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign19220, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19221, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19222, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock19218 = new_Block_with(empty_Array, empty_Array, PThreadedCode19219, 2, PAssign19220, PAssign19222);
    // ifTrue:. 
    Send PSend19217 = new_Send((Optr)PSend19216, SMB_ifTrue_, 1, (Optr)PBlock19218);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend19224 = new_Send((Optr)VAR_child_0_0, SMB_asParser, 0);
    Assign PAssign19223 = new_Assign((Optr)VAR_new_0_1, (Optr)PSend19224);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend19225 = new_Send((Optr)VAR_new_0_1, SMB_class, 0);
    // class. 
    Send PSend19226 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19227 = new_Send((Optr)PSend19225, SMB__equals_, 1, (Optr)PSend19226);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_children = new_Symbol(L"children");
    // children. 
    Send PSend19231 = new_Send((Optr)VAR_new_0_1, SMB_children, 0);
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray19233 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    // asChildParser. 
    Send PSend19235 = new_Send((Optr)VAR_c_1_0, SMB_asChildParser, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend19236 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_add_, 1, (Optr)PSend19235);
    Array PThreadedCode19234 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_send0, (Optr)PSend19235, (Optr)&t_send1, (Optr)PSend19236, (Optr)&t_method_return);
    Block PBlock19232 = new_Block_with(PArray19233, empty_Array, PThreadedCode19234, 1, PSend19236);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend19237 = new_Send((Optr)PSend19231, SMB_do_, 1, (Optr)PBlock19232);
    Array PThreadedCode19230 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19231, (Optr)&t_push_closure, (Optr)PBlock19232, (Optr)&t_send1, (Optr)PSend19237, (Optr)&t_block_return);
    Block PBlock19229 = new_Block_with(empty_Array, empty_Array, PThreadedCode19230, 1, PSend19237);
    // asChildParser. 
    Send PSend19240 = new_Send((Optr)VAR_new_0_1, SMB_asChildParser, 0);
    // add:. 
    Send PSend19241 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_add_, 1, (Optr)PSend19240);
    Array PThreadedCode19239 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19240, (Optr)&t_send1, (Optr)PSend19241, (Optr)&t_block_return);
    Block PBlock19238 = new_Block_with(empty_Array, empty_Array, PThreadedCode19239, 1, PSend19241);
    // ifTrue:ifFalse:. 
    Send PSend19228 = new_Send((Optr)PSend19227, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock19229, (Optr)PBlock19238);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend19242 = new_Send((Optr)VAR_convert_0_2, SMB_isNil, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend19247 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_asArray, 0);
    Assign PAssign19246 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19247);
    Array PThreadedCode19245 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign19246, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19247, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock19244 = new_Block_with(empty_Array, empty_Array, PThreadedCode19245, 1, PAssign19246);
    // ifFalse:. 
    Send PSend19243 = new_Send((Optr)PSend19242, SMB_ifFalse_, 1, (Optr)PBlock19244);
    Array PThreadedCode19215 = instantiate_Array_with(ThreadedCode_Class, 0, 41, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send1, (Optr)PSend19216, (Optr)&t_send_ifTrue_, (Optr)PSend19217, (Optr)PBlock19218, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19223, (Optr)&t_push_variable, (Optr)VAR_child_0_0, (Optr)&t_send0, (Optr)PSend19224, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19225, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19226, (Optr)&t_send1, (Optr)PSend19227, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend19228, (Optr)PBlock19229, (Optr)PBlock19238, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_convert_0_2, (Optr)&t_send0, (Optr)PSend19242, (Optr)&t_send_ifFalse_, (Optr)PSend19243, (Optr)PBlock19244, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19212 = new_Method_with(PArray19213, PArray19214, empty_Array, PThreadedCode19215, 5, PSend19217, PAssign19223, PSend19228, PSend19243, self);
    
    MethodClosure MC_SMB__lt__equals_ = new_MethodClosure((Method)PMethod19212, PEG_OrderedChoiceExpression_Class);
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