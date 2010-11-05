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
    Array PArray12484 = new_Array_with(1, (Optr)VAR_aBinaryExpression_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12487 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12489 = new_Send((Optr)VAR_aBinaryExpression_0_0, SMB_selector, 0);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend12490 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)PSend12489);
    Symbol SMB_argument = new_Symbol(L"argument");
    // argument. 
    Send PSend12491 = new_Send((Optr)VAR_aBinaryExpression_0_0, SMB_argument, 0);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend12492 = new_Send((Optr)self, SMB_visit_, 1, (Optr)PSend12491);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend12493 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend12492);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend12494 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode12488 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aBinaryExpression_0_0, (Optr)&t_send0, (Optr)PSend12489, (Optr)&t_send1, (Optr)PSend12490, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBinaryExpression_0_0, (Optr)&t_send0, (Optr)PSend12491, (Optr)&t_send1, (Optr)PSend12492, (Optr)&t_send2, (Optr)PSend12493, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend12494, (Optr)&t_method_return);
    Block PBlock12486 = new_Block_with(PArray12487, empty_Array, PThreadedCode12488, 3, PSend12490, PSend12493, PSend12494);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend12495 = new_Send((Optr)VAR_aBinaryExpression_0_0, SMB_receiver, 0);
    Symbol SMB_createSendTo_sized_ = new_Symbol(L"createSendTo:sized:");
    // createSendTo:sized:. 
    Send PSend12496 = new_Send((Optr)self, SMB_createSendTo_sized_, 2, (Optr)PSend12495, (Optr)int_1_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12497 = new_Send((Optr)PBlock12486, SMB_value_, 1, (Optr)PSend12496);
    Array PThreadedCode12485 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_closure, (Optr)PBlock12486, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBinaryExpression_0_0, (Optr)&t_send0, (Optr)PSend12495, (Optr)&t_push_1, (Optr)&t_send2, (Optr)PSend12496, (Optr)&t_send1, (Optr)PSend12497, (Optr)&t_method_return);
    Method PMethod12483 = new_Method_with(PArray12484, empty_Array, empty_Array, PThreadedCode12485, 1, PSend12497);
    
    MethodClosure MC_SMB_visitBinaryExpression_ = new_MethodClosure((Method)PMethod12483, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitBinaryExpression_, MC_SMB_visitBinaryExpression_);
}


static void init_SMB_createBlock_() {
    Symbol SMB_createBlock_ = new_Symbol(L"createBlock:");
    Variable VAR_size_0_0 = new_Variable_named(L"size", 0);
    Array PArray12499 = new_Array_with(1, (Optr)VAR_size_0_0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Array PArray12500 = new_Array_with(1, (Optr)VAR_block_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12503 = new_Send((Optr)PBlock_classReference, SMB_new_, 1, (Optr)VAR_size_0_0);
    Assign PAssign12502 = new_Assign((Optr)VAR_block_0_1, (Optr)PSend12503);
    Array PThreadedCode12501 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign12502, (Optr)&t_push_class_reference, (Optr)PBlock_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend12503, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_method_return);
    Method PMethod12498 = new_Method_with(PArray12499, PArray12500, empty_Array, PThreadedCode12501, 2, PAssign12502, VAR_block_0_1);
    
    MethodClosure MC_SMB_createBlock_ = new_MethodClosure((Method)PMethod12498, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createBlock_, MC_SMB_createBlock_);
}


static void init_SMB_visitReturnExpression_() {
    Symbol SMB_visitReturnExpression_ = new_Symbol(L"visitReturnExpression:");
    Variable VAR_aReturnExpression_0_0 = new_Variable_named(L"aReturnExpression", 0);
    Array PArray12505 = new_Array_with(1, (Optr)VAR_aReturnExpression_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12508 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend12510 = new_Send((Optr)VAR_aReturnExpression_0_0, SMB_expression, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend12511 = new_Send((Optr)PSend12510, SMB_accept_, 1, (Optr)self);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend12512 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend12511);
    Symbol SMB_currentCallecVariable = new_Symbol(L"currentCallecVariable");
    // currentCallecVariable. 
    Send PSend12513 = new_Send((Optr)self, SMB_currentCallecVariable, 0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend12514 = new_Send((Optr)VAR__receiver__1_0, SMB_receiver_, 1, (Optr)PSend12513);
    Symbol  SMB_escape_ = new_Symbol(L"escape:");
    Symbol SMB_message_ = new_Symbol(L"message:");
    Constant SMB_escape__Const = new_Constant((Optr)SMB_escape_);
    // message:. 
    Send PSend12515 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)SMB_escape__Const);
    Array PThreadedCode12509 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_aReturnExpression_0_0, (Optr)&t_send0, (Optr)PSend12510, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12511, (Optr)&t_send2, (Optr)PSend12512, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12513, (Optr)&t_send1, (Optr)PSend12514, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_escape_, (Optr)&t_send1, (Optr)PSend12515, (Optr)&t_method_return);
    Block PBlock12507 = new_Block_with(PArray12508, empty_Array, PThreadedCode12509, 3, PSend12512, PSend12514, PSend12515);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12516 = new_Send((Optr)PSend_classReference, SMB_new_, 1, (Optr)int_1_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12517 = new_Send((Optr)PBlock12507, SMB_value_, 1, (Optr)PSend12516);
    Array PThreadedCode12506 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock12507, (Optr)&t_push_class_reference, (Optr)PSend_classReference, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12516, (Optr)&t_send1, (Optr)PSend12517, (Optr)&t_method_return);
    Method PMethod12504 = new_Method_with(PArray12505, empty_Array, empty_Array, PThreadedCode12506, 1, PSend12517);
    
    MethodClosure MC_SMB_visitReturnExpression_ = new_MethodClosure((Method)PMethod12504, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitReturnExpression_, MC_SMB_visitReturnExpression_);
}


static void init_SMB_visitArray_() {
    Symbol SMB_visitArray_ = new_Symbol(L"visitArray:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray12519 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    String string_12521 = new_String(L"Literal arrays are not yet supported by the compiler. Patches welcome!");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_12521_Const = new_Constant((Optr)string_12521);
    // error:. 
    Send PSend12522 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_12521_Const);
    Array PThreadedCode12520 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_12521, (Optr)&t_send1, (Optr)PSend12522, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12518 = new_Method_with(PArray12519, empty_Array, empty_Array, PThreadedCode12520, 2, PSend12522, self);
    
    MethodClosure MC_SMB_visitArray_ = new_MethodClosure((Method)PMethod12518, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitArray_, MC_SMB_visitArray_);
}


static void init_SMB_visitMessageExpression_() {
    Symbol SMB_visitMessageExpression_ = new_Symbol(L"visitMessageExpression:");
    Variable VAR_aMessageExpression_0_0 = new_Variable_named(L"aMessageExpression", 0);
    Array PArray12524 = new_Array_with(1, (Optr)VAR_aMessageExpression_0_0);
    Variable VAR_arguments_0_1 = new_Variable_named(L"arguments", 0);
    Array PArray12525 = new_Array_with(1, (Optr)VAR_arguments_0_1);
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    Symbol SMB_arguments = new_Symbol(L"arguments");
    // arguments. 
    Send PSend12529 = new_Send((Optr)VAR_aMessageExpression_0_0, SMB_arguments, 0);
    // acceptOnCollection:. 
    Send PSend12528 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend12529);
    Assign PAssign12527 = new_Assign((Optr)VAR_arguments_0_1, (Optr)PSend12528);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12531 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12533 = new_Send((Optr)VAR_aMessageExpression_0_0, SMB_selector, 0);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend12534 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)PSend12533);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend12535 = new_Send((Optr)VAR__receiver__1_0, SMB_arguments_, 1, (Optr)VAR_arguments_0_1);
    Array PThreadedCode12532 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aMessageExpression_0_0, (Optr)&t_send0, (Optr)PSend12533, (Optr)&t_send1, (Optr)PSend12534, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_arguments_0_1, (Optr)&t_send1, (Optr)PSend12535, (Optr)&t_method_return);
    Block PBlock12530 = new_Block_with(PArray12531, empty_Array, PThreadedCode12532, 2, PSend12534, PSend12535);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend12536 = new_Send((Optr)VAR_aMessageExpression_0_0, SMB_receiver, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12537 = new_Send((Optr)VAR_arguments_0_1, SMB_size, 0);
    Symbol SMB_createSendTo_sized_ = new_Symbol(L"createSendTo:sized:");
    // createSendTo:sized:. 
    Send PSend12538 = new_Send((Optr)self, SMB_createSendTo_sized_, 2, (Optr)PSend12536, (Optr)PSend12537);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12539 = new_Send((Optr)PBlock12530, SMB_value_, 1, (Optr)PSend12538);
    Array PThreadedCode12526 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign12527, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessageExpression_0_0, (Optr)&t_send0, (Optr)PSend12529, (Optr)&t_send1, (Optr)PSend12528, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock12530, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessageExpression_0_0, (Optr)&t_send0, (Optr)PSend12536, (Optr)&t_push_variable, (Optr)VAR_arguments_0_1, (Optr)&t_send0, (Optr)PSend12537, (Optr)&t_send2, (Optr)PSend12538, (Optr)&t_send1, (Optr)PSend12539, (Optr)&t_method_return);
    Method PMethod12523 = new_Method_with(PArray12524, PArray12525, empty_Array, PThreadedCode12526, 2, PAssign12527, PSend12539);
    
    MethodClosure MC_SMB_visitMessageExpression_ = new_MethodClosure((Method)PMethod12523, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitMessageExpression_, MC_SMB_visitMessageExpression_);
}


static void init_SMB_visitAssignmentExpression_() {
    Symbol SMB_visitAssignmentExpression_ = new_Symbol(L"visitAssignmentExpression:");
    Variable VAR_anAssignmentExpression_0_0 = new_Variable_named(L"anAssignmentExpression", 0);
    Array PArray12541 = new_Array_with(1, (Optr)VAR_anAssignmentExpression_0_0);
    Variable VAR_assign_0_1 = new_Variable_named(L"assign", 0);
    Array PArray12542 = new_Array_with(1, (Optr)VAR_assign_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12547 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_variable = new_Symbol(L"variable");
    // variable. 
    Send PSend12549 = new_Send((Optr)VAR_anAssignmentExpression_0_0, SMB_variable, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend12550 = new_Send((Optr)PSend12549, SMB_accept_, 1, (Optr)self);
    Symbol SMB_variable_ = new_Symbol(L"variable:");
    // variable:. 
    Send PSend12551 = new_Send((Optr)VAR__receiver__1_0, SMB_variable_, 1, (Optr)PSend12550);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend12552 = new_Send((Optr)VAR_anAssignmentExpression_0_0, SMB_expression, 0);
    // accept:. 
    Send PSend12553 = new_Send((Optr)PSend12552, SMB_accept_, 1, (Optr)self);
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    // expression:. 
    Send PSend12554 = new_Send((Optr)VAR__receiver__1_0, SMB_expression_, 1, (Optr)PSend12553);
    Array PThreadedCode12548 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anAssignmentExpression_0_0, (Optr)&t_send0, (Optr)PSend12549, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12550, (Optr)&t_send1, (Optr)PSend12551, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anAssignmentExpression_0_0, (Optr)&t_send0, (Optr)PSend12552, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12553, (Optr)&t_send1, (Optr)PSend12554, (Optr)&t_method_return);
    Block PBlock12546 = new_Block_with(PArray12547, empty_Array, PThreadedCode12548, 2, PSend12551, PSend12554);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12555 = new_Send((Optr)PAssign_classReference, SMB_new, 0);
    // value:. 
    Send PSend12545 = new_Send((Optr)PBlock12546, SMB_value_, 1, (Optr)PSend12555);
    Assign PAssign12544 = new_Assign((Optr)VAR_assign_0_1, (Optr)PSend12545);
    // variable. 
    Send PSend12556 = new_Send((Optr)VAR_assign_0_1, SMB_variable, 0);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend12557 = new_Send((Optr)PSend12556, SMB_should, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend12558 = new_Send((Optr)PSend12557, SMB_not, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend12559 = new_Send((Optr)PSend12558, SMB__equals_, 1, (Optr)nil_Const);
    // expression. 
    Send PSend12560 = new_Send((Optr)VAR_assign_0_1, SMB_expression, 0);
    // should. 
    Send PSend12561 = new_Send((Optr)PSend12560, SMB_should, 0);
    // not. 
    Send PSend12562 = new_Send((Optr)PSend12561, SMB_not, 0);
    // =. 
    Send PSend12563 = new_Send((Optr)PSend12562, SMB__equals_, 1, (Optr)nil_Const);
    Array PThreadedCode12543 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign12544, (Optr)&t_push_closure, (Optr)PBlock12546, (Optr)&t_push_class_reference, (Optr)PAssign_classReference, (Optr)&t_send0, (Optr)PSend12555, (Optr)&t_send1, (Optr)PSend12545, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_assign_0_1, (Optr)&t_send0, (Optr)PSend12556, (Optr)&t_send0, (Optr)PSend12557, (Optr)&t_send0, (Optr)PSend12558, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend12559, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_assign_0_1, (Optr)&t_send0, (Optr)PSend12560, (Optr)&t_send0, (Optr)PSend12561, (Optr)&t_send0, (Optr)PSend12562, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend12563, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_assign_0_1, (Optr)&t_method_return);
    Method PMethod12540 = new_Method_with(PArray12541, PArray12542, empty_Array, PThreadedCode12543, 4, PAssign12544, PSend12559, PSend12563, VAR_assign_0_1);
    
    MethodClosure MC_SMB_visitAssignmentExpression_ = new_MethodClosure((Method)PMethod12540, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitAssignmentExpression_, MC_SMB_visitAssignmentExpression_);
}


static void init_SMB_currentCallecVariable_() {
    Symbol SMB_currentCallecVariable_ = new_Symbol(L"currentCallecVariable:");
    Variable VAR_aPinocchioVariable_0_0 = new_Variable_named(L"aPinocchioVariable", 0);
    Array PArray12565 = new_Array_with(1, (Optr)VAR_aPinocchioVariable_0_0);
    Assign PAssign12567 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_currentCallecVariable, (Optr)VAR_aPinocchioVariable_0_0);
    Array PThreadedCode12566 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign12567, (Optr)&t_push_variable, (Optr)VAR_aPinocchioVariable_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12564 = new_Method_with(PArray12565, empty_Array, empty_Array, PThreadedCode12566, 2, PAssign12567, self);
    
    MethodClosure MC_SMB_currentCallecVariable_ = new_MethodClosure((Method)PMethod12564, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_currentCallecVariable_, MC_SMB_currentCallecVariable_);
}


static void init_SMB_visitUnaryAnnotation_() {
    Symbol SMB_visitUnaryAnnotation_ = new_Symbol(L"visitUnaryAnnotation:");
    Variable VAR_anASTUnaryAnnotation_0_0 = new_Variable_named(L"anASTUnaryAnnotation", 0);
    Array PArray12569 = new_Array_with(1, (Optr)VAR_anASTUnaryAnnotation_0_0);
    Variable VAR_annotation_0_1 = new_Variable_named(L"annotation", 0);
    Array PArray12570 = new_Array_with(1, (Optr)VAR_annotation_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // new:. 
    Send PSend12573 = new_Send((Optr)PAnnotation_classReference, SMB_new_, 1, (Optr)int_0_Const);
    Assign PAssign12572 = new_Assign((Optr)VAR_annotation_0_1, (Optr)PSend12573);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12574 = new_Send((Optr)VAR_anASTUnaryAnnotation_0_0, SMB_selector, 0);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend12575 = new_Send((Optr)self, SMB_visit_, 1, (Optr)PSend12574);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend12576 = new_Send((Optr)VAR_annotation_0_1, SMB_selector_, 1, (Optr)PSend12575);
    Array PThreadedCode12571 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign12572, (Optr)&t_push_class_reference, (Optr)PAnnotation_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12573, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_annotation_0_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anASTUnaryAnnotation_0_0, (Optr)&t_send0, (Optr)PSend12574, (Optr)&t_send1, (Optr)PSend12575, (Optr)&t_send1, (Optr)PSend12576, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_annotation_0_1, (Optr)&t_method_return);
    Method PMethod12568 = new_Method_with(PArray12569, PArray12570, empty_Array, PThreadedCode12571, 3, PAssign12572, PSend12576, VAR_annotation_0_1);
    
    MethodClosure MC_SMB_visitUnaryAnnotation_ = new_MethodClosure((Method)PMethod12568, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitUnaryAnnotation_, MC_SMB_visitUnaryAnnotation_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper12579 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12581 = new_Send((Optr)PRootScope_classReference, SMB_new, 0);
    Assign PAssign12580 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)PSend12581);
    Assign PAssign12582 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_rootScope, (Optr)slot_Smalltalk_Compiler_Compiler_scope);
    // new. 
    Send PSend12584 = new_Send((Optr)PThreadedCompiler_classReference, SMB_new, 0);
    Assign PAssign12583 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_threadedCompiler, (Optr)PSend12584);
    Array PThreadedCode12578 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper12579, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12580, (Optr)&t_push_class_reference, (Optr)PRootScope_classReference, (Optr)&t_send0, (Optr)PSend12581, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12582, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12583, (Optr)&t_push_class_reference, (Optr)PThreadedCompiler_classReference, (Optr)&t_send0, (Optr)PSend12584, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12577 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12578, 5, PSuper12579, PAssign12580, PAssign12582, PAssign12583, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod12577, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_visitUnarySelector_() {
    Symbol SMB_visitUnarySelector_ = new_Symbol(L"visitUnarySelector:");
    Variable VAR_aUnarySelector_0_0 = new_Variable_named(L"aUnarySelector", 0);
    Array PArray12586 = new_Array_with(1, (Optr)VAR_aUnarySelector_0_0);
    Symbol SMB_selectorSymbol = new_Symbol(L"selectorSymbol");
    // selectorSymbol. 
    Send PSend12588 = new_Send((Optr)VAR_aUnarySelector_0_0, SMB_selectorSymbol, 0);
    Array PThreadedCode12587 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aUnarySelector_0_0, (Optr)&t_send0, (Optr)PSend12588, (Optr)&t_method_return);
    Method PMethod12585 = new_Method_with(PArray12586, empty_Array, empty_Array, PThreadedCode12587, 1, PSend12588);
    
    MethodClosure MC_SMB_visitUnarySelector_ = new_MethodClosure((Method)PMethod12585, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitUnarySelector_, MC_SMB_visitUnarySelector_);
}


static void init_SMB_compile_() {
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray12590 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    // parse:. 
    Send PSend12592 = new_Send((Optr)self, SMB_parse_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_sourceObject_ = new_Symbol(L"sourceObject:");
    // sourceObject:. 
    Send PSend12593 = new_Send((Optr)PSend12592, SMB_sourceObject_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend12594 = new_Send((Optr)self, SMB_visit_, 1, (Optr)PSend12593);
    Array PThreadedCode12591 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend12592, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend12593, (Optr)&t_send1, (Optr)PSend12594, (Optr)&t_method_return);
    Method PMethod12589 = new_Method_with(PArray12590, empty_Array, empty_Array, PThreadedCode12591, 1, PSend12594);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod12589, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_compile_, MC_SMB_compile_);
}


static void init_SMB_compileThreadedMethod_() {
    Symbol SMB_compileThreadedMethod_ = new_Symbol(L"compileThreadedMethod:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Array PArray12596 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend12598 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_threadedCompiler, SMB_compile_, 1, (Optr)VAR_aMethod_0_0);
    Array PThreadedCode12597 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_threadedCompiler, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend12598, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12595 = new_Method_with(PArray12596, empty_Array, empty_Array, PThreadedCode12597, 2, PSend12598, self);
    
    MethodClosure MC_SMB_compileThreadedMethod_ = new_MethodClosure((Method)PMethod12595, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_compileThreadedMethod_, MC_SMB_compileThreadedMethod_);
}


static void init_SMB_pclass() {
    Symbol SMB_pclass = new_Symbol(L"pclass");
    Array PThreadedCode12600 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_method_return);
    Method PMethod12599 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12600, 1, slot_Smalltalk_Compiler_Compiler_pinocchioClass);
    
    MethodClosure MC_SMB_pclass = new_MethodClosure((Method)PMethod12599, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_pclass, MC_SMB_pclass);
}


static void init_SMB_rootScope() {
    Symbol SMB_rootScope = new_Symbol(L"rootScope");
    Array PThreadedCode12602 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_rootScope, (Optr)&t_method_return);
    Method PMethod12601 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12602, 1, slot_Smalltalk_Compiler_Compiler_rootScope);
    
    MethodClosure MC_SMB_rootScope = new_MethodClosure((Method)PMethod12601, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_rootScope, MC_SMB_rootScope);
}


static void init_SMB_visitFloat_() {
    Symbol SMB_visitFloat_ = new_Symbol(L"visitFloat:");
    Variable VAR_anASTFloat_0_0 = new_Variable_named(L"anASTFloat", 0);
    Array PArray12604 = new_Array_with(1, (Optr)VAR_anASTFloat_0_0);
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    // asNumber. 
    Send PSend12606 = new_Send((Optr)VAR_anASTFloat_0_0, SMB_asNumber, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12607 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)PSend12606);
    Array PThreadedCode12605 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTFloat_0_0, (Optr)&t_send0, (Optr)PSend12606, (Optr)&t_send1, (Optr)PSend12607, (Optr)&t_method_return);
    Method PMethod12603 = new_Method_with(PArray12604, empty_Array, empty_Array, PThreadedCode12605, 1, PSend12607);
    
    MethodClosure MC_SMB_visitFloat_ = new_MethodClosure((Method)PMethod12603, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitFloat_, MC_SMB_visitFloat_);
}


static void init_SMB_scope() {
    Symbol SMB_scope = new_Symbol(L"scope");
    Array PThreadedCode12609 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_method_return);
    Method PMethod12608 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12609, 1, slot_Smalltalk_Compiler_Compiler_scope);
    
    MethodClosure MC_SMB_scope = new_MethodClosure((Method)PMethod12608, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_scope, MC_SMB_scope);
}


static void init_SMB_visitSuper_() {
    Symbol SMB_visitSuper_ = new_Symbol(L"visitSuper:");
    Variable VAR_anASTSuper_0_0 = new_Variable_named(L"anASTSuper", 0);
    Array PArray12611 = new_Array_with(1, (Optr)VAR_anASTSuper_0_0);
    String string_12613 = new_String(L"Should not get an AST Super");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_12613_Const = new_Constant((Optr)string_12613);
    // error:. 
    Send PSend12614 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_12613_Const);
    Array PThreadedCode12612 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_12613, (Optr)&t_send1, (Optr)PSend12614, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12610 = new_Method_with(PArray12611, empty_Array, empty_Array, PThreadedCode12612, 2, PSend12614, self);
    
    MethodClosure MC_SMB_visitSuper_ = new_MethodClosure((Method)PMethod12610, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitSuper_, MC_SMB_visitSuper_);
}


static void init_SMB_visitNumber_() {
    Symbol SMB_visitNumber_ = new_Symbol(L"visitNumber:");
    Variable VAR_anASTNumber_0_0 = new_Variable_named(L"anASTNumber", 0);
    Array PArray12616 = new_Array_with(1, (Optr)VAR_anASTNumber_0_0);
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    // asNumber. 
    Send PSend12618 = new_Send((Optr)VAR_anASTNumber_0_0, SMB_asNumber, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12619 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)PSend12618);
    Array PThreadedCode12617 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTNumber_0_0, (Optr)&t_send0, (Optr)PSend12618, (Optr)&t_send1, (Optr)PSend12619, (Optr)&t_method_return);
    Method PMethod12615 = new_Method_with(PArray12616, empty_Array, empty_Array, PThreadedCode12617, 1, PSend12619);
    
    MethodClosure MC_SMB_visitNumber_ = new_MethodClosure((Method)PMethod12615, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitNumber_, MC_SMB_visitNumber_);
}


static void init_SMB_world() {
    Symbol SMB_world = new_Symbol(L"world");
    Symbol SMB_package = new_Symbol(L"package");
    // package. 
    Send PSend12622 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, SMB_package, 0);
    Array PThreadedCode12621 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send0, (Optr)PSend12622, (Optr)&t_method_return);
    Method PMethod12620 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12621, 1, PSend12622);
    
    MethodClosure MC_SMB_world = new_MethodClosure((Method)PMethod12620, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_world, MC_SMB_world);
}


static void init_SMB_pclass_() {
    Symbol SMB_pclass_ = new_Symbol(L"pclass:");
    Variable VAR_aPinocchioClass_0_0 = new_Variable_named(L"aPinocchioClass", 0);
    Array PArray12624 = new_Array_with(1, (Optr)VAR_aPinocchioClass_0_0);
    Symbol SMB_isRootScope = new_Symbol(L"isRootScope");
    // isRootScope. 
    Send PSend12626 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_isRootScope, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_12630 = new_String(L"Current scope is not RootScope but ");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend12631 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend12632 = new_Send((Optr)PSend12631, SMB_name, 0);
    Constant string_12630_Const = new_Constant((Optr)string_12630);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend12633 = new_Send((Optr)string_12630_Const, SMB__append_, 1, (Optr)PSend12632);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend12634 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend12633);
    Array PThreadedCode12629 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_12630, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send0, (Optr)PSend12631, (Optr)&t_send0, (Optr)PSend12632, (Optr)&t_send1, (Optr)PSend12633, (Optr)&t_send1, (Optr)PSend12634, (Optr)&t_block_return);
    Block PBlock12628 = new_Block_with(empty_Array, empty_Array, PThreadedCode12629, 1, PSend12634);
    // ifFalse:. 
    Send PSend12627 = new_Send((Optr)PSend12626, SMB_ifFalse_, 1, (Optr)PBlock12628);
    Assign PAssign12635 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)VAR_aPinocchioClass_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12639 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    // pclass:. 
    Send PSend12641 = new_Send((Optr)VAR__receiver__1_0, SMB_pclass_, 1, (Optr)VAR_aPinocchioClass_0_0);
    Symbol SMB_parentScope_ = new_Symbol(L"parentScope:");
    // parentScope:. 
    Send PSend12642 = new_Send((Optr)VAR__receiver__1_0, SMB_parentScope_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_scope);
    Array PThreadedCode12640 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_send1, (Optr)PSend12641, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send1, (Optr)PSend12642, (Optr)&t_method_return);
    Block PBlock12638 = new_Block_with(PArray12639, empty_Array, PThreadedCode12640, 2, PSend12641, PSend12642);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12643 = new_Send((Optr)PClassScope_classReference, SMB_new, 0);
    // value:. 
    Send PSend12637 = new_Send((Optr)PBlock12638, SMB_value_, 1, (Optr)PSend12643);
    Assign PAssign12636 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)PSend12637);
    Array PThreadedCode12625 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send0, (Optr)PSend12626, (Optr)&t_send_ifFalse_, (Optr)PSend12627, (Optr)PBlock12628, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12635, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12636, (Optr)&t_push_closure, (Optr)PBlock12638, (Optr)&t_push_class_reference, (Optr)PClassScope_classReference, (Optr)&t_send0, (Optr)PSend12643, (Optr)&t_send1, (Optr)PSend12637, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12623 = new_Method_with(PArray12624, empty_Array, empty_Array, PThreadedCode12625, 4, PSend12627, PAssign12635, PAssign12636, self);
    
    MethodClosure MC_SMB_pclass_ = new_MethodClosure((Method)PMethod12623, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_pclass_, MC_SMB_pclass_);
}


static void init_SMB_visitKeywordAnnotation_() {
    Symbol SMB_visitKeywordAnnotation_ = new_Symbol(L"visitKeywordAnnotation:");
    Variable VAR_anASTKeywordAnnotation_0_0 = new_Variable_named(L"anASTKeywordAnnotation", 0);
    Array PArray12645 = new_Array_with(1, (Optr)VAR_anASTKeywordAnnotation_0_0);
    Variable VAR_annotation_0_1 = new_Variable_named(L"annotation", 0);
    Variable VAR_arguments_0_2 = new_Variable_named(L"arguments", 0);
    Array PArray12646 = new_Array_with(2, (Optr)VAR_annotation_0_1, (Optr)VAR_arguments_0_2);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_arguments = new_Symbol(L"arguments");
    // arguments. 
    Send PSend12651 = new_Send((Optr)VAR_anASTKeywordAnnotation_0_0, SMB_arguments, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12650 = new_Send((Optr)PSend12651, SMB_size, 0);
    // new:. 
    Send PSend12649 = new_Send((Optr)PAnnotation_classReference, SMB_new_, 1, (Optr)PSend12650);
    Assign PAssign12648 = new_Assign((Optr)VAR_annotation_0_1, (Optr)PSend12649);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12652 = new_Send((Optr)VAR_anASTKeywordAnnotation_0_0, SMB_selector, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend12653 = new_Send((Optr)VAR_annotation_0_1, SMB_selector_, 1, (Optr)PSend12652);
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    // arguments. 
    Send PSend12656 = new_Send((Optr)VAR_anASTKeywordAnnotation_0_0, SMB_arguments, 0);
    // acceptOnCollection:. 
    Send PSend12655 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend12656);
    Assign PAssign12654 = new_Assign((Optr)VAR_arguments_0_2, (Optr)PSend12655);
    Variable VAR_object_1_0 = new_Variable_named(L"object", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray12658 = new_Array_with(2, (Optr)VAR_object_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_unwrapConstant_ = new_Symbol(L"unwrapConstant:");
    // unwrapConstant:. 
    Send PSend12660 = new_Send((Optr)self, SMB_unwrapConstant_, 1, (Optr)VAR_object_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12661 = new_Send((Optr)VAR_annotation_0_1, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)PSend12660);
    Array PThreadedCode12659 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_annotation_0_1, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_object_1_0, (Optr)&t_send1, (Optr)PSend12660, (Optr)&t_send2, (Optr)PSend12661, (Optr)&t_method_return);
    Block PBlock12657 = new_Block_with(PArray12658, empty_Array, PThreadedCode12659, 1, PSend12661);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend12662 = new_Send((Optr)VAR_arguments_0_2, SMB_withIndexDo_, 1, (Optr)PBlock12657);
    Array PThreadedCode12647 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push1, (Optr)PAssign12648, (Optr)&t_push_class_reference, (Optr)PAnnotation_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTKeywordAnnotation_0_0, (Optr)&t_send0, (Optr)PSend12651, (Optr)&t_send0, (Optr)PSend12650, (Optr)&t_send1, (Optr)PSend12649, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_annotation_0_1, (Optr)&t_push_variable, (Optr)VAR_anASTKeywordAnnotation_0_0, (Optr)&t_send0, (Optr)PSend12652, (Optr)&t_send1, (Optr)PSend12653, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12654, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anASTKeywordAnnotation_0_0, (Optr)&t_send0, (Optr)PSend12656, (Optr)&t_send1, (Optr)PSend12655, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_push_closure, (Optr)PBlock12657, (Optr)&t_send1, (Optr)PSend12662, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_annotation_0_1, (Optr)&t_method_return);
    Method PMethod12644 = new_Method_with(PArray12645, PArray12646, empty_Array, PThreadedCode12647, 5, PAssign12648, PSend12653, PAssign12654, PSend12662, VAR_annotation_0_1);
    
    MethodClosure MC_SMB_visitKeywordAnnotation_ = new_MethodClosure((Method)PMethod12644, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitKeywordAnnotation_, MC_SMB_visitKeywordAnnotation_);
}


static void init_SMB_visitString_() {
    Symbol SMB_visitString_ = new_Symbol(L"visitString:");
    Variable VAR_anASTString_0_0 = new_Variable_named(L"anASTString", 0);
    Array PArray12664 = new_Array_with(1, (Optr)VAR_anASTString_0_0);
    Symbol SMB_string = new_Symbol(L"string");
    // string. 
    Send PSend12666 = new_Send((Optr)VAR_anASTString_0_0, SMB_string, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12667 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)PSend12666);
    Array PThreadedCode12665 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTString_0_0, (Optr)&t_send0, (Optr)PSend12666, (Optr)&t_send1, (Optr)PSend12667, (Optr)&t_method_return);
    Method PMethod12663 = new_Method_with(PArray12664, empty_Array, empty_Array, PThreadedCode12665, 1, PSend12667);
    
    MethodClosure MC_SMB_visitString_ = new_MethodClosure((Method)PMethod12663, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitString_, MC_SMB_visitString_);
}


static void init_SMB_createReturningMethodBodyFor_() {
    Symbol SMB_createReturningMethodBodyFor_ = new_Symbol(L"createReturningMethodBodyFor:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Array PArray12669 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
    Variable VAR_callec_0_2 = new_Variable_named(L"callec", 0);
    Array PArray12670 = new_Array_with(2, (Optr)VAR_body_0_1, (Optr)VAR_callec_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12673 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend12676 = new_Send((Optr)VAR_aMethod_0_0, SMB_statements, 0);
    Assign PAssign12675 = new_Assign((Optr)VAR_body_0_1, (Optr)PSend12676);
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend12677 = new_Send((Optr)VAR_body_0_1, SMB_last, 0);
    Symbol SMB_isReturnExpression = new_Symbol(L"isReturnExpression");
    // isReturnExpression. 
    Send PSend12678 = new_Send((Optr)PSend12677, SMB_isReturnExpression, 0);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12682 = new_Send((Optr)ASTSelf_classReference, SMB_new, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend12683 = new_Send((Optr)VAR_body_0_1, SMB_add_, 1, (Optr)PSend12682);
    Array PThreadedCode12681 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_push_class_reference, (Optr)ASTSelf_classReference, (Optr)&t_send0, (Optr)PSend12682, (Optr)&t_send1, (Optr)PSend12683, (Optr)&t_block_return);
    Block PBlock12680 = new_Block_with(empty_Array, empty_Array, PThreadedCode12681, 1, PSend12683);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12686 = new_Send((Optr)VAR_body_0_1, SMB_size, 0);
    // last. 
    Send PSend12687 = new_Send((Optr)VAR_body_0_1, SMB_last, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend12688 = new_Send((Optr)PSend12687, SMB_expression, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12689 = new_Send((Optr)VAR_body_0_1, SMB_at_put_, 2, (Optr)PSend12686, (Optr)PSend12688);
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    // hasReturnExpression. 
    Send PSend12690 = new_Send((Optr)VAR_body_0_1, SMB_hasReturnExpression, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    // acceptOnCollection:. 
    Send PSend12694 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)VAR_body_0_1);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend12695 = new_Send((Optr)PSend12694, SMB_asArray, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12696 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12695);
    Array PThreadedCode12693 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send1, (Optr)PSend12694, (Optr)&t_send0, (Optr)PSend12695, (Optr)&t_send1, (Optr)PSend12696, (Optr)&t_block_return);
    Block PBlock12692 = new_Block_with(empty_Array, empty_Array, PThreadedCode12693, 1, PSend12696);
    // ifFalse:. 
    Send PSend12691 = new_Send((Optr)PSend12690, SMB_ifFalse_, 1, (Optr)PBlock12692);
    Array PThreadedCode12685 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send0, (Optr)PSend12686, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send0, (Optr)PSend12687, (Optr)&t_send0, (Optr)PSend12688, (Optr)&t_send2, (Optr)PSend12689, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send0, (Optr)PSend12690, (Optr)&t_send_ifFalse_, (Optr)PSend12691, (Optr)PBlock12692, (Optr)&t_block_return);
    Block PBlock12684 = new_Block_with(empty_Array, empty_Array, PThreadedCode12685, 2, PSend12689, PSend12691);
    // ifFalse:ifTrue:. 
    Send PSend12679 = new_Send((Optr)PSend12678, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock12680, (Optr)PBlock12684);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray12700 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_world = new_Symbol(L"world");
    // world. 
    Send PSend12702 = new_Send((Optr)self, SMB_world, 0);
    Symbol  SMB_Runtime = new_Symbol(L"Runtime");
    Symbol SMB_ensurePackageNamed_ = new_Symbol(L"ensurePackageNamed:");
    Constant SMB_Runtime_Const = new_Constant((Optr)SMB_Runtime);
    // ensurePackageNamed:. 
    Send PSend12703 = new_Send((Optr)PSend12702, SMB_ensurePackageNamed_, 1, (Optr)SMB_Runtime_Const);
    Symbol  SMB_Continue = new_Symbol(L"Continue");
    Symbol SMB_ensureClassReference_ = new_Symbol(L"ensureClassReference:");
    Constant SMB_Continue_Const = new_Constant((Optr)SMB_Continue);
    // ensureClassReference:. 
    Send PSend12704 = new_Send((Optr)PSend12703, SMB_ensureClassReference_, 1, (Optr)SMB_Continue_Const);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend12705 = new_Send((Optr)VAR__receiver__2_0, SMB_receiver_, 1, (Optr)PSend12704);
    Symbol  SMB_on_ = new_Symbol(L"on:");
    Symbol SMB_message_ = new_Symbol(L"message:");
    Constant SMB_on__Const = new_Constant((Optr)SMB_on_);
    // message:. 
    Send PSend12706 = new_Send((Optr)VAR__receiver__2_0, SMB_message_, 1, (Optr)SMB_on__Const);
    Symbol SMB_createCallecBodyFor_ = new_Symbol(L"createCallecBodyFor:");
    // createCallecBodyFor:. 
    Send PSend12707 = new_Send((Optr)self, SMB_createCallecBodyFor_, 1, (Optr)VAR_aMethod_0_0);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend12708 = new_Send((Optr)VAR__receiver__2_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend12707);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend12709 = new_Send((Optr)VAR__receiver__2_0, SMB_yourself, 0);
    Array PThreadedCode12701 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12702, (Optr)&t_push1, (Optr)SMB_Runtime, (Optr)&t_send1, (Optr)PSend12703, (Optr)&t_push1, (Optr)SMB_Continue, (Optr)&t_send1, (Optr)PSend12704, (Optr)&t_send1, (Optr)PSend12705, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)SMB_on_, (Optr)&t_send1, (Optr)PSend12706, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend12707, (Optr)&t_send2, (Optr)PSend12708, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend12709, (Optr)&t_method_return);
    Block PBlock12699 = new_Block_with(PArray12700, empty_Array, PThreadedCode12701, 4, PSend12705, PSend12706, PSend12708, PSend12709);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12710 = new_Send((Optr)PSend_classReference, SMB_new_, 1, (Optr)int_1_Const);
    // value:. 
    Send PSend12698 = new_Send((Optr)PBlock12699, SMB_value_, 1, (Optr)PSend12710);
    Assign PAssign12697 = new_Assign((Optr)VAR_callec_0_2, (Optr)PSend12698);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend12711 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_callec_0_2);
    Array PThreadedCode12674 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign12675, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend12676, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send0, (Optr)PSend12677, (Optr)&t_send0, (Optr)PSend12678, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend12679, (Optr)PBlock12680, (Optr)PBlock12684, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12697, (Optr)&t_push_closure, (Optr)PBlock12699, (Optr)&t_push_class_reference, (Optr)PSend_classReference, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12710, (Optr)&t_send1, (Optr)PSend12698, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_callec_0_2, (Optr)&t_send1, (Optr)PSend12711, (Optr)&t_method_return);
    Block PBlock12672 = new_Block_with(PArray12673, empty_Array, PThreadedCode12674, 4, PAssign12675, PSend12679, PAssign12697, PSend12711);
    // on:. 
    Send PSend12712 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12672);
    Array PThreadedCode12671 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12672, (Optr)&t_send1, (Optr)PSend12712, (Optr)&t_method_return);
    Method PMethod12668 = new_Method_with(PArray12669, PArray12670, empty_Array, PThreadedCode12671, 1, PSend12712);
    
    MethodClosure MC_SMB_createReturningMethodBodyFor_ = new_MethodClosure((Method)PMethod12668, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createReturningMethodBodyFor_, MC_SMB_createReturningMethodBodyFor_);
}


static void init_SMB_parse_() {
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray12714 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_parser = new_Symbol(L"parser");
    // parser. 
    Send PSend12716 = new_Send((Optr)self, SMB_parser, 0);
    Symbol SMB_parseMethod_ = new_Symbol(L"parseMethod:");
    // parseMethod:. 
    Send PSend12717 = new_Send((Optr)PSend12716, SMB_parseMethod_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode12715 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12716, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend12717, (Optr)&t_method_return);
    Method PMethod12713 = new_Method_with(PArray12714, empty_Array, empty_Array, PThreadedCode12715, 1, PSend12717);
    
    MethodClosure MC_SMB_parse_ = new_MethodClosure((Method)PMethod12713, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_parse_, MC_SMB_parse_);
}


static void init_SMB_popScope() {
    Symbol SMB_popScope = new_Symbol(L"popScope");
    Symbol SMB_parentScope = new_Symbol(L"parentScope");
    // parentScope. 
    Send PSend12721 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_parentScope, 0);
    Assign PAssign12720 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)PSend12721);
    Array PThreadedCode12719 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign12720, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send0, (Optr)PSend12721, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12718 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12719, 2, PAssign12720, self);
    
    MethodClosure MC_SMB_popScope = new_MethodClosure((Method)PMethod12718, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_popScope, MC_SMB_popScope);
}


static void init_SMB_selectorFor_() {
    Symbol SMB_selectorFor_ = new_Symbol(L"selectorFor:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Array PArray12723 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend12725 = new_Send((Optr)VAR_aMethod_0_0, SMB_message, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12726 = new_Send((Optr)PSend12725, SMB_selector, 0);
    Array PThreadedCode12724 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend12725, (Optr)&t_send0, (Optr)PSend12726, (Optr)&t_method_return);
    Method PMethod12722 = new_Method_with(PArray12723, empty_Array, empty_Array, PThreadedCode12724, 1, PSend12726);
    
    MethodClosure MC_SMB_selectorFor_ = new_MethodClosure((Method)PMethod12722, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_selectorFor_, MC_SMB_selectorFor_);
}


static void init_SMB_currentCallecVariable() {
    Symbol SMB_currentCallecVariable = new_Symbol(L"currentCallecVariable");
    Array PThreadedCode12728 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_currentCallecVariable, (Optr)&t_method_return);
    Method PMethod12727 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12728, 1, slot_Smalltalk_Compiler_Compiler_currentCallecVariable);
    
    MethodClosure MC_SMB_currentCallecVariable = new_MethodClosure((Method)PMethod12727, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_currentCallecVariable, MC_SMB_currentCallecVariable);
}


static void init_SMB_createMethod_with_() {
    Symbol SMB_createMethod_with_ = new_Symbol(L"createMethod:with:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
    Array PArray12730 = new_Array_with(2, (Optr)VAR_aMethod_0_0, (Optr)VAR_body_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12733 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol  SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_annotatedWith_ = new_Symbol(L"annotatedWith:");
    Constant SMB_pPrimitive_plugin__Const = new_Constant((Optr)SMB_pPrimitive_plugin_);
    // annotatedWith:. 
    Send PSend12735 = new_Send((Optr)VAR_aMethod_0_0, SMB_annotatedWith_, 1, (Optr)SMB_pPrimitive_plugin__Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_withAll_ = new_Symbol(L"withAll:");
    // withAll:. 
    Send PSend12739 = new_Send((Optr)PNativeMethod_classReference, SMB_withAll_, 1, (Optr)VAR_body_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12740 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12739);
    Array PThreadedCode12738 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PNativeMethod_classReference, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send1, (Optr)PSend12739, (Optr)&t_send1, (Optr)PSend12740, (Optr)&t_block_return);
    Block PBlock12737 = new_Block_with(empty_Array, empty_Array, PThreadedCode12738, 1, PSend12740);
    // ifTrue:. 
    Send PSend12736 = new_Send((Optr)PSend12735, SMB_ifTrue_, 1, (Optr)PBlock12737);
    Symbol  SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Constant SMB_pPrimitive_plugin_code__Const = new_Constant((Optr)SMB_pPrimitive_plugin_code_);
    // annotatedWith:. 
    Send PSend12741 = new_Send((Optr)VAR_aMethod_0_0, SMB_annotatedWith_, 1, (Optr)SMB_pPrimitive_plugin_code__Const);
    // withAll:. 
    Send PSend12745 = new_Send((Optr)PNativeMethod_classReference, SMB_withAll_, 1, (Optr)VAR_body_0_1);
    // escape:. 
    Send PSend12746 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12745);
    Array PThreadedCode12744 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PNativeMethod_classReference, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send1, (Optr)PSend12745, (Optr)&t_send1, (Optr)PSend12746, (Optr)&t_block_return);
    Block PBlock12743 = new_Block_with(empty_Array, empty_Array, PThreadedCode12744, 1, PSend12746);
    // ifTrue:. 
    Send PSend12742 = new_Send((Optr)PSend12741, SMB_ifTrue_, 1, (Optr)PBlock12743);
    Symbol  SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Constant SMB_pinocchioReflective__Const = new_Constant((Optr)SMB_pinocchioReflective_);
    // annotatedWith:. 
    Send PSend12747 = new_Send((Optr)VAR_aMethod_0_0, SMB_annotatedWith_, 1, (Optr)SMB_pinocchioReflective__Const);
    // withAll:. 
    Send PSend12751 = new_Send((Optr)PReflectionMethod_classReference, SMB_withAll_, 1, (Optr)VAR_body_0_1);
    // escape:. 
    Send PSend12752 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12751);
    Array PThreadedCode12750 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PReflectionMethod_classReference, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send1, (Optr)PSend12751, (Optr)&t_send1, (Optr)PSend12752, (Optr)&t_block_return);
    Block PBlock12749 = new_Block_with(empty_Array, empty_Array, PThreadedCode12750, 1, PSend12752);
    // ifTrue:. 
    Send PSend12748 = new_Send((Optr)PSend12747, SMB_ifTrue_, 1, (Optr)PBlock12749);
    // withAll:. 
    Send PSend12753 = new_Send((Optr)PMethod_classReference, SMB_withAll_, 1, (Optr)VAR_body_0_1);
    Array PThreadedCode12734 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_push1, (Optr)SMB_pPrimitive_plugin_, (Optr)&t_send1, (Optr)PSend12735, (Optr)&t_send_ifTrue_, (Optr)PSend12736, (Optr)PBlock12737, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_push1, (Optr)SMB_pPrimitive_plugin_code_, (Optr)&t_send1, (Optr)PSend12741, (Optr)&t_send_ifTrue_, (Optr)PSend12742, (Optr)PBlock12743, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_push1, (Optr)SMB_pinocchioReflective_, (Optr)&t_send1, (Optr)PSend12747, (Optr)&t_send_ifTrue_, (Optr)PSend12748, (Optr)PBlock12749, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PMethod_classReference, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send1, (Optr)PSend12753, (Optr)&t_method_return);
    Block PBlock12732 = new_Block_with(PArray12733, empty_Array, PThreadedCode12734, 4, PSend12736, PSend12742, PSend12748, PSend12753);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12754 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12732);
    Array PThreadedCode12731 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12732, (Optr)&t_send1, (Optr)PSend12754, (Optr)&t_method_return);
    Method PMethod12729 = new_Method_with(PArray12730, empty_Array, empty_Array, PThreadedCode12731, 1, PSend12754);
    
    MethodClosure MC_SMB_createMethod_with_ = new_MethodClosure((Method)PMethod12729, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createMethod_with_, MC_SMB_createMethod_with_);
}


static void init_SMB_visitMethod_() {
    Symbol SMB_visitMethod_ = new_Symbol(L"visitMethod:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Array PArray12756 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
    Variable VAR_method_0_2 = new_Variable_named(L"method", 0);
    Variable VAR_selector_0_3 = new_Variable_named(L"selector", 0);
    Variable VAR_methodClosure_0_4 = new_Variable_named(L"methodClosure", 0);
    Array PArray12757 = new_Array_with(4, (Optr)VAR_body_0_1, (Optr)VAR_method_0_2, (Optr)VAR_selector_0_3, (Optr)VAR_methodClosure_0_4);
    Assign PAssign12759 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_currentMethod, (Optr)VAR_aMethod_0_0);
    Symbol SMB_pushScope = new_Symbol(L"pushScope");
    // pushScope. 
    Send PSend12760 = new_Send((Optr)self, SMB_pushScope, 0);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend12761 = new_Send((Optr)VAR_aMethod_0_0, SMB_message, 0);
    Symbol SMB_parameters = new_Symbol(L"parameters");
    // parameters. 
    Send PSend12762 = new_Send((Optr)PSend12761, SMB_parameters, 0);
    Symbol SMB_declareAll_ = new_Symbol(L"declareAll:");
    // declareAll:. 
    Send PSend12763 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_declareAll_, 1, (Optr)PSend12762);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend12764 = new_Send((Optr)VAR_aMethod_0_0, SMB_temporaries, 0);
    // declareAll:. 
    Send PSend12765 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_declareAll_, 1, (Optr)PSend12764);
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    // hasReturnExpression. 
    Send PSend12766 = new_Send((Optr)VAR_aMethod_0_0, SMB_hasReturnExpression, 0);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    Symbol SMB_createNonReturningMethodBodyFor_ = new_Symbol(L"createNonReturningMethodBodyFor:");
    // createNonReturningMethodBodyFor:. 
    Send PSend12771 = new_Send((Optr)self, SMB_createNonReturningMethodBodyFor_, 1, (Optr)VAR_aMethod_0_0);
    Assign PAssign12770 = new_Assign((Optr)VAR_body_0_1, (Optr)PSend12771);
    Array PThreadedCode12769 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign12770, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend12771, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock12768 = new_Block_with(empty_Array, empty_Array, PThreadedCode12769, 1, PAssign12770);
    Symbol SMB_createReturningMethodBodyFor_ = new_Symbol(L"createReturningMethodBodyFor:");
    // createReturningMethodBodyFor:. 
    Send PSend12775 = new_Send((Optr)self, SMB_createReturningMethodBodyFor_, 1, (Optr)VAR_aMethod_0_0);
    Assign PAssign12774 = new_Assign((Optr)VAR_body_0_1, (Optr)PSend12775);
    Array PThreadedCode12773 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign12774, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend12775, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock12772 = new_Block_with(empty_Array, empty_Array, PThreadedCode12773, 1, PAssign12774);
    // ifFalse:ifTrue:. 
    Send PSend12767 = new_Send((Optr)PSend12766, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock12768, (Optr)PBlock12772);
    Symbol SMB_selectorFor_ = new_Symbol(L"selectorFor:");
    // selectorFor:. 
    Send PSend12777 = new_Send((Optr)self, SMB_selectorFor_, 1, (Optr)VAR_aMethod_0_0);
    Assign PAssign12776 = new_Assign((Optr)VAR_selector_0_3, (Optr)PSend12777);
    Symbol SMB_createMethod_with_ = new_Symbol(L"createMethod:with:");
    // createMethod:with:. 
    Send PSend12779 = new_Send((Optr)self, SMB_createMethod_with_, 2, (Optr)VAR_aMethod_0_0, (Optr)VAR_body_0_1);
    Assign PAssign12778 = new_Assign((Optr)VAR_method_0_2, (Optr)PSend12779);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12781 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    // message. 
    Send PSend12783 = new_Send((Optr)VAR_aMethod_0_0, SMB_message, 0);
    // parameters. 
    Send PSend12784 = new_Send((Optr)PSend12783, SMB_parameters, 0);
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    // acceptOnCollection:. 
    Send PSend12785 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend12784);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend12786 = new_Send((Optr)PSend12785, SMB_asArray, 0);
    // temporaries. 
    Send PSend12787 = new_Send((Optr)VAR_aMethod_0_0, SMB_temporaries, 0);
    // acceptOnCollection:. 
    Send PSend12788 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend12787);
    // asArray. 
    Send PSend12789 = new_Send((Optr)PSend12788, SMB_asArray, 0);
    Symbol SMB_params_locals_ = new_Symbol(L"params:locals:");
    // params:locals:. 
    Send PSend12790 = new_Send((Optr)VAR__receiver__1_0, SMB_params_locals_, 2, (Optr)PSend12786, (Optr)PSend12789);
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend12791 = new_Send((Optr)VAR_aMethod_0_0, SMB_annotations, 0);
    // acceptOnCollection:. 
    Send PSend12792 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend12791);
    // asArray. 
    Send PSend12793 = new_Send((Optr)PSend12792, SMB_asArray, 0);
    Symbol SMB_annotations_ = new_Symbol(L"annotations:");
    // annotations:. 
    Send PSend12794 = new_Send((Optr)VAR__receiver__1_0, SMB_annotations_, 1, (Optr)PSend12793);
    Symbol SMB_createPInfo = new_Symbol(L"createPInfo");
    // createPInfo. 
    Send PSend12795 = new_Send((Optr)self, SMB_createPInfo, 0);
    Symbol SMB_info_ = new_Symbol(L"info:");
    // info:. 
    Send PSend12796 = new_Send((Optr)VAR__receiver__1_0, SMB_info_, 1, (Optr)PSend12795);
    Array PThreadedCode12782 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend12783, (Optr)&t_send0, (Optr)PSend12784, (Optr)&t_send1, (Optr)PSend12785, (Optr)&t_send0, (Optr)PSend12786, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend12787, (Optr)&t_send1, (Optr)PSend12788, (Optr)&t_send0, (Optr)PSend12789, (Optr)&t_send2, (Optr)PSend12790, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend12791, (Optr)&t_send1, (Optr)PSend12792, (Optr)&t_send0, (Optr)PSend12793, (Optr)&t_send1, (Optr)PSend12794, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12795, (Optr)&t_send1, (Optr)PSend12796, (Optr)&t_method_return);
    Block PBlock12780 = new_Block_with(PArray12781, empty_Array, PThreadedCode12782, 3, PSend12790, PSend12794, PSend12796);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12797 = new_Send((Optr)PBlock12780, SMB_value_, 1, (Optr)VAR_method_0_2);
    Array PArray12801 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_code_ = new_Symbol(L"code:");
    // code:. 
    Send PSend12803 = new_Send((Optr)VAR__receiver__1_0, SMB_code_, 1, (Optr)VAR_method_0_2);
    Symbol SMB_host_ = new_Symbol(L"host:");
    // host:. 
    Send PSend12804 = new_Send((Optr)VAR__receiver__1_0, SMB_host_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend12805 = new_Send((Optr)VAR__receiver__1_0, SMB_selector_, 1, (Optr)VAR_selector_0_3);
    Array PThreadedCode12802 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send1, (Optr)PSend12803, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send1, (Optr)PSend12804, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_selector_0_3, (Optr)&t_send1, (Optr)PSend12805, (Optr)&t_method_return);
    Block PBlock12800 = new_Block_with(PArray12801, empty_Array, PThreadedCode12802, 3, PSend12803, PSend12804, PSend12805);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12806 = new_Send((Optr)PMethodClosure_classReference, SMB_new, 0);
    // value:. 
    Send PSend12799 = new_Send((Optr)PBlock12800, SMB_value_, 1, (Optr)PSend12806);
    Assign PAssign12798 = new_Assign((Optr)VAR_methodClosure_0_4, (Optr)PSend12799);
    Symbol SMB_popScope = new_Symbol(L"popScope");
    // popScope. 
    Send PSend12807 = new_Send((Optr)self, SMB_popScope, 0);
    Symbol SMB_compileThreadedMethod_ = new_Symbol(L"compileThreadedMethod:");
    // compileThreadedMethod:. 
    Send PSend12808 = new_Send((Optr)self, SMB_compileThreadedMethod_, 1, (Optr)VAR_method_0_2);
    Array PThreadedCode12758 = instantiate_Array_with(ThreadedCode_Class, 0, 91, (Optr)&t_push1, (Optr)PAssign12759, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12760, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend12761, (Optr)&t_send0, (Optr)PSend12762, (Optr)&t_send1, (Optr)PSend12763, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend12764, (Optr)&t_send1, (Optr)PSend12765, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend12766, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend12767, (Optr)PBlock12768, (Optr)PBlock12772, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12776, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend12777, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12778, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send2, (Optr)PSend12779, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock12780, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send1, (Optr)PSend12797, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12798, (Optr)&t_push_closure, (Optr)PBlock12800, (Optr)&t_push_class_reference, (Optr)PMethodClosure_classReference, (Optr)&t_send0, (Optr)PSend12806, (Optr)&t_send1, (Optr)PSend12799, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12807, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send1, (Optr)PSend12808, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_methodClosure_0_4, (Optr)&t_method_return);
    Method PMethod12755 = new_Method_with(PArray12756, PArray12757, empty_Array, PThreadedCode12758, 12, PAssign12759, PSend12760, PSend12763, PSend12765, PSend12767, PAssign12776, PAssign12778, PSend12797, PAssign12798, PSend12807, PSend12808, VAR_methodClosure_0_4);
    
    MethodClosure MC_SMB_visitMethod_ = new_MethodClosure((Method)PMethod12755, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitMethod_, MC_SMB_visitMethod_);
}


static void init_SMB_createNonReturningMethodBodyFor_() {
    Symbol SMB_createNonReturningMethodBodyFor_ = new_Symbol(L"createNonReturningMethodBodyFor:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Array PArray12810 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Variable VAR_statements_0_1 = new_Variable_named(L"statements", 0);
    Array PArray12811 = new_Array_with(1, (Optr)VAR_statements_0_1);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend12814 = new_Send((Optr)VAR_aMethod_0_0, SMB_statements, 0);
    Assign PAssign12813 = new_Assign((Optr)VAR_statements_0_1, (Optr)PSend12814);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12815 = new_Send((Optr)ASTSelf_classReference, SMB_new, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend12816 = new_Send((Optr)VAR_statements_0_1, SMB_add_, 1, (Optr)PSend12815);
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    // acceptOnCollection:. 
    Send PSend12817 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)VAR_statements_0_1);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend12818 = new_Send((Optr)PSend12817, SMB_asArray, 0);
    Array PThreadedCode12812 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign12813, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend12814, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_statements_0_1, (Optr)&t_push_class_reference, (Optr)ASTSelf_classReference, (Optr)&t_send0, (Optr)PSend12815, (Optr)&t_send1, (Optr)PSend12816, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_statements_0_1, (Optr)&t_send1, (Optr)PSend12817, (Optr)&t_send0, (Optr)PSend12818, (Optr)&t_method_return);
    Method PMethod12809 = new_Method_with(PArray12810, PArray12811, empty_Array, PThreadedCode12812, 3, PAssign12813, PSend12816, PSend12818);
    
    MethodClosure MC_SMB_createNonReturningMethodBodyFor_ = new_MethodClosure((Method)PMethod12809, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createNonReturningMethodBodyFor_, MC_SMB_createNonReturningMethodBodyFor_);
}


static void init_SMB_visitSymbol_() {
    Symbol SMB_visitSymbol_ = new_Symbol(L"visitSymbol:");
    Variable VAR_anASTSymbol_0_0 = new_Variable_named(L"anASTSymbol", 0);
    Array PArray12820 = new_Array_with(1, (Optr)VAR_anASTSymbol_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend12822 = new_Send((Optr)VAR_anASTSymbol_0_0, SMB_asSymbol, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12823 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)PSend12822);
    Array PThreadedCode12821 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTSymbol_0_0, (Optr)&t_send0, (Optr)PSend12822, (Optr)&t_send1, (Optr)PSend12823, (Optr)&t_method_return);
    Method PMethod12819 = new_Method_with(PArray12820, empty_Array, empty_Array, PThreadedCode12821, 1, PSend12823);
    
    MethodClosure MC_SMB_visitSymbol_ = new_MethodClosure((Method)PMethod12819, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitSymbol_, MC_SMB_visitSymbol_);
}


static void init_SMB_createSendTo_() {
    Symbol SMB_createSendTo_ = new_Symbol(L"createSendTo:");
    Variable VAR_receiver_0_0 = new_Variable_named(L"receiver", 0);
    Array PArray12825 = new_Array_with(1, (Optr)VAR_receiver_0_0);
    Symbol SMB_createSendTo_sized_ = new_Symbol(L"createSendTo:sized:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // createSendTo:sized:. 
    Send PSend12827 = new_Send((Optr)self, SMB_createSendTo_sized_, 2, (Optr)VAR_receiver_0_0, (Optr)int_0_Const);
    Array PThreadedCode12826 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend12827, (Optr)&t_method_return);
    Method PMethod12824 = new_Method_with(PArray12825, empty_Array, empty_Array, PThreadedCode12826, 1, PSend12827);
    
    MethodClosure MC_SMB_createSendTo_ = new_MethodClosure((Method)PMethod12824, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createSendTo_, MC_SMB_createSendTo_);
}


static void init_SMB_createCallecBodyFor_() {
    Symbol SMB_createCallecBodyFor_ = new_Symbol(L"createCallecBodyFor:");
    Variable VAR_anASTMethod_0_0 = new_Variable_named(L"anASTMethod", 0);
    Array PArray12829 = new_Array_with(1, (Optr)VAR_anASTMethod_0_0);
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
    Variable VAR_statements_0_2 = new_Variable_named(L"statements", 0);
    Variable VAR_statement_0_3 = new_Variable_named(L"statement", 0);
    Array PArray12830 = new_Array_with(3, (Optr)VAR_body_0_1, (Optr)VAR_statements_0_2, (Optr)VAR_statement_0_3);
    Symbol SMB_pushScope = new_Symbol(L"pushScope");
    // pushScope. 
    Send PSend12832 = new_Send((Optr)self, SMB_pushScope, 0);
    Symbol  SMB___return__ = new_Symbol(L"_return_");
    Symbol SMB_depth = new_Symbol(L"depth");
    // depth. 
    Send PSend12833 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_depth, 0);
    Symbol SMB_named_at_ = new_Symbol(L"named:at:");
    Constant SMB___return___Const = new_Constant((Optr)SMB___return__);
    // named:at:. 
    Send PSend12834 = new_Send((Optr)PVariable_classReference, SMB_named_at_, 2, (Optr)SMB___return___Const, (Optr)PSend12833);
    Symbol SMB_currentCallecVariable_ = new_Symbol(L"currentCallecVariable:");
    // currentCallecVariable:. 
    Send PSend12835 = new_Send((Optr)self, SMB_currentCallecVariable_, 1, (Optr)PSend12834);
    Symbol SMB_createBlock_ = new_Symbol(L"createBlock:");
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend12839 = new_Send((Optr)VAR_anASTMethod_0_0, SMB_statements, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12838 = new_Send((Optr)PSend12839, SMB_size, 0);
    // createBlock:. 
    Send PSend12837 = new_Send((Optr)self, SMB_createBlock_, 1, (Optr)PSend12838);
    Assign PAssign12836 = new_Assign((Optr)VAR_body_0_1, (Optr)PSend12837);
    Symbol SMB_currentCallecVariable = new_Symbol(L"currentCallecVariable");
    // currentCallecVariable. 
    Send PSend12840 = new_Send((Optr)self, SMB_currentCallecVariable, 0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend12841 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)PSend12840);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12842 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Symbol SMB_params_locals_ = new_Symbol(L"params:locals:");
    // params:locals:. 
    Send PSend12843 = new_Send((Optr)VAR_body_0_1, SMB_params_locals_, 2, (Optr)PSend12841, (Optr)PSend12842);
    // statements. 
    Send PSend12845 = new_Send((Optr)VAR_anASTMethod_0_0, SMB_statements, 0);
    Assign PAssign12844 = new_Assign((Optr)VAR_statements_0_2, (Optr)PSend12845);
    // size. 
    Send PSend12846 = new_Send((Optr)VAR_statements_0_2, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray12848 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12852 = new_Send((Optr)VAR_statements_0_2, SMB_at_, 1, (Optr)VAR_index_1_0);
    // visit:. 
    Send PSend12851 = new_Send((Optr)self, SMB_visit_, 1, (Optr)PSend12852);
    Assign PAssign12850 = new_Assign((Optr)VAR_statement_0_3, (Optr)PSend12851);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12853 = new_Send((Optr)VAR_body_0_1, SMB_at_put_, 2, (Optr)VAR_index_1_0, (Optr)VAR_statement_0_3);
    Array PThreadedCode12849 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign12850, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_statements_0_2, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend12852, (Optr)&t_send1, (Optr)PSend12851, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_push_variable, (Optr)VAR_statement_0_3, (Optr)&t_send2, (Optr)PSend12853, (Optr)&t_method_return);
    Block PBlock12847 = new_Block_with(PArray12848, empty_Array, PThreadedCode12849, 2, PAssign12850, PSend12853);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend12854 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend12846, (Optr)PBlock12847);
    Symbol SMB_popScope = new_Symbol(L"popScope");
    // popScope. 
    Send PSend12855 = new_Send((Optr)self, SMB_popScope, 0);
    Array PThreadedCode12831 = instantiate_Array_with(ThreadedCode_Class, 0, 73, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12832, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PVariable_classReference, (Optr)&t_push1, (Optr)SMB___return__, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send0, (Optr)PSend12833, (Optr)&t_send2, (Optr)PSend12834, (Optr)&t_send1, (Optr)PSend12835, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12836, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anASTMethod_0_0, (Optr)&t_send0, (Optr)PSend12839, (Optr)&t_send0, (Optr)PSend12838, (Optr)&t_send1, (Optr)PSend12837, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12840, (Optr)&t_send1, (Optr)PSend12841, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend12842, (Optr)&t_send2, (Optr)PSend12843, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12844, (Optr)&t_push_variable, (Optr)VAR_anASTMethod_0_0, (Optr)&t_send0, (Optr)PSend12845, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_statements_0_2, (Optr)&t_send0, (Optr)PSend12846, (Optr)&t_push_closure, (Optr)PBlock12847, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend12854, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12855, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_method_return);
    Method PMethod12828 = new_Method_with(PArray12829, PArray12830, empty_Array, PThreadedCode12831, 8, PSend12832, PSend12835, PAssign12836, PSend12843, PAssign12844, PSend12854, PSend12855, VAR_body_0_1);
    
    MethodClosure MC_SMB_createCallecBodyFor_ = new_MethodClosure((Method)PMethod12828, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createCallecBodyFor_, MC_SMB_createCallecBodyFor_);
}


static void init_SMB_currentBlock_() {
    Symbol SMB_currentBlock_ = new_Symbol(L"currentBlock:");
    Variable VAR_aPinocchioBlock_0_0 = new_Variable_named(L"aPinocchioBlock", 0);
    Array PArray12857 = new_Array_with(1, (Optr)VAR_aPinocchioBlock_0_0);
    Assign PAssign12859 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_currentBlock, (Optr)VAR_aPinocchioBlock_0_0);
    Array PThreadedCode12858 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign12859, (Optr)&t_push_variable, (Optr)VAR_aPinocchioBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12856 = new_Method_with(PArray12857, empty_Array, empty_Array, PThreadedCode12858, 2, PAssign12859, self);
    
    MethodClosure MC_SMB_currentBlock_ = new_MethodClosure((Method)PMethod12856, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_currentBlock_, MC_SMB_currentBlock_);
}


static void init_SMB_visitCharacter_() {
    Symbol SMB_visitCharacter_ = new_Symbol(L"visitCharacter:");
    Variable VAR_anASTCharacter_0_0 = new_Variable_named(L"anASTCharacter", 0);
    Array PArray12861 = new_Array_with(1, (Optr)VAR_anASTCharacter_0_0);
    Symbol SMB_char = new_Symbol(L"char");
    // char. 
    Send PSend12863 = new_Send((Optr)VAR_anASTCharacter_0_0, SMB_char, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12864 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)PSend12863);
    Array PThreadedCode12862 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTCharacter_0_0, (Optr)&t_send0, (Optr)PSend12863, (Optr)&t_send1, (Optr)PSend12864, (Optr)&t_method_return);
    Method PMethod12860 = new_Method_with(PArray12861, empty_Array, empty_Array, PThreadedCode12862, 1, PSend12864);
    
    MethodClosure MC_SMB_visitCharacter_ = new_MethodClosure((Method)PMethod12860, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitCharacter_, MC_SMB_visitCharacter_);
}


static void init_SMB_visitSelf_() {
    Symbol SMB_visitSelf_ = new_Symbol(L"visitSelf:");
    Variable VAR_aSelf_0_0 = new_Variable_named(L"aSelf", 0);
    Array PArray12866 = new_Array_with(1, (Optr)VAR_aSelf_0_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend12868 = new_Send((Optr)PSelf_classReference, SMB_instance, 0);
    Array PThreadedCode12867 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PSelf_classReference, (Optr)&t_send0, (Optr)PSend12868, (Optr)&t_method_return);
    Method PMethod12865 = new_Method_with(PArray12866, empty_Array, empty_Array, PThreadedCode12867, 1, PSend12868);
    
    MethodClosure MC_SMB_visitSelf_ = new_MethodClosure((Method)PMethod12865, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitSelf_, MC_SMB_visitSelf_);
}


static void init_SMB_unwrapConstant_() {
    Symbol SMB_unwrapConstant_ = new_Symbol(L"unwrapConstant:");
    Variable VAR_aConstant_0_0 = new_Variable_named(L"aConstant", 0);
    Array PArray12870 = new_Array_with(1, (Optr)VAR_aConstant_0_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend12872 = new_Send((Optr)VAR_aConstant_0_0, SMB_isKindOf_, 1, (Optr)PConstant_classReference);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_12876 = new_String(L"Constant expected");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_12876_Const = new_Constant((Optr)string_12876);
    // error:. 
    Send PSend12877 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_12876_Const);
    Array PThreadedCode12875 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_12876, (Optr)&t_send1, (Optr)PSend12877, (Optr)&t_block_return);
    Block PBlock12874 = new_Block_with(empty_Array, empty_Array, PThreadedCode12875, 1, PSend12877);
    // ifFalse:. 
    Send PSend12873 = new_Send((Optr)PSend12872, SMB_ifFalse_, 1, (Optr)PBlock12874);
    Symbol SMB_constant = new_Symbol(L"constant");
    // constant. 
    Send PSend12878 = new_Send((Optr)VAR_aConstant_0_0, SMB_constant, 0);
    Array PThreadedCode12871 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_aConstant_0_0, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_send1, (Optr)PSend12872, (Optr)&t_send_ifFalse_, (Optr)PSend12873, (Optr)PBlock12874, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aConstant_0_0, (Optr)&t_send0, (Optr)PSend12878, (Optr)&t_method_return);
    Method PMethod12869 = new_Method_with(PArray12870, empty_Array, empty_Array, PThreadedCode12871, 2, PSend12873, PSend12878);
    
    MethodClosure MC_SMB_unwrapConstant_ = new_MethodClosure((Method)PMethod12869, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_unwrapConstant_, MC_SMB_unwrapConstant_);
}


static void init_SMB_parser() {
    Symbol SMB_parser = new_Symbol(L"parser");
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend12881 = new_Send((Optr)PSmalltalkParser_classReference, SMB_instance, 0);
    Array PThreadedCode12880 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PSmalltalkParser_classReference, (Optr)&t_send0, (Optr)PSend12881, (Optr)&t_method_return);
    Method PMethod12879 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12880, 1, PSend12881);
    
    MethodClosure MC_SMB_parser = new_MethodClosure((Method)PMethod12879, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_parser, MC_SMB_parser);
}


static void init_SMB_visitMessageCascadeExpression_() {
    Symbol SMB_visitMessageCascadeExpression_ = new_Symbol(L"visitMessageCascadeExpression:");
    Variable VAR_anASTMessageCascadeExpression_0_0 = new_Variable_named(L"anASTMessageCascadeExpression", 0);
    Array PArray12883 = new_Array_with(1, (Optr)VAR_anASTMessageCascadeExpression_0_0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_block_0_2 = new_Variable_named(L"block", 0);
    Variable VAR_send_0_3 = new_Variable_named(L"send", 0);
    Array PArray12884 = new_Array_with(3, (Optr)VAR_receiver_0_1, (Optr)VAR_block_0_2, (Optr)VAR_send_0_3);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12888 = new_Send((Optr)ASTVariable_classReference, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    Symbol  SMB___receiver__ = new_Symbol(L"_receiver_");
    Constant SMB___receiver___Const = new_Constant((Optr)SMB___receiver__);
    // name:. 
    Send PSend12887 = new_Send((Optr)PSend12888, SMB_name_, 1, (Optr)SMB___receiver___Const);
    Assign PAssign12886 = new_Assign((Optr)VAR_receiver_0_1, (Optr)PSend12887);
    Symbol SMB_cascades = new_Symbol(L"cascades");
    // cascades. 
    Send PSend12889 = new_Send((Optr)VAR_anASTMessageCascadeExpression_0_0, SMB_cascades, 0);
    Variable VAR_message_1_0 = new_Variable_named(L"message", 1);
    Array PArray12891 = new_Array_with(1, (Optr)VAR_message_1_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend12893 = new_Send((Optr)VAR_message_1_0, SMB_receiver_, 1, (Optr)VAR_receiver_0_1);
    Array PThreadedCode12892 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_message_1_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend12893, (Optr)&t_method_return);
    Block PBlock12890 = new_Block_with(PArray12891, empty_Array, PThreadedCode12892, 1, PSend12893);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend12894 = new_Send((Optr)PSend12889, SMB_do_, 1, (Optr)PBlock12890);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12898 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend12900 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_receiver_0_1);
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    // parameters:. 
    Send PSend12901 = new_Send((Optr)VAR__receiver__1_0, SMB_parameters_, 1, (Optr)PSend12900);
    // cascades. 
    Send PSend12902 = new_Send((Optr)VAR_anASTMessageCascadeExpression_0_0, SMB_cascades, 0);
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    // statements:. 
    Send PSend12903 = new_Send((Optr)VAR__receiver__1_0, SMB_statements_, 1, (Optr)PSend12902);
    Array PThreadedCode12899 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend12900, (Optr)&t_send1, (Optr)PSend12901, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anASTMessageCascadeExpression_0_0, (Optr)&t_send0, (Optr)PSend12902, (Optr)&t_send1, (Optr)PSend12903, (Optr)&t_method_return);
    Block PBlock12897 = new_Block_with(PArray12898, empty_Array, PThreadedCode12899, 2, PSend12901, PSend12903);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // new. 
    Send PSend12904 = new_Send((Optr)ASTBlock_classReference, SMB_new, 0);
    // value:. 
    Send PSend12896 = new_Send((Optr)PBlock12897, SMB_value_, 1, (Optr)PSend12904);
    Assign PAssign12895 = new_Assign((Optr)VAR_block_0_2, (Optr)PSend12896);
    Array PArray12908 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    // receiver:. 
    Send PSend12910 = new_Send((Optr)VAR__receiver__1_0, SMB_receiver_, 1, (Optr)VAR_block_0_2);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend12911 = new_Send((Optr)VAR_anASTMessageCascadeExpression_0_0, SMB_receiver, 0);
    // with:. 
    Send PSend12912 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)PSend12911);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend12913 = new_Send((Optr)VAR__receiver__1_0, SMB_arguments_, 1, (Optr)PSend12912);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Constant SMB_value__Const = new_Constant((Optr)SMB_value_);
    // selector:. 
    Send PSend12914 = new_Send((Optr)VAR__receiver__1_0, SMB_selector_, 1, (Optr)SMB_value__Const);
    Array PThreadedCode12909 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_block_0_2, (Optr)&t_send1, (Optr)PSend12910, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTMessageCascadeExpression_0_0, (Optr)&t_send0, (Optr)PSend12911, (Optr)&t_send1, (Optr)PSend12912, (Optr)&t_send1, (Optr)PSend12913, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_value_, (Optr)&t_send1, (Optr)PSend12914, (Optr)&t_method_return);
    Block PBlock12907 = new_Block_with(PArray12908, empty_Array, PThreadedCode12909, 3, PSend12910, PSend12913, PSend12914);
    // new. 
    Send PSend12915 = new_Send((Optr)ASTMessageExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend12906 = new_Send((Optr)PBlock12907, SMB_value_, 1, (Optr)PSend12915);
    Assign PAssign12905 = new_Assign((Optr)VAR_send_0_3, (Optr)PSend12906);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend12916 = new_Send((Optr)self, SMB_visit_, 1, (Optr)VAR_send_0_3);
    Array PThreadedCode12885 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign12886, (Optr)&t_push_class_reference, (Optr)ASTVariable_classReference, (Optr)&t_send0, (Optr)PSend12888, (Optr)&t_push1, (Optr)SMB___receiver__, (Optr)&t_send1, (Optr)PSend12887, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_anASTMessageCascadeExpression_0_0, (Optr)&t_send0, (Optr)PSend12889, (Optr)&t_push_closure, (Optr)PBlock12890, (Optr)&t_send1, (Optr)PSend12894, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12895, (Optr)&t_push_closure, (Optr)PBlock12897, (Optr)&t_push_class_reference, (Optr)ASTBlock_classReference, (Optr)&t_send0, (Optr)PSend12904, (Optr)&t_send1, (Optr)PSend12896, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12905, (Optr)&t_push_closure, (Optr)PBlock12907, (Optr)&t_push_class_reference, (Optr)ASTMessageExpression_classReference, (Optr)&t_send0, (Optr)PSend12915, (Optr)&t_send1, (Optr)PSend12906, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_send_0_3, (Optr)&t_send1, (Optr)PSend12916, (Optr)&t_method_return);
    Method PMethod12882 = new_Method_with(PArray12883, PArray12884, empty_Array, PThreadedCode12885, 5, PAssign12886, PSend12894, PAssign12895, PAssign12905, PSend12916);
    
    MethodClosure MC_SMB_visitMessageCascadeExpression_ = new_MethodClosure((Method)PMethod12882, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitMessageCascadeExpression_, MC_SMB_visitMessageCascadeExpression_);
}


static void init_SMB_visitUnaryExpression_() {
    Symbol SMB_visitUnaryExpression_ = new_Symbol(L"visitUnaryExpression:");
    Variable VAR_anASTUnaryExpression_0_0 = new_Variable_named(L"anASTUnaryExpression", 0);
    Array PArray12918 = new_Array_with(1, (Optr)VAR_anASTUnaryExpression_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12921 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12923 = new_Send((Optr)VAR_anASTUnaryExpression_0_0, SMB_selector, 0);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend12924 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)PSend12923);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // new:. 
    Send PSend12925 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_0_Const);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend12926 = new_Send((Optr)VAR__receiver__1_0, SMB_arguments_, 1, (Optr)PSend12925);
    Array PThreadedCode12922 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anASTUnaryExpression_0_0, (Optr)&t_send0, (Optr)PSend12923, (Optr)&t_send1, (Optr)PSend12924, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12925, (Optr)&t_send1, (Optr)PSend12926, (Optr)&t_method_return);
    Block PBlock12920 = new_Block_with(PArray12921, empty_Array, PThreadedCode12922, 2, PSend12924, PSend12926);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend12927 = new_Send((Optr)VAR_anASTUnaryExpression_0_0, SMB_receiver, 0);
    Symbol SMB_createSendTo_ = new_Symbol(L"createSendTo:");
    // createSendTo:. 
    Send PSend12928 = new_Send((Optr)self, SMB_createSendTo_, 1, (Optr)PSend12927);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12929 = new_Send((Optr)PBlock12920, SMB_value_, 1, (Optr)PSend12928);
    Array PThreadedCode12919 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_closure, (Optr)PBlock12920, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anASTUnaryExpression_0_0, (Optr)&t_send0, (Optr)PSend12927, (Optr)&t_send1, (Optr)PSend12928, (Optr)&t_send1, (Optr)PSend12929, (Optr)&t_method_return);
    Method PMethod12917 = new_Method_with(PArray12918, empty_Array, empty_Array, PThreadedCode12919, 1, PSend12929);
    
    MethodClosure MC_SMB_visitUnaryExpression_ = new_MethodClosure((Method)PMethod12917, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitUnaryExpression_, MC_SMB_visitUnaryExpression_);
}


static void init_SMB_error_() {
    Symbol SMB_error_ = new_Symbol(L"error:");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Array PArray12931 = new_Array_with(1, (Optr)VAR_message_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12934 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_target_ = new_Symbol(L"target:");
    // target:. 
    Send PSend12936 = new_Send((Optr)VAR__receiver__1_0, SMB_target_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass);
    Symbol SMB_method_ = new_Symbol(L"method:");
    // method:. 
    Send PSend12937 = new_Send((Optr)VAR__receiver__1_0, SMB_method_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_currentMethod);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend12938 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)VAR_message_0_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend12939 = new_Send((Optr)VAR__receiver__1_0, SMB_signal, 0);
    Array PThreadedCode12935 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send1, (Optr)PSend12936, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_currentMethod, (Optr)&t_send1, (Optr)PSend12937, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_send1, (Optr)PSend12938, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend12939, (Optr)&t_method_return);
    Block PBlock12933 = new_Block_with(PArray12934, empty_Array, PThreadedCode12935, 4, PSend12936, PSend12937, PSend12938, PSend12939);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12940 = new_Send((Optr)PCompilationFailure_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12941 = new_Send((Optr)PBlock12933, SMB_value_, 1, (Optr)PSend12940);
    Array PThreadedCode12932 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock12933, (Optr)&t_push_class_reference, (Optr)PCompilationFailure_classReference, (Optr)&t_send0, (Optr)PSend12940, (Optr)&t_send1, (Optr)PSend12941, (Optr)&t_method_return);
    Method PMethod12930 = new_Method_with(PArray12931, empty_Array, empty_Array, PThreadedCode12932, 1, PSend12941);
    
    MethodClosure MC_SMB_error_ = new_MethodClosure((Method)PMethod12930, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_error_, MC_SMB_error_);
}


static void init_SMB_visitVariable_() {
    Symbol SMB_visitVariable_ = new_Symbol(L"visitVariable:");
    Variable VAR_anASTVariable_0_0 = new_Variable_named(L"anASTVariable", 0);
    Array PArray12943 = new_Array_with(1, (Optr)VAR_anASTVariable_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12946 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_lookup_ = new_Symbol(L"lookup:");
    // lookup:. 
    Send PSend12948 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_lookup_, 1, (Optr)VAR_anASTVariable_0_0);
    Variable VAR_value_2_0 = new_Variable_named(L"value", 2);
    Array PArray12950 = new_Array_with(1, (Optr)VAR_value_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12952 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_2_0);
    Array PThreadedCode12951 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_2_0, (Optr)&t_send1, (Optr)PSend12952, (Optr)&t_method_return);
    Block PBlock12949 = new_Block_with(PArray12950, empty_Array, PThreadedCode12951, 1, PSend12952);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend12953 = new_Send((Optr)PSend12948, SMB_ifNotNil_, 1, (Optr)PBlock12949);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend12954 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend12955 = new_Send((Optr)PSend12954, SMB_first, 0);
    Symbol SMB_isUppercase = new_Symbol(L"isUppercase");
    // isUppercase. 
    Send PSend12956 = new_Send((Optr)PSend12955, SMB_isUppercase, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray12961 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_target_ = new_Symbol(L"target:");
    // target:. 
    Send PSend12963 = new_Send((Optr)VAR__receiver__2_0, SMB_target_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass);
    Symbol SMB_method_ = new_Symbol(L"method:");
    // method:. 
    Send PSend12964 = new_Send((Optr)VAR__receiver__2_0, SMB_method_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_currentMethod);
    Symbol SMB_variable_ = new_Symbol(L"variable:");
    // variable:. 
    Send PSend12965 = new_Send((Optr)VAR__receiver__2_0, SMB_variable_, 1, (Optr)VAR_anASTVariable_0_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend12966 = new_Send((Optr)VAR__receiver__2_0, SMB_signal, 0);
    Array PThreadedCode12962 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send1, (Optr)PSend12963, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_currentMethod, (Optr)&t_send1, (Optr)PSend12964, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send1, (Optr)PSend12965, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend12966, (Optr)&t_method_return);
    Block PBlock12960 = new_Block_with(PArray12961, empty_Array, PThreadedCode12962, 4, PSend12963, PSend12964, PSend12965, PSend12966);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12967 = new_Send((Optr)PUndefinedVariable_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12968 = new_Send((Optr)PBlock12960, SMB_value_, 1, (Optr)PSend12967);
    // escape:. 
    Send PSend12969 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12968);
    Array PThreadedCode12959 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_closure, (Optr)PBlock12960, (Optr)&t_push_class_reference, (Optr)PUndefinedVariable_classReference, (Optr)&t_send0, (Optr)PSend12967, (Optr)&t_send1, (Optr)PSend12968, (Optr)&t_send1, (Optr)PSend12969, (Optr)&t_block_return);
    Block PBlock12958 = new_Block_with(empty_Array, empty_Array, PThreadedCode12959, 1, PSend12969);
    // ifFalse:. 
    Send PSend12957 = new_Send((Optr)PSend12956, SMB_ifFalse_, 1, (Optr)PBlock12958);
    Symbol SMB_scope = new_Symbol(L"scope");
    // scope. 
    Send PSend12970 = new_Send((Optr)self, SMB_scope, 0);
    // name. 
    Send PSend12971 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_package = new_Symbol(L"package");
    // package. 
    Send PSend12972 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, SMB_package, 0);
    // name. 
    Send PSend12973 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_world = new_Symbol(L"world");
    // world. 
    Send PSend12976 = new_Send((Optr)self, SMB_world, 0);
    // name. 
    Send PSend12977 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_ensureClassReference_ = new_Symbol(L"ensureClassReference:");
    // ensureClassReference:. 
    Send PSend12978 = new_Send((Optr)PSend12976, SMB_ensureClassReference_, 1, (Optr)PSend12977);
    Array PThreadedCode12975 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12976, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend12977, (Optr)&t_send1, (Optr)PSend12978, (Optr)&t_block_return);
    Block PBlock12974 = new_Block_with(empty_Array, empty_Array, PThreadedCode12975, 1, PSend12978);
    Symbol SMB_findName_ifAbsent_ = new_Symbol(L"findName:ifAbsent:");
    // findName:ifAbsent:. 
    Send PSend12979 = new_Send((Optr)PSend12972, SMB_findName_ifAbsent_, 2, (Optr)PSend12973, (Optr)PBlock12974);
    Symbol SMB_asNode = new_Symbol(L"asNode");
    // asNode. 
    Send PSend12980 = new_Send((Optr)PSend12979, SMB_asNode, 0);
    Symbol SMB_declare_as_ = new_Symbol(L"declare:as:");
    // declare:as:. 
    Send PSend12981 = new_Send((Optr)PSend12970, SMB_declare_as_, 2, (Optr)PSend12971, (Optr)PSend12980);
    Array PThreadedCode12947 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send1, (Optr)PSend12948, (Optr)&t_push_closure, (Optr)PBlock12949, (Optr)&t_send1, (Optr)PSend12953, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend12954, (Optr)&t_send0, (Optr)PSend12955, (Optr)&t_send0, (Optr)PSend12956, (Optr)&t_send_ifFalse_, (Optr)PSend12957, (Optr)PBlock12958, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12970, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend12971, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send0, (Optr)PSend12972, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend12973, (Optr)&t_push_closure, (Optr)PBlock12974, (Optr)&t_send2, (Optr)PSend12979, (Optr)&t_send0, (Optr)PSend12980, (Optr)&t_send2, (Optr)PSend12981, (Optr)&t_method_return);
    Block PBlock12945 = new_Block_with(PArray12946, empty_Array, PThreadedCode12947, 3, PSend12953, PSend12957, PSend12981);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12982 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12945);
    Array PThreadedCode12944 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12945, (Optr)&t_send1, (Optr)PSend12982, (Optr)&t_method_return);
    Method PMethod12942 = new_Method_with(PArray12943, empty_Array, empty_Array, PThreadedCode12944, 1, PSend12982);
    
    MethodClosure MC_SMB_visitVariable_ = new_MethodClosure((Method)PMethod12942, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitVariable_, MC_SMB_visitVariable_);
}


static void init_SMB_currentBlock() {
    Symbol SMB_currentBlock = new_Symbol(L"currentBlock");
    Array PThreadedCode12984 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_currentBlock, (Optr)&t_method_return);
    Method PMethod12983 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12984, 1, slot_Smalltalk_Compiler_Compiler_currentBlock);
    
    MethodClosure MC_SMB_currentBlock = new_MethodClosure((Method)PMethod12983, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_currentBlock, MC_SMB_currentBlock);
}


static void init_SMB_visitBlock_() {
    Symbol SMB_visitBlock_ = new_Symbol(L"visitBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray12986 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Variable VAR_hasState_0_2 = new_Variable_named(L"hasState", 0);
    Array PArray12987 = new_Array_with(2, (Optr)VAR_block_0_1, (Optr)VAR_hasState_0_2);
    Symbol SMB_parameters = new_Symbol(L"parameters");
    // parameters. 
    Send PSend12993 = new_Send((Optr)VAR_aBlock_0_0, SMB_parameters, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12992 = new_Send((Optr)PSend12993, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend12991 = new_Send((Optr)PSend12992, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_or_ = new_Symbol(L"or:");
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend12996 = new_Send((Optr)VAR_aBlock_0_0, SMB_temporaries, 0);
    // size. 
    Send PSend12997 = new_Send((Optr)PSend12996, SMB_size, 0);
    // >. 
    Send PSend12998 = new_Send((Optr)PSend12997, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode12995 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend12996, (Optr)&t_send0, (Optr)PSend12997, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12998, (Optr)&t_block_return);
    Block PBlock12994 = new_Block_with(empty_Array, empty_Array, PThreadedCode12995, 1, PSend12998);
    // or:. 
    Send PSend12990 = new_Send((Optr)PSend12991, SMB_or_, 1, (Optr)PBlock12994);
    Assign PAssign12989 = new_Assign((Optr)VAR_hasState_0_2, (Optr)PSend12990);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_pushScope = new_Symbol(L"pushScope");
    // pushScope. 
    Send PSend13002 = new_Send((Optr)self, SMB_pushScope, 0);
    // parameters. 
    Send PSend13003 = new_Send((Optr)VAR_aBlock_0_0, SMB_parameters, 0);
    Symbol SMB_declareAll_ = new_Symbol(L"declareAll:");
    // declareAll:. 
    Send PSend13004 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_declareAll_, 1, (Optr)PSend13003);
    // temporaries. 
    Send PSend13005 = new_Send((Optr)VAR_aBlock_0_0, SMB_temporaries, 0);
    // declareAll:. 
    Send PSend13006 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_declareAll_, 1, (Optr)PSend13005);
    Array PThreadedCode13001 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13002, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13003, (Optr)&t_send1, (Optr)PSend13004, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13005, (Optr)&t_send1, (Optr)PSend13006, (Optr)&t_block_return);
    Block PBlock13000 = new_Block_with(empty_Array, empty_Array, PThreadedCode13001, 3, PSend13002, PSend13004, PSend13006);
    // ifTrue:. 
    Send PSend12999 = new_Send((Optr)VAR_hasState_0_2, SMB_ifTrue_, 1, (Optr)PBlock13000);
    Symbol SMB_createBlock_ = new_Symbol(L"createBlock:");
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13010 = new_Send((Optr)VAR_aBlock_0_0, SMB_statements, 0);
    // size. 
    Send PSend13009 = new_Send((Optr)PSend13010, SMB_size, 0);
    // createBlock:. 
    Send PSend13008 = new_Send((Optr)self, SMB_createBlock_, 1, (Optr)PSend13009);
    Assign PAssign13007 = new_Assign((Optr)VAR_block_0_1, (Optr)PSend13008);
    // parameters. 
    Send PSend13011 = new_Send((Optr)VAR_aBlock_0_0, SMB_parameters, 0);
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    // acceptOnCollection:. 
    Send PSend13012 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend13011);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend13013 = new_Send((Optr)PSend13012, SMB_asArray, 0);
    // temporaries. 
    Send PSend13014 = new_Send((Optr)VAR_aBlock_0_0, SMB_temporaries, 0);
    // acceptOnCollection:. 
    Send PSend13015 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend13014);
    // asArray. 
    Send PSend13016 = new_Send((Optr)PSend13015, SMB_asArray, 0);
    Symbol SMB_params_locals_ = new_Symbol(L"params:locals:");
    // params:locals:. 
    Send PSend13017 = new_Send((Optr)VAR_block_0_1, SMB_params_locals_, 2, (Optr)PSend13013, (Optr)PSend13016);
    // statements. 
    Send PSend13018 = new_Send((Optr)VAR_aBlock_0_0, SMB_statements, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray13020 = new_Array_with(2, (Optr)VAR_each_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend13022 = new_Send((Optr)self, SMB_visit_, 1, (Optr)VAR_each_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend13023 = new_Send((Optr)VAR_block_0_1, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)PSend13022);
    Array PThreadedCode13021 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send1, (Optr)PSend13022, (Optr)&t_send2, (Optr)PSend13023, (Optr)&t_method_return);
    Block PBlock13019 = new_Block_with(PArray13020, empty_Array, PThreadedCode13021, 1, PSend13023);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend13024 = new_Send((Optr)PSend13018, SMB_withIndexDo_, 1, (Optr)PBlock13019);
    Symbol SMB_popScope = new_Symbol(L"popScope");
    // popScope. 
    Send PSend13028 = new_Send((Optr)self, SMB_popScope, 0);
    Array PThreadedCode13027 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13028, (Optr)&t_block_return);
    Block PBlock13026 = new_Block_with(empty_Array, empty_Array, PThreadedCode13027, 1, PSend13028);
    // ifTrue:. 
    Send PSend13025 = new_Send((Optr)VAR_hasState_0_2, SMB_ifTrue_, 1, (Optr)PBlock13026);
    Array PThreadedCode12988 = instantiate_Array_with(ThreadedCode_Class, 0, 77, (Optr)&t_push1, (Optr)PAssign12989, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend12993, (Optr)&t_send0, (Optr)PSend12992, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12991, (Optr)&t_push_closure, (Optr)PBlock12994, (Optr)&t_send1, (Optr)PSend12990, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hasState_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend12999, (Optr)PBlock13000, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13007, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13010, (Optr)&t_send0, (Optr)PSend13009, (Optr)&t_send1, (Optr)PSend13008, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13011, (Optr)&t_send1, (Optr)PSend13012, (Optr)&t_send0, (Optr)PSend13013, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13014, (Optr)&t_send1, (Optr)PSend13015, (Optr)&t_send0, (Optr)PSend13016, (Optr)&t_send2, (Optr)PSend13017, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13018, (Optr)&t_push_closure, (Optr)PBlock13019, (Optr)&t_send1, (Optr)PSend13024, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hasState_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend13025, (Optr)PBlock13026, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_method_return);
    Method PMethod12985 = new_Method_with(PArray12986, PArray12987, empty_Array, PThreadedCode12988, 7, PAssign12989, PSend12999, PAssign13007, PSend13017, PSend13024, PSend13025, VAR_block_0_1);
    
    MethodClosure MC_SMB_visitBlock_ = new_MethodClosure((Method)PMethod12985, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitBlock_, MC_SMB_visitBlock_);
}


static void init_SMB_createSendTo_sized_() {
    Symbol SMB_createSendTo_sized_ = new_Symbol(L"createSendTo:sized:");
    Variable VAR_receiver_0_0 = new_Variable_named(L"receiver", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Array PArray13030 = new_Array_with(2, (Optr)VAR_receiver_0_0, (Optr)VAR_size_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray13033 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend13035 = new_Send((Optr)VAR_receiver_0_0, SMB_isKindOf_, 1, (Optr)ASTSuper_classReference);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend13039 = new_Send((Optr)PSuper_classReference, SMB_new_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13040 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend13039);
    Array PThreadedCode13038 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PSuper_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend13039, (Optr)&t_send1, (Optr)PSend13040, (Optr)&t_block_return);
    Block PBlock13037 = new_Block_with(empty_Array, empty_Array, PThreadedCode13038, 1, PSend13040);
    // ifTrue:. 
    Send PSend13036 = new_Send((Optr)PSend13035, SMB_ifTrue_, 1, (Optr)PBlock13037);
    // new:. 
    Send PSend13041 = new_Send((Optr)PSend_classReference, SMB_new_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend13042 = new_Send((Optr)self, SMB_visit_, 1, (Optr)VAR_receiver_0_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend13043 = new_Send((Optr)PSend13041, SMB_receiver_, 1, (Optr)PSend13042);
    Array PThreadedCode13034 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_push_class_reference, (Optr)ASTSuper_classReference, (Optr)&t_send1, (Optr)PSend13035, (Optr)&t_send_ifTrue_, (Optr)PSend13036, (Optr)PBlock13037, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PSend_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend13041, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_send1, (Optr)PSend13042, (Optr)&t_send1, (Optr)PSend13043, (Optr)&t_method_return);
    Block PBlock13032 = new_Block_with(PArray13033, empty_Array, PThreadedCode13034, 2, PSend13036, PSend13043);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13044 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock13032);
    Array PThreadedCode13031 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock13032, (Optr)&t_send1, (Optr)PSend13044, (Optr)&t_method_return);
    Method PMethod13029 = new_Method_with(PArray13030, empty_Array, empty_Array, PThreadedCode13031, 1, PSend13044);
    
    MethodClosure MC_SMB_createSendTo_sized_ = new_MethodClosure((Method)PMethod13029, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createSendTo_sized_, MC_SMB_createSendTo_sized_);
}


static void init_SMB_visitPath_() {
    Symbol SMB_visitPath_ = new_Symbol(L"visitPath:");
    Variable VAR_aPath_0_0 = new_Variable_named(L"aPath", 0);
    Array PArray13046 = new_Array_with(1, (Optr)VAR_aPath_0_0);
    Symbol SMB_package = new_Symbol(L"package");
    // package. 
    Send PSend13048 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, SMB_package, 0);
    Symbol SMB_path = new_Symbol(L"path");
    // path. 
    Send PSend13049 = new_Send((Optr)VAR_aPath_0_0, SMB_path, 0);
    Symbol SMB_lookup_ = new_Symbol(L"lookup:");
    // lookup:. 
    Send PSend13050 = new_Send((Optr)PSend13048, SMB_lookup_, 1, (Optr)PSend13049);
    Symbol SMB_asNode = new_Symbol(L"asNode");
    // asNode. 
    Send PSend13051 = new_Send((Optr)PSend13050, SMB_asNode, 0);
    Array PThreadedCode13047 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send0, (Optr)PSend13048, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_send0, (Optr)PSend13049, (Optr)&t_send1, (Optr)PSend13050, (Optr)&t_send0, (Optr)PSend13051, (Optr)&t_method_return);
    Method PMethod13045 = new_Method_with(PArray13046, empty_Array, empty_Array, PThreadedCode13047, 1, PSend13051);
    
    MethodClosure MC_SMB_visitPath_ = new_MethodClosure((Method)PMethod13045, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitPath_, MC_SMB_visitPath_);
}


static void init_SMB_visitBraceExpression_() {
    Symbol SMB_visitBraceExpression_ = new_Symbol(L"visitBraceExpression:");
    Variable VAR_braceExpression_0_0 = new_Variable_named(L"braceExpression", 0);
    Array PArray13053 = new_Array_with(1, (Optr)VAR_braceExpression_0_0);
    String string_13055 = new_String(L"Brace expressions are not supported by the compiler. Patches welcome!");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_13055_Const = new_Constant((Optr)string_13055);
    // error:. 
    Send PSend13056 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_13055_Const);
    Array PThreadedCode13054 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_13055, (Optr)&t_send1, (Optr)PSend13056, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13052 = new_Method_with(PArray13053, empty_Array, empty_Array, PThreadedCode13054, 2, PSend13056, self);
    
    MethodClosure MC_SMB_visitBraceExpression_ = new_MethodClosure((Method)PMethod13052, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitBraceExpression_, MC_SMB_visitBraceExpression_);
}


static void init_SMB_world_() {
    Symbol SMB_world_ = new_Symbol(L"world:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray13058 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign13060 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_world, (Optr)VAR_anObject_0_0);
    Array PThreadedCode13059 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign13060, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13057 = new_Method_with(PArray13058, empty_Array, empty_Array, PThreadedCode13059, 2, PAssign13060, self);
    
    MethodClosure MC_SMB_world_ = new_MethodClosure((Method)PMethod13057, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_world_, MC_SMB_world_);
}


static void init_SMB_pushScope() {
    Symbol SMB_pushScope = new_Symbol(L"pushScope");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend13064 = new_Send((Optr)PSubScope_classReference, SMB_new_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_scope);
    Assign PAssign13063 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)PSend13064);
    Array PThreadedCode13062 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign13063, (Optr)&t_push_class_reference, (Optr)PSubScope_classReference, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send1, (Optr)PSend13064, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13061 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13062, 2, PAssign13063, self);
    
    MethodClosure MC_SMB_pushScope = new_MethodClosure((Method)PMethod13061, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_pushScope, MC_SMB_pushScope);
}


static void init_SMB_createPInfo() {
    Symbol SMB_createPInfo = new_Symbol(L"createPInfo");
    Variable VAR_info_0_0 = new_Variable_named(L"info", 0);
    Array PArray13066 = new_Array_with(1, (Optr)VAR_info_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13069 = new_Send((Optr)PInfo_classReference, SMB_new, 0);
    Assign PAssign13068 = new_Assign((Optr)VAR_info_0_0, (Optr)PSend13069);
    Symbol SMB_sourceObject = new_Symbol(L"sourceObject");
    // sourceObject. 
    Send PSend13070 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_currentMethod, SMB_sourceObject, 0);
    Symbol SMB_sourceFile_ = new_Symbol(L"sourceFile:");
    // sourceFile:. 
    Send PSend13071 = new_Send((Optr)VAR_info_0_0, SMB_sourceFile_, 1, (Optr)PSend13070);
    Symbol SMB_line_ = new_Symbol(L"line:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // line:. 
    Send PSend13072 = new_Send((Optr)VAR_info_0_0, SMB_line_, 1, (Optr)int_1_Const);
    Symbol SMB_column_ = new_Symbol(L"column:");
    // column:. 
    Send PSend13073 = new_Send((Optr)VAR_info_0_0, SMB_column_, 1, (Optr)int_1_Const);
    Array PThreadedCode13067 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign13068, (Optr)&t_push_class_reference, (Optr)PInfo_classReference, (Optr)&t_send0, (Optr)PSend13069, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_info_0_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_currentMethod, (Optr)&t_send0, (Optr)PSend13070, (Optr)&t_send1, (Optr)PSend13071, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_info_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend13072, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_info_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend13073, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_info_0_0, (Optr)&t_method_return);
    Method PMethod13065 = new_Method_with(empty_Array, PArray13066, empty_Array, PThreadedCode13067, 5, PAssign13068, PSend13071, PSend13072, PSend13073, VAR_info_0_0);
    
    MethodClosure MC_SMB_createPInfo = new_MethodClosure((Method)PMethod13065, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createPInfo, MC_SMB_createPInfo);
}


static void init_SMB_visitKeywordSelector_() {
    Symbol SMB_visitKeywordSelector_ = new_Symbol(L"visitKeywordSelector:");
    Variable VAR_anASTKeywordSelector_0_0 = new_Variable_named(L"anASTKeywordSelector", 0);
    Array PArray13075 = new_Array_with(1, (Optr)VAR_anASTKeywordSelector_0_0);
    Symbol SMB_selectorSymbol = new_Symbol(L"selectorSymbol");
    // selectorSymbol. 
    Send PSend13077 = new_Send((Optr)VAR_anASTKeywordSelector_0_0, SMB_selectorSymbol, 0);
    Array PThreadedCode13076 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_anASTKeywordSelector_0_0, (Optr)&t_send0, (Optr)PSend13077, (Optr)&t_method_return);
    Method PMethod13074 = new_Method_with(PArray13075, empty_Array, empty_Array, PThreadedCode13076, 1, PSend13077);
    
    MethodClosure MC_SMB_visitKeywordSelector_ = new_MethodClosure((Method)PMethod13074, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitKeywordSelector_, MC_SMB_visitKeywordSelector_);
}


static void init_SMB_visitBoolean_() {
    Symbol SMB_visitBoolean_ = new_Symbol(L"visitBoolean:");
    Variable VAR_aPinocchioBoolean_0_0 = new_Variable_named(L"aPinocchioBoolean", 0);
    Array PArray13079 = new_Array_with(1, (Optr)VAR_aPinocchioBoolean_0_0);
    Array PThreadedCode13080 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_aPinocchioBoolean_0_0, (Optr)&t_method_return);
    Method PMethod13078 = new_Method_with(PArray13079, empty_Array, empty_Array, PThreadedCode13080, 1, VAR_aPinocchioBoolean_0_0);
    
    MethodClosure MC_SMB_visitBoolean_ = new_MethodClosure((Method)PMethod13078, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitBoolean_, MC_SMB_visitBoolean_);
}


static void init_class_SMB_compile_on_() {
    Symbol SMB_compile_on_ = new_Symbol(L"compile:on:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_aClass_0_1 = new_Variable_named(L"aClass", 0);
    Array PArray13082 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aClass_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray13085 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_pclass_ = new_Symbol(L"pclass:");
    // pclass:. 
    Send PSend13087 = new_Send((Optr)VAR__receiver__1_0, SMB_pclass_, 1, (Optr)VAR_aClass_0_1);
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend13088 = new_Send((Optr)VAR__receiver__1_0, SMB_compile_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode13086 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aClass_0_1, (Optr)&t_send1, (Optr)PSend13087, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend13088, (Optr)&t_method_return);
    Block PBlock13084 = new_Block_with(PArray13085, empty_Array, PThreadedCode13086, 2, PSend13087, PSend13088);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13089 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend13090 = new_Send((Optr)PBlock13084, SMB_value_, 1, (Optr)PSend13089);
    Array PThreadedCode13083 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock13084, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13089, (Optr)&t_send1, (Optr)PSend13090, (Optr)&t_method_return);
    Method PMethod13081 = new_Method_with(PArray13082, empty_Array, empty_Array, PThreadedCode13083, 1, PSend13090);
    
    MethodClosure MC_SMB_compile_on_ = new_MethodClosure((Method)PMethod13081, HEADER(Smalltalk_Compiler_Compiler_Class));
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