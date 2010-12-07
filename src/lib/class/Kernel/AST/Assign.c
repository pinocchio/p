#include <lib/class/Kernel/AST/Assign.h>


Optr layout_Kernel_AST_Assign_Class_class;
Optr slot_Kernel_AST_Assign_variable;
Optr slot_Kernel_AST_Assign_expression;
Optr layout_Kernel_AST_Assign;


static void init_SMB_variable_() {
    Symbol SMB_variable_ = new_Symbol(L"variable:");
    Variable VAR_aVariable_0_0 = new_Variable_named(L"aVariable", 0);
    Array PArray4470 = new_Array_with(1, (Optr)VAR_aVariable_0_0);
    Assign PAssign4472 = new_Assign((Optr)slot_Kernel_AST_Assign_variable, (Optr)VAR_aVariable_0_0);
    Array PThreadedCode4471 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4472, (Optr)&t_push_variable, (Optr)VAR_aVariable_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4469 = new_Method_with(PArray4470, empty_Array, empty_Array, PThreadedCode4471, 2, PAssign4472, self);
    
    MethodClosure MC_SMB_variable_ = new_MethodClosure((Method)PMethod4469, Assign_Class);
    store_method(Assign_Class, SMB_variable_, MC_SMB_variable_);
}


static void init_SMB_expression_() {
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    Variable VAR_anExpression_0_0 = new_Variable_named(L"anExpression", 0);
    Array PArray4474 = new_Array_with(1, (Optr)VAR_anExpression_0_0);
    Assign PAssign4476 = new_Assign((Optr)slot_Kernel_AST_Assign_expression, (Optr)VAR_anExpression_0_0);
    Array PThreadedCode4475 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4476, (Optr)&t_push_variable, (Optr)VAR_anExpression_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4473 = new_Method_with(PArray4474, empty_Array, empty_Array, PThreadedCode4475, 2, PAssign4476, self);
    
    MethodClosure MC_SMB_expression_ = new_MethodClosure((Method)PMethod4473, Assign_Class);
    store_method(Assign_Class, SMB_expression_, MC_SMB_expression_);
}


static void init_SMB_expression() {
    Symbol SMB_expression = new_Symbol(L"expression");
    Array PThreadedCode4478 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Assign_expression, (Optr)&t_method_return);
    Method PMethod4477 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4478, 1, slot_Kernel_AST_Assign_expression);
    
    MethodClosure MC_SMB_expression = new_MethodClosure((Method)PMethod4477, Assign_Class);
    store_method(Assign_Class, SMB_expression, MC_SMB_expression);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_anAssign_0_0 = new_Variable_named(L"anAssign", 0);
    Array PArray4480 = new_Array_with(1, (Optr)VAR_anAssign_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray4483 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend4485 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend4486 = new_Send((Optr)VAR_anAssign_0_0, SMB_species, 0);
    // =. 
    Send PSend4487 = new_Send((Optr)PSend4485, SMB__equals_, 1, (Optr)PSend4486);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend4491 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode4490 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend4491, (Optr)&t_block_return);
    Block PBlock4489 = new_Block_with(empty_Array, empty_Array, PThreadedCode4490, 1, PSend4491);
    // ifFalse:. 
    Send PSend4488 = new_Send((Optr)PSend4487, SMB_ifFalse_, 1, (Optr)PBlock4489);
    Symbol SMB_variable = new_Symbol(L"variable");
    // variable. 
    Send PSend4492 = new_Send((Optr)VAR_anAssign_0_0, SMB_variable, 0);
    // =. 
    Send PSend4493 = new_Send((Optr)slot_Kernel_AST_Assign_variable, SMB__equals_, 1, (Optr)PSend4492);
    // escape:. 
    Send PSend4497 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode4496 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend4497, (Optr)&t_block_return);
    Block PBlock4495 = new_Block_with(empty_Array, empty_Array, PThreadedCode4496, 1, PSend4497);
    // ifFalse:. 
    Send PSend4494 = new_Send((Optr)PSend4493, SMB_ifFalse_, 1, (Optr)PBlock4495);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend4498 = new_Send((Optr)VAR_anAssign_0_0, SMB_expression, 0);
    // =. 
    Send PSend4499 = new_Send((Optr)slot_Kernel_AST_Assign_expression, SMB__equals_, 1, (Optr)PSend4498);
    Array PThreadedCode4484 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4485, (Optr)&t_push_variable, (Optr)VAR_anAssign_0_0, (Optr)&t_send0, (Optr)PSend4486, (Optr)&t_send1, (Optr)PSend4487, (Optr)&t_send_ifFalse_, (Optr)PSend4488, (Optr)PBlock4489, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Assign_variable, (Optr)&t_push_variable, (Optr)VAR_anAssign_0_0, (Optr)&t_send0, (Optr)PSend4492, (Optr)&t_send1, (Optr)PSend4493, (Optr)&t_send_ifFalse_, (Optr)PSend4494, (Optr)PBlock4495, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Assign_expression, (Optr)&t_push_variable, (Optr)VAR_anAssign_0_0, (Optr)&t_send0, (Optr)PSend4498, (Optr)&t_send1, (Optr)PSend4499, (Optr)&t_method_return);
    Block PBlock4482 = new_Block_with(PArray4483, empty_Array, PThreadedCode4484, 3, PSend4488, PSend4494, PSend4499);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend4500 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock4482);
    Array PThreadedCode4481 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock4482, (Optr)&t_send1, (Optr)PSend4500, (Optr)&t_method_return);
    Method PMethod4479 = new_Method_with(PArray4480, empty_Array, empty_Array, PThreadedCode4481, 1, PSend4500);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod4479, Assign_Class);
    store_method(Assign_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_variable() {
    Symbol SMB_variable = new_Symbol(L"variable");
    Array PThreadedCode4502 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Assign_variable, (Optr)&t_method_return);
    Method PMethod4501 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4502, 1, slot_Kernel_AST_Assign_variable);
    
    MethodClosure MC_SMB_variable = new_MethodClosure((Method)PMethod4501, Assign_Class);
    store_method(Assign_Class, SMB_variable, MC_SMB_variable);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray4504 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitAssign_ = new_Symbol(L"visitAssign:");
    // visitAssign:. 
    Send PSend4506 = new_Send((Optr)VAR_visitor_0_0, SMB_visitAssign_, 1, (Optr)self);
    Array PThreadedCode4505 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend4506, (Optr)&t_method_return);
    Method PMethod4503 = new_Method_with(PArray4504, empty_Array, empty_Array, PThreadedCode4505, 1, PSend4506);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod4503, Assign_Class);
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