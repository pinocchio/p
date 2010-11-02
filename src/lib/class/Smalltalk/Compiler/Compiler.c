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
    Array PArray12460 = new_Array_with(1, (Optr)VAR_aBinaryExpression_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12463 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12465 = new_Send((Optr)VAR_aBinaryExpression_0_0, SMB_selector, 0);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend12466 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)PSend12465);
    Symbol SMB_argument = new_Symbol(L"argument");
    // argument. 
    Send PSend12467 = new_Send((Optr)VAR_aBinaryExpression_0_0, SMB_argument, 0);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend12468 = new_Send((Optr)self, SMB_visit_, 1, (Optr)PSend12467);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend12469 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend12468);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend12470 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode12464 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aBinaryExpression_0_0, (Optr)&t_send0, (Optr)PSend12465, (Optr)&t_send1, (Optr)PSend12466, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBinaryExpression_0_0, (Optr)&t_send0, (Optr)PSend12467, (Optr)&t_send1, (Optr)PSend12468, (Optr)&t_send2, (Optr)PSend12469, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend12470, (Optr)&t_method_return);
    Block PBlock12462 = new_Block_with(PArray12463, empty_Array, PThreadedCode12464, 3, PSend12466, PSend12469, PSend12470);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend12471 = new_Send((Optr)VAR_aBinaryExpression_0_0, SMB_receiver, 0);
    Symbol SMB_createSendTo_sized_ = new_Symbol(L"createSendTo:sized:");
    // createSendTo:sized:. 
    Send PSend12472 = new_Send((Optr)self, SMB_createSendTo_sized_, 2, (Optr)PSend12471, (Optr)int_1_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12473 = new_Send((Optr)PBlock12462, SMB_value_, 1, (Optr)PSend12472);
    Array PThreadedCode12461 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_closure, (Optr)PBlock12462, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBinaryExpression_0_0, (Optr)&t_send0, (Optr)PSend12471, (Optr)&t_push_1, (Optr)&t_send2, (Optr)PSend12472, (Optr)&t_send1, (Optr)PSend12473, (Optr)&t_method_return);
    Method PMethod12459 = new_Method_with(PArray12460, empty_Array, empty_Array, PThreadedCode12461, 1, PSend12473);
    
    MethodClosure MC_SMB_visitBinaryExpression_ = new_MethodClosure((Method)PMethod12459, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitBinaryExpression_, MC_SMB_visitBinaryExpression_);
}


static void init_SMB_createBlock_() {
    Symbol SMB_createBlock_ = new_Symbol(L"createBlock:");
    Variable VAR_size_0_0 = new_Variable_named(L"size", 0);
    Array PArray12475 = new_Array_with(1, (Optr)VAR_size_0_0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Array PArray12476 = new_Array_with(1, (Optr)VAR_block_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12479 = new_Send((Optr)PBlock_classReference, SMB_new_, 1, (Optr)VAR_size_0_0);
    Assign PAssign12478 = new_Assign((Optr)VAR_block_0_1, (Optr)PSend12479);
    Array PThreadedCode12477 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign12478, (Optr)&t_push_class_reference, (Optr)PBlock_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend12479, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_method_return);
    Method PMethod12474 = new_Method_with(PArray12475, PArray12476, empty_Array, PThreadedCode12477, 2, PAssign12478, VAR_block_0_1);
    
    MethodClosure MC_SMB_createBlock_ = new_MethodClosure((Method)PMethod12474, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createBlock_, MC_SMB_createBlock_);
}


static void init_SMB_visitReturnExpression_() {
    Symbol SMB_visitReturnExpression_ = new_Symbol(L"visitReturnExpression:");
    Variable VAR_aReturnExpression_0_0 = new_Variable_named(L"aReturnExpression", 0);
    Array PArray12481 = new_Array_with(1, (Optr)VAR_aReturnExpression_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12484 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend12486 = new_Send((Optr)VAR_aReturnExpression_0_0, SMB_expression, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend12487 = new_Send((Optr)PSend12486, SMB_accept_, 1, (Optr)self);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend12488 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend12487);
    Symbol SMB_currentCallecVariable = new_Symbol(L"currentCallecVariable");
    // currentCallecVariable. 
    Send PSend12489 = new_Send((Optr)self, SMB_currentCallecVariable, 0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend12490 = new_Send((Optr)VAR__receiver__1_0, SMB_receiver_, 1, (Optr)PSend12489);
    Symbol  SMB_escape_ = new_Symbol(L"escape:");
    Symbol SMB_message_ = new_Symbol(L"message:");
    Constant SMB_escape__Const = new_Constant((Optr)SMB_escape_);
    // message:. 
    Send PSend12491 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)SMB_escape__Const);
    Array PThreadedCode12485 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_aReturnExpression_0_0, (Optr)&t_send0, (Optr)PSend12486, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12487, (Optr)&t_send2, (Optr)PSend12488, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12489, (Optr)&t_send1, (Optr)PSend12490, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_escape_, (Optr)&t_send1, (Optr)PSend12491, (Optr)&t_method_return);
    Block PBlock12483 = new_Block_with(PArray12484, empty_Array, PThreadedCode12485, 3, PSend12488, PSend12490, PSend12491);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12492 = new_Send((Optr)PSend_classReference, SMB_new_, 1, (Optr)int_1_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12493 = new_Send((Optr)PBlock12483, SMB_value_, 1, (Optr)PSend12492);
    Array PThreadedCode12482 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock12483, (Optr)&t_push_class_reference, (Optr)PSend_classReference, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12492, (Optr)&t_send1, (Optr)PSend12493, (Optr)&t_method_return);
    Method PMethod12480 = new_Method_with(PArray12481, empty_Array, empty_Array, PThreadedCode12482, 1, PSend12493);
    
    MethodClosure MC_SMB_visitReturnExpression_ = new_MethodClosure((Method)PMethod12480, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitReturnExpression_, MC_SMB_visitReturnExpression_);
}


static void init_SMB_visitArray_() {
    Symbol SMB_visitArray_ = new_Symbol(L"visitArray:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray12495 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    String string_12497 = new_String(L"Literal arrays are not yet supported by the compiler. Patches welcome!");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_12497_Const = new_Constant((Optr)string_12497);
    // error:. 
    Send PSend12498 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_12497_Const);
    Array PThreadedCode12496 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_12497, (Optr)&t_send1, (Optr)PSend12498, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12494 = new_Method_with(PArray12495, empty_Array, empty_Array, PThreadedCode12496, 2, PSend12498, self);
    
    MethodClosure MC_SMB_visitArray_ = new_MethodClosure((Method)PMethod12494, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitArray_, MC_SMB_visitArray_);
}


static void init_SMB_visitMessageExpression_() {
    Symbol SMB_visitMessageExpression_ = new_Symbol(L"visitMessageExpression:");
    Variable VAR_aMessageExpression_0_0 = new_Variable_named(L"aMessageExpression", 0);
    Array PArray12500 = new_Array_with(1, (Optr)VAR_aMessageExpression_0_0);
    Variable VAR_arguments_0_1 = new_Variable_named(L"arguments", 0);
    Array PArray12501 = new_Array_with(1, (Optr)VAR_arguments_0_1);
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    Symbol SMB_arguments = new_Symbol(L"arguments");
    // arguments. 
    Send PSend12505 = new_Send((Optr)VAR_aMessageExpression_0_0, SMB_arguments, 0);
    // acceptOnCollection:. 
    Send PSend12504 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend12505);
    Assign PAssign12503 = new_Assign((Optr)VAR_arguments_0_1, (Optr)PSend12504);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12507 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12509 = new_Send((Optr)VAR_aMessageExpression_0_0, SMB_selector, 0);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend12510 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)PSend12509);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend12511 = new_Send((Optr)VAR__receiver__1_0, SMB_arguments_, 1, (Optr)VAR_arguments_0_1);
    Array PThreadedCode12508 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aMessageExpression_0_0, (Optr)&t_send0, (Optr)PSend12509, (Optr)&t_send1, (Optr)PSend12510, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_arguments_0_1, (Optr)&t_send1, (Optr)PSend12511, (Optr)&t_method_return);
    Block PBlock12506 = new_Block_with(PArray12507, empty_Array, PThreadedCode12508, 2, PSend12510, PSend12511);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend12512 = new_Send((Optr)VAR_aMessageExpression_0_0, SMB_receiver, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12513 = new_Send((Optr)VAR_arguments_0_1, SMB_size, 0);
    Symbol SMB_createSendTo_sized_ = new_Symbol(L"createSendTo:sized:");
    // createSendTo:sized:. 
    Send PSend12514 = new_Send((Optr)self, SMB_createSendTo_sized_, 2, (Optr)PSend12512, (Optr)PSend12513);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12515 = new_Send((Optr)PBlock12506, SMB_value_, 1, (Optr)PSend12514);
    Array PThreadedCode12502 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign12503, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessageExpression_0_0, (Optr)&t_send0, (Optr)PSend12505, (Optr)&t_send1, (Optr)PSend12504, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock12506, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessageExpression_0_0, (Optr)&t_send0, (Optr)PSend12512, (Optr)&t_push_variable, (Optr)VAR_arguments_0_1, (Optr)&t_send0, (Optr)PSend12513, (Optr)&t_send2, (Optr)PSend12514, (Optr)&t_send1, (Optr)PSend12515, (Optr)&t_method_return);
    Method PMethod12499 = new_Method_with(PArray12500, PArray12501, empty_Array, PThreadedCode12502, 2, PAssign12503, PSend12515);
    
    MethodClosure MC_SMB_visitMessageExpression_ = new_MethodClosure((Method)PMethod12499, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitMessageExpression_, MC_SMB_visitMessageExpression_);
}


static void init_SMB_visitAssignmentExpression_() {
    Symbol SMB_visitAssignmentExpression_ = new_Symbol(L"visitAssignmentExpression:");
    Variable VAR_anAssignmentExpression_0_0 = new_Variable_named(L"anAssignmentExpression", 0);
    Array PArray12517 = new_Array_with(1, (Optr)VAR_anAssignmentExpression_0_0);
    Variable VAR_assign_0_1 = new_Variable_named(L"assign", 0);
    Array PArray12518 = new_Array_with(1, (Optr)VAR_assign_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12523 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_variable = new_Symbol(L"variable");
    // variable. 
    Send PSend12525 = new_Send((Optr)VAR_anAssignmentExpression_0_0, SMB_variable, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend12526 = new_Send((Optr)PSend12525, SMB_accept_, 1, (Optr)self);
    Symbol SMB_variable_ = new_Symbol(L"variable:");
    // variable:. 
    Send PSend12527 = new_Send((Optr)VAR__receiver__1_0, SMB_variable_, 1, (Optr)PSend12526);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend12528 = new_Send((Optr)VAR_anAssignmentExpression_0_0, SMB_expression, 0);
    // accept:. 
    Send PSend12529 = new_Send((Optr)PSend12528, SMB_accept_, 1, (Optr)self);
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    // expression:. 
    Send PSend12530 = new_Send((Optr)VAR__receiver__1_0, SMB_expression_, 1, (Optr)PSend12529);
    Array PThreadedCode12524 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anAssignmentExpression_0_0, (Optr)&t_send0, (Optr)PSend12525, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12526, (Optr)&t_send1, (Optr)PSend12527, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anAssignmentExpression_0_0, (Optr)&t_send0, (Optr)PSend12528, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12529, (Optr)&t_send1, (Optr)PSend12530, (Optr)&t_method_return);
    Block PBlock12522 = new_Block_with(PArray12523, empty_Array, PThreadedCode12524, 2, PSend12527, PSend12530);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12531 = new_Send((Optr)PAssign_classReference, SMB_new, 0);
    // value:. 
    Send PSend12521 = new_Send((Optr)PBlock12522, SMB_value_, 1, (Optr)PSend12531);
    Assign PAssign12520 = new_Assign((Optr)VAR_assign_0_1, (Optr)PSend12521);
    // variable. 
    Send PSend12532 = new_Send((Optr)VAR_assign_0_1, SMB_variable, 0);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend12533 = new_Send((Optr)PSend12532, SMB_should, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend12534 = new_Send((Optr)PSend12533, SMB_not, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend12535 = new_Send((Optr)PSend12534, SMB__equals_, 1, (Optr)nil_Const);
    // expression. 
    Send PSend12536 = new_Send((Optr)VAR_assign_0_1, SMB_expression, 0);
    // should. 
    Send PSend12537 = new_Send((Optr)PSend12536, SMB_should, 0);
    // not. 
    Send PSend12538 = new_Send((Optr)PSend12537, SMB_not, 0);
    // =. 
    Send PSend12539 = new_Send((Optr)PSend12538, SMB__equals_, 1, (Optr)nil_Const);
    Array PThreadedCode12519 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign12520, (Optr)&t_push_closure, (Optr)PBlock12522, (Optr)&t_push_class_reference, (Optr)PAssign_classReference, (Optr)&t_send0, (Optr)PSend12531, (Optr)&t_send1, (Optr)PSend12521, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_assign_0_1, (Optr)&t_send0, (Optr)PSend12532, (Optr)&t_send0, (Optr)PSend12533, (Optr)&t_send0, (Optr)PSend12534, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend12535, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_assign_0_1, (Optr)&t_send0, (Optr)PSend12536, (Optr)&t_send0, (Optr)PSend12537, (Optr)&t_send0, (Optr)PSend12538, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend12539, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_assign_0_1, (Optr)&t_method_return);
    Method PMethod12516 = new_Method_with(PArray12517, PArray12518, empty_Array, PThreadedCode12519, 4, PAssign12520, PSend12535, PSend12539, VAR_assign_0_1);
    
    MethodClosure MC_SMB_visitAssignmentExpression_ = new_MethodClosure((Method)PMethod12516, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitAssignmentExpression_, MC_SMB_visitAssignmentExpression_);
}


static void init_SMB_currentCallecVariable_() {
    Symbol SMB_currentCallecVariable_ = new_Symbol(L"currentCallecVariable:");
    Variable VAR_aPinocchioVariable_0_0 = new_Variable_named(L"aPinocchioVariable", 0);
    Array PArray12541 = new_Array_with(1, (Optr)VAR_aPinocchioVariable_0_0);
    Assign PAssign12543 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_currentCallecVariable, (Optr)VAR_aPinocchioVariable_0_0);
    Array PThreadedCode12542 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign12543, (Optr)&t_push_variable, (Optr)VAR_aPinocchioVariable_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12540 = new_Method_with(PArray12541, empty_Array, empty_Array, PThreadedCode12542, 2, PAssign12543, self);
    
    MethodClosure MC_SMB_currentCallecVariable_ = new_MethodClosure((Method)PMethod12540, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_currentCallecVariable_, MC_SMB_currentCallecVariable_);
}


static void init_SMB_visitUnaryAnnotation_() {
    Symbol SMB_visitUnaryAnnotation_ = new_Symbol(L"visitUnaryAnnotation:");
    Variable VAR_anASTUnaryAnnotation_0_0 = new_Variable_named(L"anASTUnaryAnnotation", 0);
    Array PArray12545 = new_Array_with(1, (Optr)VAR_anASTUnaryAnnotation_0_0);
    Variable VAR_annotation_0_1 = new_Variable_named(L"annotation", 0);
    Array PArray12546 = new_Array_with(1, (Optr)VAR_annotation_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // new:. 
    Send PSend12549 = new_Send((Optr)PAnnotation_classReference, SMB_new_, 1, (Optr)int_0_Const);
    Assign PAssign12548 = new_Assign((Optr)VAR_annotation_0_1, (Optr)PSend12549);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12550 = new_Send((Optr)VAR_anASTUnaryAnnotation_0_0, SMB_selector, 0);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend12551 = new_Send((Optr)self, SMB_visit_, 1, (Optr)PSend12550);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend12552 = new_Send((Optr)VAR_annotation_0_1, SMB_selector_, 1, (Optr)PSend12551);
    Array PThreadedCode12547 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign12548, (Optr)&t_push_class_reference, (Optr)PAnnotation_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12549, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_annotation_0_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anASTUnaryAnnotation_0_0, (Optr)&t_send0, (Optr)PSend12550, (Optr)&t_send1, (Optr)PSend12551, (Optr)&t_send1, (Optr)PSend12552, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_annotation_0_1, (Optr)&t_method_return);
    Method PMethod12544 = new_Method_with(PArray12545, PArray12546, empty_Array, PThreadedCode12547, 3, PAssign12548, PSend12552, VAR_annotation_0_1);
    
    MethodClosure MC_SMB_visitUnaryAnnotation_ = new_MethodClosure((Method)PMethod12544, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitUnaryAnnotation_, MC_SMB_visitUnaryAnnotation_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper12555 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12557 = new_Send((Optr)PRootScope_classReference, SMB_new, 0);
    Assign PAssign12556 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)PSend12557);
    Assign PAssign12558 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_rootScope, (Optr)slot_Smalltalk_Compiler_Compiler_scope);
    // new. 
    Send PSend12560 = new_Send((Optr)PThreadedCompiler_classReference, SMB_new, 0);
    Assign PAssign12559 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_threadedCompiler, (Optr)PSend12560);
    Array PThreadedCode12554 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper12555, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12556, (Optr)&t_push_class_reference, (Optr)PRootScope_classReference, (Optr)&t_send0, (Optr)PSend12557, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12558, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12559, (Optr)&t_push_class_reference, (Optr)PThreadedCompiler_classReference, (Optr)&t_send0, (Optr)PSend12560, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12553 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12554, 5, PSuper12555, PAssign12556, PAssign12558, PAssign12559, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod12553, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_visitUnarySelector_() {
    Symbol SMB_visitUnarySelector_ = new_Symbol(L"visitUnarySelector:");
    Variable VAR_aUnarySelector_0_0 = new_Variable_named(L"aUnarySelector", 0);
    Array PArray12562 = new_Array_with(1, (Optr)VAR_aUnarySelector_0_0);
    Symbol SMB_selectorSymbol = new_Symbol(L"selectorSymbol");
    // selectorSymbol. 
    Send PSend12564 = new_Send((Optr)VAR_aUnarySelector_0_0, SMB_selectorSymbol, 0);
    Array PThreadedCode12563 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aUnarySelector_0_0, (Optr)&t_send0, (Optr)PSend12564, (Optr)&t_method_return);
    Method PMethod12561 = new_Method_with(PArray12562, empty_Array, empty_Array, PThreadedCode12563, 1, PSend12564);
    
    MethodClosure MC_SMB_visitUnarySelector_ = new_MethodClosure((Method)PMethod12561, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitUnarySelector_, MC_SMB_visitUnarySelector_);
}


static void init_SMB_compile_() {
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray12566 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    // parse:. 
    Send PSend12568 = new_Send((Optr)self, SMB_parse_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_sourceObject_ = new_Symbol(L"sourceObject:");
    // sourceObject:. 
    Send PSend12569 = new_Send((Optr)PSend12568, SMB_sourceObject_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend12570 = new_Send((Optr)self, SMB_visit_, 1, (Optr)PSend12569);
    Array PThreadedCode12567 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend12568, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend12569, (Optr)&t_send1, (Optr)PSend12570, (Optr)&t_method_return);
    Method PMethod12565 = new_Method_with(PArray12566, empty_Array, empty_Array, PThreadedCode12567, 1, PSend12570);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod12565, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_compile_, MC_SMB_compile_);
}


static void init_SMB_compileThreadedMethod_() {
    Symbol SMB_compileThreadedMethod_ = new_Symbol(L"compileThreadedMethod:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Array PArray12572 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend12574 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_threadedCompiler, SMB_compile_, 1, (Optr)VAR_aMethod_0_0);
    Array PThreadedCode12573 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_threadedCompiler, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend12574, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12571 = new_Method_with(PArray12572, empty_Array, empty_Array, PThreadedCode12573, 2, PSend12574, self);
    
    MethodClosure MC_SMB_compileThreadedMethod_ = new_MethodClosure((Method)PMethod12571, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_compileThreadedMethod_, MC_SMB_compileThreadedMethod_);
}


static void init_SMB_pclass() {
    Symbol SMB_pclass = new_Symbol(L"pclass");
    Array PThreadedCode12576 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_method_return);
    Method PMethod12575 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12576, 1, slot_Smalltalk_Compiler_Compiler_pinocchioClass);
    
    MethodClosure MC_SMB_pclass = new_MethodClosure((Method)PMethod12575, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_pclass, MC_SMB_pclass);
}


static void init_SMB_rootScope() {
    Symbol SMB_rootScope = new_Symbol(L"rootScope");
    Array PThreadedCode12578 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_rootScope, (Optr)&t_method_return);
    Method PMethod12577 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12578, 1, slot_Smalltalk_Compiler_Compiler_rootScope);
    
    MethodClosure MC_SMB_rootScope = new_MethodClosure((Method)PMethod12577, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_rootScope, MC_SMB_rootScope);
}


static void init_SMB_visitFloat_() {
    Symbol SMB_visitFloat_ = new_Symbol(L"visitFloat:");
    Variable VAR_anASTFloat_0_0 = new_Variable_named(L"anASTFloat", 0);
    Array PArray12580 = new_Array_with(1, (Optr)VAR_anASTFloat_0_0);
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    // asNumber. 
    Send PSend12582 = new_Send((Optr)VAR_anASTFloat_0_0, SMB_asNumber, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12583 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)PSend12582);
    Array PThreadedCode12581 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTFloat_0_0, (Optr)&t_send0, (Optr)PSend12582, (Optr)&t_send1, (Optr)PSend12583, (Optr)&t_method_return);
    Method PMethod12579 = new_Method_with(PArray12580, empty_Array, empty_Array, PThreadedCode12581, 1, PSend12583);
    
    MethodClosure MC_SMB_visitFloat_ = new_MethodClosure((Method)PMethod12579, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitFloat_, MC_SMB_visitFloat_);
}


static void init_SMB_scope() {
    Symbol SMB_scope = new_Symbol(L"scope");
    Array PThreadedCode12585 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_method_return);
    Method PMethod12584 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12585, 1, slot_Smalltalk_Compiler_Compiler_scope);
    
    MethodClosure MC_SMB_scope = new_MethodClosure((Method)PMethod12584, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_scope, MC_SMB_scope);
}


static void init_SMB_visitSuper_() {
    Symbol SMB_visitSuper_ = new_Symbol(L"visitSuper:");
    Variable VAR_anASTSuper_0_0 = new_Variable_named(L"anASTSuper", 0);
    Array PArray12587 = new_Array_with(1, (Optr)VAR_anASTSuper_0_0);
    String string_12589 = new_String(L"Should not get an AST Super");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_12589_Const = new_Constant((Optr)string_12589);
    // error:. 
    Send PSend12590 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_12589_Const);
    Array PThreadedCode12588 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_12589, (Optr)&t_send1, (Optr)PSend12590, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12586 = new_Method_with(PArray12587, empty_Array, empty_Array, PThreadedCode12588, 2, PSend12590, self);
    
    MethodClosure MC_SMB_visitSuper_ = new_MethodClosure((Method)PMethod12586, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitSuper_, MC_SMB_visitSuper_);
}


static void init_SMB_visitNumber_() {
    Symbol SMB_visitNumber_ = new_Symbol(L"visitNumber:");
    Variable VAR_anASTNumber_0_0 = new_Variable_named(L"anASTNumber", 0);
    Array PArray12592 = new_Array_with(1, (Optr)VAR_anASTNumber_0_0);
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    // asNumber. 
    Send PSend12594 = new_Send((Optr)VAR_anASTNumber_0_0, SMB_asNumber, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12595 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)PSend12594);
    Array PThreadedCode12593 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTNumber_0_0, (Optr)&t_send0, (Optr)PSend12594, (Optr)&t_send1, (Optr)PSend12595, (Optr)&t_method_return);
    Method PMethod12591 = new_Method_with(PArray12592, empty_Array, empty_Array, PThreadedCode12593, 1, PSend12595);
    
    MethodClosure MC_SMB_visitNumber_ = new_MethodClosure((Method)PMethod12591, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitNumber_, MC_SMB_visitNumber_);
}


static void init_SMB_world() {
    Symbol SMB_world = new_Symbol(L"world");
    Symbol SMB_package = new_Symbol(L"package");
    // package. 
    Send PSend12598 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, SMB_package, 0);
    Array PThreadedCode12597 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send0, (Optr)PSend12598, (Optr)&t_method_return);
    Method PMethod12596 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12597, 1, PSend12598);
    
    MethodClosure MC_SMB_world = new_MethodClosure((Method)PMethod12596, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_world, MC_SMB_world);
}


static void init_SMB_pclass_() {
    Symbol SMB_pclass_ = new_Symbol(L"pclass:");
    Variable VAR_aPinocchioClass_0_0 = new_Variable_named(L"aPinocchioClass", 0);
    Array PArray12600 = new_Array_with(1, (Optr)VAR_aPinocchioClass_0_0);
    Symbol SMB_isRootScope = new_Symbol(L"isRootScope");
    // isRootScope. 
    Send PSend12602 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_isRootScope, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_12606 = new_String(L"Current scope is not RootScope but ");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend12607 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend12608 = new_Send((Optr)PSend12607, SMB_name, 0);
    Constant string_12606_Const = new_Constant((Optr)string_12606);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend12609 = new_Send((Optr)string_12606_Const, SMB__append_, 1, (Optr)PSend12608);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend12610 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend12609);
    Array PThreadedCode12605 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_12606, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send0, (Optr)PSend12607, (Optr)&t_send0, (Optr)PSend12608, (Optr)&t_send1, (Optr)PSend12609, (Optr)&t_send1, (Optr)PSend12610, (Optr)&t_block_return);
    Block PBlock12604 = new_Block_with(empty_Array, empty_Array, PThreadedCode12605, 1, PSend12610);
    // ifFalse:. 
    Send PSend12603 = new_Send((Optr)PSend12602, SMB_ifFalse_, 1, (Optr)PBlock12604);
    Assign PAssign12611 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)VAR_aPinocchioClass_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12615 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    // pclass:. 
    Send PSend12617 = new_Send((Optr)VAR__receiver__1_0, SMB_pclass_, 1, (Optr)VAR_aPinocchioClass_0_0);
    Symbol SMB_parentScope_ = new_Symbol(L"parentScope:");
    // parentScope:. 
    Send PSend12618 = new_Send((Optr)VAR__receiver__1_0, SMB_parentScope_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_scope);
    Array PThreadedCode12616 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_send1, (Optr)PSend12617, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send1, (Optr)PSend12618, (Optr)&t_method_return);
    Block PBlock12614 = new_Block_with(PArray12615, empty_Array, PThreadedCode12616, 2, PSend12617, PSend12618);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12619 = new_Send((Optr)PClassScope_classReference, SMB_new, 0);
    // value:. 
    Send PSend12613 = new_Send((Optr)PBlock12614, SMB_value_, 1, (Optr)PSend12619);
    Assign PAssign12612 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)PSend12613);
    Array PThreadedCode12601 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send0, (Optr)PSend12602, (Optr)&t_send_ifFalse_, (Optr)PSend12603, (Optr)PBlock12604, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12611, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12612, (Optr)&t_push_closure, (Optr)PBlock12614, (Optr)&t_push_class_reference, (Optr)PClassScope_classReference, (Optr)&t_send0, (Optr)PSend12619, (Optr)&t_send1, (Optr)PSend12613, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12599 = new_Method_with(PArray12600, empty_Array, empty_Array, PThreadedCode12601, 4, PSend12603, PAssign12611, PAssign12612, self);
    
    MethodClosure MC_SMB_pclass_ = new_MethodClosure((Method)PMethod12599, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_pclass_, MC_SMB_pclass_);
}


static void init_SMB_visitKeywordAnnotation_() {
    Symbol SMB_visitKeywordAnnotation_ = new_Symbol(L"visitKeywordAnnotation:");
    Variable VAR_anASTKeywordAnnotation_0_0 = new_Variable_named(L"anASTKeywordAnnotation", 0);
    Array PArray12621 = new_Array_with(1, (Optr)VAR_anASTKeywordAnnotation_0_0);
    Variable VAR_annotation_0_1 = new_Variable_named(L"annotation", 0);
    Variable VAR_arguments_0_2 = new_Variable_named(L"arguments", 0);
    Array PArray12622 = new_Array_with(2, (Optr)VAR_annotation_0_1, (Optr)VAR_arguments_0_2);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_arguments = new_Symbol(L"arguments");
    // arguments. 
    Send PSend12627 = new_Send((Optr)VAR_anASTKeywordAnnotation_0_0, SMB_arguments, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12626 = new_Send((Optr)PSend12627, SMB_size, 0);
    // new:. 
    Send PSend12625 = new_Send((Optr)PAnnotation_classReference, SMB_new_, 1, (Optr)PSend12626);
    Assign PAssign12624 = new_Assign((Optr)VAR_annotation_0_1, (Optr)PSend12625);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12628 = new_Send((Optr)VAR_anASTKeywordAnnotation_0_0, SMB_selector, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend12629 = new_Send((Optr)VAR_annotation_0_1, SMB_selector_, 1, (Optr)PSend12628);
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    // arguments. 
    Send PSend12632 = new_Send((Optr)VAR_anASTKeywordAnnotation_0_0, SMB_arguments, 0);
    // acceptOnCollection:. 
    Send PSend12631 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend12632);
    Assign PAssign12630 = new_Assign((Optr)VAR_arguments_0_2, (Optr)PSend12631);
    Variable VAR_object_1_0 = new_Variable_named(L"object", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray12634 = new_Array_with(2, (Optr)VAR_object_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_unwrapConstant_ = new_Symbol(L"unwrapConstant:");
    // unwrapConstant:. 
    Send PSend12636 = new_Send((Optr)self, SMB_unwrapConstant_, 1, (Optr)VAR_object_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12637 = new_Send((Optr)VAR_annotation_0_1, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)PSend12636);
    Array PThreadedCode12635 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_annotation_0_1, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_object_1_0, (Optr)&t_send1, (Optr)PSend12636, (Optr)&t_send2, (Optr)PSend12637, (Optr)&t_method_return);
    Block PBlock12633 = new_Block_with(PArray12634, empty_Array, PThreadedCode12635, 1, PSend12637);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend12638 = new_Send((Optr)VAR_arguments_0_2, SMB_withIndexDo_, 1, (Optr)PBlock12633);
    Array PThreadedCode12623 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push1, (Optr)PAssign12624, (Optr)&t_push_class_reference, (Optr)PAnnotation_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTKeywordAnnotation_0_0, (Optr)&t_send0, (Optr)PSend12627, (Optr)&t_send0, (Optr)PSend12626, (Optr)&t_send1, (Optr)PSend12625, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_annotation_0_1, (Optr)&t_push_variable, (Optr)VAR_anASTKeywordAnnotation_0_0, (Optr)&t_send0, (Optr)PSend12628, (Optr)&t_send1, (Optr)PSend12629, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12630, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anASTKeywordAnnotation_0_0, (Optr)&t_send0, (Optr)PSend12632, (Optr)&t_send1, (Optr)PSend12631, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_push_closure, (Optr)PBlock12633, (Optr)&t_send1, (Optr)PSend12638, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_annotation_0_1, (Optr)&t_method_return);
    Method PMethod12620 = new_Method_with(PArray12621, PArray12622, empty_Array, PThreadedCode12623, 5, PAssign12624, PSend12629, PAssign12630, PSend12638, VAR_annotation_0_1);
    
    MethodClosure MC_SMB_visitKeywordAnnotation_ = new_MethodClosure((Method)PMethod12620, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitKeywordAnnotation_, MC_SMB_visitKeywordAnnotation_);
}


static void init_SMB_visitString_() {
    Symbol SMB_visitString_ = new_Symbol(L"visitString:");
    Variable VAR_anASTString_0_0 = new_Variable_named(L"anASTString", 0);
    Array PArray12640 = new_Array_with(1, (Optr)VAR_anASTString_0_0);
    Symbol SMB_string = new_Symbol(L"string");
    // string. 
    Send PSend12642 = new_Send((Optr)VAR_anASTString_0_0, SMB_string, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12643 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)PSend12642);
    Array PThreadedCode12641 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTString_0_0, (Optr)&t_send0, (Optr)PSend12642, (Optr)&t_send1, (Optr)PSend12643, (Optr)&t_method_return);
    Method PMethod12639 = new_Method_with(PArray12640, empty_Array, empty_Array, PThreadedCode12641, 1, PSend12643);
    
    MethodClosure MC_SMB_visitString_ = new_MethodClosure((Method)PMethod12639, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitString_, MC_SMB_visitString_);
}


static void init_SMB_createReturningMethodBodyFor_() {
    Symbol SMB_createReturningMethodBodyFor_ = new_Symbol(L"createReturningMethodBodyFor:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Array PArray12645 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
    Variable VAR_callec_0_2 = new_Variable_named(L"callec", 0);
    Array PArray12646 = new_Array_with(2, (Optr)VAR_body_0_1, (Optr)VAR_callec_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12649 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend12652 = new_Send((Optr)VAR_aMethod_0_0, SMB_statements, 0);
    Assign PAssign12651 = new_Assign((Optr)VAR_body_0_1, (Optr)PSend12652);
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend12653 = new_Send((Optr)VAR_body_0_1, SMB_last, 0);
    Symbol SMB_isReturnExpression = new_Symbol(L"isReturnExpression");
    // isReturnExpression. 
    Send PSend12654 = new_Send((Optr)PSend12653, SMB_isReturnExpression, 0);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12658 = new_Send((Optr)ASTSelf_classReference, SMB_new, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend12659 = new_Send((Optr)VAR_body_0_1, SMB_add_, 1, (Optr)PSend12658);
    Array PThreadedCode12657 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_push_class_reference, (Optr)ASTSelf_classReference, (Optr)&t_send0, (Optr)PSend12658, (Optr)&t_send1, (Optr)PSend12659, (Optr)&t_block_return);
    Block PBlock12656 = new_Block_with(empty_Array, empty_Array, PThreadedCode12657, 1, PSend12659);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12662 = new_Send((Optr)VAR_body_0_1, SMB_size, 0);
    // last. 
    Send PSend12663 = new_Send((Optr)VAR_body_0_1, SMB_last, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend12664 = new_Send((Optr)PSend12663, SMB_expression, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12665 = new_Send((Optr)VAR_body_0_1, SMB_at_put_, 2, (Optr)PSend12662, (Optr)PSend12664);
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    // hasReturnExpression. 
    Send PSend12666 = new_Send((Optr)VAR_body_0_1, SMB_hasReturnExpression, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    // acceptOnCollection:. 
    Send PSend12670 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)VAR_body_0_1);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend12671 = new_Send((Optr)PSend12670, SMB_asArray, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12672 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12671);
    Array PThreadedCode12669 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send1, (Optr)PSend12670, (Optr)&t_send0, (Optr)PSend12671, (Optr)&t_send1, (Optr)PSend12672, (Optr)&t_block_return);
    Block PBlock12668 = new_Block_with(empty_Array, empty_Array, PThreadedCode12669, 1, PSend12672);
    // ifFalse:. 
    Send PSend12667 = new_Send((Optr)PSend12666, SMB_ifFalse_, 1, (Optr)PBlock12668);
    Array PThreadedCode12661 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send0, (Optr)PSend12662, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send0, (Optr)PSend12663, (Optr)&t_send0, (Optr)PSend12664, (Optr)&t_send2, (Optr)PSend12665, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send0, (Optr)PSend12666, (Optr)&t_send_ifFalse_, (Optr)PSend12667, (Optr)PBlock12668, (Optr)&t_block_return);
    Block PBlock12660 = new_Block_with(empty_Array, empty_Array, PThreadedCode12661, 2, PSend12665, PSend12667);
    // ifFalse:ifTrue:. 
    Send PSend12655 = new_Send((Optr)PSend12654, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock12656, (Optr)PBlock12660);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray12676 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_world = new_Symbol(L"world");
    // world. 
    Send PSend12678 = new_Send((Optr)self, SMB_world, 0);
    Symbol  SMB_Runtime = new_Symbol(L"Runtime");
    Symbol SMB_ensurePackageNamed_ = new_Symbol(L"ensurePackageNamed:");
    Constant SMB_Runtime_Const = new_Constant((Optr)SMB_Runtime);
    // ensurePackageNamed:. 
    Send PSend12679 = new_Send((Optr)PSend12678, SMB_ensurePackageNamed_, 1, (Optr)SMB_Runtime_Const);
    Symbol  SMB_Continue = new_Symbol(L"Continue");
    Symbol SMB_ensureClassReference_ = new_Symbol(L"ensureClassReference:");
    Constant SMB_Continue_Const = new_Constant((Optr)SMB_Continue);
    // ensureClassReference:. 
    Send PSend12680 = new_Send((Optr)PSend12679, SMB_ensureClassReference_, 1, (Optr)SMB_Continue_Const);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend12681 = new_Send((Optr)VAR__receiver__2_0, SMB_receiver_, 1, (Optr)PSend12680);
    Symbol  SMB_on_ = new_Symbol(L"on:");
    Symbol SMB_message_ = new_Symbol(L"message:");
    Constant SMB_on__Const = new_Constant((Optr)SMB_on_);
    // message:. 
    Send PSend12682 = new_Send((Optr)VAR__receiver__2_0, SMB_message_, 1, (Optr)SMB_on__Const);
    Symbol SMB_createCallecBodyFor_ = new_Symbol(L"createCallecBodyFor:");
    // createCallecBodyFor:. 
    Send PSend12683 = new_Send((Optr)self, SMB_createCallecBodyFor_, 1, (Optr)VAR_aMethod_0_0);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend12684 = new_Send((Optr)VAR__receiver__2_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend12683);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend12685 = new_Send((Optr)VAR__receiver__2_0, SMB_yourself, 0);
    Array PThreadedCode12677 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12678, (Optr)&t_push1, (Optr)SMB_Runtime, (Optr)&t_send1, (Optr)PSend12679, (Optr)&t_push1, (Optr)SMB_Continue, (Optr)&t_send1, (Optr)PSend12680, (Optr)&t_send1, (Optr)PSend12681, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)SMB_on_, (Optr)&t_send1, (Optr)PSend12682, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend12683, (Optr)&t_send2, (Optr)PSend12684, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend12685, (Optr)&t_method_return);
    Block PBlock12675 = new_Block_with(PArray12676, empty_Array, PThreadedCode12677, 4, PSend12681, PSend12682, PSend12684, PSend12685);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12686 = new_Send((Optr)PSend_classReference, SMB_new_, 1, (Optr)int_1_Const);
    // value:. 
    Send PSend12674 = new_Send((Optr)PBlock12675, SMB_value_, 1, (Optr)PSend12686);
    Assign PAssign12673 = new_Assign((Optr)VAR_callec_0_2, (Optr)PSend12674);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend12687 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_callec_0_2);
    Array PThreadedCode12650 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign12651, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend12652, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send0, (Optr)PSend12653, (Optr)&t_send0, (Optr)PSend12654, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend12655, (Optr)PBlock12656, (Optr)PBlock12660, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12673, (Optr)&t_push_closure, (Optr)PBlock12675, (Optr)&t_push_class_reference, (Optr)PSend_classReference, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12686, (Optr)&t_send1, (Optr)PSend12674, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_callec_0_2, (Optr)&t_send1, (Optr)PSend12687, (Optr)&t_method_return);
    Block PBlock12648 = new_Block_with(PArray12649, empty_Array, PThreadedCode12650, 4, PAssign12651, PSend12655, PAssign12673, PSend12687);
    // on:. 
    Send PSend12688 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12648);
    Array PThreadedCode12647 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12648, (Optr)&t_send1, (Optr)PSend12688, (Optr)&t_method_return);
    Method PMethod12644 = new_Method_with(PArray12645, PArray12646, empty_Array, PThreadedCode12647, 1, PSend12688);
    
    MethodClosure MC_SMB_createReturningMethodBodyFor_ = new_MethodClosure((Method)PMethod12644, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createReturningMethodBodyFor_, MC_SMB_createReturningMethodBodyFor_);
}


static void init_SMB_parse_() {
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray12690 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_parser = new_Symbol(L"parser");
    // parser. 
    Send PSend12692 = new_Send((Optr)self, SMB_parser, 0);
    Symbol SMB_parseMethod_ = new_Symbol(L"parseMethod:");
    // parseMethod:. 
    Send PSend12693 = new_Send((Optr)PSend12692, SMB_parseMethod_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode12691 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12692, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend12693, (Optr)&t_method_return);
    Method PMethod12689 = new_Method_with(PArray12690, empty_Array, empty_Array, PThreadedCode12691, 1, PSend12693);
    
    MethodClosure MC_SMB_parse_ = new_MethodClosure((Method)PMethod12689, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_parse_, MC_SMB_parse_);
}


static void init_SMB_popScope() {
    Symbol SMB_popScope = new_Symbol(L"popScope");
    Symbol SMB_parentScope = new_Symbol(L"parentScope");
    // parentScope. 
    Send PSend12697 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_parentScope, 0);
    Assign PAssign12696 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)PSend12697);
    Array PThreadedCode12695 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign12696, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send0, (Optr)PSend12697, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12694 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12695, 2, PAssign12696, self);
    
    MethodClosure MC_SMB_popScope = new_MethodClosure((Method)PMethod12694, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_popScope, MC_SMB_popScope);
}


static void init_SMB_selectorFor_() {
    Symbol SMB_selectorFor_ = new_Symbol(L"selectorFor:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Array PArray12699 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend12701 = new_Send((Optr)VAR_aMethod_0_0, SMB_message, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12702 = new_Send((Optr)PSend12701, SMB_selector, 0);
    Array PThreadedCode12700 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend12701, (Optr)&t_send0, (Optr)PSend12702, (Optr)&t_method_return);
    Method PMethod12698 = new_Method_with(PArray12699, empty_Array, empty_Array, PThreadedCode12700, 1, PSend12702);
    
    MethodClosure MC_SMB_selectorFor_ = new_MethodClosure((Method)PMethod12698, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_selectorFor_, MC_SMB_selectorFor_);
}


static void init_SMB_currentCallecVariable() {
    Symbol SMB_currentCallecVariable = new_Symbol(L"currentCallecVariable");
    Array PThreadedCode12704 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_currentCallecVariable, (Optr)&t_method_return);
    Method PMethod12703 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12704, 1, slot_Smalltalk_Compiler_Compiler_currentCallecVariable);
    
    MethodClosure MC_SMB_currentCallecVariable = new_MethodClosure((Method)PMethod12703, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_currentCallecVariable, MC_SMB_currentCallecVariable);
}


static void init_SMB_createMethod_with_() {
    Symbol SMB_createMethod_with_ = new_Symbol(L"createMethod:with:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
    Array PArray12706 = new_Array_with(2, (Optr)VAR_aMethod_0_0, (Optr)VAR_body_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12709 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol  SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_annotatedWith_ = new_Symbol(L"annotatedWith:");
    Constant SMB_pPrimitive_plugin__Const = new_Constant((Optr)SMB_pPrimitive_plugin_);
    // annotatedWith:. 
    Send PSend12711 = new_Send((Optr)VAR_aMethod_0_0, SMB_annotatedWith_, 1, (Optr)SMB_pPrimitive_plugin__Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_withAll_ = new_Symbol(L"withAll:");
    // withAll:. 
    Send PSend12715 = new_Send((Optr)PNativeMethod_classReference, SMB_withAll_, 1, (Optr)VAR_body_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12716 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12715);
    Array PThreadedCode12714 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PNativeMethod_classReference, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send1, (Optr)PSend12715, (Optr)&t_send1, (Optr)PSend12716, (Optr)&t_block_return);
    Block PBlock12713 = new_Block_with(empty_Array, empty_Array, PThreadedCode12714, 1, PSend12716);
    // ifTrue:. 
    Send PSend12712 = new_Send((Optr)PSend12711, SMB_ifTrue_, 1, (Optr)PBlock12713);
    Symbol  SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Constant SMB_pPrimitive_plugin_code__Const = new_Constant((Optr)SMB_pPrimitive_plugin_code_);
    // annotatedWith:. 
    Send PSend12717 = new_Send((Optr)VAR_aMethod_0_0, SMB_annotatedWith_, 1, (Optr)SMB_pPrimitive_plugin_code__Const);
    // withAll:. 
    Send PSend12721 = new_Send((Optr)PNativeMethod_classReference, SMB_withAll_, 1, (Optr)VAR_body_0_1);
    // escape:. 
    Send PSend12722 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12721);
    Array PThreadedCode12720 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PNativeMethod_classReference, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send1, (Optr)PSend12721, (Optr)&t_send1, (Optr)PSend12722, (Optr)&t_block_return);
    Block PBlock12719 = new_Block_with(empty_Array, empty_Array, PThreadedCode12720, 1, PSend12722);
    // ifTrue:. 
    Send PSend12718 = new_Send((Optr)PSend12717, SMB_ifTrue_, 1, (Optr)PBlock12719);
    Symbol  SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Constant SMB_pinocchioReflective__Const = new_Constant((Optr)SMB_pinocchioReflective_);
    // annotatedWith:. 
    Send PSend12723 = new_Send((Optr)VAR_aMethod_0_0, SMB_annotatedWith_, 1, (Optr)SMB_pinocchioReflective__Const);
    // withAll:. 
    Send PSend12727 = new_Send((Optr)PReflectionMethod_classReference, SMB_withAll_, 1, (Optr)VAR_body_0_1);
    // escape:. 
    Send PSend12728 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12727);
    Array PThreadedCode12726 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PReflectionMethod_classReference, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send1, (Optr)PSend12727, (Optr)&t_send1, (Optr)PSend12728, (Optr)&t_block_return);
    Block PBlock12725 = new_Block_with(empty_Array, empty_Array, PThreadedCode12726, 1, PSend12728);
    // ifTrue:. 
    Send PSend12724 = new_Send((Optr)PSend12723, SMB_ifTrue_, 1, (Optr)PBlock12725);
    // withAll:. 
    Send PSend12729 = new_Send((Optr)PMethod_classReference, SMB_withAll_, 1, (Optr)VAR_body_0_1);
    Array PThreadedCode12710 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_push1, (Optr)SMB_pPrimitive_plugin_, (Optr)&t_send1, (Optr)PSend12711, (Optr)&t_send_ifTrue_, (Optr)PSend12712, (Optr)PBlock12713, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_push1, (Optr)SMB_pPrimitive_plugin_code_, (Optr)&t_send1, (Optr)PSend12717, (Optr)&t_send_ifTrue_, (Optr)PSend12718, (Optr)PBlock12719, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_push1, (Optr)SMB_pinocchioReflective_, (Optr)&t_send1, (Optr)PSend12723, (Optr)&t_send_ifTrue_, (Optr)PSend12724, (Optr)PBlock12725, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PMethod_classReference, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send1, (Optr)PSend12729, (Optr)&t_method_return);
    Block PBlock12708 = new_Block_with(PArray12709, empty_Array, PThreadedCode12710, 4, PSend12712, PSend12718, PSend12724, PSend12729);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12730 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12708);
    Array PThreadedCode12707 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12708, (Optr)&t_send1, (Optr)PSend12730, (Optr)&t_method_return);
    Method PMethod12705 = new_Method_with(PArray12706, empty_Array, empty_Array, PThreadedCode12707, 1, PSend12730);
    
    MethodClosure MC_SMB_createMethod_with_ = new_MethodClosure((Method)PMethod12705, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createMethod_with_, MC_SMB_createMethod_with_);
}


static void init_SMB_visitMethod_() {
    Symbol SMB_visitMethod_ = new_Symbol(L"visitMethod:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Array PArray12732 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
    Variable VAR_method_0_2 = new_Variable_named(L"method", 0);
    Variable VAR_selector_0_3 = new_Variable_named(L"selector", 0);
    Variable VAR_methodClosure_0_4 = new_Variable_named(L"methodClosure", 0);
    Array PArray12733 = new_Array_with(4, (Optr)VAR_body_0_1, (Optr)VAR_method_0_2, (Optr)VAR_selector_0_3, (Optr)VAR_methodClosure_0_4);
    Assign PAssign12735 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_currentMethod, (Optr)VAR_aMethod_0_0);
    Symbol SMB_pushScope = new_Symbol(L"pushScope");
    // pushScope. 
    Send PSend12736 = new_Send((Optr)self, SMB_pushScope, 0);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend12737 = new_Send((Optr)VAR_aMethod_0_0, SMB_message, 0);
    Symbol SMB_parameters = new_Symbol(L"parameters");
    // parameters. 
    Send PSend12738 = new_Send((Optr)PSend12737, SMB_parameters, 0);
    Symbol SMB_declareAll_ = new_Symbol(L"declareAll:");
    // declareAll:. 
    Send PSend12739 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_declareAll_, 1, (Optr)PSend12738);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend12740 = new_Send((Optr)VAR_aMethod_0_0, SMB_temporaries, 0);
    // declareAll:. 
    Send PSend12741 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_declareAll_, 1, (Optr)PSend12740);
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    // hasReturnExpression. 
    Send PSend12742 = new_Send((Optr)VAR_aMethod_0_0, SMB_hasReturnExpression, 0);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    Symbol SMB_createNonReturningMethodBodyFor_ = new_Symbol(L"createNonReturningMethodBodyFor:");
    // createNonReturningMethodBodyFor:. 
    Send PSend12747 = new_Send((Optr)self, SMB_createNonReturningMethodBodyFor_, 1, (Optr)VAR_aMethod_0_0);
    Assign PAssign12746 = new_Assign((Optr)VAR_body_0_1, (Optr)PSend12747);
    Array PThreadedCode12745 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign12746, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend12747, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock12744 = new_Block_with(empty_Array, empty_Array, PThreadedCode12745, 1, PAssign12746);
    Symbol SMB_createReturningMethodBodyFor_ = new_Symbol(L"createReturningMethodBodyFor:");
    // createReturningMethodBodyFor:. 
    Send PSend12751 = new_Send((Optr)self, SMB_createReturningMethodBodyFor_, 1, (Optr)VAR_aMethod_0_0);
    Assign PAssign12750 = new_Assign((Optr)VAR_body_0_1, (Optr)PSend12751);
    Array PThreadedCode12749 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign12750, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend12751, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock12748 = new_Block_with(empty_Array, empty_Array, PThreadedCode12749, 1, PAssign12750);
    // ifFalse:ifTrue:. 
    Send PSend12743 = new_Send((Optr)PSend12742, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock12744, (Optr)PBlock12748);
    Symbol SMB_selectorFor_ = new_Symbol(L"selectorFor:");
    // selectorFor:. 
    Send PSend12753 = new_Send((Optr)self, SMB_selectorFor_, 1, (Optr)VAR_aMethod_0_0);
    Assign PAssign12752 = new_Assign((Optr)VAR_selector_0_3, (Optr)PSend12753);
    Symbol SMB_createMethod_with_ = new_Symbol(L"createMethod:with:");
    // createMethod:with:. 
    Send PSend12755 = new_Send((Optr)self, SMB_createMethod_with_, 2, (Optr)VAR_aMethod_0_0, (Optr)VAR_body_0_1);
    Assign PAssign12754 = new_Assign((Optr)VAR_method_0_2, (Optr)PSend12755);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12757 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    // message. 
    Send PSend12759 = new_Send((Optr)VAR_aMethod_0_0, SMB_message, 0);
    // parameters. 
    Send PSend12760 = new_Send((Optr)PSend12759, SMB_parameters, 0);
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    // acceptOnCollection:. 
    Send PSend12761 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend12760);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend12762 = new_Send((Optr)PSend12761, SMB_asArray, 0);
    // temporaries. 
    Send PSend12763 = new_Send((Optr)VAR_aMethod_0_0, SMB_temporaries, 0);
    // acceptOnCollection:. 
    Send PSend12764 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend12763);
    // asArray. 
    Send PSend12765 = new_Send((Optr)PSend12764, SMB_asArray, 0);
    Symbol SMB_params_locals_ = new_Symbol(L"params:locals:");
    // params:locals:. 
    Send PSend12766 = new_Send((Optr)VAR__receiver__1_0, SMB_params_locals_, 2, (Optr)PSend12762, (Optr)PSend12765);
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend12767 = new_Send((Optr)VAR_aMethod_0_0, SMB_annotations, 0);
    // acceptOnCollection:. 
    Send PSend12768 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend12767);
    // asArray. 
    Send PSend12769 = new_Send((Optr)PSend12768, SMB_asArray, 0);
    Symbol SMB_annotations_ = new_Symbol(L"annotations:");
    // annotations:. 
    Send PSend12770 = new_Send((Optr)VAR__receiver__1_0, SMB_annotations_, 1, (Optr)PSend12769);
    Symbol SMB_createPInfo = new_Symbol(L"createPInfo");
    // createPInfo. 
    Send PSend12771 = new_Send((Optr)self, SMB_createPInfo, 0);
    Symbol SMB_info_ = new_Symbol(L"info:");
    // info:. 
    Send PSend12772 = new_Send((Optr)VAR__receiver__1_0, SMB_info_, 1, (Optr)PSend12771);
    Array PThreadedCode12758 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend12759, (Optr)&t_send0, (Optr)PSend12760, (Optr)&t_send1, (Optr)PSend12761, (Optr)&t_send0, (Optr)PSend12762, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend12763, (Optr)&t_send1, (Optr)PSend12764, (Optr)&t_send0, (Optr)PSend12765, (Optr)&t_send2, (Optr)PSend12766, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend12767, (Optr)&t_send1, (Optr)PSend12768, (Optr)&t_send0, (Optr)PSend12769, (Optr)&t_send1, (Optr)PSend12770, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12771, (Optr)&t_send1, (Optr)PSend12772, (Optr)&t_method_return);
    Block PBlock12756 = new_Block_with(PArray12757, empty_Array, PThreadedCode12758, 3, PSend12766, PSend12770, PSend12772);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12773 = new_Send((Optr)PBlock12756, SMB_value_, 1, (Optr)VAR_method_0_2);
    Array PArray12777 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_code_ = new_Symbol(L"code:");
    // code:. 
    Send PSend12779 = new_Send((Optr)VAR__receiver__1_0, SMB_code_, 1, (Optr)VAR_method_0_2);
    Symbol SMB_host_ = new_Symbol(L"host:");
    // host:. 
    Send PSend12780 = new_Send((Optr)VAR__receiver__1_0, SMB_host_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend12781 = new_Send((Optr)VAR__receiver__1_0, SMB_selector_, 1, (Optr)VAR_selector_0_3);
    Array PThreadedCode12778 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send1, (Optr)PSend12779, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send1, (Optr)PSend12780, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_selector_0_3, (Optr)&t_send1, (Optr)PSend12781, (Optr)&t_method_return);
    Block PBlock12776 = new_Block_with(PArray12777, empty_Array, PThreadedCode12778, 3, PSend12779, PSend12780, PSend12781);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12782 = new_Send((Optr)PMethodClosure_classReference, SMB_new, 0);
    // value:. 
    Send PSend12775 = new_Send((Optr)PBlock12776, SMB_value_, 1, (Optr)PSend12782);
    Assign PAssign12774 = new_Assign((Optr)VAR_methodClosure_0_4, (Optr)PSend12775);
    Symbol SMB_popScope = new_Symbol(L"popScope");
    // popScope. 
    Send PSend12783 = new_Send((Optr)self, SMB_popScope, 0);
    Symbol SMB_compileThreadedMethod_ = new_Symbol(L"compileThreadedMethod:");
    // compileThreadedMethod:. 
    Send PSend12784 = new_Send((Optr)self, SMB_compileThreadedMethod_, 1, (Optr)VAR_method_0_2);
    Array PThreadedCode12734 = instantiate_Array_with(ThreadedCode_Class, 0, 91, (Optr)&t_push1, (Optr)PAssign12735, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12736, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend12737, (Optr)&t_send0, (Optr)PSend12738, (Optr)&t_send1, (Optr)PSend12739, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend12740, (Optr)&t_send1, (Optr)PSend12741, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend12742, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend12743, (Optr)PBlock12744, (Optr)PBlock12748, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12752, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend12753, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12754, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send2, (Optr)PSend12755, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock12756, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send1, (Optr)PSend12773, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12774, (Optr)&t_push_closure, (Optr)PBlock12776, (Optr)&t_push_class_reference, (Optr)PMethodClosure_classReference, (Optr)&t_send0, (Optr)PSend12782, (Optr)&t_send1, (Optr)PSend12775, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12783, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send1, (Optr)PSend12784, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_methodClosure_0_4, (Optr)&t_method_return);
    Method PMethod12731 = new_Method_with(PArray12732, PArray12733, empty_Array, PThreadedCode12734, 12, PAssign12735, PSend12736, PSend12739, PSend12741, PSend12743, PAssign12752, PAssign12754, PSend12773, PAssign12774, PSend12783, PSend12784, VAR_methodClosure_0_4);
    
    MethodClosure MC_SMB_visitMethod_ = new_MethodClosure((Method)PMethod12731, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitMethod_, MC_SMB_visitMethod_);
}


static void init_SMB_createNonReturningMethodBodyFor_() {
    Symbol SMB_createNonReturningMethodBodyFor_ = new_Symbol(L"createNonReturningMethodBodyFor:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Array PArray12786 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Variable VAR_statements_0_1 = new_Variable_named(L"statements", 0);
    Array PArray12787 = new_Array_with(1, (Optr)VAR_statements_0_1);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend12790 = new_Send((Optr)VAR_aMethod_0_0, SMB_statements, 0);
    Assign PAssign12789 = new_Assign((Optr)VAR_statements_0_1, (Optr)PSend12790);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12791 = new_Send((Optr)ASTSelf_classReference, SMB_new, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend12792 = new_Send((Optr)VAR_statements_0_1, SMB_add_, 1, (Optr)PSend12791);
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    // acceptOnCollection:. 
    Send PSend12793 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)VAR_statements_0_1);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend12794 = new_Send((Optr)PSend12793, SMB_asArray, 0);
    Array PThreadedCode12788 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign12789, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend12790, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_statements_0_1, (Optr)&t_push_class_reference, (Optr)ASTSelf_classReference, (Optr)&t_send0, (Optr)PSend12791, (Optr)&t_send1, (Optr)PSend12792, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_statements_0_1, (Optr)&t_send1, (Optr)PSend12793, (Optr)&t_send0, (Optr)PSend12794, (Optr)&t_method_return);
    Method PMethod12785 = new_Method_with(PArray12786, PArray12787, empty_Array, PThreadedCode12788, 3, PAssign12789, PSend12792, PSend12794);
    
    MethodClosure MC_SMB_createNonReturningMethodBodyFor_ = new_MethodClosure((Method)PMethod12785, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createNonReturningMethodBodyFor_, MC_SMB_createNonReturningMethodBodyFor_);
}


static void init_SMB_visitSymbol_() {
    Symbol SMB_visitSymbol_ = new_Symbol(L"visitSymbol:");
    Variable VAR_anASTSymbol_0_0 = new_Variable_named(L"anASTSymbol", 0);
    Array PArray12796 = new_Array_with(1, (Optr)VAR_anASTSymbol_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend12798 = new_Send((Optr)VAR_anASTSymbol_0_0, SMB_asSymbol, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12799 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)PSend12798);
    Array PThreadedCode12797 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTSymbol_0_0, (Optr)&t_send0, (Optr)PSend12798, (Optr)&t_send1, (Optr)PSend12799, (Optr)&t_method_return);
    Method PMethod12795 = new_Method_with(PArray12796, empty_Array, empty_Array, PThreadedCode12797, 1, PSend12799);
    
    MethodClosure MC_SMB_visitSymbol_ = new_MethodClosure((Method)PMethod12795, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitSymbol_, MC_SMB_visitSymbol_);
}


static void init_SMB_createSendTo_() {
    Symbol SMB_createSendTo_ = new_Symbol(L"createSendTo:");
    Variable VAR_receiver_0_0 = new_Variable_named(L"receiver", 0);
    Array PArray12801 = new_Array_with(1, (Optr)VAR_receiver_0_0);
    Symbol SMB_createSendTo_sized_ = new_Symbol(L"createSendTo:sized:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // createSendTo:sized:. 
    Send PSend12803 = new_Send((Optr)self, SMB_createSendTo_sized_, 2, (Optr)VAR_receiver_0_0, (Optr)int_0_Const);
    Array PThreadedCode12802 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend12803, (Optr)&t_method_return);
    Method PMethod12800 = new_Method_with(PArray12801, empty_Array, empty_Array, PThreadedCode12802, 1, PSend12803);
    
    MethodClosure MC_SMB_createSendTo_ = new_MethodClosure((Method)PMethod12800, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createSendTo_, MC_SMB_createSendTo_);
}


static void init_SMB_createCallecBodyFor_() {
    Symbol SMB_createCallecBodyFor_ = new_Symbol(L"createCallecBodyFor:");
    Variable VAR_anASTMethod_0_0 = new_Variable_named(L"anASTMethod", 0);
    Array PArray12805 = new_Array_with(1, (Optr)VAR_anASTMethod_0_0);
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
    Variable VAR_statements_0_2 = new_Variable_named(L"statements", 0);
    Variable VAR_statement_0_3 = new_Variable_named(L"statement", 0);
    Array PArray12806 = new_Array_with(3, (Optr)VAR_body_0_1, (Optr)VAR_statements_0_2, (Optr)VAR_statement_0_3);
    Symbol SMB_pushScope = new_Symbol(L"pushScope");
    // pushScope. 
    Send PSend12808 = new_Send((Optr)self, SMB_pushScope, 0);
    Symbol  SMB___return__ = new_Symbol(L"_return_");
    Symbol SMB_depth = new_Symbol(L"depth");
    // depth. 
    Send PSend12809 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_depth, 0);
    Symbol SMB_named_at_ = new_Symbol(L"named:at:");
    Constant SMB___return___Const = new_Constant((Optr)SMB___return__);
    // named:at:. 
    Send PSend12810 = new_Send((Optr)PVariable_classReference, SMB_named_at_, 2, (Optr)SMB___return___Const, (Optr)PSend12809);
    Symbol SMB_currentCallecVariable_ = new_Symbol(L"currentCallecVariable:");
    // currentCallecVariable:. 
    Send PSend12811 = new_Send((Optr)self, SMB_currentCallecVariable_, 1, (Optr)PSend12810);
    Symbol SMB_createBlock_ = new_Symbol(L"createBlock:");
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend12815 = new_Send((Optr)VAR_anASTMethod_0_0, SMB_statements, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12814 = new_Send((Optr)PSend12815, SMB_size, 0);
    // createBlock:. 
    Send PSend12813 = new_Send((Optr)self, SMB_createBlock_, 1, (Optr)PSend12814);
    Assign PAssign12812 = new_Assign((Optr)VAR_body_0_1, (Optr)PSend12813);
    Symbol SMB_currentCallecVariable = new_Symbol(L"currentCallecVariable");
    // currentCallecVariable. 
    Send PSend12816 = new_Send((Optr)self, SMB_currentCallecVariable, 0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend12817 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)PSend12816);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12818 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Symbol SMB_params_locals_ = new_Symbol(L"params:locals:");
    // params:locals:. 
    Send PSend12819 = new_Send((Optr)VAR_body_0_1, SMB_params_locals_, 2, (Optr)PSend12817, (Optr)PSend12818);
    // statements. 
    Send PSend12821 = new_Send((Optr)VAR_anASTMethod_0_0, SMB_statements, 0);
    Assign PAssign12820 = new_Assign((Optr)VAR_statements_0_2, (Optr)PSend12821);
    // size. 
    Send PSend12822 = new_Send((Optr)VAR_statements_0_2, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray12824 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12828 = new_Send((Optr)VAR_statements_0_2, SMB_at_, 1, (Optr)VAR_index_1_0);
    // visit:. 
    Send PSend12827 = new_Send((Optr)self, SMB_visit_, 1, (Optr)PSend12828);
    Assign PAssign12826 = new_Assign((Optr)VAR_statement_0_3, (Optr)PSend12827);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12829 = new_Send((Optr)VAR_body_0_1, SMB_at_put_, 2, (Optr)VAR_index_1_0, (Optr)VAR_statement_0_3);
    Array PThreadedCode12825 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign12826, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_statements_0_2, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend12828, (Optr)&t_send1, (Optr)PSend12827, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_push_variable, (Optr)VAR_statement_0_3, (Optr)&t_send2, (Optr)PSend12829, (Optr)&t_method_return);
    Block PBlock12823 = new_Block_with(PArray12824, empty_Array, PThreadedCode12825, 2, PAssign12826, PSend12829);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend12830 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend12822, (Optr)PBlock12823);
    Symbol SMB_popScope = new_Symbol(L"popScope");
    // popScope. 
    Send PSend12831 = new_Send((Optr)self, SMB_popScope, 0);
    Array PThreadedCode12807 = instantiate_Array_with(ThreadedCode_Class, 0, 73, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12808, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PVariable_classReference, (Optr)&t_push1, (Optr)SMB___return__, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send0, (Optr)PSend12809, (Optr)&t_send2, (Optr)PSend12810, (Optr)&t_send1, (Optr)PSend12811, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12812, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anASTMethod_0_0, (Optr)&t_send0, (Optr)PSend12815, (Optr)&t_send0, (Optr)PSend12814, (Optr)&t_send1, (Optr)PSend12813, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12816, (Optr)&t_send1, (Optr)PSend12817, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend12818, (Optr)&t_send2, (Optr)PSend12819, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12820, (Optr)&t_push_variable, (Optr)VAR_anASTMethod_0_0, (Optr)&t_send0, (Optr)PSend12821, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_statements_0_2, (Optr)&t_send0, (Optr)PSend12822, (Optr)&t_push_closure, (Optr)PBlock12823, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend12830, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12831, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_method_return);
    Method PMethod12804 = new_Method_with(PArray12805, PArray12806, empty_Array, PThreadedCode12807, 8, PSend12808, PSend12811, PAssign12812, PSend12819, PAssign12820, PSend12830, PSend12831, VAR_body_0_1);
    
    MethodClosure MC_SMB_createCallecBodyFor_ = new_MethodClosure((Method)PMethod12804, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createCallecBodyFor_, MC_SMB_createCallecBodyFor_);
}


static void init_SMB_currentBlock_() {
    Symbol SMB_currentBlock_ = new_Symbol(L"currentBlock:");
    Variable VAR_aPinocchioBlock_0_0 = new_Variable_named(L"aPinocchioBlock", 0);
    Array PArray12833 = new_Array_with(1, (Optr)VAR_aPinocchioBlock_0_0);
    Assign PAssign12835 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_currentBlock, (Optr)VAR_aPinocchioBlock_0_0);
    Array PThreadedCode12834 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign12835, (Optr)&t_push_variable, (Optr)VAR_aPinocchioBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12832 = new_Method_with(PArray12833, empty_Array, empty_Array, PThreadedCode12834, 2, PAssign12835, self);
    
    MethodClosure MC_SMB_currentBlock_ = new_MethodClosure((Method)PMethod12832, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_currentBlock_, MC_SMB_currentBlock_);
}


static void init_SMB_visitCharacter_() {
    Symbol SMB_visitCharacter_ = new_Symbol(L"visitCharacter:");
    Variable VAR_anASTCharacter_0_0 = new_Variable_named(L"anASTCharacter", 0);
    Array PArray12837 = new_Array_with(1, (Optr)VAR_anASTCharacter_0_0);
    Symbol SMB_char = new_Symbol(L"char");
    // char. 
    Send PSend12839 = new_Send((Optr)VAR_anASTCharacter_0_0, SMB_char, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12840 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)PSend12839);
    Array PThreadedCode12838 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTCharacter_0_0, (Optr)&t_send0, (Optr)PSend12839, (Optr)&t_send1, (Optr)PSend12840, (Optr)&t_method_return);
    Method PMethod12836 = new_Method_with(PArray12837, empty_Array, empty_Array, PThreadedCode12838, 1, PSend12840);
    
    MethodClosure MC_SMB_visitCharacter_ = new_MethodClosure((Method)PMethod12836, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitCharacter_, MC_SMB_visitCharacter_);
}


static void init_SMB_visitSelf_() {
    Symbol SMB_visitSelf_ = new_Symbol(L"visitSelf:");
    Variable VAR_aSelf_0_0 = new_Variable_named(L"aSelf", 0);
    Array PArray12842 = new_Array_with(1, (Optr)VAR_aSelf_0_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend12844 = new_Send((Optr)PSelf_classReference, SMB_instance, 0);
    Array PThreadedCode12843 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PSelf_classReference, (Optr)&t_send0, (Optr)PSend12844, (Optr)&t_method_return);
    Method PMethod12841 = new_Method_with(PArray12842, empty_Array, empty_Array, PThreadedCode12843, 1, PSend12844);
    
    MethodClosure MC_SMB_visitSelf_ = new_MethodClosure((Method)PMethod12841, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitSelf_, MC_SMB_visitSelf_);
}


static void init_SMB_unwrapConstant_() {
    Symbol SMB_unwrapConstant_ = new_Symbol(L"unwrapConstant:");
    Variable VAR_aConstant_0_0 = new_Variable_named(L"aConstant", 0);
    Array PArray12846 = new_Array_with(1, (Optr)VAR_aConstant_0_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend12848 = new_Send((Optr)VAR_aConstant_0_0, SMB_isKindOf_, 1, (Optr)PConstant_classReference);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_12852 = new_String(L"Constant expected");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_12852_Const = new_Constant((Optr)string_12852);
    // error:. 
    Send PSend12853 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_12852_Const);
    Array PThreadedCode12851 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_12852, (Optr)&t_send1, (Optr)PSend12853, (Optr)&t_block_return);
    Block PBlock12850 = new_Block_with(empty_Array, empty_Array, PThreadedCode12851, 1, PSend12853);
    // ifFalse:. 
    Send PSend12849 = new_Send((Optr)PSend12848, SMB_ifFalse_, 1, (Optr)PBlock12850);
    Symbol SMB_constant = new_Symbol(L"constant");
    // constant. 
    Send PSend12854 = new_Send((Optr)VAR_aConstant_0_0, SMB_constant, 0);
    Array PThreadedCode12847 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_aConstant_0_0, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_send1, (Optr)PSend12848, (Optr)&t_send_ifFalse_, (Optr)PSend12849, (Optr)PBlock12850, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aConstant_0_0, (Optr)&t_send0, (Optr)PSend12854, (Optr)&t_method_return);
    Method PMethod12845 = new_Method_with(PArray12846, empty_Array, empty_Array, PThreadedCode12847, 2, PSend12849, PSend12854);
    
    MethodClosure MC_SMB_unwrapConstant_ = new_MethodClosure((Method)PMethod12845, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_unwrapConstant_, MC_SMB_unwrapConstant_);
}


static void init_SMB_parser() {
    Symbol SMB_parser = new_Symbol(L"parser");
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend12857 = new_Send((Optr)PSmalltalkParser_classReference, SMB_instance, 0);
    Array PThreadedCode12856 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PSmalltalkParser_classReference, (Optr)&t_send0, (Optr)PSend12857, (Optr)&t_method_return);
    Method PMethod12855 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12856, 1, PSend12857);
    
    MethodClosure MC_SMB_parser = new_MethodClosure((Method)PMethod12855, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_parser, MC_SMB_parser);
}


static void init_SMB_visitMessageCascadeExpression_() {
    Symbol SMB_visitMessageCascadeExpression_ = new_Symbol(L"visitMessageCascadeExpression:");
    Variable VAR_anASTMessageCascadeExpression_0_0 = new_Variable_named(L"anASTMessageCascadeExpression", 0);
    Array PArray12859 = new_Array_with(1, (Optr)VAR_anASTMessageCascadeExpression_0_0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_block_0_2 = new_Variable_named(L"block", 0);
    Variable VAR_send_0_3 = new_Variable_named(L"send", 0);
    Array PArray12860 = new_Array_with(3, (Optr)VAR_receiver_0_1, (Optr)VAR_block_0_2, (Optr)VAR_send_0_3);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12864 = new_Send((Optr)ASTVariable_classReference, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    Symbol  SMB___receiver__ = new_Symbol(L"_receiver_");
    Constant SMB___receiver___Const = new_Constant((Optr)SMB___receiver__);
    // name:. 
    Send PSend12863 = new_Send((Optr)PSend12864, SMB_name_, 1, (Optr)SMB___receiver___Const);
    Assign PAssign12862 = new_Assign((Optr)VAR_receiver_0_1, (Optr)PSend12863);
    Symbol SMB_cascades = new_Symbol(L"cascades");
    // cascades. 
    Send PSend12865 = new_Send((Optr)VAR_anASTMessageCascadeExpression_0_0, SMB_cascades, 0);
    Variable VAR_message_1_0 = new_Variable_named(L"message", 1);
    Array PArray12867 = new_Array_with(1, (Optr)VAR_message_1_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend12869 = new_Send((Optr)VAR_message_1_0, SMB_receiver_, 1, (Optr)VAR_receiver_0_1);
    Array PThreadedCode12868 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_message_1_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend12869, (Optr)&t_method_return);
    Block PBlock12866 = new_Block_with(PArray12867, empty_Array, PThreadedCode12868, 1, PSend12869);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend12870 = new_Send((Optr)PSend12865, SMB_do_, 1, (Optr)PBlock12866);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12874 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend12876 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_receiver_0_1);
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    // parameters:. 
    Send PSend12877 = new_Send((Optr)VAR__receiver__1_0, SMB_parameters_, 1, (Optr)PSend12876);
    // cascades. 
    Send PSend12878 = new_Send((Optr)VAR_anASTMessageCascadeExpression_0_0, SMB_cascades, 0);
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    // statements:. 
    Send PSend12879 = new_Send((Optr)VAR__receiver__1_0, SMB_statements_, 1, (Optr)PSend12878);
    Array PThreadedCode12875 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend12876, (Optr)&t_send1, (Optr)PSend12877, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anASTMessageCascadeExpression_0_0, (Optr)&t_send0, (Optr)PSend12878, (Optr)&t_send1, (Optr)PSend12879, (Optr)&t_method_return);
    Block PBlock12873 = new_Block_with(PArray12874, empty_Array, PThreadedCode12875, 2, PSend12877, PSend12879);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // new. 
    Send PSend12880 = new_Send((Optr)ASTBlock_classReference, SMB_new, 0);
    // value:. 
    Send PSend12872 = new_Send((Optr)PBlock12873, SMB_value_, 1, (Optr)PSend12880);
    Assign PAssign12871 = new_Assign((Optr)VAR_block_0_2, (Optr)PSend12872);
    Array PArray12884 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    // receiver:. 
    Send PSend12886 = new_Send((Optr)VAR__receiver__1_0, SMB_receiver_, 1, (Optr)VAR_block_0_2);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend12887 = new_Send((Optr)VAR_anASTMessageCascadeExpression_0_0, SMB_receiver, 0);
    // with:. 
    Send PSend12888 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)PSend12887);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend12889 = new_Send((Optr)VAR__receiver__1_0, SMB_arguments_, 1, (Optr)PSend12888);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Constant SMB_value__Const = new_Constant((Optr)SMB_value_);
    // selector:. 
    Send PSend12890 = new_Send((Optr)VAR__receiver__1_0, SMB_selector_, 1, (Optr)SMB_value__Const);
    Array PThreadedCode12885 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_block_0_2, (Optr)&t_send1, (Optr)PSend12886, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTMessageCascadeExpression_0_0, (Optr)&t_send0, (Optr)PSend12887, (Optr)&t_send1, (Optr)PSend12888, (Optr)&t_send1, (Optr)PSend12889, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_value_, (Optr)&t_send1, (Optr)PSend12890, (Optr)&t_method_return);
    Block PBlock12883 = new_Block_with(PArray12884, empty_Array, PThreadedCode12885, 3, PSend12886, PSend12889, PSend12890);
    // new. 
    Send PSend12891 = new_Send((Optr)ASTMessageExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend12882 = new_Send((Optr)PBlock12883, SMB_value_, 1, (Optr)PSend12891);
    Assign PAssign12881 = new_Assign((Optr)VAR_send_0_3, (Optr)PSend12882);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend12892 = new_Send((Optr)self, SMB_visit_, 1, (Optr)VAR_send_0_3);
    Array PThreadedCode12861 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign12862, (Optr)&t_push_class_reference, (Optr)ASTVariable_classReference, (Optr)&t_send0, (Optr)PSend12864, (Optr)&t_push1, (Optr)SMB___receiver__, (Optr)&t_send1, (Optr)PSend12863, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_anASTMessageCascadeExpression_0_0, (Optr)&t_send0, (Optr)PSend12865, (Optr)&t_push_closure, (Optr)PBlock12866, (Optr)&t_send1, (Optr)PSend12870, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12871, (Optr)&t_push_closure, (Optr)PBlock12873, (Optr)&t_push_class_reference, (Optr)ASTBlock_classReference, (Optr)&t_send0, (Optr)PSend12880, (Optr)&t_send1, (Optr)PSend12872, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12881, (Optr)&t_push_closure, (Optr)PBlock12883, (Optr)&t_push_class_reference, (Optr)ASTMessageExpression_classReference, (Optr)&t_send0, (Optr)PSend12891, (Optr)&t_send1, (Optr)PSend12882, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_send_0_3, (Optr)&t_send1, (Optr)PSend12892, (Optr)&t_method_return);
    Method PMethod12858 = new_Method_with(PArray12859, PArray12860, empty_Array, PThreadedCode12861, 5, PAssign12862, PSend12870, PAssign12871, PAssign12881, PSend12892);
    
    MethodClosure MC_SMB_visitMessageCascadeExpression_ = new_MethodClosure((Method)PMethod12858, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitMessageCascadeExpression_, MC_SMB_visitMessageCascadeExpression_);
}


static void init_SMB_visitUnaryExpression_() {
    Symbol SMB_visitUnaryExpression_ = new_Symbol(L"visitUnaryExpression:");
    Variable VAR_anASTUnaryExpression_0_0 = new_Variable_named(L"anASTUnaryExpression", 0);
    Array PArray12894 = new_Array_with(1, (Optr)VAR_anASTUnaryExpression_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12897 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12899 = new_Send((Optr)VAR_anASTUnaryExpression_0_0, SMB_selector, 0);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend12900 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)PSend12899);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // new:. 
    Send PSend12901 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_0_Const);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend12902 = new_Send((Optr)VAR__receiver__1_0, SMB_arguments_, 1, (Optr)PSend12901);
    Array PThreadedCode12898 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anASTUnaryExpression_0_0, (Optr)&t_send0, (Optr)PSend12899, (Optr)&t_send1, (Optr)PSend12900, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12901, (Optr)&t_send1, (Optr)PSend12902, (Optr)&t_method_return);
    Block PBlock12896 = new_Block_with(PArray12897, empty_Array, PThreadedCode12898, 2, PSend12900, PSend12902);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend12903 = new_Send((Optr)VAR_anASTUnaryExpression_0_0, SMB_receiver, 0);
    Symbol SMB_createSendTo_ = new_Symbol(L"createSendTo:");
    // createSendTo:. 
    Send PSend12904 = new_Send((Optr)self, SMB_createSendTo_, 1, (Optr)PSend12903);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12905 = new_Send((Optr)PBlock12896, SMB_value_, 1, (Optr)PSend12904);
    Array PThreadedCode12895 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_closure, (Optr)PBlock12896, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anASTUnaryExpression_0_0, (Optr)&t_send0, (Optr)PSend12903, (Optr)&t_send1, (Optr)PSend12904, (Optr)&t_send1, (Optr)PSend12905, (Optr)&t_method_return);
    Method PMethod12893 = new_Method_with(PArray12894, empty_Array, empty_Array, PThreadedCode12895, 1, PSend12905);
    
    MethodClosure MC_SMB_visitUnaryExpression_ = new_MethodClosure((Method)PMethod12893, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitUnaryExpression_, MC_SMB_visitUnaryExpression_);
}


static void init_SMB_error_() {
    Symbol SMB_error_ = new_Symbol(L"error:");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Array PArray12907 = new_Array_with(1, (Optr)VAR_message_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12910 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_target_ = new_Symbol(L"target:");
    // target:. 
    Send PSend12912 = new_Send((Optr)VAR__receiver__1_0, SMB_target_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass);
    Symbol SMB_method_ = new_Symbol(L"method:");
    // method:. 
    Send PSend12913 = new_Send((Optr)VAR__receiver__1_0, SMB_method_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_currentMethod);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend12914 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)VAR_message_0_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend12915 = new_Send((Optr)VAR__receiver__1_0, SMB_signal, 0);
    Array PThreadedCode12911 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send1, (Optr)PSend12912, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_currentMethod, (Optr)&t_send1, (Optr)PSend12913, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_send1, (Optr)PSend12914, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend12915, (Optr)&t_method_return);
    Block PBlock12909 = new_Block_with(PArray12910, empty_Array, PThreadedCode12911, 4, PSend12912, PSend12913, PSend12914, PSend12915);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12916 = new_Send((Optr)PCompilationFailure_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12917 = new_Send((Optr)PBlock12909, SMB_value_, 1, (Optr)PSend12916);
    Array PThreadedCode12908 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock12909, (Optr)&t_push_class_reference, (Optr)PCompilationFailure_classReference, (Optr)&t_send0, (Optr)PSend12916, (Optr)&t_send1, (Optr)PSend12917, (Optr)&t_method_return);
    Method PMethod12906 = new_Method_with(PArray12907, empty_Array, empty_Array, PThreadedCode12908, 1, PSend12917);
    
    MethodClosure MC_SMB_error_ = new_MethodClosure((Method)PMethod12906, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_error_, MC_SMB_error_);
}


static void init_SMB_visitVariable_() {
    Symbol SMB_visitVariable_ = new_Symbol(L"visitVariable:");
    Variable VAR_anASTVariable_0_0 = new_Variable_named(L"anASTVariable", 0);
    Array PArray12919 = new_Array_with(1, (Optr)VAR_anASTVariable_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12922 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_lookup_ = new_Symbol(L"lookup:");
    // lookup:. 
    Send PSend12924 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_lookup_, 1, (Optr)VAR_anASTVariable_0_0);
    Variable VAR_value_2_0 = new_Variable_named(L"value", 2);
    Array PArray12926 = new_Array_with(1, (Optr)VAR_value_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12928 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_2_0);
    Array PThreadedCode12927 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_2_0, (Optr)&t_send1, (Optr)PSend12928, (Optr)&t_method_return);
    Block PBlock12925 = new_Block_with(PArray12926, empty_Array, PThreadedCode12927, 1, PSend12928);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend12929 = new_Send((Optr)PSend12924, SMB_ifNotNil_, 1, (Optr)PBlock12925);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend12930 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend12931 = new_Send((Optr)PSend12930, SMB_first, 0);
    Symbol SMB_isUppercase = new_Symbol(L"isUppercase");
    // isUppercase. 
    Send PSend12932 = new_Send((Optr)PSend12931, SMB_isUppercase, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray12937 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_target_ = new_Symbol(L"target:");
    // target:. 
    Send PSend12939 = new_Send((Optr)VAR__receiver__2_0, SMB_target_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass);
    Symbol SMB_method_ = new_Symbol(L"method:");
    // method:. 
    Send PSend12940 = new_Send((Optr)VAR__receiver__2_0, SMB_method_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_currentMethod);
    Symbol SMB_variable_ = new_Symbol(L"variable:");
    // variable:. 
    Send PSend12941 = new_Send((Optr)VAR__receiver__2_0, SMB_variable_, 1, (Optr)VAR_anASTVariable_0_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend12942 = new_Send((Optr)VAR__receiver__2_0, SMB_signal, 0);
    Array PThreadedCode12938 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send1, (Optr)PSend12939, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_currentMethod, (Optr)&t_send1, (Optr)PSend12940, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send1, (Optr)PSend12941, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend12942, (Optr)&t_method_return);
    Block PBlock12936 = new_Block_with(PArray12937, empty_Array, PThreadedCode12938, 4, PSend12939, PSend12940, PSend12941, PSend12942);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12943 = new_Send((Optr)PUndefinedVariable_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12944 = new_Send((Optr)PBlock12936, SMB_value_, 1, (Optr)PSend12943);
    // escape:. 
    Send PSend12945 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12944);
    Array PThreadedCode12935 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_closure, (Optr)PBlock12936, (Optr)&t_push_class_reference, (Optr)PUndefinedVariable_classReference, (Optr)&t_send0, (Optr)PSend12943, (Optr)&t_send1, (Optr)PSend12944, (Optr)&t_send1, (Optr)PSend12945, (Optr)&t_block_return);
    Block PBlock12934 = new_Block_with(empty_Array, empty_Array, PThreadedCode12935, 1, PSend12945);
    // ifFalse:. 
    Send PSend12933 = new_Send((Optr)PSend12932, SMB_ifFalse_, 1, (Optr)PBlock12934);
    Symbol SMB_scope = new_Symbol(L"scope");
    // scope. 
    Send PSend12946 = new_Send((Optr)self, SMB_scope, 0);
    // name. 
    Send PSend12947 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_package = new_Symbol(L"package");
    // package. 
    Send PSend12948 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, SMB_package, 0);
    // name. 
    Send PSend12949 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_world = new_Symbol(L"world");
    // world. 
    Send PSend12952 = new_Send((Optr)self, SMB_world, 0);
    // name. 
    Send PSend12953 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_ensureClassReference_ = new_Symbol(L"ensureClassReference:");
    // ensureClassReference:. 
    Send PSend12954 = new_Send((Optr)PSend12952, SMB_ensureClassReference_, 1, (Optr)PSend12953);
    Array PThreadedCode12951 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12952, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend12953, (Optr)&t_send1, (Optr)PSend12954, (Optr)&t_block_return);
    Block PBlock12950 = new_Block_with(empty_Array, empty_Array, PThreadedCode12951, 1, PSend12954);
    Symbol SMB_findName_ifAbsent_ = new_Symbol(L"findName:ifAbsent:");
    // findName:ifAbsent:. 
    Send PSend12955 = new_Send((Optr)PSend12948, SMB_findName_ifAbsent_, 2, (Optr)PSend12949, (Optr)PBlock12950);
    Symbol SMB_asNode = new_Symbol(L"asNode");
    // asNode. 
    Send PSend12956 = new_Send((Optr)PSend12955, SMB_asNode, 0);
    Symbol SMB_declare_as_ = new_Symbol(L"declare:as:");
    // declare:as:. 
    Send PSend12957 = new_Send((Optr)PSend12946, SMB_declare_as_, 2, (Optr)PSend12947, (Optr)PSend12956);
    Array PThreadedCode12923 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send1, (Optr)PSend12924, (Optr)&t_push_closure, (Optr)PBlock12925, (Optr)&t_send1, (Optr)PSend12929, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend12930, (Optr)&t_send0, (Optr)PSend12931, (Optr)&t_send0, (Optr)PSend12932, (Optr)&t_send_ifFalse_, (Optr)PSend12933, (Optr)PBlock12934, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12946, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend12947, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send0, (Optr)PSend12948, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend12949, (Optr)&t_push_closure, (Optr)PBlock12950, (Optr)&t_send2, (Optr)PSend12955, (Optr)&t_send0, (Optr)PSend12956, (Optr)&t_send2, (Optr)PSend12957, (Optr)&t_method_return);
    Block PBlock12921 = new_Block_with(PArray12922, empty_Array, PThreadedCode12923, 3, PSend12929, PSend12933, PSend12957);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12958 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12921);
    Array PThreadedCode12920 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12921, (Optr)&t_send1, (Optr)PSend12958, (Optr)&t_method_return);
    Method PMethod12918 = new_Method_with(PArray12919, empty_Array, empty_Array, PThreadedCode12920, 1, PSend12958);
    
    MethodClosure MC_SMB_visitVariable_ = new_MethodClosure((Method)PMethod12918, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitVariable_, MC_SMB_visitVariable_);
}


static void init_SMB_currentBlock() {
    Symbol SMB_currentBlock = new_Symbol(L"currentBlock");
    Array PThreadedCode12960 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_currentBlock, (Optr)&t_method_return);
    Method PMethod12959 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12960, 1, slot_Smalltalk_Compiler_Compiler_currentBlock);
    
    MethodClosure MC_SMB_currentBlock = new_MethodClosure((Method)PMethod12959, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_currentBlock, MC_SMB_currentBlock);
}


static void init_SMB_visitBlock_() {
    Symbol SMB_visitBlock_ = new_Symbol(L"visitBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray12962 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Variable VAR_hasState_0_2 = new_Variable_named(L"hasState", 0);
    Array PArray12963 = new_Array_with(2, (Optr)VAR_block_0_1, (Optr)VAR_hasState_0_2);
    Symbol SMB_parameters = new_Symbol(L"parameters");
    // parameters. 
    Send PSend12969 = new_Send((Optr)VAR_aBlock_0_0, SMB_parameters, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12968 = new_Send((Optr)PSend12969, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend12967 = new_Send((Optr)PSend12968, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_or_ = new_Symbol(L"or:");
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend12972 = new_Send((Optr)VAR_aBlock_0_0, SMB_temporaries, 0);
    // size. 
    Send PSend12973 = new_Send((Optr)PSend12972, SMB_size, 0);
    // >. 
    Send PSend12974 = new_Send((Optr)PSend12973, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode12971 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend12972, (Optr)&t_send0, (Optr)PSend12973, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12974, (Optr)&t_block_return);
    Block PBlock12970 = new_Block_with(empty_Array, empty_Array, PThreadedCode12971, 1, PSend12974);
    // or:. 
    Send PSend12966 = new_Send((Optr)PSend12967, SMB_or_, 1, (Optr)PBlock12970);
    Assign PAssign12965 = new_Assign((Optr)VAR_hasState_0_2, (Optr)PSend12966);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_pushScope = new_Symbol(L"pushScope");
    // pushScope. 
    Send PSend12978 = new_Send((Optr)self, SMB_pushScope, 0);
    // parameters. 
    Send PSend12979 = new_Send((Optr)VAR_aBlock_0_0, SMB_parameters, 0);
    Symbol SMB_declareAll_ = new_Symbol(L"declareAll:");
    // declareAll:. 
    Send PSend12980 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_declareAll_, 1, (Optr)PSend12979);
    // temporaries. 
    Send PSend12981 = new_Send((Optr)VAR_aBlock_0_0, SMB_temporaries, 0);
    // declareAll:. 
    Send PSend12982 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_declareAll_, 1, (Optr)PSend12981);
    Array PThreadedCode12977 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12978, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend12979, (Optr)&t_send1, (Optr)PSend12980, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend12981, (Optr)&t_send1, (Optr)PSend12982, (Optr)&t_block_return);
    Block PBlock12976 = new_Block_with(empty_Array, empty_Array, PThreadedCode12977, 3, PSend12978, PSend12980, PSend12982);
    // ifTrue:. 
    Send PSend12975 = new_Send((Optr)VAR_hasState_0_2, SMB_ifTrue_, 1, (Optr)PBlock12976);
    Symbol SMB_createBlock_ = new_Symbol(L"createBlock:");
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend12986 = new_Send((Optr)VAR_aBlock_0_0, SMB_statements, 0);
    // size. 
    Send PSend12985 = new_Send((Optr)PSend12986, SMB_size, 0);
    // createBlock:. 
    Send PSend12984 = new_Send((Optr)self, SMB_createBlock_, 1, (Optr)PSend12985);
    Assign PAssign12983 = new_Assign((Optr)VAR_block_0_1, (Optr)PSend12984);
    // parameters. 
    Send PSend12987 = new_Send((Optr)VAR_aBlock_0_0, SMB_parameters, 0);
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    // acceptOnCollection:. 
    Send PSend12988 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend12987);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend12989 = new_Send((Optr)PSend12988, SMB_asArray, 0);
    // temporaries. 
    Send PSend12990 = new_Send((Optr)VAR_aBlock_0_0, SMB_temporaries, 0);
    // acceptOnCollection:. 
    Send PSend12991 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend12990);
    // asArray. 
    Send PSend12992 = new_Send((Optr)PSend12991, SMB_asArray, 0);
    Symbol SMB_params_locals_ = new_Symbol(L"params:locals:");
    // params:locals:. 
    Send PSend12993 = new_Send((Optr)VAR_block_0_1, SMB_params_locals_, 2, (Optr)PSend12989, (Optr)PSend12992);
    // statements. 
    Send PSend12994 = new_Send((Optr)VAR_aBlock_0_0, SMB_statements, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray12996 = new_Array_with(2, (Optr)VAR_each_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend12998 = new_Send((Optr)self, SMB_visit_, 1, (Optr)VAR_each_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12999 = new_Send((Optr)VAR_block_0_1, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)PSend12998);
    Array PThreadedCode12997 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send1, (Optr)PSend12998, (Optr)&t_send2, (Optr)PSend12999, (Optr)&t_method_return);
    Block PBlock12995 = new_Block_with(PArray12996, empty_Array, PThreadedCode12997, 1, PSend12999);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend13000 = new_Send((Optr)PSend12994, SMB_withIndexDo_, 1, (Optr)PBlock12995);
    Symbol SMB_popScope = new_Symbol(L"popScope");
    // popScope. 
    Send PSend13004 = new_Send((Optr)self, SMB_popScope, 0);
    Array PThreadedCode13003 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13004, (Optr)&t_block_return);
    Block PBlock13002 = new_Block_with(empty_Array, empty_Array, PThreadedCode13003, 1, PSend13004);
    // ifTrue:. 
    Send PSend13001 = new_Send((Optr)VAR_hasState_0_2, SMB_ifTrue_, 1, (Optr)PBlock13002);
    Array PThreadedCode12964 = instantiate_Array_with(ThreadedCode_Class, 0, 77, (Optr)&t_push1, (Optr)PAssign12965, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend12969, (Optr)&t_send0, (Optr)PSend12968, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12967, (Optr)&t_push_closure, (Optr)PBlock12970, (Optr)&t_send1, (Optr)PSend12966, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hasState_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend12975, (Optr)PBlock12976, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12983, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend12986, (Optr)&t_send0, (Optr)PSend12985, (Optr)&t_send1, (Optr)PSend12984, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend12987, (Optr)&t_send1, (Optr)PSend12988, (Optr)&t_send0, (Optr)PSend12989, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend12990, (Optr)&t_send1, (Optr)PSend12991, (Optr)&t_send0, (Optr)PSend12992, (Optr)&t_send2, (Optr)PSend12993, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend12994, (Optr)&t_push_closure, (Optr)PBlock12995, (Optr)&t_send1, (Optr)PSend13000, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hasState_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend13001, (Optr)PBlock13002, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_method_return);
    Method PMethod12961 = new_Method_with(PArray12962, PArray12963, empty_Array, PThreadedCode12964, 7, PAssign12965, PSend12975, PAssign12983, PSend12993, PSend13000, PSend13001, VAR_block_0_1);
    
    MethodClosure MC_SMB_visitBlock_ = new_MethodClosure((Method)PMethod12961, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitBlock_, MC_SMB_visitBlock_);
}


static void init_SMB_createSendTo_sized_() {
    Symbol SMB_createSendTo_sized_ = new_Symbol(L"createSendTo:sized:");
    Variable VAR_receiver_0_0 = new_Variable_named(L"receiver", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Array PArray13006 = new_Array_with(2, (Optr)VAR_receiver_0_0, (Optr)VAR_size_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray13009 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend13011 = new_Send((Optr)VAR_receiver_0_0, SMB_isKindOf_, 1, (Optr)ASTSuper_classReference);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend13015 = new_Send((Optr)PSuper_classReference, SMB_new_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13016 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend13015);
    Array PThreadedCode13014 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PSuper_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend13015, (Optr)&t_send1, (Optr)PSend13016, (Optr)&t_block_return);
    Block PBlock13013 = new_Block_with(empty_Array, empty_Array, PThreadedCode13014, 1, PSend13016);
    // ifTrue:. 
    Send PSend13012 = new_Send((Optr)PSend13011, SMB_ifTrue_, 1, (Optr)PBlock13013);
    // new:. 
    Send PSend13017 = new_Send((Optr)PSend_classReference, SMB_new_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend13018 = new_Send((Optr)self, SMB_visit_, 1, (Optr)VAR_receiver_0_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend13019 = new_Send((Optr)PSend13017, SMB_receiver_, 1, (Optr)PSend13018);
    Array PThreadedCode13010 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_push_class_reference, (Optr)ASTSuper_classReference, (Optr)&t_send1, (Optr)PSend13011, (Optr)&t_send_ifTrue_, (Optr)PSend13012, (Optr)PBlock13013, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PSend_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend13017, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_send1, (Optr)PSend13018, (Optr)&t_send1, (Optr)PSend13019, (Optr)&t_method_return);
    Block PBlock13008 = new_Block_with(PArray13009, empty_Array, PThreadedCode13010, 2, PSend13012, PSend13019);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13020 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock13008);
    Array PThreadedCode13007 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock13008, (Optr)&t_send1, (Optr)PSend13020, (Optr)&t_method_return);
    Method PMethod13005 = new_Method_with(PArray13006, empty_Array, empty_Array, PThreadedCode13007, 1, PSend13020);
    
    MethodClosure MC_SMB_createSendTo_sized_ = new_MethodClosure((Method)PMethod13005, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createSendTo_sized_, MC_SMB_createSendTo_sized_);
}


static void init_SMB_visitPath_() {
    Symbol SMB_visitPath_ = new_Symbol(L"visitPath:");
    Variable VAR_aPath_0_0 = new_Variable_named(L"aPath", 0);
    Array PArray13022 = new_Array_with(1, (Optr)VAR_aPath_0_0);
    Symbol SMB_package = new_Symbol(L"package");
    // package. 
    Send PSend13024 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, SMB_package, 0);
    Symbol SMB_path = new_Symbol(L"path");
    // path. 
    Send PSend13025 = new_Send((Optr)VAR_aPath_0_0, SMB_path, 0);
    Symbol SMB_lookup_ = new_Symbol(L"lookup:");
    // lookup:. 
    Send PSend13026 = new_Send((Optr)PSend13024, SMB_lookup_, 1, (Optr)PSend13025);
    Symbol SMB_asNode = new_Symbol(L"asNode");
    // asNode. 
    Send PSend13027 = new_Send((Optr)PSend13026, SMB_asNode, 0);
    Array PThreadedCode13023 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send0, (Optr)PSend13024, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_send0, (Optr)PSend13025, (Optr)&t_send1, (Optr)PSend13026, (Optr)&t_send0, (Optr)PSend13027, (Optr)&t_method_return);
    Method PMethod13021 = new_Method_with(PArray13022, empty_Array, empty_Array, PThreadedCode13023, 1, PSend13027);
    
    MethodClosure MC_SMB_visitPath_ = new_MethodClosure((Method)PMethod13021, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitPath_, MC_SMB_visitPath_);
}


static void init_SMB_visitBraceExpression_() {
    Symbol SMB_visitBraceExpression_ = new_Symbol(L"visitBraceExpression:");
    Variable VAR_braceExpression_0_0 = new_Variable_named(L"braceExpression", 0);
    Array PArray13029 = new_Array_with(1, (Optr)VAR_braceExpression_0_0);
    String string_13031 = new_String(L"Brace expressions are not supported by the compiler. Patches welcome!");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_13031_Const = new_Constant((Optr)string_13031);
    // error:. 
    Send PSend13032 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_13031_Const);
    Array PThreadedCode13030 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_13031, (Optr)&t_send1, (Optr)PSend13032, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13028 = new_Method_with(PArray13029, empty_Array, empty_Array, PThreadedCode13030, 2, PSend13032, self);
    
    MethodClosure MC_SMB_visitBraceExpression_ = new_MethodClosure((Method)PMethod13028, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitBraceExpression_, MC_SMB_visitBraceExpression_);
}


static void init_SMB_world_() {
    Symbol SMB_world_ = new_Symbol(L"world:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray13034 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign13036 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_world, (Optr)VAR_anObject_0_0);
    Array PThreadedCode13035 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign13036, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13033 = new_Method_with(PArray13034, empty_Array, empty_Array, PThreadedCode13035, 2, PAssign13036, self);
    
    MethodClosure MC_SMB_world_ = new_MethodClosure((Method)PMethod13033, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_world_, MC_SMB_world_);
}


static void init_SMB_pushScope() {
    Symbol SMB_pushScope = new_Symbol(L"pushScope");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend13040 = new_Send((Optr)PSubScope_classReference, SMB_new_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_scope);
    Assign PAssign13039 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)PSend13040);
    Array PThreadedCode13038 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign13039, (Optr)&t_push_class_reference, (Optr)PSubScope_classReference, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send1, (Optr)PSend13040, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13037 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13038, 2, PAssign13039, self);
    
    MethodClosure MC_SMB_pushScope = new_MethodClosure((Method)PMethod13037, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_pushScope, MC_SMB_pushScope);
}


static void init_SMB_createPInfo() {
    Symbol SMB_createPInfo = new_Symbol(L"createPInfo");
    Variable VAR_info_0_0 = new_Variable_named(L"info", 0);
    Array PArray13042 = new_Array_with(1, (Optr)VAR_info_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13045 = new_Send((Optr)PInfo_classReference, SMB_new, 0);
    Assign PAssign13044 = new_Assign((Optr)VAR_info_0_0, (Optr)PSend13045);
    Symbol SMB_sourceObject = new_Symbol(L"sourceObject");
    // sourceObject. 
    Send PSend13046 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_currentMethod, SMB_sourceObject, 0);
    Symbol SMB_sourceFile_ = new_Symbol(L"sourceFile:");
    // sourceFile:. 
    Send PSend13047 = new_Send((Optr)VAR_info_0_0, SMB_sourceFile_, 1, (Optr)PSend13046);
    Symbol SMB_line_ = new_Symbol(L"line:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // line:. 
    Send PSend13048 = new_Send((Optr)VAR_info_0_0, SMB_line_, 1, (Optr)int_1_Const);
    Symbol SMB_column_ = new_Symbol(L"column:");
    // column:. 
    Send PSend13049 = new_Send((Optr)VAR_info_0_0, SMB_column_, 1, (Optr)int_1_Const);
    Array PThreadedCode13043 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign13044, (Optr)&t_push_class_reference, (Optr)PInfo_classReference, (Optr)&t_send0, (Optr)PSend13045, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_info_0_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_currentMethod, (Optr)&t_send0, (Optr)PSend13046, (Optr)&t_send1, (Optr)PSend13047, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_info_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend13048, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_info_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend13049, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_info_0_0, (Optr)&t_method_return);
    Method PMethod13041 = new_Method_with(empty_Array, PArray13042, empty_Array, PThreadedCode13043, 5, PAssign13044, PSend13047, PSend13048, PSend13049, VAR_info_0_0);
    
    MethodClosure MC_SMB_createPInfo = new_MethodClosure((Method)PMethod13041, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createPInfo, MC_SMB_createPInfo);
}


static void init_SMB_visitKeywordSelector_() {
    Symbol SMB_visitKeywordSelector_ = new_Symbol(L"visitKeywordSelector:");
    Variable VAR_anASTKeywordSelector_0_0 = new_Variable_named(L"anASTKeywordSelector", 0);
    Array PArray13051 = new_Array_with(1, (Optr)VAR_anASTKeywordSelector_0_0);
    Symbol SMB_selectorSymbol = new_Symbol(L"selectorSymbol");
    // selectorSymbol. 
    Send PSend13053 = new_Send((Optr)VAR_anASTKeywordSelector_0_0, SMB_selectorSymbol, 0);
    Array PThreadedCode13052 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_anASTKeywordSelector_0_0, (Optr)&t_send0, (Optr)PSend13053, (Optr)&t_method_return);
    Method PMethod13050 = new_Method_with(PArray13051, empty_Array, empty_Array, PThreadedCode13052, 1, PSend13053);
    
    MethodClosure MC_SMB_visitKeywordSelector_ = new_MethodClosure((Method)PMethod13050, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitKeywordSelector_, MC_SMB_visitKeywordSelector_);
}


static void init_SMB_visitBoolean_() {
    Symbol SMB_visitBoolean_ = new_Symbol(L"visitBoolean:");
    Variable VAR_aPinocchioBoolean_0_0 = new_Variable_named(L"aPinocchioBoolean", 0);
    Array PArray13055 = new_Array_with(1, (Optr)VAR_aPinocchioBoolean_0_0);
    Array PThreadedCode13056 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_aPinocchioBoolean_0_0, (Optr)&t_method_return);
    Method PMethod13054 = new_Method_with(PArray13055, empty_Array, empty_Array, PThreadedCode13056, 1, VAR_aPinocchioBoolean_0_0);
    
    MethodClosure MC_SMB_visitBoolean_ = new_MethodClosure((Method)PMethod13054, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitBoolean_, MC_SMB_visitBoolean_);
}


static void init_class_SMB_compile_on_() {
    Symbol SMB_compile_on_ = new_Symbol(L"compile:on:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_aClass_0_1 = new_Variable_named(L"aClass", 0);
    Array PArray13058 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aClass_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray13061 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_pclass_ = new_Symbol(L"pclass:");
    // pclass:. 
    Send PSend13063 = new_Send((Optr)VAR__receiver__1_0, SMB_pclass_, 1, (Optr)VAR_aClass_0_1);
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend13064 = new_Send((Optr)VAR__receiver__1_0, SMB_compile_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode13062 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aClass_0_1, (Optr)&t_send1, (Optr)PSend13063, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend13064, (Optr)&t_method_return);
    Block PBlock13060 = new_Block_with(PArray13061, empty_Array, PThreadedCode13062, 2, PSend13063, PSend13064);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13065 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend13066 = new_Send((Optr)PBlock13060, SMB_value_, 1, (Optr)PSend13065);
    Array PThreadedCode13059 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock13060, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13065, (Optr)&t_send1, (Optr)PSend13066, (Optr)&t_method_return);
    Method PMethod13057 = new_Method_with(PArray13058, empty_Array, empty_Array, PThreadedCode13059, 1, PSend13066);
    
    MethodClosure MC_SMB_compile_on_ = new_MethodClosure((Method)PMethod13057, HEADER(Smalltalk_Compiler_Compiler_Class));
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