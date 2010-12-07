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
<<<<<<< HEAD
    Array PArray12754 = new_Array_with(1, (Optr)VAR_aBinaryExpression_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12757 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12759 = new_Send((Optr)VAR_aBinaryExpression_0_0, SMB_selector, 0);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend12760 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)PSend12759);
    Symbol SMB_argument = new_Symbol(L"argument");
    // argument. 
    Send PSend12761 = new_Send((Optr)VAR_aBinaryExpression_0_0, SMB_argument, 0);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend12762 = new_Send((Optr)self, SMB_visit_, 1, (Optr)PSend12761);
=======
    Array PArray12720 = new_Array_with(1, (Optr)VAR_aBinaryExpression_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12723 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12725 = new_Send((Optr)VAR_aBinaryExpression_0_0, SMB_selector, 0);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend12726 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)PSend12725);
    Symbol SMB_argument = new_Symbol(L"argument");
    // argument. 
    Send PSend12727 = new_Send((Optr)VAR_aBinaryExpression_0_0, SMB_argument, 0);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend12728 = new_Send((Optr)self, SMB_visit_, 1, (Optr)PSend12727);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
<<<<<<< HEAD
    Send PSend12763 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend12762);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend12764 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode12758 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aBinaryExpression_0_0, (Optr)&t_send0, (Optr)PSend12759, (Optr)&t_send1, (Optr)PSend12760, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBinaryExpression_0_0, (Optr)&t_send0, (Optr)PSend12761, (Optr)&t_send1, (Optr)PSend12762, (Optr)&t_send2, (Optr)PSend12763, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend12764, (Optr)&t_method_return);
    Block PBlock12756 = new_Block_with(PArray12757, empty_Array, PThreadedCode12758, 3, PSend12760, PSend12763, PSend12764);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend12765 = new_Send((Optr)VAR_aBinaryExpression_0_0, SMB_receiver, 0);
    Symbol SMB_createSendTo_sized_ = new_Symbol(L"createSendTo:sized:");
    // createSendTo:sized:. 
    Send PSend12766 = new_Send((Optr)self, SMB_createSendTo_sized_, 2, (Optr)PSend12765, (Optr)int_1_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12767 = new_Send((Optr)PBlock12756, SMB_value_, 1, (Optr)PSend12766);
    Array PThreadedCode12755 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_closure, (Optr)PBlock12756, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBinaryExpression_0_0, (Optr)&t_send0, (Optr)PSend12765, (Optr)&t_push_1, (Optr)&t_send2, (Optr)PSend12766, (Optr)&t_send1, (Optr)PSend12767, (Optr)&t_method_return);
    Method PMethod12753 = new_Method_with(PArray12754, empty_Array, empty_Array, PThreadedCode12755, 1, PSend12767);
    
    MethodClosure MC_SMB_visitBinaryExpression_ = new_MethodClosure((Method)PMethod12753, Smalltalk_Compiler_Compiler_Class);
=======
    Send PSend12729 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend12728);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend12730 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode12724 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aBinaryExpression_0_0, (Optr)&t_send0, (Optr)PSend12725, (Optr)&t_send1, (Optr)PSend12726, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBinaryExpression_0_0, (Optr)&t_send0, (Optr)PSend12727, (Optr)&t_send1, (Optr)PSend12728, (Optr)&t_send2, (Optr)PSend12729, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend12730, (Optr)&t_method_return);
    Block PBlock12722 = new_Block_with(PArray12723, empty_Array, PThreadedCode12724, 3, PSend12726, PSend12729, PSend12730);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend12731 = new_Send((Optr)VAR_aBinaryExpression_0_0, SMB_receiver, 0);
    Symbol SMB_createSendTo_sized_ = new_Symbol(L"createSendTo:sized:");
    // createSendTo:sized:. 
    Send PSend12732 = new_Send((Optr)self, SMB_createSendTo_sized_, 2, (Optr)PSend12731, (Optr)int_1_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12733 = new_Send((Optr)PBlock12722, SMB_value_, 1, (Optr)PSend12732);
    Array PThreadedCode12721 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_closure, (Optr)PBlock12722, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBinaryExpression_0_0, (Optr)&t_send0, (Optr)PSend12731, (Optr)&t_push_1, (Optr)&t_send2, (Optr)PSend12732, (Optr)&t_send1, (Optr)PSend12733, (Optr)&t_method_return);
    Method PMethod12719 = new_Method_with(PArray12720, empty_Array, empty_Array, PThreadedCode12721, 1, PSend12733);
    
    MethodClosure MC_SMB_visitBinaryExpression_ = new_MethodClosure((Method)PMethod12719, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitBinaryExpression_, MC_SMB_visitBinaryExpression_);
}


static void init_SMB_createBlock_() {
    Symbol SMB_createBlock_ = new_Symbol(L"createBlock:");
    Variable VAR_size_0_0 = new_Variable_named(L"size", 0);
<<<<<<< HEAD
    Array PArray12769 = new_Array_with(1, (Optr)VAR_size_0_0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Array PArray12770 = new_Array_with(1, (Optr)VAR_block_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12773 = new_Send((Optr)PBlock_classReference, SMB_new_, 1, (Optr)VAR_size_0_0);
    Assign PAssign12772 = new_Assign((Optr)VAR_block_0_1, (Optr)PSend12773);
    Array PThreadedCode12771 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign12772, (Optr)&t_push_class_reference, (Optr)PBlock_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend12773, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_method_return);
    Method PMethod12768 = new_Method_with(PArray12769, PArray12770, empty_Array, PThreadedCode12771, 2, PAssign12772, VAR_block_0_1);
    
    MethodClosure MC_SMB_createBlock_ = new_MethodClosure((Method)PMethod12768, Smalltalk_Compiler_Compiler_Class);
=======
    Array PArray12735 = new_Array_with(1, (Optr)VAR_size_0_0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Array PArray12736 = new_Array_with(1, (Optr)VAR_block_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12739 = new_Send((Optr)PBlock_classReference, SMB_new_, 1, (Optr)VAR_size_0_0);
    Assign PAssign12738 = new_Assign((Optr)VAR_block_0_1, (Optr)PSend12739);
    Array PThreadedCode12737 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign12738, (Optr)&t_push_class_reference, (Optr)PBlock_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend12739, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_method_return);
    Method PMethod12734 = new_Method_with(PArray12735, PArray12736, empty_Array, PThreadedCode12737, 2, PAssign12738, VAR_block_0_1);
    
    MethodClosure MC_SMB_createBlock_ = new_MethodClosure((Method)PMethod12734, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createBlock_, MC_SMB_createBlock_);
}


static void init_SMB_visitReturnExpression_() {
    Symbol SMB_visitReturnExpression_ = new_Symbol(L"visitReturnExpression:");
    Variable VAR_aReturnExpression_0_0 = new_Variable_named(L"aReturnExpression", 0);
<<<<<<< HEAD
    Array PArray12775 = new_Array_with(1, (Optr)VAR_aReturnExpression_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12778 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend12780 = new_Send((Optr)VAR_aReturnExpression_0_0, SMB_expression, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend12781 = new_Send((Optr)PSend12780, SMB_accept_, 1, (Optr)self);
=======
    Array PArray12741 = new_Array_with(1, (Optr)VAR_aReturnExpression_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12744 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend12746 = new_Send((Optr)VAR_aReturnExpression_0_0, SMB_expression, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend12747 = new_Send((Optr)PSend12746, SMB_accept_, 1, (Optr)self);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
<<<<<<< HEAD
    Send PSend12782 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend12781);
    Symbol SMB_currentCallecVariable = new_Symbol(L"currentCallecVariable");
    // currentCallecVariable. 
    Send PSend12783 = new_Send((Optr)self, SMB_currentCallecVariable, 0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend12784 = new_Send((Optr)VAR__receiver__1_0, SMB_receiver_, 1, (Optr)PSend12783);
=======
    Send PSend12748 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend12747);
    Symbol SMB_currentCallecVariable = new_Symbol(L"currentCallecVariable");
    // currentCallecVariable. 
    Send PSend12749 = new_Send((Optr)self, SMB_currentCallecVariable, 0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend12750 = new_Send((Optr)VAR__receiver__1_0, SMB_receiver_, 1, (Optr)PSend12749);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol  SMB_escape_ = new_Symbol(L"escape:");
    Symbol SMB_message_ = new_Symbol(L"message:");
    Constant SMB_escape__Const = new_Constant((Optr)SMB_escape_);
    // message:. 
<<<<<<< HEAD
    Send PSend12785 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)SMB_escape__Const);
    Array PThreadedCode12779 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_aReturnExpression_0_0, (Optr)&t_send0, (Optr)PSend12780, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12781, (Optr)&t_send2, (Optr)PSend12782, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12783, (Optr)&t_send1, (Optr)PSend12784, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_escape_, (Optr)&t_send1, (Optr)PSend12785, (Optr)&t_method_return);
    Block PBlock12777 = new_Block_with(PArray12778, empty_Array, PThreadedCode12779, 3, PSend12782, PSend12784, PSend12785);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12786 = new_Send((Optr)PSend_classReference, SMB_new_, 1, (Optr)int_1_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12787 = new_Send((Optr)PBlock12777, SMB_value_, 1, (Optr)PSend12786);
    Array PThreadedCode12776 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock12777, (Optr)&t_push_class_reference, (Optr)PSend_classReference, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12786, (Optr)&t_send1, (Optr)PSend12787, (Optr)&t_method_return);
    Method PMethod12774 = new_Method_with(PArray12775, empty_Array, empty_Array, PThreadedCode12776, 1, PSend12787);
    
    MethodClosure MC_SMB_visitReturnExpression_ = new_MethodClosure((Method)PMethod12774, Smalltalk_Compiler_Compiler_Class);
=======
    Send PSend12751 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)SMB_escape__Const);
    Array PThreadedCode12745 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_aReturnExpression_0_0, (Optr)&t_send0, (Optr)PSend12746, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12747, (Optr)&t_send2, (Optr)PSend12748, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12749, (Optr)&t_send1, (Optr)PSend12750, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_escape_, (Optr)&t_send1, (Optr)PSend12751, (Optr)&t_method_return);
    Block PBlock12743 = new_Block_with(PArray12744, empty_Array, PThreadedCode12745, 3, PSend12748, PSend12750, PSend12751);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12752 = new_Send((Optr)PSend_classReference, SMB_new_, 1, (Optr)int_1_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12753 = new_Send((Optr)PBlock12743, SMB_value_, 1, (Optr)PSend12752);
    Array PThreadedCode12742 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock12743, (Optr)&t_push_class_reference, (Optr)PSend_classReference, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12752, (Optr)&t_send1, (Optr)PSend12753, (Optr)&t_method_return);
    Method PMethod12740 = new_Method_with(PArray12741, empty_Array, empty_Array, PThreadedCode12742, 1, PSend12753);
    
    MethodClosure MC_SMB_visitReturnExpression_ = new_MethodClosure((Method)PMethod12740, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitReturnExpression_, MC_SMB_visitReturnExpression_);
}


static void init_SMB_visitArray_() {
    Symbol SMB_visitArray_ = new_Symbol(L"visitArray:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
<<<<<<< HEAD
    Array PArray12789 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    String string_12791 = new_String(L"Literal arrays are not yet supported by the compiler. Patches welcome!");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_12791_Const = new_Constant((Optr)string_12791);
    // error:. 
    Send PSend12792 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_12791_Const);
    Array PThreadedCode12790 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_12791, (Optr)&t_send1, (Optr)PSend12792, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12788 = new_Method_with(PArray12789, empty_Array, empty_Array, PThreadedCode12790, 2, PSend12792, self);
    
    MethodClosure MC_SMB_visitArray_ = new_MethodClosure((Method)PMethod12788, Smalltalk_Compiler_Compiler_Class);
=======
    Array PArray12755 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    String string_12757 = new_String(L"Literal arrays are not yet supported by the compiler. Patches welcome!");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_12757_Const = new_Constant((Optr)string_12757);
    // error:. 
    Send PSend12758 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_12757_Const);
    Array PThreadedCode12756 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_12757, (Optr)&t_send1, (Optr)PSend12758, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12754 = new_Method_with(PArray12755, empty_Array, empty_Array, PThreadedCode12756, 2, PSend12758, self);
    
    MethodClosure MC_SMB_visitArray_ = new_MethodClosure((Method)PMethod12754, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitArray_, MC_SMB_visitArray_);
}


static void init_SMB_visitMessageExpression_() {
    Symbol SMB_visitMessageExpression_ = new_Symbol(L"visitMessageExpression:");
    Variable VAR_aMessageExpression_0_0 = new_Variable_named(L"aMessageExpression", 0);
<<<<<<< HEAD
    Array PArray12794 = new_Array_with(1, (Optr)VAR_aMessageExpression_0_0);
    Variable VAR_arguments_0_1 = new_Variable_named(L"arguments", 0);
    Array PArray12795 = new_Array_with(1, (Optr)VAR_arguments_0_1);
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    Symbol SMB_arguments = new_Symbol(L"arguments");
    // arguments. 
    Send PSend12799 = new_Send((Optr)VAR_aMessageExpression_0_0, SMB_arguments, 0);
    // acceptOnCollection:. 
    Send PSend12798 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend12799);
    Assign PAssign12797 = new_Assign((Optr)VAR_arguments_0_1, (Optr)PSend12798);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12801 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12803 = new_Send((Optr)VAR_aMessageExpression_0_0, SMB_selector, 0);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend12804 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)PSend12803);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend12805 = new_Send((Optr)VAR__receiver__1_0, SMB_arguments_, 1, (Optr)VAR_arguments_0_1);
    Array PThreadedCode12802 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aMessageExpression_0_0, (Optr)&t_send0, (Optr)PSend12803, (Optr)&t_send1, (Optr)PSend12804, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_arguments_0_1, (Optr)&t_send1, (Optr)PSend12805, (Optr)&t_method_return);
    Block PBlock12800 = new_Block_with(PArray12801, empty_Array, PThreadedCode12802, 2, PSend12804, PSend12805);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend12806 = new_Send((Optr)VAR_aMessageExpression_0_0, SMB_receiver, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12807 = new_Send((Optr)VAR_arguments_0_1, SMB_size, 0);
    Symbol SMB_createSendTo_sized_ = new_Symbol(L"createSendTo:sized:");
    // createSendTo:sized:. 
    Send PSend12808 = new_Send((Optr)self, SMB_createSendTo_sized_, 2, (Optr)PSend12806, (Optr)PSend12807);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12809 = new_Send((Optr)PBlock12800, SMB_value_, 1, (Optr)PSend12808);
    Array PThreadedCode12796 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign12797, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessageExpression_0_0, (Optr)&t_send0, (Optr)PSend12799, (Optr)&t_send1, (Optr)PSend12798, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock12800, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessageExpression_0_0, (Optr)&t_send0, (Optr)PSend12806, (Optr)&t_push_variable, (Optr)VAR_arguments_0_1, (Optr)&t_send0, (Optr)PSend12807, (Optr)&t_send2, (Optr)PSend12808, (Optr)&t_send1, (Optr)PSend12809, (Optr)&t_method_return);
    Method PMethod12793 = new_Method_with(PArray12794, PArray12795, empty_Array, PThreadedCode12796, 2, PAssign12797, PSend12809);
    
    MethodClosure MC_SMB_visitMessageExpression_ = new_MethodClosure((Method)PMethod12793, Smalltalk_Compiler_Compiler_Class);
=======
    Array PArray12760 = new_Array_with(1, (Optr)VAR_aMessageExpression_0_0);
    Variable VAR_arguments_0_1 = new_Variable_named(L"arguments", 0);
    Array PArray12761 = new_Array_with(1, (Optr)VAR_arguments_0_1);
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    Symbol SMB_arguments = new_Symbol(L"arguments");
    // arguments. 
    Send PSend12765 = new_Send((Optr)VAR_aMessageExpression_0_0, SMB_arguments, 0);
    // acceptOnCollection:. 
    Send PSend12764 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend12765);
    Assign PAssign12763 = new_Assign((Optr)VAR_arguments_0_1, (Optr)PSend12764);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12767 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12769 = new_Send((Optr)VAR_aMessageExpression_0_0, SMB_selector, 0);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend12770 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)PSend12769);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend12771 = new_Send((Optr)VAR__receiver__1_0, SMB_arguments_, 1, (Optr)VAR_arguments_0_1);
    Array PThreadedCode12768 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aMessageExpression_0_0, (Optr)&t_send0, (Optr)PSend12769, (Optr)&t_send1, (Optr)PSend12770, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_arguments_0_1, (Optr)&t_send1, (Optr)PSend12771, (Optr)&t_method_return);
    Block PBlock12766 = new_Block_with(PArray12767, empty_Array, PThreadedCode12768, 2, PSend12770, PSend12771);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend12772 = new_Send((Optr)VAR_aMessageExpression_0_0, SMB_receiver, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12773 = new_Send((Optr)VAR_arguments_0_1, SMB_size, 0);
    Symbol SMB_createSendTo_sized_ = new_Symbol(L"createSendTo:sized:");
    // createSendTo:sized:. 
    Send PSend12774 = new_Send((Optr)self, SMB_createSendTo_sized_, 2, (Optr)PSend12772, (Optr)PSend12773);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12775 = new_Send((Optr)PBlock12766, SMB_value_, 1, (Optr)PSend12774);
    Array PThreadedCode12762 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign12763, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessageExpression_0_0, (Optr)&t_send0, (Optr)PSend12765, (Optr)&t_send1, (Optr)PSend12764, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock12766, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessageExpression_0_0, (Optr)&t_send0, (Optr)PSend12772, (Optr)&t_push_variable, (Optr)VAR_arguments_0_1, (Optr)&t_send0, (Optr)PSend12773, (Optr)&t_send2, (Optr)PSend12774, (Optr)&t_send1, (Optr)PSend12775, (Optr)&t_method_return);
    Method PMethod12759 = new_Method_with(PArray12760, PArray12761, empty_Array, PThreadedCode12762, 2, PAssign12763, PSend12775);
    
    MethodClosure MC_SMB_visitMessageExpression_ = new_MethodClosure((Method)PMethod12759, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitMessageExpression_, MC_SMB_visitMessageExpression_);
}


static void init_SMB_visitAssignmentExpression_() {
    Symbol SMB_visitAssignmentExpression_ = new_Symbol(L"visitAssignmentExpression:");
    Variable VAR_anAssignmentExpression_0_0 = new_Variable_named(L"anAssignmentExpression", 0);
<<<<<<< HEAD
    Array PArray12811 = new_Array_with(1, (Optr)VAR_anAssignmentExpression_0_0);
    Variable VAR_assign_0_1 = new_Variable_named(L"assign", 0);
    Array PArray12812 = new_Array_with(1, (Optr)VAR_assign_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12817 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_variable = new_Symbol(L"variable");
    // variable. 
    Send PSend12819 = new_Send((Optr)VAR_anAssignmentExpression_0_0, SMB_variable, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend12820 = new_Send((Optr)PSend12819, SMB_accept_, 1, (Optr)self);
    Symbol SMB_variable_ = new_Symbol(L"variable:");
    // variable:. 
    Send PSend12821 = new_Send((Optr)VAR__receiver__1_0, SMB_variable_, 1, (Optr)PSend12820);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend12822 = new_Send((Optr)VAR_anAssignmentExpression_0_0, SMB_expression, 0);
    // accept:. 
    Send PSend12823 = new_Send((Optr)PSend12822, SMB_accept_, 1, (Optr)self);
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    // expression:. 
    Send PSend12824 = new_Send((Optr)VAR__receiver__1_0, SMB_expression_, 1, (Optr)PSend12823);
    Array PThreadedCode12818 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anAssignmentExpression_0_0, (Optr)&t_send0, (Optr)PSend12819, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12820, (Optr)&t_send1, (Optr)PSend12821, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anAssignmentExpression_0_0, (Optr)&t_send0, (Optr)PSend12822, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12823, (Optr)&t_send1, (Optr)PSend12824, (Optr)&t_method_return);
    Block PBlock12816 = new_Block_with(PArray12817, empty_Array, PThreadedCode12818, 2, PSend12821, PSend12824);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12825 = new_Send((Optr)PAssign_classReference, SMB_new, 0);
    // value:. 
    Send PSend12815 = new_Send((Optr)PBlock12816, SMB_value_, 1, (Optr)PSend12825);
    Assign PAssign12814 = new_Assign((Optr)VAR_assign_0_1, (Optr)PSend12815);
    // variable. 
    Send PSend12826 = new_Send((Optr)VAR_assign_0_1, SMB_variable, 0);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend12827 = new_Send((Optr)PSend12826, SMB_should, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend12828 = new_Send((Optr)PSend12827, SMB_not, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend12829 = new_Send((Optr)PSend12828, SMB__equals_, 1, (Optr)nil_Const);
    // expression. 
    Send PSend12830 = new_Send((Optr)VAR_assign_0_1, SMB_expression, 0);
    // should. 
    Send PSend12831 = new_Send((Optr)PSend12830, SMB_should, 0);
    // not. 
    Send PSend12832 = new_Send((Optr)PSend12831, SMB_not, 0);
    // =. 
    Send PSend12833 = new_Send((Optr)PSend12832, SMB__equals_, 1, (Optr)nil_Const);
    Array PThreadedCode12813 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign12814, (Optr)&t_push_closure, (Optr)PBlock12816, (Optr)&t_push_class_reference, (Optr)PAssign_classReference, (Optr)&t_send0, (Optr)PSend12825, (Optr)&t_send1, (Optr)PSend12815, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_assign_0_1, (Optr)&t_send0, (Optr)PSend12826, (Optr)&t_send0, (Optr)PSend12827, (Optr)&t_send0, (Optr)PSend12828, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend12829, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_assign_0_1, (Optr)&t_send0, (Optr)PSend12830, (Optr)&t_send0, (Optr)PSend12831, (Optr)&t_send0, (Optr)PSend12832, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend12833, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_assign_0_1, (Optr)&t_method_return);
    Method PMethod12810 = new_Method_with(PArray12811, PArray12812, empty_Array, PThreadedCode12813, 4, PAssign12814, PSend12829, PSend12833, VAR_assign_0_1);
    
    MethodClosure MC_SMB_visitAssignmentExpression_ = new_MethodClosure((Method)PMethod12810, Smalltalk_Compiler_Compiler_Class);
=======
    Array PArray12777 = new_Array_with(1, (Optr)VAR_anAssignmentExpression_0_0);
    Variable VAR_assign_0_1 = new_Variable_named(L"assign", 0);
    Array PArray12778 = new_Array_with(1, (Optr)VAR_assign_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12783 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_variable = new_Symbol(L"variable");
    // variable. 
    Send PSend12785 = new_Send((Optr)VAR_anAssignmentExpression_0_0, SMB_variable, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend12786 = new_Send((Optr)PSend12785, SMB_accept_, 1, (Optr)self);
    Symbol SMB_variable_ = new_Symbol(L"variable:");
    // variable:. 
    Send PSend12787 = new_Send((Optr)VAR__receiver__1_0, SMB_variable_, 1, (Optr)PSend12786);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend12788 = new_Send((Optr)VAR_anAssignmentExpression_0_0, SMB_expression, 0);
    // accept:. 
    Send PSend12789 = new_Send((Optr)PSend12788, SMB_accept_, 1, (Optr)self);
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    // expression:. 
    Send PSend12790 = new_Send((Optr)VAR__receiver__1_0, SMB_expression_, 1, (Optr)PSend12789);
    Array PThreadedCode12784 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anAssignmentExpression_0_0, (Optr)&t_send0, (Optr)PSend12785, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12786, (Optr)&t_send1, (Optr)PSend12787, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anAssignmentExpression_0_0, (Optr)&t_send0, (Optr)PSend12788, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12789, (Optr)&t_send1, (Optr)PSend12790, (Optr)&t_method_return);
    Block PBlock12782 = new_Block_with(PArray12783, empty_Array, PThreadedCode12784, 2, PSend12787, PSend12790);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12791 = new_Send((Optr)PAssign_classReference, SMB_new, 0);
    // value:. 
    Send PSend12781 = new_Send((Optr)PBlock12782, SMB_value_, 1, (Optr)PSend12791);
    Assign PAssign12780 = new_Assign((Optr)VAR_assign_0_1, (Optr)PSend12781);
    // variable. 
    Send PSend12792 = new_Send((Optr)VAR_assign_0_1, SMB_variable, 0);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend12793 = new_Send((Optr)PSend12792, SMB_should, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend12794 = new_Send((Optr)PSend12793, SMB_not, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend12795 = new_Send((Optr)PSend12794, SMB__equals_, 1, (Optr)nil_Const);
    // expression. 
    Send PSend12796 = new_Send((Optr)VAR_assign_0_1, SMB_expression, 0);
    // should. 
    Send PSend12797 = new_Send((Optr)PSend12796, SMB_should, 0);
    // not. 
    Send PSend12798 = new_Send((Optr)PSend12797, SMB_not, 0);
    // =. 
    Send PSend12799 = new_Send((Optr)PSend12798, SMB__equals_, 1, (Optr)nil_Const);
    Array PThreadedCode12779 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign12780, (Optr)&t_push_closure, (Optr)PBlock12782, (Optr)&t_push_class_reference, (Optr)PAssign_classReference, (Optr)&t_send0, (Optr)PSend12791, (Optr)&t_send1, (Optr)PSend12781, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_assign_0_1, (Optr)&t_send0, (Optr)PSend12792, (Optr)&t_send0, (Optr)PSend12793, (Optr)&t_send0, (Optr)PSend12794, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend12795, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_assign_0_1, (Optr)&t_send0, (Optr)PSend12796, (Optr)&t_send0, (Optr)PSend12797, (Optr)&t_send0, (Optr)PSend12798, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend12799, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_assign_0_1, (Optr)&t_method_return);
    Method PMethod12776 = new_Method_with(PArray12777, PArray12778, empty_Array, PThreadedCode12779, 4, PAssign12780, PSend12795, PSend12799, VAR_assign_0_1);
    
    MethodClosure MC_SMB_visitAssignmentExpression_ = new_MethodClosure((Method)PMethod12776, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitAssignmentExpression_, MC_SMB_visitAssignmentExpression_);
}


static void init_SMB_currentCallecVariable_() {
    Symbol SMB_currentCallecVariable_ = new_Symbol(L"currentCallecVariable:");
    Variable VAR_aPinocchioVariable_0_0 = new_Variable_named(L"aPinocchioVariable", 0);
<<<<<<< HEAD
    Array PArray12835 = new_Array_with(1, (Optr)VAR_aPinocchioVariable_0_0);
    Assign PAssign12837 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_currentCallecVariable, (Optr)VAR_aPinocchioVariable_0_0);
    Array PThreadedCode12836 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign12837, (Optr)&t_push_variable, (Optr)VAR_aPinocchioVariable_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12834 = new_Method_with(PArray12835, empty_Array, empty_Array, PThreadedCode12836, 2, PAssign12837, self);
    
    MethodClosure MC_SMB_currentCallecVariable_ = new_MethodClosure((Method)PMethod12834, Smalltalk_Compiler_Compiler_Class);
=======
    Array PArray12801 = new_Array_with(1, (Optr)VAR_aPinocchioVariable_0_0);
    Assign PAssign12803 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_currentCallecVariable, (Optr)VAR_aPinocchioVariable_0_0);
    Array PThreadedCode12802 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign12803, (Optr)&t_push_variable, (Optr)VAR_aPinocchioVariable_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12800 = new_Method_with(PArray12801, empty_Array, empty_Array, PThreadedCode12802, 2, PAssign12803, self);
    
    MethodClosure MC_SMB_currentCallecVariable_ = new_MethodClosure((Method)PMethod12800, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_currentCallecVariable_, MC_SMB_currentCallecVariable_);
}


static void init_SMB_visitUnaryAnnotation_() {
    Symbol SMB_visitUnaryAnnotation_ = new_Symbol(L"visitUnaryAnnotation:");
    Variable VAR_anASTUnaryAnnotation_0_0 = new_Variable_named(L"anASTUnaryAnnotation", 0);
<<<<<<< HEAD
    Array PArray12839 = new_Array_with(1, (Optr)VAR_anASTUnaryAnnotation_0_0);
    Variable VAR_annotation_0_1 = new_Variable_named(L"annotation", 0);
    Array PArray12840 = new_Array_with(1, (Optr)VAR_annotation_0_1);
=======
    Array PArray12805 = new_Array_with(1, (Optr)VAR_anASTUnaryAnnotation_0_0);
    Variable VAR_annotation_0_1 = new_Variable_named(L"annotation", 0);
    Array PArray12806 = new_Array_with(1, (Optr)VAR_annotation_0_1);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // new:. 
<<<<<<< HEAD
    Send PSend12843 = new_Send((Optr)PAnnotation_classReference, SMB_new_, 1, (Optr)int_0_Const);
    Assign PAssign12842 = new_Assign((Optr)VAR_annotation_0_1, (Optr)PSend12843);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12844 = new_Send((Optr)VAR_anASTUnaryAnnotation_0_0, SMB_selector, 0);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend12845 = new_Send((Optr)self, SMB_visit_, 1, (Optr)PSend12844);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend12846 = new_Send((Optr)VAR_annotation_0_1, SMB_selector_, 1, (Optr)PSend12845);
    Array PThreadedCode12841 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign12842, (Optr)&t_push_class_reference, (Optr)PAnnotation_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12843, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_annotation_0_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anASTUnaryAnnotation_0_0, (Optr)&t_send0, (Optr)PSend12844, (Optr)&t_send1, (Optr)PSend12845, (Optr)&t_send1, (Optr)PSend12846, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_annotation_0_1, (Optr)&t_method_return);
    Method PMethod12838 = new_Method_with(PArray12839, PArray12840, empty_Array, PThreadedCode12841, 3, PAssign12842, PSend12846, VAR_annotation_0_1);
    
    MethodClosure MC_SMB_visitUnaryAnnotation_ = new_MethodClosure((Method)PMethod12838, Smalltalk_Compiler_Compiler_Class);
=======
    Send PSend12809 = new_Send((Optr)PAnnotation_classReference, SMB_new_, 1, (Optr)int_0_Const);
    Assign PAssign12808 = new_Assign((Optr)VAR_annotation_0_1, (Optr)PSend12809);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12810 = new_Send((Optr)VAR_anASTUnaryAnnotation_0_0, SMB_selector, 0);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend12811 = new_Send((Optr)self, SMB_visit_, 1, (Optr)PSend12810);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend12812 = new_Send((Optr)VAR_annotation_0_1, SMB_selector_, 1, (Optr)PSend12811);
    Array PThreadedCode12807 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign12808, (Optr)&t_push_class_reference, (Optr)PAnnotation_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12809, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_annotation_0_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anASTUnaryAnnotation_0_0, (Optr)&t_send0, (Optr)PSend12810, (Optr)&t_send1, (Optr)PSend12811, (Optr)&t_send1, (Optr)PSend12812, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_annotation_0_1, (Optr)&t_method_return);
    Method PMethod12804 = new_Method_with(PArray12805, PArray12806, empty_Array, PThreadedCode12807, 3, PAssign12808, PSend12812, VAR_annotation_0_1);
    
    MethodClosure MC_SMB_visitUnaryAnnotation_ = new_MethodClosure((Method)PMethod12804, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitUnaryAnnotation_, MC_SMB_visitUnaryAnnotation_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
<<<<<<< HEAD
    Super PSuper12849 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12851 = new_Send((Optr)PRootScope_classReference, SMB_new, 0);
    Assign PAssign12850 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)PSend12851);
    Assign PAssign12852 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_rootScope, (Optr)slot_Smalltalk_Compiler_Compiler_scope);
    // new. 
    Send PSend12854 = new_Send((Optr)PThreadedCompiler_classReference, SMB_new, 0);
    Assign PAssign12853 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_threadedCompiler, (Optr)PSend12854);
    Array PThreadedCode12848 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper12849, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12850, (Optr)&t_push_class_reference, (Optr)PRootScope_classReference, (Optr)&t_send0, (Optr)PSend12851, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12852, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12853, (Optr)&t_push_class_reference, (Optr)PThreadedCompiler_classReference, (Optr)&t_send0, (Optr)PSend12854, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12847 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12848, 5, PSuper12849, PAssign12850, PAssign12852, PAssign12853, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod12847, Smalltalk_Compiler_Compiler_Class);
=======
    Super PSuper12815 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12817 = new_Send((Optr)PRootScope_classReference, SMB_new, 0);
    Assign PAssign12816 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)PSend12817);
    Assign PAssign12818 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_rootScope, (Optr)slot_Smalltalk_Compiler_Compiler_scope);
    // new. 
    Send PSend12820 = new_Send((Optr)PThreadedCompiler_classReference, SMB_new, 0);
    Assign PAssign12819 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_threadedCompiler, (Optr)PSend12820);
    Array PThreadedCode12814 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper12815, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12816, (Optr)&t_push_class_reference, (Optr)PRootScope_classReference, (Optr)&t_send0, (Optr)PSend12817, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12818, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12819, (Optr)&t_push_class_reference, (Optr)PThreadedCompiler_classReference, (Optr)&t_send0, (Optr)PSend12820, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12813 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12814, 5, PSuper12815, PAssign12816, PAssign12818, PAssign12819, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod12813, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_visitUnarySelector_() {
    Symbol SMB_visitUnarySelector_ = new_Symbol(L"visitUnarySelector:");
    Variable VAR_aUnarySelector_0_0 = new_Variable_named(L"aUnarySelector", 0);
<<<<<<< HEAD
    Array PArray12856 = new_Array_with(1, (Optr)VAR_aUnarySelector_0_0);
    Symbol SMB_selectorSymbol = new_Symbol(L"selectorSymbol");
    // selectorSymbol. 
    Send PSend12858 = new_Send((Optr)VAR_aUnarySelector_0_0, SMB_selectorSymbol, 0);
    Array PThreadedCode12857 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aUnarySelector_0_0, (Optr)&t_send0, (Optr)PSend12858, (Optr)&t_method_return);
    Method PMethod12855 = new_Method_with(PArray12856, empty_Array, empty_Array, PThreadedCode12857, 1, PSend12858);
    
    MethodClosure MC_SMB_visitUnarySelector_ = new_MethodClosure((Method)PMethod12855, Smalltalk_Compiler_Compiler_Class);
=======
    Array PArray12822 = new_Array_with(1, (Optr)VAR_aUnarySelector_0_0);
    Symbol SMB_selectorSymbol = new_Symbol(L"selectorSymbol");
    // selectorSymbol. 
    Send PSend12824 = new_Send((Optr)VAR_aUnarySelector_0_0, SMB_selectorSymbol, 0);
    Array PThreadedCode12823 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aUnarySelector_0_0, (Optr)&t_send0, (Optr)PSend12824, (Optr)&t_method_return);
    Method PMethod12821 = new_Method_with(PArray12822, empty_Array, empty_Array, PThreadedCode12823, 1, PSend12824);
    
    MethodClosure MC_SMB_visitUnarySelector_ = new_MethodClosure((Method)PMethod12821, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitUnarySelector_, MC_SMB_visitUnarySelector_);
}


static void init_SMB_compile_() {
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
<<<<<<< HEAD
    Array PArray12860 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    // parse:. 
    Send PSend12862 = new_Send((Optr)self, SMB_parse_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_sourceObject_ = new_Symbol(L"sourceObject:");
    // sourceObject:. 
    Send PSend12863 = new_Send((Optr)PSend12862, SMB_sourceObject_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend12864 = new_Send((Optr)self, SMB_visit_, 1, (Optr)PSend12863);
    Array PThreadedCode12861 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend12862, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend12863, (Optr)&t_send1, (Optr)PSend12864, (Optr)&t_method_return);
    Method PMethod12859 = new_Method_with(PArray12860, empty_Array, empty_Array, PThreadedCode12861, 1, PSend12864);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod12859, Smalltalk_Compiler_Compiler_Class);
=======
    Array PArray12826 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    // parse:. 
    Send PSend12828 = new_Send((Optr)self, SMB_parse_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_sourceObject_ = new_Symbol(L"sourceObject:");
    // sourceObject:. 
    Send PSend12829 = new_Send((Optr)PSend12828, SMB_sourceObject_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend12830 = new_Send((Optr)self, SMB_visit_, 1, (Optr)PSend12829);
    Array PThreadedCode12827 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend12828, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend12829, (Optr)&t_send1, (Optr)PSend12830, (Optr)&t_method_return);
    Method PMethod12825 = new_Method_with(PArray12826, empty_Array, empty_Array, PThreadedCode12827, 1, PSend12830);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod12825, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_compile_, MC_SMB_compile_);
}


static void init_SMB_compileThreadedMethod_() {
    Symbol SMB_compileThreadedMethod_ = new_Symbol(L"compileThreadedMethod:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
<<<<<<< HEAD
    Array PArray12866 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend12868 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_threadedCompiler, SMB_compile_, 1, (Optr)VAR_aMethod_0_0);
    Array PThreadedCode12867 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_threadedCompiler, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend12868, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12865 = new_Method_with(PArray12866, empty_Array, empty_Array, PThreadedCode12867, 2, PSend12868, self);
    
    MethodClosure MC_SMB_compileThreadedMethod_ = new_MethodClosure((Method)PMethod12865, Smalltalk_Compiler_Compiler_Class);
=======
    Array PArray12832 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend12834 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_threadedCompiler, SMB_compile_, 1, (Optr)VAR_aMethod_0_0);
    Array PThreadedCode12833 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_threadedCompiler, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend12834, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12831 = new_Method_with(PArray12832, empty_Array, empty_Array, PThreadedCode12833, 2, PSend12834, self);
    
    MethodClosure MC_SMB_compileThreadedMethod_ = new_MethodClosure((Method)PMethod12831, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_compileThreadedMethod_, MC_SMB_compileThreadedMethod_);
}


static void init_SMB_pclass() {
    Symbol SMB_pclass = new_Symbol(L"pclass");
<<<<<<< HEAD
    Array PThreadedCode12870 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_method_return);
    Method PMethod12869 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12870, 1, slot_Smalltalk_Compiler_Compiler_pinocchioClass);
    
    MethodClosure MC_SMB_pclass = new_MethodClosure((Method)PMethod12869, Smalltalk_Compiler_Compiler_Class);
=======
    Array PThreadedCode12836 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_method_return);
    Method PMethod12835 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12836, 1, slot_Smalltalk_Compiler_Compiler_pinocchioClass);
    
    MethodClosure MC_SMB_pclass = new_MethodClosure((Method)PMethod12835, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_pclass, MC_SMB_pclass);
}


static void init_SMB_rootScope() {
    Symbol SMB_rootScope = new_Symbol(L"rootScope");
<<<<<<< HEAD
    Array PThreadedCode12872 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_rootScope, (Optr)&t_method_return);
    Method PMethod12871 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12872, 1, slot_Smalltalk_Compiler_Compiler_rootScope);
    
    MethodClosure MC_SMB_rootScope = new_MethodClosure((Method)PMethod12871, Smalltalk_Compiler_Compiler_Class);
=======
    Array PThreadedCode12838 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_rootScope, (Optr)&t_method_return);
    Method PMethod12837 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12838, 1, slot_Smalltalk_Compiler_Compiler_rootScope);
    
    MethodClosure MC_SMB_rootScope = new_MethodClosure((Method)PMethod12837, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_rootScope, MC_SMB_rootScope);
}


static void init_SMB_visitFloat_() {
    Symbol SMB_visitFloat_ = new_Symbol(L"visitFloat:");
    Variable VAR_anASTFloat_0_0 = new_Variable_named(L"anASTFloat", 0);
<<<<<<< HEAD
    Array PArray12874 = new_Array_with(1, (Optr)VAR_anASTFloat_0_0);
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    // asNumber. 
    Send PSend12876 = new_Send((Optr)VAR_anASTFloat_0_0, SMB_asNumber, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12877 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)PSend12876);
    Array PThreadedCode12875 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTFloat_0_0, (Optr)&t_send0, (Optr)PSend12876, (Optr)&t_send1, (Optr)PSend12877, (Optr)&t_method_return);
    Method PMethod12873 = new_Method_with(PArray12874, empty_Array, empty_Array, PThreadedCode12875, 1, PSend12877);
    
    MethodClosure MC_SMB_visitFloat_ = new_MethodClosure((Method)PMethod12873, Smalltalk_Compiler_Compiler_Class);
=======
    Array PArray12840 = new_Array_with(1, (Optr)VAR_anASTFloat_0_0);
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    // asNumber. 
    Send PSend12842 = new_Send((Optr)VAR_anASTFloat_0_0, SMB_asNumber, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12843 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)PSend12842);
    Array PThreadedCode12841 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTFloat_0_0, (Optr)&t_send0, (Optr)PSend12842, (Optr)&t_send1, (Optr)PSend12843, (Optr)&t_method_return);
    Method PMethod12839 = new_Method_with(PArray12840, empty_Array, empty_Array, PThreadedCode12841, 1, PSend12843);
    
    MethodClosure MC_SMB_visitFloat_ = new_MethodClosure((Method)PMethod12839, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitFloat_, MC_SMB_visitFloat_);
}


static void init_SMB_scope() {
    Symbol SMB_scope = new_Symbol(L"scope");
<<<<<<< HEAD
    Array PThreadedCode12879 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_method_return);
    Method PMethod12878 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12879, 1, slot_Smalltalk_Compiler_Compiler_scope);
    
    MethodClosure MC_SMB_scope = new_MethodClosure((Method)PMethod12878, Smalltalk_Compiler_Compiler_Class);
=======
    Array PThreadedCode12845 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_method_return);
    Method PMethod12844 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12845, 1, slot_Smalltalk_Compiler_Compiler_scope);
    
    MethodClosure MC_SMB_scope = new_MethodClosure((Method)PMethod12844, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_scope, MC_SMB_scope);
}


static void init_SMB_visitSuper_() {
    Symbol SMB_visitSuper_ = new_Symbol(L"visitSuper:");
    Variable VAR_anASTSuper_0_0 = new_Variable_named(L"anASTSuper", 0);
<<<<<<< HEAD
    Array PArray12881 = new_Array_with(1, (Optr)VAR_anASTSuper_0_0);
    String string_12883 = new_String(L"Should not get an AST Super");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_12883_Const = new_Constant((Optr)string_12883);
    // error:. 
    Send PSend12884 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_12883_Const);
    Array PThreadedCode12882 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_12883, (Optr)&t_send1, (Optr)PSend12884, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12880 = new_Method_with(PArray12881, empty_Array, empty_Array, PThreadedCode12882, 2, PSend12884, self);
    
    MethodClosure MC_SMB_visitSuper_ = new_MethodClosure((Method)PMethod12880, Smalltalk_Compiler_Compiler_Class);
=======
    Array PArray12847 = new_Array_with(1, (Optr)VAR_anASTSuper_0_0);
    String string_12849 = new_String(L"Should not get an AST Super");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_12849_Const = new_Constant((Optr)string_12849);
    // error:. 
    Send PSend12850 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_12849_Const);
    Array PThreadedCode12848 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_12849, (Optr)&t_send1, (Optr)PSend12850, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12846 = new_Method_with(PArray12847, empty_Array, empty_Array, PThreadedCode12848, 2, PSend12850, self);
    
    MethodClosure MC_SMB_visitSuper_ = new_MethodClosure((Method)PMethod12846, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitSuper_, MC_SMB_visitSuper_);
}


static void init_SMB_visitNumber_() {
    Symbol SMB_visitNumber_ = new_Symbol(L"visitNumber:");
    Variable VAR_anASTNumber_0_0 = new_Variable_named(L"anASTNumber", 0);
<<<<<<< HEAD
    Array PArray12886 = new_Array_with(1, (Optr)VAR_anASTNumber_0_0);
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    // asNumber. 
    Send PSend12888 = new_Send((Optr)VAR_anASTNumber_0_0, SMB_asNumber, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12889 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)PSend12888);
    Array PThreadedCode12887 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTNumber_0_0, (Optr)&t_send0, (Optr)PSend12888, (Optr)&t_send1, (Optr)PSend12889, (Optr)&t_method_return);
    Method PMethod12885 = new_Method_with(PArray12886, empty_Array, empty_Array, PThreadedCode12887, 1, PSend12889);
    
    MethodClosure MC_SMB_visitNumber_ = new_MethodClosure((Method)PMethod12885, Smalltalk_Compiler_Compiler_Class);
=======
    Array PArray12852 = new_Array_with(1, (Optr)VAR_anASTNumber_0_0);
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    // asNumber. 
    Send PSend12854 = new_Send((Optr)VAR_anASTNumber_0_0, SMB_asNumber, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12855 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)PSend12854);
    Array PThreadedCode12853 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTNumber_0_0, (Optr)&t_send0, (Optr)PSend12854, (Optr)&t_send1, (Optr)PSend12855, (Optr)&t_method_return);
    Method PMethod12851 = new_Method_with(PArray12852, empty_Array, empty_Array, PThreadedCode12853, 1, PSend12855);
    
    MethodClosure MC_SMB_visitNumber_ = new_MethodClosure((Method)PMethod12851, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitNumber_, MC_SMB_visitNumber_);
}


static void init_SMB_world() {
    Symbol SMB_world = new_Symbol(L"world");
    Symbol SMB_package = new_Symbol(L"package");
    // package. 
<<<<<<< HEAD
    Send PSend12892 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, SMB_package, 0);
    Array PThreadedCode12891 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send0, (Optr)PSend12892, (Optr)&t_method_return);
    Method PMethod12890 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12891, 1, PSend12892);
    
    MethodClosure MC_SMB_world = new_MethodClosure((Method)PMethod12890, Smalltalk_Compiler_Compiler_Class);
=======
    Send PSend12858 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, SMB_package, 0);
    Array PThreadedCode12857 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send0, (Optr)PSend12858, (Optr)&t_method_return);
    Method PMethod12856 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12857, 1, PSend12858);
    
    MethodClosure MC_SMB_world = new_MethodClosure((Method)PMethod12856, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_world, MC_SMB_world);
}


static void init_SMB_pclass_() {
    Symbol SMB_pclass_ = new_Symbol(L"pclass:");
    Variable VAR_aPinocchioClass_0_0 = new_Variable_named(L"aPinocchioClass", 0);
<<<<<<< HEAD
    Array PArray12894 = new_Array_with(1, (Optr)VAR_aPinocchioClass_0_0);
    Symbol SMB_isRootScope = new_Symbol(L"isRootScope");
    // isRootScope. 
    Send PSend12896 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_isRootScope, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_12900 = new_String(L"Current scope is not RootScope but ");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend12901 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend12902 = new_Send((Optr)PSend12901, SMB_name, 0);
    Constant string_12900_Const = new_Constant((Optr)string_12900);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend12903 = new_Send((Optr)string_12900_Const, SMB__append_, 1, (Optr)PSend12902);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend12904 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend12903);
    Array PThreadedCode12899 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_12900, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send0, (Optr)PSend12901, (Optr)&t_send0, (Optr)PSend12902, (Optr)&t_send1, (Optr)PSend12903, (Optr)&t_send1, (Optr)PSend12904, (Optr)&t_block_return);
    Block PBlock12898 = new_Block_with(empty_Array, empty_Array, PThreadedCode12899, 1, PSend12904);
    // ifFalse:. 
    Send PSend12897 = new_Send((Optr)PSend12896, SMB_ifFalse_, 1, (Optr)PBlock12898);
    Assign PAssign12905 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)VAR_aPinocchioClass_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12909 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    // pclass:. 
    Send PSend12911 = new_Send((Optr)VAR__receiver__1_0, SMB_pclass_, 1, (Optr)VAR_aPinocchioClass_0_0);
    Symbol SMB_parentScope_ = new_Symbol(L"parentScope:");
    // parentScope:. 
    Send PSend12912 = new_Send((Optr)VAR__receiver__1_0, SMB_parentScope_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_scope);
    Array PThreadedCode12910 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_send1, (Optr)PSend12911, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send1, (Optr)PSend12912, (Optr)&t_method_return);
    Block PBlock12908 = new_Block_with(PArray12909, empty_Array, PThreadedCode12910, 2, PSend12911, PSend12912);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12913 = new_Send((Optr)PClassScope_classReference, SMB_new, 0);
    // value:. 
    Send PSend12907 = new_Send((Optr)PBlock12908, SMB_value_, 1, (Optr)PSend12913);
    Assign PAssign12906 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)PSend12907);
    Array PThreadedCode12895 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send0, (Optr)PSend12896, (Optr)&t_send_ifFalse_, (Optr)PSend12897, (Optr)PBlock12898, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12905, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12906, (Optr)&t_push_closure, (Optr)PBlock12908, (Optr)&t_push_class_reference, (Optr)PClassScope_classReference, (Optr)&t_send0, (Optr)PSend12913, (Optr)&t_send1, (Optr)PSend12907, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12893 = new_Method_with(PArray12894, empty_Array, empty_Array, PThreadedCode12895, 4, PSend12897, PAssign12905, PAssign12906, self);
    
    MethodClosure MC_SMB_pclass_ = new_MethodClosure((Method)PMethod12893, Smalltalk_Compiler_Compiler_Class);
=======
    Array PArray12860 = new_Array_with(1, (Optr)VAR_aPinocchioClass_0_0);
    Symbol SMB_isRootScope = new_Symbol(L"isRootScope");
    // isRootScope. 
    Send PSend12862 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_isRootScope, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_12866 = new_String(L"Current scope is not RootScope but ");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend12867 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend12868 = new_Send((Optr)PSend12867, SMB_name, 0);
    Constant string_12866_Const = new_Constant((Optr)string_12866);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend12869 = new_Send((Optr)string_12866_Const, SMB__append_, 1, (Optr)PSend12868);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend12870 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend12869);
    Array PThreadedCode12865 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_12866, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send0, (Optr)PSend12867, (Optr)&t_send0, (Optr)PSend12868, (Optr)&t_send1, (Optr)PSend12869, (Optr)&t_send1, (Optr)PSend12870, (Optr)&t_block_return);
    Block PBlock12864 = new_Block_with(empty_Array, empty_Array, PThreadedCode12865, 1, PSend12870);
    // ifFalse:. 
    Send PSend12863 = new_Send((Optr)PSend12862, SMB_ifFalse_, 1, (Optr)PBlock12864);
    Assign PAssign12871 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)VAR_aPinocchioClass_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12875 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    // pclass:. 
    Send PSend12877 = new_Send((Optr)VAR__receiver__1_0, SMB_pclass_, 1, (Optr)VAR_aPinocchioClass_0_0);
    Symbol SMB_parentScope_ = new_Symbol(L"parentScope:");
    // parentScope:. 
    Send PSend12878 = new_Send((Optr)VAR__receiver__1_0, SMB_parentScope_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_scope);
    Array PThreadedCode12876 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_send1, (Optr)PSend12877, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send1, (Optr)PSend12878, (Optr)&t_method_return);
    Block PBlock12874 = new_Block_with(PArray12875, empty_Array, PThreadedCode12876, 2, PSend12877, PSend12878);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12879 = new_Send((Optr)PClassScope_classReference, SMB_new, 0);
    // value:. 
    Send PSend12873 = new_Send((Optr)PBlock12874, SMB_value_, 1, (Optr)PSend12879);
    Assign PAssign12872 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)PSend12873);
    Array PThreadedCode12861 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send0, (Optr)PSend12862, (Optr)&t_send_ifFalse_, (Optr)PSend12863, (Optr)PBlock12864, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12871, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12872, (Optr)&t_push_closure, (Optr)PBlock12874, (Optr)&t_push_class_reference, (Optr)PClassScope_classReference, (Optr)&t_send0, (Optr)PSend12879, (Optr)&t_send1, (Optr)PSend12873, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12859 = new_Method_with(PArray12860, empty_Array, empty_Array, PThreadedCode12861, 4, PSend12863, PAssign12871, PAssign12872, self);
    
    MethodClosure MC_SMB_pclass_ = new_MethodClosure((Method)PMethod12859, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_pclass_, MC_SMB_pclass_);
}


static void init_SMB_visitKeywordAnnotation_() {
    Symbol SMB_visitKeywordAnnotation_ = new_Symbol(L"visitKeywordAnnotation:");
    Variable VAR_anASTKeywordAnnotation_0_0 = new_Variable_named(L"anASTKeywordAnnotation", 0);
<<<<<<< HEAD
    Array PArray12915 = new_Array_with(1, (Optr)VAR_anASTKeywordAnnotation_0_0);
    Variable VAR_annotation_0_1 = new_Variable_named(L"annotation", 0);
    Variable VAR_arguments_0_2 = new_Variable_named(L"arguments", 0);
    Array PArray12916 = new_Array_with(2, (Optr)VAR_annotation_0_1, (Optr)VAR_arguments_0_2);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_arguments = new_Symbol(L"arguments");
    // arguments. 
    Send PSend12921 = new_Send((Optr)VAR_anASTKeywordAnnotation_0_0, SMB_arguments, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12920 = new_Send((Optr)PSend12921, SMB_size, 0);
    // new:. 
    Send PSend12919 = new_Send((Optr)PAnnotation_classReference, SMB_new_, 1, (Optr)PSend12920);
    Assign PAssign12918 = new_Assign((Optr)VAR_annotation_0_1, (Optr)PSend12919);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12922 = new_Send((Optr)VAR_anASTKeywordAnnotation_0_0, SMB_selector, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend12923 = new_Send((Optr)VAR_annotation_0_1, SMB_selector_, 1, (Optr)PSend12922);
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    // arguments. 
    Send PSend12926 = new_Send((Optr)VAR_anASTKeywordAnnotation_0_0, SMB_arguments, 0);
    // acceptOnCollection:. 
    Send PSend12925 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend12926);
    Assign PAssign12924 = new_Assign((Optr)VAR_arguments_0_2, (Optr)PSend12925);
    Variable VAR_object_1_0 = new_Variable_named(L"object", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray12928 = new_Array_with(2, (Optr)VAR_object_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_unwrapConstant_ = new_Symbol(L"unwrapConstant:");
    // unwrapConstant:. 
    Send PSend12930 = new_Send((Optr)self, SMB_unwrapConstant_, 1, (Optr)VAR_object_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12931 = new_Send((Optr)VAR_annotation_0_1, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)PSend12930);
    Array PThreadedCode12929 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_annotation_0_1, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_object_1_0, (Optr)&t_send1, (Optr)PSend12930, (Optr)&t_send2, (Optr)PSend12931, (Optr)&t_method_return);
    Block PBlock12927 = new_Block_with(PArray12928, empty_Array, PThreadedCode12929, 1, PSend12931);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend12932 = new_Send((Optr)VAR_arguments_0_2, SMB_withIndexDo_, 1, (Optr)PBlock12927);
    Array PThreadedCode12917 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push1, (Optr)PAssign12918, (Optr)&t_push_class_reference, (Optr)PAnnotation_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTKeywordAnnotation_0_0, (Optr)&t_send0, (Optr)PSend12921, (Optr)&t_send0, (Optr)PSend12920, (Optr)&t_send1, (Optr)PSend12919, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_annotation_0_1, (Optr)&t_push_variable, (Optr)VAR_anASTKeywordAnnotation_0_0, (Optr)&t_send0, (Optr)PSend12922, (Optr)&t_send1, (Optr)PSend12923, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12924, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anASTKeywordAnnotation_0_0, (Optr)&t_send0, (Optr)PSend12926, (Optr)&t_send1, (Optr)PSend12925, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_push_closure, (Optr)PBlock12927, (Optr)&t_send1, (Optr)PSend12932, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_annotation_0_1, (Optr)&t_method_return);
    Method PMethod12914 = new_Method_with(PArray12915, PArray12916, empty_Array, PThreadedCode12917, 5, PAssign12918, PSend12923, PAssign12924, PSend12932, VAR_annotation_0_1);
    
    MethodClosure MC_SMB_visitKeywordAnnotation_ = new_MethodClosure((Method)PMethod12914, Smalltalk_Compiler_Compiler_Class);
=======
    Array PArray12881 = new_Array_with(1, (Optr)VAR_anASTKeywordAnnotation_0_0);
    Variable VAR_annotation_0_1 = new_Variable_named(L"annotation", 0);
    Variable VAR_arguments_0_2 = new_Variable_named(L"arguments", 0);
    Array PArray12882 = new_Array_with(2, (Optr)VAR_annotation_0_1, (Optr)VAR_arguments_0_2);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_arguments = new_Symbol(L"arguments");
    // arguments. 
    Send PSend12887 = new_Send((Optr)VAR_anASTKeywordAnnotation_0_0, SMB_arguments, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12886 = new_Send((Optr)PSend12887, SMB_size, 0);
    // new:. 
    Send PSend12885 = new_Send((Optr)PAnnotation_classReference, SMB_new_, 1, (Optr)PSend12886);
    Assign PAssign12884 = new_Assign((Optr)VAR_annotation_0_1, (Optr)PSend12885);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12888 = new_Send((Optr)VAR_anASTKeywordAnnotation_0_0, SMB_selector, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend12889 = new_Send((Optr)VAR_annotation_0_1, SMB_selector_, 1, (Optr)PSend12888);
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    // arguments. 
    Send PSend12892 = new_Send((Optr)VAR_anASTKeywordAnnotation_0_0, SMB_arguments, 0);
    // acceptOnCollection:. 
    Send PSend12891 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend12892);
    Assign PAssign12890 = new_Assign((Optr)VAR_arguments_0_2, (Optr)PSend12891);
    Variable VAR_object_1_0 = new_Variable_named(L"object", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray12894 = new_Array_with(2, (Optr)VAR_object_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_unwrapConstant_ = new_Symbol(L"unwrapConstant:");
    // unwrapConstant:. 
    Send PSend12896 = new_Send((Optr)self, SMB_unwrapConstant_, 1, (Optr)VAR_object_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12897 = new_Send((Optr)VAR_annotation_0_1, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)PSend12896);
    Array PThreadedCode12895 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_annotation_0_1, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_object_1_0, (Optr)&t_send1, (Optr)PSend12896, (Optr)&t_send2, (Optr)PSend12897, (Optr)&t_method_return);
    Block PBlock12893 = new_Block_with(PArray12894, empty_Array, PThreadedCode12895, 1, PSend12897);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend12898 = new_Send((Optr)VAR_arguments_0_2, SMB_withIndexDo_, 1, (Optr)PBlock12893);
    Array PThreadedCode12883 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push1, (Optr)PAssign12884, (Optr)&t_push_class_reference, (Optr)PAnnotation_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTKeywordAnnotation_0_0, (Optr)&t_send0, (Optr)PSend12887, (Optr)&t_send0, (Optr)PSend12886, (Optr)&t_send1, (Optr)PSend12885, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_annotation_0_1, (Optr)&t_push_variable, (Optr)VAR_anASTKeywordAnnotation_0_0, (Optr)&t_send0, (Optr)PSend12888, (Optr)&t_send1, (Optr)PSend12889, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12890, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anASTKeywordAnnotation_0_0, (Optr)&t_send0, (Optr)PSend12892, (Optr)&t_send1, (Optr)PSend12891, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_push_closure, (Optr)PBlock12893, (Optr)&t_send1, (Optr)PSend12898, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_annotation_0_1, (Optr)&t_method_return);
    Method PMethod12880 = new_Method_with(PArray12881, PArray12882, empty_Array, PThreadedCode12883, 5, PAssign12884, PSend12889, PAssign12890, PSend12898, VAR_annotation_0_1);
    
    MethodClosure MC_SMB_visitKeywordAnnotation_ = new_MethodClosure((Method)PMethod12880, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitKeywordAnnotation_, MC_SMB_visitKeywordAnnotation_);
}


static void init_SMB_visitString_() {
    Symbol SMB_visitString_ = new_Symbol(L"visitString:");
    Variable VAR_anASTString_0_0 = new_Variable_named(L"anASTString", 0);
<<<<<<< HEAD
    Array PArray12934 = new_Array_with(1, (Optr)VAR_anASTString_0_0);
    Symbol SMB_string = new_Symbol(L"string");
    // string. 
    Send PSend12936 = new_Send((Optr)VAR_anASTString_0_0, SMB_string, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12937 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)PSend12936);
    Array PThreadedCode12935 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTString_0_0, (Optr)&t_send0, (Optr)PSend12936, (Optr)&t_send1, (Optr)PSend12937, (Optr)&t_method_return);
    Method PMethod12933 = new_Method_with(PArray12934, empty_Array, empty_Array, PThreadedCode12935, 1, PSend12937);
    
    MethodClosure MC_SMB_visitString_ = new_MethodClosure((Method)PMethod12933, Smalltalk_Compiler_Compiler_Class);
=======
    Array PArray12900 = new_Array_with(1, (Optr)VAR_anASTString_0_0);
    Symbol SMB_string = new_Symbol(L"string");
    // string. 
    Send PSend12902 = new_Send((Optr)VAR_anASTString_0_0, SMB_string, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12903 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)PSend12902);
    Array PThreadedCode12901 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTString_0_0, (Optr)&t_send0, (Optr)PSend12902, (Optr)&t_send1, (Optr)PSend12903, (Optr)&t_method_return);
    Method PMethod12899 = new_Method_with(PArray12900, empty_Array, empty_Array, PThreadedCode12901, 1, PSend12903);
    
    MethodClosure MC_SMB_visitString_ = new_MethodClosure((Method)PMethod12899, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitString_, MC_SMB_visitString_);
}


static void init_SMB_createReturningMethodBodyFor_() {
    Symbol SMB_createReturningMethodBodyFor_ = new_Symbol(L"createReturningMethodBodyFor:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
<<<<<<< HEAD
    Array PArray12939 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
    Variable VAR_callec_0_2 = new_Variable_named(L"callec", 0);
    Array PArray12940 = new_Array_with(2, (Optr)VAR_body_0_1, (Optr)VAR_callec_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12943 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend12946 = new_Send((Optr)VAR_aMethod_0_0, SMB_statements, 0);
    Assign PAssign12945 = new_Assign((Optr)VAR_body_0_1, (Optr)PSend12946);
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend12947 = new_Send((Optr)VAR_body_0_1, SMB_last, 0);
    Symbol SMB_isReturnExpression = new_Symbol(L"isReturnExpression");
    // isReturnExpression. 
    Send PSend12948 = new_Send((Optr)PSend12947, SMB_isReturnExpression, 0);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12952 = new_Send((Optr)ASTSelf_classReference, SMB_new, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend12953 = new_Send((Optr)VAR_body_0_1, SMB_add_, 1, (Optr)PSend12952);
    Array PThreadedCode12951 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_push_class_reference, (Optr)ASTSelf_classReference, (Optr)&t_send0, (Optr)PSend12952, (Optr)&t_send1, (Optr)PSend12953, (Optr)&t_block_return);
    Block PBlock12950 = new_Block_with(empty_Array, empty_Array, PThreadedCode12951, 1, PSend12953);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12956 = new_Send((Optr)VAR_body_0_1, SMB_size, 0);
    // last. 
    Send PSend12957 = new_Send((Optr)VAR_body_0_1, SMB_last, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend12958 = new_Send((Optr)PSend12957, SMB_expression, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12959 = new_Send((Optr)VAR_body_0_1, SMB_at_put_, 2, (Optr)PSend12956, (Optr)PSend12958);
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    // hasReturnExpression. 
    Send PSend12960 = new_Send((Optr)VAR_body_0_1, SMB_hasReturnExpression, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    // acceptOnCollection:. 
    Send PSend12964 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)VAR_body_0_1);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend12965 = new_Send((Optr)PSend12964, SMB_asArray, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12966 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12965);
    Array PThreadedCode12963 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send1, (Optr)PSend12964, (Optr)&t_send0, (Optr)PSend12965, (Optr)&t_send1, (Optr)PSend12966, (Optr)&t_block_return);
    Block PBlock12962 = new_Block_with(empty_Array, empty_Array, PThreadedCode12963, 1, PSend12966);
    // ifFalse:. 
    Send PSend12961 = new_Send((Optr)PSend12960, SMB_ifFalse_, 1, (Optr)PBlock12962);
    Array PThreadedCode12955 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send0, (Optr)PSend12956, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send0, (Optr)PSend12957, (Optr)&t_send0, (Optr)PSend12958, (Optr)&t_send2, (Optr)PSend12959, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send0, (Optr)PSend12960, (Optr)&t_send_ifFalse_, (Optr)PSend12961, (Optr)PBlock12962, (Optr)&t_block_return);
    Block PBlock12954 = new_Block_with(empty_Array, empty_Array, PThreadedCode12955, 2, PSend12959, PSend12961);
    // ifFalse:ifTrue:. 
    Send PSend12949 = new_Send((Optr)PSend12948, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock12950, (Optr)PBlock12954);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray12970 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_world = new_Symbol(L"world");
    // world. 
    Send PSend12972 = new_Send((Optr)self, SMB_world, 0);
=======
    Array PArray12905 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
    Variable VAR_callec_0_2 = new_Variable_named(L"callec", 0);
    Array PArray12906 = new_Array_with(2, (Optr)VAR_body_0_1, (Optr)VAR_callec_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12909 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend12912 = new_Send((Optr)VAR_aMethod_0_0, SMB_statements, 0);
    Assign PAssign12911 = new_Assign((Optr)VAR_body_0_1, (Optr)PSend12912);
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend12913 = new_Send((Optr)VAR_body_0_1, SMB_last, 0);
    Symbol SMB_isReturnExpression = new_Symbol(L"isReturnExpression");
    // isReturnExpression. 
    Send PSend12914 = new_Send((Optr)PSend12913, SMB_isReturnExpression, 0);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12918 = new_Send((Optr)ASTSelf_classReference, SMB_new, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend12919 = new_Send((Optr)VAR_body_0_1, SMB_add_, 1, (Optr)PSend12918);
    Array PThreadedCode12917 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_push_class_reference, (Optr)ASTSelf_classReference, (Optr)&t_send0, (Optr)PSend12918, (Optr)&t_send1, (Optr)PSend12919, (Optr)&t_block_return);
    Block PBlock12916 = new_Block_with(empty_Array, empty_Array, PThreadedCode12917, 1, PSend12919);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12922 = new_Send((Optr)VAR_body_0_1, SMB_size, 0);
    // last. 
    Send PSend12923 = new_Send((Optr)VAR_body_0_1, SMB_last, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend12924 = new_Send((Optr)PSend12923, SMB_expression, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12925 = new_Send((Optr)VAR_body_0_1, SMB_at_put_, 2, (Optr)PSend12922, (Optr)PSend12924);
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    // hasReturnExpression. 
    Send PSend12926 = new_Send((Optr)VAR_body_0_1, SMB_hasReturnExpression, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    // acceptOnCollection:. 
    Send PSend12930 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)VAR_body_0_1);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend12931 = new_Send((Optr)PSend12930, SMB_asArray, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12932 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12931);
    Array PThreadedCode12929 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send1, (Optr)PSend12930, (Optr)&t_send0, (Optr)PSend12931, (Optr)&t_send1, (Optr)PSend12932, (Optr)&t_block_return);
    Block PBlock12928 = new_Block_with(empty_Array, empty_Array, PThreadedCode12929, 1, PSend12932);
    // ifFalse:. 
    Send PSend12927 = new_Send((Optr)PSend12926, SMB_ifFalse_, 1, (Optr)PBlock12928);
    Array PThreadedCode12921 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send0, (Optr)PSend12922, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send0, (Optr)PSend12923, (Optr)&t_send0, (Optr)PSend12924, (Optr)&t_send2, (Optr)PSend12925, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send0, (Optr)PSend12926, (Optr)&t_send_ifFalse_, (Optr)PSend12927, (Optr)PBlock12928, (Optr)&t_block_return);
    Block PBlock12920 = new_Block_with(empty_Array, empty_Array, PThreadedCode12921, 2, PSend12925, PSend12927);
    // ifFalse:ifTrue:. 
    Send PSend12915 = new_Send((Optr)PSend12914, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock12916, (Optr)PBlock12920);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray12936 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_world = new_Symbol(L"world");
    // world. 
    Send PSend12938 = new_Send((Optr)self, SMB_world, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol  SMB_Runtime = new_Symbol(L"Runtime");
    Symbol SMB_ensurePackageNamed_ = new_Symbol(L"ensurePackageNamed:");
    Constant SMB_Runtime_Const = new_Constant((Optr)SMB_Runtime);
    // ensurePackageNamed:. 
<<<<<<< HEAD
    Send PSend12973 = new_Send((Optr)PSend12972, SMB_ensurePackageNamed_, 1, (Optr)SMB_Runtime_Const);
=======
    Send PSend12939 = new_Send((Optr)PSend12938, SMB_ensurePackageNamed_, 1, (Optr)SMB_Runtime_Const);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol  SMB_Continue = new_Symbol(L"Continue");
    Symbol SMB_ensureClassReference_ = new_Symbol(L"ensureClassReference:");
    Constant SMB_Continue_Const = new_Constant((Optr)SMB_Continue);
    // ensureClassReference:. 
<<<<<<< HEAD
    Send PSend12974 = new_Send((Optr)PSend12973, SMB_ensureClassReference_, 1, (Optr)SMB_Continue_Const);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend12975 = new_Send((Optr)VAR__receiver__2_0, SMB_receiver_, 1, (Optr)PSend12974);
=======
    Send PSend12940 = new_Send((Optr)PSend12939, SMB_ensureClassReference_, 1, (Optr)SMB_Continue_Const);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend12941 = new_Send((Optr)VAR__receiver__2_0, SMB_receiver_, 1, (Optr)PSend12940);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol  SMB_on_ = new_Symbol(L"on:");
    Symbol SMB_message_ = new_Symbol(L"message:");
    Constant SMB_on__Const = new_Constant((Optr)SMB_on_);
    // message:. 
<<<<<<< HEAD
    Send PSend12976 = new_Send((Optr)VAR__receiver__2_0, SMB_message_, 1, (Optr)SMB_on__Const);
    Symbol SMB_createCallecBodyFor_ = new_Symbol(L"createCallecBodyFor:");
    // createCallecBodyFor:. 
    Send PSend12977 = new_Send((Optr)self, SMB_createCallecBodyFor_, 1, (Optr)VAR_aMethod_0_0);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend12978 = new_Send((Optr)VAR__receiver__2_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend12977);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend12979 = new_Send((Optr)VAR__receiver__2_0, SMB_yourself, 0);
    Array PThreadedCode12971 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12972, (Optr)&t_push1, (Optr)SMB_Runtime, (Optr)&t_send1, (Optr)PSend12973, (Optr)&t_push1, (Optr)SMB_Continue, (Optr)&t_send1, (Optr)PSend12974, (Optr)&t_send1, (Optr)PSend12975, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)SMB_on_, (Optr)&t_send1, (Optr)PSend12976, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend12977, (Optr)&t_send2, (Optr)PSend12978, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend12979, (Optr)&t_method_return);
    Block PBlock12969 = new_Block_with(PArray12970, empty_Array, PThreadedCode12971, 4, PSend12975, PSend12976, PSend12978, PSend12979);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12980 = new_Send((Optr)PSend_classReference, SMB_new_, 1, (Optr)int_1_Const);
    // value:. 
    Send PSend12968 = new_Send((Optr)PBlock12969, SMB_value_, 1, (Optr)PSend12980);
    Assign PAssign12967 = new_Assign((Optr)VAR_callec_0_2, (Optr)PSend12968);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend12981 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_callec_0_2);
    Array PThreadedCode12944 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign12945, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend12946, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send0, (Optr)PSend12947, (Optr)&t_send0, (Optr)PSend12948, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend12949, (Optr)PBlock12950, (Optr)PBlock12954, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12967, (Optr)&t_push_closure, (Optr)PBlock12969, (Optr)&t_push_class_reference, (Optr)PSend_classReference, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12980, (Optr)&t_send1, (Optr)PSend12968, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_callec_0_2, (Optr)&t_send1, (Optr)PSend12981, (Optr)&t_method_return);
    Block PBlock12942 = new_Block_with(PArray12943, empty_Array, PThreadedCode12944, 4, PAssign12945, PSend12949, PAssign12967, PSend12981);
    // on:. 
    Send PSend12982 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12942);
    Array PThreadedCode12941 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12942, (Optr)&t_send1, (Optr)PSend12982, (Optr)&t_method_return);
    Method PMethod12938 = new_Method_with(PArray12939, PArray12940, empty_Array, PThreadedCode12941, 1, PSend12982);
    
    MethodClosure MC_SMB_createReturningMethodBodyFor_ = new_MethodClosure((Method)PMethod12938, Smalltalk_Compiler_Compiler_Class);
=======
    Send PSend12942 = new_Send((Optr)VAR__receiver__2_0, SMB_message_, 1, (Optr)SMB_on__Const);
    Symbol SMB_createCallecBodyFor_ = new_Symbol(L"createCallecBodyFor:");
    // createCallecBodyFor:. 
    Send PSend12943 = new_Send((Optr)self, SMB_createCallecBodyFor_, 1, (Optr)VAR_aMethod_0_0);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend12944 = new_Send((Optr)VAR__receiver__2_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend12943);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend12945 = new_Send((Optr)VAR__receiver__2_0, SMB_yourself, 0);
    Array PThreadedCode12937 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12938, (Optr)&t_push1, (Optr)SMB_Runtime, (Optr)&t_send1, (Optr)PSend12939, (Optr)&t_push1, (Optr)SMB_Continue, (Optr)&t_send1, (Optr)PSend12940, (Optr)&t_send1, (Optr)PSend12941, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)SMB_on_, (Optr)&t_send1, (Optr)PSend12942, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend12943, (Optr)&t_send2, (Optr)PSend12944, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend12945, (Optr)&t_method_return);
    Block PBlock12935 = new_Block_with(PArray12936, empty_Array, PThreadedCode12937, 4, PSend12941, PSend12942, PSend12944, PSend12945);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12946 = new_Send((Optr)PSend_classReference, SMB_new_, 1, (Optr)int_1_Const);
    // value:. 
    Send PSend12934 = new_Send((Optr)PBlock12935, SMB_value_, 1, (Optr)PSend12946);
    Assign PAssign12933 = new_Assign((Optr)VAR_callec_0_2, (Optr)PSend12934);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend12947 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_callec_0_2);
    Array PThreadedCode12910 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign12911, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend12912, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send0, (Optr)PSend12913, (Optr)&t_send0, (Optr)PSend12914, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend12915, (Optr)PBlock12916, (Optr)PBlock12920, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12933, (Optr)&t_push_closure, (Optr)PBlock12935, (Optr)&t_push_class_reference, (Optr)PSend_classReference, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12946, (Optr)&t_send1, (Optr)PSend12934, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_callec_0_2, (Optr)&t_send1, (Optr)PSend12947, (Optr)&t_method_return);
    Block PBlock12908 = new_Block_with(PArray12909, empty_Array, PThreadedCode12910, 4, PAssign12911, PSend12915, PAssign12933, PSend12947);
    // on:. 
    Send PSend12948 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12908);
    Array PThreadedCode12907 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12908, (Optr)&t_send1, (Optr)PSend12948, (Optr)&t_method_return);
    Method PMethod12904 = new_Method_with(PArray12905, PArray12906, empty_Array, PThreadedCode12907, 1, PSend12948);
    
    MethodClosure MC_SMB_createReturningMethodBodyFor_ = new_MethodClosure((Method)PMethod12904, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createReturningMethodBodyFor_, MC_SMB_createReturningMethodBodyFor_);
}


static void init_SMB_parse_() {
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
<<<<<<< HEAD
    Array PArray12984 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_parser = new_Symbol(L"parser");
    // parser. 
    Send PSend12986 = new_Send((Optr)self, SMB_parser, 0);
    Symbol SMB_parseMethod_ = new_Symbol(L"parseMethod:");
    // parseMethod:. 
    Send PSend12987 = new_Send((Optr)PSend12986, SMB_parseMethod_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode12985 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12986, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend12987, (Optr)&t_method_return);
    Method PMethod12983 = new_Method_with(PArray12984, empty_Array, empty_Array, PThreadedCode12985, 1, PSend12987);
    
    MethodClosure MC_SMB_parse_ = new_MethodClosure((Method)PMethod12983, Smalltalk_Compiler_Compiler_Class);
=======
    Array PArray12950 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_parser = new_Symbol(L"parser");
    // parser. 
    Send PSend12952 = new_Send((Optr)self, SMB_parser, 0);
    Symbol SMB_parseMethod_ = new_Symbol(L"parseMethod:");
    // parseMethod:. 
    Send PSend12953 = new_Send((Optr)PSend12952, SMB_parseMethod_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode12951 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12952, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend12953, (Optr)&t_method_return);
    Method PMethod12949 = new_Method_with(PArray12950, empty_Array, empty_Array, PThreadedCode12951, 1, PSend12953);
    
    MethodClosure MC_SMB_parse_ = new_MethodClosure((Method)PMethod12949, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_parse_, MC_SMB_parse_);
}


static void init_SMB_popScope() {
    Symbol SMB_popScope = new_Symbol(L"popScope");
    Symbol SMB_parentScope = new_Symbol(L"parentScope");
    // parentScope. 
<<<<<<< HEAD
    Send PSend12991 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_parentScope, 0);
    Assign PAssign12990 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)PSend12991);
    Array PThreadedCode12989 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign12990, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send0, (Optr)PSend12991, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12988 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12989, 2, PAssign12990, self);
    
    MethodClosure MC_SMB_popScope = new_MethodClosure((Method)PMethod12988, Smalltalk_Compiler_Compiler_Class);
=======
    Send PSend12957 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_parentScope, 0);
    Assign PAssign12956 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)PSend12957);
    Array PThreadedCode12955 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign12956, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send0, (Optr)PSend12957, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12954 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12955, 2, PAssign12956, self);
    
    MethodClosure MC_SMB_popScope = new_MethodClosure((Method)PMethod12954, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_popScope, MC_SMB_popScope);
}


static void init_SMB_selectorFor_() {
    Symbol SMB_selectorFor_ = new_Symbol(L"selectorFor:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
<<<<<<< HEAD
    Array PArray12993 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend12995 = new_Send((Optr)VAR_aMethod_0_0, SMB_message, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12996 = new_Send((Optr)PSend12995, SMB_selector, 0);
    Array PThreadedCode12994 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend12995, (Optr)&t_send0, (Optr)PSend12996, (Optr)&t_method_return);
    Method PMethod12992 = new_Method_with(PArray12993, empty_Array, empty_Array, PThreadedCode12994, 1, PSend12996);
    
    MethodClosure MC_SMB_selectorFor_ = new_MethodClosure((Method)PMethod12992, Smalltalk_Compiler_Compiler_Class);
=======
    Array PArray12959 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend12961 = new_Send((Optr)VAR_aMethod_0_0, SMB_message, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12962 = new_Send((Optr)PSend12961, SMB_selector, 0);
    Array PThreadedCode12960 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend12961, (Optr)&t_send0, (Optr)PSend12962, (Optr)&t_method_return);
    Method PMethod12958 = new_Method_with(PArray12959, empty_Array, empty_Array, PThreadedCode12960, 1, PSend12962);
    
    MethodClosure MC_SMB_selectorFor_ = new_MethodClosure((Method)PMethod12958, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_selectorFor_, MC_SMB_selectorFor_);
}


static void init_SMB_currentCallecVariable() {
    Symbol SMB_currentCallecVariable = new_Symbol(L"currentCallecVariable");
<<<<<<< HEAD
    Array PThreadedCode12998 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_currentCallecVariable, (Optr)&t_method_return);
    Method PMethod12997 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12998, 1, slot_Smalltalk_Compiler_Compiler_currentCallecVariable);
    
    MethodClosure MC_SMB_currentCallecVariable = new_MethodClosure((Method)PMethod12997, Smalltalk_Compiler_Compiler_Class);
=======
    Array PThreadedCode12964 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_currentCallecVariable, (Optr)&t_method_return);
    Method PMethod12963 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12964, 1, slot_Smalltalk_Compiler_Compiler_currentCallecVariable);
    
    MethodClosure MC_SMB_currentCallecVariable = new_MethodClosure((Method)PMethod12963, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_currentCallecVariable, MC_SMB_currentCallecVariable);
}


static void init_SMB_createMethod_with_() {
    Symbol SMB_createMethod_with_ = new_Symbol(L"createMethod:with:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
<<<<<<< HEAD
    Array PArray13000 = new_Array_with(2, (Optr)VAR_aMethod_0_0, (Optr)VAR_body_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray13003 = new_Array_with(1, (Optr)VAR__return__1_0);
=======
    Array PArray12966 = new_Array_with(2, (Optr)VAR_aMethod_0_0, (Optr)VAR_body_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12969 = new_Array_with(1, (Optr)VAR__return__1_0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol  SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_annotatedWith_ = new_Symbol(L"annotatedWith:");
    Constant SMB_pPrimitive_plugin__Const = new_Constant((Optr)SMB_pPrimitive_plugin_);
    // annotatedWith:. 
<<<<<<< HEAD
    Send PSend13005 = new_Send((Optr)VAR_aMethod_0_0, SMB_annotatedWith_, 1, (Optr)SMB_pPrimitive_plugin__Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_withAll_ = new_Symbol(L"withAll:");
    // withAll:. 
    Send PSend13009 = new_Send((Optr)PNativeMethod_classReference, SMB_withAll_, 1, (Optr)VAR_body_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13010 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend13009);
    Array PThreadedCode13008 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PNativeMethod_classReference, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send1, (Optr)PSend13009, (Optr)&t_send1, (Optr)PSend13010, (Optr)&t_block_return);
    Block PBlock13007 = new_Block_with(empty_Array, empty_Array, PThreadedCode13008, 1, PSend13010);
    // ifTrue:. 
    Send PSend13006 = new_Send((Optr)PSend13005, SMB_ifTrue_, 1, (Optr)PBlock13007);
    Symbol  SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Constant SMB_pPrimitive_plugin_code__Const = new_Constant((Optr)SMB_pPrimitive_plugin_code_);
    // annotatedWith:. 
    Send PSend13011 = new_Send((Optr)VAR_aMethod_0_0, SMB_annotatedWith_, 1, (Optr)SMB_pPrimitive_plugin_code__Const);
    // withAll:. 
    Send PSend13015 = new_Send((Optr)PNativeMethod_classReference, SMB_withAll_, 1, (Optr)VAR_body_0_1);
    // escape:. 
    Send PSend13016 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend13015);
    Array PThreadedCode13014 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PNativeMethod_classReference, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send1, (Optr)PSend13015, (Optr)&t_send1, (Optr)PSend13016, (Optr)&t_block_return);
    Block PBlock13013 = new_Block_with(empty_Array, empty_Array, PThreadedCode13014, 1, PSend13016);
    // ifTrue:. 
    Send PSend13012 = new_Send((Optr)PSend13011, SMB_ifTrue_, 1, (Optr)PBlock13013);
    Symbol  SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Constant SMB_pinocchioReflective__Const = new_Constant((Optr)SMB_pinocchioReflective_);
    // annotatedWith:. 
    Send PSend13017 = new_Send((Optr)VAR_aMethod_0_0, SMB_annotatedWith_, 1, (Optr)SMB_pinocchioReflective__Const);
    // withAll:. 
    Send PSend13021 = new_Send((Optr)PReflectionMethod_classReference, SMB_withAll_, 1, (Optr)VAR_body_0_1);
    // escape:. 
    Send PSend13022 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend13021);
    Array PThreadedCode13020 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PReflectionMethod_classReference, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send1, (Optr)PSend13021, (Optr)&t_send1, (Optr)PSend13022, (Optr)&t_block_return);
    Block PBlock13019 = new_Block_with(empty_Array, empty_Array, PThreadedCode13020, 1, PSend13022);
    // ifTrue:. 
    Send PSend13018 = new_Send((Optr)PSend13017, SMB_ifTrue_, 1, (Optr)PBlock13019);
    // withAll:. 
    Send PSend13023 = new_Send((Optr)PMethod_classReference, SMB_withAll_, 1, (Optr)VAR_body_0_1);
    Array PThreadedCode13004 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_push1, (Optr)SMB_pPrimitive_plugin_, (Optr)&t_send1, (Optr)PSend13005, (Optr)&t_send_ifTrue_, (Optr)PSend13006, (Optr)PBlock13007, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_push1, (Optr)SMB_pPrimitive_plugin_code_, (Optr)&t_send1, (Optr)PSend13011, (Optr)&t_send_ifTrue_, (Optr)PSend13012, (Optr)PBlock13013, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_push1, (Optr)SMB_pinocchioReflective_, (Optr)&t_send1, (Optr)PSend13017, (Optr)&t_send_ifTrue_, (Optr)PSend13018, (Optr)PBlock13019, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PMethod_classReference, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send1, (Optr)PSend13023, (Optr)&t_method_return);
    Block PBlock13002 = new_Block_with(PArray13003, empty_Array, PThreadedCode13004, 4, PSend13006, PSend13012, PSend13018, PSend13023);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13024 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock13002);
    Array PThreadedCode13001 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock13002, (Optr)&t_send1, (Optr)PSend13024, (Optr)&t_method_return);
    Method PMethod12999 = new_Method_with(PArray13000, empty_Array, empty_Array, PThreadedCode13001, 1, PSend13024);
    
    MethodClosure MC_SMB_createMethod_with_ = new_MethodClosure((Method)PMethod12999, Smalltalk_Compiler_Compiler_Class);
=======
    Send PSend12971 = new_Send((Optr)VAR_aMethod_0_0, SMB_annotatedWith_, 1, (Optr)SMB_pPrimitive_plugin__Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_withAll_ = new_Symbol(L"withAll:");
    // withAll:. 
    Send PSend12975 = new_Send((Optr)PNativeMethod_classReference, SMB_withAll_, 1, (Optr)VAR_body_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12976 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12975);
    Array PThreadedCode12974 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PNativeMethod_classReference, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send1, (Optr)PSend12975, (Optr)&t_send1, (Optr)PSend12976, (Optr)&t_block_return);
    Block PBlock12973 = new_Block_with(empty_Array, empty_Array, PThreadedCode12974, 1, PSend12976);
    // ifTrue:. 
    Send PSend12972 = new_Send((Optr)PSend12971, SMB_ifTrue_, 1, (Optr)PBlock12973);
    Symbol  SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Constant SMB_pPrimitive_plugin_code__Const = new_Constant((Optr)SMB_pPrimitive_plugin_code_);
    // annotatedWith:. 
    Send PSend12977 = new_Send((Optr)VAR_aMethod_0_0, SMB_annotatedWith_, 1, (Optr)SMB_pPrimitive_plugin_code__Const);
    // withAll:. 
    Send PSend12981 = new_Send((Optr)PNativeMethod_classReference, SMB_withAll_, 1, (Optr)VAR_body_0_1);
    // escape:. 
    Send PSend12982 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12981);
    Array PThreadedCode12980 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PNativeMethod_classReference, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send1, (Optr)PSend12981, (Optr)&t_send1, (Optr)PSend12982, (Optr)&t_block_return);
    Block PBlock12979 = new_Block_with(empty_Array, empty_Array, PThreadedCode12980, 1, PSend12982);
    // ifTrue:. 
    Send PSend12978 = new_Send((Optr)PSend12977, SMB_ifTrue_, 1, (Optr)PBlock12979);
    Symbol  SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Constant SMB_pinocchioReflective__Const = new_Constant((Optr)SMB_pinocchioReflective_);
    // annotatedWith:. 
    Send PSend12983 = new_Send((Optr)VAR_aMethod_0_0, SMB_annotatedWith_, 1, (Optr)SMB_pinocchioReflective__Const);
    // withAll:. 
    Send PSend12987 = new_Send((Optr)PReflectionMethod_classReference, SMB_withAll_, 1, (Optr)VAR_body_0_1);
    // escape:. 
    Send PSend12988 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12987);
    Array PThreadedCode12986 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PReflectionMethod_classReference, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send1, (Optr)PSend12987, (Optr)&t_send1, (Optr)PSend12988, (Optr)&t_block_return);
    Block PBlock12985 = new_Block_with(empty_Array, empty_Array, PThreadedCode12986, 1, PSend12988);
    // ifTrue:. 
    Send PSend12984 = new_Send((Optr)PSend12983, SMB_ifTrue_, 1, (Optr)PBlock12985);
    // withAll:. 
    Send PSend12989 = new_Send((Optr)PMethod_classReference, SMB_withAll_, 1, (Optr)VAR_body_0_1);
    Array PThreadedCode12970 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_push1, (Optr)SMB_pPrimitive_plugin_, (Optr)&t_send1, (Optr)PSend12971, (Optr)&t_send_ifTrue_, (Optr)PSend12972, (Optr)PBlock12973, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_push1, (Optr)SMB_pPrimitive_plugin_code_, (Optr)&t_send1, (Optr)PSend12977, (Optr)&t_send_ifTrue_, (Optr)PSend12978, (Optr)PBlock12979, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_push1, (Optr)SMB_pinocchioReflective_, (Optr)&t_send1, (Optr)PSend12983, (Optr)&t_send_ifTrue_, (Optr)PSend12984, (Optr)PBlock12985, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PMethod_classReference, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send1, (Optr)PSend12989, (Optr)&t_method_return);
    Block PBlock12968 = new_Block_with(PArray12969, empty_Array, PThreadedCode12970, 4, PSend12972, PSend12978, PSend12984, PSend12989);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12990 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12968);
    Array PThreadedCode12967 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12968, (Optr)&t_send1, (Optr)PSend12990, (Optr)&t_method_return);
    Method PMethod12965 = new_Method_with(PArray12966, empty_Array, empty_Array, PThreadedCode12967, 1, PSend12990);
    
    MethodClosure MC_SMB_createMethod_with_ = new_MethodClosure((Method)PMethod12965, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createMethod_with_, MC_SMB_createMethod_with_);
}


static void init_SMB_visitMethod_() {
    Symbol SMB_visitMethod_ = new_Symbol(L"visitMethod:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
<<<<<<< HEAD
    Array PArray13026 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
=======
    Array PArray12992 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
    Variable VAR_method_0_2 = new_Variable_named(L"method", 0);
    Variable VAR_selector_0_3 = new_Variable_named(L"selector", 0);
    Variable VAR_methodClosure_0_4 = new_Variable_named(L"methodClosure", 0);
<<<<<<< HEAD
    Array PArray13027 = new_Array_with(4, (Optr)VAR_body_0_1, (Optr)VAR_method_0_2, (Optr)VAR_selector_0_3, (Optr)VAR_methodClosure_0_4);
    Assign PAssign13029 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_currentMethod, (Optr)VAR_aMethod_0_0);
    Symbol SMB_pushScope = new_Symbol(L"pushScope");
    // pushScope. 
    Send PSend13030 = new_Send((Optr)self, SMB_pushScope, 0);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend13031 = new_Send((Optr)VAR_aMethod_0_0, SMB_message, 0);
    Symbol SMB_parameters = new_Symbol(L"parameters");
    // parameters. 
    Send PSend13032 = new_Send((Optr)PSend13031, SMB_parameters, 0);
    Symbol SMB_declareAll_ = new_Symbol(L"declareAll:");
    // declareAll:. 
    Send PSend13033 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_declareAll_, 1, (Optr)PSend13032);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend13034 = new_Send((Optr)VAR_aMethod_0_0, SMB_temporaries, 0);
    // declareAll:. 
    Send PSend13035 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_declareAll_, 1, (Optr)PSend13034);
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    // hasReturnExpression. 
    Send PSend13036 = new_Send((Optr)VAR_aMethod_0_0, SMB_hasReturnExpression, 0);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    Symbol SMB_createNonReturningMethodBodyFor_ = new_Symbol(L"createNonReturningMethodBodyFor:");
    // createNonReturningMethodBodyFor:. 
    Send PSend13041 = new_Send((Optr)self, SMB_createNonReturningMethodBodyFor_, 1, (Optr)VAR_aMethod_0_0);
    Assign PAssign13040 = new_Assign((Optr)VAR_body_0_1, (Optr)PSend13041);
    Array PThreadedCode13039 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign13040, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend13041, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock13038 = new_Block_with(empty_Array, empty_Array, PThreadedCode13039, 1, PAssign13040);
    Symbol SMB_createReturningMethodBodyFor_ = new_Symbol(L"createReturningMethodBodyFor:");
    // createReturningMethodBodyFor:. 
    Send PSend13045 = new_Send((Optr)self, SMB_createReturningMethodBodyFor_, 1, (Optr)VAR_aMethod_0_0);
    Assign PAssign13044 = new_Assign((Optr)VAR_body_0_1, (Optr)PSend13045);
    Array PThreadedCode13043 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign13044, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend13045, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock13042 = new_Block_with(empty_Array, empty_Array, PThreadedCode13043, 1, PAssign13044);
    // ifFalse:ifTrue:. 
    Send PSend13037 = new_Send((Optr)PSend13036, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock13038, (Optr)PBlock13042);
    Symbol SMB_selectorFor_ = new_Symbol(L"selectorFor:");
    // selectorFor:. 
    Send PSend13047 = new_Send((Optr)self, SMB_selectorFor_, 1, (Optr)VAR_aMethod_0_0);
    Assign PAssign13046 = new_Assign((Optr)VAR_selector_0_3, (Optr)PSend13047);
    Symbol SMB_createMethod_with_ = new_Symbol(L"createMethod:with:");
    // createMethod:with:. 
    Send PSend13049 = new_Send((Optr)self, SMB_createMethod_with_, 2, (Optr)VAR_aMethod_0_0, (Optr)VAR_body_0_1);
    Assign PAssign13048 = new_Assign((Optr)VAR_method_0_2, (Optr)PSend13049);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray13051 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    // message. 
    Send PSend13053 = new_Send((Optr)VAR_aMethod_0_0, SMB_message, 0);
    // parameters. 
    Send PSend13054 = new_Send((Optr)PSend13053, SMB_parameters, 0);
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    // acceptOnCollection:. 
    Send PSend13055 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend13054);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend13056 = new_Send((Optr)PSend13055, SMB_asArray, 0);
    // temporaries. 
    Send PSend13057 = new_Send((Optr)VAR_aMethod_0_0, SMB_temporaries, 0);
    // acceptOnCollection:. 
    Send PSend13058 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend13057);
    // asArray. 
    Send PSend13059 = new_Send((Optr)PSend13058, SMB_asArray, 0);
    Symbol SMB_params_locals_ = new_Symbol(L"params:locals:");
    // params:locals:. 
    Send PSend13060 = new_Send((Optr)VAR__receiver__1_0, SMB_params_locals_, 2, (Optr)PSend13056, (Optr)PSend13059);
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend13061 = new_Send((Optr)VAR_aMethod_0_0, SMB_annotations, 0);
    // acceptOnCollection:. 
    Send PSend13062 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend13061);
    // asArray. 
    Send PSend13063 = new_Send((Optr)PSend13062, SMB_asArray, 0);
    Symbol SMB_annotations_ = new_Symbol(L"annotations:");
    // annotations:. 
    Send PSend13064 = new_Send((Optr)VAR__receiver__1_0, SMB_annotations_, 1, (Optr)PSend13063);
    Symbol SMB_createPInfo = new_Symbol(L"createPInfo");
    // createPInfo. 
    Send PSend13065 = new_Send((Optr)self, SMB_createPInfo, 0);
    Symbol SMB_info_ = new_Symbol(L"info:");
    // info:. 
    Send PSend13066 = new_Send((Optr)VAR__receiver__1_0, SMB_info_, 1, (Optr)PSend13065);
    Array PThreadedCode13052 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend13053, (Optr)&t_send0, (Optr)PSend13054, (Optr)&t_send1, (Optr)PSend13055, (Optr)&t_send0, (Optr)PSend13056, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend13057, (Optr)&t_send1, (Optr)PSend13058, (Optr)&t_send0, (Optr)PSend13059, (Optr)&t_send2, (Optr)PSend13060, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend13061, (Optr)&t_send1, (Optr)PSend13062, (Optr)&t_send0, (Optr)PSend13063, (Optr)&t_send1, (Optr)PSend13064, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13065, (Optr)&t_send1, (Optr)PSend13066, (Optr)&t_method_return);
    Block PBlock13050 = new_Block_with(PArray13051, empty_Array, PThreadedCode13052, 3, PSend13060, PSend13064, PSend13066);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend13067 = new_Send((Optr)PBlock13050, SMB_value_, 1, (Optr)VAR_method_0_2);
    Array PArray13071 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_code_ = new_Symbol(L"code:");
    // code:. 
    Send PSend13073 = new_Send((Optr)VAR__receiver__1_0, SMB_code_, 1, (Optr)VAR_method_0_2);
    Symbol SMB_host_ = new_Symbol(L"host:");
    // host:. 
    Send PSend13074 = new_Send((Optr)VAR__receiver__1_0, SMB_host_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend13075 = new_Send((Optr)VAR__receiver__1_0, SMB_selector_, 1, (Optr)VAR_selector_0_3);
    Array PThreadedCode13072 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send1, (Optr)PSend13073, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send1, (Optr)PSend13074, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_selector_0_3, (Optr)&t_send1, (Optr)PSend13075, (Optr)&t_method_return);
    Block PBlock13070 = new_Block_with(PArray13071, empty_Array, PThreadedCode13072, 3, PSend13073, PSend13074, PSend13075);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13076 = new_Send((Optr)PMethodClosure_classReference, SMB_new, 0);
    // value:. 
    Send PSend13069 = new_Send((Optr)PBlock13070, SMB_value_, 1, (Optr)PSend13076);
    Assign PAssign13068 = new_Assign((Optr)VAR_methodClosure_0_4, (Optr)PSend13069);
    Symbol SMB_popScope = new_Symbol(L"popScope");
    // popScope. 
    Send PSend13077 = new_Send((Optr)self, SMB_popScope, 0);
    Symbol SMB_compileThreadedMethod_ = new_Symbol(L"compileThreadedMethod:");
    // compileThreadedMethod:. 
    Send PSend13078 = new_Send((Optr)self, SMB_compileThreadedMethod_, 1, (Optr)VAR_method_0_2);
    Array PThreadedCode13028 = instantiate_Array_with(ThreadedCode_Class, 0, 91, (Optr)&t_push1, (Optr)PAssign13029, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13030, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend13031, (Optr)&t_send0, (Optr)PSend13032, (Optr)&t_send1, (Optr)PSend13033, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend13034, (Optr)&t_send1, (Optr)PSend13035, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend13036, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend13037, (Optr)PBlock13038, (Optr)PBlock13042, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13046, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend13047, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13048, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send2, (Optr)PSend13049, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock13050, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send1, (Optr)PSend13067, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13068, (Optr)&t_push_closure, (Optr)PBlock13070, (Optr)&t_push_class_reference, (Optr)PMethodClosure_classReference, (Optr)&t_send0, (Optr)PSend13076, (Optr)&t_send1, (Optr)PSend13069, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13077, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send1, (Optr)PSend13078, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_methodClosure_0_4, (Optr)&t_method_return);
    Method PMethod13025 = new_Method_with(PArray13026, PArray13027, empty_Array, PThreadedCode13028, 12, PAssign13029, PSend13030, PSend13033, PSend13035, PSend13037, PAssign13046, PAssign13048, PSend13067, PAssign13068, PSend13077, PSend13078, VAR_methodClosure_0_4);
    
    MethodClosure MC_SMB_visitMethod_ = new_MethodClosure((Method)PMethod13025, Smalltalk_Compiler_Compiler_Class);
=======
    Array PArray12993 = new_Array_with(4, (Optr)VAR_body_0_1, (Optr)VAR_method_0_2, (Optr)VAR_selector_0_3, (Optr)VAR_methodClosure_0_4);
    Assign PAssign12995 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_currentMethod, (Optr)VAR_aMethod_0_0);
    Symbol SMB_pushScope = new_Symbol(L"pushScope");
    // pushScope. 
    Send PSend12996 = new_Send((Optr)self, SMB_pushScope, 0);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend12997 = new_Send((Optr)VAR_aMethod_0_0, SMB_message, 0);
    Symbol SMB_parameters = new_Symbol(L"parameters");
    // parameters. 
    Send PSend12998 = new_Send((Optr)PSend12997, SMB_parameters, 0);
    Symbol SMB_declareAll_ = new_Symbol(L"declareAll:");
    // declareAll:. 
    Send PSend12999 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_declareAll_, 1, (Optr)PSend12998);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend13000 = new_Send((Optr)VAR_aMethod_0_0, SMB_temporaries, 0);
    // declareAll:. 
    Send PSend13001 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_declareAll_, 1, (Optr)PSend13000);
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    // hasReturnExpression. 
    Send PSend13002 = new_Send((Optr)VAR_aMethod_0_0, SMB_hasReturnExpression, 0);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    Symbol SMB_createNonReturningMethodBodyFor_ = new_Symbol(L"createNonReturningMethodBodyFor:");
    // createNonReturningMethodBodyFor:. 
    Send PSend13007 = new_Send((Optr)self, SMB_createNonReturningMethodBodyFor_, 1, (Optr)VAR_aMethod_0_0);
    Assign PAssign13006 = new_Assign((Optr)VAR_body_0_1, (Optr)PSend13007);
    Array PThreadedCode13005 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign13006, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend13007, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock13004 = new_Block_with(empty_Array, empty_Array, PThreadedCode13005, 1, PAssign13006);
    Symbol SMB_createReturningMethodBodyFor_ = new_Symbol(L"createReturningMethodBodyFor:");
    // createReturningMethodBodyFor:. 
    Send PSend13011 = new_Send((Optr)self, SMB_createReturningMethodBodyFor_, 1, (Optr)VAR_aMethod_0_0);
    Assign PAssign13010 = new_Assign((Optr)VAR_body_0_1, (Optr)PSend13011);
    Array PThreadedCode13009 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign13010, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend13011, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock13008 = new_Block_with(empty_Array, empty_Array, PThreadedCode13009, 1, PAssign13010);
    // ifFalse:ifTrue:. 
    Send PSend13003 = new_Send((Optr)PSend13002, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock13004, (Optr)PBlock13008);
    Symbol SMB_selectorFor_ = new_Symbol(L"selectorFor:");
    // selectorFor:. 
    Send PSend13013 = new_Send((Optr)self, SMB_selectorFor_, 1, (Optr)VAR_aMethod_0_0);
    Assign PAssign13012 = new_Assign((Optr)VAR_selector_0_3, (Optr)PSend13013);
    Symbol SMB_createMethod_with_ = new_Symbol(L"createMethod:with:");
    // createMethod:with:. 
    Send PSend13015 = new_Send((Optr)self, SMB_createMethod_with_, 2, (Optr)VAR_aMethod_0_0, (Optr)VAR_body_0_1);
    Assign PAssign13014 = new_Assign((Optr)VAR_method_0_2, (Optr)PSend13015);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray13017 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    // message. 
    Send PSend13019 = new_Send((Optr)VAR_aMethod_0_0, SMB_message, 0);
    // parameters. 
    Send PSend13020 = new_Send((Optr)PSend13019, SMB_parameters, 0);
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    // acceptOnCollection:. 
    Send PSend13021 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend13020);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend13022 = new_Send((Optr)PSend13021, SMB_asArray, 0);
    // temporaries. 
    Send PSend13023 = new_Send((Optr)VAR_aMethod_0_0, SMB_temporaries, 0);
    // acceptOnCollection:. 
    Send PSend13024 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend13023);
    // asArray. 
    Send PSend13025 = new_Send((Optr)PSend13024, SMB_asArray, 0);
    Symbol SMB_params_locals_ = new_Symbol(L"params:locals:");
    // params:locals:. 
    Send PSend13026 = new_Send((Optr)VAR__receiver__1_0, SMB_params_locals_, 2, (Optr)PSend13022, (Optr)PSend13025);
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend13027 = new_Send((Optr)VAR_aMethod_0_0, SMB_annotations, 0);
    // acceptOnCollection:. 
    Send PSend13028 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend13027);
    // asArray. 
    Send PSend13029 = new_Send((Optr)PSend13028, SMB_asArray, 0);
    Symbol SMB_annotations_ = new_Symbol(L"annotations:");
    // annotations:. 
    Send PSend13030 = new_Send((Optr)VAR__receiver__1_0, SMB_annotations_, 1, (Optr)PSend13029);
    Symbol SMB_createPInfo = new_Symbol(L"createPInfo");
    // createPInfo. 
    Send PSend13031 = new_Send((Optr)self, SMB_createPInfo, 0);
    Symbol SMB_info_ = new_Symbol(L"info:");
    // info:. 
    Send PSend13032 = new_Send((Optr)VAR__receiver__1_0, SMB_info_, 1, (Optr)PSend13031);
    Array PThreadedCode13018 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend13019, (Optr)&t_send0, (Optr)PSend13020, (Optr)&t_send1, (Optr)PSend13021, (Optr)&t_send0, (Optr)PSend13022, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend13023, (Optr)&t_send1, (Optr)PSend13024, (Optr)&t_send0, (Optr)PSend13025, (Optr)&t_send2, (Optr)PSend13026, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend13027, (Optr)&t_send1, (Optr)PSend13028, (Optr)&t_send0, (Optr)PSend13029, (Optr)&t_send1, (Optr)PSend13030, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13031, (Optr)&t_send1, (Optr)PSend13032, (Optr)&t_method_return);
    Block PBlock13016 = new_Block_with(PArray13017, empty_Array, PThreadedCode13018, 3, PSend13026, PSend13030, PSend13032);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend13033 = new_Send((Optr)PBlock13016, SMB_value_, 1, (Optr)VAR_method_0_2);
    Array PArray13037 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_code_ = new_Symbol(L"code:");
    // code:. 
    Send PSend13039 = new_Send((Optr)VAR__receiver__1_0, SMB_code_, 1, (Optr)VAR_method_0_2);
    Symbol SMB_host_ = new_Symbol(L"host:");
    // host:. 
    Send PSend13040 = new_Send((Optr)VAR__receiver__1_0, SMB_host_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend13041 = new_Send((Optr)VAR__receiver__1_0, SMB_selector_, 1, (Optr)VAR_selector_0_3);
    Array PThreadedCode13038 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send1, (Optr)PSend13039, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send1, (Optr)PSend13040, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_selector_0_3, (Optr)&t_send1, (Optr)PSend13041, (Optr)&t_method_return);
    Block PBlock13036 = new_Block_with(PArray13037, empty_Array, PThreadedCode13038, 3, PSend13039, PSend13040, PSend13041);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13042 = new_Send((Optr)PMethodClosure_classReference, SMB_new, 0);
    // value:. 
    Send PSend13035 = new_Send((Optr)PBlock13036, SMB_value_, 1, (Optr)PSend13042);
    Assign PAssign13034 = new_Assign((Optr)VAR_methodClosure_0_4, (Optr)PSend13035);
    Symbol SMB_popScope = new_Symbol(L"popScope");
    // popScope. 
    Send PSend13043 = new_Send((Optr)self, SMB_popScope, 0);
    Symbol SMB_compileThreadedMethod_ = new_Symbol(L"compileThreadedMethod:");
    // compileThreadedMethod:. 
    Send PSend13044 = new_Send((Optr)self, SMB_compileThreadedMethod_, 1, (Optr)VAR_method_0_2);
    Array PThreadedCode12994 = instantiate_Array_with(ThreadedCode_Class, 0, 91, (Optr)&t_push1, (Optr)PAssign12995, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12996, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend12997, (Optr)&t_send0, (Optr)PSend12998, (Optr)&t_send1, (Optr)PSend12999, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend13000, (Optr)&t_send1, (Optr)PSend13001, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend13002, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend13003, (Optr)PBlock13004, (Optr)PBlock13008, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13012, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend13013, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13014, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send2, (Optr)PSend13015, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock13016, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send1, (Optr)PSend13033, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13034, (Optr)&t_push_closure, (Optr)PBlock13036, (Optr)&t_push_class_reference, (Optr)PMethodClosure_classReference, (Optr)&t_send0, (Optr)PSend13042, (Optr)&t_send1, (Optr)PSend13035, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13043, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send1, (Optr)PSend13044, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_methodClosure_0_4, (Optr)&t_method_return);
    Method PMethod12991 = new_Method_with(PArray12992, PArray12993, empty_Array, PThreadedCode12994, 12, PAssign12995, PSend12996, PSend12999, PSend13001, PSend13003, PAssign13012, PAssign13014, PSend13033, PAssign13034, PSend13043, PSend13044, VAR_methodClosure_0_4);
    
    MethodClosure MC_SMB_visitMethod_ = new_MethodClosure((Method)PMethod12991, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitMethod_, MC_SMB_visitMethod_);
}


static void init_SMB_createNonReturningMethodBodyFor_() {
    Symbol SMB_createNonReturningMethodBodyFor_ = new_Symbol(L"createNonReturningMethodBodyFor:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
<<<<<<< HEAD
    Array PArray13080 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Variable VAR_statements_0_1 = new_Variable_named(L"statements", 0);
    Array PArray13081 = new_Array_with(1, (Optr)VAR_statements_0_1);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13084 = new_Send((Optr)VAR_aMethod_0_0, SMB_statements, 0);
    Assign PAssign13083 = new_Assign((Optr)VAR_statements_0_1, (Optr)PSend13084);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13085 = new_Send((Optr)ASTSelf_classReference, SMB_new, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend13086 = new_Send((Optr)VAR_statements_0_1, SMB_add_, 1, (Optr)PSend13085);
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    // acceptOnCollection:. 
    Send PSend13087 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)VAR_statements_0_1);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend13088 = new_Send((Optr)PSend13087, SMB_asArray, 0);
    Array PThreadedCode13082 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign13083, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend13084, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_statements_0_1, (Optr)&t_push_class_reference, (Optr)ASTSelf_classReference, (Optr)&t_send0, (Optr)PSend13085, (Optr)&t_send1, (Optr)PSend13086, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_statements_0_1, (Optr)&t_send1, (Optr)PSend13087, (Optr)&t_send0, (Optr)PSend13088, (Optr)&t_method_return);
    Method PMethod13079 = new_Method_with(PArray13080, PArray13081, empty_Array, PThreadedCode13082, 3, PAssign13083, PSend13086, PSend13088);
    
    MethodClosure MC_SMB_createNonReturningMethodBodyFor_ = new_MethodClosure((Method)PMethod13079, Smalltalk_Compiler_Compiler_Class);
=======
    Array PArray13046 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Variable VAR_statements_0_1 = new_Variable_named(L"statements", 0);
    Array PArray13047 = new_Array_with(1, (Optr)VAR_statements_0_1);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13050 = new_Send((Optr)VAR_aMethod_0_0, SMB_statements, 0);
    Assign PAssign13049 = new_Assign((Optr)VAR_statements_0_1, (Optr)PSend13050);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13051 = new_Send((Optr)ASTSelf_classReference, SMB_new, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend13052 = new_Send((Optr)VAR_statements_0_1, SMB_add_, 1, (Optr)PSend13051);
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    // acceptOnCollection:. 
    Send PSend13053 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)VAR_statements_0_1);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend13054 = new_Send((Optr)PSend13053, SMB_asArray, 0);
    Array PThreadedCode13048 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign13049, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend13050, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_statements_0_1, (Optr)&t_push_class_reference, (Optr)ASTSelf_classReference, (Optr)&t_send0, (Optr)PSend13051, (Optr)&t_send1, (Optr)PSend13052, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_statements_0_1, (Optr)&t_send1, (Optr)PSend13053, (Optr)&t_send0, (Optr)PSend13054, (Optr)&t_method_return);
    Method PMethod13045 = new_Method_with(PArray13046, PArray13047, empty_Array, PThreadedCode13048, 3, PAssign13049, PSend13052, PSend13054);
    
    MethodClosure MC_SMB_createNonReturningMethodBodyFor_ = new_MethodClosure((Method)PMethod13045, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createNonReturningMethodBodyFor_, MC_SMB_createNonReturningMethodBodyFor_);
}


static void init_SMB_visitSymbol_() {
    Symbol SMB_visitSymbol_ = new_Symbol(L"visitSymbol:");
    Variable VAR_anASTSymbol_0_0 = new_Variable_named(L"anASTSymbol", 0);
<<<<<<< HEAD
    Array PArray13090 = new_Array_with(1, (Optr)VAR_anASTSymbol_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend13092 = new_Send((Optr)VAR_anASTSymbol_0_0, SMB_asSymbol, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend13093 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)PSend13092);
    Array PThreadedCode13091 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTSymbol_0_0, (Optr)&t_send0, (Optr)PSend13092, (Optr)&t_send1, (Optr)PSend13093, (Optr)&t_method_return);
    Method PMethod13089 = new_Method_with(PArray13090, empty_Array, empty_Array, PThreadedCode13091, 1, PSend13093);
    
    MethodClosure MC_SMB_visitSymbol_ = new_MethodClosure((Method)PMethod13089, Smalltalk_Compiler_Compiler_Class);
=======
    Array PArray13056 = new_Array_with(1, (Optr)VAR_anASTSymbol_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend13058 = new_Send((Optr)VAR_anASTSymbol_0_0, SMB_asSymbol, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend13059 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)PSend13058);
    Array PThreadedCode13057 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTSymbol_0_0, (Optr)&t_send0, (Optr)PSend13058, (Optr)&t_send1, (Optr)PSend13059, (Optr)&t_method_return);
    Method PMethod13055 = new_Method_with(PArray13056, empty_Array, empty_Array, PThreadedCode13057, 1, PSend13059);
    
    MethodClosure MC_SMB_visitSymbol_ = new_MethodClosure((Method)PMethod13055, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitSymbol_, MC_SMB_visitSymbol_);
}


static void init_SMB_createSendTo_() {
    Symbol SMB_createSendTo_ = new_Symbol(L"createSendTo:");
    Variable VAR_receiver_0_0 = new_Variable_named(L"receiver", 0);
<<<<<<< HEAD
    Array PArray13095 = new_Array_with(1, (Optr)VAR_receiver_0_0);
=======
    Array PArray13061 = new_Array_with(1, (Optr)VAR_receiver_0_0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_createSendTo_sized_ = new_Symbol(L"createSendTo:sized:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // createSendTo:sized:. 
<<<<<<< HEAD
    Send PSend13097 = new_Send((Optr)self, SMB_createSendTo_sized_, 2, (Optr)VAR_receiver_0_0, (Optr)int_0_Const);
    Array PThreadedCode13096 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend13097, (Optr)&t_method_return);
    Method PMethod13094 = new_Method_with(PArray13095, empty_Array, empty_Array, PThreadedCode13096, 1, PSend13097);
    
    MethodClosure MC_SMB_createSendTo_ = new_MethodClosure((Method)PMethod13094, Smalltalk_Compiler_Compiler_Class);
=======
    Send PSend13063 = new_Send((Optr)self, SMB_createSendTo_sized_, 2, (Optr)VAR_receiver_0_0, (Optr)int_0_Const);
    Array PThreadedCode13062 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend13063, (Optr)&t_method_return);
    Method PMethod13060 = new_Method_with(PArray13061, empty_Array, empty_Array, PThreadedCode13062, 1, PSend13063);
    
    MethodClosure MC_SMB_createSendTo_ = new_MethodClosure((Method)PMethod13060, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createSendTo_, MC_SMB_createSendTo_);
}


static void init_SMB_createCallecBodyFor_() {
    Symbol SMB_createCallecBodyFor_ = new_Symbol(L"createCallecBodyFor:");
    Variable VAR_anASTMethod_0_0 = new_Variable_named(L"anASTMethod", 0);
<<<<<<< HEAD
    Array PArray13099 = new_Array_with(1, (Optr)VAR_anASTMethod_0_0);
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
    Variable VAR_statements_0_2 = new_Variable_named(L"statements", 0);
    Variable VAR_statement_0_3 = new_Variable_named(L"statement", 0);
    Array PArray13100 = new_Array_with(3, (Optr)VAR_body_0_1, (Optr)VAR_statements_0_2, (Optr)VAR_statement_0_3);
    Symbol SMB_pushScope = new_Symbol(L"pushScope");
    // pushScope. 
    Send PSend13102 = new_Send((Optr)self, SMB_pushScope, 0);
    Symbol  SMB___return__ = new_Symbol(L"_return_");
    Symbol SMB_depth = new_Symbol(L"depth");
    // depth. 
    Send PSend13103 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_depth, 0);
    Symbol SMB_named_at_ = new_Symbol(L"named:at:");
    Constant SMB___return___Const = new_Constant((Optr)SMB___return__);
    // named:at:. 
    Send PSend13104 = new_Send((Optr)PVariable_classReference, SMB_named_at_, 2, (Optr)SMB___return___Const, (Optr)PSend13103);
    Symbol SMB_currentCallecVariable_ = new_Symbol(L"currentCallecVariable:");
    // currentCallecVariable:. 
    Send PSend13105 = new_Send((Optr)self, SMB_currentCallecVariable_, 1, (Optr)PSend13104);
    Symbol SMB_createBlock_ = new_Symbol(L"createBlock:");
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13109 = new_Send((Optr)VAR_anASTMethod_0_0, SMB_statements, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend13108 = new_Send((Optr)PSend13109, SMB_size, 0);
    // createBlock:. 
    Send PSend13107 = new_Send((Optr)self, SMB_createBlock_, 1, (Optr)PSend13108);
    Assign PAssign13106 = new_Assign((Optr)VAR_body_0_1, (Optr)PSend13107);
    Symbol SMB_currentCallecVariable = new_Symbol(L"currentCallecVariable");
    // currentCallecVariable. 
    Send PSend13110 = new_Send((Optr)self, SMB_currentCallecVariable, 0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend13111 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)PSend13110);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13112 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Symbol SMB_params_locals_ = new_Symbol(L"params:locals:");
    // params:locals:. 
    Send PSend13113 = new_Send((Optr)VAR_body_0_1, SMB_params_locals_, 2, (Optr)PSend13111, (Optr)PSend13112);
    // statements. 
    Send PSend13115 = new_Send((Optr)VAR_anASTMethod_0_0, SMB_statements, 0);
    Assign PAssign13114 = new_Assign((Optr)VAR_statements_0_2, (Optr)PSend13115);
    // size. 
    Send PSend13116 = new_Send((Optr)VAR_statements_0_2, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray13118 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend13122 = new_Send((Optr)VAR_statements_0_2, SMB_at_, 1, (Optr)VAR_index_1_0);
    // visit:. 
    Send PSend13121 = new_Send((Optr)self, SMB_visit_, 1, (Optr)PSend13122);
    Assign PAssign13120 = new_Assign((Optr)VAR_statement_0_3, (Optr)PSend13121);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend13123 = new_Send((Optr)VAR_body_0_1, SMB_at_put_, 2, (Optr)VAR_index_1_0, (Optr)VAR_statement_0_3);
    Array PThreadedCode13119 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign13120, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_statements_0_2, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend13122, (Optr)&t_send1, (Optr)PSend13121, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_push_variable, (Optr)VAR_statement_0_3, (Optr)&t_send2, (Optr)PSend13123, (Optr)&t_method_return);
    Block PBlock13117 = new_Block_with(PArray13118, empty_Array, PThreadedCode13119, 2, PAssign13120, PSend13123);
=======
    Array PArray13065 = new_Array_with(1, (Optr)VAR_anASTMethod_0_0);
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
    Variable VAR_statements_0_2 = new_Variable_named(L"statements", 0);
    Variable VAR_statement_0_3 = new_Variable_named(L"statement", 0);
    Array PArray13066 = new_Array_with(3, (Optr)VAR_body_0_1, (Optr)VAR_statements_0_2, (Optr)VAR_statement_0_3);
    Symbol SMB_pushScope = new_Symbol(L"pushScope");
    // pushScope. 
    Send PSend13068 = new_Send((Optr)self, SMB_pushScope, 0);
    Symbol  SMB___return__ = new_Symbol(L"_return_");
    Symbol SMB_depth = new_Symbol(L"depth");
    // depth. 
    Send PSend13069 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_depth, 0);
    Symbol SMB_named_at_ = new_Symbol(L"named:at:");
    Constant SMB___return___Const = new_Constant((Optr)SMB___return__);
    // named:at:. 
    Send PSend13070 = new_Send((Optr)PVariable_classReference, SMB_named_at_, 2, (Optr)SMB___return___Const, (Optr)PSend13069);
    Symbol SMB_currentCallecVariable_ = new_Symbol(L"currentCallecVariable:");
    // currentCallecVariable:. 
    Send PSend13071 = new_Send((Optr)self, SMB_currentCallecVariable_, 1, (Optr)PSend13070);
    Symbol SMB_createBlock_ = new_Symbol(L"createBlock:");
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13075 = new_Send((Optr)VAR_anASTMethod_0_0, SMB_statements, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend13074 = new_Send((Optr)PSend13075, SMB_size, 0);
    // createBlock:. 
    Send PSend13073 = new_Send((Optr)self, SMB_createBlock_, 1, (Optr)PSend13074);
    Assign PAssign13072 = new_Assign((Optr)VAR_body_0_1, (Optr)PSend13073);
    Symbol SMB_currentCallecVariable = new_Symbol(L"currentCallecVariable");
    // currentCallecVariable. 
    Send PSend13076 = new_Send((Optr)self, SMB_currentCallecVariable, 0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend13077 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)PSend13076);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13078 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Symbol SMB_params_locals_ = new_Symbol(L"params:locals:");
    // params:locals:. 
    Send PSend13079 = new_Send((Optr)VAR_body_0_1, SMB_params_locals_, 2, (Optr)PSend13077, (Optr)PSend13078);
    // statements. 
    Send PSend13081 = new_Send((Optr)VAR_anASTMethod_0_0, SMB_statements, 0);
    Assign PAssign13080 = new_Assign((Optr)VAR_statements_0_2, (Optr)PSend13081);
    // size. 
    Send PSend13082 = new_Send((Optr)VAR_statements_0_2, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray13084 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend13088 = new_Send((Optr)VAR_statements_0_2, SMB_at_, 1, (Optr)VAR_index_1_0);
    // visit:. 
    Send PSend13087 = new_Send((Optr)self, SMB_visit_, 1, (Optr)PSend13088);
    Assign PAssign13086 = new_Assign((Optr)VAR_statement_0_3, (Optr)PSend13087);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend13089 = new_Send((Optr)VAR_body_0_1, SMB_at_put_, 2, (Optr)VAR_index_1_0, (Optr)VAR_statement_0_3);
    Array PThreadedCode13085 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign13086, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_statements_0_2, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend13088, (Optr)&t_send1, (Optr)PSend13087, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_push_variable, (Optr)VAR_statement_0_3, (Optr)&t_send2, (Optr)PSend13089, (Optr)&t_method_return);
    Block PBlock13083 = new_Block_with(PArray13084, empty_Array, PThreadedCode13085, 2, PAssign13086, PSend13089);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
<<<<<<< HEAD
    Send PSend13124 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend13116, (Optr)PBlock13117);
    Symbol SMB_popScope = new_Symbol(L"popScope");
    // popScope. 
    Send PSend13125 = new_Send((Optr)self, SMB_popScope, 0);
    Array PThreadedCode13101 = instantiate_Array_with(ThreadedCode_Class, 0, 73, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13102, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PVariable_classReference, (Optr)&t_push1, (Optr)SMB___return__, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send0, (Optr)PSend13103, (Optr)&t_send2, (Optr)PSend13104, (Optr)&t_send1, (Optr)PSend13105, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13106, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anASTMethod_0_0, (Optr)&t_send0, (Optr)PSend13109, (Optr)&t_send0, (Optr)PSend13108, (Optr)&t_send1, (Optr)PSend13107, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13110, (Optr)&t_send1, (Optr)PSend13111, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend13112, (Optr)&t_send2, (Optr)PSend13113, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13114, (Optr)&t_push_variable, (Optr)VAR_anASTMethod_0_0, (Optr)&t_send0, (Optr)PSend13115, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_statements_0_2, (Optr)&t_send0, (Optr)PSend13116, (Optr)&t_push_closure, (Optr)PBlock13117, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend13124, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13125, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_method_return);
    Method PMethod13098 = new_Method_with(PArray13099, PArray13100, empty_Array, PThreadedCode13101, 8, PSend13102, PSend13105, PAssign13106, PSend13113, PAssign13114, PSend13124, PSend13125, VAR_body_0_1);
    
    MethodClosure MC_SMB_createCallecBodyFor_ = new_MethodClosure((Method)PMethod13098, Smalltalk_Compiler_Compiler_Class);
=======
    Send PSend13090 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend13082, (Optr)PBlock13083);
    Symbol SMB_popScope = new_Symbol(L"popScope");
    // popScope. 
    Send PSend13091 = new_Send((Optr)self, SMB_popScope, 0);
    Array PThreadedCode13067 = instantiate_Array_with(ThreadedCode_Class, 0, 73, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13068, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PVariable_classReference, (Optr)&t_push1, (Optr)SMB___return__, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send0, (Optr)PSend13069, (Optr)&t_send2, (Optr)PSend13070, (Optr)&t_send1, (Optr)PSend13071, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13072, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anASTMethod_0_0, (Optr)&t_send0, (Optr)PSend13075, (Optr)&t_send0, (Optr)PSend13074, (Optr)&t_send1, (Optr)PSend13073, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13076, (Optr)&t_send1, (Optr)PSend13077, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend13078, (Optr)&t_send2, (Optr)PSend13079, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13080, (Optr)&t_push_variable, (Optr)VAR_anASTMethod_0_0, (Optr)&t_send0, (Optr)PSend13081, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_statements_0_2, (Optr)&t_send0, (Optr)PSend13082, (Optr)&t_push_closure, (Optr)PBlock13083, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend13090, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13091, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_method_return);
    Method PMethod13064 = new_Method_with(PArray13065, PArray13066, empty_Array, PThreadedCode13067, 8, PSend13068, PSend13071, PAssign13072, PSend13079, PAssign13080, PSend13090, PSend13091, VAR_body_0_1);
    
    MethodClosure MC_SMB_createCallecBodyFor_ = new_MethodClosure((Method)PMethod13064, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createCallecBodyFor_, MC_SMB_createCallecBodyFor_);
}


static void init_SMB_currentBlock_() {
    Symbol SMB_currentBlock_ = new_Symbol(L"currentBlock:");
    Variable VAR_aPinocchioBlock_0_0 = new_Variable_named(L"aPinocchioBlock", 0);
<<<<<<< HEAD
    Array PArray13127 = new_Array_with(1, (Optr)VAR_aPinocchioBlock_0_0);
    Assign PAssign13129 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_currentBlock, (Optr)VAR_aPinocchioBlock_0_0);
    Array PThreadedCode13128 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign13129, (Optr)&t_push_variable, (Optr)VAR_aPinocchioBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13126 = new_Method_with(PArray13127, empty_Array, empty_Array, PThreadedCode13128, 2, PAssign13129, self);
    
    MethodClosure MC_SMB_currentBlock_ = new_MethodClosure((Method)PMethod13126, Smalltalk_Compiler_Compiler_Class);
=======
    Array PArray13093 = new_Array_with(1, (Optr)VAR_aPinocchioBlock_0_0);
    Assign PAssign13095 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_currentBlock, (Optr)VAR_aPinocchioBlock_0_0);
    Array PThreadedCode13094 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign13095, (Optr)&t_push_variable, (Optr)VAR_aPinocchioBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13092 = new_Method_with(PArray13093, empty_Array, empty_Array, PThreadedCode13094, 2, PAssign13095, self);
    
    MethodClosure MC_SMB_currentBlock_ = new_MethodClosure((Method)PMethod13092, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_currentBlock_, MC_SMB_currentBlock_);
}


static void init_SMB_visitCharacter_() {
    Symbol SMB_visitCharacter_ = new_Symbol(L"visitCharacter:");
    Variable VAR_anASTCharacter_0_0 = new_Variable_named(L"anASTCharacter", 0);
<<<<<<< HEAD
    Array PArray13131 = new_Array_with(1, (Optr)VAR_anASTCharacter_0_0);
    Symbol SMB_char = new_Symbol(L"char");
    // char. 
    Send PSend13133 = new_Send((Optr)VAR_anASTCharacter_0_0, SMB_char, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend13134 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)PSend13133);
    Array PThreadedCode13132 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTCharacter_0_0, (Optr)&t_send0, (Optr)PSend13133, (Optr)&t_send1, (Optr)PSend13134, (Optr)&t_method_return);
    Method PMethod13130 = new_Method_with(PArray13131, empty_Array, empty_Array, PThreadedCode13132, 1, PSend13134);
    
    MethodClosure MC_SMB_visitCharacter_ = new_MethodClosure((Method)PMethod13130, Smalltalk_Compiler_Compiler_Class);
=======
    Array PArray13097 = new_Array_with(1, (Optr)VAR_anASTCharacter_0_0);
    Symbol SMB_char = new_Symbol(L"char");
    // char. 
    Send PSend13099 = new_Send((Optr)VAR_anASTCharacter_0_0, SMB_char, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend13100 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)PSend13099);
    Array PThreadedCode13098 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTCharacter_0_0, (Optr)&t_send0, (Optr)PSend13099, (Optr)&t_send1, (Optr)PSend13100, (Optr)&t_method_return);
    Method PMethod13096 = new_Method_with(PArray13097, empty_Array, empty_Array, PThreadedCode13098, 1, PSend13100);
    
    MethodClosure MC_SMB_visitCharacter_ = new_MethodClosure((Method)PMethod13096, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitCharacter_, MC_SMB_visitCharacter_);
}


static void init_SMB_visitSelf_() {
    Symbol SMB_visitSelf_ = new_Symbol(L"visitSelf:");
    Variable VAR_aSelf_0_0 = new_Variable_named(L"aSelf", 0);
<<<<<<< HEAD
    Array PArray13136 = new_Array_with(1, (Optr)VAR_aSelf_0_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend13138 = new_Send((Optr)PSelf_classReference, SMB_instance, 0);
    Array PThreadedCode13137 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PSelf_classReference, (Optr)&t_send0, (Optr)PSend13138, (Optr)&t_method_return);
    Method PMethod13135 = new_Method_with(PArray13136, empty_Array, empty_Array, PThreadedCode13137, 1, PSend13138);
    
    MethodClosure MC_SMB_visitSelf_ = new_MethodClosure((Method)PMethod13135, Smalltalk_Compiler_Compiler_Class);
=======
    Array PArray13102 = new_Array_with(1, (Optr)VAR_aSelf_0_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend13104 = new_Send((Optr)PSelf_classReference, SMB_instance, 0);
    Array PThreadedCode13103 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PSelf_classReference, (Optr)&t_send0, (Optr)PSend13104, (Optr)&t_method_return);
    Method PMethod13101 = new_Method_with(PArray13102, empty_Array, empty_Array, PThreadedCode13103, 1, PSend13104);
    
    MethodClosure MC_SMB_visitSelf_ = new_MethodClosure((Method)PMethod13101, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitSelf_, MC_SMB_visitSelf_);
}


static void init_SMB_unwrapConstant_() {
    Symbol SMB_unwrapConstant_ = new_Symbol(L"unwrapConstant:");
    Variable VAR_aConstant_0_0 = new_Variable_named(L"aConstant", 0);
<<<<<<< HEAD
    Array PArray13140 = new_Array_with(1, (Optr)VAR_aConstant_0_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend13142 = new_Send((Optr)VAR_aConstant_0_0, SMB_isKindOf_, 1, (Optr)PConstant_classReference);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_13146 = new_String(L"Constant expected");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_13146_Const = new_Constant((Optr)string_13146);
    // error:. 
    Send PSend13147 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_13146_Const);
    Array PThreadedCode13145 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_13146, (Optr)&t_send1, (Optr)PSend13147, (Optr)&t_block_return);
    Block PBlock13144 = new_Block_with(empty_Array, empty_Array, PThreadedCode13145, 1, PSend13147);
    // ifFalse:. 
    Send PSend13143 = new_Send((Optr)PSend13142, SMB_ifFalse_, 1, (Optr)PBlock13144);
    Symbol SMB_constant = new_Symbol(L"constant");
    // constant. 
    Send PSend13148 = new_Send((Optr)VAR_aConstant_0_0, SMB_constant, 0);
    Array PThreadedCode13141 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_aConstant_0_0, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_send1, (Optr)PSend13142, (Optr)&t_send_ifFalse_, (Optr)PSend13143, (Optr)PBlock13144, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aConstant_0_0, (Optr)&t_send0, (Optr)PSend13148, (Optr)&t_method_return);
    Method PMethod13139 = new_Method_with(PArray13140, empty_Array, empty_Array, PThreadedCode13141, 2, PSend13143, PSend13148);
    
    MethodClosure MC_SMB_unwrapConstant_ = new_MethodClosure((Method)PMethod13139, Smalltalk_Compiler_Compiler_Class);
=======
    Array PArray13106 = new_Array_with(1, (Optr)VAR_aConstant_0_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend13108 = new_Send((Optr)VAR_aConstant_0_0, SMB_isKindOf_, 1, (Optr)PConstant_classReference);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_13112 = new_String(L"Constant expected");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_13112_Const = new_Constant((Optr)string_13112);
    // error:. 
    Send PSend13113 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_13112_Const);
    Array PThreadedCode13111 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_13112, (Optr)&t_send1, (Optr)PSend13113, (Optr)&t_block_return);
    Block PBlock13110 = new_Block_with(empty_Array, empty_Array, PThreadedCode13111, 1, PSend13113);
    // ifFalse:. 
    Send PSend13109 = new_Send((Optr)PSend13108, SMB_ifFalse_, 1, (Optr)PBlock13110);
    Symbol SMB_constant = new_Symbol(L"constant");
    // constant. 
    Send PSend13114 = new_Send((Optr)VAR_aConstant_0_0, SMB_constant, 0);
    Array PThreadedCode13107 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_aConstant_0_0, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_send1, (Optr)PSend13108, (Optr)&t_send_ifFalse_, (Optr)PSend13109, (Optr)PBlock13110, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aConstant_0_0, (Optr)&t_send0, (Optr)PSend13114, (Optr)&t_method_return);
    Method PMethod13105 = new_Method_with(PArray13106, empty_Array, empty_Array, PThreadedCode13107, 2, PSend13109, PSend13114);
    
    MethodClosure MC_SMB_unwrapConstant_ = new_MethodClosure((Method)PMethod13105, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_unwrapConstant_, MC_SMB_unwrapConstant_);
}


static void init_SMB_parser() {
    Symbol SMB_parser = new_Symbol(L"parser");
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
<<<<<<< HEAD
    Send PSend13151 = new_Send((Optr)PSmalltalkParser_classReference, SMB_instance, 0);
    Array PThreadedCode13150 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PSmalltalkParser_classReference, (Optr)&t_send0, (Optr)PSend13151, (Optr)&t_method_return);
    Method PMethod13149 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13150, 1, PSend13151);
    
    MethodClosure MC_SMB_parser = new_MethodClosure((Method)PMethod13149, Smalltalk_Compiler_Compiler_Class);
=======
    Send PSend13117 = new_Send((Optr)PSmalltalkParser_classReference, SMB_instance, 0);
    Array PThreadedCode13116 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PSmalltalkParser_classReference, (Optr)&t_send0, (Optr)PSend13117, (Optr)&t_method_return);
    Method PMethod13115 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13116, 1, PSend13117);
    
    MethodClosure MC_SMB_parser = new_MethodClosure((Method)PMethod13115, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_parser, MC_SMB_parser);
}


static void init_SMB_visitMessageCascadeExpression_() {
    Symbol SMB_visitMessageCascadeExpression_ = new_Symbol(L"visitMessageCascadeExpression:");
    Variable VAR_anASTMessageCascadeExpression_0_0 = new_Variable_named(L"anASTMessageCascadeExpression", 0);
<<<<<<< HEAD
    Array PArray13153 = new_Array_with(1, (Optr)VAR_anASTMessageCascadeExpression_0_0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_block_0_2 = new_Variable_named(L"block", 0);
    Variable VAR_send_0_3 = new_Variable_named(L"send", 0);
    Array PArray13154 = new_Array_with(3, (Optr)VAR_receiver_0_1, (Optr)VAR_block_0_2, (Optr)VAR_send_0_3);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13158 = new_Send((Optr)ASTVariable_classReference, SMB_new, 0);
=======
    Array PArray13119 = new_Array_with(1, (Optr)VAR_anASTMessageCascadeExpression_0_0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_block_0_2 = new_Variable_named(L"block", 0);
    Variable VAR_send_0_3 = new_Variable_named(L"send", 0);
    Array PArray13120 = new_Array_with(3, (Optr)VAR_receiver_0_1, (Optr)VAR_block_0_2, (Optr)VAR_send_0_3);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13124 = new_Send((Optr)ASTVariable_classReference, SMB_new, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_name_ = new_Symbol(L"name:");
    Symbol  SMB___receiver__ = new_Symbol(L"_receiver_");
    Constant SMB___receiver___Const = new_Constant((Optr)SMB___receiver__);
    // name:. 
<<<<<<< HEAD
    Send PSend13157 = new_Send((Optr)PSend13158, SMB_name_, 1, (Optr)SMB___receiver___Const);
    Assign PAssign13156 = new_Assign((Optr)VAR_receiver_0_1, (Optr)PSend13157);
    Symbol SMB_cascades = new_Symbol(L"cascades");
    // cascades. 
    Send PSend13159 = new_Send((Optr)VAR_anASTMessageCascadeExpression_0_0, SMB_cascades, 0);
    Variable VAR_message_1_0 = new_Variable_named(L"message", 1);
    Array PArray13161 = new_Array_with(1, (Optr)VAR_message_1_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend13163 = new_Send((Optr)VAR_message_1_0, SMB_receiver_, 1, (Optr)VAR_receiver_0_1);
    Array PThreadedCode13162 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_message_1_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend13163, (Optr)&t_method_return);
    Block PBlock13160 = new_Block_with(PArray13161, empty_Array, PThreadedCode13162, 1, PSend13163);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend13164 = new_Send((Optr)PSend13159, SMB_do_, 1, (Optr)PBlock13160);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray13168 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend13170 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_receiver_0_1);
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    // parameters:. 
    Send PSend13171 = new_Send((Optr)VAR__receiver__1_0, SMB_parameters_, 1, (Optr)PSend13170);
    // cascades. 
    Send PSend13172 = new_Send((Optr)VAR_anASTMessageCascadeExpression_0_0, SMB_cascades, 0);
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    // statements:. 
    Send PSend13173 = new_Send((Optr)VAR__receiver__1_0, SMB_statements_, 1, (Optr)PSend13172);
    Array PThreadedCode13169 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend13170, (Optr)&t_send1, (Optr)PSend13171, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anASTMessageCascadeExpression_0_0, (Optr)&t_send0, (Optr)PSend13172, (Optr)&t_send1, (Optr)PSend13173, (Optr)&t_method_return);
    Block PBlock13167 = new_Block_with(PArray13168, empty_Array, PThreadedCode13169, 2, PSend13171, PSend13173);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // new. 
    Send PSend13174 = new_Send((Optr)ASTBlock_classReference, SMB_new, 0);
    // value:. 
    Send PSend13166 = new_Send((Optr)PBlock13167, SMB_value_, 1, (Optr)PSend13174);
    Assign PAssign13165 = new_Assign((Optr)VAR_block_0_2, (Optr)PSend13166);
    Array PArray13178 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    // receiver:. 
    Send PSend13180 = new_Send((Optr)VAR__receiver__1_0, SMB_receiver_, 1, (Optr)VAR_block_0_2);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend13181 = new_Send((Optr)VAR_anASTMessageCascadeExpression_0_0, SMB_receiver, 0);
    // with:. 
    Send PSend13182 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)PSend13181);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend13183 = new_Send((Optr)VAR__receiver__1_0, SMB_arguments_, 1, (Optr)PSend13182);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Constant SMB_value__Const = new_Constant((Optr)SMB_value_);
    // selector:. 
    Send PSend13184 = new_Send((Optr)VAR__receiver__1_0, SMB_selector_, 1, (Optr)SMB_value__Const);
    Array PThreadedCode13179 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_block_0_2, (Optr)&t_send1, (Optr)PSend13180, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTMessageCascadeExpression_0_0, (Optr)&t_send0, (Optr)PSend13181, (Optr)&t_send1, (Optr)PSend13182, (Optr)&t_send1, (Optr)PSend13183, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_value_, (Optr)&t_send1, (Optr)PSend13184, (Optr)&t_method_return);
    Block PBlock13177 = new_Block_with(PArray13178, empty_Array, PThreadedCode13179, 3, PSend13180, PSend13183, PSend13184);
    // new. 
    Send PSend13185 = new_Send((Optr)ASTMessageExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend13176 = new_Send((Optr)PBlock13177, SMB_value_, 1, (Optr)PSend13185);
    Assign PAssign13175 = new_Assign((Optr)VAR_send_0_3, (Optr)PSend13176);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend13186 = new_Send((Optr)self, SMB_visit_, 1, (Optr)VAR_send_0_3);
    Array PThreadedCode13155 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign13156, (Optr)&t_push_class_reference, (Optr)ASTVariable_classReference, (Optr)&t_send0, (Optr)PSend13158, (Optr)&t_push1, (Optr)SMB___receiver__, (Optr)&t_send1, (Optr)PSend13157, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_anASTMessageCascadeExpression_0_0, (Optr)&t_send0, (Optr)PSend13159, (Optr)&t_push_closure, (Optr)PBlock13160, (Optr)&t_send1, (Optr)PSend13164, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13165, (Optr)&t_push_closure, (Optr)PBlock13167, (Optr)&t_push_class_reference, (Optr)ASTBlock_classReference, (Optr)&t_send0, (Optr)PSend13174, (Optr)&t_send1, (Optr)PSend13166, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13175, (Optr)&t_push_closure, (Optr)PBlock13177, (Optr)&t_push_class_reference, (Optr)ASTMessageExpression_classReference, (Optr)&t_send0, (Optr)PSend13185, (Optr)&t_send1, (Optr)PSend13176, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_send_0_3, (Optr)&t_send1, (Optr)PSend13186, (Optr)&t_method_return);
    Method PMethod13152 = new_Method_with(PArray13153, PArray13154, empty_Array, PThreadedCode13155, 5, PAssign13156, PSend13164, PAssign13165, PAssign13175, PSend13186);
    
    MethodClosure MC_SMB_visitMessageCascadeExpression_ = new_MethodClosure((Method)PMethod13152, Smalltalk_Compiler_Compiler_Class);
=======
    Send PSend13123 = new_Send((Optr)PSend13124, SMB_name_, 1, (Optr)SMB___receiver___Const);
    Assign PAssign13122 = new_Assign((Optr)VAR_receiver_0_1, (Optr)PSend13123);
    Symbol SMB_cascades = new_Symbol(L"cascades");
    // cascades. 
    Send PSend13125 = new_Send((Optr)VAR_anASTMessageCascadeExpression_0_0, SMB_cascades, 0);
    Variable VAR_message_1_0 = new_Variable_named(L"message", 1);
    Array PArray13127 = new_Array_with(1, (Optr)VAR_message_1_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend13129 = new_Send((Optr)VAR_message_1_0, SMB_receiver_, 1, (Optr)VAR_receiver_0_1);
    Array PThreadedCode13128 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_message_1_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend13129, (Optr)&t_method_return);
    Block PBlock13126 = new_Block_with(PArray13127, empty_Array, PThreadedCode13128, 1, PSend13129);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend13130 = new_Send((Optr)PSend13125, SMB_do_, 1, (Optr)PBlock13126);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray13134 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend13136 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_receiver_0_1);
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    // parameters:. 
    Send PSend13137 = new_Send((Optr)VAR__receiver__1_0, SMB_parameters_, 1, (Optr)PSend13136);
    // cascades. 
    Send PSend13138 = new_Send((Optr)VAR_anASTMessageCascadeExpression_0_0, SMB_cascades, 0);
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    // statements:. 
    Send PSend13139 = new_Send((Optr)VAR__receiver__1_0, SMB_statements_, 1, (Optr)PSend13138);
    Array PThreadedCode13135 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend13136, (Optr)&t_send1, (Optr)PSend13137, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anASTMessageCascadeExpression_0_0, (Optr)&t_send0, (Optr)PSend13138, (Optr)&t_send1, (Optr)PSend13139, (Optr)&t_method_return);
    Block PBlock13133 = new_Block_with(PArray13134, empty_Array, PThreadedCode13135, 2, PSend13137, PSend13139);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // new. 
    Send PSend13140 = new_Send((Optr)ASTBlock_classReference, SMB_new, 0);
    // value:. 
    Send PSend13132 = new_Send((Optr)PBlock13133, SMB_value_, 1, (Optr)PSend13140);
    Assign PAssign13131 = new_Assign((Optr)VAR_block_0_2, (Optr)PSend13132);
    Array PArray13144 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    // receiver:. 
    Send PSend13146 = new_Send((Optr)VAR__receiver__1_0, SMB_receiver_, 1, (Optr)VAR_block_0_2);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend13147 = new_Send((Optr)VAR_anASTMessageCascadeExpression_0_0, SMB_receiver, 0);
    // with:. 
    Send PSend13148 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)PSend13147);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend13149 = new_Send((Optr)VAR__receiver__1_0, SMB_arguments_, 1, (Optr)PSend13148);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Constant SMB_value__Const = new_Constant((Optr)SMB_value_);
    // selector:. 
    Send PSend13150 = new_Send((Optr)VAR__receiver__1_0, SMB_selector_, 1, (Optr)SMB_value__Const);
    Array PThreadedCode13145 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_block_0_2, (Optr)&t_send1, (Optr)PSend13146, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTMessageCascadeExpression_0_0, (Optr)&t_send0, (Optr)PSend13147, (Optr)&t_send1, (Optr)PSend13148, (Optr)&t_send1, (Optr)PSend13149, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_value_, (Optr)&t_send1, (Optr)PSend13150, (Optr)&t_method_return);
    Block PBlock13143 = new_Block_with(PArray13144, empty_Array, PThreadedCode13145, 3, PSend13146, PSend13149, PSend13150);
    // new. 
    Send PSend13151 = new_Send((Optr)ASTMessageExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend13142 = new_Send((Optr)PBlock13143, SMB_value_, 1, (Optr)PSend13151);
    Assign PAssign13141 = new_Assign((Optr)VAR_send_0_3, (Optr)PSend13142);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend13152 = new_Send((Optr)self, SMB_visit_, 1, (Optr)VAR_send_0_3);
    Array PThreadedCode13121 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign13122, (Optr)&t_push_class_reference, (Optr)ASTVariable_classReference, (Optr)&t_send0, (Optr)PSend13124, (Optr)&t_push1, (Optr)SMB___receiver__, (Optr)&t_send1, (Optr)PSend13123, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_anASTMessageCascadeExpression_0_0, (Optr)&t_send0, (Optr)PSend13125, (Optr)&t_push_closure, (Optr)PBlock13126, (Optr)&t_send1, (Optr)PSend13130, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13131, (Optr)&t_push_closure, (Optr)PBlock13133, (Optr)&t_push_class_reference, (Optr)ASTBlock_classReference, (Optr)&t_send0, (Optr)PSend13140, (Optr)&t_send1, (Optr)PSend13132, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13141, (Optr)&t_push_closure, (Optr)PBlock13143, (Optr)&t_push_class_reference, (Optr)ASTMessageExpression_classReference, (Optr)&t_send0, (Optr)PSend13151, (Optr)&t_send1, (Optr)PSend13142, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_send_0_3, (Optr)&t_send1, (Optr)PSend13152, (Optr)&t_method_return);
    Method PMethod13118 = new_Method_with(PArray13119, PArray13120, empty_Array, PThreadedCode13121, 5, PAssign13122, PSend13130, PAssign13131, PAssign13141, PSend13152);
    
    MethodClosure MC_SMB_visitMessageCascadeExpression_ = new_MethodClosure((Method)PMethod13118, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitMessageCascadeExpression_, MC_SMB_visitMessageCascadeExpression_);
}


static void init_SMB_visitUnaryExpression_() {
    Symbol SMB_visitUnaryExpression_ = new_Symbol(L"visitUnaryExpression:");
    Variable VAR_anASTUnaryExpression_0_0 = new_Variable_named(L"anASTUnaryExpression", 0);
<<<<<<< HEAD
    Array PArray13188 = new_Array_with(1, (Optr)VAR_anASTUnaryExpression_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray13191 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend13193 = new_Send((Optr)VAR_anASTUnaryExpression_0_0, SMB_selector, 0);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend13194 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)PSend13193);
=======
    Array PArray13154 = new_Array_with(1, (Optr)VAR_anASTUnaryExpression_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray13157 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend13159 = new_Send((Optr)VAR_anASTUnaryExpression_0_0, SMB_selector, 0);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend13160 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)PSend13159);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // new:. 
<<<<<<< HEAD
    Send PSend13195 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_0_Const);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend13196 = new_Send((Optr)VAR__receiver__1_0, SMB_arguments_, 1, (Optr)PSend13195);
    Array PThreadedCode13192 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anASTUnaryExpression_0_0, (Optr)&t_send0, (Optr)PSend13193, (Optr)&t_send1, (Optr)PSend13194, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend13195, (Optr)&t_send1, (Optr)PSend13196, (Optr)&t_method_return);
    Block PBlock13190 = new_Block_with(PArray13191, empty_Array, PThreadedCode13192, 2, PSend13194, PSend13196);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend13197 = new_Send((Optr)VAR_anASTUnaryExpression_0_0, SMB_receiver, 0);
    Symbol SMB_createSendTo_ = new_Symbol(L"createSendTo:");
    // createSendTo:. 
    Send PSend13198 = new_Send((Optr)self, SMB_createSendTo_, 1, (Optr)PSend13197);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend13199 = new_Send((Optr)PBlock13190, SMB_value_, 1, (Optr)PSend13198);
    Array PThreadedCode13189 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_closure, (Optr)PBlock13190, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anASTUnaryExpression_0_0, (Optr)&t_send0, (Optr)PSend13197, (Optr)&t_send1, (Optr)PSend13198, (Optr)&t_send1, (Optr)PSend13199, (Optr)&t_method_return);
    Method PMethod13187 = new_Method_with(PArray13188, empty_Array, empty_Array, PThreadedCode13189, 1, PSend13199);
    
    MethodClosure MC_SMB_visitUnaryExpression_ = new_MethodClosure((Method)PMethod13187, Smalltalk_Compiler_Compiler_Class);
=======
    Send PSend13161 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_0_Const);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend13162 = new_Send((Optr)VAR__receiver__1_0, SMB_arguments_, 1, (Optr)PSend13161);
    Array PThreadedCode13158 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anASTUnaryExpression_0_0, (Optr)&t_send0, (Optr)PSend13159, (Optr)&t_send1, (Optr)PSend13160, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend13161, (Optr)&t_send1, (Optr)PSend13162, (Optr)&t_method_return);
    Block PBlock13156 = new_Block_with(PArray13157, empty_Array, PThreadedCode13158, 2, PSend13160, PSend13162);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend13163 = new_Send((Optr)VAR_anASTUnaryExpression_0_0, SMB_receiver, 0);
    Symbol SMB_createSendTo_ = new_Symbol(L"createSendTo:");
    // createSendTo:. 
    Send PSend13164 = new_Send((Optr)self, SMB_createSendTo_, 1, (Optr)PSend13163);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend13165 = new_Send((Optr)PBlock13156, SMB_value_, 1, (Optr)PSend13164);
    Array PThreadedCode13155 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_closure, (Optr)PBlock13156, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anASTUnaryExpression_0_0, (Optr)&t_send0, (Optr)PSend13163, (Optr)&t_send1, (Optr)PSend13164, (Optr)&t_send1, (Optr)PSend13165, (Optr)&t_method_return);
    Method PMethod13153 = new_Method_with(PArray13154, empty_Array, empty_Array, PThreadedCode13155, 1, PSend13165);
    
    MethodClosure MC_SMB_visitUnaryExpression_ = new_MethodClosure((Method)PMethod13153, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitUnaryExpression_, MC_SMB_visitUnaryExpression_);
}


static void init_SMB_error_() {
    Symbol SMB_error_ = new_Symbol(L"error:");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
<<<<<<< HEAD
    Array PArray13201 = new_Array_with(1, (Optr)VAR_message_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray13204 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_target_ = new_Symbol(L"target:");
    // target:. 
    Send PSend13206 = new_Send((Optr)VAR__receiver__1_0, SMB_target_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass);
    Symbol SMB_method_ = new_Symbol(L"method:");
    // method:. 
    Send PSend13207 = new_Send((Optr)VAR__receiver__1_0, SMB_method_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_currentMethod);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend13208 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)VAR_message_0_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend13209 = new_Send((Optr)VAR__receiver__1_0, SMB_signal, 0);
    Array PThreadedCode13205 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send1, (Optr)PSend13206, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_currentMethod, (Optr)&t_send1, (Optr)PSend13207, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_send1, (Optr)PSend13208, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend13209, (Optr)&t_method_return);
    Block PBlock13203 = new_Block_with(PArray13204, empty_Array, PThreadedCode13205, 4, PSend13206, PSend13207, PSend13208, PSend13209);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13210 = new_Send((Optr)PCompilationFailure_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend13211 = new_Send((Optr)PBlock13203, SMB_value_, 1, (Optr)PSend13210);
    Array PThreadedCode13202 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock13203, (Optr)&t_push_class_reference, (Optr)PCompilationFailure_classReference, (Optr)&t_send0, (Optr)PSend13210, (Optr)&t_send1, (Optr)PSend13211, (Optr)&t_method_return);
    Method PMethod13200 = new_Method_with(PArray13201, empty_Array, empty_Array, PThreadedCode13202, 1, PSend13211);
    
    MethodClosure MC_SMB_error_ = new_MethodClosure((Method)PMethod13200, Smalltalk_Compiler_Compiler_Class);
=======
    Array PArray13167 = new_Array_with(1, (Optr)VAR_message_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray13170 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_target_ = new_Symbol(L"target:");
    // target:. 
    Send PSend13172 = new_Send((Optr)VAR__receiver__1_0, SMB_target_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass);
    Symbol SMB_method_ = new_Symbol(L"method:");
    // method:. 
    Send PSend13173 = new_Send((Optr)VAR__receiver__1_0, SMB_method_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_currentMethod);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend13174 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)VAR_message_0_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend13175 = new_Send((Optr)VAR__receiver__1_0, SMB_signal, 0);
    Array PThreadedCode13171 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send1, (Optr)PSend13172, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_currentMethod, (Optr)&t_send1, (Optr)PSend13173, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_send1, (Optr)PSend13174, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend13175, (Optr)&t_method_return);
    Block PBlock13169 = new_Block_with(PArray13170, empty_Array, PThreadedCode13171, 4, PSend13172, PSend13173, PSend13174, PSend13175);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13176 = new_Send((Optr)PCompilationFailure_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend13177 = new_Send((Optr)PBlock13169, SMB_value_, 1, (Optr)PSend13176);
    Array PThreadedCode13168 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock13169, (Optr)&t_push_class_reference, (Optr)PCompilationFailure_classReference, (Optr)&t_send0, (Optr)PSend13176, (Optr)&t_send1, (Optr)PSend13177, (Optr)&t_method_return);
    Method PMethod13166 = new_Method_with(PArray13167, empty_Array, empty_Array, PThreadedCode13168, 1, PSend13177);
    
    MethodClosure MC_SMB_error_ = new_MethodClosure((Method)PMethod13166, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_error_, MC_SMB_error_);
}


static void init_SMB_visitVariable_() {
    Symbol SMB_visitVariable_ = new_Symbol(L"visitVariable:");
    Variable VAR_anASTVariable_0_0 = new_Variable_named(L"anASTVariable", 0);
<<<<<<< HEAD
    Array PArray13213 = new_Array_with(1, (Optr)VAR_anASTVariable_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray13216 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_lookup_ = new_Symbol(L"lookup:");
    // lookup:. 
    Send PSend13218 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_lookup_, 1, (Optr)VAR_anASTVariable_0_0);
    Variable VAR_value_2_0 = new_Variable_named(L"value", 2);
    Array PArray13220 = new_Array_with(1, (Optr)VAR_value_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13222 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_2_0);
    Array PThreadedCode13221 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_2_0, (Optr)&t_send1, (Optr)PSend13222, (Optr)&t_method_return);
    Block PBlock13219 = new_Block_with(PArray13220, empty_Array, PThreadedCode13221, 1, PSend13222);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend13223 = new_Send((Optr)PSend13218, SMB_ifNotNil_, 1, (Optr)PBlock13219);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend13224 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend13225 = new_Send((Optr)PSend13224, SMB_first, 0);
    Symbol SMB_isUppercase = new_Symbol(L"isUppercase");
    // isUppercase. 
    Send PSend13226 = new_Send((Optr)PSend13225, SMB_isUppercase, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray13231 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_target_ = new_Symbol(L"target:");
    // target:. 
    Send PSend13233 = new_Send((Optr)VAR__receiver__2_0, SMB_target_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass);
    Symbol SMB_method_ = new_Symbol(L"method:");
    // method:. 
    Send PSend13234 = new_Send((Optr)VAR__receiver__2_0, SMB_method_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_currentMethod);
    Symbol SMB_variable_ = new_Symbol(L"variable:");
    // variable:. 
    Send PSend13235 = new_Send((Optr)VAR__receiver__2_0, SMB_variable_, 1, (Optr)VAR_anASTVariable_0_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend13236 = new_Send((Optr)VAR__receiver__2_0, SMB_signal, 0);
    Array PThreadedCode13232 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send1, (Optr)PSend13233, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_currentMethod, (Optr)&t_send1, (Optr)PSend13234, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send1, (Optr)PSend13235, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend13236, (Optr)&t_method_return);
    Block PBlock13230 = new_Block_with(PArray13231, empty_Array, PThreadedCode13232, 4, PSend13233, PSend13234, PSend13235, PSend13236);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13237 = new_Send((Optr)PUndefinedVariable_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend13238 = new_Send((Optr)PBlock13230, SMB_value_, 1, (Optr)PSend13237);
    // escape:. 
    Send PSend13239 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend13238);
    Array PThreadedCode13229 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_closure, (Optr)PBlock13230, (Optr)&t_push_class_reference, (Optr)PUndefinedVariable_classReference, (Optr)&t_send0, (Optr)PSend13237, (Optr)&t_send1, (Optr)PSend13238, (Optr)&t_send1, (Optr)PSend13239, (Optr)&t_block_return);
    Block PBlock13228 = new_Block_with(empty_Array, empty_Array, PThreadedCode13229, 1, PSend13239);
    // ifFalse:. 
    Send PSend13227 = new_Send((Optr)PSend13226, SMB_ifFalse_, 1, (Optr)PBlock13228);
    Symbol SMB_scope = new_Symbol(L"scope");
    // scope. 
    Send PSend13240 = new_Send((Optr)self, SMB_scope, 0);
    // name. 
    Send PSend13241 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_package = new_Symbol(L"package");
    // package. 
    Send PSend13242 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, SMB_package, 0);
    // name. 
    Send PSend13243 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_world = new_Symbol(L"world");
    // world. 
    Send PSend13246 = new_Send((Optr)self, SMB_world, 0);
    // name. 
    Send PSend13247 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_ensureClassReference_ = new_Symbol(L"ensureClassReference:");
    // ensureClassReference:. 
    Send PSend13248 = new_Send((Optr)PSend13246, SMB_ensureClassReference_, 1, (Optr)PSend13247);
    Array PThreadedCode13245 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13246, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13247, (Optr)&t_send1, (Optr)PSend13248, (Optr)&t_block_return);
    Block PBlock13244 = new_Block_with(empty_Array, empty_Array, PThreadedCode13245, 1, PSend13248);
    Symbol SMB_findName_ifAbsent_ = new_Symbol(L"findName:ifAbsent:");
    // findName:ifAbsent:. 
    Send PSend13249 = new_Send((Optr)PSend13242, SMB_findName_ifAbsent_, 2, (Optr)PSend13243, (Optr)PBlock13244);
    Symbol SMB_asNode = new_Symbol(L"asNode");
    // asNode. 
    Send PSend13250 = new_Send((Optr)PSend13249, SMB_asNode, 0);
    Symbol SMB_declare_as_ = new_Symbol(L"declare:as:");
    // declare:as:. 
    Send PSend13251 = new_Send((Optr)PSend13240, SMB_declare_as_, 2, (Optr)PSend13241, (Optr)PSend13250);
    Array PThreadedCode13217 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send1, (Optr)PSend13218, (Optr)&t_push_closure, (Optr)PBlock13219, (Optr)&t_send1, (Optr)PSend13223, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13224, (Optr)&t_send0, (Optr)PSend13225, (Optr)&t_send0, (Optr)PSend13226, (Optr)&t_send_ifFalse_, (Optr)PSend13227, (Optr)PBlock13228, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13240, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13241, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send0, (Optr)PSend13242, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13243, (Optr)&t_push_closure, (Optr)PBlock13244, (Optr)&t_send2, (Optr)PSend13249, (Optr)&t_send0, (Optr)PSend13250, (Optr)&t_send2, (Optr)PSend13251, (Optr)&t_method_return);
    Block PBlock13215 = new_Block_with(PArray13216, empty_Array, PThreadedCode13217, 3, PSend13223, PSend13227, PSend13251);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13252 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock13215);
    Array PThreadedCode13214 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock13215, (Optr)&t_send1, (Optr)PSend13252, (Optr)&t_method_return);
    Method PMethod13212 = new_Method_with(PArray13213, empty_Array, empty_Array, PThreadedCode13214, 1, PSend13252);
    
    MethodClosure MC_SMB_visitVariable_ = new_MethodClosure((Method)PMethod13212, Smalltalk_Compiler_Compiler_Class);
=======
    Array PArray13179 = new_Array_with(1, (Optr)VAR_anASTVariable_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray13182 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_lookup_ = new_Symbol(L"lookup:");
    // lookup:. 
    Send PSend13184 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_lookup_, 1, (Optr)VAR_anASTVariable_0_0);
    Variable VAR_value_2_0 = new_Variable_named(L"value", 2);
    Array PArray13186 = new_Array_with(1, (Optr)VAR_value_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13188 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_2_0);
    Array PThreadedCode13187 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_2_0, (Optr)&t_send1, (Optr)PSend13188, (Optr)&t_method_return);
    Block PBlock13185 = new_Block_with(PArray13186, empty_Array, PThreadedCode13187, 1, PSend13188);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend13189 = new_Send((Optr)PSend13184, SMB_ifNotNil_, 1, (Optr)PBlock13185);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend13190 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend13191 = new_Send((Optr)PSend13190, SMB_first, 0);
    Symbol SMB_isUppercase = new_Symbol(L"isUppercase");
    // isUppercase. 
    Send PSend13192 = new_Send((Optr)PSend13191, SMB_isUppercase, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray13197 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_target_ = new_Symbol(L"target:");
    // target:. 
    Send PSend13199 = new_Send((Optr)VAR__receiver__2_0, SMB_target_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass);
    Symbol SMB_method_ = new_Symbol(L"method:");
    // method:. 
    Send PSend13200 = new_Send((Optr)VAR__receiver__2_0, SMB_method_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_currentMethod);
    Symbol SMB_variable_ = new_Symbol(L"variable:");
    // variable:. 
    Send PSend13201 = new_Send((Optr)VAR__receiver__2_0, SMB_variable_, 1, (Optr)VAR_anASTVariable_0_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend13202 = new_Send((Optr)VAR__receiver__2_0, SMB_signal, 0);
    Array PThreadedCode13198 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send1, (Optr)PSend13199, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_currentMethod, (Optr)&t_send1, (Optr)PSend13200, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send1, (Optr)PSend13201, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend13202, (Optr)&t_method_return);
    Block PBlock13196 = new_Block_with(PArray13197, empty_Array, PThreadedCode13198, 4, PSend13199, PSend13200, PSend13201, PSend13202);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13203 = new_Send((Optr)PUndefinedVariable_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend13204 = new_Send((Optr)PBlock13196, SMB_value_, 1, (Optr)PSend13203);
    // escape:. 
    Send PSend13205 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend13204);
    Array PThreadedCode13195 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_closure, (Optr)PBlock13196, (Optr)&t_push_class_reference, (Optr)PUndefinedVariable_classReference, (Optr)&t_send0, (Optr)PSend13203, (Optr)&t_send1, (Optr)PSend13204, (Optr)&t_send1, (Optr)PSend13205, (Optr)&t_block_return);
    Block PBlock13194 = new_Block_with(empty_Array, empty_Array, PThreadedCode13195, 1, PSend13205);
    // ifFalse:. 
    Send PSend13193 = new_Send((Optr)PSend13192, SMB_ifFalse_, 1, (Optr)PBlock13194);
    Symbol SMB_scope = new_Symbol(L"scope");
    // scope. 
    Send PSend13206 = new_Send((Optr)self, SMB_scope, 0);
    // name. 
    Send PSend13207 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_package = new_Symbol(L"package");
    // package. 
    Send PSend13208 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, SMB_package, 0);
    // name. 
    Send PSend13209 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_world = new_Symbol(L"world");
    // world. 
    Send PSend13212 = new_Send((Optr)self, SMB_world, 0);
    // name. 
    Send PSend13213 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_ensureClassReference_ = new_Symbol(L"ensureClassReference:");
    // ensureClassReference:. 
    Send PSend13214 = new_Send((Optr)PSend13212, SMB_ensureClassReference_, 1, (Optr)PSend13213);
    Array PThreadedCode13211 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13212, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13213, (Optr)&t_send1, (Optr)PSend13214, (Optr)&t_block_return);
    Block PBlock13210 = new_Block_with(empty_Array, empty_Array, PThreadedCode13211, 1, PSend13214);
    Symbol SMB_findName_ifAbsent_ = new_Symbol(L"findName:ifAbsent:");
    // findName:ifAbsent:. 
    Send PSend13215 = new_Send((Optr)PSend13208, SMB_findName_ifAbsent_, 2, (Optr)PSend13209, (Optr)PBlock13210);
    Symbol SMB_asNode = new_Symbol(L"asNode");
    // asNode. 
    Send PSend13216 = new_Send((Optr)PSend13215, SMB_asNode, 0);
    Symbol SMB_declare_as_ = new_Symbol(L"declare:as:");
    // declare:as:. 
    Send PSend13217 = new_Send((Optr)PSend13206, SMB_declare_as_, 2, (Optr)PSend13207, (Optr)PSend13216);
    Array PThreadedCode13183 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send1, (Optr)PSend13184, (Optr)&t_push_closure, (Optr)PBlock13185, (Optr)&t_send1, (Optr)PSend13189, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13190, (Optr)&t_send0, (Optr)PSend13191, (Optr)&t_send0, (Optr)PSend13192, (Optr)&t_send_ifFalse_, (Optr)PSend13193, (Optr)PBlock13194, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13206, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13207, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send0, (Optr)PSend13208, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13209, (Optr)&t_push_closure, (Optr)PBlock13210, (Optr)&t_send2, (Optr)PSend13215, (Optr)&t_send0, (Optr)PSend13216, (Optr)&t_send2, (Optr)PSend13217, (Optr)&t_method_return);
    Block PBlock13181 = new_Block_with(PArray13182, empty_Array, PThreadedCode13183, 3, PSend13189, PSend13193, PSend13217);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13218 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock13181);
    Array PThreadedCode13180 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock13181, (Optr)&t_send1, (Optr)PSend13218, (Optr)&t_method_return);
    Method PMethod13178 = new_Method_with(PArray13179, empty_Array, empty_Array, PThreadedCode13180, 1, PSend13218);
    
    MethodClosure MC_SMB_visitVariable_ = new_MethodClosure((Method)PMethod13178, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitVariable_, MC_SMB_visitVariable_);
}


static void init_SMB_currentBlock() {
    Symbol SMB_currentBlock = new_Symbol(L"currentBlock");
<<<<<<< HEAD
    Array PThreadedCode13254 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_currentBlock, (Optr)&t_method_return);
    Method PMethod13253 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13254, 1, slot_Smalltalk_Compiler_Compiler_currentBlock);
    
    MethodClosure MC_SMB_currentBlock = new_MethodClosure((Method)PMethod13253, Smalltalk_Compiler_Compiler_Class);
=======
    Array PThreadedCode13220 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_currentBlock, (Optr)&t_method_return);
    Method PMethod13219 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13220, 1, slot_Smalltalk_Compiler_Compiler_currentBlock);
    
    MethodClosure MC_SMB_currentBlock = new_MethodClosure((Method)PMethod13219, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_currentBlock, MC_SMB_currentBlock);
}


static void init_SMB_visitBlock_() {
    Symbol SMB_visitBlock_ = new_Symbol(L"visitBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
<<<<<<< HEAD
    Array PArray13256 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Variable VAR_hasState_0_2 = new_Variable_named(L"hasState", 0);
    Array PArray13257 = new_Array_with(2, (Optr)VAR_block_0_1, (Optr)VAR_hasState_0_2);
    Symbol SMB_parameters = new_Symbol(L"parameters");
    // parameters. 
    Send PSend13263 = new_Send((Optr)VAR_aBlock_0_0, SMB_parameters, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend13262 = new_Send((Optr)PSend13263, SMB_size, 0);
=======
    Array PArray13222 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Variable VAR_hasState_0_2 = new_Variable_named(L"hasState", 0);
    Array PArray13223 = new_Array_with(2, (Optr)VAR_block_0_1, (Optr)VAR_hasState_0_2);
    Symbol SMB_parameters = new_Symbol(L"parameters");
    // parameters. 
    Send PSend13229 = new_Send((Optr)VAR_aBlock_0_0, SMB_parameters, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend13228 = new_Send((Optr)PSend13229, SMB_size, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
<<<<<<< HEAD
    Send PSend13261 = new_Send((Optr)PSend13262, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_or_ = new_Symbol(L"or:");
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend13266 = new_Send((Optr)VAR_aBlock_0_0, SMB_temporaries, 0);
    // size. 
    Send PSend13267 = new_Send((Optr)PSend13266, SMB_size, 0);
    // >. 
    Send PSend13268 = new_Send((Optr)PSend13267, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode13265 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13266, (Optr)&t_send0, (Optr)PSend13267, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend13268, (Optr)&t_block_return);
    Block PBlock13264 = new_Block_with(empty_Array, empty_Array, PThreadedCode13265, 1, PSend13268);
    // or:. 
    Send PSend13260 = new_Send((Optr)PSend13261, SMB_or_, 1, (Optr)PBlock13264);
    Assign PAssign13259 = new_Assign((Optr)VAR_hasState_0_2, (Optr)PSend13260);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_pushScope = new_Symbol(L"pushScope");
    // pushScope. 
    Send PSend13272 = new_Send((Optr)self, SMB_pushScope, 0);
    // parameters. 
    Send PSend13273 = new_Send((Optr)VAR_aBlock_0_0, SMB_parameters, 0);
    Symbol SMB_declareAll_ = new_Symbol(L"declareAll:");
    // declareAll:. 
    Send PSend13274 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_declareAll_, 1, (Optr)PSend13273);
    // temporaries. 
    Send PSend13275 = new_Send((Optr)VAR_aBlock_0_0, SMB_temporaries, 0);
    // declareAll:. 
    Send PSend13276 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_declareAll_, 1, (Optr)PSend13275);
    Array PThreadedCode13271 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13272, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13273, (Optr)&t_send1, (Optr)PSend13274, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13275, (Optr)&t_send1, (Optr)PSend13276, (Optr)&t_block_return);
    Block PBlock13270 = new_Block_with(empty_Array, empty_Array, PThreadedCode13271, 3, PSend13272, PSend13274, PSend13276);
    // ifTrue:. 
    Send PSend13269 = new_Send((Optr)VAR_hasState_0_2, SMB_ifTrue_, 1, (Optr)PBlock13270);
    Symbol SMB_createBlock_ = new_Symbol(L"createBlock:");
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13280 = new_Send((Optr)VAR_aBlock_0_0, SMB_statements, 0);
    // size. 
    Send PSend13279 = new_Send((Optr)PSend13280, SMB_size, 0);
    // createBlock:. 
    Send PSend13278 = new_Send((Optr)self, SMB_createBlock_, 1, (Optr)PSend13279);
    Assign PAssign13277 = new_Assign((Optr)VAR_block_0_1, (Optr)PSend13278);
    // parameters. 
    Send PSend13281 = new_Send((Optr)VAR_aBlock_0_0, SMB_parameters, 0);
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    // acceptOnCollection:. 
    Send PSend13282 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend13281);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend13283 = new_Send((Optr)PSend13282, SMB_asArray, 0);
    // temporaries. 
    Send PSend13284 = new_Send((Optr)VAR_aBlock_0_0, SMB_temporaries, 0);
    // acceptOnCollection:. 
    Send PSend13285 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend13284);
    // asArray. 
    Send PSend13286 = new_Send((Optr)PSend13285, SMB_asArray, 0);
    Symbol SMB_params_locals_ = new_Symbol(L"params:locals:");
    // params:locals:. 
    Send PSend13287 = new_Send((Optr)VAR_block_0_1, SMB_params_locals_, 2, (Optr)PSend13283, (Optr)PSend13286);
    // statements. 
    Send PSend13288 = new_Send((Optr)VAR_aBlock_0_0, SMB_statements, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray13290 = new_Array_with(2, (Optr)VAR_each_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend13292 = new_Send((Optr)self, SMB_visit_, 1, (Optr)VAR_each_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend13293 = new_Send((Optr)VAR_block_0_1, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)PSend13292);
    Array PThreadedCode13291 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send1, (Optr)PSend13292, (Optr)&t_send2, (Optr)PSend13293, (Optr)&t_method_return);
    Block PBlock13289 = new_Block_with(PArray13290, empty_Array, PThreadedCode13291, 1, PSend13293);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend13294 = new_Send((Optr)PSend13288, SMB_withIndexDo_, 1, (Optr)PBlock13289);
    Symbol SMB_popScope = new_Symbol(L"popScope");
    // popScope. 
    Send PSend13298 = new_Send((Optr)self, SMB_popScope, 0);
    Array PThreadedCode13297 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13298, (Optr)&t_block_return);
    Block PBlock13296 = new_Block_with(empty_Array, empty_Array, PThreadedCode13297, 1, PSend13298);
    // ifTrue:. 
    Send PSend13295 = new_Send((Optr)VAR_hasState_0_2, SMB_ifTrue_, 1, (Optr)PBlock13296);
    Array PThreadedCode13258 = instantiate_Array_with(ThreadedCode_Class, 0, 77, (Optr)&t_push1, (Optr)PAssign13259, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13263, (Optr)&t_send0, (Optr)PSend13262, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend13261, (Optr)&t_push_closure, (Optr)PBlock13264, (Optr)&t_send1, (Optr)PSend13260, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hasState_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend13269, (Optr)PBlock13270, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13277, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13280, (Optr)&t_send0, (Optr)PSend13279, (Optr)&t_send1, (Optr)PSend13278, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13281, (Optr)&t_send1, (Optr)PSend13282, (Optr)&t_send0, (Optr)PSend13283, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13284, (Optr)&t_send1, (Optr)PSend13285, (Optr)&t_send0, (Optr)PSend13286, (Optr)&t_send2, (Optr)PSend13287, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13288, (Optr)&t_push_closure, (Optr)PBlock13289, (Optr)&t_send1, (Optr)PSend13294, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hasState_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend13295, (Optr)PBlock13296, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_method_return);
    Method PMethod13255 = new_Method_with(PArray13256, PArray13257, empty_Array, PThreadedCode13258, 7, PAssign13259, PSend13269, PAssign13277, PSend13287, PSend13294, PSend13295, VAR_block_0_1);
    
    MethodClosure MC_SMB_visitBlock_ = new_MethodClosure((Method)PMethod13255, Smalltalk_Compiler_Compiler_Class);
=======
    Send PSend13227 = new_Send((Optr)PSend13228, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_or_ = new_Symbol(L"or:");
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend13232 = new_Send((Optr)VAR_aBlock_0_0, SMB_temporaries, 0);
    // size. 
    Send PSend13233 = new_Send((Optr)PSend13232, SMB_size, 0);
    // >. 
    Send PSend13234 = new_Send((Optr)PSend13233, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode13231 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13232, (Optr)&t_send0, (Optr)PSend13233, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend13234, (Optr)&t_block_return);
    Block PBlock13230 = new_Block_with(empty_Array, empty_Array, PThreadedCode13231, 1, PSend13234);
    // or:. 
    Send PSend13226 = new_Send((Optr)PSend13227, SMB_or_, 1, (Optr)PBlock13230);
    Assign PAssign13225 = new_Assign((Optr)VAR_hasState_0_2, (Optr)PSend13226);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_pushScope = new_Symbol(L"pushScope");
    // pushScope. 
    Send PSend13238 = new_Send((Optr)self, SMB_pushScope, 0);
    // parameters. 
    Send PSend13239 = new_Send((Optr)VAR_aBlock_0_0, SMB_parameters, 0);
    Symbol SMB_declareAll_ = new_Symbol(L"declareAll:");
    // declareAll:. 
    Send PSend13240 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_declareAll_, 1, (Optr)PSend13239);
    // temporaries. 
    Send PSend13241 = new_Send((Optr)VAR_aBlock_0_0, SMB_temporaries, 0);
    // declareAll:. 
    Send PSend13242 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_declareAll_, 1, (Optr)PSend13241);
    Array PThreadedCode13237 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13238, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13239, (Optr)&t_send1, (Optr)PSend13240, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13241, (Optr)&t_send1, (Optr)PSend13242, (Optr)&t_block_return);
    Block PBlock13236 = new_Block_with(empty_Array, empty_Array, PThreadedCode13237, 3, PSend13238, PSend13240, PSend13242);
    // ifTrue:. 
    Send PSend13235 = new_Send((Optr)VAR_hasState_0_2, SMB_ifTrue_, 1, (Optr)PBlock13236);
    Symbol SMB_createBlock_ = new_Symbol(L"createBlock:");
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13246 = new_Send((Optr)VAR_aBlock_0_0, SMB_statements, 0);
    // size. 
    Send PSend13245 = new_Send((Optr)PSend13246, SMB_size, 0);
    // createBlock:. 
    Send PSend13244 = new_Send((Optr)self, SMB_createBlock_, 1, (Optr)PSend13245);
    Assign PAssign13243 = new_Assign((Optr)VAR_block_0_1, (Optr)PSend13244);
    // parameters. 
    Send PSend13247 = new_Send((Optr)VAR_aBlock_0_0, SMB_parameters, 0);
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    // acceptOnCollection:. 
    Send PSend13248 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend13247);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend13249 = new_Send((Optr)PSend13248, SMB_asArray, 0);
    // temporaries. 
    Send PSend13250 = new_Send((Optr)VAR_aBlock_0_0, SMB_temporaries, 0);
    // acceptOnCollection:. 
    Send PSend13251 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend13250);
    // asArray. 
    Send PSend13252 = new_Send((Optr)PSend13251, SMB_asArray, 0);
    Symbol SMB_params_locals_ = new_Symbol(L"params:locals:");
    // params:locals:. 
    Send PSend13253 = new_Send((Optr)VAR_block_0_1, SMB_params_locals_, 2, (Optr)PSend13249, (Optr)PSend13252);
    // statements. 
    Send PSend13254 = new_Send((Optr)VAR_aBlock_0_0, SMB_statements, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray13256 = new_Array_with(2, (Optr)VAR_each_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend13258 = new_Send((Optr)self, SMB_visit_, 1, (Optr)VAR_each_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend13259 = new_Send((Optr)VAR_block_0_1, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)PSend13258);
    Array PThreadedCode13257 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send1, (Optr)PSend13258, (Optr)&t_send2, (Optr)PSend13259, (Optr)&t_method_return);
    Block PBlock13255 = new_Block_with(PArray13256, empty_Array, PThreadedCode13257, 1, PSend13259);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend13260 = new_Send((Optr)PSend13254, SMB_withIndexDo_, 1, (Optr)PBlock13255);
    Symbol SMB_popScope = new_Symbol(L"popScope");
    // popScope. 
    Send PSend13264 = new_Send((Optr)self, SMB_popScope, 0);
    Array PThreadedCode13263 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13264, (Optr)&t_block_return);
    Block PBlock13262 = new_Block_with(empty_Array, empty_Array, PThreadedCode13263, 1, PSend13264);
    // ifTrue:. 
    Send PSend13261 = new_Send((Optr)VAR_hasState_0_2, SMB_ifTrue_, 1, (Optr)PBlock13262);
    Array PThreadedCode13224 = instantiate_Array_with(ThreadedCode_Class, 0, 77, (Optr)&t_push1, (Optr)PAssign13225, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13229, (Optr)&t_send0, (Optr)PSend13228, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend13227, (Optr)&t_push_closure, (Optr)PBlock13230, (Optr)&t_send1, (Optr)PSend13226, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hasState_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend13235, (Optr)PBlock13236, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13243, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13246, (Optr)&t_send0, (Optr)PSend13245, (Optr)&t_send1, (Optr)PSend13244, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13247, (Optr)&t_send1, (Optr)PSend13248, (Optr)&t_send0, (Optr)PSend13249, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13250, (Optr)&t_send1, (Optr)PSend13251, (Optr)&t_send0, (Optr)PSend13252, (Optr)&t_send2, (Optr)PSend13253, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13254, (Optr)&t_push_closure, (Optr)PBlock13255, (Optr)&t_send1, (Optr)PSend13260, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hasState_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend13261, (Optr)PBlock13262, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_method_return);
    Method PMethod13221 = new_Method_with(PArray13222, PArray13223, empty_Array, PThreadedCode13224, 7, PAssign13225, PSend13235, PAssign13243, PSend13253, PSend13260, PSend13261, VAR_block_0_1);
    
    MethodClosure MC_SMB_visitBlock_ = new_MethodClosure((Method)PMethod13221, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitBlock_, MC_SMB_visitBlock_);
}


static void init_SMB_createSendTo_sized_() {
    Symbol SMB_createSendTo_sized_ = new_Symbol(L"createSendTo:sized:");
    Variable VAR_receiver_0_0 = new_Variable_named(L"receiver", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
<<<<<<< HEAD
    Array PArray13300 = new_Array_with(2, (Optr)VAR_receiver_0_0, (Optr)VAR_size_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray13303 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend13305 = new_Send((Optr)VAR_receiver_0_0, SMB_isKindOf_, 1, (Optr)ASTSuper_classReference);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend13309 = new_Send((Optr)PSuper_classReference, SMB_new_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13310 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend13309);
    Array PThreadedCode13308 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PSuper_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend13309, (Optr)&t_send1, (Optr)PSend13310, (Optr)&t_block_return);
    Block PBlock13307 = new_Block_with(empty_Array, empty_Array, PThreadedCode13308, 1, PSend13310);
    // ifTrue:. 
    Send PSend13306 = new_Send((Optr)PSend13305, SMB_ifTrue_, 1, (Optr)PBlock13307);
    // new:. 
    Send PSend13311 = new_Send((Optr)PSend_classReference, SMB_new_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend13312 = new_Send((Optr)self, SMB_visit_, 1, (Optr)VAR_receiver_0_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend13313 = new_Send((Optr)PSend13311, SMB_receiver_, 1, (Optr)PSend13312);
    Array PThreadedCode13304 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_push_class_reference, (Optr)ASTSuper_classReference, (Optr)&t_send1, (Optr)PSend13305, (Optr)&t_send_ifTrue_, (Optr)PSend13306, (Optr)PBlock13307, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PSend_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend13311, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_send1, (Optr)PSend13312, (Optr)&t_send1, (Optr)PSend13313, (Optr)&t_method_return);
    Block PBlock13302 = new_Block_with(PArray13303, empty_Array, PThreadedCode13304, 2, PSend13306, PSend13313);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13314 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock13302);
    Array PThreadedCode13301 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock13302, (Optr)&t_send1, (Optr)PSend13314, (Optr)&t_method_return);
    Method PMethod13299 = new_Method_with(PArray13300, empty_Array, empty_Array, PThreadedCode13301, 1, PSend13314);
    
    MethodClosure MC_SMB_createSendTo_sized_ = new_MethodClosure((Method)PMethod13299, Smalltalk_Compiler_Compiler_Class);
=======
    Array PArray13266 = new_Array_with(2, (Optr)VAR_receiver_0_0, (Optr)VAR_size_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray13269 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend13271 = new_Send((Optr)VAR_receiver_0_0, SMB_isKindOf_, 1, (Optr)ASTSuper_classReference);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend13275 = new_Send((Optr)PSuper_classReference, SMB_new_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13276 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend13275);
    Array PThreadedCode13274 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PSuper_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend13275, (Optr)&t_send1, (Optr)PSend13276, (Optr)&t_block_return);
    Block PBlock13273 = new_Block_with(empty_Array, empty_Array, PThreadedCode13274, 1, PSend13276);
    // ifTrue:. 
    Send PSend13272 = new_Send((Optr)PSend13271, SMB_ifTrue_, 1, (Optr)PBlock13273);
    // new:. 
    Send PSend13277 = new_Send((Optr)PSend_classReference, SMB_new_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend13278 = new_Send((Optr)self, SMB_visit_, 1, (Optr)VAR_receiver_0_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend13279 = new_Send((Optr)PSend13277, SMB_receiver_, 1, (Optr)PSend13278);
    Array PThreadedCode13270 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_push_class_reference, (Optr)ASTSuper_classReference, (Optr)&t_send1, (Optr)PSend13271, (Optr)&t_send_ifTrue_, (Optr)PSend13272, (Optr)PBlock13273, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PSend_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend13277, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_send1, (Optr)PSend13278, (Optr)&t_send1, (Optr)PSend13279, (Optr)&t_method_return);
    Block PBlock13268 = new_Block_with(PArray13269, empty_Array, PThreadedCode13270, 2, PSend13272, PSend13279);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13280 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock13268);
    Array PThreadedCode13267 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock13268, (Optr)&t_send1, (Optr)PSend13280, (Optr)&t_method_return);
    Method PMethod13265 = new_Method_with(PArray13266, empty_Array, empty_Array, PThreadedCode13267, 1, PSend13280);
    
    MethodClosure MC_SMB_createSendTo_sized_ = new_MethodClosure((Method)PMethod13265, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createSendTo_sized_, MC_SMB_createSendTo_sized_);
}


static void init_SMB_visitPath_() {
    Symbol SMB_visitPath_ = new_Symbol(L"visitPath:");
    Variable VAR_aPath_0_0 = new_Variable_named(L"aPath", 0);
<<<<<<< HEAD
    Array PArray13316 = new_Array_with(1, (Optr)VAR_aPath_0_0);
    Symbol SMB_package = new_Symbol(L"package");
    // package. 
    Send PSend13318 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, SMB_package, 0);
    Symbol SMB_path = new_Symbol(L"path");
    // path. 
    Send PSend13319 = new_Send((Optr)VAR_aPath_0_0, SMB_path, 0);
    Symbol SMB_lookup_ = new_Symbol(L"lookup:");
    // lookup:. 
    Send PSend13320 = new_Send((Optr)PSend13318, SMB_lookup_, 1, (Optr)PSend13319);
    Symbol SMB_asNode = new_Symbol(L"asNode");
    // asNode. 
    Send PSend13321 = new_Send((Optr)PSend13320, SMB_asNode, 0);
    Array PThreadedCode13317 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send0, (Optr)PSend13318, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_send0, (Optr)PSend13319, (Optr)&t_send1, (Optr)PSend13320, (Optr)&t_send0, (Optr)PSend13321, (Optr)&t_method_return);
    Method PMethod13315 = new_Method_with(PArray13316, empty_Array, empty_Array, PThreadedCode13317, 1, PSend13321);
    
    MethodClosure MC_SMB_visitPath_ = new_MethodClosure((Method)PMethod13315, Smalltalk_Compiler_Compiler_Class);
=======
    Array PArray13282 = new_Array_with(1, (Optr)VAR_aPath_0_0);
    Symbol SMB_package = new_Symbol(L"package");
    // package. 
    Send PSend13284 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, SMB_package, 0);
    Symbol SMB_path = new_Symbol(L"path");
    // path. 
    Send PSend13285 = new_Send((Optr)VAR_aPath_0_0, SMB_path, 0);
    Symbol SMB_lookup_ = new_Symbol(L"lookup:");
    // lookup:. 
    Send PSend13286 = new_Send((Optr)PSend13284, SMB_lookup_, 1, (Optr)PSend13285);
    Symbol SMB_asNode = new_Symbol(L"asNode");
    // asNode. 
    Send PSend13287 = new_Send((Optr)PSend13286, SMB_asNode, 0);
    Array PThreadedCode13283 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send0, (Optr)PSend13284, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_send0, (Optr)PSend13285, (Optr)&t_send1, (Optr)PSend13286, (Optr)&t_send0, (Optr)PSend13287, (Optr)&t_method_return);
    Method PMethod13281 = new_Method_with(PArray13282, empty_Array, empty_Array, PThreadedCode13283, 1, PSend13287);
    
    MethodClosure MC_SMB_visitPath_ = new_MethodClosure((Method)PMethod13281, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitPath_, MC_SMB_visitPath_);
}


static void init_SMB_visitBraceExpression_() {
    Symbol SMB_visitBraceExpression_ = new_Symbol(L"visitBraceExpression:");
    Variable VAR_braceExpression_0_0 = new_Variable_named(L"braceExpression", 0);
<<<<<<< HEAD
    Array PArray13323 = new_Array_with(1, (Optr)VAR_braceExpression_0_0);
    String string_13325 = new_String(L"Brace expressions are not supported by the compiler. Patches welcome!");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_13325_Const = new_Constant((Optr)string_13325);
    // error:. 
    Send PSend13326 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_13325_Const);
    Array PThreadedCode13324 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_13325, (Optr)&t_send1, (Optr)PSend13326, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13322 = new_Method_with(PArray13323, empty_Array, empty_Array, PThreadedCode13324, 2, PSend13326, self);
    
    MethodClosure MC_SMB_visitBraceExpression_ = new_MethodClosure((Method)PMethod13322, Smalltalk_Compiler_Compiler_Class);
=======
    Array PArray13289 = new_Array_with(1, (Optr)VAR_braceExpression_0_0);
    String string_13291 = new_String(L"Brace expressions are not supported by the compiler. Patches welcome!");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_13291_Const = new_Constant((Optr)string_13291);
    // error:. 
    Send PSend13292 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_13291_Const);
    Array PThreadedCode13290 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_13291, (Optr)&t_send1, (Optr)PSend13292, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13288 = new_Method_with(PArray13289, empty_Array, empty_Array, PThreadedCode13290, 2, PSend13292, self);
    
    MethodClosure MC_SMB_visitBraceExpression_ = new_MethodClosure((Method)PMethod13288, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitBraceExpression_, MC_SMB_visitBraceExpression_);
}


static void init_SMB_world_() {
    Symbol SMB_world_ = new_Symbol(L"world:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray13328 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign13330 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_world, (Optr)VAR_anObject_0_0);
    Array PThreadedCode13329 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign13330, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13327 = new_Method_with(PArray13328, empty_Array, empty_Array, PThreadedCode13329, 2, PAssign13330, self);
    
    MethodClosure MC_SMB_world_ = new_MethodClosure((Method)PMethod13327, Smalltalk_Compiler_Compiler_Class);
=======
    Array PArray13294 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign13296 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_world, (Optr)VAR_anObject_0_0);
    Array PThreadedCode13295 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign13296, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13293 = new_Method_with(PArray13294, empty_Array, empty_Array, PThreadedCode13295, 2, PAssign13296, self);
    
    MethodClosure MC_SMB_world_ = new_MethodClosure((Method)PMethod13293, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_world_, MC_SMB_world_);
}


static void init_SMB_pushScope() {
    Symbol SMB_pushScope = new_Symbol(L"pushScope");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
<<<<<<< HEAD
    Send PSend13334 = new_Send((Optr)PSubScope_classReference, SMB_new_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_scope);
    Assign PAssign13333 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)PSend13334);
    Array PThreadedCode13332 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign13333, (Optr)&t_push_class_reference, (Optr)PSubScope_classReference, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send1, (Optr)PSend13334, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13331 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13332, 2, PAssign13333, self);
    
    MethodClosure MC_SMB_pushScope = new_MethodClosure((Method)PMethod13331, Smalltalk_Compiler_Compiler_Class);
=======
    Send PSend13300 = new_Send((Optr)PSubScope_classReference, SMB_new_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_scope);
    Assign PAssign13299 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)PSend13300);
    Array PThreadedCode13298 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign13299, (Optr)&t_push_class_reference, (Optr)PSubScope_classReference, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send1, (Optr)PSend13300, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13297 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13298, 2, PAssign13299, self);
    
    MethodClosure MC_SMB_pushScope = new_MethodClosure((Method)PMethod13297, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_pushScope, MC_SMB_pushScope);
}


static void init_SMB_createPInfo() {
    Symbol SMB_createPInfo = new_Symbol(L"createPInfo");
    Variable VAR_info_0_0 = new_Variable_named(L"info", 0);
<<<<<<< HEAD
    Array PArray13336 = new_Array_with(1, (Optr)VAR_info_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13339 = new_Send((Optr)PInfo_classReference, SMB_new, 0);
    Assign PAssign13338 = new_Assign((Optr)VAR_info_0_0, (Optr)PSend13339);
    Symbol SMB_sourceObject = new_Symbol(L"sourceObject");
    // sourceObject. 
    Send PSend13340 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_currentMethod, SMB_sourceObject, 0);
    Symbol SMB_sourceFile_ = new_Symbol(L"sourceFile:");
    // sourceFile:. 
    Send PSend13341 = new_Send((Optr)VAR_info_0_0, SMB_sourceFile_, 1, (Optr)PSend13340);
=======
    Array PArray13302 = new_Array_with(1, (Optr)VAR_info_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13305 = new_Send((Optr)PInfo_classReference, SMB_new, 0);
    Assign PAssign13304 = new_Assign((Optr)VAR_info_0_0, (Optr)PSend13305);
    Symbol SMB_sourceObject = new_Symbol(L"sourceObject");
    // sourceObject. 
    Send PSend13306 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_currentMethod, SMB_sourceObject, 0);
    Symbol SMB_sourceFile_ = new_Symbol(L"sourceFile:");
    // sourceFile:. 
    Send PSend13307 = new_Send((Optr)VAR_info_0_0, SMB_sourceFile_, 1, (Optr)PSend13306);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_line_ = new_Symbol(L"line:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // line:. 
<<<<<<< HEAD
    Send PSend13342 = new_Send((Optr)VAR_info_0_0, SMB_line_, 1, (Optr)int_1_Const);
    Symbol SMB_column_ = new_Symbol(L"column:");
    // column:. 
    Send PSend13343 = new_Send((Optr)VAR_info_0_0, SMB_column_, 1, (Optr)int_1_Const);
    Array PThreadedCode13337 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign13338, (Optr)&t_push_class_reference, (Optr)PInfo_classReference, (Optr)&t_send0, (Optr)PSend13339, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_info_0_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_currentMethod, (Optr)&t_send0, (Optr)PSend13340, (Optr)&t_send1, (Optr)PSend13341, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_info_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend13342, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_info_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend13343, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_info_0_0, (Optr)&t_method_return);
    Method PMethod13335 = new_Method_with(empty_Array, PArray13336, empty_Array, PThreadedCode13337, 5, PAssign13338, PSend13341, PSend13342, PSend13343, VAR_info_0_0);
    
    MethodClosure MC_SMB_createPInfo = new_MethodClosure((Method)PMethod13335, Smalltalk_Compiler_Compiler_Class);
=======
    Send PSend13308 = new_Send((Optr)VAR_info_0_0, SMB_line_, 1, (Optr)int_1_Const);
    Symbol SMB_column_ = new_Symbol(L"column:");
    // column:. 
    Send PSend13309 = new_Send((Optr)VAR_info_0_0, SMB_column_, 1, (Optr)int_1_Const);
    Array PThreadedCode13303 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign13304, (Optr)&t_push_class_reference, (Optr)PInfo_classReference, (Optr)&t_send0, (Optr)PSend13305, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_info_0_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_currentMethod, (Optr)&t_send0, (Optr)PSend13306, (Optr)&t_send1, (Optr)PSend13307, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_info_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend13308, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_info_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend13309, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_info_0_0, (Optr)&t_method_return);
    Method PMethod13301 = new_Method_with(empty_Array, PArray13302, empty_Array, PThreadedCode13303, 5, PAssign13304, PSend13307, PSend13308, PSend13309, VAR_info_0_0);
    
    MethodClosure MC_SMB_createPInfo = new_MethodClosure((Method)PMethod13301, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createPInfo, MC_SMB_createPInfo);
}


static void init_SMB_visitKeywordSelector_() {
    Symbol SMB_visitKeywordSelector_ = new_Symbol(L"visitKeywordSelector:");
    Variable VAR_anASTKeywordSelector_0_0 = new_Variable_named(L"anASTKeywordSelector", 0);
<<<<<<< HEAD
    Array PArray13345 = new_Array_with(1, (Optr)VAR_anASTKeywordSelector_0_0);
    Symbol SMB_selectorSymbol = new_Symbol(L"selectorSymbol");
    // selectorSymbol. 
    Send PSend13347 = new_Send((Optr)VAR_anASTKeywordSelector_0_0, SMB_selectorSymbol, 0);
    Array PThreadedCode13346 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_anASTKeywordSelector_0_0, (Optr)&t_send0, (Optr)PSend13347, (Optr)&t_method_return);
    Method PMethod13344 = new_Method_with(PArray13345, empty_Array, empty_Array, PThreadedCode13346, 1, PSend13347);
    
    MethodClosure MC_SMB_visitKeywordSelector_ = new_MethodClosure((Method)PMethod13344, Smalltalk_Compiler_Compiler_Class);
=======
    Array PArray13311 = new_Array_with(1, (Optr)VAR_anASTKeywordSelector_0_0);
    Symbol SMB_selectorSymbol = new_Symbol(L"selectorSymbol");
    // selectorSymbol. 
    Send PSend13313 = new_Send((Optr)VAR_anASTKeywordSelector_0_0, SMB_selectorSymbol, 0);
    Array PThreadedCode13312 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_anASTKeywordSelector_0_0, (Optr)&t_send0, (Optr)PSend13313, (Optr)&t_method_return);
    Method PMethod13310 = new_Method_with(PArray13311, empty_Array, empty_Array, PThreadedCode13312, 1, PSend13313);
    
    MethodClosure MC_SMB_visitKeywordSelector_ = new_MethodClosure((Method)PMethod13310, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitKeywordSelector_, MC_SMB_visitKeywordSelector_);
}


static void init_SMB_visitBoolean_() {
    Symbol SMB_visitBoolean_ = new_Symbol(L"visitBoolean:");
    Variable VAR_aPinocchioBoolean_0_0 = new_Variable_named(L"aPinocchioBoolean", 0);
<<<<<<< HEAD
    Array PArray13349 = new_Array_with(1, (Optr)VAR_aPinocchioBoolean_0_0);
    Array PThreadedCode13350 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_aPinocchioBoolean_0_0, (Optr)&t_method_return);
    Method PMethod13348 = new_Method_with(PArray13349, empty_Array, empty_Array, PThreadedCode13350, 1, VAR_aPinocchioBoolean_0_0);
    
    MethodClosure MC_SMB_visitBoolean_ = new_MethodClosure((Method)PMethod13348, Smalltalk_Compiler_Compiler_Class);
=======
    Array PArray13315 = new_Array_with(1, (Optr)VAR_aPinocchioBoolean_0_0);
    Array PThreadedCode13316 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_aPinocchioBoolean_0_0, (Optr)&t_method_return);
    Method PMethod13314 = new_Method_with(PArray13315, empty_Array, empty_Array, PThreadedCode13316, 1, VAR_aPinocchioBoolean_0_0);
    
    MethodClosure MC_SMB_visitBoolean_ = new_MethodClosure((Method)PMethod13314, Smalltalk_Compiler_Compiler_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitBoolean_, MC_SMB_visitBoolean_);
}


static void init_class_SMB_compile_on_() {
    Symbol SMB_compile_on_ = new_Symbol(L"compile:on:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_aClass_0_1 = new_Variable_named(L"aClass", 0);
<<<<<<< HEAD
    Array PArray13352 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aClass_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray13355 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_pclass_ = new_Symbol(L"pclass:");
    // pclass:. 
    Send PSend13357 = new_Send((Optr)VAR__receiver__1_0, SMB_pclass_, 1, (Optr)VAR_aClass_0_1);
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend13358 = new_Send((Optr)VAR__receiver__1_0, SMB_compile_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode13356 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aClass_0_1, (Optr)&t_send1, (Optr)PSend13357, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend13358, (Optr)&t_method_return);
    Block PBlock13354 = new_Block_with(PArray13355, empty_Array, PThreadedCode13356, 2, PSend13357, PSend13358);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13359 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend13360 = new_Send((Optr)PBlock13354, SMB_value_, 1, (Optr)PSend13359);
    Array PThreadedCode13353 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock13354, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13359, (Optr)&t_send1, (Optr)PSend13360, (Optr)&t_method_return);
    Method PMethod13351 = new_Method_with(PArray13352, empty_Array, empty_Array, PThreadedCode13353, 1, PSend13360);
    
    MethodClosure MC_SMB_compile_on_ = new_MethodClosure((Method)PMethod13351, HEADER(Smalltalk_Compiler_Compiler_Class));
=======
    Array PArray13318 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aClass_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray13321 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_pclass_ = new_Symbol(L"pclass:");
    // pclass:. 
    Send PSend13323 = new_Send((Optr)VAR__receiver__1_0, SMB_pclass_, 1, (Optr)VAR_aClass_0_1);
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend13324 = new_Send((Optr)VAR__receiver__1_0, SMB_compile_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode13322 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aClass_0_1, (Optr)&t_send1, (Optr)PSend13323, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend13324, (Optr)&t_method_return);
    Block PBlock13320 = new_Block_with(PArray13321, empty_Array, PThreadedCode13322, 2, PSend13323, PSend13324);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13325 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend13326 = new_Send((Optr)PBlock13320, SMB_value_, 1, (Optr)PSend13325);
    Array PThreadedCode13319 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock13320, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13325, (Optr)&t_send1, (Optr)PSend13326, (Optr)&t_method_return);
    Method PMethod13317 = new_Method_with(PArray13318, empty_Array, empty_Array, PThreadedCode13319, 1, PSend13326);
    
    MethodClosure MC_SMB_compile_on_ = new_MethodClosure((Method)PMethod13317, HEADER(Smalltalk_Compiler_Compiler_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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