#include <lib/class/Smalltalk/AST/Visitor.h>


Optr layout_Smalltalk_AST_Visitor_Class_class;


static void init_SMB_visit_() {
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    Variable VAR_anASTNode_0_0 = new_Variable_named(L"anASTNode", 0);
    Array PArray12462 = new_Array_with(1, (Optr)VAR_anASTNode_0_0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend12464 = new_Send((Optr)VAR_anASTNode_0_0, SMB_accept_, 1, (Optr)self);
    Array PThreadedCode12463 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_anASTNode_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12464, (Optr)&t_method_return);
    Method PMethod12461 = new_Method_with(PArray12462, empty_Array, empty_Array, PThreadedCode12463, 1, PSend12464);
    
    MethodClosure MC_SMB_visit_ = new_MethodClosure((Method)PMethod12461, Smalltalk_AST_Visitor_Class);
    store_method(Smalltalk_AST_Visitor_Class, SMB_visit_, MC_SMB_visit_);
}


static void init_SMB_acceptOnCollection_() {
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray12466 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12469 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend12471 = new_Send((Optr)VAR_aCollection_0_0, SMB_isNil, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // new:. 
    Send PSend12475 = new_Send((Optr)OrderedCollection_classReference, SMB_new_, 1, (Optr)int_1_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12476 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12475);
    Array PThreadedCode12474 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12475, (Optr)&t_send1, (Optr)PSend12476, (Optr)&t_block_return);
    Block PBlock12473 = new_Block_with(empty_Array, empty_Array, PThreadedCode12474, 1, PSend12476);
    // ifTrue:. 
    Send PSend12472 = new_Send((Optr)PSend12471, SMB_ifTrue_, 1, (Optr)PBlock12473);
    Variable VAR_each_2_0 = new_Variable_named(L"each", 2);
    Array PArray12478 = new_Array_with(1, (Optr)VAR_each_2_0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend12480 = new_Send((Optr)VAR_each_2_0, SMB_accept_, 1, (Optr)self);
    Array PThreadedCode12479 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_each_2_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12480, (Optr)&t_method_return);
    Block PBlock12477 = new_Block_with(PArray12478, empty_Array, PThreadedCode12479, 1, PSend12480);
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    // collect:. 
    Send PSend12481 = new_Send((Optr)VAR_aCollection_0_0, SMB_collect_, 1, (Optr)PBlock12477);
    Array PThreadedCode12470 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend12471, (Optr)&t_send_ifTrue_, (Optr)PSend12472, (Optr)PBlock12473, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock12477, (Optr)&t_send1, (Optr)PSend12481, (Optr)&t_method_return);
    Block PBlock12468 = new_Block_with(PArray12469, empty_Array, PThreadedCode12470, 2, PSend12472, PSend12481);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12482 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12468);
    Array PThreadedCode12467 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12468, (Optr)&t_send1, (Optr)PSend12482, (Optr)&t_method_return);
    Method PMethod12465 = new_Method_with(PArray12466, empty_Array, empty_Array, PThreadedCode12467, 1, PSend12482);
    
    MethodClosure MC_SMB_acceptOnCollection_ = new_MethodClosure((Method)PMethod12465, Smalltalk_AST_Visitor_Class);
    store_method(Smalltalk_AST_Visitor_Class, SMB_acceptOnCollection_, MC_SMB_acceptOnCollection_);
}

void init_Smalltalk_AST_ASTVisitor_layout() {
    layout_Smalltalk_AST_Visitor_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_Visitor_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_Visitor_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_Visitor_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_Visitor_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_Visitor_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Visitor = new_Symbol(L"Visitor");
    Smalltalk_AST_Visitor_Class = (Class)new_Class(Object_Class, layout_Smalltalk_AST_Visitor_Class_class);
    Smalltalk_AST_Visitor_Class->layout = empty_object_layout;
    Smalltalk_AST_Visitor_Class->name = SMB_Visitor;
    
}

void init_Smalltalk_AST_ASTVisitor_methods() {
    init_SMB_visit_();
    init_SMB_acceptOnCollection_();
    
}