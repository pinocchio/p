#include <lib/class/Kernel/AST/Annotation.h>


Optr layout_Kernel_AST_Annotation_Class_class;
Optr slot_Kernel_AST_Annotation_selector;
Optr layout_Kernel_AST_Annotation;


static void init_SMB_selector() {
    Symbol SMB_selector = new_Symbol(L"selector");
    Array PThreadedCode4510 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Annotation_selector, (Optr)&t_method_return);
    Method PMethod4509 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4510, 1, slot_Kernel_AST_Annotation_selector);
    
    MethodClosure MC_SMB_selector = new_MethodClosure((Method)PMethod4509, Annotation_Class);
    store_method(Annotation_Class, SMB_selector, MC_SMB_selector);
}


static void init_SMB_selector_() {
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Variable VAR_aPinocchioSymbol_0_0 = new_Variable_named(L"aPinocchioSymbol", 0);
    Array PArray4512 = new_Array_with(1, (Optr)VAR_aPinocchioSymbol_0_0);
    Assign PAssign4514 = new_Assign((Optr)slot_Kernel_AST_Annotation_selector, (Optr)VAR_aPinocchioSymbol_0_0);
    Array PThreadedCode4513 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4514, (Optr)&t_push_variable, (Optr)VAR_aPinocchioSymbol_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4511 = new_Method_with(PArray4512, empty_Array, empty_Array, PThreadedCode4513, 2, PAssign4514, self);
    
    MethodClosure MC_SMB_selector_ = new_MethodClosure((Method)PMethod4511, Annotation_Class);
    store_method(Annotation_Class, SMB_selector_, MC_SMB_selector_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray4516 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4518 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray4520 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend4522 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend4523 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend4522);
    Array PThreadedCode4521 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend4522, (Optr)&t_send1, (Optr)PSend4523, (Optr)&t_method_return);
    Block PBlock4519 = new_Block_with(PArray4520, empty_Array, PThreadedCode4521, 1, PSend4523);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend4524 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend4518, (Optr)PBlock4519);
    Array PThreadedCode4517 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4518, (Optr)&t_push_closure, (Optr)PBlock4519, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend4524, (Optr)&t_method_return);
    Method PMethod4515 = new_Method_with(PArray4516, empty_Array, empty_Array, PThreadedCode4517, 1, PSend4524);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod4515, Annotation_Class);
    store_method(Annotation_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray4526 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitAnnotation_ = new_Symbol(L"visitAnnotation:");
    // visitAnnotation:. 
    Send PSend4528 = new_Send((Optr)VAR_visitor_0_0, SMB_visitAnnotation_, 1, (Optr)self);
    Array PThreadedCode4527 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend4528, (Optr)&t_method_return);
    Method PMethod4525 = new_Method_with(PArray4526, empty_Array, empty_Array, PThreadedCode4527, 1, PSend4528);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod4525, Annotation_Class);
    store_method(Annotation_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_inject_into_() {
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    Variable VAR_thisValue_0_0 = new_Variable_named(L"thisValue", 0);
    Variable VAR_binaryBlock_0_1 = new_Variable_named(L"binaryBlock", 0);
    Array PArray4530 = new_Array_with(2, (Optr)VAR_thisValue_0_0, (Optr)VAR_binaryBlock_0_1);
    Variable VAR_nextValue_0_2 = new_Variable_named(L"nextValue", 0);
    Array PArray4531 = new_Array_with(1, (Optr)VAR_nextValue_0_2);
    Assign PAssign4533 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)VAR_thisValue_0_0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray4535 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend4538 = new_Send((Optr)VAR_binaryBlock_0_1, SMB_value_value_, 2, (Optr)VAR_nextValue_0_2, (Optr)VAR_each_1_0);
    Assign PAssign4537 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)PSend4538);
    Array PThreadedCode4536 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign4537, (Optr)&t_push_variable, (Optr)VAR_binaryBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send2, (Optr)PSend4538, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock4534 = new_Block_with(PArray4535, empty_Array, PThreadedCode4536, 1, PAssign4537);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend4539 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock4534);
    Array PThreadedCode4532 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign4533, (Optr)&t_push_variable, (Optr)VAR_thisValue_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock4534, (Optr)&t_send1, (Optr)PSend4539, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_method_return);
    Method PMethod4529 = new_Method_with(PArray4530, PArray4531, empty_Array, PThreadedCode4532, 3, PAssign4533, PSend4539, VAR_nextValue_0_2);
    
    MethodClosure MC_SMB_inject_into_ = new_MethodClosure((Method)PMethod4529, Annotation_Class);
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