#include <lib/class/Smalltalk/AST/Visitor.h>


Optr layout_Smalltalk_AST_Visitor_Class_class;


static void init_SMB_visit_() {
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    Variable VAR_anASTNode_0_0 = new_Variable_named(L"anASTNode", 0);
    Array PArray12732 = new_Array_with(1, (Optr)VAR_anASTNode_0_0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend12734 = new_Send((Optr)VAR_anASTNode_0_0, SMB_accept_, 1, (Optr)self);
    Array PThreadedCode12733 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_anASTNode_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12734, (Optr)&t_method_return);
    Method PMethod12731 = new_Method_with(PArray12732, empty_Array, empty_Array, PThreadedCode12733, 1, PSend12734);
    
    MethodClosure MC_SMB_visit_ = new_MethodClosure((Method)PMethod12731, Smalltalk_AST_Visitor_Class);
    store_method(Smalltalk_AST_Visitor_Class, SMB_visit_, MC_SMB_visit_);
}


static void init_SMB_acceptOnCollection_() {
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray12736 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12739 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend12741 = new_Send((Optr)VAR_aCollection_0_0, SMB_isNil, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // new:. 
    Send PSend12745 = new_Send((Optr)OrderedCollection_classReference, SMB_new_, 1, (Optr)int_1_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12746 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12745);
    Array PThreadedCode12744 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12745, (Optr)&t_send1, (Optr)PSend12746, (Optr)&t_block_return);
    Block PBlock12743 = new_Block_with(empty_Array, empty_Array, PThreadedCode12744, 1, PSend12746);
    // ifTrue:. 
    Send PSend12742 = new_Send((Optr)PSend12741, SMB_ifTrue_, 1, (Optr)PBlock12743);
    Variable VAR_each_2_0 = new_Variable_named(L"each", 2);
    Array PArray12748 = new_Array_with(1, (Optr)VAR_each_2_0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend12750 = new_Send((Optr)VAR_each_2_0, SMB_accept_, 1, (Optr)self);
    Array PThreadedCode12749 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_each_2_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12750, (Optr)&t_method_return);
    Block PBlock12747 = new_Block_with(PArray12748, empty_Array, PThreadedCode12749, 1, PSend12750);
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    // collect:. 
    Send PSend12751 = new_Send((Optr)VAR_aCollection_0_0, SMB_collect_, 1, (Optr)PBlock12747);
    Array PThreadedCode12740 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend12741, (Optr)&t_send_ifTrue_, (Optr)PSend12742, (Optr)PBlock12743, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock12747, (Optr)&t_send1, (Optr)PSend12751, (Optr)&t_method_return);
    Block PBlock12738 = new_Block_with(PArray12739, empty_Array, PThreadedCode12740, 2, PSend12742, PSend12751);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12752 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12738);
    Array PThreadedCode12737 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12738, (Optr)&t_send1, (Optr)PSend12752, (Optr)&t_method_return);
    Method PMethod12735 = new_Method_with(PArray12736, empty_Array, empty_Array, PThreadedCode12737, 1, PSend12752);
    
    MethodClosure MC_SMB_acceptOnCollection_ = new_MethodClosure((Method)PMethod12735, Smalltalk_AST_Visitor_Class);
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