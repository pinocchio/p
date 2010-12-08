#include <lib/class/Kernel/AST/Assign.h>


Optr layout_Kernel_AST_Assign_Class_class;
Optr slot_Kernel_AST_Assign_variable;
Optr slot_Kernel_AST_Assign_expression;
Optr layout_Kernel_AST_Assign;


static void init_SMB_variable_() {
    Symbol SMB_variable_ = new_Symbol(L"variable:");
    Variable VAR_aVariable_0_0 = new_Variable_named(L"aVariable", 0);
    Array PArray4472 = new_Array_with(1, (Optr)VAR_aVariable_0_0);
    Assign PAssign4474 = new_Assign((Optr)slot_Kernel_AST_Assign_variable, (Optr)VAR_aVariable_0_0);
    Array PThreadedCode4473 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4474, (Optr)&t_push_variable, (Optr)VAR_aVariable_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4471 = new_Method_with(PArray4472, empty_Array, empty_Array, PThreadedCode4473, 2, PAssign4474, self);
    
    MethodClosure MC_SMB_variable_ = new_MethodClosure((Method)PMethod4471, Assign_Class);
    store_method(Assign_Class, SMB_variable_, MC_SMB_variable_);
}


static void init_SMB_expression_() {
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    Variable VAR_anExpression_0_0 = new_Variable_named(L"anExpression", 0);
    Array PArray4476 = new_Array_with(1, (Optr)VAR_anExpression_0_0);
    Assign PAssign4478 = new_Assign((Optr)slot_Kernel_AST_Assign_expression, (Optr)VAR_anExpression_0_0);
    Array PThreadedCode4477 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4478, (Optr)&t_push_variable, (Optr)VAR_anExpression_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4475 = new_Method_with(PArray4476, empty_Array, empty_Array, PThreadedCode4477, 2, PAssign4478, self);
    
    MethodClosure MC_SMB_expression_ = new_MethodClosure((Method)PMethod4475, Assign_Class);
    store_method(Assign_Class, SMB_expression_, MC_SMB_expression_);
}


static void init_SMB_expression() {
    Symbol SMB_expression = new_Symbol(L"expression");
    Array PThreadedCode4480 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Assign_expression, (Optr)&t_method_return);
    Method PMethod4479 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4480, 1, slot_Kernel_AST_Assign_expression);
    
    MethodClosure MC_SMB_expression = new_MethodClosure((Method)PMethod4479, Assign_Class);
    store_method(Assign_Class, SMB_expression, MC_SMB_expression);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_anAssign_0_0 = new_Variable_named(L"anAssign", 0);
    Array PArray4482 = new_Array_with(1, (Optr)VAR_anAssign_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray4485 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend4487 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend4488 = new_Send((Optr)VAR_anAssign_0_0, SMB_species, 0);
    // =. 
    Send PSend4489 = new_Send((Optr)PSend4487, SMB__equals_, 1, (Optr)PSend4488);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend4493 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode4492 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend4493, (Optr)&t_block_return);
    Block PBlock4491 = new_Block_with(empty_Array, empty_Array, PThreadedCode4492, 1, PSend4493);
    // ifFalse:. 
    Send PSend4490 = new_Send((Optr)PSend4489, SMB_ifFalse_, 1, (Optr)PBlock4491);
    Symbol SMB_variable = new_Symbol(L"variable");
    // variable. 
    Send PSend4494 = new_Send((Optr)VAR_anAssign_0_0, SMB_variable, 0);
    // =. 
    Send PSend4495 = new_Send((Optr)slot_Kernel_AST_Assign_variable, SMB__equals_, 1, (Optr)PSend4494);
    // escape:. 
    Send PSend4499 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode4498 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend4499, (Optr)&t_block_return);
    Block PBlock4497 = new_Block_with(empty_Array, empty_Array, PThreadedCode4498, 1, PSend4499);
    // ifFalse:. 
    Send PSend4496 = new_Send((Optr)PSend4495, SMB_ifFalse_, 1, (Optr)PBlock4497);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend4500 = new_Send((Optr)VAR_anAssign_0_0, SMB_expression, 0);
    // =. 
    Send PSend4501 = new_Send((Optr)slot_Kernel_AST_Assign_expression, SMB__equals_, 1, (Optr)PSend4500);
    Array PThreadedCode4486 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4487, (Optr)&t_push_variable, (Optr)VAR_anAssign_0_0, (Optr)&t_send0, (Optr)PSend4488, (Optr)&t_send1, (Optr)PSend4489, (Optr)&t_send_ifFalse_, (Optr)PSend4490, (Optr)PBlock4491, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Assign_variable, (Optr)&t_push_variable, (Optr)VAR_anAssign_0_0, (Optr)&t_send0, (Optr)PSend4494, (Optr)&t_send1, (Optr)PSend4495, (Optr)&t_send_ifFalse_, (Optr)PSend4496, (Optr)PBlock4497, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Assign_expression, (Optr)&t_push_variable, (Optr)VAR_anAssign_0_0, (Optr)&t_send0, (Optr)PSend4500, (Optr)&t_send1, (Optr)PSend4501, (Optr)&t_method_return);
    Block PBlock4484 = new_Block_with(PArray4485, empty_Array, PThreadedCode4486, 3, PSend4490, PSend4496, PSend4501);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend4502 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock4484);
    Array PThreadedCode4483 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock4484, (Optr)&t_send1, (Optr)PSend4502, (Optr)&t_method_return);
    Method PMethod4481 = new_Method_with(PArray4482, empty_Array, empty_Array, PThreadedCode4483, 1, PSend4502);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod4481, Assign_Class);
    store_method(Assign_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_variable() {
    Symbol SMB_variable = new_Symbol(L"variable");
    Array PThreadedCode4504 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Assign_variable, (Optr)&t_method_return);
    Method PMethod4503 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4504, 1, slot_Kernel_AST_Assign_variable);
    
    MethodClosure MC_SMB_variable = new_MethodClosure((Method)PMethod4503, Assign_Class);
    store_method(Assign_Class, SMB_variable, MC_SMB_variable);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray4506 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitAssign_ = new_Symbol(L"visitAssign:");
    // visitAssign:. 
    Send PSend4508 = new_Send((Optr)VAR_visitor_0_0, SMB_visitAssign_, 1, (Optr)self);
    Array PThreadedCode4507 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend4508, (Optr)&t_method_return);
    Method PMethod4505 = new_Method_with(PArray4506, empty_Array, empty_Array, PThreadedCode4507, 1, PSend4508);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod4505, Assign_Class);
    store_method(Assign_Class, SMB_accept_, MC_SMB_accept_);
}

void init_Kernel_AST_PAssign_layout() {
    layout_Kernel_AST_Assign_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_AST_Assign_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_AST_Assign_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_AST_Assign_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_AST_Assign_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_AST_Assign_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Assign = new_Symbol(L"Assign");
    slot_Kernel_AST_Assign_variable = (Optr)new_Slot(0, L"variable");
    slot_Kernel_AST_Assign_expression = (Optr)new_Slot(1, L"expression");
    layout_Kernel_AST_Assign = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Kernel_AST_Assign)->values[0] = slot_Kernel_AST_Assign_variable; // variable 
    ((Array)layout_Kernel_AST_Assign)->values[1] = slot_Kernel_AST_Assign_expression; // expression 
    Assign_Class = (Class)new_Class(Kernel_AST_Node_Class, layout_Kernel_AST_Assign_Class_class);
    Assign_Class->layout = layout_Kernel_AST_Assign;
    Assign_Class->name = SMB_Assign;
    
}

void init_Kernel_AST_PAssign_methods() {
    init_SMB_variable_();
    init_SMB_expression_();
    init_SMB_expression();
    init_SMB__equals_();
    init_SMB_variable();
    init_SMB_accept_();
    
}