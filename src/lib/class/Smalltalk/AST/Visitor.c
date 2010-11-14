#include <lib/class/Smalltalk/AST/Visitor.h>


Optr layout_Smalltalk_AST_Visitor_Class_class;


static void init_SMB_visit_() {
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    Variable VAR_anASTNode_0_0 = new_Variable_named(L"anASTNode", 0);
    Array PArray12700 = new_Array_with(1, (Optr)VAR_anASTNode_0_0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend12702 = new_Send((Optr)VAR_anASTNode_0_0, SMB_accept_, 1, (Optr)self);
    Array PThreadedCode12701 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_anASTNode_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12702, (Optr)&t_method_return);
    Method PMethod12699 = new_Method_with(PArray12700, empty_Array, empty_Array, PThreadedCode12701, 1, PSend12702);
    
    MethodClosure MC_SMB_visit_ = new_MethodClosure((Method)PMethod12699, Smalltalk_AST_Visitor_Class);
    store_method(Smalltalk_AST_Visitor_Class, SMB_visit_, MC_SMB_visit_);
}


static void init_SMB_acceptOnCollection_() {
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray12704 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12707 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend12709 = new_Send((Optr)VAR_aCollection_0_0, SMB_isNil, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // new:. 
    Send PSend12713 = new_Send((Optr)OrderedCollection_classReference, SMB_new_, 1, (Optr)int_1_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12714 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12713);
    Array PThreadedCode12712 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12713, (Optr)&t_send1, (Optr)PSend12714, (Optr)&t_block_return);
    Block PBlock12711 = new_Block_with(empty_Array, empty_Array, PThreadedCode12712, 1, PSend12714);
    // ifTrue:. 
    Send PSend12710 = new_Send((Optr)PSend12709, SMB_ifTrue_, 1, (Optr)PBlock12711);
    Variable VAR_each_2_0 = new_Variable_named(L"each", 2);
    Array PArray12716 = new_Array_with(1, (Optr)VAR_each_2_0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend12718 = new_Send((Optr)VAR_each_2_0, SMB_accept_, 1, (Optr)self);
    Array PThreadedCode12717 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_each_2_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12718, (Optr)&t_method_return);
    Block PBlock12715 = new_Block_with(PArray12716, empty_Array, PThreadedCode12717, 1, PSend12718);
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    // collect:. 
    Send PSend12719 = new_Send((Optr)VAR_aCollection_0_0, SMB_collect_, 1, (Optr)PBlock12715);
    Array PThreadedCode12708 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend12709, (Optr)&t_send_ifTrue_, (Optr)PSend12710, (Optr)PBlock12711, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock12715, (Optr)&t_send1, (Optr)PSend12719, (Optr)&t_method_return);
    Block PBlock12706 = new_Block_with(PArray12707, empty_Array, PThreadedCode12708, 2, PSend12710, PSend12719);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12720 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12706);
    Array PThreadedCode12705 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12706, (Optr)&t_send1, (Optr)PSend12720, (Optr)&t_method_return);
    Method PMethod12703 = new_Method_with(PArray12704, empty_Array, empty_Array, PThreadedCode12705, 1, PSend12720);
    
    MethodClosure MC_SMB_acceptOnCollection_ = new_MethodClosure((Method)PMethod12703, Smalltalk_AST_Visitor_Class);
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