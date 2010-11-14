#include <lib/class/Smalltalk/Compiler/Compiler.h>


Optr layout_Smalltalk_Compiler_Compiler_Class_class;
Optr slot_Smalltalk_Compiler_Compiler_scope;
Optr slot_Smalltalk_Compiler_Compiler_rootScope;
Optr slot_Smalltalk_Compiler_Compiler_world;
Optr slot_Smalltalk_Compiler_Compiler_pinocchioClass;
Optr slot_Smalltalk_Compiler_Compiler_currentMethod;
Optr slot_Smalltalk_Compiler_Compiler_currentBlock;
Optr slot_Smalltalk_Compiler_Compiler_currentCallecVariable;
Optr slot_Smalltalk_Compiler_Compiler_threadedCompiler;
Optr layout_Smalltalk_Compiler_Compiler;


static void init_SMB_visitBinaryExpression_() {
    Symbol SMB_visitBinaryExpression_ = new_Symbol(L"visitBinaryExpression:");
    Variable VAR_aBinaryExpression_0_0 = new_Variable_named(L"aBinaryExpression", 0);
    Array PArray12722 = new_Array_with(1, (Optr)VAR_aBinaryExpression_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12725 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12727 = new_Send((Optr)VAR_aBinaryExpression_0_0, SMB_selector, 0);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend12728 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)PSend12727);
    Symbol SMB_argument = new_Symbol(L"argument");
    // argument. 
    Send PSend12729 = new_Send((Optr)VAR_aBinaryExpression_0_0, SMB_argument, 0);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend12730 = new_Send((Optr)self, SMB_visit_, 1, (Optr)PSend12729);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend12731 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend12730);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend12732 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode12726 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aBinaryExpression_0_0, (Optr)&t_send0, (Optr)PSend12727, (Optr)&t_send1, (Optr)PSend12728, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBinaryExpression_0_0, (Optr)&t_send0, (Optr)PSend12729, (Optr)&t_send1, (Optr)PSend12730, (Optr)&t_send2, (Optr)PSend12731, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend12732, (Optr)&t_method_return);
    Block PBlock12724 = new_Block_with(PArray12725, empty_Array, PThreadedCode12726, 3, PSend12728, PSend12731, PSend12732);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend12733 = new_Send((Optr)VAR_aBinaryExpression_0_0, SMB_receiver, 0);
    Symbol SMB_createSendTo_sized_ = new_Symbol(L"createSendTo:sized:");
    // createSendTo:sized:. 
    Send PSend12734 = new_Send((Optr)self, SMB_createSendTo_sized_, 2, (Optr)PSend12733, (Optr)int_1_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12735 = new_Send((Optr)PBlock12724, SMB_value_, 1, (Optr)PSend12734);
    Array PThreadedCode12723 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_closure, (Optr)PBlock12724, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBinaryExpression_0_0, (Optr)&t_send0, (Optr)PSend12733, (Optr)&t_push_1, (Optr)&t_send2, (Optr)PSend12734, (Optr)&t_send1, (Optr)PSend12735, (Optr)&t_method_return);
    Method PMethod12721 = new_Method_with(PArray12722, empty_Array, empty_Array, PThreadedCode12723, 1, PSend12735);
    
    MethodClosure MC_SMB_visitBinaryExpression_ = new_MethodClosure((Method)PMethod12721, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitBinaryExpression_, MC_SMB_visitBinaryExpression_);
}


static void init_SMB_createBlock_() {
    Symbol SMB_createBlock_ = new_Symbol(L"createBlock:");
    Variable VAR_size_0_0 = new_Variable_named(L"size", 0);
    Array PArray12737 = new_Array_with(1, (Optr)VAR_size_0_0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Array PArray12738 = new_Array_with(1, (Optr)VAR_block_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12741 = new_Send((Optr)PBlock_classReference, SMB_new_, 1, (Optr)VAR_size_0_0);
    Assign PAssign12740 = new_Assign((Optr)VAR_block_0_1, (Optr)PSend12741);
    Array PThreadedCode12739 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign12740, (Optr)&t_push_class_reference, (Optr)PBlock_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend12741, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_method_return);
    Method PMethod12736 = new_Method_with(PArray12737, PArray12738, empty_Array, PThreadedCode12739, 2, PAssign12740, VAR_block_0_1);
    
    MethodClosure MC_SMB_createBlock_ = new_MethodClosure((Method)PMethod12736, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createBlock_, MC_SMB_createBlock_);
}


static void init_SMB_visitReturnExpression_() {
    Symbol SMB_visitReturnExpression_ = new_Symbol(L"visitReturnExpression:");
    Variable VAR_aReturnExpression_0_0 = new_Variable_named(L"aReturnExpression", 0);
    Array PArray12743 = new_Array_with(1, (Optr)VAR_aReturnExpression_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12746 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend12748 = new_Send((Optr)VAR_aReturnExpression_0_0, SMB_expression, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend12749 = new_Send((Optr)PSend12748, SMB_accept_, 1, (Optr)self);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend12750 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend12749);
    Symbol SMB_currentCallecVariable = new_Symbol(L"currentCallecVariable");
    // currentCallecVariable. 
    Send PSend12751 = new_Send((Optr)self, SMB_currentCallecVariable, 0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend12752 = new_Send((Optr)VAR__receiver__1_0, SMB_receiver_, 1, (Optr)PSend12751);
    Symbol  SMB_escape_ = new_Symbol(L"escape:");
    Symbol SMB_message_ = new_Symbol(L"message:");
    Constant SMB_escape__Const = new_Constant((Optr)SMB_escape_);
    // message:. 
    Send PSend12753 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)SMB_escape__Const);
    Array PThreadedCode12747 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_aReturnExpression_0_0, (Optr)&t_send0, (Optr)PSend12748, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12749, (Optr)&t_send2, (Optr)PSend12750, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12751, (Optr)&t_send1, (Optr)PSend12752, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_escape_, (Optr)&t_send1, (Optr)PSend12753, (Optr)&t_method_return);
    Block PBlock12745 = new_Block_with(PArray12746, empty_Array, PThreadedCode12747, 3, PSend12750, PSend12752, PSend12753);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12754 = new_Send((Optr)PSend_classReference, SMB_new_, 1, (Optr)int_1_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12755 = new_Send((Optr)PBlock12745, SMB_value_, 1, (Optr)PSend12754);
    Array PThreadedCode12744 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock12745, (Optr)&t_push_class_reference, (Optr)PSend_classReference, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12754, (Optr)&t_send1, (Optr)PSend12755, (Optr)&t_method_return);
    Method PMethod12742 = new_Method_with(PArray12743, empty_Array, empty_Array, PThreadedCode12744, 1, PSend12755);
    
    MethodClosure MC_SMB_visitReturnExpression_ = new_MethodClosure((Method)PMethod12742, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitReturnExpression_, MC_SMB_visitReturnExpression_);
}


static void init_SMB_visitArray_() {
    Symbol SMB_visitArray_ = new_Symbol(L"visitArray:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray12757 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    String string_12759 = new_String(L"Literal arrays are not yet supported by the compiler. Patches welcome!");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_12759_Const = new_Constant((Optr)string_12759);
    // error:. 
    Send PSend12760 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_12759_Const);
    Array PThreadedCode12758 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_12759, (Optr)&t_send1, (Optr)PSend12760, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12756 = new_Method_with(PArray12757, empty_Array, empty_Array, PThreadedCode12758, 2, PSend12760, self);
    
    MethodClosure MC_SMB_visitArray_ = new_MethodClosure((Method)PMethod12756, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitArray_, MC_SMB_visitArray_);
}


static void init_SMB_visitMessageExpression_() {
    Symbol SMB_visitMessageExpression_ = new_Symbol(L"visitMessageExpression:");
    Variable VAR_aMessageExpression_0_0 = new_Variable_named(L"aMessageExpression", 0);
    Array PArray12762 = new_Array_with(1, (Optr)VAR_aMessageExpression_0_0);
    Variable VAR_arguments_0_1 = new_Variable_named(L"arguments", 0);
    Array PArray12763 = new_Array_with(1, (Optr)VAR_arguments_0_1);
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    Symbol SMB_arguments = new_Symbol(L"arguments");
    // arguments. 
    Send PSend12767 = new_Send((Optr)VAR_aMessageExpression_0_0, SMB_arguments, 0);
    // acceptOnCollection:. 
    Send PSend12766 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend12767);
    Assign PAssign12765 = new_Assign((Optr)VAR_arguments_0_1, (Optr)PSend12766);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12769 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12771 = new_Send((Optr)VAR_aMessageExpression_0_0, SMB_selector, 0);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend12772 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)PSend12771);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend12773 = new_Send((Optr)VAR__receiver__1_0, SMB_arguments_, 1, (Optr)VAR_arguments_0_1);
    Array PThreadedCode12770 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aMessageExpression_0_0, (Optr)&t_send0, (Optr)PSend12771, (Optr)&t_send1, (Optr)PSend12772, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_arguments_0_1, (Optr)&t_send1, (Optr)PSend12773, (Optr)&t_method_return);
    Block PBlock12768 = new_Block_with(PArray12769, empty_Array, PThreadedCode12770, 2, PSend12772, PSend12773);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend12774 = new_Send((Optr)VAR_aMessageExpression_0_0, SMB_receiver, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12775 = new_Send((Optr)VAR_arguments_0_1, SMB_size, 0);
    Symbol SMB_createSendTo_sized_ = new_Symbol(L"createSendTo:sized:");
    // createSendTo:sized:. 
    Send PSend12776 = new_Send((Optr)self, SMB_createSendTo_sized_, 2, (Optr)PSend12774, (Optr)PSend12775);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12777 = new_Send((Optr)PBlock12768, SMB_value_, 1, (Optr)PSend12776);
    Array PThreadedCode12764 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign12765, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessageExpression_0_0, (Optr)&t_send0, (Optr)PSend12767, (Optr)&t_send1, (Optr)PSend12766, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock12768, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessageExpression_0_0, (Optr)&t_send0, (Optr)PSend12774, (Optr)&t_push_variable, (Optr)VAR_arguments_0_1, (Optr)&t_send0, (Optr)PSend12775, (Optr)&t_send2, (Optr)PSend12776, (Optr)&t_send1, (Optr)PSend12777, (Optr)&t_method_return);
    Method PMethod12761 = new_Method_with(PArray12762, PArray12763, empty_Array, PThreadedCode12764, 2, PAssign12765, PSend12777);
    
    MethodClosure MC_SMB_visitMessageExpression_ = new_MethodClosure((Method)PMethod12761, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitMessageExpression_, MC_SMB_visitMessageExpression_);
}


static void init_SMB_visitAssignmentExpression_() {
    Symbol SMB_visitAssignmentExpression_ = new_Symbol(L"visitAssignmentExpression:");
    Variable VAR_anAssignmentExpression_0_0 = new_Variable_named(L"anAssignmentExpression", 0);
    Array PArray12779 = new_Array_with(1, (Optr)VAR_anAssignmentExpression_0_0);
    Variable VAR_assign_0_1 = new_Variable_named(L"assign", 0);
    Array PArray12780 = new_Array_with(1, (Optr)VAR_assign_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12785 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_variable = new_Symbol(L"variable");
    // variable. 
    Send PSend12787 = new_Send((Optr)VAR_anAssignmentExpression_0_0, SMB_variable, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend12788 = new_Send((Optr)PSend12787, SMB_accept_, 1, (Optr)self);
    Symbol SMB_variable_ = new_Symbol(L"variable:");
    // variable:. 
    Send PSend12789 = new_Send((Optr)VAR__receiver__1_0, SMB_variable_, 1, (Optr)PSend12788);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend12790 = new_Send((Optr)VAR_anAssignmentExpression_0_0, SMB_expression, 0);
    // accept:. 
    Send PSend12791 = new_Send((Optr)PSend12790, SMB_accept_, 1, (Optr)self);
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    // expression:. 
    Send PSend12792 = new_Send((Optr)VAR__receiver__1_0, SMB_expression_, 1, (Optr)PSend12791);
    Array PThreadedCode12786 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anAssignmentExpression_0_0, (Optr)&t_send0, (Optr)PSend12787, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12788, (Optr)&t_send1, (Optr)PSend12789, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anAssignmentExpression_0_0, (Optr)&t_send0, (Optr)PSend12790, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12791, (Optr)&t_send1, (Optr)PSend12792, (Optr)&t_method_return);
    Block PBlock12784 = new_Block_with(PArray12785, empty_Array, PThreadedCode12786, 2, PSend12789, PSend12792);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12793 = new_Send((Optr)PAssign_classReference, SMB_new, 0);
    // value:. 
    Send PSend12783 = new_Send((Optr)PBlock12784, SMB_value_, 1, (Optr)PSend12793);
    Assign PAssign12782 = new_Assign((Optr)VAR_assign_0_1, (Optr)PSend12783);
    // variable. 
    Send PSend12794 = new_Send((Optr)VAR_assign_0_1, SMB_variable, 0);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend12795 = new_Send((Optr)PSend12794, SMB_should, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend12796 = new_Send((Optr)PSend12795, SMB_not, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend12797 = new_Send((Optr)PSend12796, SMB__equals_, 1, (Optr)nil_Const);
    // expression. 
    Send PSend12798 = new_Send((Optr)VAR_assign_0_1, SMB_expression, 0);
    // should. 
    Send PSend12799 = new_Send((Optr)PSend12798, SMB_should, 0);
    // not. 
    Send PSend12800 = new_Send((Optr)PSend12799, SMB_not, 0);
    // =. 
    Send PSend12801 = new_Send((Optr)PSend12800, SMB__equals_, 1, (Optr)nil_Const);
    Array PThreadedCode12781 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign12782, (Optr)&t_push_closure, (Optr)PBlock12784, (Optr)&t_push_class_reference, (Optr)PAssign_classReference, (Optr)&t_send0, (Optr)PSend12793, (Optr)&t_send1, (Optr)PSend12783, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_assign_0_1, (Optr)&t_send0, (Optr)PSend12794, (Optr)&t_send0, (Optr)PSend12795, (Optr)&t_send0, (Optr)PSend12796, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend12797, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_assign_0_1, (Optr)&t_send0, (Optr)PSend12798, (Optr)&t_send0, (Optr)PSend12799, (Optr)&t_send0, (Optr)PSend12800, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend12801, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_assign_0_1, (Optr)&t_method_return);
    Method PMethod12778 = new_Method_with(PArray12779, PArray12780, empty_Array, PThreadedCode12781, 4, PAssign12782, PSend12797, PSend12801, VAR_assign_0_1);
    
    MethodClosure MC_SMB_visitAssignmentExpression_ = new_MethodClosure((Method)PMethod12778, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitAssignmentExpression_, MC_SMB_visitAssignmentExpression_);
}


static void init_SMB_currentCallecVariable_() {
    Symbol SMB_currentCallecVariable_ = new_Symbol(L"currentCallecVariable:");
    Variable VAR_aPinocchioVariable_0_0 = new_Variable_named(L"aPinocchioVariable", 0);
    Array PArray12803 = new_Array_with(1, (Optr)VAR_aPinocchioVariable_0_0);
    Assign PAssign12805 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_currentCallecVariable, (Optr)VAR_aPinocchioVariable_0_0);
    Array PThreadedCode12804 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign12805, (Optr)&t_push_variable, (Optr)VAR_aPinocchioVariable_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12802 = new_Method_with(PArray12803, empty_Array, empty_Array, PThreadedCode12804, 2, PAssign12805, self);
    
    MethodClosure MC_SMB_currentCallecVariable_ = new_MethodClosure((Method)PMethod12802, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_currentCallecVariable_, MC_SMB_currentCallecVariable_);
}


static void init_SMB_visitUnaryAnnotation_() {
    Symbol SMB_visitUnaryAnnotation_ = new_Symbol(L"visitUnaryAnnotation:");
    Variable VAR_anASTUnaryAnnotation_0_0 = new_Variable_named(L"anASTUnaryAnnotation", 0);
    Array PArray12807 = new_Array_with(1, (Optr)VAR_anASTUnaryAnnotation_0_0);
    Variable VAR_annotation_0_1 = new_Variable_named(L"annotation", 0);
    Array PArray12808 = new_Array_with(1, (Optr)VAR_annotation_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // new:. 
    Send PSend12811 = new_Send((Optr)PAnnotation_classReference, SMB_new_, 1, (Optr)int_0_Const);
    Assign PAssign12810 = new_Assign((Optr)VAR_annotation_0_1, (Optr)PSend12811);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12812 = new_Send((Optr)VAR_anASTUnaryAnnotation_0_0, SMB_selector, 0);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend12813 = new_Send((Optr)self, SMB_visit_, 1, (Optr)PSend12812);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend12814 = new_Send((Optr)VAR_annotation_0_1, SMB_selector_, 1, (Optr)PSend12813);
    Array PThreadedCode12809 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign12810, (Optr)&t_push_class_reference, (Optr)PAnnotation_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12811, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_annotation_0_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anASTUnaryAnnotation_0_0, (Optr)&t_send0, (Optr)PSend12812, (Optr)&t_send1, (Optr)PSend12813, (Optr)&t_send1, (Optr)PSend12814, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_annotation_0_1, (Optr)&t_method_return);
    Method PMethod12806 = new_Method_with(PArray12807, PArray12808, empty_Array, PThreadedCode12809, 3, PAssign12810, PSend12814, VAR_annotation_0_1);
    
    MethodClosure MC_SMB_visitUnaryAnnotation_ = new_MethodClosure((Method)PMethod12806, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitUnaryAnnotation_, MC_SMB_visitUnaryAnnotation_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper12817 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12819 = new_Send((Optr)PRootScope_classReference, SMB_new, 0);
    Assign PAssign12818 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)PSend12819);
    Assign PAssign12820 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_rootScope, (Optr)slot_Smalltalk_Compiler_Compiler_scope);
    // new. 
    Send PSend12822 = new_Send((Optr)PThreadedCompiler_classReference, SMB_new, 0);
    Assign PAssign12821 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_threadedCompiler, (Optr)PSend12822);
    Array PThreadedCode12816 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper12817, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12818, (Optr)&t_push_class_reference, (Optr)PRootScope_classReference, (Optr)&t_send0, (Optr)PSend12819, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12820, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12821, (Optr)&t_push_class_reference, (Optr)PThreadedCompiler_classReference, (Optr)&t_send0, (Optr)PSend12822, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12815 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12816, 5, PSuper12817, PAssign12818, PAssign12820, PAssign12821, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod12815, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_visitUnarySelector_() {
    Symbol SMB_visitUnarySelector_ = new_Symbol(L"visitUnarySelector:");
    Variable VAR_aUnarySelector_0_0 = new_Variable_named(L"aUnarySelector", 0);
    Array PArray12824 = new_Array_with(1, (Optr)VAR_aUnarySelector_0_0);
    Symbol SMB_selectorSymbol = new_Symbol(L"selectorSymbol");
    // selectorSymbol. 
    Send PSend12826 = new_Send((Optr)VAR_aUnarySelector_0_0, SMB_selectorSymbol, 0);
    Array PThreadedCode12825 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aUnarySelector_0_0, (Optr)&t_send0, (Optr)PSend12826, (Optr)&t_method_return);
    Method PMethod12823 = new_Method_with(PArray12824, empty_Array, empty_Array, PThreadedCode12825, 1, PSend12826);
    
    MethodClosure MC_SMB_visitUnarySelector_ = new_MethodClosure((Method)PMethod12823, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitUnarySelector_, MC_SMB_visitUnarySelector_);
}


static void init_SMB_compile_() {
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray12828 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    // parse:. 
    Send PSend12830 = new_Send((Optr)self, SMB_parse_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_sourceObject_ = new_Symbol(L"sourceObject:");
    // sourceObject:. 
    Send PSend12831 = new_Send((Optr)PSend12830, SMB_sourceObject_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend12832 = new_Send((Optr)self, SMB_visit_, 1, (Optr)PSend12831);
    Array PThreadedCode12829 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend12830, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend12831, (Optr)&t_send1, (Optr)PSend12832, (Optr)&t_method_return);
    Method PMethod12827 = new_Method_with(PArray12828, empty_Array, empty_Array, PThreadedCode12829, 1, PSend12832);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod12827, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_compile_, MC_SMB_compile_);
}


static void init_SMB_compileThreadedMethod_() {
    Symbol SMB_compileThreadedMethod_ = new_Symbol(L"compileThreadedMethod:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Array PArray12834 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend12836 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_threadedCompiler, SMB_compile_, 1, (Optr)VAR_aMethod_0_0);
    Array PThreadedCode12835 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_threadedCompiler, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend12836, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12833 = new_Method_with(PArray12834, empty_Array, empty_Array, PThreadedCode12835, 2, PSend12836, self);
    
    MethodClosure MC_SMB_compileThreadedMethod_ = new_MethodClosure((Method)PMethod12833, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_compileThreadedMethod_, MC_SMB_compileThreadedMethod_);
}


static void init_SMB_pclass() {
    Symbol SMB_pclass = new_Symbol(L"pclass");
    Array PThreadedCode12838 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_method_return);
    Method PMethod12837 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12838, 1, slot_Smalltalk_Compiler_Compiler_pinocchioClass);
    
    MethodClosure MC_SMB_pclass = new_MethodClosure((Method)PMethod12837, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_pclass, MC_SMB_pclass);
}


static void init_SMB_rootScope() {
    Symbol SMB_rootScope = new_Symbol(L"rootScope");
    Array PThreadedCode12840 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_rootScope, (Optr)&t_method_return);
    Method PMethod12839 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12840, 1, slot_Smalltalk_Compiler_Compiler_rootScope);
    
    MethodClosure MC_SMB_rootScope = new_MethodClosure((Method)PMethod12839, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_rootScope, MC_SMB_rootScope);
}


static void init_SMB_visitFloat_() {
    Symbol SMB_visitFloat_ = new_Symbol(L"visitFloat:");
    Variable VAR_anASTFloat_0_0 = new_Variable_named(L"anASTFloat", 0);
    Array PArray12842 = new_Array_with(1, (Optr)VAR_anASTFloat_0_0);
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    // asNumber. 
    Send PSend12844 = new_Send((Optr)VAR_anASTFloat_0_0, SMB_asNumber, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12845 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)PSend12844);
    Array PThreadedCode12843 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTFloat_0_0, (Optr)&t_send0, (Optr)PSend12844, (Optr)&t_send1, (Optr)PSend12845, (Optr)&t_method_return);
    Method PMethod12841 = new_Method_with(PArray12842, empty_Array, empty_Array, PThreadedCode12843, 1, PSend12845);
    
    MethodClosure MC_SMB_visitFloat_ = new_MethodClosure((Method)PMethod12841, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitFloat_, MC_SMB_visitFloat_);
}


static void init_SMB_scope() {
    Symbol SMB_scope = new_Symbol(L"scope");
    Array PThreadedCode12847 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_method_return);
    Method PMethod12846 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12847, 1, slot_Smalltalk_Compiler_Compiler_scope);
    
    MethodClosure MC_SMB_scope = new_MethodClosure((Method)PMethod12846, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_scope, MC_SMB_scope);
}


static void init_SMB_visitSuper_() {
    Symbol SMB_visitSuper_ = new_Symbol(L"visitSuper:");
    Variable VAR_anASTSuper_0_0 = new_Variable_named(L"anASTSuper", 0);
    Array PArray12849 = new_Array_with(1, (Optr)VAR_anASTSuper_0_0);
    String string_12851 = new_String(L"Should not get an AST Super");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_12851_Const = new_Constant((Optr)string_12851);
    // error:. 
    Send PSend12852 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_12851_Const);
    Array PThreadedCode12850 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_12851, (Optr)&t_send1, (Optr)PSend12852, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12848 = new_Method_with(PArray12849, empty_Array, empty_Array, PThreadedCode12850, 2, PSend12852, self);
    
    MethodClosure MC_SMB_visitSuper_ = new_MethodClosure((Method)PMethod12848, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitSuper_, MC_SMB_visitSuper_);
}


static void init_SMB_visitNumber_() {
    Symbol SMB_visitNumber_ = new_Symbol(L"visitNumber:");
    Variable VAR_anASTNumber_0_0 = new_Variable_named(L"anASTNumber", 0);
    Array PArray12854 = new_Array_with(1, (Optr)VAR_anASTNumber_0_0);
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    // asNumber. 
    Send PSend12856 = new_Send((Optr)VAR_anASTNumber_0_0, SMB_asNumber, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12857 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)PSend12856);
    Array PThreadedCode12855 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTNumber_0_0, (Optr)&t_send0, (Optr)PSend12856, (Optr)&t_send1, (Optr)PSend12857, (Optr)&t_method_return);
    Method PMethod12853 = new_Method_with(PArray12854, empty_Array, empty_Array, PThreadedCode12855, 1, PSend12857);
    
    MethodClosure MC_SMB_visitNumber_ = new_MethodClosure((Method)PMethod12853, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitNumber_, MC_SMB_visitNumber_);
}


static void init_SMB_world() {
    Symbol SMB_world = new_Symbol(L"world");
    Symbol SMB_package = new_Symbol(L"package");
    // package. 
    Send PSend12860 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, SMB_package, 0);
    Array PThreadedCode12859 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send0, (Optr)PSend12860, (Optr)&t_method_return);
    Method PMethod12858 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12859, 1, PSend12860);
    
    MethodClosure MC_SMB_world = new_MethodClosure((Method)PMethod12858, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_world, MC_SMB_world);
}


static void init_SMB_pclass_() {
    Symbol SMB_pclass_ = new_Symbol(L"pclass:");
    Variable VAR_aPinocchioClass_0_0 = new_Variable_named(L"aPinocchioClass", 0);
    Array PArray12862 = new_Array_with(1, (Optr)VAR_aPinocchioClass_0_0);
    Symbol SMB_isRootScope = new_Symbol(L"isRootScope");
    // isRootScope. 
    Send PSend12864 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_isRootScope, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_12868 = new_String(L"Current scope is not RootScope but ");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend12869 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend12870 = new_Send((Optr)PSend12869, SMB_name, 0);
    Constant string_12868_Const = new_Constant((Optr)string_12868);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend12871 = new_Send((Optr)string_12868_Const, SMB__append_, 1, (Optr)PSend12870);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend12872 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend12871);
    Array PThreadedCode12867 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_12868, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send0, (Optr)PSend12869, (Optr)&t_send0, (Optr)PSend12870, (Optr)&t_send1, (Optr)PSend12871, (Optr)&t_send1, (Optr)PSend12872, (Optr)&t_block_return);
    Block PBlock12866 = new_Block_with(empty_Array, empty_Array, PThreadedCode12867, 1, PSend12872);
    // ifFalse:. 
    Send PSend12865 = new_Send((Optr)PSend12864, SMB_ifFalse_, 1, (Optr)PBlock12866);
    Assign PAssign12873 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)VAR_aPinocchioClass_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12877 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    // pclass:. 
    Send PSend12879 = new_Send((Optr)VAR__receiver__1_0, SMB_pclass_, 1, (Optr)VAR_aPinocchioClass_0_0);
    Symbol SMB_parentScope_ = new_Symbol(L"parentScope:");
    // parentScope:. 
    Send PSend12880 = new_Send((Optr)VAR__receiver__1_0, SMB_parentScope_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_scope);
    Array PThreadedCode12878 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_send1, (Optr)PSend12879, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send1, (Optr)PSend12880, (Optr)&t_method_return);
    Block PBlock12876 = new_Block_with(PArray12877, empty_Array, PThreadedCode12878, 2, PSend12879, PSend12880);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12881 = new_Send((Optr)PClassScope_classReference, SMB_new, 0);
    // value:. 
    Send PSend12875 = new_Send((Optr)PBlock12876, SMB_value_, 1, (Optr)PSend12881);
    Assign PAssign12874 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)PSend12875);
    Array PThreadedCode12863 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send0, (Optr)PSend12864, (Optr)&t_send_ifFalse_, (Optr)PSend12865, (Optr)PBlock12866, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12873, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12874, (Optr)&t_push_closure, (Optr)PBlock12876, (Optr)&t_push_class_reference, (Optr)PClassScope_classReference, (Optr)&t_send0, (Optr)PSend12881, (Optr)&t_send1, (Optr)PSend12875, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12861 = new_Method_with(PArray12862, empty_Array, empty_Array, PThreadedCode12863, 4, PSend12865, PAssign12873, PAssign12874, self);
    
    MethodClosure MC_SMB_pclass_ = new_MethodClosure((Method)PMethod12861, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_pclass_, MC_SMB_pclass_);
}


static void init_SMB_visitKeywordAnnotation_() {
    Symbol SMB_visitKeywordAnnotation_ = new_Symbol(L"visitKeywordAnnotation:");
    Variable VAR_anASTKeywordAnnotation_0_0 = new_Variable_named(L"anASTKeywordAnnotation", 0);
    Array PArray12883 = new_Array_with(1, (Optr)VAR_anASTKeywordAnnotation_0_0);
    Variable VAR_annotation_0_1 = new_Variable_named(L"annotation", 0);
    Variable VAR_arguments_0_2 = new_Variable_named(L"arguments", 0);
    Array PArray12884 = new_Array_with(2, (Optr)VAR_annotation_0_1, (Optr)VAR_arguments_0_2);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_arguments = new_Symbol(L"arguments");
    // arguments. 
    Send PSend12889 = new_Send((Optr)VAR_anASTKeywordAnnotation_0_0, SMB_arguments, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12888 = new_Send((Optr)PSend12889, SMB_size, 0);
    // new:. 
    Send PSend12887 = new_Send((Optr)PAnnotation_classReference, SMB_new_, 1, (Optr)PSend12888);
    Assign PAssign12886 = new_Assign((Optr)VAR_annotation_0_1, (Optr)PSend12887);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12890 = new_Send((Optr)VAR_anASTKeywordAnnotation_0_0, SMB_selector, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend12891 = new_Send((Optr)VAR_annotation_0_1, SMB_selector_, 1, (Optr)PSend12890);
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    // arguments. 
    Send PSend12894 = new_Send((Optr)VAR_anASTKeywordAnnotation_0_0, SMB_arguments, 0);
    // acceptOnCollection:. 
    Send PSend12893 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend12894);
    Assign PAssign12892 = new_Assign((Optr)VAR_arguments_0_2, (Optr)PSend12893);
    Variable VAR_object_1_0 = new_Variable_named(L"object", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray12896 = new_Array_with(2, (Optr)VAR_object_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_unwrapConstant_ = new_Symbol(L"unwrapConstant:");
    // unwrapConstant:. 
    Send PSend12898 = new_Send((Optr)self, SMB_unwrapConstant_, 1, (Optr)VAR_object_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12899 = new_Send((Optr)VAR_annotation_0_1, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)PSend12898);
    Array PThreadedCode12897 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_annotation_0_1, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_object_1_0, (Optr)&t_send1, (Optr)PSend12898, (Optr)&t_send2, (Optr)PSend12899, (Optr)&t_method_return);
    Block PBlock12895 = new_Block_with(PArray12896, empty_Array, PThreadedCode12897, 1, PSend12899);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend12900 = new_Send((Optr)VAR_arguments_0_2, SMB_withIndexDo_, 1, (Optr)PBlock12895);
    Array PThreadedCode12885 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push1, (Optr)PAssign12886, (Optr)&t_push_class_reference, (Optr)PAnnotation_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTKeywordAnnotation_0_0, (Optr)&t_send0, (Optr)PSend12889, (Optr)&t_send0, (Optr)PSend12888, (Optr)&t_send1, (Optr)PSend12887, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_annotation_0_1, (Optr)&t_push_variable, (Optr)VAR_anASTKeywordAnnotation_0_0, (Optr)&t_send0, (Optr)PSend12890, (Optr)&t_send1, (Optr)PSend12891, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12892, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anASTKeywordAnnotation_0_0, (Optr)&t_send0, (Optr)PSend12894, (Optr)&t_send1, (Optr)PSend12893, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_push_closure, (Optr)PBlock12895, (Optr)&t_send1, (Optr)PSend12900, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_annotation_0_1, (Optr)&t_method_return);
    Method PMethod12882 = new_Method_with(PArray12883, PArray12884, empty_Array, PThreadedCode12885, 5, PAssign12886, PSend12891, PAssign12892, PSend12900, VAR_annotation_0_1);
    
    MethodClosure MC_SMB_visitKeywordAnnotation_ = new_MethodClosure((Method)PMethod12882, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitKeywordAnnotation_, MC_SMB_visitKeywordAnnotation_);
}


static void init_SMB_visitString_() {
    Symbol SMB_visitString_ = new_Symbol(L"visitString:");
    Variable VAR_anASTString_0_0 = new_Variable_named(L"anASTString", 0);
    Array PArray12902 = new_Array_with(1, (Optr)VAR_anASTString_0_0);
    Symbol SMB_string = new_Symbol(L"string");
    // string. 
    Send PSend12904 = new_Send((Optr)VAR_anASTString_0_0, SMB_string, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12905 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)PSend12904);
    Array PThreadedCode12903 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTString_0_0, (Optr)&t_send0, (Optr)PSend12904, (Optr)&t_send1, (Optr)PSend12905, (Optr)&t_method_return);
    Method PMethod12901 = new_Method_with(PArray12902, empty_Array, empty_Array, PThreadedCode12903, 1, PSend12905);
    
    MethodClosure MC_SMB_visitString_ = new_MethodClosure((Method)PMethod12901, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitString_, MC_SMB_visitString_);
}


static void init_SMB_createReturningMethodBodyFor_() {
    Symbol SMB_createReturningMethodBodyFor_ = new_Symbol(L"createReturningMethodBodyFor:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Array PArray12907 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
    Variable VAR_callec_0_2 = new_Variable_named(L"callec", 0);
    Array PArray12908 = new_Array_with(2, (Optr)VAR_body_0_1, (Optr)VAR_callec_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12911 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend12914 = new_Send((Optr)VAR_aMethod_0_0, SMB_statements, 0);
    Assign PAssign12913 = new_Assign((Optr)VAR_body_0_1, (Optr)PSend12914);
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend12915 = new_Send((Optr)VAR_body_0_1, SMB_last, 0);
    Symbol SMB_isReturnExpression = new_Symbol(L"isReturnExpression");
    // isReturnExpression. 
    Send PSend12916 = new_Send((Optr)PSend12915, SMB_isReturnExpression, 0);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12920 = new_Send((Optr)ASTSelf_classReference, SMB_new, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend12921 = new_Send((Optr)VAR_body_0_1, SMB_add_, 1, (Optr)PSend12920);
    Array PThreadedCode12919 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_push_class_reference, (Optr)ASTSelf_classReference, (Optr)&t_send0, (Optr)PSend12920, (Optr)&t_send1, (Optr)PSend12921, (Optr)&t_block_return);
    Block PBlock12918 = new_Block_with(empty_Array, empty_Array, PThreadedCode12919, 1, PSend12921);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12924 = new_Send((Optr)VAR_body_0_1, SMB_size, 0);
    // last. 
    Send PSend12925 = new_Send((Optr)VAR_body_0_1, SMB_last, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend12926 = new_Send((Optr)PSend12925, SMB_expression, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12927 = new_Send((Optr)VAR_body_0_1, SMB_at_put_, 2, (Optr)PSend12924, (Optr)PSend12926);
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    // hasReturnExpression. 
    Send PSend12928 = new_Send((Optr)VAR_body_0_1, SMB_hasReturnExpression, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    // acceptOnCollection:. 
    Send PSend12932 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)VAR_body_0_1);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend12933 = new_Send((Optr)PSend12932, SMB_asArray, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12934 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12933);
    Array PThreadedCode12931 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send1, (Optr)PSend12932, (Optr)&t_send0, (Optr)PSend12933, (Optr)&t_send1, (Optr)PSend12934, (Optr)&t_block_return);
    Block PBlock12930 = new_Block_with(empty_Array, empty_Array, PThreadedCode12931, 1, PSend12934);
    // ifFalse:. 
    Send PSend12929 = new_Send((Optr)PSend12928, SMB_ifFalse_, 1, (Optr)PBlock12930);
    Array PThreadedCode12923 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send0, (Optr)PSend12924, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send0, (Optr)PSend12925, (Optr)&t_send0, (Optr)PSend12926, (Optr)&t_send2, (Optr)PSend12927, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send0, (Optr)PSend12928, (Optr)&t_send_ifFalse_, (Optr)PSend12929, (Optr)PBlock12930, (Optr)&t_block_return);
    Block PBlock12922 = new_Block_with(empty_Array, empty_Array, PThreadedCode12923, 2, PSend12927, PSend12929);
    // ifFalse:ifTrue:. 
    Send PSend12917 = new_Send((Optr)PSend12916, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock12918, (Optr)PBlock12922);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray12938 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_world = new_Symbol(L"world");
    // world. 
    Send PSend12940 = new_Send((Optr)self, SMB_world, 0);
    Symbol  SMB_Runtime = new_Symbol(L"Runtime");
    Symbol SMB_ensurePackageNamed_ = new_Symbol(L"ensurePackageNamed:");
    Constant SMB_Runtime_Const = new_Constant((Optr)SMB_Runtime);
    // ensurePackageNamed:. 
    Send PSend12941 = new_Send((Optr)PSend12940, SMB_ensurePackageNamed_, 1, (Optr)SMB_Runtime_Const);
    Symbol  SMB_Continue = new_Symbol(L"Continue");
    Symbol SMB_ensureClassReference_ = new_Symbol(L"ensureClassReference:");
    Constant SMB_Continue_Const = new_Constant((Optr)SMB_Continue);
    // ensureClassReference:. 
    Send PSend12942 = new_Send((Optr)PSend12941, SMB_ensureClassReference_, 1, (Optr)SMB_Continue_Const);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend12943 = new_Send((Optr)VAR__receiver__2_0, SMB_receiver_, 1, (Optr)PSend12942);
    Symbol  SMB_on_ = new_Symbol(L"on:");
    Symbol SMB_message_ = new_Symbol(L"message:");
    Constant SMB_on__Const = new_Constant((Optr)SMB_on_);
    // message:. 
    Send PSend12944 = new_Send((Optr)VAR__receiver__2_0, SMB_message_, 1, (Optr)SMB_on__Const);
    Symbol SMB_createCallecBodyFor_ = new_Symbol(L"createCallecBodyFor:");
    // createCallecBodyFor:. 
    Send PSend12945 = new_Send((Optr)self, SMB_createCallecBodyFor_, 1, (Optr)VAR_aMethod_0_0);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend12946 = new_Send((Optr)VAR__receiver__2_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend12945);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend12947 = new_Send((Optr)VAR__receiver__2_0, SMB_yourself, 0);
    Array PThreadedCode12939 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12940, (Optr)&t_push1, (Optr)SMB_Runtime, (Optr)&t_send1, (Optr)PSend12941, (Optr)&t_push1, (Optr)SMB_Continue, (Optr)&t_send1, (Optr)PSend12942, (Optr)&t_send1, (Optr)PSend12943, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)SMB_on_, (Optr)&t_send1, (Optr)PSend12944, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend12945, (Optr)&t_send2, (Optr)PSend12946, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend12947, (Optr)&t_method_return);
    Block PBlock12937 = new_Block_with(PArray12938, empty_Array, PThreadedCode12939, 4, PSend12943, PSend12944, PSend12946, PSend12947);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12948 = new_Send((Optr)PSend_classReference, SMB_new_, 1, (Optr)int_1_Const);
    // value:. 
    Send PSend12936 = new_Send((Optr)PBlock12937, SMB_value_, 1, (Optr)PSend12948);
    Assign PAssign12935 = new_Assign((Optr)VAR_callec_0_2, (Optr)PSend12936);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend12949 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_callec_0_2);
    Array PThreadedCode12912 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign12913, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend12914, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send0, (Optr)PSend12915, (Optr)&t_send0, (Optr)PSend12916, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend12917, (Optr)PBlock12918, (Optr)PBlock12922, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12935, (Optr)&t_push_closure, (Optr)PBlock12937, (Optr)&t_push_class_reference, (Optr)PSend_classReference, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12948, (Optr)&t_send1, (Optr)PSend12936, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_callec_0_2, (Optr)&t_send1, (Optr)PSend12949, (Optr)&t_method_return);
    Block PBlock12910 = new_Block_with(PArray12911, empty_Array, PThreadedCode12912, 4, PAssign12913, PSend12917, PAssign12935, PSend12949);
    // on:. 
    Send PSend12950 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12910);
    Array PThreadedCode12909 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12910, (Optr)&t_send1, (Optr)PSend12950, (Optr)&t_method_return);
    Method PMethod12906 = new_Method_with(PArray12907, PArray12908, empty_Array, PThreadedCode12909, 1, PSend12950);
    
    MethodClosure MC_SMB_createReturningMethodBodyFor_ = new_MethodClosure((Method)PMethod12906, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createReturningMethodBodyFor_, MC_SMB_createReturningMethodBodyFor_);
}


static void init_SMB_parse_() {
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray12952 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_parser = new_Symbol(L"parser");
    // parser. 
    Send PSend12954 = new_Send((Optr)self, SMB_parser, 0);
    Symbol SMB_parseMethod_ = new_Symbol(L"parseMethod:");
    // parseMethod:. 
    Send PSend12955 = new_Send((Optr)PSend12954, SMB_parseMethod_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode12953 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12954, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend12955, (Optr)&t_method_return);
    Method PMethod12951 = new_Method_with(PArray12952, empty_Array, empty_Array, PThreadedCode12953, 1, PSend12955);
    
    MethodClosure MC_SMB_parse_ = new_MethodClosure((Method)PMethod12951, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_parse_, MC_SMB_parse_);
}


static void init_SMB_popScope() {
    Symbol SMB_popScope = new_Symbol(L"popScope");
    Symbol SMB_parentScope = new_Symbol(L"parentScope");
    // parentScope. 
    Send PSend12959 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_parentScope, 0);
    Assign PAssign12958 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)PSend12959);
    Array PThreadedCode12957 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign12958, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send0, (Optr)PSend12959, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12956 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12957, 2, PAssign12958, self);
    
    MethodClosure MC_SMB_popScope = new_MethodClosure((Method)PMethod12956, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_popScope, MC_SMB_popScope);
}


static void init_SMB_selectorFor_() {
    Symbol SMB_selectorFor_ = new_Symbol(L"selectorFor:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Array PArray12961 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend12963 = new_Send((Optr)VAR_aMethod_0_0, SMB_message, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12964 = new_Send((Optr)PSend12963, SMB_selector, 0);
    Array PThreadedCode12962 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend12963, (Optr)&t_send0, (Optr)PSend12964, (Optr)&t_method_return);
    Method PMethod12960 = new_Method_with(PArray12961, empty_Array, empty_Array, PThreadedCode12962, 1, PSend12964);
    
    MethodClosure MC_SMB_selectorFor_ = new_MethodClosure((Method)PMethod12960, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_selectorFor_, MC_SMB_selectorFor_);
}


static void init_SMB_currentCallecVariable() {
    Symbol SMB_currentCallecVariable = new_Symbol(L"currentCallecVariable");
    Array PThreadedCode12966 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_currentCallecVariable, (Optr)&t_method_return);
    Method PMethod12965 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12966, 1, slot_Smalltalk_Compiler_Compiler_currentCallecVariable);
    
    MethodClosure MC_SMB_currentCallecVariable = new_MethodClosure((Method)PMethod12965, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_currentCallecVariable, MC_SMB_currentCallecVariable);
}


static void init_SMB_createMethod_with_() {
    Symbol SMB_createMethod_with_ = new_Symbol(L"createMethod:with:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
    Array PArray12968 = new_Array_with(2, (Optr)VAR_aMethod_0_0, (Optr)VAR_body_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12971 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol  SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_annotatedWith_ = new_Symbol(L"annotatedWith:");
    Constant SMB_pPrimitive_plugin__Const = new_Constant((Optr)SMB_pPrimitive_plugin_);
    // annotatedWith:. 
    Send PSend12973 = new_Send((Optr)VAR_aMethod_0_0, SMB_annotatedWith_, 1, (Optr)SMB_pPrimitive_plugin__Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_withAll_ = new_Symbol(L"withAll:");
    // withAll:. 
    Send PSend12977 = new_Send((Optr)PNativeMethod_classReference, SMB_withAll_, 1, (Optr)VAR_body_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12978 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12977);
    Array PThreadedCode12976 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PNativeMethod_classReference, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send1, (Optr)PSend12977, (Optr)&t_send1, (Optr)PSend12978, (Optr)&t_block_return);
    Block PBlock12975 = new_Block_with(empty_Array, empty_Array, PThreadedCode12976, 1, PSend12978);
    // ifTrue:. 
    Send PSend12974 = new_Send((Optr)PSend12973, SMB_ifTrue_, 1, (Optr)PBlock12975);
    Symbol  SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Constant SMB_pPrimitive_plugin_code__Const = new_Constant((Optr)SMB_pPrimitive_plugin_code_);
    // annotatedWith:. 
    Send PSend12979 = new_Send((Optr)VAR_aMethod_0_0, SMB_annotatedWith_, 1, (Optr)SMB_pPrimitive_plugin_code__Const);
    // withAll:. 
    Send PSend12983 = new_Send((Optr)PNativeMethod_classReference, SMB_withAll_, 1, (Optr)VAR_body_0_1);
    // escape:. 
    Send PSend12984 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12983);
    Array PThreadedCode12982 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PNativeMethod_classReference, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send1, (Optr)PSend12983, (Optr)&t_send1, (Optr)PSend12984, (Optr)&t_block_return);
    Block PBlock12981 = new_Block_with(empty_Array, empty_Array, PThreadedCode12982, 1, PSend12984);
    // ifTrue:. 
    Send PSend12980 = new_Send((Optr)PSend12979, SMB_ifTrue_, 1, (Optr)PBlock12981);
    Symbol  SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Constant SMB_pinocchioReflective__Const = new_Constant((Optr)SMB_pinocchioReflective_);
    // annotatedWith:. 
    Send PSend12985 = new_Send((Optr)VAR_aMethod_0_0, SMB_annotatedWith_, 1, (Optr)SMB_pinocchioReflective__Const);
    // withAll:. 
    Send PSend12989 = new_Send((Optr)PReflectionMethod_classReference, SMB_withAll_, 1, (Optr)VAR_body_0_1);
    // escape:. 
    Send PSend12990 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12989);
    Array PThreadedCode12988 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PReflectionMethod_classReference, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send1, (Optr)PSend12989, (Optr)&t_send1, (Optr)PSend12990, (Optr)&t_block_return);
    Block PBlock12987 = new_Block_with(empty_Array, empty_Array, PThreadedCode12988, 1, PSend12990);
    // ifTrue:. 
    Send PSend12986 = new_Send((Optr)PSend12985, SMB_ifTrue_, 1, (Optr)PBlock12987);
    // withAll:. 
    Send PSend12991 = new_Send((Optr)PMethod_classReference, SMB_withAll_, 1, (Optr)VAR_body_0_1);
    Array PThreadedCode12972 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_push1, (Optr)SMB_pPrimitive_plugin_, (Optr)&t_send1, (Optr)PSend12973, (Optr)&t_send_ifTrue_, (Optr)PSend12974, (Optr)PBlock12975, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_push1, (Optr)SMB_pPrimitive_plugin_code_, (Optr)&t_send1, (Optr)PSend12979, (Optr)&t_send_ifTrue_, (Optr)PSend12980, (Optr)PBlock12981, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_push1, (Optr)SMB_pinocchioReflective_, (Optr)&t_send1, (Optr)PSend12985, (Optr)&t_send_ifTrue_, (Optr)PSend12986, (Optr)PBlock12987, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PMethod_classReference, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send1, (Optr)PSend12991, (Optr)&t_method_return);
    Block PBlock12970 = new_Block_with(PArray12971, empty_Array, PThreadedCode12972, 4, PSend12974, PSend12980, PSend12986, PSend12991);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12992 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12970);
    Array PThreadedCode12969 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12970, (Optr)&t_send1, (Optr)PSend12992, (Optr)&t_method_return);
    Method PMethod12967 = new_Method_with(PArray12968, empty_Array, empty_Array, PThreadedCode12969, 1, PSend12992);
    
    MethodClosure MC_SMB_createMethod_with_ = new_MethodClosure((Method)PMethod12967, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createMethod_with_, MC_SMB_createMethod_with_);
}


static void init_SMB_visitMethod_() {
    Symbol SMB_visitMethod_ = new_Symbol(L"visitMethod:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Array PArray12994 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
    Variable VAR_method_0_2 = new_Variable_named(L"method", 0);
    Variable VAR_selector_0_3 = new_Variable_named(L"selector", 0);
    Variable VAR_methodClosure_0_4 = new_Variable_named(L"methodClosure", 0);
    Array PArray12995 = new_Array_with(4, (Optr)VAR_body_0_1, (Optr)VAR_method_0_2, (Optr)VAR_selector_0_3, (Optr)VAR_methodClosure_0_4);
    Assign PAssign12997 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_currentMethod, (Optr)VAR_aMethod_0_0);
    Symbol SMB_pushScope = new_Symbol(L"pushScope");
    // pushScope. 
    Send PSend12998 = new_Send((Optr)self, SMB_pushScope, 0);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend12999 = new_Send((Optr)VAR_aMethod_0_0, SMB_message, 0);
    Symbol SMB_parameters = new_Symbol(L"parameters");
    // parameters. 
    Send PSend13000 = new_Send((Optr)PSend12999, SMB_parameters, 0);
    Symbol SMB_declareAll_ = new_Symbol(L"declareAll:");
    // declareAll:. 
    Send PSend13001 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_declareAll_, 1, (Optr)PSend13000);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend13002 = new_Send((Optr)VAR_aMethod_0_0, SMB_temporaries, 0);
    // declareAll:. 
    Send PSend13003 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_declareAll_, 1, (Optr)PSend13002);
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    // hasReturnExpression. 
    Send PSend13004 = new_Send((Optr)VAR_aMethod_0_0, SMB_hasReturnExpression, 0);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    Symbol SMB_createNonReturningMethodBodyFor_ = new_Symbol(L"createNonReturningMethodBodyFor:");
    // createNonReturningMethodBodyFor:. 
    Send PSend13009 = new_Send((Optr)self, SMB_createNonReturningMethodBodyFor_, 1, (Optr)VAR_aMethod_0_0);
    Assign PAssign13008 = new_Assign((Optr)VAR_body_0_1, (Optr)PSend13009);
    Array PThreadedCode13007 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign13008, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend13009, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock13006 = new_Block_with(empty_Array, empty_Array, PThreadedCode13007, 1, PAssign13008);
    Symbol SMB_createReturningMethodBodyFor_ = new_Symbol(L"createReturningMethodBodyFor:");
    // createReturningMethodBodyFor:. 
    Send PSend13013 = new_Send((Optr)self, SMB_createReturningMethodBodyFor_, 1, (Optr)VAR_aMethod_0_0);
    Assign PAssign13012 = new_Assign((Optr)VAR_body_0_1, (Optr)PSend13013);
    Array PThreadedCode13011 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign13012, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend13013, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock13010 = new_Block_with(empty_Array, empty_Array, PThreadedCode13011, 1, PAssign13012);
    // ifFalse:ifTrue:. 
    Send PSend13005 = new_Send((Optr)PSend13004, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock13006, (Optr)PBlock13010);
    Symbol SMB_selectorFor_ = new_Symbol(L"selectorFor:");
    // selectorFor:. 
    Send PSend13015 = new_Send((Optr)self, SMB_selectorFor_, 1, (Optr)VAR_aMethod_0_0);
    Assign PAssign13014 = new_Assign((Optr)VAR_selector_0_3, (Optr)PSend13015);
    Symbol SMB_createMethod_with_ = new_Symbol(L"createMethod:with:");
    // createMethod:with:. 
    Send PSend13017 = new_Send((Optr)self, SMB_createMethod_with_, 2, (Optr)VAR_aMethod_0_0, (Optr)VAR_body_0_1);
    Assign PAssign13016 = new_Assign((Optr)VAR_method_0_2, (Optr)PSend13017);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray13019 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    // message. 
    Send PSend13021 = new_Send((Optr)VAR_aMethod_0_0, SMB_message, 0);
    // parameters. 
    Send PSend13022 = new_Send((Optr)PSend13021, SMB_parameters, 0);
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    // acceptOnCollection:. 
    Send PSend13023 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend13022);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend13024 = new_Send((Optr)PSend13023, SMB_asArray, 0);
    // temporaries. 
    Send PSend13025 = new_Send((Optr)VAR_aMethod_0_0, SMB_temporaries, 0);
    // acceptOnCollection:. 
    Send PSend13026 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend13025);
    // asArray. 
    Send PSend13027 = new_Send((Optr)PSend13026, SMB_asArray, 0);
    Symbol SMB_params_locals_ = new_Symbol(L"params:locals:");
    // params:locals:. 
    Send PSend13028 = new_Send((Optr)VAR__receiver__1_0, SMB_params_locals_, 2, (Optr)PSend13024, (Optr)PSend13027);
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend13029 = new_Send((Optr)VAR_aMethod_0_0, SMB_annotations, 0);
    // acceptOnCollection:. 
    Send PSend13030 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend13029);
    // asArray. 
    Send PSend13031 = new_Send((Optr)PSend13030, SMB_asArray, 0);
    Symbol SMB_annotations_ = new_Symbol(L"annotations:");
    // annotations:. 
    Send PSend13032 = new_Send((Optr)VAR__receiver__1_0, SMB_annotations_, 1, (Optr)PSend13031);
    Symbol SMB_createPInfo = new_Symbol(L"createPInfo");
    // createPInfo. 
    Send PSend13033 = new_Send((Optr)self, SMB_createPInfo, 0);
    Symbol SMB_info_ = new_Symbol(L"info:");
    // info:. 
    Send PSend13034 = new_Send((Optr)VAR__receiver__1_0, SMB_info_, 1, (Optr)PSend13033);
    Array PThreadedCode13020 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend13021, (Optr)&t_send0, (Optr)PSend13022, (Optr)&t_send1, (Optr)PSend13023, (Optr)&t_send0, (Optr)PSend13024, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend13025, (Optr)&t_send1, (Optr)PSend13026, (Optr)&t_send0, (Optr)PSend13027, (Optr)&t_send2, (Optr)PSend13028, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend13029, (Optr)&t_send1, (Optr)PSend13030, (Optr)&t_send0, (Optr)PSend13031, (Optr)&t_send1, (Optr)PSend13032, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13033, (Optr)&t_send1, (Optr)PSend13034, (Optr)&t_method_return);
    Block PBlock13018 = new_Block_with(PArray13019, empty_Array, PThreadedCode13020, 3, PSend13028, PSend13032, PSend13034);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend13035 = new_Send((Optr)PBlock13018, SMB_value_, 1, (Optr)VAR_method_0_2);
    Array PArray13039 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_code_ = new_Symbol(L"code:");
    // code:. 
    Send PSend13041 = new_Send((Optr)VAR__receiver__1_0, SMB_code_, 1, (Optr)VAR_method_0_2);
    Symbol SMB_host_ = new_Symbol(L"host:");
    // host:. 
    Send PSend13042 = new_Send((Optr)VAR__receiver__1_0, SMB_host_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend13043 = new_Send((Optr)VAR__receiver__1_0, SMB_selector_, 1, (Optr)VAR_selector_0_3);
    Array PThreadedCode13040 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send1, (Optr)PSend13041, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send1, (Optr)PSend13042, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_selector_0_3, (Optr)&t_send1, (Optr)PSend13043, (Optr)&t_method_return);
    Block PBlock13038 = new_Block_with(PArray13039, empty_Array, PThreadedCode13040, 3, PSend13041, PSend13042, PSend13043);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13044 = new_Send((Optr)PMethodClosure_classReference, SMB_new, 0);
    // value:. 
    Send PSend13037 = new_Send((Optr)PBlock13038, SMB_value_, 1, (Optr)PSend13044);
    Assign PAssign13036 = new_Assign((Optr)VAR_methodClosure_0_4, (Optr)PSend13037);
    Symbol SMB_popScope = new_Symbol(L"popScope");
    // popScope. 
    Send PSend13045 = new_Send((Optr)self, SMB_popScope, 0);
    Symbol SMB_compileThreadedMethod_ = new_Symbol(L"compileThreadedMethod:");
    // compileThreadedMethod:. 
    Send PSend13046 = new_Send((Optr)self, SMB_compileThreadedMethod_, 1, (Optr)VAR_method_0_2);
    Array PThreadedCode12996 = instantiate_Array_with(ThreadedCode_Class, 0, 91, (Optr)&t_push1, (Optr)PAssign12997, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12998, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend12999, (Optr)&t_send0, (Optr)PSend13000, (Optr)&t_send1, (Optr)PSend13001, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend13002, (Optr)&t_send1, (Optr)PSend13003, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend13004, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend13005, (Optr)PBlock13006, (Optr)PBlock13010, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13014, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend13015, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13016, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send2, (Optr)PSend13017, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock13018, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send1, (Optr)PSend13035, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13036, (Optr)&t_push_closure, (Optr)PBlock13038, (Optr)&t_push_class_reference, (Optr)PMethodClosure_classReference, (Optr)&t_send0, (Optr)PSend13044, (Optr)&t_send1, (Optr)PSend13037, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13045, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send1, (Optr)PSend13046, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_methodClosure_0_4, (Optr)&t_method_return);
    Method PMethod12993 = new_Method_with(PArray12994, PArray12995, empty_Array, PThreadedCode12996, 12, PAssign12997, PSend12998, PSend13001, PSend13003, PSend13005, PAssign13014, PAssign13016, PSend13035, PAssign13036, PSend13045, PSend13046, VAR_methodClosure_0_4);
    
    MethodClosure MC_SMB_visitMethod_ = new_MethodClosure((Method)PMethod12993, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitMethod_, MC_SMB_visitMethod_);
}


static void init_SMB_createNonReturningMethodBodyFor_() {
    Symbol SMB_createNonReturningMethodBodyFor_ = new_Symbol(L"createNonReturningMethodBodyFor:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Array PArray13048 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Variable VAR_statements_0_1 = new_Variable_named(L"statements", 0);
    Array PArray13049 = new_Array_with(1, (Optr)VAR_statements_0_1);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13052 = new_Send((Optr)VAR_aMethod_0_0, SMB_statements, 0);
    Assign PAssign13051 = new_Assign((Optr)VAR_statements_0_1, (Optr)PSend13052);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13053 = new_Send((Optr)ASTSelf_classReference, SMB_new, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend13054 = new_Send((Optr)VAR_statements_0_1, SMB_add_, 1, (Optr)PSend13053);
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    // acceptOnCollection:. 
    Send PSend13055 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)VAR_statements_0_1);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend13056 = new_Send((Optr)PSend13055, SMB_asArray, 0);
    Array PThreadedCode13050 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign13051, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend13052, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_statements_0_1, (Optr)&t_push_class_reference, (Optr)ASTSelf_classReference, (Optr)&t_send0, (Optr)PSend13053, (Optr)&t_send1, (Optr)PSend13054, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_statements_0_1, (Optr)&t_send1, (Optr)PSend13055, (Optr)&t_send0, (Optr)PSend13056, (Optr)&t_method_return);
    Method PMethod13047 = new_Method_with(PArray13048, PArray13049, empty_Array, PThreadedCode13050, 3, PAssign13051, PSend13054, PSend13056);
    
    MethodClosure MC_SMB_createNonReturningMethodBodyFor_ = new_MethodClosure((Method)PMethod13047, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createNonReturningMethodBodyFor_, MC_SMB_createNonReturningMethodBodyFor_);
}


static void init_SMB_visitSymbol_() {
    Symbol SMB_visitSymbol_ = new_Symbol(L"visitSymbol:");
    Variable VAR_anASTSymbol_0_0 = new_Variable_named(L"anASTSymbol", 0);
    Array PArray13058 = new_Array_with(1, (Optr)VAR_anASTSymbol_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend13060 = new_Send((Optr)VAR_anASTSymbol_0_0, SMB_asSymbol, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend13061 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)PSend13060);
    Array PThreadedCode13059 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTSymbol_0_0, (Optr)&t_send0, (Optr)PSend13060, (Optr)&t_send1, (Optr)PSend13061, (Optr)&t_method_return);
    Method PMethod13057 = new_Method_with(PArray13058, empty_Array, empty_Array, PThreadedCode13059, 1, PSend13061);
    
    MethodClosure MC_SMB_visitSymbol_ = new_MethodClosure((Method)PMethod13057, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitSymbol_, MC_SMB_visitSymbol_);
}


static void init_SMB_createSendTo_() {
    Symbol SMB_createSendTo_ = new_Symbol(L"createSendTo:");
    Variable VAR_receiver_0_0 = new_Variable_named(L"receiver", 0);
    Array PArray13063 = new_Array_with(1, (Optr)VAR_receiver_0_0);
    Symbol SMB_createSendTo_sized_ = new_Symbol(L"createSendTo:sized:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // createSendTo:sized:. 
    Send PSend13065 = new_Send((Optr)self, SMB_createSendTo_sized_, 2, (Optr)VAR_receiver_0_0, (Optr)int_0_Const);
    Array PThreadedCode13064 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend13065, (Optr)&t_method_return);
    Method PMethod13062 = new_Method_with(PArray13063, empty_Array, empty_Array, PThreadedCode13064, 1, PSend13065);
    
    MethodClosure MC_SMB_createSendTo_ = new_MethodClosure((Method)PMethod13062, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createSendTo_, MC_SMB_createSendTo_);
}


static void init_SMB_createCallecBodyFor_() {
    Symbol SMB_createCallecBodyFor_ = new_Symbol(L"createCallecBodyFor:");
    Variable VAR_anASTMethod_0_0 = new_Variable_named(L"anASTMethod", 0);
    Array PArray13067 = new_Array_with(1, (Optr)VAR_anASTMethod_0_0);
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
    Variable VAR_statements_0_2 = new_Variable_named(L"statements", 0);
    Variable VAR_statement_0_3 = new_Variable_named(L"statement", 0);
    Array PArray13068 = new_Array_with(3, (Optr)VAR_body_0_1, (Optr)VAR_statements_0_2, (Optr)VAR_statement_0_3);
    Symbol SMB_pushScope = new_Symbol(L"pushScope");
    // pushScope. 
    Send PSend13070 = new_Send((Optr)self, SMB_pushScope, 0);
    Symbol  SMB___return__ = new_Symbol(L"_return_");
    Symbol SMB_depth = new_Symbol(L"depth");
    // depth. 
    Send PSend13071 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_depth, 0);
    Symbol SMB_named_at_ = new_Symbol(L"named:at:");
    Constant SMB___return___Const = new_Constant((Optr)SMB___return__);
    // named:at:. 
    Send PSend13072 = new_Send((Optr)PVariable_classReference, SMB_named_at_, 2, (Optr)SMB___return___Const, (Optr)PSend13071);
    Symbol SMB_currentCallecVariable_ = new_Symbol(L"currentCallecVariable:");
    // currentCallecVariable:. 
    Send PSend13073 = new_Send((Optr)self, SMB_currentCallecVariable_, 1, (Optr)PSend13072);
    Symbol SMB_createBlock_ = new_Symbol(L"createBlock:");
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13077 = new_Send((Optr)VAR_anASTMethod_0_0, SMB_statements, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend13076 = new_Send((Optr)PSend13077, SMB_size, 0);
    // createBlock:. 
    Send PSend13075 = new_Send((Optr)self, SMB_createBlock_, 1, (Optr)PSend13076);
    Assign PAssign13074 = new_Assign((Optr)VAR_body_0_1, (Optr)PSend13075);
    Symbol SMB_currentCallecVariable = new_Symbol(L"currentCallecVariable");
    // currentCallecVariable. 
    Send PSend13078 = new_Send((Optr)self, SMB_currentCallecVariable, 0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend13079 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)PSend13078);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13080 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Symbol SMB_params_locals_ = new_Symbol(L"params:locals:");
    // params:locals:. 
    Send PSend13081 = new_Send((Optr)VAR_body_0_1, SMB_params_locals_, 2, (Optr)PSend13079, (Optr)PSend13080);
    // statements. 
    Send PSend13083 = new_Send((Optr)VAR_anASTMethod_0_0, SMB_statements, 0);
    Assign PAssign13082 = new_Assign((Optr)VAR_statements_0_2, (Optr)PSend13083);
    // size. 
    Send PSend13084 = new_Send((Optr)VAR_statements_0_2, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray13086 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend13090 = new_Send((Optr)VAR_statements_0_2, SMB_at_, 1, (Optr)VAR_index_1_0);
    // visit:. 
    Send PSend13089 = new_Send((Optr)self, SMB_visit_, 1, (Optr)PSend13090);
    Assign PAssign13088 = new_Assign((Optr)VAR_statement_0_3, (Optr)PSend13089);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend13091 = new_Send((Optr)VAR_body_0_1, SMB_at_put_, 2, (Optr)VAR_index_1_0, (Optr)VAR_statement_0_3);
    Array PThreadedCode13087 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign13088, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_statements_0_2, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend13090, (Optr)&t_send1, (Optr)PSend13089, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_push_variable, (Optr)VAR_statement_0_3, (Optr)&t_send2, (Optr)PSend13091, (Optr)&t_method_return);
    Block PBlock13085 = new_Block_with(PArray13086, empty_Array, PThreadedCode13087, 2, PAssign13088, PSend13091);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend13092 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend13084, (Optr)PBlock13085);
    Symbol SMB_popScope = new_Symbol(L"popScope");
    // popScope. 
    Send PSend13093 = new_Send((Optr)self, SMB_popScope, 0);
    Array PThreadedCode13069 = instantiate_Array_with(ThreadedCode_Class, 0, 73, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13070, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PVariable_classReference, (Optr)&t_push1, (Optr)SMB___return__, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send0, (Optr)PSend13071, (Optr)&t_send2, (Optr)PSend13072, (Optr)&t_send1, (Optr)PSend13073, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13074, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anASTMethod_0_0, (Optr)&t_send0, (Optr)PSend13077, (Optr)&t_send0, (Optr)PSend13076, (Optr)&t_send1, (Optr)PSend13075, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13078, (Optr)&t_send1, (Optr)PSend13079, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend13080, (Optr)&t_send2, (Optr)PSend13081, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13082, (Optr)&t_push_variable, (Optr)VAR_anASTMethod_0_0, (Optr)&t_send0, (Optr)PSend13083, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_statements_0_2, (Optr)&t_send0, (Optr)PSend13084, (Optr)&t_push_closure, (Optr)PBlock13085, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend13092, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13093, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_method_return);
    Method PMethod13066 = new_Method_with(PArray13067, PArray13068, empty_Array, PThreadedCode13069, 8, PSend13070, PSend13073, PAssign13074, PSend13081, PAssign13082, PSend13092, PSend13093, VAR_body_0_1);
    
    MethodClosure MC_SMB_createCallecBodyFor_ = new_MethodClosure((Method)PMethod13066, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createCallecBodyFor_, MC_SMB_createCallecBodyFor_);
}


static void init_SMB_currentBlock_() {
    Symbol SMB_currentBlock_ = new_Symbol(L"currentBlock:");
    Variable VAR_aPinocchioBlock_0_0 = new_Variable_named(L"aPinocchioBlock", 0);
    Array PArray13095 = new_Array_with(1, (Optr)VAR_aPinocchioBlock_0_0);
    Assign PAssign13097 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_currentBlock, (Optr)VAR_aPinocchioBlock_0_0);
    Array PThreadedCode13096 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign13097, (Optr)&t_push_variable, (Optr)VAR_aPinocchioBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13094 = new_Method_with(PArray13095, empty_Array, empty_Array, PThreadedCode13096, 2, PAssign13097, self);
    
    MethodClosure MC_SMB_currentBlock_ = new_MethodClosure((Method)PMethod13094, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_currentBlock_, MC_SMB_currentBlock_);
}


static void init_SMB_visitCharacter_() {
    Symbol SMB_visitCharacter_ = new_Symbol(L"visitCharacter:");
    Variable VAR_anASTCharacter_0_0 = new_Variable_named(L"anASTCharacter", 0);
    Array PArray13099 = new_Array_with(1, (Optr)VAR_anASTCharacter_0_0);
    Symbol SMB_char = new_Symbol(L"char");
    // char. 
    Send PSend13101 = new_Send((Optr)VAR_anASTCharacter_0_0, SMB_char, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend13102 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)PSend13101);
    Array PThreadedCode13100 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTCharacter_0_0, (Optr)&t_send0, (Optr)PSend13101, (Optr)&t_send1, (Optr)PSend13102, (Optr)&t_method_return);
    Method PMethod13098 = new_Method_with(PArray13099, empty_Array, empty_Array, PThreadedCode13100, 1, PSend13102);
    
    MethodClosure MC_SMB_visitCharacter_ = new_MethodClosure((Method)PMethod13098, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitCharacter_, MC_SMB_visitCharacter_);
}


static void init_SMB_visitSelf_() {
    Symbol SMB_visitSelf_ = new_Symbol(L"visitSelf:");
    Variable VAR_aSelf_0_0 = new_Variable_named(L"aSelf", 0);
    Array PArray13104 = new_Array_with(1, (Optr)VAR_aSelf_0_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend13106 = new_Send((Optr)PSelf_classReference, SMB_instance, 0);
    Array PThreadedCode13105 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PSelf_classReference, (Optr)&t_send0, (Optr)PSend13106, (Optr)&t_method_return);
    Method PMethod13103 = new_Method_with(PArray13104, empty_Array, empty_Array, PThreadedCode13105, 1, PSend13106);
    
    MethodClosure MC_SMB_visitSelf_ = new_MethodClosure((Method)PMethod13103, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitSelf_, MC_SMB_visitSelf_);
}


static void init_SMB_unwrapConstant_() {
    Symbol SMB_unwrapConstant_ = new_Symbol(L"unwrapConstant:");
    Variable VAR_aConstant_0_0 = new_Variable_named(L"aConstant", 0);
    Array PArray13108 = new_Array_with(1, (Optr)VAR_aConstant_0_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend13110 = new_Send((Optr)VAR_aConstant_0_0, SMB_isKindOf_, 1, (Optr)PConstant_classReference);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_13114 = new_String(L"Constant expected");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_13114_Const = new_Constant((Optr)string_13114);
    // error:. 
    Send PSend13115 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_13114_Const);
    Array PThreadedCode13113 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_13114, (Optr)&t_send1, (Optr)PSend13115, (Optr)&t_block_return);
    Block PBlock13112 = new_Block_with(empty_Array, empty_Array, PThreadedCode13113, 1, PSend13115);
    // ifFalse:. 
    Send PSend13111 = new_Send((Optr)PSend13110, SMB_ifFalse_, 1, (Optr)PBlock13112);
    Symbol SMB_constant = new_Symbol(L"constant");
    // constant. 
    Send PSend13116 = new_Send((Optr)VAR_aConstant_0_0, SMB_constant, 0);
    Array PThreadedCode13109 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_aConstant_0_0, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_send1, (Optr)PSend13110, (Optr)&t_send_ifFalse_, (Optr)PSend13111, (Optr)PBlock13112, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aConstant_0_0, (Optr)&t_send0, (Optr)PSend13116, (Optr)&t_method_return);
    Method PMethod13107 = new_Method_with(PArray13108, empty_Array, empty_Array, PThreadedCode13109, 2, PSend13111, PSend13116);
    
    MethodClosure MC_SMB_unwrapConstant_ = new_MethodClosure((Method)PMethod13107, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_unwrapConstant_, MC_SMB_unwrapConstant_);
}


static void init_SMB_parser() {
    Symbol SMB_parser = new_Symbol(L"parser");
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend13119 = new_Send((Optr)PSmalltalkParser_classReference, SMB_instance, 0);
    Array PThreadedCode13118 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PSmalltalkParser_classReference, (Optr)&t_send0, (Optr)PSend13119, (Optr)&t_method_return);
    Method PMethod13117 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13118, 1, PSend13119);
    
    MethodClosure MC_SMB_parser = new_MethodClosure((Method)PMethod13117, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_parser, MC_SMB_parser);
}


static void init_SMB_visitMessageCascadeExpression_() {
    Symbol SMB_visitMessageCascadeExpression_ = new_Symbol(L"visitMessageCascadeExpression:");
    Variable VAR_anASTMessageCascadeExpression_0_0 = new_Variable_named(L"anASTMessageCascadeExpression", 0);
    Array PArray13121 = new_Array_with(1, (Optr)VAR_anASTMessageCascadeExpression_0_0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_block_0_2 = new_Variable_named(L"block", 0);
    Variable VAR_send_0_3 = new_Variable_named(L"send", 0);
    Array PArray13122 = new_Array_with(3, (Optr)VAR_receiver_0_1, (Optr)VAR_block_0_2, (Optr)VAR_send_0_3);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13126 = new_Send((Optr)ASTVariable_classReference, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    Symbol  SMB___receiver__ = new_Symbol(L"_receiver_");
    Constant SMB___receiver___Const = new_Constant((Optr)SMB___receiver__);
    // name:. 
    Send PSend13125 = new_Send((Optr)PSend13126, SMB_name_, 1, (Optr)SMB___receiver___Const);
    Assign PAssign13124 = new_Assign((Optr)VAR_receiver_0_1, (Optr)PSend13125);
    Symbol SMB_cascades = new_Symbol(L"cascades");
    // cascades. 
    Send PSend13127 = new_Send((Optr)VAR_anASTMessageCascadeExpression_0_0, SMB_cascades, 0);
    Variable VAR_message_1_0 = new_Variable_named(L"message", 1);
    Array PArray13129 = new_Array_with(1, (Optr)VAR_message_1_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend13131 = new_Send((Optr)VAR_message_1_0, SMB_receiver_, 1, (Optr)VAR_receiver_0_1);
    Array PThreadedCode13130 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_message_1_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend13131, (Optr)&t_method_return);
    Block PBlock13128 = new_Block_with(PArray13129, empty_Array, PThreadedCode13130, 1, PSend13131);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend13132 = new_Send((Optr)PSend13127, SMB_do_, 1, (Optr)PBlock13128);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray13136 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend13138 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_receiver_0_1);
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    // parameters:. 
    Send PSend13139 = new_Send((Optr)VAR__receiver__1_0, SMB_parameters_, 1, (Optr)PSend13138);
    // cascades. 
    Send PSend13140 = new_Send((Optr)VAR_anASTMessageCascadeExpression_0_0, SMB_cascades, 0);
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    // statements:. 
    Send PSend13141 = new_Send((Optr)VAR__receiver__1_0, SMB_statements_, 1, (Optr)PSend13140);
    Array PThreadedCode13137 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend13138, (Optr)&t_send1, (Optr)PSend13139, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anASTMessageCascadeExpression_0_0, (Optr)&t_send0, (Optr)PSend13140, (Optr)&t_send1, (Optr)PSend13141, (Optr)&t_method_return);
    Block PBlock13135 = new_Block_with(PArray13136, empty_Array, PThreadedCode13137, 2, PSend13139, PSend13141);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // new. 
    Send PSend13142 = new_Send((Optr)ASTBlock_classReference, SMB_new, 0);
    // value:. 
    Send PSend13134 = new_Send((Optr)PBlock13135, SMB_value_, 1, (Optr)PSend13142);
    Assign PAssign13133 = new_Assign((Optr)VAR_block_0_2, (Optr)PSend13134);
    Array PArray13146 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    // receiver:. 
    Send PSend13148 = new_Send((Optr)VAR__receiver__1_0, SMB_receiver_, 1, (Optr)VAR_block_0_2);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend13149 = new_Send((Optr)VAR_anASTMessageCascadeExpression_0_0, SMB_receiver, 0);
    // with:. 
    Send PSend13150 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)PSend13149);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend13151 = new_Send((Optr)VAR__receiver__1_0, SMB_arguments_, 1, (Optr)PSend13150);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Constant SMB_value__Const = new_Constant((Optr)SMB_value_);
    // selector:. 
    Send PSend13152 = new_Send((Optr)VAR__receiver__1_0, SMB_selector_, 1, (Optr)SMB_value__Const);
    Array PThreadedCode13147 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_block_0_2, (Optr)&t_send1, (Optr)PSend13148, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTMessageCascadeExpression_0_0, (Optr)&t_send0, (Optr)PSend13149, (Optr)&t_send1, (Optr)PSend13150, (Optr)&t_send1, (Optr)PSend13151, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_value_, (Optr)&t_send1, (Optr)PSend13152, (Optr)&t_method_return);
    Block PBlock13145 = new_Block_with(PArray13146, empty_Array, PThreadedCode13147, 3, PSend13148, PSend13151, PSend13152);
    // new. 
    Send PSend13153 = new_Send((Optr)ASTMessageExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend13144 = new_Send((Optr)PBlock13145, SMB_value_, 1, (Optr)PSend13153);
    Assign PAssign13143 = new_Assign((Optr)VAR_send_0_3, (Optr)PSend13144);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend13154 = new_Send((Optr)self, SMB_visit_, 1, (Optr)VAR_send_0_3);
    Array PThreadedCode13123 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign13124, (Optr)&t_push_class_reference, (Optr)ASTVariable_classReference, (Optr)&t_send0, (Optr)PSend13126, (Optr)&t_push1, (Optr)SMB___receiver__, (Optr)&t_send1, (Optr)PSend13125, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_anASTMessageCascadeExpression_0_0, (Optr)&t_send0, (Optr)PSend13127, (Optr)&t_push_closure, (Optr)PBlock13128, (Optr)&t_send1, (Optr)PSend13132, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13133, (Optr)&t_push_closure, (Optr)PBlock13135, (Optr)&t_push_class_reference, (Optr)ASTBlock_classReference, (Optr)&t_send0, (Optr)PSend13142, (Optr)&t_send1, (Optr)PSend13134, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13143, (Optr)&t_push_closure, (Optr)PBlock13145, (Optr)&t_push_class_reference, (Optr)ASTMessageExpression_classReference, (Optr)&t_send0, (Optr)PSend13153, (Optr)&t_send1, (Optr)PSend13144, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_send_0_3, (Optr)&t_send1, (Optr)PSend13154, (Optr)&t_method_return);
    Method PMethod13120 = new_Method_with(PArray13121, PArray13122, empty_Array, PThreadedCode13123, 5, PAssign13124, PSend13132, PAssign13133, PAssign13143, PSend13154);
    
    MethodClosure MC_SMB_visitMessageCascadeExpression_ = new_MethodClosure((Method)PMethod13120, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitMessageCascadeExpression_, MC_SMB_visitMessageCascadeExpression_);
}


static void init_SMB_visitUnaryExpression_() {
    Symbol SMB_visitUnaryExpression_ = new_Symbol(L"visitUnaryExpression:");
    Variable VAR_anASTUnaryExpression_0_0 = new_Variable_named(L"anASTUnaryExpression", 0);
    Array PArray13156 = new_Array_with(1, (Optr)VAR_anASTUnaryExpression_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray13159 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend13161 = new_Send((Optr)VAR_anASTUnaryExpression_0_0, SMB_selector, 0);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend13162 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)PSend13161);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // new:. 
    Send PSend13163 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_0_Const);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend13164 = new_Send((Optr)VAR__receiver__1_0, SMB_arguments_, 1, (Optr)PSend13163);
    Array PThreadedCode13160 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anASTUnaryExpression_0_0, (Optr)&t_send0, (Optr)PSend13161, (Optr)&t_send1, (Optr)PSend13162, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend13163, (Optr)&t_send1, (Optr)PSend13164, (Optr)&t_method_return);
    Block PBlock13158 = new_Block_with(PArray13159, empty_Array, PThreadedCode13160, 2, PSend13162, PSend13164);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend13165 = new_Send((Optr)VAR_anASTUnaryExpression_0_0, SMB_receiver, 0);
    Symbol SMB_createSendTo_ = new_Symbol(L"createSendTo:");
    // createSendTo:. 
    Send PSend13166 = new_Send((Optr)self, SMB_createSendTo_, 1, (Optr)PSend13165);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend13167 = new_Send((Optr)PBlock13158, SMB_value_, 1, (Optr)PSend13166);
    Array PThreadedCode13157 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_closure, (Optr)PBlock13158, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anASTUnaryExpression_0_0, (Optr)&t_send0, (Optr)PSend13165, (Optr)&t_send1, (Optr)PSend13166, (Optr)&t_send1, (Optr)PSend13167, (Optr)&t_method_return);
    Method PMethod13155 = new_Method_with(PArray13156, empty_Array, empty_Array, PThreadedCode13157, 1, PSend13167);
    
    MethodClosure MC_SMB_visitUnaryExpression_ = new_MethodClosure((Method)PMethod13155, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitUnaryExpression_, MC_SMB_visitUnaryExpression_);
}


static void init_SMB_error_() {
    Symbol SMB_error_ = new_Symbol(L"error:");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Array PArray13169 = new_Array_with(1, (Optr)VAR_message_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray13172 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_target_ = new_Symbol(L"target:");
    // target:. 
    Send PSend13174 = new_Send((Optr)VAR__receiver__1_0, SMB_target_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass);
    Symbol SMB_method_ = new_Symbol(L"method:");
    // method:. 
    Send PSend13175 = new_Send((Optr)VAR__receiver__1_0, SMB_method_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_currentMethod);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend13176 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)VAR_message_0_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend13177 = new_Send((Optr)VAR__receiver__1_0, SMB_signal, 0);
    Array PThreadedCode13173 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send1, (Optr)PSend13174, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_currentMethod, (Optr)&t_send1, (Optr)PSend13175, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_send1, (Optr)PSend13176, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend13177, (Optr)&t_method_return);
    Block PBlock13171 = new_Block_with(PArray13172, empty_Array, PThreadedCode13173, 4, PSend13174, PSend13175, PSend13176, PSend13177);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13178 = new_Send((Optr)PCompilationFailure_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend13179 = new_Send((Optr)PBlock13171, SMB_value_, 1, (Optr)PSend13178);
    Array PThreadedCode13170 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock13171, (Optr)&t_push_class_reference, (Optr)PCompilationFailure_classReference, (Optr)&t_send0, (Optr)PSend13178, (Optr)&t_send1, (Optr)PSend13179, (Optr)&t_method_return);
    Method PMethod13168 = new_Method_with(PArray13169, empty_Array, empty_Array, PThreadedCode13170, 1, PSend13179);
    
    MethodClosure MC_SMB_error_ = new_MethodClosure((Method)PMethod13168, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_error_, MC_SMB_error_);
}


static void init_SMB_visitVariable_() {
    Symbol SMB_visitVariable_ = new_Symbol(L"visitVariable:");
    Variable VAR_anASTVariable_0_0 = new_Variable_named(L"anASTVariable", 0);
    Array PArray13181 = new_Array_with(1, (Optr)VAR_anASTVariable_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray13184 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_lookup_ = new_Symbol(L"lookup:");
    // lookup:. 
    Send PSend13186 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_lookup_, 1, (Optr)VAR_anASTVariable_0_0);
    Variable VAR_value_2_0 = new_Variable_named(L"value", 2);
    Array PArray13188 = new_Array_with(1, (Optr)VAR_value_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13190 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_2_0);
    Array PThreadedCode13189 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_2_0, (Optr)&t_send1, (Optr)PSend13190, (Optr)&t_method_return);
    Block PBlock13187 = new_Block_with(PArray13188, empty_Array, PThreadedCode13189, 1, PSend13190);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend13191 = new_Send((Optr)PSend13186, SMB_ifNotNil_, 1, (Optr)PBlock13187);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend13192 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend13193 = new_Send((Optr)PSend13192, SMB_first, 0);
    Symbol SMB_isUppercase = new_Symbol(L"isUppercase");
    // isUppercase. 
    Send PSend13194 = new_Send((Optr)PSend13193, SMB_isUppercase, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray13199 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_target_ = new_Symbol(L"target:");
    // target:. 
    Send PSend13201 = new_Send((Optr)VAR__receiver__2_0, SMB_target_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass);
    Symbol SMB_method_ = new_Symbol(L"method:");
    // method:. 
    Send PSend13202 = new_Send((Optr)VAR__receiver__2_0, SMB_method_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_currentMethod);
    Symbol SMB_variable_ = new_Symbol(L"variable:");
    // variable:. 
    Send PSend13203 = new_Send((Optr)VAR__receiver__2_0, SMB_variable_, 1, (Optr)VAR_anASTVariable_0_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend13204 = new_Send((Optr)VAR__receiver__2_0, SMB_signal, 0);
    Array PThreadedCode13200 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send1, (Optr)PSend13201, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_currentMethod, (Optr)&t_send1, (Optr)PSend13202, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send1, (Optr)PSend13203, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend13204, (Optr)&t_method_return);
    Block PBlock13198 = new_Block_with(PArray13199, empty_Array, PThreadedCode13200, 4, PSend13201, PSend13202, PSend13203, PSend13204);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13205 = new_Send((Optr)PUndefinedVariable_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend13206 = new_Send((Optr)PBlock13198, SMB_value_, 1, (Optr)PSend13205);
    // escape:. 
    Send PSend13207 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend13206);
    Array PThreadedCode13197 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_closure, (Optr)PBlock13198, (Optr)&t_push_class_reference, (Optr)PUndefinedVariable_classReference, (Optr)&t_send0, (Optr)PSend13205, (Optr)&t_send1, (Optr)PSend13206, (Optr)&t_send1, (Optr)PSend13207, (Optr)&t_block_return);
    Block PBlock13196 = new_Block_with(empty_Array, empty_Array, PThreadedCode13197, 1, PSend13207);
    // ifFalse:. 
    Send PSend13195 = new_Send((Optr)PSend13194, SMB_ifFalse_, 1, (Optr)PBlock13196);
    Symbol SMB_scope = new_Symbol(L"scope");
    // scope. 
    Send PSend13208 = new_Send((Optr)self, SMB_scope, 0);
    // name. 
    Send PSend13209 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_package = new_Symbol(L"package");
    // package. 
    Send PSend13210 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, SMB_package, 0);
    // name. 
    Send PSend13211 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_world = new_Symbol(L"world");
    // world. 
    Send PSend13214 = new_Send((Optr)self, SMB_world, 0);
    // name. 
    Send PSend13215 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_ensureClassReference_ = new_Symbol(L"ensureClassReference:");
    // ensureClassReference:. 
    Send PSend13216 = new_Send((Optr)PSend13214, SMB_ensureClassReference_, 1, (Optr)PSend13215);
    Array PThreadedCode13213 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13214, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13215, (Optr)&t_send1, (Optr)PSend13216, (Optr)&t_block_return);
    Block PBlock13212 = new_Block_with(empty_Array, empty_Array, PThreadedCode13213, 1, PSend13216);
    Symbol SMB_findName_ifAbsent_ = new_Symbol(L"findName:ifAbsent:");
    // findName:ifAbsent:. 
    Send PSend13217 = new_Send((Optr)PSend13210, SMB_findName_ifAbsent_, 2, (Optr)PSend13211, (Optr)PBlock13212);
    Symbol SMB_asNode = new_Symbol(L"asNode");
    // asNode. 
    Send PSend13218 = new_Send((Optr)PSend13217, SMB_asNode, 0);
    Symbol SMB_declare_as_ = new_Symbol(L"declare:as:");
    // declare:as:. 
    Send PSend13219 = new_Send((Optr)PSend13208, SMB_declare_as_, 2, (Optr)PSend13209, (Optr)PSend13218);
    Array PThreadedCode13185 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send1, (Optr)PSend13186, (Optr)&t_push_closure, (Optr)PBlock13187, (Optr)&t_send1, (Optr)PSend13191, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13192, (Optr)&t_send0, (Optr)PSend13193, (Optr)&t_send0, (Optr)PSend13194, (Optr)&t_send_ifFalse_, (Optr)PSend13195, (Optr)PBlock13196, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13208, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13209, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send0, (Optr)PSend13210, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13211, (Optr)&t_push_closure, (Optr)PBlock13212, (Optr)&t_send2, (Optr)PSend13217, (Optr)&t_send0, (Optr)PSend13218, (Optr)&t_send2, (Optr)PSend13219, (Optr)&t_method_return);
    Block PBlock13183 = new_Block_with(PArray13184, empty_Array, PThreadedCode13185, 3, PSend13191, PSend13195, PSend13219);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13220 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock13183);
    Array PThreadedCode13182 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock13183, (Optr)&t_send1, (Optr)PSend13220, (Optr)&t_method_return);
    Method PMethod13180 = new_Method_with(PArray13181, empty_Array, empty_Array, PThreadedCode13182, 1, PSend13220);
    
    MethodClosure MC_SMB_visitVariable_ = new_MethodClosure((Method)PMethod13180, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitVariable_, MC_SMB_visitVariable_);
}


static void init_SMB_currentBlock() {
    Symbol SMB_currentBlock = new_Symbol(L"currentBlock");
    Array PThreadedCode13222 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_currentBlock, (Optr)&t_method_return);
    Method PMethod13221 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13222, 1, slot_Smalltalk_Compiler_Compiler_currentBlock);
    
    MethodClosure MC_SMB_currentBlock = new_MethodClosure((Method)PMethod13221, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_currentBlock, MC_SMB_currentBlock);
}


static void init_SMB_visitBlock_() {
    Symbol SMB_visitBlock_ = new_Symbol(L"visitBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray13224 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Variable VAR_hasState_0_2 = new_Variable_named(L"hasState", 0);
    Array PArray13225 = new_Array_with(2, (Optr)VAR_block_0_1, (Optr)VAR_hasState_0_2);
    Symbol SMB_parameters = new_Symbol(L"parameters");
    // parameters. 
    Send PSend13231 = new_Send((Optr)VAR_aBlock_0_0, SMB_parameters, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend13230 = new_Send((Optr)PSend13231, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend13229 = new_Send((Optr)PSend13230, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_or_ = new_Symbol(L"or:");
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend13234 = new_Send((Optr)VAR_aBlock_0_0, SMB_temporaries, 0);
    // size. 
    Send PSend13235 = new_Send((Optr)PSend13234, SMB_size, 0);
    // >. 
    Send PSend13236 = new_Send((Optr)PSend13235, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode13233 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13234, (Optr)&t_send0, (Optr)PSend13235, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend13236, (Optr)&t_block_return);
    Block PBlock13232 = new_Block_with(empty_Array, empty_Array, PThreadedCode13233, 1, PSend13236);
    // or:. 
    Send PSend13228 = new_Send((Optr)PSend13229, SMB_or_, 1, (Optr)PBlock13232);
    Assign PAssign13227 = new_Assign((Optr)VAR_hasState_0_2, (Optr)PSend13228);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_pushScope = new_Symbol(L"pushScope");
    // pushScope. 
    Send PSend13240 = new_Send((Optr)self, SMB_pushScope, 0);
    // parameters. 
    Send PSend13241 = new_Send((Optr)VAR_aBlock_0_0, SMB_parameters, 0);
    Symbol SMB_declareAll_ = new_Symbol(L"declareAll:");
    // declareAll:. 
    Send PSend13242 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_declareAll_, 1, (Optr)PSend13241);
    // temporaries. 
    Send PSend13243 = new_Send((Optr)VAR_aBlock_0_0, SMB_temporaries, 0);
    // declareAll:. 
    Send PSend13244 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_declareAll_, 1, (Optr)PSend13243);
    Array PThreadedCode13239 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13240, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13241, (Optr)&t_send1, (Optr)PSend13242, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13243, (Optr)&t_send1, (Optr)PSend13244, (Optr)&t_block_return);
    Block PBlock13238 = new_Block_with(empty_Array, empty_Array, PThreadedCode13239, 3, PSend13240, PSend13242, PSend13244);
    // ifTrue:. 
    Send PSend13237 = new_Send((Optr)VAR_hasState_0_2, SMB_ifTrue_, 1, (Optr)PBlock13238);
    Symbol SMB_createBlock_ = new_Symbol(L"createBlock:");
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13248 = new_Send((Optr)VAR_aBlock_0_0, SMB_statements, 0);
    // size. 
    Send PSend13247 = new_Send((Optr)PSend13248, SMB_size, 0);
    // createBlock:. 
    Send PSend13246 = new_Send((Optr)self, SMB_createBlock_, 1, (Optr)PSend13247);
    Assign PAssign13245 = new_Assign((Optr)VAR_block_0_1, (Optr)PSend13246);
    // parameters. 
    Send PSend13249 = new_Send((Optr)VAR_aBlock_0_0, SMB_parameters, 0);
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    // acceptOnCollection:. 
    Send PSend13250 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend13249);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend13251 = new_Send((Optr)PSend13250, SMB_asArray, 0);
    // temporaries. 
    Send PSend13252 = new_Send((Optr)VAR_aBlock_0_0, SMB_temporaries, 0);
    // acceptOnCollection:. 
    Send PSend13253 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend13252);
    // asArray. 
    Send PSend13254 = new_Send((Optr)PSend13253, SMB_asArray, 0);
    Symbol SMB_params_locals_ = new_Symbol(L"params:locals:");
    // params:locals:. 
    Send PSend13255 = new_Send((Optr)VAR_block_0_1, SMB_params_locals_, 2, (Optr)PSend13251, (Optr)PSend13254);
    // statements. 
    Send PSend13256 = new_Send((Optr)VAR_aBlock_0_0, SMB_statements, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray13258 = new_Array_with(2, (Optr)VAR_each_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend13260 = new_Send((Optr)self, SMB_visit_, 1, (Optr)VAR_each_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend13261 = new_Send((Optr)VAR_block_0_1, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)PSend13260);
    Array PThreadedCode13259 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send1, (Optr)PSend13260, (Optr)&t_send2, (Optr)PSend13261, (Optr)&t_method_return);
    Block PBlock13257 = new_Block_with(PArray13258, empty_Array, PThreadedCode13259, 1, PSend13261);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend13262 = new_Send((Optr)PSend13256, SMB_withIndexDo_, 1, (Optr)PBlock13257);
    Symbol SMB_popScope = new_Symbol(L"popScope");
    // popScope. 
    Send PSend13266 = new_Send((Optr)self, SMB_popScope, 0);
    Array PThreadedCode13265 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13266, (Optr)&t_block_return);
    Block PBlock13264 = new_Block_with(empty_Array, empty_Array, PThreadedCode13265, 1, PSend13266);
    // ifTrue:. 
    Send PSend13263 = new_Send((Optr)VAR_hasState_0_2, SMB_ifTrue_, 1, (Optr)PBlock13264);
    Array PThreadedCode13226 = instantiate_Array_with(ThreadedCode_Class, 0, 77, (Optr)&t_push1, (Optr)PAssign13227, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13231, (Optr)&t_send0, (Optr)PSend13230, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend13229, (Optr)&t_push_closure, (Optr)PBlock13232, (Optr)&t_send1, (Optr)PSend13228, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hasState_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend13237, (Optr)PBlock13238, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13245, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13248, (Optr)&t_send0, (Optr)PSend13247, (Optr)&t_send1, (Optr)PSend13246, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13249, (Optr)&t_send1, (Optr)PSend13250, (Optr)&t_send0, (Optr)PSend13251, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13252, (Optr)&t_send1, (Optr)PSend13253, (Optr)&t_send0, (Optr)PSend13254, (Optr)&t_send2, (Optr)PSend13255, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13256, (Optr)&t_push_closure, (Optr)PBlock13257, (Optr)&t_send1, (Optr)PSend13262, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hasState_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend13263, (Optr)PBlock13264, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_method_return);
    Method PMethod13223 = new_Method_with(PArray13224, PArray13225, empty_Array, PThreadedCode13226, 7, PAssign13227, PSend13237, PAssign13245, PSend13255, PSend13262, PSend13263, VAR_block_0_1);
    
    MethodClosure MC_SMB_visitBlock_ = new_MethodClosure((Method)PMethod13223, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitBlock_, MC_SMB_visitBlock_);
}


static void init_SMB_createSendTo_sized_() {
    Symbol SMB_createSendTo_sized_ = new_Symbol(L"createSendTo:sized:");
    Variable VAR_receiver_0_0 = new_Variable_named(L"receiver", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Array PArray13268 = new_Array_with(2, (Optr)VAR_receiver_0_0, (Optr)VAR_size_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray13271 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend13273 = new_Send((Optr)VAR_receiver_0_0, SMB_isKindOf_, 1, (Optr)ASTSuper_classReference);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend13277 = new_Send((Optr)PSuper_classReference, SMB_new_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13278 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend13277);
    Array PThreadedCode13276 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PSuper_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend13277, (Optr)&t_send1, (Optr)PSend13278, (Optr)&t_block_return);
    Block PBlock13275 = new_Block_with(empty_Array, empty_Array, PThreadedCode13276, 1, PSend13278);
    // ifTrue:. 
    Send PSend13274 = new_Send((Optr)PSend13273, SMB_ifTrue_, 1, (Optr)PBlock13275);
    // new:. 
    Send PSend13279 = new_Send((Optr)PSend_classReference, SMB_new_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend13280 = new_Send((Optr)self, SMB_visit_, 1, (Optr)VAR_receiver_0_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend13281 = new_Send((Optr)PSend13279, SMB_receiver_, 1, (Optr)PSend13280);
    Array PThreadedCode13272 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_push_class_reference, (Optr)ASTSuper_classReference, (Optr)&t_send1, (Optr)PSend13273, (Optr)&t_send_ifTrue_, (Optr)PSend13274, (Optr)PBlock13275, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PSend_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend13279, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_send1, (Optr)PSend13280, (Optr)&t_send1, (Optr)PSend13281, (Optr)&t_method_return);
    Block PBlock13270 = new_Block_with(PArray13271, empty_Array, PThreadedCode13272, 2, PSend13274, PSend13281);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13282 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock13270);
    Array PThreadedCode13269 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock13270, (Optr)&t_send1, (Optr)PSend13282, (Optr)&t_method_return);
    Method PMethod13267 = new_Method_with(PArray13268, empty_Array, empty_Array, PThreadedCode13269, 1, PSend13282);
    
    MethodClosure MC_SMB_createSendTo_sized_ = new_MethodClosure((Method)PMethod13267, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createSendTo_sized_, MC_SMB_createSendTo_sized_);
}


static void init_SMB_visitPath_() {
    Symbol SMB_visitPath_ = new_Symbol(L"visitPath:");
    Variable VAR_aPath_0_0 = new_Variable_named(L"aPath", 0);
    Array PArray13284 = new_Array_with(1, (Optr)VAR_aPath_0_0);
    Symbol SMB_package = new_Symbol(L"package");
    // package. 
    Send PSend13286 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, SMB_package, 0);
    Symbol SMB_path = new_Symbol(L"path");
    // path. 
    Send PSend13287 = new_Send((Optr)VAR_aPath_0_0, SMB_path, 0);
    Symbol SMB_lookup_ = new_Symbol(L"lookup:");
    // lookup:. 
    Send PSend13288 = new_Send((Optr)PSend13286, SMB_lookup_, 1, (Optr)PSend13287);
    Symbol SMB_asNode = new_Symbol(L"asNode");
    // asNode. 
    Send PSend13289 = new_Send((Optr)PSend13288, SMB_asNode, 0);
    Array PThreadedCode13285 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send0, (Optr)PSend13286, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_send0, (Optr)PSend13287, (Optr)&t_send1, (Optr)PSend13288, (Optr)&t_send0, (Optr)PSend13289, (Optr)&t_method_return);
    Method PMethod13283 = new_Method_with(PArray13284, empty_Array, empty_Array, PThreadedCode13285, 1, PSend13289);
    
    MethodClosure MC_SMB_visitPath_ = new_MethodClosure((Method)PMethod13283, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitPath_, MC_SMB_visitPath_);
}


static void init_SMB_visitBraceExpression_() {
    Symbol SMB_visitBraceExpression_ = new_Symbol(L"visitBraceExpression:");
    Variable VAR_braceExpression_0_0 = new_Variable_named(L"braceExpression", 0);
    Array PArray13291 = new_Array_with(1, (Optr)VAR_braceExpression_0_0);
    String string_13293 = new_String(L"Brace expressions are not supported by the compiler. Patches welcome!");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_13293_Const = new_Constant((Optr)string_13293);
    // error:. 
    Send PSend13294 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_13293_Const);
    Array PThreadedCode13292 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_13293, (Optr)&t_send1, (Optr)PSend13294, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13290 = new_Method_with(PArray13291, empty_Array, empty_Array, PThreadedCode13292, 2, PSend13294, self);
    
    MethodClosure MC_SMB_visitBraceExpression_ = new_MethodClosure((Method)PMethod13290, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitBraceExpression_, MC_SMB_visitBraceExpression_);
}


static void init_SMB_world_() {
    Symbol SMB_world_ = new_Symbol(L"world:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray13296 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign13298 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_world, (Optr)VAR_anObject_0_0);
    Array PThreadedCode13297 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign13298, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13295 = new_Method_with(PArray13296, empty_Array, empty_Array, PThreadedCode13297, 2, PAssign13298, self);
    
    MethodClosure MC_SMB_world_ = new_MethodClosure((Method)PMethod13295, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_world_, MC_SMB_world_);
}


static void init_SMB_pushScope() {
    Symbol SMB_pushScope = new_Symbol(L"pushScope");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend13302 = new_Send((Optr)PSubScope_classReference, SMB_new_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_scope);
    Assign PAssign13301 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)PSend13302);
    Array PThreadedCode13300 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign13301, (Optr)&t_push_class_reference, (Optr)PSubScope_classReference, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send1, (Optr)PSend13302, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13299 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13300, 2, PAssign13301, self);
    
    MethodClosure MC_SMB_pushScope = new_MethodClosure((Method)PMethod13299, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_pushScope, MC_SMB_pushScope);
}


static void init_SMB_createPInfo() {
    Symbol SMB_createPInfo = new_Symbol(L"createPInfo");
    Variable VAR_info_0_0 = new_Variable_named(L"info", 0);
    Array PArray13304 = new_Array_with(1, (Optr)VAR_info_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13307 = new_Send((Optr)PInfo_classReference, SMB_new, 0);
    Assign PAssign13306 = new_Assign((Optr)VAR_info_0_0, (Optr)PSend13307);
    Symbol SMB_sourceObject = new_Symbol(L"sourceObject");
    // sourceObject. 
    Send PSend13308 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_currentMethod, SMB_sourceObject, 0);
    Symbol SMB_sourceFile_ = new_Symbol(L"sourceFile:");
    // sourceFile:. 
    Send PSend13309 = new_Send((Optr)VAR_info_0_0, SMB_sourceFile_, 1, (Optr)PSend13308);
    Symbol SMB_line_ = new_Symbol(L"line:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // line:. 
    Send PSend13310 = new_Send((Optr)VAR_info_0_0, SMB_line_, 1, (Optr)int_1_Const);
    Symbol SMB_column_ = new_Symbol(L"column:");
    // column:. 
    Send PSend13311 = new_Send((Optr)VAR_info_0_0, SMB_column_, 1, (Optr)int_1_Const);
    Array PThreadedCode13305 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign13306, (Optr)&t_push_class_reference, (Optr)PInfo_classReference, (Optr)&t_send0, (Optr)PSend13307, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_info_0_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_currentMethod, (Optr)&t_send0, (Optr)PSend13308, (Optr)&t_send1, (Optr)PSend13309, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_info_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend13310, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_info_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend13311, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_info_0_0, (Optr)&t_method_return);
    Method PMethod13303 = new_Method_with(empty_Array, PArray13304, empty_Array, PThreadedCode13305, 5, PAssign13306, PSend13309, PSend13310, PSend13311, VAR_info_0_0);
    
    MethodClosure MC_SMB_createPInfo = new_MethodClosure((Method)PMethod13303, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createPInfo, MC_SMB_createPInfo);
}


static void init_SMB_visitKeywordSelector_() {
    Symbol SMB_visitKeywordSelector_ = new_Symbol(L"visitKeywordSelector:");
    Variable VAR_anASTKeywordSelector_0_0 = new_Variable_named(L"anASTKeywordSelector", 0);
    Array PArray13313 = new_Array_with(1, (Optr)VAR_anASTKeywordSelector_0_0);
    Symbol SMB_selectorSymbol = new_Symbol(L"selectorSymbol");
    // selectorSymbol. 
    Send PSend13315 = new_Send((Optr)VAR_anASTKeywordSelector_0_0, SMB_selectorSymbol, 0);
    Array PThreadedCode13314 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_anASTKeywordSelector_0_0, (Optr)&t_send0, (Optr)PSend13315, (Optr)&t_method_return);
    Method PMethod13312 = new_Method_with(PArray13313, empty_Array, empty_Array, PThreadedCode13314, 1, PSend13315);
    
    MethodClosure MC_SMB_visitKeywordSelector_ = new_MethodClosure((Method)PMethod13312, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitKeywordSelector_, MC_SMB_visitKeywordSelector_);
}


static void init_SMB_visitBoolean_() {
    Symbol SMB_visitBoolean_ = new_Symbol(L"visitBoolean:");
    Variable VAR_aPinocchioBoolean_0_0 = new_Variable_named(L"aPinocchioBoolean", 0);
    Array PArray13317 = new_Array_with(1, (Optr)VAR_aPinocchioBoolean_0_0);
    Array PThreadedCode13318 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_aPinocchioBoolean_0_0, (Optr)&t_method_return);
    Method PMethod13316 = new_Method_with(PArray13317, empty_Array, empty_Array, PThreadedCode13318, 1, VAR_aPinocchioBoolean_0_0);
    
    MethodClosure MC_SMB_visitBoolean_ = new_MethodClosure((Method)PMethod13316, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitBoolean_, MC_SMB_visitBoolean_);
}


static void init_class_SMB_compile_on_() {
    Symbol SMB_compile_on_ = new_Symbol(L"compile:on:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_aClass_0_1 = new_Variable_named(L"aClass", 0);
    Array PArray13320 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aClass_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray13323 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_pclass_ = new_Symbol(L"pclass:");
    // pclass:. 
    Send PSend13325 = new_Send((Optr)VAR__receiver__1_0, SMB_pclass_, 1, (Optr)VAR_aClass_0_1);
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend13326 = new_Send((Optr)VAR__receiver__1_0, SMB_compile_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode13324 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aClass_0_1, (Optr)&t_send1, (Optr)PSend13325, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend13326, (Optr)&t_method_return);
    Block PBlock13322 = new_Block_with(PArray13323, empty_Array, PThreadedCode13324, 2, PSend13325, PSend13326);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13327 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend13328 = new_Send((Optr)PBlock13322, SMB_value_, 1, (Optr)PSend13327);
    Array PThreadedCode13321 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock13322, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13327, (Optr)&t_send1, (Optr)PSend13328, (Optr)&t_method_return);
    Method PMethod13319 = new_Method_with(PArray13320, empty_Array, empty_Array, PThreadedCode13321, 1, PSend13328);
    
    MethodClosure MC_SMB_compile_on_ = new_MethodClosure((Method)PMethod13319, HEADER(Smalltalk_Compiler_Compiler_Class));
    store_method(HEADER(Smalltalk_Compiler_Compiler_Class), SMB_compile_on_, MC_SMB_compile_on_);
}

void init_Smalltalk_Compiler_PCompiler_layout() {
    layout_Smalltalk_Compiler_Compiler_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_Compiler_Compiler_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_Compiler_Compiler_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_Compiler_Compiler_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_Compiler_Compiler_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_Compiler_Compiler_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Compiler = new_Symbol(L"Compiler");
    slot_Smalltalk_Compiler_Compiler_scope = (Optr)new_Slot(0, L"scope");
    slot_Smalltalk_Compiler_Compiler_rootScope = (Optr)new_Slot(1, L"rootScope");
    slot_Smalltalk_Compiler_Compiler_world = (Optr)new_Slot(2, L"world");
    slot_Smalltalk_Compiler_Compiler_pinocchioClass = (Optr)new_Slot(3, L"pinocchioClass");
    slot_Smalltalk_Compiler_Compiler_currentMethod = (Optr)new_Slot(4, L"currentMethod");
    slot_Smalltalk_Compiler_Compiler_currentBlock = (Optr)new_Slot(5, L"currentBlock");
    slot_Smalltalk_Compiler_Compiler_currentCallecVariable = (Optr)new_Slot(6, L"currentCallecVariable");
    slot_Smalltalk_Compiler_Compiler_threadedCompiler = (Optr)new_Slot(7, L"threadedCompiler");
    layout_Smalltalk_Compiler_Compiler = (Optr)create_layout_with_vars(ObjectLayout_Class, 8);
    ((Array)layout_Smalltalk_Compiler_Compiler)->values[0] = slot_Smalltalk_Compiler_Compiler_scope; // scope 
    ((Array)layout_Smalltalk_Compiler_Compiler)->values[1] = slot_Smalltalk_Compiler_Compiler_rootScope; // rootScope 
    ((Array)layout_Smalltalk_Compiler_Compiler)->values[2] = slot_Smalltalk_Compiler_Compiler_world; // world 
    ((Array)layout_Smalltalk_Compiler_Compiler)->values[3] = slot_Smalltalk_Compiler_Compiler_pinocchioClass; // pinocchioClass 
    ((Array)layout_Smalltalk_Compiler_Compiler)->values[4] = slot_Smalltalk_Compiler_Compiler_currentMethod; // currentMethod 
    ((Array)layout_Smalltalk_Compiler_Compiler)->values[5] = slot_Smalltalk_Compiler_Compiler_currentBlock; // currentBlock 
    ((Array)layout_Smalltalk_Compiler_Compiler)->values[6] = slot_Smalltalk_Compiler_Compiler_currentCallecVariable; // currentCallecVariable 
    ((Array)layout_Smalltalk_Compiler_Compiler)->values[7] = slot_Smalltalk_Compiler_Compiler_threadedCompiler; // threadedCompiler 
    Smalltalk_Compiler_Compiler_Class = (Class)new_Class(Smalltalk_AST_Visitor_Class, layout_Smalltalk_Compiler_Compiler_Class_class);
    Smalltalk_Compiler_Compiler_Class->layout = layout_Smalltalk_Compiler_Compiler;
    Smalltalk_Compiler_Compiler_Class->name = SMB_Compiler;
    
}

void init_Smalltalk_Compiler_PCompiler_methods() {
    init_SMB_visitBinaryExpression_();
    init_SMB_createBlock_();
    init_SMB_visitReturnExpression_();
    init_SMB_visitArray_();
    init_SMB_visitMessageExpression_();
    init_SMB_visitAssignmentExpression_();
    init_SMB_currentCallecVariable_();
    init_SMB_visitUnaryAnnotation_();
    init_SMB_initialize();
    init_SMB_visitUnarySelector_();
    init_SMB_compile_();
    init_SMB_compileThreadedMethod_();
    init_SMB_pclass();
    init_SMB_rootScope();
    init_SMB_visitFloat_();
    init_SMB_scope();
    init_SMB_visitSuper_();
    init_SMB_visitNumber_();
    init_SMB_world();
    init_SMB_pclass_();
    init_SMB_visitKeywordAnnotation_();
    init_SMB_visitString_();
    init_SMB_createReturningMethodBodyFor_();
    init_SMB_parse_();
    init_SMB_popScope();
    init_SMB_selectorFor_();
    init_SMB_currentCallecVariable();
    init_SMB_createMethod_with_();
    init_SMB_visitMethod_();
    init_SMB_createNonReturningMethodBodyFor_();
    init_SMB_visitSymbol_();
    init_SMB_createSendTo_();
    init_SMB_createCallecBodyFor_();
    init_SMB_currentBlock_();
    init_SMB_visitCharacter_();
    init_SMB_visitSelf_();
    init_SMB_unwrapConstant_();
    init_SMB_parser();
    init_SMB_visitMessageCascadeExpression_();
    init_SMB_visitUnaryExpression_();
    init_SMB_error_();
    init_SMB_visitVariable_();
    init_SMB_currentBlock();
    init_SMB_visitBlock_();
    init_SMB_createSendTo_sized_();
    init_SMB_visitPath_();
    init_SMB_visitBraceExpression_();
    init_SMB_world_();
    init_SMB_pushScope();
    init_SMB_createPInfo();
    init_SMB_visitKeywordSelector_();
    init_SMB_visitBoolean_();
    init_class_SMB_compile_on_();
    
}