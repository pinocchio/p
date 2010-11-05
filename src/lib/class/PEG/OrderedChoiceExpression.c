#include <lib/class/PEG/OrderedChoiceExpression.h>


Optr layout_PEG_OrderedChoiceExpression_Class_class;
Optr slot_PEG_OrderedChoiceExpression_children;
Optr layout_PEG_OrderedChoiceExpression;


static void init_SMB_children() {
    Symbol SMB_children = new_Symbol(L"children");
    Array PThreadedCode19224 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_method_return);
    Method PMethod19223 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19224, 1, slot_PEG_OrderedChoiceExpression_children);
    
    MethodClosure MC_SMB_children = new_MethodClosure((Method)PMethod19223, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_children, MC_SMB_children);
}


static void init_SMB_asChildParser() {
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend19228 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_asArray, 0);
    Assign PAssign19227 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19228);
    Array PThreadedCode19226 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19227, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19228, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19225 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19226, 2, PAssign19227, self);
    
    MethodClosure MC_SMB_asChildParser = new_MethodClosure((Method)PMethod19225, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_asChildParser, MC_SMB_asChildParser);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19232 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign19231 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19232);
    Array PThreadedCode19230 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19231, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend19232, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19229 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19230, 2, PAssign19231, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod19229, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19234 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19237 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19239 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19241 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19243 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // parseOn:. 
    Send PSend19244 = new_Send((Optr)PSend19243, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19248 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19247 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19248, (Optr)&t_block_return);
    Block PBlock19246 = new_Block_with(empty_Array, empty_Array, PThreadedCode19247, 1, PSend19248);
    // ifTrue:. 
    Send PSend19245 = new_Send((Optr)PSend19244, SMB_ifTrue_, 1, (Optr)PBlock19246);
    Array PThreadedCode19242 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19243, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19244, (Optr)&t_send_ifTrue_, (Optr)PSend19245, (Optr)PBlock19246, (Optr)&t_method_return);
    Block PBlock19240 = new_Block_with(PArray19241, empty_Array, PThreadedCode19242, 1, PSend19245);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19249 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend19239, (Optr)PBlock19240);
    Array PThreadedCode19238 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19239, (Optr)&t_push_closure, (Optr)PBlock19240, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19249, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock19236 = new_Block_with(PArray19237, empty_Array, PThreadedCode19238, 2, PSend19249, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19250 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19236);
    Array PThreadedCode19235 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19236, (Optr)&t_send1, (Optr)PSend19250, (Optr)&t_method_return);
    Method PMethod19233 = new_Method_with(PArray19234, empty_Array, empty_Array, PThreadedCode19235, 1, PSend19250);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19233, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19252 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19255 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend19257 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray19259 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend19261 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_at_, 1, (Optr)VAR_index_2_0);
    // omitMatch:. 
    Send PSend19262 = new_Send((Optr)PSend19261, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19266 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19265 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19266, (Optr)&t_block_return);
    Block PBlock19264 = new_Block_with(empty_Array, empty_Array, PThreadedCode19265, 1, PSend19266);
    // ifTrue:. 
    Send PSend19263 = new_Send((Optr)PSend19262, SMB_ifTrue_, 1, (Optr)PBlock19264);
    Array PThreadedCode19260 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend19261, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19262, (Optr)&t_send_ifTrue_, (Optr)PSend19263, (Optr)PBlock19264, (Optr)&t_method_return);
    Block PBlock19258 = new_Block_with(PArray19259, empty_Array, PThreadedCode19260, 1, PSend19263);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend19267 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend19257, (Optr)PBlock19258);
    Array PThreadedCode19256 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19257, (Optr)&t_push_closure, (Optr)PBlock19258, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend19267, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock19254 = new_Block_with(PArray19255, empty_Array, PThreadedCode19256, 2, PSend19267, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19268 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19254);
    Array PThreadedCode19253 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19254, (Optr)&t_send1, (Optr)PSend19268, (Optr)&t_method_return);
    Method PMethod19251 = new_Method_with(PArray19252, empty_Array, empty_Array, PThreadedCode19253, 1, PSend19268);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19251, PEG_OrderedChoiceExpression_Class);
    store_method(PEG_OrderedChoiceExpression_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_SMB__lt__equals_() {
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Variable VAR_child_0_0 = new_Variable_named(L"child", 0);
    Array PArray19270 = new_Array_with(1, (Optr)VAR_child_0_0);
    Variable VAR_new_0_1 = new_Variable_named(L"new", 0);
    Variable VAR_convert_0_2 = new_Variable_named(L"convert", 0);
    Array PArray19271 = new_Array_with(2, (Optr)VAR_new_0_1, (Optr)VAR_convert_0_2);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend19273 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_isKindOf_, 1, (Optr)Array_classReference);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_asOrderedCollection = new_Symbol(L"asOrderedCollection");
    // asOrderedCollection. 
    Send PSend19278 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_asOrderedCollection, 0);
    Assign PAssign19277 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19278);
    Assign PAssign19279 = new_Assign((Optr)VAR_convert_0_2, (Optr)true_Const);
    Array PThreadedCode19276 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign19277, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19278, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19279, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock19275 = new_Block_with(empty_Array, empty_Array, PThreadedCode19276, 2, PAssign19277, PAssign19279);
    // ifTrue:. 
    Send PSend19274 = new_Send((Optr)PSend19273, SMB_ifTrue_, 1, (Optr)PBlock19275);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend19281 = new_Send((Optr)VAR_child_0_0, SMB_asParser, 0);
    Assign PAssign19280 = new_Assign((Optr)VAR_new_0_1, (Optr)PSend19281);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend19282 = new_Send((Optr)VAR_new_0_1, SMB_class, 0);
    // class. 
    Send PSend19283 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19284 = new_Send((Optr)PSend19282, SMB__equals_, 1, (Optr)PSend19283);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_children = new_Symbol(L"children");
    // children. 
    Send PSend19288 = new_Send((Optr)VAR_new_0_1, SMB_children, 0);
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray19290 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    // asChildParser. 
    Send PSend19292 = new_Send((Optr)VAR_c_1_0, SMB_asChildParser, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend19293 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_add_, 1, (Optr)PSend19292);
    Array PThreadedCode19291 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_send0, (Optr)PSend19292, (Optr)&t_send1, (Optr)PSend19293, (Optr)&t_method_return);
    Block PBlock19289 = new_Block_with(PArray19290, empty_Array, PThreadedCode19291, 1, PSend19293);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend19294 = new_Send((Optr)PSend19288, SMB_do_, 1, (Optr)PBlock19289);
    Array PThreadedCode19287 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19288, (Optr)&t_push_closure, (Optr)PBlock19289, (Optr)&t_send1, (Optr)PSend19294, (Optr)&t_block_return);
    Block PBlock19286 = new_Block_with(empty_Array, empty_Array, PThreadedCode19287, 1, PSend19294);
    // asChildParser. 
    Send PSend19297 = new_Send((Optr)VAR_new_0_1, SMB_asChildParser, 0);
    // add:. 
    Send PSend19298 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_add_, 1, (Optr)PSend19297);
    Array PThreadedCode19296 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19297, (Optr)&t_send1, (Optr)PSend19298, (Optr)&t_block_return);
    Block PBlock19295 = new_Block_with(empty_Array, empty_Array, PThreadedCode19296, 1, PSend19298);
    // ifTrue:ifFalse:. 
    Send PSend19285 = new_Send((Optr)PSend19284, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock19286, (Optr)PBlock19295);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend19299 = new_Send((Optr)VAR_convert_0_2, SMB_isNil, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend19304 = new_Send((Optr)slot_PEG_OrderedChoiceExpression_children, SMB_asArray, 0);
    Assign PAssign19303 = new_Assign((Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)PSend19304);
    Array PThreadedCode19302 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign19303, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_send0, (Optr)PSend19304, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock19301 = new_Block_with(empty_Array, empty_Array, PThreadedCode19302, 1, PAssign19303);
    // ifFalse:. 
    Send PSend19300 = new_Send((Optr)PSend19299, SMB_ifFalse_, 1, (Optr)PBlock19301);
    Array PThreadedCode19272 = instantiate_Array_with(ThreadedCode_Class, 0, 41, (Optr)&t_push_slot, (Optr)slot_PEG_OrderedChoiceExpression_children, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send1, (Optr)PSend19273, (Optr)&t_send_ifTrue_, (Optr)PSend19274, (Optr)PBlock19275, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19280, (Optr)&t_push_variable, (Optr)VAR_child_0_0, (Optr)&t_send0, (Optr)PSend19281, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send0, (Optr)PSend19282, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19283, (Optr)&t_send1, (Optr)PSend19284, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend19285, (Optr)PBlock19286, (Optr)PBlock19295, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_convert_0_2, (Optr)&t_send0, (Optr)PSend19299, (Optr)&t_send_ifFalse_, (Optr)PSend19300, (Optr)PBlock19301, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19269 = new_Method_with(PArray19270, PArray19271, empty_Array, PThreadedCode19272, 5, PSend19274, PAssign19280, PSend19285, PSend19300, self);
    
    MethodClosure MC_SMB__lt__equals_ = new_MethodClosure((Method)PMethod19269, PEG_OrderedChoiceExpression_Class);
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