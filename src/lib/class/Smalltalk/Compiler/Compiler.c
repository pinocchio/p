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
    Array PArray12781 = new_Array_with(1, (Optr)VAR_aBinaryExpression_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12784 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12786 = new_Send((Optr)VAR_aBinaryExpression_0_0, SMB_selector, 0);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend12787 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)PSend12786);
    Symbol SMB_argument = new_Symbol(L"argument");
    // argument. 
    Send PSend12788 = new_Send((Optr)VAR_aBinaryExpression_0_0, SMB_argument, 0);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend12789 = new_Send((Optr)self, SMB_visit_, 1, (Optr)PSend12788);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend12790 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend12789);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend12791 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode12785 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aBinaryExpression_0_0, (Optr)&t_send0, (Optr)PSend12786, (Optr)&t_send1, (Optr)PSend12787, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBinaryExpression_0_0, (Optr)&t_send0, (Optr)PSend12788, (Optr)&t_send1, (Optr)PSend12789, (Optr)&t_send2, (Optr)PSend12790, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend12791, (Optr)&t_method_return);
    Block PBlock12783 = new_Block_with(PArray12784, empty_Array, PThreadedCode12785, 3, PSend12787, PSend12790, PSend12791);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend12792 = new_Send((Optr)VAR_aBinaryExpression_0_0, SMB_receiver, 0);
    Symbol SMB_createSendTo_sized_ = new_Symbol(L"createSendTo:sized:");
    // createSendTo:sized:. 
    Send PSend12793 = new_Send((Optr)self, SMB_createSendTo_sized_, 2, (Optr)PSend12792, (Optr)int_1_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12794 = new_Send((Optr)PBlock12783, SMB_value_, 1, (Optr)PSend12793);
    Array PThreadedCode12782 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_closure, (Optr)PBlock12783, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBinaryExpression_0_0, (Optr)&t_send0, (Optr)PSend12792, (Optr)&t_push_1, (Optr)&t_send2, (Optr)PSend12793, (Optr)&t_send1, (Optr)PSend12794, (Optr)&t_method_return);
    Method PMethod12780 = new_Method_with(PArray12781, empty_Array, empty_Array, PThreadedCode12782, 1, PSend12794);
    
    MethodClosure MC_SMB_visitBinaryExpression_ = new_MethodClosure((Method)PMethod12780, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitBinaryExpression_, MC_SMB_visitBinaryExpression_);
}


static void init_SMB_createBlock_() {
    Symbol SMB_createBlock_ = new_Symbol(L"createBlock:");
    Variable VAR_size_0_0 = new_Variable_named(L"size", 0);
    Array PArray12796 = new_Array_with(1, (Optr)VAR_size_0_0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Array PArray12797 = new_Array_with(1, (Optr)VAR_block_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12800 = new_Send((Optr)PBlock_classReference, SMB_new_, 1, (Optr)VAR_size_0_0);
    Assign PAssign12799 = new_Assign((Optr)VAR_block_0_1, (Optr)PSend12800);
    Array PThreadedCode12798 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign12799, (Optr)&t_push_class_reference, (Optr)PBlock_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend12800, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_method_return);
    Method PMethod12795 = new_Method_with(PArray12796, PArray12797, empty_Array, PThreadedCode12798, 2, PAssign12799, VAR_block_0_1);
    
    MethodClosure MC_SMB_createBlock_ = new_MethodClosure((Method)PMethod12795, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createBlock_, MC_SMB_createBlock_);
}


static void init_SMB_visitReturnExpression_() {
    Symbol SMB_visitReturnExpression_ = new_Symbol(L"visitReturnExpression:");
    Variable VAR_aReturnExpression_0_0 = new_Variable_named(L"aReturnExpression", 0);
    Array PArray12802 = new_Array_with(1, (Optr)VAR_aReturnExpression_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12805 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend12807 = new_Send((Optr)VAR_aReturnExpression_0_0, SMB_expression, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend12808 = new_Send((Optr)PSend12807, SMB_accept_, 1, (Optr)self);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend12809 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend12808);
    Symbol SMB_currentCallecVariable = new_Symbol(L"currentCallecVariable");
    // currentCallecVariable. 
    Send PSend12810 = new_Send((Optr)self, SMB_currentCallecVariable, 0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend12811 = new_Send((Optr)VAR__receiver__1_0, SMB_receiver_, 1, (Optr)PSend12810);
    Symbol  SMB_escape_ = new_Symbol(L"escape:");
    Symbol SMB_message_ = new_Symbol(L"message:");
    Constant SMB_escape__Const = new_Constant((Optr)SMB_escape_);
    // message:. 
    Send PSend12812 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)SMB_escape__Const);
    Array PThreadedCode12806 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_aReturnExpression_0_0, (Optr)&t_send0, (Optr)PSend12807, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12808, (Optr)&t_send2, (Optr)PSend12809, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12810, (Optr)&t_send1, (Optr)PSend12811, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_escape_, (Optr)&t_send1, (Optr)PSend12812, (Optr)&t_method_return);
    Block PBlock12804 = new_Block_with(PArray12805, empty_Array, PThreadedCode12806, 3, PSend12809, PSend12811, PSend12812);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12813 = new_Send((Optr)PSend_classReference, SMB_new_, 1, (Optr)int_1_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12814 = new_Send((Optr)PBlock12804, SMB_value_, 1, (Optr)PSend12813);
    Array PThreadedCode12803 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock12804, (Optr)&t_push_class_reference, (Optr)PSend_classReference, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12813, (Optr)&t_send1, (Optr)PSend12814, (Optr)&t_method_return);
    Method PMethod12801 = new_Method_with(PArray12802, empty_Array, empty_Array, PThreadedCode12803, 1, PSend12814);
    
    MethodClosure MC_SMB_visitReturnExpression_ = new_MethodClosure((Method)PMethod12801, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitReturnExpression_, MC_SMB_visitReturnExpression_);
}


static void init_SMB_visitArray_() {
    Symbol SMB_visitArray_ = new_Symbol(L"visitArray:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray12816 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    String string_12818 = new_String(L"Literal arrays are not yet supported by the compiler. Patches welcome!");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_12818_Const = new_Constant((Optr)string_12818);
    // error:. 
    Send PSend12819 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_12818_Const);
    Array PThreadedCode12817 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_12818, (Optr)&t_send1, (Optr)PSend12819, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12815 = new_Method_with(PArray12816, empty_Array, empty_Array, PThreadedCode12817, 2, PSend12819, self);
    
    MethodClosure MC_SMB_visitArray_ = new_MethodClosure((Method)PMethod12815, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitArray_, MC_SMB_visitArray_);
}


static void init_SMB_visitMessageExpression_() {
    Symbol SMB_visitMessageExpression_ = new_Symbol(L"visitMessageExpression:");
    Variable VAR_aMessageExpression_0_0 = new_Variable_named(L"aMessageExpression", 0);
    Array PArray12821 = new_Array_with(1, (Optr)VAR_aMessageExpression_0_0);
    Variable VAR_arguments_0_1 = new_Variable_named(L"arguments", 0);
    Array PArray12822 = new_Array_with(1, (Optr)VAR_arguments_0_1);
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    Symbol SMB_arguments = new_Symbol(L"arguments");
    // arguments. 
    Send PSend12826 = new_Send((Optr)VAR_aMessageExpression_0_0, SMB_arguments, 0);
    // acceptOnCollection:. 
    Send PSend12825 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend12826);
    Assign PAssign12824 = new_Assign((Optr)VAR_arguments_0_1, (Optr)PSend12825);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12828 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12830 = new_Send((Optr)VAR_aMessageExpression_0_0, SMB_selector, 0);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend12831 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)PSend12830);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend12832 = new_Send((Optr)VAR__receiver__1_0, SMB_arguments_, 1, (Optr)VAR_arguments_0_1);
    Array PThreadedCode12829 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aMessageExpression_0_0, (Optr)&t_send0, (Optr)PSend12830, (Optr)&t_send1, (Optr)PSend12831, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_arguments_0_1, (Optr)&t_send1, (Optr)PSend12832, (Optr)&t_method_return);
    Block PBlock12827 = new_Block_with(PArray12828, empty_Array, PThreadedCode12829, 2, PSend12831, PSend12832);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend12833 = new_Send((Optr)VAR_aMessageExpression_0_0, SMB_receiver, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12834 = new_Send((Optr)VAR_arguments_0_1, SMB_size, 0);
    Symbol SMB_createSendTo_sized_ = new_Symbol(L"createSendTo:sized:");
    // createSendTo:sized:. 
    Send PSend12835 = new_Send((Optr)self, SMB_createSendTo_sized_, 2, (Optr)PSend12833, (Optr)PSend12834);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12836 = new_Send((Optr)PBlock12827, SMB_value_, 1, (Optr)PSend12835);
    Array PThreadedCode12823 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign12824, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessageExpression_0_0, (Optr)&t_send0, (Optr)PSend12826, (Optr)&t_send1, (Optr)PSend12825, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock12827, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessageExpression_0_0, (Optr)&t_send0, (Optr)PSend12833, (Optr)&t_push_variable, (Optr)VAR_arguments_0_1, (Optr)&t_send0, (Optr)PSend12834, (Optr)&t_send2, (Optr)PSend12835, (Optr)&t_send1, (Optr)PSend12836, (Optr)&t_method_return);
    Method PMethod12820 = new_Method_with(PArray12821, PArray12822, empty_Array, PThreadedCode12823, 2, PAssign12824, PSend12836);
    
    MethodClosure MC_SMB_visitMessageExpression_ = new_MethodClosure((Method)PMethod12820, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitMessageExpression_, MC_SMB_visitMessageExpression_);
}


static void init_SMB_visitAssignmentExpression_() {
    Symbol SMB_visitAssignmentExpression_ = new_Symbol(L"visitAssignmentExpression:");
    Variable VAR_anAssignmentExpression_0_0 = new_Variable_named(L"anAssignmentExpression", 0);
    Array PArray12838 = new_Array_with(1, (Optr)VAR_anAssignmentExpression_0_0);
    Variable VAR_assign_0_1 = new_Variable_named(L"assign", 0);
    Array PArray12839 = new_Array_with(1, (Optr)VAR_assign_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12844 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_variable = new_Symbol(L"variable");
    // variable. 
    Send PSend12846 = new_Send((Optr)VAR_anAssignmentExpression_0_0, SMB_variable, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend12847 = new_Send((Optr)PSend12846, SMB_accept_, 1, (Optr)self);
    Symbol SMB_variable_ = new_Symbol(L"variable:");
    // variable:. 
    Send PSend12848 = new_Send((Optr)VAR__receiver__1_0, SMB_variable_, 1, (Optr)PSend12847);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend12849 = new_Send((Optr)VAR_anAssignmentExpression_0_0, SMB_expression, 0);
    // accept:. 
    Send PSend12850 = new_Send((Optr)PSend12849, SMB_accept_, 1, (Optr)self);
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    // expression:. 
    Send PSend12851 = new_Send((Optr)VAR__receiver__1_0, SMB_expression_, 1, (Optr)PSend12850);
    Array PThreadedCode12845 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anAssignmentExpression_0_0, (Optr)&t_send0, (Optr)PSend12846, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12847, (Optr)&t_send1, (Optr)PSend12848, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anAssignmentExpression_0_0, (Optr)&t_send0, (Optr)PSend12849, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12850, (Optr)&t_send1, (Optr)PSend12851, (Optr)&t_method_return);
    Block PBlock12843 = new_Block_with(PArray12844, empty_Array, PThreadedCode12845, 2, PSend12848, PSend12851);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12852 = new_Send((Optr)PAssign_classReference, SMB_new, 0);
    // value:. 
    Send PSend12842 = new_Send((Optr)PBlock12843, SMB_value_, 1, (Optr)PSend12852);
    Assign PAssign12841 = new_Assign((Optr)VAR_assign_0_1, (Optr)PSend12842);
    // variable. 
    Send PSend12853 = new_Send((Optr)VAR_assign_0_1, SMB_variable, 0);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend12854 = new_Send((Optr)PSend12853, SMB_should, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend12855 = new_Send((Optr)PSend12854, SMB_not, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend12856 = new_Send((Optr)PSend12855, SMB__equals_, 1, (Optr)nil_Const);
    // expression. 
    Send PSend12857 = new_Send((Optr)VAR_assign_0_1, SMB_expression, 0);
    // should. 
    Send PSend12858 = new_Send((Optr)PSend12857, SMB_should, 0);
    // not. 
    Send PSend12859 = new_Send((Optr)PSend12858, SMB_not, 0);
    // =. 
    Send PSend12860 = new_Send((Optr)PSend12859, SMB__equals_, 1, (Optr)nil_Const);
    Array PThreadedCode12840 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign12841, (Optr)&t_push_closure, (Optr)PBlock12843, (Optr)&t_push_class_reference, (Optr)PAssign_classReference, (Optr)&t_send0, (Optr)PSend12852, (Optr)&t_send1, (Optr)PSend12842, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_assign_0_1, (Optr)&t_send0, (Optr)PSend12853, (Optr)&t_send0, (Optr)PSend12854, (Optr)&t_send0, (Optr)PSend12855, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend12856, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_assign_0_1, (Optr)&t_send0, (Optr)PSend12857, (Optr)&t_send0, (Optr)PSend12858, (Optr)&t_send0, (Optr)PSend12859, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend12860, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_assign_0_1, (Optr)&t_method_return);
    Method PMethod12837 = new_Method_with(PArray12838, PArray12839, empty_Array, PThreadedCode12840, 4, PAssign12841, PSend12856, PSend12860, VAR_assign_0_1);
    
    MethodClosure MC_SMB_visitAssignmentExpression_ = new_MethodClosure((Method)PMethod12837, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitAssignmentExpression_, MC_SMB_visitAssignmentExpression_);
}


static void init_SMB_currentCallecVariable_() {
    Symbol SMB_currentCallecVariable_ = new_Symbol(L"currentCallecVariable:");
    Variable VAR_aPinocchioVariable_0_0 = new_Variable_named(L"aPinocchioVariable", 0);
    Array PArray12862 = new_Array_with(1, (Optr)VAR_aPinocchioVariable_0_0);
    Assign PAssign12864 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_currentCallecVariable, (Optr)VAR_aPinocchioVariable_0_0);
    Array PThreadedCode12863 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign12864, (Optr)&t_push_variable, (Optr)VAR_aPinocchioVariable_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12861 = new_Method_with(PArray12862, empty_Array, empty_Array, PThreadedCode12863, 2, PAssign12864, self);
    
    MethodClosure MC_SMB_currentCallecVariable_ = new_MethodClosure((Method)PMethod12861, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_currentCallecVariable_, MC_SMB_currentCallecVariable_);
}


static void init_SMB_visitUnaryAnnotation_() {
    Symbol SMB_visitUnaryAnnotation_ = new_Symbol(L"visitUnaryAnnotation:");
    Variable VAR_anASTUnaryAnnotation_0_0 = new_Variable_named(L"anASTUnaryAnnotation", 0);
    Array PArray12866 = new_Array_with(1, (Optr)VAR_anASTUnaryAnnotation_0_0);
    Variable VAR_annotation_0_1 = new_Variable_named(L"annotation", 0);
    Array PArray12867 = new_Array_with(1, (Optr)VAR_annotation_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // new:. 
    Send PSend12870 = new_Send((Optr)PAnnotation_classReference, SMB_new_, 1, (Optr)int_0_Const);
    Assign PAssign12869 = new_Assign((Optr)VAR_annotation_0_1, (Optr)PSend12870);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12871 = new_Send((Optr)VAR_anASTUnaryAnnotation_0_0, SMB_selector, 0);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend12872 = new_Send((Optr)self, SMB_visit_, 1, (Optr)PSend12871);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend12873 = new_Send((Optr)VAR_annotation_0_1, SMB_selector_, 1, (Optr)PSend12872);
    Array PThreadedCode12868 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign12869, (Optr)&t_push_class_reference, (Optr)PAnnotation_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12870, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_annotation_0_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anASTUnaryAnnotation_0_0, (Optr)&t_send0, (Optr)PSend12871, (Optr)&t_send1, (Optr)PSend12872, (Optr)&t_send1, (Optr)PSend12873, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_annotation_0_1, (Optr)&t_method_return);
    Method PMethod12865 = new_Method_with(PArray12866, PArray12867, empty_Array, PThreadedCode12868, 3, PAssign12869, PSend12873, VAR_annotation_0_1);
    
    MethodClosure MC_SMB_visitUnaryAnnotation_ = new_MethodClosure((Method)PMethod12865, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitUnaryAnnotation_, MC_SMB_visitUnaryAnnotation_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper12876 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12878 = new_Send((Optr)PRootScope_classReference, SMB_new, 0);
    Assign PAssign12877 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)PSend12878);
    Assign PAssign12879 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_rootScope, (Optr)slot_Smalltalk_Compiler_Compiler_scope);
    // new. 
    Send PSend12881 = new_Send((Optr)PThreadedCompiler_classReference, SMB_new, 0);
    Assign PAssign12880 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_threadedCompiler, (Optr)PSend12881);
    Array PThreadedCode12875 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper12876, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12877, (Optr)&t_push_class_reference, (Optr)PRootScope_classReference, (Optr)&t_send0, (Optr)PSend12878, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12879, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12880, (Optr)&t_push_class_reference, (Optr)PThreadedCompiler_classReference, (Optr)&t_send0, (Optr)PSend12881, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12874 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12875, 5, PSuper12876, PAssign12877, PAssign12879, PAssign12880, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod12874, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_visitUnarySelector_() {
    Symbol SMB_visitUnarySelector_ = new_Symbol(L"visitUnarySelector:");
    Variable VAR_aUnarySelector_0_0 = new_Variable_named(L"aUnarySelector", 0);
    Array PArray12883 = new_Array_with(1, (Optr)VAR_aUnarySelector_0_0);
    Symbol SMB_selectorSymbol = new_Symbol(L"selectorSymbol");
    // selectorSymbol. 
    Send PSend12885 = new_Send((Optr)VAR_aUnarySelector_0_0, SMB_selectorSymbol, 0);
    Array PThreadedCode12884 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aUnarySelector_0_0, (Optr)&t_send0, (Optr)PSend12885, (Optr)&t_method_return);
    Method PMethod12882 = new_Method_with(PArray12883, empty_Array, empty_Array, PThreadedCode12884, 1, PSend12885);
    
    MethodClosure MC_SMB_visitUnarySelector_ = new_MethodClosure((Method)PMethod12882, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitUnarySelector_, MC_SMB_visitUnarySelector_);
}


static void init_SMB_compile_() {
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray12887 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    // parse:. 
    Send PSend12889 = new_Send((Optr)self, SMB_parse_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_sourceObject_ = new_Symbol(L"sourceObject:");
    // sourceObject:. 
    Send PSend12890 = new_Send((Optr)PSend12889, SMB_sourceObject_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend12891 = new_Send((Optr)self, SMB_visit_, 1, (Optr)PSend12890);
    Array PThreadedCode12888 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend12889, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend12890, (Optr)&t_send1, (Optr)PSend12891, (Optr)&t_method_return);
    Method PMethod12886 = new_Method_with(PArray12887, empty_Array, empty_Array, PThreadedCode12888, 1, PSend12891);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod12886, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_compile_, MC_SMB_compile_);
}


static void init_SMB_compileThreadedMethod_() {
    Symbol SMB_compileThreadedMethod_ = new_Symbol(L"compileThreadedMethod:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Array PArray12893 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend12895 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_threadedCompiler, SMB_compile_, 1, (Optr)VAR_aMethod_0_0);
    Array PThreadedCode12894 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_threadedCompiler, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend12895, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12892 = new_Method_with(PArray12893, empty_Array, empty_Array, PThreadedCode12894, 2, PSend12895, self);
    
    MethodClosure MC_SMB_compileThreadedMethod_ = new_MethodClosure((Method)PMethod12892, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_compileThreadedMethod_, MC_SMB_compileThreadedMethod_);
}


static void init_SMB_pclass() {
    Symbol SMB_pclass = new_Symbol(L"pclass");
    Array PThreadedCode12897 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_method_return);
    Method PMethod12896 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12897, 1, slot_Smalltalk_Compiler_Compiler_pinocchioClass);
    
    MethodClosure MC_SMB_pclass = new_MethodClosure((Method)PMethod12896, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_pclass, MC_SMB_pclass);
}


static void init_SMB_rootScope() {
    Symbol SMB_rootScope = new_Symbol(L"rootScope");
    Array PThreadedCode12899 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_rootScope, (Optr)&t_method_return);
    Method PMethod12898 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12899, 1, slot_Smalltalk_Compiler_Compiler_rootScope);
    
    MethodClosure MC_SMB_rootScope = new_MethodClosure((Method)PMethod12898, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_rootScope, MC_SMB_rootScope);
}


static void init_SMB_visitFloat_() {
    Symbol SMB_visitFloat_ = new_Symbol(L"visitFloat:");
    Variable VAR_anASTFloat_0_0 = new_Variable_named(L"anASTFloat", 0);
    Array PArray12901 = new_Array_with(1, (Optr)VAR_anASTFloat_0_0);
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    // asNumber. 
    Send PSend12903 = new_Send((Optr)VAR_anASTFloat_0_0, SMB_asNumber, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12904 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)PSend12903);
    Array PThreadedCode12902 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTFloat_0_0, (Optr)&t_send0, (Optr)PSend12903, (Optr)&t_send1, (Optr)PSend12904, (Optr)&t_method_return);
    Method PMethod12900 = new_Method_with(PArray12901, empty_Array, empty_Array, PThreadedCode12902, 1, PSend12904);
    
    MethodClosure MC_SMB_visitFloat_ = new_MethodClosure((Method)PMethod12900, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitFloat_, MC_SMB_visitFloat_);
}


static void init_SMB_scope() {
    Symbol SMB_scope = new_Symbol(L"scope");
    Array PThreadedCode12906 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_method_return);
    Method PMethod12905 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12906, 1, slot_Smalltalk_Compiler_Compiler_scope);
    
    MethodClosure MC_SMB_scope = new_MethodClosure((Method)PMethod12905, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_scope, MC_SMB_scope);
}


static void init_SMB_visitSuper_() {
    Symbol SMB_visitSuper_ = new_Symbol(L"visitSuper:");
    Variable VAR_anASTSuper_0_0 = new_Variable_named(L"anASTSuper", 0);
    Array PArray12908 = new_Array_with(1, (Optr)VAR_anASTSuper_0_0);
    String string_12910 = new_String(L"Should not get an AST Super");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_12910_Const = new_Constant((Optr)string_12910);
    // error:. 
    Send PSend12911 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_12910_Const);
    Array PThreadedCode12909 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_12910, (Optr)&t_send1, (Optr)PSend12911, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12907 = new_Method_with(PArray12908, empty_Array, empty_Array, PThreadedCode12909, 2, PSend12911, self);
    
    MethodClosure MC_SMB_visitSuper_ = new_MethodClosure((Method)PMethod12907, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitSuper_, MC_SMB_visitSuper_);
}


static void init_SMB_visitNumber_() {
    Symbol SMB_visitNumber_ = new_Symbol(L"visitNumber:");
    Variable VAR_anASTNumber_0_0 = new_Variable_named(L"anASTNumber", 0);
    Array PArray12913 = new_Array_with(1, (Optr)VAR_anASTNumber_0_0);
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    // asNumber. 
    Send PSend12915 = new_Send((Optr)VAR_anASTNumber_0_0, SMB_asNumber, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12916 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)PSend12915);
    Array PThreadedCode12914 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTNumber_0_0, (Optr)&t_send0, (Optr)PSend12915, (Optr)&t_send1, (Optr)PSend12916, (Optr)&t_method_return);
    Method PMethod12912 = new_Method_with(PArray12913, empty_Array, empty_Array, PThreadedCode12914, 1, PSend12916);
    
    MethodClosure MC_SMB_visitNumber_ = new_MethodClosure((Method)PMethod12912, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitNumber_, MC_SMB_visitNumber_);
}


static void init_SMB_world() {
    Symbol SMB_world = new_Symbol(L"world");
    Symbol SMB_package = new_Symbol(L"package");
    // package. 
    Send PSend12919 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, SMB_package, 0);
    Array PThreadedCode12918 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send0, (Optr)PSend12919, (Optr)&t_method_return);
    Method PMethod12917 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12918, 1, PSend12919);
    
    MethodClosure MC_SMB_world = new_MethodClosure((Method)PMethod12917, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_world, MC_SMB_world);
}


static void init_SMB_pclass_() {
    Symbol SMB_pclass_ = new_Symbol(L"pclass:");
    Variable VAR_aPinocchioClass_0_0 = new_Variable_named(L"aPinocchioClass", 0);
    Array PArray12921 = new_Array_with(1, (Optr)VAR_aPinocchioClass_0_0);
    Symbol SMB_isRootScope = new_Symbol(L"isRootScope");
    // isRootScope. 
    Send PSend12923 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_isRootScope, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_12927 = new_String(L"Current scope is not RootScope but ");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend12928 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend12929 = new_Send((Optr)PSend12928, SMB_name, 0);
    Constant string_12927_Const = new_Constant((Optr)string_12927);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend12930 = new_Send((Optr)string_12927_Const, SMB__append_, 1, (Optr)PSend12929);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend12931 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend12930);
    Array PThreadedCode12926 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_12927, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send0, (Optr)PSend12928, (Optr)&t_send0, (Optr)PSend12929, (Optr)&t_send1, (Optr)PSend12930, (Optr)&t_send1, (Optr)PSend12931, (Optr)&t_block_return);
    Block PBlock12925 = new_Block_with(empty_Array, empty_Array, PThreadedCode12926, 1, PSend12931);
    // ifFalse:. 
    Send PSend12924 = new_Send((Optr)PSend12923, SMB_ifFalse_, 1, (Optr)PBlock12925);
    Assign PAssign12932 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)VAR_aPinocchioClass_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12936 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    // pclass:. 
    Send PSend12938 = new_Send((Optr)VAR__receiver__1_0, SMB_pclass_, 1, (Optr)VAR_aPinocchioClass_0_0);
    Symbol SMB_parentScope_ = new_Symbol(L"parentScope:");
    // parentScope:. 
    Send PSend12939 = new_Send((Optr)VAR__receiver__1_0, SMB_parentScope_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_scope);
    Array PThreadedCode12937 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_send1, (Optr)PSend12938, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send1, (Optr)PSend12939, (Optr)&t_method_return);
    Block PBlock12935 = new_Block_with(PArray12936, empty_Array, PThreadedCode12937, 2, PSend12938, PSend12939);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12940 = new_Send((Optr)PClassScope_classReference, SMB_new, 0);
    // value:. 
    Send PSend12934 = new_Send((Optr)PBlock12935, SMB_value_, 1, (Optr)PSend12940);
    Assign PAssign12933 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)PSend12934);
    Array PThreadedCode12922 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send0, (Optr)PSend12923, (Optr)&t_send_ifFalse_, (Optr)PSend12924, (Optr)PBlock12925, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12932, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12933, (Optr)&t_push_closure, (Optr)PBlock12935, (Optr)&t_push_class_reference, (Optr)PClassScope_classReference, (Optr)&t_send0, (Optr)PSend12940, (Optr)&t_send1, (Optr)PSend12934, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12920 = new_Method_with(PArray12921, empty_Array, empty_Array, PThreadedCode12922, 4, PSend12924, PAssign12932, PAssign12933, self);
    
    MethodClosure MC_SMB_pclass_ = new_MethodClosure((Method)PMethod12920, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_pclass_, MC_SMB_pclass_);
}


static void init_SMB_visitKeywordAnnotation_() {
    Symbol SMB_visitKeywordAnnotation_ = new_Symbol(L"visitKeywordAnnotation:");
    Variable VAR_anASTKeywordAnnotation_0_0 = new_Variable_named(L"anASTKeywordAnnotation", 0);
    Array PArray12942 = new_Array_with(1, (Optr)VAR_anASTKeywordAnnotation_0_0);
    Variable VAR_annotation_0_1 = new_Variable_named(L"annotation", 0);
    Variable VAR_arguments_0_2 = new_Variable_named(L"arguments", 0);
    Array PArray12943 = new_Array_with(2, (Optr)VAR_annotation_0_1, (Optr)VAR_arguments_0_2);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_arguments = new_Symbol(L"arguments");
    // arguments. 
    Send PSend12948 = new_Send((Optr)VAR_anASTKeywordAnnotation_0_0, SMB_arguments, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12947 = new_Send((Optr)PSend12948, SMB_size, 0);
    // new:. 
    Send PSend12946 = new_Send((Optr)PAnnotation_classReference, SMB_new_, 1, (Optr)PSend12947);
    Assign PAssign12945 = new_Assign((Optr)VAR_annotation_0_1, (Optr)PSend12946);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12949 = new_Send((Optr)VAR_anASTKeywordAnnotation_0_0, SMB_selector, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend12950 = new_Send((Optr)VAR_annotation_0_1, SMB_selector_, 1, (Optr)PSend12949);
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    // arguments. 
    Send PSend12953 = new_Send((Optr)VAR_anASTKeywordAnnotation_0_0, SMB_arguments, 0);
    // acceptOnCollection:. 
    Send PSend12952 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend12953);
    Assign PAssign12951 = new_Assign((Optr)VAR_arguments_0_2, (Optr)PSend12952);
    Variable VAR_object_1_0 = new_Variable_named(L"object", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray12955 = new_Array_with(2, (Optr)VAR_object_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_unwrapConstant_ = new_Symbol(L"unwrapConstant:");
    // unwrapConstant:. 
    Send PSend12957 = new_Send((Optr)self, SMB_unwrapConstant_, 1, (Optr)VAR_object_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12958 = new_Send((Optr)VAR_annotation_0_1, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)PSend12957);
    Array PThreadedCode12956 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_annotation_0_1, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_object_1_0, (Optr)&t_send1, (Optr)PSend12957, (Optr)&t_send2, (Optr)PSend12958, (Optr)&t_method_return);
    Block PBlock12954 = new_Block_with(PArray12955, empty_Array, PThreadedCode12956, 1, PSend12958);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend12959 = new_Send((Optr)VAR_arguments_0_2, SMB_withIndexDo_, 1, (Optr)PBlock12954);
    Array PThreadedCode12944 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push1, (Optr)PAssign12945, (Optr)&t_push_class_reference, (Optr)PAnnotation_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTKeywordAnnotation_0_0, (Optr)&t_send0, (Optr)PSend12948, (Optr)&t_send0, (Optr)PSend12947, (Optr)&t_send1, (Optr)PSend12946, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_annotation_0_1, (Optr)&t_push_variable, (Optr)VAR_anASTKeywordAnnotation_0_0, (Optr)&t_send0, (Optr)PSend12949, (Optr)&t_send1, (Optr)PSend12950, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12951, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anASTKeywordAnnotation_0_0, (Optr)&t_send0, (Optr)PSend12953, (Optr)&t_send1, (Optr)PSend12952, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_push_closure, (Optr)PBlock12954, (Optr)&t_send1, (Optr)PSend12959, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_annotation_0_1, (Optr)&t_method_return);
    Method PMethod12941 = new_Method_with(PArray12942, PArray12943, empty_Array, PThreadedCode12944, 5, PAssign12945, PSend12950, PAssign12951, PSend12959, VAR_annotation_0_1);
    
    MethodClosure MC_SMB_visitKeywordAnnotation_ = new_MethodClosure((Method)PMethod12941, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitKeywordAnnotation_, MC_SMB_visitKeywordAnnotation_);
}


static void init_SMB_visitString_() {
    Symbol SMB_visitString_ = new_Symbol(L"visitString:");
    Variable VAR_anASTString_0_0 = new_Variable_named(L"anASTString", 0);
    Array PArray12961 = new_Array_with(1, (Optr)VAR_anASTString_0_0);
    Symbol SMB_string = new_Symbol(L"string");
    // string. 
    Send PSend12963 = new_Send((Optr)VAR_anASTString_0_0, SMB_string, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12964 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)PSend12963);
    Array PThreadedCode12962 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTString_0_0, (Optr)&t_send0, (Optr)PSend12963, (Optr)&t_send1, (Optr)PSend12964, (Optr)&t_method_return);
    Method PMethod12960 = new_Method_with(PArray12961, empty_Array, empty_Array, PThreadedCode12962, 1, PSend12964);
    
    MethodClosure MC_SMB_visitString_ = new_MethodClosure((Method)PMethod12960, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitString_, MC_SMB_visitString_);
}


static void init_SMB_createReturningMethodBodyFor_() {
    Symbol SMB_createReturningMethodBodyFor_ = new_Symbol(L"createReturningMethodBodyFor:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Array PArray12966 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
    Variable VAR_callec_0_2 = new_Variable_named(L"callec", 0);
    Array PArray12967 = new_Array_with(2, (Optr)VAR_body_0_1, (Optr)VAR_callec_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12970 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend12973 = new_Send((Optr)VAR_aMethod_0_0, SMB_statements, 0);
    Assign PAssign12972 = new_Assign((Optr)VAR_body_0_1, (Optr)PSend12973);
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend12974 = new_Send((Optr)VAR_body_0_1, SMB_last, 0);
    Symbol SMB_isReturnExpression = new_Symbol(L"isReturnExpression");
    // isReturnExpression. 
    Send PSend12975 = new_Send((Optr)PSend12974, SMB_isReturnExpression, 0);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12979 = new_Send((Optr)ASTSelf_classReference, SMB_new, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend12980 = new_Send((Optr)VAR_body_0_1, SMB_add_, 1, (Optr)PSend12979);
    Array PThreadedCode12978 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_push_class_reference, (Optr)ASTSelf_classReference, (Optr)&t_send0, (Optr)PSend12979, (Optr)&t_send1, (Optr)PSend12980, (Optr)&t_block_return);
    Block PBlock12977 = new_Block_with(empty_Array, empty_Array, PThreadedCode12978, 1, PSend12980);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12983 = new_Send((Optr)VAR_body_0_1, SMB_size, 0);
    // last. 
    Send PSend12984 = new_Send((Optr)VAR_body_0_1, SMB_last, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend12985 = new_Send((Optr)PSend12984, SMB_expression, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12986 = new_Send((Optr)VAR_body_0_1, SMB_at_put_, 2, (Optr)PSend12983, (Optr)PSend12985);
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    // hasReturnExpression. 
    Send PSend12987 = new_Send((Optr)VAR_body_0_1, SMB_hasReturnExpression, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    // acceptOnCollection:. 
    Send PSend12991 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)VAR_body_0_1);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend12992 = new_Send((Optr)PSend12991, SMB_asArray, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12993 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12992);
    Array PThreadedCode12990 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send1, (Optr)PSend12991, (Optr)&t_send0, (Optr)PSend12992, (Optr)&t_send1, (Optr)PSend12993, (Optr)&t_block_return);
    Block PBlock12989 = new_Block_with(empty_Array, empty_Array, PThreadedCode12990, 1, PSend12993);
    // ifFalse:. 
    Send PSend12988 = new_Send((Optr)PSend12987, SMB_ifFalse_, 1, (Optr)PBlock12989);
    Array PThreadedCode12982 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send0, (Optr)PSend12983, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send0, (Optr)PSend12984, (Optr)&t_send0, (Optr)PSend12985, (Optr)&t_send2, (Optr)PSend12986, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send0, (Optr)PSend12987, (Optr)&t_send_ifFalse_, (Optr)PSend12988, (Optr)PBlock12989, (Optr)&t_block_return);
    Block PBlock12981 = new_Block_with(empty_Array, empty_Array, PThreadedCode12982, 2, PSend12986, PSend12988);
    // ifFalse:ifTrue:. 
    Send PSend12976 = new_Send((Optr)PSend12975, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock12977, (Optr)PBlock12981);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray12997 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_world = new_Symbol(L"world");
    // world. 
    Send PSend12999 = new_Send((Optr)self, SMB_world, 0);
    Symbol  SMB_Runtime = new_Symbol(L"Runtime");
    Symbol SMB_ensurePackageNamed_ = new_Symbol(L"ensurePackageNamed:");
    Constant SMB_Runtime_Const = new_Constant((Optr)SMB_Runtime);
    // ensurePackageNamed:. 
    Send PSend13000 = new_Send((Optr)PSend12999, SMB_ensurePackageNamed_, 1, (Optr)SMB_Runtime_Const);
    Symbol  SMB_Continue = new_Symbol(L"Continue");
    Symbol SMB_ensureClassReference_ = new_Symbol(L"ensureClassReference:");
    Constant SMB_Continue_Const = new_Constant((Optr)SMB_Continue);
    // ensureClassReference:. 
    Send PSend13001 = new_Send((Optr)PSend13000, SMB_ensureClassReference_, 1, (Optr)SMB_Continue_Const);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend13002 = new_Send((Optr)VAR__receiver__2_0, SMB_receiver_, 1, (Optr)PSend13001);
    Symbol  SMB_on_ = new_Symbol(L"on:");
    Symbol SMB_message_ = new_Symbol(L"message:");
    Constant SMB_on__Const = new_Constant((Optr)SMB_on_);
    // message:. 
    Send PSend13003 = new_Send((Optr)VAR__receiver__2_0, SMB_message_, 1, (Optr)SMB_on__Const);
    Symbol SMB_createCallecBodyFor_ = new_Symbol(L"createCallecBodyFor:");
    // createCallecBodyFor:. 
    Send PSend13004 = new_Send((Optr)self, SMB_createCallecBodyFor_, 1, (Optr)VAR_aMethod_0_0);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend13005 = new_Send((Optr)VAR__receiver__2_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend13004);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend13006 = new_Send((Optr)VAR__receiver__2_0, SMB_yourself, 0);
    Array PThreadedCode12998 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12999, (Optr)&t_push1, (Optr)SMB_Runtime, (Optr)&t_send1, (Optr)PSend13000, (Optr)&t_push1, (Optr)SMB_Continue, (Optr)&t_send1, (Optr)PSend13001, (Optr)&t_send1, (Optr)PSend13002, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)SMB_on_, (Optr)&t_send1, (Optr)PSend13003, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend13004, (Optr)&t_send2, (Optr)PSend13005, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend13006, (Optr)&t_method_return);
    Block PBlock12996 = new_Block_with(PArray12997, empty_Array, PThreadedCode12998, 4, PSend13002, PSend13003, PSend13005, PSend13006);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend13007 = new_Send((Optr)PSend_classReference, SMB_new_, 1, (Optr)int_1_Const);
    // value:. 
    Send PSend12995 = new_Send((Optr)PBlock12996, SMB_value_, 1, (Optr)PSend13007);
    Assign PAssign12994 = new_Assign((Optr)VAR_callec_0_2, (Optr)PSend12995);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend13008 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_callec_0_2);
    Array PThreadedCode12971 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign12972, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend12973, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send0, (Optr)PSend12974, (Optr)&t_send0, (Optr)PSend12975, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend12976, (Optr)PBlock12977, (Optr)PBlock12981, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12994, (Optr)&t_push_closure, (Optr)PBlock12996, (Optr)&t_push_class_reference, (Optr)PSend_classReference, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend13007, (Optr)&t_send1, (Optr)PSend12995, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_callec_0_2, (Optr)&t_send1, (Optr)PSend13008, (Optr)&t_method_return);
    Block PBlock12969 = new_Block_with(PArray12970, empty_Array, PThreadedCode12971, 4, PAssign12972, PSend12976, PAssign12994, PSend13008);
    // on:. 
    Send PSend13009 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12969);
    Array PThreadedCode12968 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12969, (Optr)&t_send1, (Optr)PSend13009, (Optr)&t_method_return);
    Method PMethod12965 = new_Method_with(PArray12966, PArray12967, empty_Array, PThreadedCode12968, 1, PSend13009);
    
    MethodClosure MC_SMB_createReturningMethodBodyFor_ = new_MethodClosure((Method)PMethod12965, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createReturningMethodBodyFor_, MC_SMB_createReturningMethodBodyFor_);
}


static void init_SMB_parse_() {
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray13011 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_parser = new_Symbol(L"parser");
    // parser. 
    Send PSend13013 = new_Send((Optr)self, SMB_parser, 0);
    Symbol SMB_parseMethod_ = new_Symbol(L"parseMethod:");
    // parseMethod:. 
    Send PSend13014 = new_Send((Optr)PSend13013, SMB_parseMethod_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode13012 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13013, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend13014, (Optr)&t_method_return);
    Method PMethod13010 = new_Method_with(PArray13011, empty_Array, empty_Array, PThreadedCode13012, 1, PSend13014);
    
    MethodClosure MC_SMB_parse_ = new_MethodClosure((Method)PMethod13010, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_parse_, MC_SMB_parse_);
}


static void init_SMB_popScope() {
    Symbol SMB_popScope = new_Symbol(L"popScope");
    Symbol SMB_parentScope = new_Symbol(L"parentScope");
    // parentScope. 
    Send PSend13018 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_parentScope, 0);
    Assign PAssign13017 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)PSend13018);
    Array PThreadedCode13016 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign13017, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send0, (Optr)PSend13018, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13015 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13016, 2, PAssign13017, self);
    
    MethodClosure MC_SMB_popScope = new_MethodClosure((Method)PMethod13015, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_popScope, MC_SMB_popScope);
}


static void init_SMB_selectorFor_() {
    Symbol SMB_selectorFor_ = new_Symbol(L"selectorFor:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Array PArray13020 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend13022 = new_Send((Optr)VAR_aMethod_0_0, SMB_message, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend13023 = new_Send((Optr)PSend13022, SMB_selector, 0);
    Array PThreadedCode13021 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend13022, (Optr)&t_send0, (Optr)PSend13023, (Optr)&t_method_return);
    Method PMethod13019 = new_Method_with(PArray13020, empty_Array, empty_Array, PThreadedCode13021, 1, PSend13023);
    
    MethodClosure MC_SMB_selectorFor_ = new_MethodClosure((Method)PMethod13019, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_selectorFor_, MC_SMB_selectorFor_);
}


static void init_SMB_currentCallecVariable() {
    Symbol SMB_currentCallecVariable = new_Symbol(L"currentCallecVariable");
    Array PThreadedCode13025 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_currentCallecVariable, (Optr)&t_method_return);
    Method PMethod13024 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13025, 1, slot_Smalltalk_Compiler_Compiler_currentCallecVariable);
    
    MethodClosure MC_SMB_currentCallecVariable = new_MethodClosure((Method)PMethod13024, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_currentCallecVariable, MC_SMB_currentCallecVariable);
}


static void init_SMB_createMethod_with_() {
    Symbol SMB_createMethod_with_ = new_Symbol(L"createMethod:with:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
    Array PArray13027 = new_Array_with(2, (Optr)VAR_aMethod_0_0, (Optr)VAR_body_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray13030 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol  SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_annotatedWith_ = new_Symbol(L"annotatedWith:");
    Constant SMB_pPrimitive_plugin__Const = new_Constant((Optr)SMB_pPrimitive_plugin_);
    // annotatedWith:. 
    Send PSend13032 = new_Send((Optr)VAR_aMethod_0_0, SMB_annotatedWith_, 1, (Optr)SMB_pPrimitive_plugin__Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_withAll_ = new_Symbol(L"withAll:");
    // withAll:. 
    Send PSend13036 = new_Send((Optr)PNativeMethod_classReference, SMB_withAll_, 1, (Optr)VAR_body_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13037 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend13036);
    Array PThreadedCode13035 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PNativeMethod_classReference, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send1, (Optr)PSend13036, (Optr)&t_send1, (Optr)PSend13037, (Optr)&t_block_return);
    Block PBlock13034 = new_Block_with(empty_Array, empty_Array, PThreadedCode13035, 1, PSend13037);
    // ifTrue:. 
    Send PSend13033 = new_Send((Optr)PSend13032, SMB_ifTrue_, 1, (Optr)PBlock13034);
    Symbol  SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Constant SMB_pPrimitive_plugin_code__Const = new_Constant((Optr)SMB_pPrimitive_plugin_code_);
    // annotatedWith:. 
    Send PSend13038 = new_Send((Optr)VAR_aMethod_0_0, SMB_annotatedWith_, 1, (Optr)SMB_pPrimitive_plugin_code__Const);
    // withAll:. 
    Send PSend13042 = new_Send((Optr)PNativeMethod_classReference, SMB_withAll_, 1, (Optr)VAR_body_0_1);
    // escape:. 
    Send PSend13043 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend13042);
    Array PThreadedCode13041 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PNativeMethod_classReference, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send1, (Optr)PSend13042, (Optr)&t_send1, (Optr)PSend13043, (Optr)&t_block_return);
    Block PBlock13040 = new_Block_with(empty_Array, empty_Array, PThreadedCode13041, 1, PSend13043);
    // ifTrue:. 
    Send PSend13039 = new_Send((Optr)PSend13038, SMB_ifTrue_, 1, (Optr)PBlock13040);
    Symbol  SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Constant SMB_pinocchioReflective__Const = new_Constant((Optr)SMB_pinocchioReflective_);
    // annotatedWith:. 
    Send PSend13044 = new_Send((Optr)VAR_aMethod_0_0, SMB_annotatedWith_, 1, (Optr)SMB_pinocchioReflective__Const);
    // withAll:. 
    Send PSend13048 = new_Send((Optr)PReflectionMethod_classReference, SMB_withAll_, 1, (Optr)VAR_body_0_1);
    // escape:. 
    Send PSend13049 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend13048);
    Array PThreadedCode13047 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PReflectionMethod_classReference, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send1, (Optr)PSend13048, (Optr)&t_send1, (Optr)PSend13049, (Optr)&t_block_return);
    Block PBlock13046 = new_Block_with(empty_Array, empty_Array, PThreadedCode13047, 1, PSend13049);
    // ifTrue:. 
    Send PSend13045 = new_Send((Optr)PSend13044, SMB_ifTrue_, 1, (Optr)PBlock13046);
    // withAll:. 
    Send PSend13050 = new_Send((Optr)PMethod_classReference, SMB_withAll_, 1, (Optr)VAR_body_0_1);
    Array PThreadedCode13031 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_push1, (Optr)SMB_pPrimitive_plugin_, (Optr)&t_send1, (Optr)PSend13032, (Optr)&t_send_ifTrue_, (Optr)PSend13033, (Optr)PBlock13034, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_push1, (Optr)SMB_pPrimitive_plugin_code_, (Optr)&t_send1, (Optr)PSend13038, (Optr)&t_send_ifTrue_, (Optr)PSend13039, (Optr)PBlock13040, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_push1, (Optr)SMB_pinocchioReflective_, (Optr)&t_send1, (Optr)PSend13044, (Optr)&t_send_ifTrue_, (Optr)PSend13045, (Optr)PBlock13046, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PMethod_classReference, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send1, (Optr)PSend13050, (Optr)&t_method_return);
    Block PBlock13029 = new_Block_with(PArray13030, empty_Array, PThreadedCode13031, 4, PSend13033, PSend13039, PSend13045, PSend13050);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13051 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock13029);
    Array PThreadedCode13028 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock13029, (Optr)&t_send1, (Optr)PSend13051, (Optr)&t_method_return);
    Method PMethod13026 = new_Method_with(PArray13027, empty_Array, empty_Array, PThreadedCode13028, 1, PSend13051);
    
    MethodClosure MC_SMB_createMethod_with_ = new_MethodClosure((Method)PMethod13026, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createMethod_with_, MC_SMB_createMethod_with_);
}


static void init_SMB_visitMethod_() {
    Symbol SMB_visitMethod_ = new_Symbol(L"visitMethod:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Array PArray13053 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
    Variable VAR_method_0_2 = new_Variable_named(L"method", 0);
    Variable VAR_selector_0_3 = new_Variable_named(L"selector", 0);
    Variable VAR_methodClosure_0_4 = new_Variable_named(L"methodClosure", 0);
    Array PArray13054 = new_Array_with(4, (Optr)VAR_body_0_1, (Optr)VAR_method_0_2, (Optr)VAR_selector_0_3, (Optr)VAR_methodClosure_0_4);
    Assign PAssign13056 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_currentMethod, (Optr)VAR_aMethod_0_0);
    Symbol SMB_pushScope = new_Symbol(L"pushScope");
    // pushScope. 
    Send PSend13057 = new_Send((Optr)self, SMB_pushScope, 0);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend13058 = new_Send((Optr)VAR_aMethod_0_0, SMB_message, 0);
    Symbol SMB_parameters = new_Symbol(L"parameters");
    // parameters. 
    Send PSend13059 = new_Send((Optr)PSend13058, SMB_parameters, 0);
    Symbol SMB_declareAll_ = new_Symbol(L"declareAll:");
    // declareAll:. 
    Send PSend13060 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_declareAll_, 1, (Optr)PSend13059);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend13061 = new_Send((Optr)VAR_aMethod_0_0, SMB_temporaries, 0);
    // declareAll:. 
    Send PSend13062 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_declareAll_, 1, (Optr)PSend13061);
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    // hasReturnExpression. 
    Send PSend13063 = new_Send((Optr)VAR_aMethod_0_0, SMB_hasReturnExpression, 0);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    Symbol SMB_createNonReturningMethodBodyFor_ = new_Symbol(L"createNonReturningMethodBodyFor:");
    // createNonReturningMethodBodyFor:. 
    Send PSend13068 = new_Send((Optr)self, SMB_createNonReturningMethodBodyFor_, 1, (Optr)VAR_aMethod_0_0);
    Assign PAssign13067 = new_Assign((Optr)VAR_body_0_1, (Optr)PSend13068);
    Array PThreadedCode13066 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign13067, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend13068, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock13065 = new_Block_with(empty_Array, empty_Array, PThreadedCode13066, 1, PAssign13067);
    Symbol SMB_createReturningMethodBodyFor_ = new_Symbol(L"createReturningMethodBodyFor:");
    // createReturningMethodBodyFor:. 
    Send PSend13072 = new_Send((Optr)self, SMB_createReturningMethodBodyFor_, 1, (Optr)VAR_aMethod_0_0);
    Assign PAssign13071 = new_Assign((Optr)VAR_body_0_1, (Optr)PSend13072);
    Array PThreadedCode13070 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign13071, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend13072, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock13069 = new_Block_with(empty_Array, empty_Array, PThreadedCode13070, 1, PAssign13071);
    // ifFalse:ifTrue:. 
    Send PSend13064 = new_Send((Optr)PSend13063, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock13065, (Optr)PBlock13069);
    Symbol SMB_selectorFor_ = new_Symbol(L"selectorFor:");
    // selectorFor:. 
    Send PSend13074 = new_Send((Optr)self, SMB_selectorFor_, 1, (Optr)VAR_aMethod_0_0);
    Assign PAssign13073 = new_Assign((Optr)VAR_selector_0_3, (Optr)PSend13074);
    Symbol SMB_createMethod_with_ = new_Symbol(L"createMethod:with:");
    // createMethod:with:. 
    Send PSend13076 = new_Send((Optr)self, SMB_createMethod_with_, 2, (Optr)VAR_aMethod_0_0, (Optr)VAR_body_0_1);
    Assign PAssign13075 = new_Assign((Optr)VAR_method_0_2, (Optr)PSend13076);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray13078 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    // message. 
    Send PSend13080 = new_Send((Optr)VAR_aMethod_0_0, SMB_message, 0);
    // parameters. 
    Send PSend13081 = new_Send((Optr)PSend13080, SMB_parameters, 0);
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    // acceptOnCollection:. 
    Send PSend13082 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend13081);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend13083 = new_Send((Optr)PSend13082, SMB_asArray, 0);
    // temporaries. 
    Send PSend13084 = new_Send((Optr)VAR_aMethod_0_0, SMB_temporaries, 0);
    // acceptOnCollection:. 
    Send PSend13085 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend13084);
    // asArray. 
    Send PSend13086 = new_Send((Optr)PSend13085, SMB_asArray, 0);
    Symbol SMB_params_locals_ = new_Symbol(L"params:locals:");
    // params:locals:. 
    Send PSend13087 = new_Send((Optr)VAR__receiver__1_0, SMB_params_locals_, 2, (Optr)PSend13083, (Optr)PSend13086);
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend13088 = new_Send((Optr)VAR_aMethod_0_0, SMB_annotations, 0);
    // acceptOnCollection:. 
    Send PSend13089 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend13088);
    // asArray. 
    Send PSend13090 = new_Send((Optr)PSend13089, SMB_asArray, 0);
    Symbol SMB_annotations_ = new_Symbol(L"annotations:");
    // annotations:. 
    Send PSend13091 = new_Send((Optr)VAR__receiver__1_0, SMB_annotations_, 1, (Optr)PSend13090);
    Symbol SMB_createPInfo = new_Symbol(L"createPInfo");
    // createPInfo. 
    Send PSend13092 = new_Send((Optr)self, SMB_createPInfo, 0);
    Symbol SMB_info_ = new_Symbol(L"info:");
    // info:. 
    Send PSend13093 = new_Send((Optr)VAR__receiver__1_0, SMB_info_, 1, (Optr)PSend13092);
    Array PThreadedCode13079 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend13080, (Optr)&t_send0, (Optr)PSend13081, (Optr)&t_send1, (Optr)PSend13082, (Optr)&t_send0, (Optr)PSend13083, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend13084, (Optr)&t_send1, (Optr)PSend13085, (Optr)&t_send0, (Optr)PSend13086, (Optr)&t_send2, (Optr)PSend13087, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend13088, (Optr)&t_send1, (Optr)PSend13089, (Optr)&t_send0, (Optr)PSend13090, (Optr)&t_send1, (Optr)PSend13091, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13092, (Optr)&t_send1, (Optr)PSend13093, (Optr)&t_method_return);
    Block PBlock13077 = new_Block_with(PArray13078, empty_Array, PThreadedCode13079, 3, PSend13087, PSend13091, PSend13093);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend13094 = new_Send((Optr)PBlock13077, SMB_value_, 1, (Optr)VAR_method_0_2);
    Array PArray13098 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_code_ = new_Symbol(L"code:");
    // code:. 
    Send PSend13100 = new_Send((Optr)VAR__receiver__1_0, SMB_code_, 1, (Optr)VAR_method_0_2);
    Symbol SMB_host_ = new_Symbol(L"host:");
    // host:. 
    Send PSend13101 = new_Send((Optr)VAR__receiver__1_0, SMB_host_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend13102 = new_Send((Optr)VAR__receiver__1_0, SMB_selector_, 1, (Optr)VAR_selector_0_3);
    Array PThreadedCode13099 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send1, (Optr)PSend13100, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send1, (Optr)PSend13101, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_selector_0_3, (Optr)&t_send1, (Optr)PSend13102, (Optr)&t_method_return);
    Block PBlock13097 = new_Block_with(PArray13098, empty_Array, PThreadedCode13099, 3, PSend13100, PSend13101, PSend13102);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13103 = new_Send((Optr)PMethodClosure_classReference, SMB_new, 0);
    // value:. 
    Send PSend13096 = new_Send((Optr)PBlock13097, SMB_value_, 1, (Optr)PSend13103);
    Assign PAssign13095 = new_Assign((Optr)VAR_methodClosure_0_4, (Optr)PSend13096);
    Symbol SMB_popScope = new_Symbol(L"popScope");
    // popScope. 
    Send PSend13104 = new_Send((Optr)self, SMB_popScope, 0);
    Symbol SMB_compileThreadedMethod_ = new_Symbol(L"compileThreadedMethod:");
    // compileThreadedMethod:. 
    Send PSend13105 = new_Send((Optr)self, SMB_compileThreadedMethod_, 1, (Optr)VAR_method_0_2);
    Array PThreadedCode13055 = instantiate_Array_with(ThreadedCode_Class, 0, 91, (Optr)&t_push1, (Optr)PAssign13056, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13057, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend13058, (Optr)&t_send0, (Optr)PSend13059, (Optr)&t_send1, (Optr)PSend13060, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend13061, (Optr)&t_send1, (Optr)PSend13062, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend13063, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend13064, (Optr)PBlock13065, (Optr)PBlock13069, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13073, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend13074, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13075, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send2, (Optr)PSend13076, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock13077, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send1, (Optr)PSend13094, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13095, (Optr)&t_push_closure, (Optr)PBlock13097, (Optr)&t_push_class_reference, (Optr)PMethodClosure_classReference, (Optr)&t_send0, (Optr)PSend13103, (Optr)&t_send1, (Optr)PSend13096, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13104, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send1, (Optr)PSend13105, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_methodClosure_0_4, (Optr)&t_method_return);
    Method PMethod13052 = new_Method_with(PArray13053, PArray13054, empty_Array, PThreadedCode13055, 12, PAssign13056, PSend13057, PSend13060, PSend13062, PSend13064, PAssign13073, PAssign13075, PSend13094, PAssign13095, PSend13104, PSend13105, VAR_methodClosure_0_4);
    
    MethodClosure MC_SMB_visitMethod_ = new_MethodClosure((Method)PMethod13052, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitMethod_, MC_SMB_visitMethod_);
}


static void init_SMB_createNonReturningMethodBodyFor_() {
    Symbol SMB_createNonReturningMethodBodyFor_ = new_Symbol(L"createNonReturningMethodBodyFor:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Array PArray13107 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Variable VAR_statements_0_1 = new_Variable_named(L"statements", 0);
    Array PArray13108 = new_Array_with(1, (Optr)VAR_statements_0_1);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13111 = new_Send((Optr)VAR_aMethod_0_0, SMB_statements, 0);
    Assign PAssign13110 = new_Assign((Optr)VAR_statements_0_1, (Optr)PSend13111);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13112 = new_Send((Optr)ASTSelf_classReference, SMB_new, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend13113 = new_Send((Optr)VAR_statements_0_1, SMB_add_, 1, (Optr)PSend13112);
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    // acceptOnCollection:. 
    Send PSend13114 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)VAR_statements_0_1);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend13115 = new_Send((Optr)PSend13114, SMB_asArray, 0);
    Array PThreadedCode13109 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign13110, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend13111, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_statements_0_1, (Optr)&t_push_class_reference, (Optr)ASTSelf_classReference, (Optr)&t_send0, (Optr)PSend13112, (Optr)&t_send1, (Optr)PSend13113, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_statements_0_1, (Optr)&t_send1, (Optr)PSend13114, (Optr)&t_send0, (Optr)PSend13115, (Optr)&t_method_return);
    Method PMethod13106 = new_Method_with(PArray13107, PArray13108, empty_Array, PThreadedCode13109, 3, PAssign13110, PSend13113, PSend13115);
    
    MethodClosure MC_SMB_createNonReturningMethodBodyFor_ = new_MethodClosure((Method)PMethod13106, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createNonReturningMethodBodyFor_, MC_SMB_createNonReturningMethodBodyFor_);
}


static void init_SMB_visitSymbol_() {
    Symbol SMB_visitSymbol_ = new_Symbol(L"visitSymbol:");
    Variable VAR_anASTSymbol_0_0 = new_Variable_named(L"anASTSymbol", 0);
    Array PArray13117 = new_Array_with(1, (Optr)VAR_anASTSymbol_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend13119 = new_Send((Optr)VAR_anASTSymbol_0_0, SMB_asSymbol, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend13120 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)PSend13119);
    Array PThreadedCode13118 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTSymbol_0_0, (Optr)&t_send0, (Optr)PSend13119, (Optr)&t_send1, (Optr)PSend13120, (Optr)&t_method_return);
    Method PMethod13116 = new_Method_with(PArray13117, empty_Array, empty_Array, PThreadedCode13118, 1, PSend13120);
    
    MethodClosure MC_SMB_visitSymbol_ = new_MethodClosure((Method)PMethod13116, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitSymbol_, MC_SMB_visitSymbol_);
}


static void init_SMB_createSendTo_() {
    Symbol SMB_createSendTo_ = new_Symbol(L"createSendTo:");
    Variable VAR_receiver_0_0 = new_Variable_named(L"receiver", 0);
    Array PArray13122 = new_Array_with(1, (Optr)VAR_receiver_0_0);
    Symbol SMB_createSendTo_sized_ = new_Symbol(L"createSendTo:sized:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // createSendTo:sized:. 
    Send PSend13124 = new_Send((Optr)self, SMB_createSendTo_sized_, 2, (Optr)VAR_receiver_0_0, (Optr)int_0_Const);
    Array PThreadedCode13123 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend13124, (Optr)&t_method_return);
    Method PMethod13121 = new_Method_with(PArray13122, empty_Array, empty_Array, PThreadedCode13123, 1, PSend13124);
    
    MethodClosure MC_SMB_createSendTo_ = new_MethodClosure((Method)PMethod13121, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createSendTo_, MC_SMB_createSendTo_);
}


static void init_SMB_createCallecBodyFor_() {
    Symbol SMB_createCallecBodyFor_ = new_Symbol(L"createCallecBodyFor:");
    Variable VAR_anASTMethod_0_0 = new_Variable_named(L"anASTMethod", 0);
    Array PArray13126 = new_Array_with(1, (Optr)VAR_anASTMethod_0_0);
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
    Variable VAR_statements_0_2 = new_Variable_named(L"statements", 0);
    Variable VAR_statement_0_3 = new_Variable_named(L"statement", 0);
    Array PArray13127 = new_Array_with(3, (Optr)VAR_body_0_1, (Optr)VAR_statements_0_2, (Optr)VAR_statement_0_3);
    Symbol SMB_pushScope = new_Symbol(L"pushScope");
    // pushScope. 
    Send PSend13129 = new_Send((Optr)self, SMB_pushScope, 0);
    Symbol  SMB___return__ = new_Symbol(L"_return_");
    Symbol SMB_depth = new_Symbol(L"depth");
    // depth. 
    Send PSend13130 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_depth, 0);
    Symbol SMB_named_at_ = new_Symbol(L"named:at:");
    Constant SMB___return___Const = new_Constant((Optr)SMB___return__);
    // named:at:. 
    Send PSend13131 = new_Send((Optr)PVariable_classReference, SMB_named_at_, 2, (Optr)SMB___return___Const, (Optr)PSend13130);
    Symbol SMB_currentCallecVariable_ = new_Symbol(L"currentCallecVariable:");
    // currentCallecVariable:. 
    Send PSend13132 = new_Send((Optr)self, SMB_currentCallecVariable_, 1, (Optr)PSend13131);
    Symbol SMB_createBlock_ = new_Symbol(L"createBlock:");
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13136 = new_Send((Optr)VAR_anASTMethod_0_0, SMB_statements, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend13135 = new_Send((Optr)PSend13136, SMB_size, 0);
    // createBlock:. 
    Send PSend13134 = new_Send((Optr)self, SMB_createBlock_, 1, (Optr)PSend13135);
    Assign PAssign13133 = new_Assign((Optr)VAR_body_0_1, (Optr)PSend13134);
    Symbol SMB_currentCallecVariable = new_Symbol(L"currentCallecVariable");
    // currentCallecVariable. 
    Send PSend13137 = new_Send((Optr)self, SMB_currentCallecVariable, 0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend13138 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)PSend13137);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13139 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Symbol SMB_params_locals_ = new_Symbol(L"params:locals:");
    // params:locals:. 
    Send PSend13140 = new_Send((Optr)VAR_body_0_1, SMB_params_locals_, 2, (Optr)PSend13138, (Optr)PSend13139);
    // statements. 
    Send PSend13142 = new_Send((Optr)VAR_anASTMethod_0_0, SMB_statements, 0);
    Assign PAssign13141 = new_Assign((Optr)VAR_statements_0_2, (Optr)PSend13142);
    // size. 
    Send PSend13143 = new_Send((Optr)VAR_statements_0_2, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray13145 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend13149 = new_Send((Optr)VAR_statements_0_2, SMB_at_, 1, (Optr)VAR_index_1_0);
    // visit:. 
    Send PSend13148 = new_Send((Optr)self, SMB_visit_, 1, (Optr)PSend13149);
    Assign PAssign13147 = new_Assign((Optr)VAR_statement_0_3, (Optr)PSend13148);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend13150 = new_Send((Optr)VAR_body_0_1, SMB_at_put_, 2, (Optr)VAR_index_1_0, (Optr)VAR_statement_0_3);
    Array PThreadedCode13146 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign13147, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_statements_0_2, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend13149, (Optr)&t_send1, (Optr)PSend13148, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_push_variable, (Optr)VAR_statement_0_3, (Optr)&t_send2, (Optr)PSend13150, (Optr)&t_method_return);
    Block PBlock13144 = new_Block_with(PArray13145, empty_Array, PThreadedCode13146, 2, PAssign13147, PSend13150);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend13151 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend13143, (Optr)PBlock13144);
    Symbol SMB_popScope = new_Symbol(L"popScope");
    // popScope. 
    Send PSend13152 = new_Send((Optr)self, SMB_popScope, 0);
    Array PThreadedCode13128 = instantiate_Array_with(ThreadedCode_Class, 0, 73, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13129, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PVariable_classReference, (Optr)&t_push1, (Optr)SMB___return__, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send0, (Optr)PSend13130, (Optr)&t_send2, (Optr)PSend13131, (Optr)&t_send1, (Optr)PSend13132, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13133, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anASTMethod_0_0, (Optr)&t_send0, (Optr)PSend13136, (Optr)&t_send0, (Optr)PSend13135, (Optr)&t_send1, (Optr)PSend13134, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13137, (Optr)&t_send1, (Optr)PSend13138, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend13139, (Optr)&t_send2, (Optr)PSend13140, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13141, (Optr)&t_push_variable, (Optr)VAR_anASTMethod_0_0, (Optr)&t_send0, (Optr)PSend13142, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_statements_0_2, (Optr)&t_send0, (Optr)PSend13143, (Optr)&t_push_closure, (Optr)PBlock13144, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend13151, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13152, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_method_return);
    Method PMethod13125 = new_Method_with(PArray13126, PArray13127, empty_Array, PThreadedCode13128, 8, PSend13129, PSend13132, PAssign13133, PSend13140, PAssign13141, PSend13151, PSend13152, VAR_body_0_1);
    
    MethodClosure MC_SMB_createCallecBodyFor_ = new_MethodClosure((Method)PMethod13125, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createCallecBodyFor_, MC_SMB_createCallecBodyFor_);
}


static void init_SMB_currentBlock_() {
    Symbol SMB_currentBlock_ = new_Symbol(L"currentBlock:");
    Variable VAR_aPinocchioBlock_0_0 = new_Variable_named(L"aPinocchioBlock", 0);
    Array PArray13154 = new_Array_with(1, (Optr)VAR_aPinocchioBlock_0_0);
    Assign PAssign13156 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_currentBlock, (Optr)VAR_aPinocchioBlock_0_0);
    Array PThreadedCode13155 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign13156, (Optr)&t_push_variable, (Optr)VAR_aPinocchioBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13153 = new_Method_with(PArray13154, empty_Array, empty_Array, PThreadedCode13155, 2, PAssign13156, self);
    
    MethodClosure MC_SMB_currentBlock_ = new_MethodClosure((Method)PMethod13153, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_currentBlock_, MC_SMB_currentBlock_);
}


static void init_SMB_visitCharacter_() {
    Symbol SMB_visitCharacter_ = new_Symbol(L"visitCharacter:");
    Variable VAR_anASTCharacter_0_0 = new_Variable_named(L"anASTCharacter", 0);
    Array PArray13158 = new_Array_with(1, (Optr)VAR_anASTCharacter_0_0);
    Symbol SMB_char = new_Symbol(L"char");
    // char. 
    Send PSend13160 = new_Send((Optr)VAR_anASTCharacter_0_0, SMB_char, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend13161 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)PSend13160);
    Array PThreadedCode13159 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTCharacter_0_0, (Optr)&t_send0, (Optr)PSend13160, (Optr)&t_send1, (Optr)PSend13161, (Optr)&t_method_return);
    Method PMethod13157 = new_Method_with(PArray13158, empty_Array, empty_Array, PThreadedCode13159, 1, PSend13161);
    
    MethodClosure MC_SMB_visitCharacter_ = new_MethodClosure((Method)PMethod13157, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitCharacter_, MC_SMB_visitCharacter_);
}


static void init_SMB_visitSelf_() {
    Symbol SMB_visitSelf_ = new_Symbol(L"visitSelf:");
    Variable VAR_aSelf_0_0 = new_Variable_named(L"aSelf", 0);
    Array PArray13163 = new_Array_with(1, (Optr)VAR_aSelf_0_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend13165 = new_Send((Optr)PSelf_classReference, SMB_instance, 0);
    Array PThreadedCode13164 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PSelf_classReference, (Optr)&t_send0, (Optr)PSend13165, (Optr)&t_method_return);
    Method PMethod13162 = new_Method_with(PArray13163, empty_Array, empty_Array, PThreadedCode13164, 1, PSend13165);
    
    MethodClosure MC_SMB_visitSelf_ = new_MethodClosure((Method)PMethod13162, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitSelf_, MC_SMB_visitSelf_);
}


static void init_SMB_unwrapConstant_() {
    Symbol SMB_unwrapConstant_ = new_Symbol(L"unwrapConstant:");
    Variable VAR_aConstant_0_0 = new_Variable_named(L"aConstant", 0);
    Array PArray13167 = new_Array_with(1, (Optr)VAR_aConstant_0_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend13169 = new_Send((Optr)VAR_aConstant_0_0, SMB_isKindOf_, 1, (Optr)PConstant_classReference);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_13173 = new_String(L"Constant expected");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_13173_Const = new_Constant((Optr)string_13173);
    // error:. 
    Send PSend13174 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_13173_Const);
    Array PThreadedCode13172 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_13173, (Optr)&t_send1, (Optr)PSend13174, (Optr)&t_block_return);
    Block PBlock13171 = new_Block_with(empty_Array, empty_Array, PThreadedCode13172, 1, PSend13174);
    // ifFalse:. 
    Send PSend13170 = new_Send((Optr)PSend13169, SMB_ifFalse_, 1, (Optr)PBlock13171);
    Symbol SMB_constant = new_Symbol(L"constant");
    // constant. 
    Send PSend13175 = new_Send((Optr)VAR_aConstant_0_0, SMB_constant, 0);
    Array PThreadedCode13168 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_aConstant_0_0, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_send1, (Optr)PSend13169, (Optr)&t_send_ifFalse_, (Optr)PSend13170, (Optr)PBlock13171, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aConstant_0_0, (Optr)&t_send0, (Optr)PSend13175, (Optr)&t_method_return);
    Method PMethod13166 = new_Method_with(PArray13167, empty_Array, empty_Array, PThreadedCode13168, 2, PSend13170, PSend13175);
    
    MethodClosure MC_SMB_unwrapConstant_ = new_MethodClosure((Method)PMethod13166, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_unwrapConstant_, MC_SMB_unwrapConstant_);
}


static void init_SMB_parser() {
    Symbol SMB_parser = new_Symbol(L"parser");
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend13178 = new_Send((Optr)PSmalltalkParser_classReference, SMB_instance, 0);
    Array PThreadedCode13177 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PSmalltalkParser_classReference, (Optr)&t_send0, (Optr)PSend13178, (Optr)&t_method_return);
    Method PMethod13176 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13177, 1, PSend13178);
    
    MethodClosure MC_SMB_parser = new_MethodClosure((Method)PMethod13176, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_parser, MC_SMB_parser);
}


static void init_SMB_visitMessageCascadeExpression_() {
    Symbol SMB_visitMessageCascadeExpression_ = new_Symbol(L"visitMessageCascadeExpression:");
    Variable VAR_anASTMessageCascadeExpression_0_0 = new_Variable_named(L"anASTMessageCascadeExpression", 0);
    Array PArray13180 = new_Array_with(1, (Optr)VAR_anASTMessageCascadeExpression_0_0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_block_0_2 = new_Variable_named(L"block", 0);
    Variable VAR_send_0_3 = new_Variable_named(L"send", 0);
    Array PArray13181 = new_Array_with(3, (Optr)VAR_receiver_0_1, (Optr)VAR_block_0_2, (Optr)VAR_send_0_3);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13185 = new_Send((Optr)ASTVariable_classReference, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    Symbol  SMB___receiver__ = new_Symbol(L"_receiver_");
    Constant SMB___receiver___Const = new_Constant((Optr)SMB___receiver__);
    // name:. 
    Send PSend13184 = new_Send((Optr)PSend13185, SMB_name_, 1, (Optr)SMB___receiver___Const);
    Assign PAssign13183 = new_Assign((Optr)VAR_receiver_0_1, (Optr)PSend13184);
    Symbol SMB_cascades = new_Symbol(L"cascades");
    // cascades. 
    Send PSend13186 = new_Send((Optr)VAR_anASTMessageCascadeExpression_0_0, SMB_cascades, 0);
    Variable VAR_message_1_0 = new_Variable_named(L"message", 1);
    Array PArray13188 = new_Array_with(1, (Optr)VAR_message_1_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend13190 = new_Send((Optr)VAR_message_1_0, SMB_receiver_, 1, (Optr)VAR_receiver_0_1);
    Array PThreadedCode13189 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_message_1_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend13190, (Optr)&t_method_return);
    Block PBlock13187 = new_Block_with(PArray13188, empty_Array, PThreadedCode13189, 1, PSend13190);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend13191 = new_Send((Optr)PSend13186, SMB_do_, 1, (Optr)PBlock13187);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray13195 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend13197 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_receiver_0_1);
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    // parameters:. 
    Send PSend13198 = new_Send((Optr)VAR__receiver__1_0, SMB_parameters_, 1, (Optr)PSend13197);
    // cascades. 
    Send PSend13199 = new_Send((Optr)VAR_anASTMessageCascadeExpression_0_0, SMB_cascades, 0);
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    // statements:. 
    Send PSend13200 = new_Send((Optr)VAR__receiver__1_0, SMB_statements_, 1, (Optr)PSend13199);
    Array PThreadedCode13196 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend13197, (Optr)&t_send1, (Optr)PSend13198, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anASTMessageCascadeExpression_0_0, (Optr)&t_send0, (Optr)PSend13199, (Optr)&t_send1, (Optr)PSend13200, (Optr)&t_method_return);
    Block PBlock13194 = new_Block_with(PArray13195, empty_Array, PThreadedCode13196, 2, PSend13198, PSend13200);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // new. 
    Send PSend13201 = new_Send((Optr)ASTBlock_classReference, SMB_new, 0);
    // value:. 
    Send PSend13193 = new_Send((Optr)PBlock13194, SMB_value_, 1, (Optr)PSend13201);
    Assign PAssign13192 = new_Assign((Optr)VAR_block_0_2, (Optr)PSend13193);
    Array PArray13205 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    // receiver:. 
    Send PSend13207 = new_Send((Optr)VAR__receiver__1_0, SMB_receiver_, 1, (Optr)VAR_block_0_2);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend13208 = new_Send((Optr)VAR_anASTMessageCascadeExpression_0_0, SMB_receiver, 0);
    // with:. 
    Send PSend13209 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)PSend13208);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend13210 = new_Send((Optr)VAR__receiver__1_0, SMB_arguments_, 1, (Optr)PSend13209);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Constant SMB_value__Const = new_Constant((Optr)SMB_value_);
    // selector:. 
    Send PSend13211 = new_Send((Optr)VAR__receiver__1_0, SMB_selector_, 1, (Optr)SMB_value__Const);
    Array PThreadedCode13206 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_block_0_2, (Optr)&t_send1, (Optr)PSend13207, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTMessageCascadeExpression_0_0, (Optr)&t_send0, (Optr)PSend13208, (Optr)&t_send1, (Optr)PSend13209, (Optr)&t_send1, (Optr)PSend13210, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_value_, (Optr)&t_send1, (Optr)PSend13211, (Optr)&t_method_return);
    Block PBlock13204 = new_Block_with(PArray13205, empty_Array, PThreadedCode13206, 3, PSend13207, PSend13210, PSend13211);
    // new. 
    Send PSend13212 = new_Send((Optr)ASTMessageExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend13203 = new_Send((Optr)PBlock13204, SMB_value_, 1, (Optr)PSend13212);
    Assign PAssign13202 = new_Assign((Optr)VAR_send_0_3, (Optr)PSend13203);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend13213 = new_Send((Optr)self, SMB_visit_, 1, (Optr)VAR_send_0_3);
    Array PThreadedCode13182 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign13183, (Optr)&t_push_class_reference, (Optr)ASTVariable_classReference, (Optr)&t_send0, (Optr)PSend13185, (Optr)&t_push1, (Optr)SMB___receiver__, (Optr)&t_send1, (Optr)PSend13184, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_anASTMessageCascadeExpression_0_0, (Optr)&t_send0, (Optr)PSend13186, (Optr)&t_push_closure, (Optr)PBlock13187, (Optr)&t_send1, (Optr)PSend13191, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13192, (Optr)&t_push_closure, (Optr)PBlock13194, (Optr)&t_push_class_reference, (Optr)ASTBlock_classReference, (Optr)&t_send0, (Optr)PSend13201, (Optr)&t_send1, (Optr)PSend13193, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13202, (Optr)&t_push_closure, (Optr)PBlock13204, (Optr)&t_push_class_reference, (Optr)ASTMessageExpression_classReference, (Optr)&t_send0, (Optr)PSend13212, (Optr)&t_send1, (Optr)PSend13203, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_send_0_3, (Optr)&t_send1, (Optr)PSend13213, (Optr)&t_method_return);
    Method PMethod13179 = new_Method_with(PArray13180, PArray13181, empty_Array, PThreadedCode13182, 5, PAssign13183, PSend13191, PAssign13192, PAssign13202, PSend13213);
    
    MethodClosure MC_SMB_visitMessageCascadeExpression_ = new_MethodClosure((Method)PMethod13179, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitMessageCascadeExpression_, MC_SMB_visitMessageCascadeExpression_);
}


static void init_SMB_visitUnaryExpression_() {
    Symbol SMB_visitUnaryExpression_ = new_Symbol(L"visitUnaryExpression:");
    Variable VAR_anASTUnaryExpression_0_0 = new_Variable_named(L"anASTUnaryExpression", 0);
    Array PArray13215 = new_Array_with(1, (Optr)VAR_anASTUnaryExpression_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray13218 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend13220 = new_Send((Optr)VAR_anASTUnaryExpression_0_0, SMB_selector, 0);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend13221 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)PSend13220);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // new:. 
    Send PSend13222 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_0_Const);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend13223 = new_Send((Optr)VAR__receiver__1_0, SMB_arguments_, 1, (Optr)PSend13222);
    Array PThreadedCode13219 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anASTUnaryExpression_0_0, (Optr)&t_send0, (Optr)PSend13220, (Optr)&t_send1, (Optr)PSend13221, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend13222, (Optr)&t_send1, (Optr)PSend13223, (Optr)&t_method_return);
    Block PBlock13217 = new_Block_with(PArray13218, empty_Array, PThreadedCode13219, 2, PSend13221, PSend13223);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend13224 = new_Send((Optr)VAR_anASTUnaryExpression_0_0, SMB_receiver, 0);
    Symbol SMB_createSendTo_ = new_Symbol(L"createSendTo:");
    // createSendTo:. 
    Send PSend13225 = new_Send((Optr)self, SMB_createSendTo_, 1, (Optr)PSend13224);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend13226 = new_Send((Optr)PBlock13217, SMB_value_, 1, (Optr)PSend13225);
    Array PThreadedCode13216 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_closure, (Optr)PBlock13217, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anASTUnaryExpression_0_0, (Optr)&t_send0, (Optr)PSend13224, (Optr)&t_send1, (Optr)PSend13225, (Optr)&t_send1, (Optr)PSend13226, (Optr)&t_method_return);
    Method PMethod13214 = new_Method_with(PArray13215, empty_Array, empty_Array, PThreadedCode13216, 1, PSend13226);
    
    MethodClosure MC_SMB_visitUnaryExpression_ = new_MethodClosure((Method)PMethod13214, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitUnaryExpression_, MC_SMB_visitUnaryExpression_);
}


static void init_SMB_error_() {
    Symbol SMB_error_ = new_Symbol(L"error:");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Array PArray13228 = new_Array_with(1, (Optr)VAR_message_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray13231 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_target_ = new_Symbol(L"target:");
    // target:. 
    Send PSend13233 = new_Send((Optr)VAR__receiver__1_0, SMB_target_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass);
    Symbol SMB_method_ = new_Symbol(L"method:");
    // method:. 
    Send PSend13234 = new_Send((Optr)VAR__receiver__1_0, SMB_method_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_currentMethod);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend13235 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)VAR_message_0_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend13236 = new_Send((Optr)VAR__receiver__1_0, SMB_signal, 0);
    Array PThreadedCode13232 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send1, (Optr)PSend13233, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_currentMethod, (Optr)&t_send1, (Optr)PSend13234, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_send1, (Optr)PSend13235, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend13236, (Optr)&t_method_return);
    Block PBlock13230 = new_Block_with(PArray13231, empty_Array, PThreadedCode13232, 4, PSend13233, PSend13234, PSend13235, PSend13236);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13237 = new_Send((Optr)PCompilationFailure_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend13238 = new_Send((Optr)PBlock13230, SMB_value_, 1, (Optr)PSend13237);
    Array PThreadedCode13229 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock13230, (Optr)&t_push_class_reference, (Optr)PCompilationFailure_classReference, (Optr)&t_send0, (Optr)PSend13237, (Optr)&t_send1, (Optr)PSend13238, (Optr)&t_method_return);
    Method PMethod13227 = new_Method_with(PArray13228, empty_Array, empty_Array, PThreadedCode13229, 1, PSend13238);
    
    MethodClosure MC_SMB_error_ = new_MethodClosure((Method)PMethod13227, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_error_, MC_SMB_error_);
}


static void init_SMB_visitVariable_() {
    Symbol SMB_visitVariable_ = new_Symbol(L"visitVariable:");
    Variable VAR_anASTVariable_0_0 = new_Variable_named(L"anASTVariable", 0);
    Array PArray13240 = new_Array_with(1, (Optr)VAR_anASTVariable_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray13243 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_lookup_ = new_Symbol(L"lookup:");
    // lookup:. 
    Send PSend13245 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_lookup_, 1, (Optr)VAR_anASTVariable_0_0);
    Variable VAR_value_2_0 = new_Variable_named(L"value", 2);
    Array PArray13247 = new_Array_with(1, (Optr)VAR_value_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13249 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_2_0);
    Array PThreadedCode13248 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_2_0, (Optr)&t_send1, (Optr)PSend13249, (Optr)&t_method_return);
    Block PBlock13246 = new_Block_with(PArray13247, empty_Array, PThreadedCode13248, 1, PSend13249);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend13250 = new_Send((Optr)PSend13245, SMB_ifNotNil_, 1, (Optr)PBlock13246);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend13251 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend13252 = new_Send((Optr)PSend13251, SMB_first, 0);
    Symbol SMB_isUppercase = new_Symbol(L"isUppercase");
    // isUppercase. 
    Send PSend13253 = new_Send((Optr)PSend13252, SMB_isUppercase, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray13258 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_target_ = new_Symbol(L"target:");
    // target:. 
    Send PSend13260 = new_Send((Optr)VAR__receiver__2_0, SMB_target_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass);
    Symbol SMB_method_ = new_Symbol(L"method:");
    // method:. 
    Send PSend13261 = new_Send((Optr)VAR__receiver__2_0, SMB_method_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_currentMethod);
    Symbol SMB_variable_ = new_Symbol(L"variable:");
    // variable:. 
    Send PSend13262 = new_Send((Optr)VAR__receiver__2_0, SMB_variable_, 1, (Optr)VAR_anASTVariable_0_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend13263 = new_Send((Optr)VAR__receiver__2_0, SMB_signal, 0);
    Array PThreadedCode13259 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send1, (Optr)PSend13260, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_currentMethod, (Optr)&t_send1, (Optr)PSend13261, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send1, (Optr)PSend13262, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend13263, (Optr)&t_method_return);
    Block PBlock13257 = new_Block_with(PArray13258, empty_Array, PThreadedCode13259, 4, PSend13260, PSend13261, PSend13262, PSend13263);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13264 = new_Send((Optr)PUndefinedVariable_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend13265 = new_Send((Optr)PBlock13257, SMB_value_, 1, (Optr)PSend13264);
    // escape:. 
    Send PSend13266 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend13265);
    Array PThreadedCode13256 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_closure, (Optr)PBlock13257, (Optr)&t_push_class_reference, (Optr)PUndefinedVariable_classReference, (Optr)&t_send0, (Optr)PSend13264, (Optr)&t_send1, (Optr)PSend13265, (Optr)&t_send1, (Optr)PSend13266, (Optr)&t_block_return);
    Block PBlock13255 = new_Block_with(empty_Array, empty_Array, PThreadedCode13256, 1, PSend13266);
    // ifFalse:. 
    Send PSend13254 = new_Send((Optr)PSend13253, SMB_ifFalse_, 1, (Optr)PBlock13255);
    Symbol SMB_scope = new_Symbol(L"scope");
    // scope. 
    Send PSend13267 = new_Send((Optr)self, SMB_scope, 0);
    // name. 
    Send PSend13268 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_package = new_Symbol(L"package");
    // package. 
    Send PSend13269 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, SMB_package, 0);
    // name. 
    Send PSend13270 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_world = new_Symbol(L"world");
    // world. 
    Send PSend13273 = new_Send((Optr)self, SMB_world, 0);
    // name. 
    Send PSend13274 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_ensureClassReference_ = new_Symbol(L"ensureClassReference:");
    // ensureClassReference:. 
    Send PSend13275 = new_Send((Optr)PSend13273, SMB_ensureClassReference_, 1, (Optr)PSend13274);
    Array PThreadedCode13272 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13273, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13274, (Optr)&t_send1, (Optr)PSend13275, (Optr)&t_block_return);
    Block PBlock13271 = new_Block_with(empty_Array, empty_Array, PThreadedCode13272, 1, PSend13275);
    Symbol SMB_findName_ifAbsent_ = new_Symbol(L"findName:ifAbsent:");
    // findName:ifAbsent:. 
    Send PSend13276 = new_Send((Optr)PSend13269, SMB_findName_ifAbsent_, 2, (Optr)PSend13270, (Optr)PBlock13271);
    Symbol SMB_asNode = new_Symbol(L"asNode");
    // asNode. 
    Send PSend13277 = new_Send((Optr)PSend13276, SMB_asNode, 0);
    Symbol SMB_declare_as_ = new_Symbol(L"declare:as:");
    // declare:as:. 
    Send PSend13278 = new_Send((Optr)PSend13267, SMB_declare_as_, 2, (Optr)PSend13268, (Optr)PSend13277);
    Array PThreadedCode13244 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send1, (Optr)PSend13245, (Optr)&t_push_closure, (Optr)PBlock13246, (Optr)&t_send1, (Optr)PSend13250, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13251, (Optr)&t_send0, (Optr)PSend13252, (Optr)&t_send0, (Optr)PSend13253, (Optr)&t_send_ifFalse_, (Optr)PSend13254, (Optr)PBlock13255, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13267, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13268, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send0, (Optr)PSend13269, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13270, (Optr)&t_push_closure, (Optr)PBlock13271, (Optr)&t_send2, (Optr)PSend13276, (Optr)&t_send0, (Optr)PSend13277, (Optr)&t_send2, (Optr)PSend13278, (Optr)&t_method_return);
    Block PBlock13242 = new_Block_with(PArray13243, empty_Array, PThreadedCode13244, 3, PSend13250, PSend13254, PSend13278);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13279 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock13242);
    Array PThreadedCode13241 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock13242, (Optr)&t_send1, (Optr)PSend13279, (Optr)&t_method_return);
    Method PMethod13239 = new_Method_with(PArray13240, empty_Array, empty_Array, PThreadedCode13241, 1, PSend13279);
    
    MethodClosure MC_SMB_visitVariable_ = new_MethodClosure((Method)PMethod13239, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitVariable_, MC_SMB_visitVariable_);
}


static void init_SMB_currentBlock() {
    Symbol SMB_currentBlock = new_Symbol(L"currentBlock");
    Array PThreadedCode13281 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_currentBlock, (Optr)&t_method_return);
    Method PMethod13280 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13281, 1, slot_Smalltalk_Compiler_Compiler_currentBlock);
    
    MethodClosure MC_SMB_currentBlock = new_MethodClosure((Method)PMethod13280, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_currentBlock, MC_SMB_currentBlock);
}


static void init_SMB_visitBlock_() {
    Symbol SMB_visitBlock_ = new_Symbol(L"visitBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray13283 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Variable VAR_hasState_0_2 = new_Variable_named(L"hasState", 0);
    Array PArray13284 = new_Array_with(2, (Optr)VAR_block_0_1, (Optr)VAR_hasState_0_2);
    Symbol SMB_parameters = new_Symbol(L"parameters");
    // parameters. 
    Send PSend13290 = new_Send((Optr)VAR_aBlock_0_0, SMB_parameters, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend13289 = new_Send((Optr)PSend13290, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend13288 = new_Send((Optr)PSend13289, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_or_ = new_Symbol(L"or:");
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend13293 = new_Send((Optr)VAR_aBlock_0_0, SMB_temporaries, 0);
    // size. 
    Send PSend13294 = new_Send((Optr)PSend13293, SMB_size, 0);
    // >. 
    Send PSend13295 = new_Send((Optr)PSend13294, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode13292 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13293, (Optr)&t_send0, (Optr)PSend13294, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend13295, (Optr)&t_block_return);
    Block PBlock13291 = new_Block_with(empty_Array, empty_Array, PThreadedCode13292, 1, PSend13295);
    // or:. 
    Send PSend13287 = new_Send((Optr)PSend13288, SMB_or_, 1, (Optr)PBlock13291);
    Assign PAssign13286 = new_Assign((Optr)VAR_hasState_0_2, (Optr)PSend13287);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_pushScope = new_Symbol(L"pushScope");
    // pushScope. 
    Send PSend13299 = new_Send((Optr)self, SMB_pushScope, 0);
    // parameters. 
    Send PSend13300 = new_Send((Optr)VAR_aBlock_0_0, SMB_parameters, 0);
    Symbol SMB_declareAll_ = new_Symbol(L"declareAll:");
    // declareAll:. 
    Send PSend13301 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_declareAll_, 1, (Optr)PSend13300);
    // temporaries. 
    Send PSend13302 = new_Send((Optr)VAR_aBlock_0_0, SMB_temporaries, 0);
    // declareAll:. 
    Send PSend13303 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_declareAll_, 1, (Optr)PSend13302);
    Array PThreadedCode13298 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13299, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13300, (Optr)&t_send1, (Optr)PSend13301, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13302, (Optr)&t_send1, (Optr)PSend13303, (Optr)&t_block_return);
    Block PBlock13297 = new_Block_with(empty_Array, empty_Array, PThreadedCode13298, 3, PSend13299, PSend13301, PSend13303);
    // ifTrue:. 
    Send PSend13296 = new_Send((Optr)VAR_hasState_0_2, SMB_ifTrue_, 1, (Optr)PBlock13297);
    Symbol SMB_createBlock_ = new_Symbol(L"createBlock:");
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13307 = new_Send((Optr)VAR_aBlock_0_0, SMB_statements, 0);
    // size. 
    Send PSend13306 = new_Send((Optr)PSend13307, SMB_size, 0);
    // createBlock:. 
    Send PSend13305 = new_Send((Optr)self, SMB_createBlock_, 1, (Optr)PSend13306);
    Assign PAssign13304 = new_Assign((Optr)VAR_block_0_1, (Optr)PSend13305);
    // parameters. 
    Send PSend13308 = new_Send((Optr)VAR_aBlock_0_0, SMB_parameters, 0);
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    // acceptOnCollection:. 
    Send PSend13309 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend13308);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend13310 = new_Send((Optr)PSend13309, SMB_asArray, 0);
    // temporaries. 
    Send PSend13311 = new_Send((Optr)VAR_aBlock_0_0, SMB_temporaries, 0);
    // acceptOnCollection:. 
    Send PSend13312 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend13311);
    // asArray. 
    Send PSend13313 = new_Send((Optr)PSend13312, SMB_asArray, 0);
    Symbol SMB_params_locals_ = new_Symbol(L"params:locals:");
    // params:locals:. 
    Send PSend13314 = new_Send((Optr)VAR_block_0_1, SMB_params_locals_, 2, (Optr)PSend13310, (Optr)PSend13313);
    // statements. 
    Send PSend13315 = new_Send((Optr)VAR_aBlock_0_0, SMB_statements, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray13317 = new_Array_with(2, (Optr)VAR_each_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend13319 = new_Send((Optr)self, SMB_visit_, 1, (Optr)VAR_each_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend13320 = new_Send((Optr)VAR_block_0_1, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)PSend13319);
    Array PThreadedCode13318 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send1, (Optr)PSend13319, (Optr)&t_send2, (Optr)PSend13320, (Optr)&t_method_return);
    Block PBlock13316 = new_Block_with(PArray13317, empty_Array, PThreadedCode13318, 1, PSend13320);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend13321 = new_Send((Optr)PSend13315, SMB_withIndexDo_, 1, (Optr)PBlock13316);
    Symbol SMB_popScope = new_Symbol(L"popScope");
    // popScope. 
    Send PSend13325 = new_Send((Optr)self, SMB_popScope, 0);
    Array PThreadedCode13324 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13325, (Optr)&t_block_return);
    Block PBlock13323 = new_Block_with(empty_Array, empty_Array, PThreadedCode13324, 1, PSend13325);
    // ifTrue:. 
    Send PSend13322 = new_Send((Optr)VAR_hasState_0_2, SMB_ifTrue_, 1, (Optr)PBlock13323);
    Array PThreadedCode13285 = instantiate_Array_with(ThreadedCode_Class, 0, 77, (Optr)&t_push1, (Optr)PAssign13286, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13290, (Optr)&t_send0, (Optr)PSend13289, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend13288, (Optr)&t_push_closure, (Optr)PBlock13291, (Optr)&t_send1, (Optr)PSend13287, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hasState_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend13296, (Optr)PBlock13297, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13304, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13307, (Optr)&t_send0, (Optr)PSend13306, (Optr)&t_send1, (Optr)PSend13305, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13308, (Optr)&t_send1, (Optr)PSend13309, (Optr)&t_send0, (Optr)PSend13310, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13311, (Optr)&t_send1, (Optr)PSend13312, (Optr)&t_send0, (Optr)PSend13313, (Optr)&t_send2, (Optr)PSend13314, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13315, (Optr)&t_push_closure, (Optr)PBlock13316, (Optr)&t_send1, (Optr)PSend13321, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hasState_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend13322, (Optr)PBlock13323, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_method_return);
    Method PMethod13282 = new_Method_with(PArray13283, PArray13284, empty_Array, PThreadedCode13285, 7, PAssign13286, PSend13296, PAssign13304, PSend13314, PSend13321, PSend13322, VAR_block_0_1);
    
    MethodClosure MC_SMB_visitBlock_ = new_MethodClosure((Method)PMethod13282, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitBlock_, MC_SMB_visitBlock_);
}


static void init_SMB_createSendTo_sized_() {
    Symbol SMB_createSendTo_sized_ = new_Symbol(L"createSendTo:sized:");
    Variable VAR_receiver_0_0 = new_Variable_named(L"receiver", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Array PArray13327 = new_Array_with(2, (Optr)VAR_receiver_0_0, (Optr)VAR_size_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray13330 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend13332 = new_Send((Optr)VAR_receiver_0_0, SMB_isKindOf_, 1, (Optr)ASTSuper_classReference);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend13336 = new_Send((Optr)PSuper_classReference, SMB_new_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13337 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend13336);
    Array PThreadedCode13335 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PSuper_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend13336, (Optr)&t_send1, (Optr)PSend13337, (Optr)&t_block_return);
    Block PBlock13334 = new_Block_with(empty_Array, empty_Array, PThreadedCode13335, 1, PSend13337);
    // ifTrue:. 
    Send PSend13333 = new_Send((Optr)PSend13332, SMB_ifTrue_, 1, (Optr)PBlock13334);
    // new:. 
    Send PSend13338 = new_Send((Optr)PSend_classReference, SMB_new_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend13339 = new_Send((Optr)self, SMB_visit_, 1, (Optr)VAR_receiver_0_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend13340 = new_Send((Optr)PSend13338, SMB_receiver_, 1, (Optr)PSend13339);
    Array PThreadedCode13331 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_push_class_reference, (Optr)ASTSuper_classReference, (Optr)&t_send1, (Optr)PSend13332, (Optr)&t_send_ifTrue_, (Optr)PSend13333, (Optr)PBlock13334, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PSend_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend13338, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_send1, (Optr)PSend13339, (Optr)&t_send1, (Optr)PSend13340, (Optr)&t_method_return);
    Block PBlock13329 = new_Block_with(PArray13330, empty_Array, PThreadedCode13331, 2, PSend13333, PSend13340);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13341 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock13329);
    Array PThreadedCode13328 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock13329, (Optr)&t_send1, (Optr)PSend13341, (Optr)&t_method_return);
    Method PMethod13326 = new_Method_with(PArray13327, empty_Array, empty_Array, PThreadedCode13328, 1, PSend13341);
    
    MethodClosure MC_SMB_createSendTo_sized_ = new_MethodClosure((Method)PMethod13326, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createSendTo_sized_, MC_SMB_createSendTo_sized_);
}


static void init_SMB_visitPath_() {
    Symbol SMB_visitPath_ = new_Symbol(L"visitPath:");
    Variable VAR_aPath_0_0 = new_Variable_named(L"aPath", 0);
    Array PArray13343 = new_Array_with(1, (Optr)VAR_aPath_0_0);
    Symbol SMB_package = new_Symbol(L"package");
    // package. 
    Send PSend13345 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, SMB_package, 0);
    Symbol SMB_path = new_Symbol(L"path");
    // path. 
    Send PSend13346 = new_Send((Optr)VAR_aPath_0_0, SMB_path, 0);
    Symbol SMB_lookup_ = new_Symbol(L"lookup:");
    // lookup:. 
    Send PSend13347 = new_Send((Optr)PSend13345, SMB_lookup_, 1, (Optr)PSend13346);
    Symbol SMB_asNode = new_Symbol(L"asNode");
    // asNode. 
    Send PSend13348 = new_Send((Optr)PSend13347, SMB_asNode, 0);
    Array PThreadedCode13344 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send0, (Optr)PSend13345, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_send0, (Optr)PSend13346, (Optr)&t_send1, (Optr)PSend13347, (Optr)&t_send0, (Optr)PSend13348, (Optr)&t_method_return);
    Method PMethod13342 = new_Method_with(PArray13343, empty_Array, empty_Array, PThreadedCode13344, 1, PSend13348);
    
    MethodClosure MC_SMB_visitPath_ = new_MethodClosure((Method)PMethod13342, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitPath_, MC_SMB_visitPath_);
}


static void init_SMB_visitBraceExpression_() {
    Symbol SMB_visitBraceExpression_ = new_Symbol(L"visitBraceExpression:");
    Variable VAR_braceExpression_0_0 = new_Variable_named(L"braceExpression", 0);
    Array PArray13350 = new_Array_with(1, (Optr)VAR_braceExpression_0_0);
    String string_13352 = new_String(L"Brace expressions are not supported by the compiler. Patches welcome!");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_13352_Const = new_Constant((Optr)string_13352);
    // error:. 
    Send PSend13353 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_13352_Const);
    Array PThreadedCode13351 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_13352, (Optr)&t_send1, (Optr)PSend13353, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13349 = new_Method_with(PArray13350, empty_Array, empty_Array, PThreadedCode13351, 2, PSend13353, self);
    
    MethodClosure MC_SMB_visitBraceExpression_ = new_MethodClosure((Method)PMethod13349, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitBraceExpression_, MC_SMB_visitBraceExpression_);
}


static void init_SMB_world_() {
    Symbol SMB_world_ = new_Symbol(L"world:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray13355 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign13357 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_world, (Optr)VAR_anObject_0_0);
    Array PThreadedCode13356 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign13357, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13354 = new_Method_with(PArray13355, empty_Array, empty_Array, PThreadedCode13356, 2, PAssign13357, self);
    
    MethodClosure MC_SMB_world_ = new_MethodClosure((Method)PMethod13354, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_world_, MC_SMB_world_);
}


static void init_SMB_pushScope() {
    Symbol SMB_pushScope = new_Symbol(L"pushScope");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend13361 = new_Send((Optr)PSubScope_classReference, SMB_new_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_scope);
    Assign PAssign13360 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)PSend13361);
    Array PThreadedCode13359 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign13360, (Optr)&t_push_class_reference, (Optr)PSubScope_classReference, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send1, (Optr)PSend13361, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13358 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13359, 2, PAssign13360, self);
    
    MethodClosure MC_SMB_pushScope = new_MethodClosure((Method)PMethod13358, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_pushScope, MC_SMB_pushScope);
}


static void init_SMB_createPInfo() {
    Symbol SMB_createPInfo = new_Symbol(L"createPInfo");
    Variable VAR_info_0_0 = new_Variable_named(L"info", 0);
    Array PArray13363 = new_Array_with(1, (Optr)VAR_info_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13366 = new_Send((Optr)PInfo_classReference, SMB_new, 0);
    Assign PAssign13365 = new_Assign((Optr)VAR_info_0_0, (Optr)PSend13366);
    Symbol SMB_sourceObject = new_Symbol(L"sourceObject");
    // sourceObject. 
    Send PSend13367 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_currentMethod, SMB_sourceObject, 0);
    Symbol SMB_sourceFile_ = new_Symbol(L"sourceFile:");
    // sourceFile:. 
    Send PSend13368 = new_Send((Optr)VAR_info_0_0, SMB_sourceFile_, 1, (Optr)PSend13367);
    Symbol SMB_line_ = new_Symbol(L"line:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // line:. 
    Send PSend13369 = new_Send((Optr)VAR_info_0_0, SMB_line_, 1, (Optr)int_1_Const);
    Symbol SMB_column_ = new_Symbol(L"column:");
    // column:. 
    Send PSend13370 = new_Send((Optr)VAR_info_0_0, SMB_column_, 1, (Optr)int_1_Const);
    Array PThreadedCode13364 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign13365, (Optr)&t_push_class_reference, (Optr)PInfo_classReference, (Optr)&t_send0, (Optr)PSend13366, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_info_0_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_currentMethod, (Optr)&t_send0, (Optr)PSend13367, (Optr)&t_send1, (Optr)PSend13368, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_info_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend13369, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_info_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend13370, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_info_0_0, (Optr)&t_method_return);
    Method PMethod13362 = new_Method_with(empty_Array, PArray13363, empty_Array, PThreadedCode13364, 5, PAssign13365, PSend13368, PSend13369, PSend13370, VAR_info_0_0);
    
    MethodClosure MC_SMB_createPInfo = new_MethodClosure((Method)PMethod13362, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createPInfo, MC_SMB_createPInfo);
}


static void init_SMB_visitKeywordSelector_() {
    Symbol SMB_visitKeywordSelector_ = new_Symbol(L"visitKeywordSelector:");
    Variable VAR_anASTKeywordSelector_0_0 = new_Variable_named(L"anASTKeywordSelector", 0);
    Array PArray13372 = new_Array_with(1, (Optr)VAR_anASTKeywordSelector_0_0);
    Symbol SMB_selectorSymbol = new_Symbol(L"selectorSymbol");
    // selectorSymbol. 
    Send PSend13374 = new_Send((Optr)VAR_anASTKeywordSelector_0_0, SMB_selectorSymbol, 0);
    Array PThreadedCode13373 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_anASTKeywordSelector_0_0, (Optr)&t_send0, (Optr)PSend13374, (Optr)&t_method_return);
    Method PMethod13371 = new_Method_with(PArray13372, empty_Array, empty_Array, PThreadedCode13373, 1, PSend13374);
    
    MethodClosure MC_SMB_visitKeywordSelector_ = new_MethodClosure((Method)PMethod13371, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitKeywordSelector_, MC_SMB_visitKeywordSelector_);
}


static void init_SMB_visitBoolean_() {
    Symbol SMB_visitBoolean_ = new_Symbol(L"visitBoolean:");
    Variable VAR_aPinocchioBoolean_0_0 = new_Variable_named(L"aPinocchioBoolean", 0);
    Array PArray13376 = new_Array_with(1, (Optr)VAR_aPinocchioBoolean_0_0);
    Array PThreadedCode13377 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_aPinocchioBoolean_0_0, (Optr)&t_method_return);
    Method PMethod13375 = new_Method_with(PArray13376, empty_Array, empty_Array, PThreadedCode13377, 1, VAR_aPinocchioBoolean_0_0);
    
    MethodClosure MC_SMB_visitBoolean_ = new_MethodClosure((Method)PMethod13375, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitBoolean_, MC_SMB_visitBoolean_);
}


static void init_class_SMB_compile_on_() {
    Symbol SMB_compile_on_ = new_Symbol(L"compile:on:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_aClass_0_1 = new_Variable_named(L"aClass", 0);
    Array PArray13379 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aClass_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray13382 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_pclass_ = new_Symbol(L"pclass:");
    // pclass:. 
    Send PSend13384 = new_Send((Optr)VAR__receiver__1_0, SMB_pclass_, 1, (Optr)VAR_aClass_0_1);
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend13385 = new_Send((Optr)VAR__receiver__1_0, SMB_compile_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode13383 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aClass_0_1, (Optr)&t_send1, (Optr)PSend13384, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend13385, (Optr)&t_method_return);
    Block PBlock13381 = new_Block_with(PArray13382, empty_Array, PThreadedCode13383, 2, PSend13384, PSend13385);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13386 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend13387 = new_Send((Optr)PBlock13381, SMB_value_, 1, (Optr)PSend13386);
    Array PThreadedCode13380 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock13381, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13386, (Optr)&t_send1, (Optr)PSend13387, (Optr)&t_method_return);
    Method PMethod13378 = new_Method_with(PArray13379, empty_Array, empty_Array, PThreadedCode13380, 1, PSend13387);
    
    MethodClosure MC_SMB_compile_on_ = new_MethodClosure((Method)PMethod13378, HEADER(Smalltalk_Compiler_Compiler_Class));
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