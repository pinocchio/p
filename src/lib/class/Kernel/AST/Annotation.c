#include <lib/class/Kernel/AST/Annotation.h>


Optr layout_Kernel_AST_Annotation_Class_class;
Optr slot_Kernel_AST_Annotation_selector;
Optr layout_Kernel_AST_Annotation;


static void init_SMB_selector() {
    Symbol SMB_selector = new_Symbol(L"selector");
    Array PThreadedCode4507 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Annotation_selector, (Optr)&t_method_return);
    Method PMethod4506 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4507, 1, slot_Kernel_AST_Annotation_selector);
    
    MethodClosure MC_SMB_selector = new_MethodClosure((Method)PMethod4506, Annotation_Class);
    store_method(Annotation_Class, SMB_selector, MC_SMB_selector);
}


static void init_SMB_selector_() {
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Variable VAR_aPinocchioSymbol_0_0 = new_Variable_named(L"aPinocchioSymbol", 0);
    Array PArray4509 = new_Array_with(1, (Optr)VAR_aPinocchioSymbol_0_0);
    Assign PAssign4511 = new_Assign((Optr)slot_Kernel_AST_Annotation_selector, (Optr)VAR_aPinocchioSymbol_0_0);
    Array PThreadedCode4510 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4511, (Optr)&t_push_variable, (Optr)VAR_aPinocchioSymbol_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4508 = new_Method_with(PArray4509, empty_Array, empty_Array, PThreadedCode4510, 2, PAssign4511, self);
    
    MethodClosure MC_SMB_selector_ = new_MethodClosure((Method)PMethod4508, Annotation_Class);
    store_method(Annotation_Class, SMB_selector_, MC_SMB_selector_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray4513 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4515 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray4517 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend4519 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend4520 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend4519);
    Array PThreadedCode4518 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend4519, (Optr)&t_send1, (Optr)PSend4520, (Optr)&t_method_return);
    Block PBlock4516 = new_Block_with(PArray4517, empty_Array, PThreadedCode4518, 1, PSend4520);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend4521 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend4515, (Optr)PBlock4516);
    Array PThreadedCode4514 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4515, (Optr)&t_push_closure, (Optr)PBlock4516, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend4521, (Optr)&t_method_return);
    Method PMethod4512 = new_Method_with(PArray4513, empty_Array, empty_Array, PThreadedCode4514, 1, PSend4521);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod4512, Annotation_Class);
    store_method(Annotation_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray4523 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitAnnotation_ = new_Symbol(L"visitAnnotation:");
    // visitAnnotation:. 
    Send PSend4525 = new_Send((Optr)VAR_visitor_0_0, SMB_visitAnnotation_, 1, (Optr)self);
    Array PThreadedCode4524 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend4525, (Optr)&t_method_return);
    Method PMethod4522 = new_Method_with(PArray4523, empty_Array, empty_Array, PThreadedCode4524, 1, PSend4525);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod4522, Annotation_Class);
    store_method(Annotation_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_inject_into_() {
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    Variable VAR_thisValue_0_0 = new_Variable_named(L"thisValue", 0);
    Variable VAR_binaryBlock_0_1 = new_Variable_named(L"binaryBlock", 0);
    Array PArray4527 = new_Array_with(2, (Optr)VAR_thisValue_0_0, (Optr)VAR_binaryBlock_0_1);
    Variable VAR_nextValue_0_2 = new_Variable_named(L"nextValue", 0);
    Array PArray4528 = new_Array_with(1, (Optr)VAR_nextValue_0_2);
    Assign PAssign4530 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)VAR_thisValue_0_0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray4532 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend4535 = new_Send((Optr)VAR_binaryBlock_0_1, SMB_value_value_, 2, (Optr)VAR_nextValue_0_2, (Optr)VAR_each_1_0);
    Assign PAssign4534 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)PSend4535);
    Array PThreadedCode4533 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign4534, (Optr)&t_push_variable, (Optr)VAR_binaryBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send2, (Optr)PSend4535, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock4531 = new_Block_with(PArray4532, empty_Array, PThreadedCode4533, 1, PAssign4534);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend4536 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock4531);
    Array PThreadedCode4529 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign4530, (Optr)&t_push_variable, (Optr)VAR_thisValue_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock4531, (Optr)&t_send1, (Optr)PSend4536, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_method_return);
    Method PMethod4526 = new_Method_with(PArray4527, PArray4528, empty_Array, PThreadedCode4529, 3, PAssign4530, PSend4536, VAR_nextValue_0_2);
    
    MethodClosure MC_SMB_inject_into_ = new_MethodClosure((Method)PMethod4526, Annotation_Class);
    store_method(Annotation_Class, SMB_inject_into_, MC_SMB_inject_into_);
}

void init_Kernel_AST_PAnnotation_layout() {
    layout_Kernel_AST_Annotation_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_AST_Annotation_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_AST_Annotation_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_AST_Annotation_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_AST_Annotation_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_AST_Annotation_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Annotation = new_Symbol(L"Annotation");
    slot_Kernel_AST_Annotation_selector = (Optr)new_Slot(0, L"selector");
    layout_Kernel_AST_Annotation = (Optr)create_layout_with_vars(ArrayLayout_Class, 1);
    ((Array)layout_Kernel_AST_Annotation)->values[0] = slot_Kernel_AST_Annotation_selector;
    Annotation_Class = (Class)new_Class(Object_Class, layout_Kernel_AST_Annotation_Class_class);
    Annotation_Class->layout = layout_Kernel_AST_Annotation;
    Annotation_Class->name = SMB_Annotation;
    
}

void init_Kernel_AST_PAnnotation_methods() {
    init_SMB_selector();
    init_SMB_selector_();
    init_SMB_do_();
    init_SMB_accept_();
    init_SMB_inject_into_();
    
}