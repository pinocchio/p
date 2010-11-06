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
    Array PArray12533 = new_Array_with(1, (Optr)VAR_aBinaryExpression_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12536 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12538 = new_Send((Optr)VAR_aBinaryExpression_0_0, SMB_selector, 0);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend12539 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)PSend12538);
    Symbol SMB_argument = new_Symbol(L"argument");
    // argument. 
    Send PSend12540 = new_Send((Optr)VAR_aBinaryExpression_0_0, SMB_argument, 0);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend12541 = new_Send((Optr)self, SMB_visit_, 1, (Optr)PSend12540);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend12542 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend12541);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend12543 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode12537 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aBinaryExpression_0_0, (Optr)&t_send0, (Optr)PSend12538, (Optr)&t_send1, (Optr)PSend12539, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBinaryExpression_0_0, (Optr)&t_send0, (Optr)PSend12540, (Optr)&t_send1, (Optr)PSend12541, (Optr)&t_send2, (Optr)PSend12542, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend12543, (Optr)&t_method_return);
    Block PBlock12535 = new_Block_with(PArray12536, empty_Array, PThreadedCode12537, 3, PSend12539, PSend12542, PSend12543);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend12544 = new_Send((Optr)VAR_aBinaryExpression_0_0, SMB_receiver, 0);
    Symbol SMB_createSendTo_sized_ = new_Symbol(L"createSendTo:sized:");
    // createSendTo:sized:. 
    Send PSend12545 = new_Send((Optr)self, SMB_createSendTo_sized_, 2, (Optr)PSend12544, (Optr)int_1_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12546 = new_Send((Optr)PBlock12535, SMB_value_, 1, (Optr)PSend12545);
    Array PThreadedCode12534 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_closure, (Optr)PBlock12535, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBinaryExpression_0_0, (Optr)&t_send0, (Optr)PSend12544, (Optr)&t_push_1, (Optr)&t_send2, (Optr)PSend12545, (Optr)&t_send1, (Optr)PSend12546, (Optr)&t_method_return);
    Method PMethod12532 = new_Method_with(PArray12533, empty_Array, empty_Array, PThreadedCode12534, 1, PSend12546);
    
    MethodClosure MC_SMB_visitBinaryExpression_ = new_MethodClosure((Method)PMethod12532, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitBinaryExpression_, MC_SMB_visitBinaryExpression_);
}


static void init_SMB_createBlock_() {
    Symbol SMB_createBlock_ = new_Symbol(L"createBlock:");
    Variable VAR_size_0_0 = new_Variable_named(L"size", 0);
    Array PArray12548 = new_Array_with(1, (Optr)VAR_size_0_0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Array PArray12549 = new_Array_with(1, (Optr)VAR_block_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12552 = new_Send((Optr)PBlock_classReference, SMB_new_, 1, (Optr)VAR_size_0_0);
    Assign PAssign12551 = new_Assign((Optr)VAR_block_0_1, (Optr)PSend12552);
    Array PThreadedCode12550 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign12551, (Optr)&t_push_class_reference, (Optr)PBlock_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend12552, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_method_return);
    Method PMethod12547 = new_Method_with(PArray12548, PArray12549, empty_Array, PThreadedCode12550, 2, PAssign12551, VAR_block_0_1);
    
    MethodClosure MC_SMB_createBlock_ = new_MethodClosure((Method)PMethod12547, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createBlock_, MC_SMB_createBlock_);
}


static void init_SMB_visitReturnExpression_() {
    Symbol SMB_visitReturnExpression_ = new_Symbol(L"visitReturnExpression:");
    Variable VAR_aReturnExpression_0_0 = new_Variable_named(L"aReturnExpression", 0);
    Array PArray12554 = new_Array_with(1, (Optr)VAR_aReturnExpression_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12557 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend12559 = new_Send((Optr)VAR_aReturnExpression_0_0, SMB_expression, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend12560 = new_Send((Optr)PSend12559, SMB_accept_, 1, (Optr)self);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend12561 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend12560);
    Symbol SMB_currentCallecVariable = new_Symbol(L"currentCallecVariable");
    // currentCallecVariable. 
    Send PSend12562 = new_Send((Optr)self, SMB_currentCallecVariable, 0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend12563 = new_Send((Optr)VAR__receiver__1_0, SMB_receiver_, 1, (Optr)PSend12562);
    Symbol  SMB_escape_ = new_Symbol(L"escape:");
    Symbol SMB_message_ = new_Symbol(L"message:");
    Constant SMB_escape__Const = new_Constant((Optr)SMB_escape_);
    // message:. 
    Send PSend12564 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)SMB_escape__Const);
    Array PThreadedCode12558 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_aReturnExpression_0_0, (Optr)&t_send0, (Optr)PSend12559, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12560, (Optr)&t_send2, (Optr)PSend12561, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12562, (Optr)&t_send1, (Optr)PSend12563, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_escape_, (Optr)&t_send1, (Optr)PSend12564, (Optr)&t_method_return);
    Block PBlock12556 = new_Block_with(PArray12557, empty_Array, PThreadedCode12558, 3, PSend12561, PSend12563, PSend12564);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12565 = new_Send((Optr)PSend_classReference, SMB_new_, 1, (Optr)int_1_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12566 = new_Send((Optr)PBlock12556, SMB_value_, 1, (Optr)PSend12565);
    Array PThreadedCode12555 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock12556, (Optr)&t_push_class_reference, (Optr)PSend_classReference, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12565, (Optr)&t_send1, (Optr)PSend12566, (Optr)&t_method_return);
    Method PMethod12553 = new_Method_with(PArray12554, empty_Array, empty_Array, PThreadedCode12555, 1, PSend12566);
    
    MethodClosure MC_SMB_visitReturnExpression_ = new_MethodClosure((Method)PMethod12553, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitReturnExpression_, MC_SMB_visitReturnExpression_);
}


static void init_SMB_visitArray_() {
    Symbol SMB_visitArray_ = new_Symbol(L"visitArray:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray12568 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    String string_12570 = new_String(L"Literal arrays are not yet supported by the compiler. Patches welcome!");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_12570_Const = new_Constant((Optr)string_12570);
    // error:. 
    Send PSend12571 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_12570_Const);
    Array PThreadedCode12569 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_12570, (Optr)&t_send1, (Optr)PSend12571, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12567 = new_Method_with(PArray12568, empty_Array, empty_Array, PThreadedCode12569, 2, PSend12571, self);
    
    MethodClosure MC_SMB_visitArray_ = new_MethodClosure((Method)PMethod12567, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitArray_, MC_SMB_visitArray_);
}


static void init_SMB_visitMessageExpression_() {
    Symbol SMB_visitMessageExpression_ = new_Symbol(L"visitMessageExpression:");
    Variable VAR_aMessageExpression_0_0 = new_Variable_named(L"aMessageExpression", 0);
    Array PArray12573 = new_Array_with(1, (Optr)VAR_aMessageExpression_0_0);
    Variable VAR_arguments_0_1 = new_Variable_named(L"arguments", 0);
    Array PArray12574 = new_Array_with(1, (Optr)VAR_arguments_0_1);
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    Symbol SMB_arguments = new_Symbol(L"arguments");
    // arguments. 
    Send PSend12578 = new_Send((Optr)VAR_aMessageExpression_0_0, SMB_arguments, 0);
    // acceptOnCollection:. 
    Send PSend12577 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend12578);
    Assign PAssign12576 = new_Assign((Optr)VAR_arguments_0_1, (Optr)PSend12577);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12580 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12582 = new_Send((Optr)VAR_aMessageExpression_0_0, SMB_selector, 0);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend12583 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)PSend12582);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend12584 = new_Send((Optr)VAR__receiver__1_0, SMB_arguments_, 1, (Optr)VAR_arguments_0_1);
    Array PThreadedCode12581 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aMessageExpression_0_0, (Optr)&t_send0, (Optr)PSend12582, (Optr)&t_send1, (Optr)PSend12583, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_arguments_0_1, (Optr)&t_send1, (Optr)PSend12584, (Optr)&t_method_return);
    Block PBlock12579 = new_Block_with(PArray12580, empty_Array, PThreadedCode12581, 2, PSend12583, PSend12584);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend12585 = new_Send((Optr)VAR_aMessageExpression_0_0, SMB_receiver, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12586 = new_Send((Optr)VAR_arguments_0_1, SMB_size, 0);
    Symbol SMB_createSendTo_sized_ = new_Symbol(L"createSendTo:sized:");
    // createSendTo:sized:. 
    Send PSend12587 = new_Send((Optr)self, SMB_createSendTo_sized_, 2, (Optr)PSend12585, (Optr)PSend12586);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12588 = new_Send((Optr)PBlock12579, SMB_value_, 1, (Optr)PSend12587);
    Array PThreadedCode12575 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign12576, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessageExpression_0_0, (Optr)&t_send0, (Optr)PSend12578, (Optr)&t_send1, (Optr)PSend12577, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock12579, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessageExpression_0_0, (Optr)&t_send0, (Optr)PSend12585, (Optr)&t_push_variable, (Optr)VAR_arguments_0_1, (Optr)&t_send0, (Optr)PSend12586, (Optr)&t_send2, (Optr)PSend12587, (Optr)&t_send1, (Optr)PSend12588, (Optr)&t_method_return);
    Method PMethod12572 = new_Method_with(PArray12573, PArray12574, empty_Array, PThreadedCode12575, 2, PAssign12576, PSend12588);
    
    MethodClosure MC_SMB_visitMessageExpression_ = new_MethodClosure((Method)PMethod12572, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitMessageExpression_, MC_SMB_visitMessageExpression_);
}


static void init_SMB_visitAssignmentExpression_() {
    Symbol SMB_visitAssignmentExpression_ = new_Symbol(L"visitAssignmentExpression:");
    Variable VAR_anAssignmentExpression_0_0 = new_Variable_named(L"anAssignmentExpression", 0);
    Array PArray12590 = new_Array_with(1, (Optr)VAR_anAssignmentExpression_0_0);
    Variable VAR_assign_0_1 = new_Variable_named(L"assign", 0);
    Array PArray12591 = new_Array_with(1, (Optr)VAR_assign_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12596 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_variable = new_Symbol(L"variable");
    // variable. 
    Send PSend12598 = new_Send((Optr)VAR_anAssignmentExpression_0_0, SMB_variable, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend12599 = new_Send((Optr)PSend12598, SMB_accept_, 1, (Optr)self);
    Symbol SMB_variable_ = new_Symbol(L"variable:");
    // variable:. 
    Send PSend12600 = new_Send((Optr)VAR__receiver__1_0, SMB_variable_, 1, (Optr)PSend12599);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend12601 = new_Send((Optr)VAR_anAssignmentExpression_0_0, SMB_expression, 0);
    // accept:. 
    Send PSend12602 = new_Send((Optr)PSend12601, SMB_accept_, 1, (Optr)self);
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    // expression:. 
    Send PSend12603 = new_Send((Optr)VAR__receiver__1_0, SMB_expression_, 1, (Optr)PSend12602);
    Array PThreadedCode12597 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anAssignmentExpression_0_0, (Optr)&t_send0, (Optr)PSend12598, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12599, (Optr)&t_send1, (Optr)PSend12600, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anAssignmentExpression_0_0, (Optr)&t_send0, (Optr)PSend12601, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12602, (Optr)&t_send1, (Optr)PSend12603, (Optr)&t_method_return);
    Block PBlock12595 = new_Block_with(PArray12596, empty_Array, PThreadedCode12597, 2, PSend12600, PSend12603);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12604 = new_Send((Optr)PAssign_classReference, SMB_new, 0);
    // value:. 
    Send PSend12594 = new_Send((Optr)PBlock12595, SMB_value_, 1, (Optr)PSend12604);
    Assign PAssign12593 = new_Assign((Optr)VAR_assign_0_1, (Optr)PSend12594);
    // variable. 
    Send PSend12605 = new_Send((Optr)VAR_assign_0_1, SMB_variable, 0);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend12606 = new_Send((Optr)PSend12605, SMB_should, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend12607 = new_Send((Optr)PSend12606, SMB_not, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend12608 = new_Send((Optr)PSend12607, SMB__equals_, 1, (Optr)nil_Const);
    // expression. 
    Send PSend12609 = new_Send((Optr)VAR_assign_0_1, SMB_expression, 0);
    // should. 
    Send PSend12610 = new_Send((Optr)PSend12609, SMB_should, 0);
    // not. 
    Send PSend12611 = new_Send((Optr)PSend12610, SMB_not, 0);
    // =. 
    Send PSend12612 = new_Send((Optr)PSend12611, SMB__equals_, 1, (Optr)nil_Const);
    Array PThreadedCode12592 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign12593, (Optr)&t_push_closure, (Optr)PBlock12595, (Optr)&t_push_class_reference, (Optr)PAssign_classReference, (Optr)&t_send0, (Optr)PSend12604, (Optr)&t_send1, (Optr)PSend12594, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_assign_0_1, (Optr)&t_send0, (Optr)PSend12605, (Optr)&t_send0, (Optr)PSend12606, (Optr)&t_send0, (Optr)PSend12607, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend12608, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_assign_0_1, (Optr)&t_send0, (Optr)PSend12609, (Optr)&t_send0, (Optr)PSend12610, (Optr)&t_send0, (Optr)PSend12611, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend12612, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_assign_0_1, (Optr)&t_method_return);
    Method PMethod12589 = new_Method_with(PArray12590, PArray12591, empty_Array, PThreadedCode12592, 4, PAssign12593, PSend12608, PSend12612, VAR_assign_0_1);
    
    MethodClosure MC_SMB_visitAssignmentExpression_ = new_MethodClosure((Method)PMethod12589, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitAssignmentExpression_, MC_SMB_visitAssignmentExpression_);
}


static void init_SMB_currentCallecVariable_() {
    Symbol SMB_currentCallecVariable_ = new_Symbol(L"currentCallecVariable:");
    Variable VAR_aPinocchioVariable_0_0 = new_Variable_named(L"aPinocchioVariable", 0);
    Array PArray12614 = new_Array_with(1, (Optr)VAR_aPinocchioVariable_0_0);
    Assign PAssign12616 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_currentCallecVariable, (Optr)VAR_aPinocchioVariable_0_0);
    Array PThreadedCode12615 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign12616, (Optr)&t_push_variable, (Optr)VAR_aPinocchioVariable_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12613 = new_Method_with(PArray12614, empty_Array, empty_Array, PThreadedCode12615, 2, PAssign12616, self);
    
    MethodClosure MC_SMB_currentCallecVariable_ = new_MethodClosure((Method)PMethod12613, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_currentCallecVariable_, MC_SMB_currentCallecVariable_);
}


static void init_SMB_visitUnaryAnnotation_() {
    Symbol SMB_visitUnaryAnnotation_ = new_Symbol(L"visitUnaryAnnotation:");
    Variable VAR_anASTUnaryAnnotation_0_0 = new_Variable_named(L"anASTUnaryAnnotation", 0);
    Array PArray12618 = new_Array_with(1, (Optr)VAR_anASTUnaryAnnotation_0_0);
    Variable VAR_annotation_0_1 = new_Variable_named(L"annotation", 0);
    Array PArray12619 = new_Array_with(1, (Optr)VAR_annotation_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // new:. 
    Send PSend12622 = new_Send((Optr)PAnnotation_classReference, SMB_new_, 1, (Optr)int_0_Const);
    Assign PAssign12621 = new_Assign((Optr)VAR_annotation_0_1, (Optr)PSend12622);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12623 = new_Send((Optr)VAR_anASTUnaryAnnotation_0_0, SMB_selector, 0);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend12624 = new_Send((Optr)self, SMB_visit_, 1, (Optr)PSend12623);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend12625 = new_Send((Optr)VAR_annotation_0_1, SMB_selector_, 1, (Optr)PSend12624);
    Array PThreadedCode12620 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign12621, (Optr)&t_push_class_reference, (Optr)PAnnotation_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12622, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_annotation_0_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anASTUnaryAnnotation_0_0, (Optr)&t_send0, (Optr)PSend12623, (Optr)&t_send1, (Optr)PSend12624, (Optr)&t_send1, (Optr)PSend12625, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_annotation_0_1, (Optr)&t_method_return);
    Method PMethod12617 = new_Method_with(PArray12618, PArray12619, empty_Array, PThreadedCode12620, 3, PAssign12621, PSend12625, VAR_annotation_0_1);
    
    MethodClosure MC_SMB_visitUnaryAnnotation_ = new_MethodClosure((Method)PMethod12617, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitUnaryAnnotation_, MC_SMB_visitUnaryAnnotation_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper12628 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12630 = new_Send((Optr)PRootScope_classReference, SMB_new, 0);
    Assign PAssign12629 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)PSend12630);
    Assign PAssign12631 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_rootScope, (Optr)slot_Smalltalk_Compiler_Compiler_scope);
    // new. 
    Send PSend12633 = new_Send((Optr)PThreadedCompiler_classReference, SMB_new, 0);
    Assign PAssign12632 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_threadedCompiler, (Optr)PSend12633);
    Array PThreadedCode12627 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper12628, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12629, (Optr)&t_push_class_reference, (Optr)PRootScope_classReference, (Optr)&t_send0, (Optr)PSend12630, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12631, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12632, (Optr)&t_push_class_reference, (Optr)PThreadedCompiler_classReference, (Optr)&t_send0, (Optr)PSend12633, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12626 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12627, 5, PSuper12628, PAssign12629, PAssign12631, PAssign12632, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod12626, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_visitUnarySelector_() {
    Symbol SMB_visitUnarySelector_ = new_Symbol(L"visitUnarySelector:");
    Variable VAR_aUnarySelector_0_0 = new_Variable_named(L"aUnarySelector", 0);
    Array PArray12635 = new_Array_with(1, (Optr)VAR_aUnarySelector_0_0);
    Symbol SMB_selectorSymbol = new_Symbol(L"selectorSymbol");
    // selectorSymbol. 
    Send PSend12637 = new_Send((Optr)VAR_aUnarySelector_0_0, SMB_selectorSymbol, 0);
    Array PThreadedCode12636 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aUnarySelector_0_0, (Optr)&t_send0, (Optr)PSend12637, (Optr)&t_method_return);
    Method PMethod12634 = new_Method_with(PArray12635, empty_Array, empty_Array, PThreadedCode12636, 1, PSend12637);
    
    MethodClosure MC_SMB_visitUnarySelector_ = new_MethodClosure((Method)PMethod12634, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitUnarySelector_, MC_SMB_visitUnarySelector_);
}


static void init_SMB_compile_() {
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray12639 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    // parse:. 
    Send PSend12641 = new_Send((Optr)self, SMB_parse_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_sourceObject_ = new_Symbol(L"sourceObject:");
    // sourceObject:. 
    Send PSend12642 = new_Send((Optr)PSend12641, SMB_sourceObject_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend12643 = new_Send((Optr)self, SMB_visit_, 1, (Optr)PSend12642);
    Array PThreadedCode12640 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend12641, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend12642, (Optr)&t_send1, (Optr)PSend12643, (Optr)&t_method_return);
    Method PMethod12638 = new_Method_with(PArray12639, empty_Array, empty_Array, PThreadedCode12640, 1, PSend12643);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod12638, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_compile_, MC_SMB_compile_);
}


static void init_SMB_compileThreadedMethod_() {
    Symbol SMB_compileThreadedMethod_ = new_Symbol(L"compileThreadedMethod:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Array PArray12645 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend12647 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_threadedCompiler, SMB_compile_, 1, (Optr)VAR_aMethod_0_0);
    Array PThreadedCode12646 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_threadedCompiler, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend12647, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12644 = new_Method_with(PArray12645, empty_Array, empty_Array, PThreadedCode12646, 2, PSend12647, self);
    
    MethodClosure MC_SMB_compileThreadedMethod_ = new_MethodClosure((Method)PMethod12644, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_compileThreadedMethod_, MC_SMB_compileThreadedMethod_);
}


static void init_SMB_pclass() {
    Symbol SMB_pclass = new_Symbol(L"pclass");
    Array PThreadedCode12649 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_method_return);
    Method PMethod12648 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12649, 1, slot_Smalltalk_Compiler_Compiler_pinocchioClass);
    
    MethodClosure MC_SMB_pclass = new_MethodClosure((Method)PMethod12648, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_pclass, MC_SMB_pclass);
}


static void init_SMB_rootScope() {
    Symbol SMB_rootScope = new_Symbol(L"rootScope");
    Array PThreadedCode12651 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_rootScope, (Optr)&t_method_return);
    Method PMethod12650 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12651, 1, slot_Smalltalk_Compiler_Compiler_rootScope);
    
    MethodClosure MC_SMB_rootScope = new_MethodClosure((Method)PMethod12650, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_rootScope, MC_SMB_rootScope);
}


static void init_SMB_visitFloat_() {
    Symbol SMB_visitFloat_ = new_Symbol(L"visitFloat:");
    Variable VAR_anASTFloat_0_0 = new_Variable_named(L"anASTFloat", 0);
    Array PArray12653 = new_Array_with(1, (Optr)VAR_anASTFloat_0_0);
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    // asNumber. 
    Send PSend12655 = new_Send((Optr)VAR_anASTFloat_0_0, SMB_asNumber, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12656 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)PSend12655);
    Array PThreadedCode12654 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTFloat_0_0, (Optr)&t_send0, (Optr)PSend12655, (Optr)&t_send1, (Optr)PSend12656, (Optr)&t_method_return);
    Method PMethod12652 = new_Method_with(PArray12653, empty_Array, empty_Array, PThreadedCode12654, 1, PSend12656);
    
    MethodClosure MC_SMB_visitFloat_ = new_MethodClosure((Method)PMethod12652, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitFloat_, MC_SMB_visitFloat_);
}


static void init_SMB_scope() {
    Symbol SMB_scope = new_Symbol(L"scope");
    Array PThreadedCode12658 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_method_return);
    Method PMethod12657 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12658, 1, slot_Smalltalk_Compiler_Compiler_scope);
    
    MethodClosure MC_SMB_scope = new_MethodClosure((Method)PMethod12657, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_scope, MC_SMB_scope);
}


static void init_SMB_visitSuper_() {
    Symbol SMB_visitSuper_ = new_Symbol(L"visitSuper:");
    Variable VAR_anASTSuper_0_0 = new_Variable_named(L"anASTSuper", 0);
    Array PArray12660 = new_Array_with(1, (Optr)VAR_anASTSuper_0_0);
    String string_12662 = new_String(L"Should not get an AST Super");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_12662_Const = new_Constant((Optr)string_12662);
    // error:. 
    Send PSend12663 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_12662_Const);
    Array PThreadedCode12661 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_12662, (Optr)&t_send1, (Optr)PSend12663, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12659 = new_Method_with(PArray12660, empty_Array, empty_Array, PThreadedCode12661, 2, PSend12663, self);
    
    MethodClosure MC_SMB_visitSuper_ = new_MethodClosure((Method)PMethod12659, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitSuper_, MC_SMB_visitSuper_);
}


static void init_SMB_visitNumber_() {
    Symbol SMB_visitNumber_ = new_Symbol(L"visitNumber:");
    Variable VAR_anASTNumber_0_0 = new_Variable_named(L"anASTNumber", 0);
    Array PArray12665 = new_Array_with(1, (Optr)VAR_anASTNumber_0_0);
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    // asNumber. 
    Send PSend12667 = new_Send((Optr)VAR_anASTNumber_0_0, SMB_asNumber, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12668 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)PSend12667);
    Array PThreadedCode12666 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTNumber_0_0, (Optr)&t_send0, (Optr)PSend12667, (Optr)&t_send1, (Optr)PSend12668, (Optr)&t_method_return);
    Method PMethod12664 = new_Method_with(PArray12665, empty_Array, empty_Array, PThreadedCode12666, 1, PSend12668);
    
    MethodClosure MC_SMB_visitNumber_ = new_MethodClosure((Method)PMethod12664, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitNumber_, MC_SMB_visitNumber_);
}


static void init_SMB_world() {
    Symbol SMB_world = new_Symbol(L"world");
    Symbol SMB_package = new_Symbol(L"package");
    // package. 
    Send PSend12671 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, SMB_package, 0);
    Array PThreadedCode12670 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send0, (Optr)PSend12671, (Optr)&t_method_return);
    Method PMethod12669 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12670, 1, PSend12671);
    
    MethodClosure MC_SMB_world = new_MethodClosure((Method)PMethod12669, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_world, MC_SMB_world);
}


static void init_SMB_pclass_() {
    Symbol SMB_pclass_ = new_Symbol(L"pclass:");
    Variable VAR_aPinocchioClass_0_0 = new_Variable_named(L"aPinocchioClass", 0);
    Array PArray12673 = new_Array_with(1, (Optr)VAR_aPinocchioClass_0_0);
    Symbol SMB_isRootScope = new_Symbol(L"isRootScope");
    // isRootScope. 
    Send PSend12675 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_isRootScope, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_12679 = new_String(L"Current scope is not RootScope but ");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend12680 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend12681 = new_Send((Optr)PSend12680, SMB_name, 0);
    Constant string_12679_Const = new_Constant((Optr)string_12679);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend12682 = new_Send((Optr)string_12679_Const, SMB__append_, 1, (Optr)PSend12681);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend12683 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend12682);
    Array PThreadedCode12678 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_12679, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send0, (Optr)PSend12680, (Optr)&t_send0, (Optr)PSend12681, (Optr)&t_send1, (Optr)PSend12682, (Optr)&t_send1, (Optr)PSend12683, (Optr)&t_block_return);
    Block PBlock12677 = new_Block_with(empty_Array, empty_Array, PThreadedCode12678, 1, PSend12683);
    // ifFalse:. 
    Send PSend12676 = new_Send((Optr)PSend12675, SMB_ifFalse_, 1, (Optr)PBlock12677);
    Assign PAssign12684 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)VAR_aPinocchioClass_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12688 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    // pclass:. 
    Send PSend12690 = new_Send((Optr)VAR__receiver__1_0, SMB_pclass_, 1, (Optr)VAR_aPinocchioClass_0_0);
    Symbol SMB_parentScope_ = new_Symbol(L"parentScope:");
    // parentScope:. 
    Send PSend12691 = new_Send((Optr)VAR__receiver__1_0, SMB_parentScope_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_scope);
    Array PThreadedCode12689 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_send1, (Optr)PSend12690, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send1, (Optr)PSend12691, (Optr)&t_method_return);
    Block PBlock12687 = new_Block_with(PArray12688, empty_Array, PThreadedCode12689, 2, PSend12690, PSend12691);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12692 = new_Send((Optr)PClassScope_classReference, SMB_new, 0);
    // value:. 
    Send PSend12686 = new_Send((Optr)PBlock12687, SMB_value_, 1, (Optr)PSend12692);
    Assign PAssign12685 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)PSend12686);
    Array PThreadedCode12674 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send0, (Optr)PSend12675, (Optr)&t_send_ifFalse_, (Optr)PSend12676, (Optr)PBlock12677, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12684, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12685, (Optr)&t_push_closure, (Optr)PBlock12687, (Optr)&t_push_class_reference, (Optr)PClassScope_classReference, (Optr)&t_send0, (Optr)PSend12692, (Optr)&t_send1, (Optr)PSend12686, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12672 = new_Method_with(PArray12673, empty_Array, empty_Array, PThreadedCode12674, 4, PSend12676, PAssign12684, PAssign12685, self);
    
    MethodClosure MC_SMB_pclass_ = new_MethodClosure((Method)PMethod12672, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_pclass_, MC_SMB_pclass_);
}


static void init_SMB_visitKeywordAnnotation_() {
    Symbol SMB_visitKeywordAnnotation_ = new_Symbol(L"visitKeywordAnnotation:");
    Variable VAR_anASTKeywordAnnotation_0_0 = new_Variable_named(L"anASTKeywordAnnotation", 0);
    Array PArray12694 = new_Array_with(1, (Optr)VAR_anASTKeywordAnnotation_0_0);
    Variable VAR_annotation_0_1 = new_Variable_named(L"annotation", 0);
    Variable VAR_arguments_0_2 = new_Variable_named(L"arguments", 0);
    Array PArray12695 = new_Array_with(2, (Optr)VAR_annotation_0_1, (Optr)VAR_arguments_0_2);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_arguments = new_Symbol(L"arguments");
    // arguments. 
    Send PSend12700 = new_Send((Optr)VAR_anASTKeywordAnnotation_0_0, SMB_arguments, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12699 = new_Send((Optr)PSend12700, SMB_size, 0);
    // new:. 
    Send PSend12698 = new_Send((Optr)PAnnotation_classReference, SMB_new_, 1, (Optr)PSend12699);
    Assign PAssign12697 = new_Assign((Optr)VAR_annotation_0_1, (Optr)PSend12698);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12701 = new_Send((Optr)VAR_anASTKeywordAnnotation_0_0, SMB_selector, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend12702 = new_Send((Optr)VAR_annotation_0_1, SMB_selector_, 1, (Optr)PSend12701);
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    // arguments. 
    Send PSend12705 = new_Send((Optr)VAR_anASTKeywordAnnotation_0_0, SMB_arguments, 0);
    // acceptOnCollection:. 
    Send PSend12704 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend12705);
    Assign PAssign12703 = new_Assign((Optr)VAR_arguments_0_2, (Optr)PSend12704);
    Variable VAR_object_1_0 = new_Variable_named(L"object", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray12707 = new_Array_with(2, (Optr)VAR_object_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_unwrapConstant_ = new_Symbol(L"unwrapConstant:");
    // unwrapConstant:. 
    Send PSend12709 = new_Send((Optr)self, SMB_unwrapConstant_, 1, (Optr)VAR_object_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12710 = new_Send((Optr)VAR_annotation_0_1, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)PSend12709);
    Array PThreadedCode12708 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_annotation_0_1, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_object_1_0, (Optr)&t_send1, (Optr)PSend12709, (Optr)&t_send2, (Optr)PSend12710, (Optr)&t_method_return);
    Block PBlock12706 = new_Block_with(PArray12707, empty_Array, PThreadedCode12708, 1, PSend12710);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend12711 = new_Send((Optr)VAR_arguments_0_2, SMB_withIndexDo_, 1, (Optr)PBlock12706);
    Array PThreadedCode12696 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push1, (Optr)PAssign12697, (Optr)&t_push_class_reference, (Optr)PAnnotation_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTKeywordAnnotation_0_0, (Optr)&t_send0, (Optr)PSend12700, (Optr)&t_send0, (Optr)PSend12699, (Optr)&t_send1, (Optr)PSend12698, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_annotation_0_1, (Optr)&t_push_variable, (Optr)VAR_anASTKeywordAnnotation_0_0, (Optr)&t_send0, (Optr)PSend12701, (Optr)&t_send1, (Optr)PSend12702, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12703, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anASTKeywordAnnotation_0_0, (Optr)&t_send0, (Optr)PSend12705, (Optr)&t_send1, (Optr)PSend12704, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_push_closure, (Optr)PBlock12706, (Optr)&t_send1, (Optr)PSend12711, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_annotation_0_1, (Optr)&t_method_return);
    Method PMethod12693 = new_Method_with(PArray12694, PArray12695, empty_Array, PThreadedCode12696, 5, PAssign12697, PSend12702, PAssign12703, PSend12711, VAR_annotation_0_1);
    
    MethodClosure MC_SMB_visitKeywordAnnotation_ = new_MethodClosure((Method)PMethod12693, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitKeywordAnnotation_, MC_SMB_visitKeywordAnnotation_);
}


static void init_SMB_visitString_() {
    Symbol SMB_visitString_ = new_Symbol(L"visitString:");
    Variable VAR_anASTString_0_0 = new_Variable_named(L"anASTString", 0);
    Array PArray12713 = new_Array_with(1, (Optr)VAR_anASTString_0_0);
    Symbol SMB_string = new_Symbol(L"string");
    // string. 
    Send PSend12715 = new_Send((Optr)VAR_anASTString_0_0, SMB_string, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12716 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)PSend12715);
    Array PThreadedCode12714 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTString_0_0, (Optr)&t_send0, (Optr)PSend12715, (Optr)&t_send1, (Optr)PSend12716, (Optr)&t_method_return);
    Method PMethod12712 = new_Method_with(PArray12713, empty_Array, empty_Array, PThreadedCode12714, 1, PSend12716);
    
    MethodClosure MC_SMB_visitString_ = new_MethodClosure((Method)PMethod12712, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitString_, MC_SMB_visitString_);
}


static void init_SMB_createReturningMethodBodyFor_() {
    Symbol SMB_createReturningMethodBodyFor_ = new_Symbol(L"createReturningMethodBodyFor:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Array PArray12718 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
    Variable VAR_callec_0_2 = new_Variable_named(L"callec", 0);
    Array PArray12719 = new_Array_with(2, (Optr)VAR_body_0_1, (Optr)VAR_callec_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12722 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend12725 = new_Send((Optr)VAR_aMethod_0_0, SMB_statements, 0);
    Assign PAssign12724 = new_Assign((Optr)VAR_body_0_1, (Optr)PSend12725);
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend12726 = new_Send((Optr)VAR_body_0_1, SMB_last, 0);
    Symbol SMB_isReturnExpression = new_Symbol(L"isReturnExpression");
    // isReturnExpression. 
    Send PSend12727 = new_Send((Optr)PSend12726, SMB_isReturnExpression, 0);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12731 = new_Send((Optr)ASTSelf_classReference, SMB_new, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend12732 = new_Send((Optr)VAR_body_0_1, SMB_add_, 1, (Optr)PSend12731);
    Array PThreadedCode12730 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_push_class_reference, (Optr)ASTSelf_classReference, (Optr)&t_send0, (Optr)PSend12731, (Optr)&t_send1, (Optr)PSend12732, (Optr)&t_block_return);
    Block PBlock12729 = new_Block_with(empty_Array, empty_Array, PThreadedCode12730, 1, PSend12732);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12735 = new_Send((Optr)VAR_body_0_1, SMB_size, 0);
    // last. 
    Send PSend12736 = new_Send((Optr)VAR_body_0_1, SMB_last, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend12737 = new_Send((Optr)PSend12736, SMB_expression, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12738 = new_Send((Optr)VAR_body_0_1, SMB_at_put_, 2, (Optr)PSend12735, (Optr)PSend12737);
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    // hasReturnExpression. 
    Send PSend12739 = new_Send((Optr)VAR_body_0_1, SMB_hasReturnExpression, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    // acceptOnCollection:. 
    Send PSend12743 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)VAR_body_0_1);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend12744 = new_Send((Optr)PSend12743, SMB_asArray, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12745 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12744);
    Array PThreadedCode12742 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send1, (Optr)PSend12743, (Optr)&t_send0, (Optr)PSend12744, (Optr)&t_send1, (Optr)PSend12745, (Optr)&t_block_return);
    Block PBlock12741 = new_Block_with(empty_Array, empty_Array, PThreadedCode12742, 1, PSend12745);
    // ifFalse:. 
    Send PSend12740 = new_Send((Optr)PSend12739, SMB_ifFalse_, 1, (Optr)PBlock12741);
    Array PThreadedCode12734 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send0, (Optr)PSend12735, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send0, (Optr)PSend12736, (Optr)&t_send0, (Optr)PSend12737, (Optr)&t_send2, (Optr)PSend12738, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send0, (Optr)PSend12739, (Optr)&t_send_ifFalse_, (Optr)PSend12740, (Optr)PBlock12741, (Optr)&t_block_return);
    Block PBlock12733 = new_Block_with(empty_Array, empty_Array, PThreadedCode12734, 2, PSend12738, PSend12740);
    // ifFalse:ifTrue:. 
    Send PSend12728 = new_Send((Optr)PSend12727, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock12729, (Optr)PBlock12733);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray12749 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_world = new_Symbol(L"world");
    // world. 
    Send PSend12751 = new_Send((Optr)self, SMB_world, 0);
    Symbol  SMB_Runtime = new_Symbol(L"Runtime");
    Symbol SMB_ensurePackageNamed_ = new_Symbol(L"ensurePackageNamed:");
    Constant SMB_Runtime_Const = new_Constant((Optr)SMB_Runtime);
    // ensurePackageNamed:. 
    Send PSend12752 = new_Send((Optr)PSend12751, SMB_ensurePackageNamed_, 1, (Optr)SMB_Runtime_Const);
    Symbol  SMB_Continue = new_Symbol(L"Continue");
    Symbol SMB_ensureClassReference_ = new_Symbol(L"ensureClassReference:");
    Constant SMB_Continue_Const = new_Constant((Optr)SMB_Continue);
    // ensureClassReference:. 
    Send PSend12753 = new_Send((Optr)PSend12752, SMB_ensureClassReference_, 1, (Optr)SMB_Continue_Const);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend12754 = new_Send((Optr)VAR__receiver__2_0, SMB_receiver_, 1, (Optr)PSend12753);
    Symbol  SMB_on_ = new_Symbol(L"on:");
    Symbol SMB_message_ = new_Symbol(L"message:");
    Constant SMB_on__Const = new_Constant((Optr)SMB_on_);
    // message:. 
    Send PSend12755 = new_Send((Optr)VAR__receiver__2_0, SMB_message_, 1, (Optr)SMB_on__Const);
    Symbol SMB_createCallecBodyFor_ = new_Symbol(L"createCallecBodyFor:");
    // createCallecBodyFor:. 
    Send PSend12756 = new_Send((Optr)self, SMB_createCallecBodyFor_, 1, (Optr)VAR_aMethod_0_0);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend12757 = new_Send((Optr)VAR__receiver__2_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend12756);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend12758 = new_Send((Optr)VAR__receiver__2_0, SMB_yourself, 0);
    Array PThreadedCode12750 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12751, (Optr)&t_push1, (Optr)SMB_Runtime, (Optr)&t_send1, (Optr)PSend12752, (Optr)&t_push1, (Optr)SMB_Continue, (Optr)&t_send1, (Optr)PSend12753, (Optr)&t_send1, (Optr)PSend12754, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)SMB_on_, (Optr)&t_send1, (Optr)PSend12755, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend12756, (Optr)&t_send2, (Optr)PSend12757, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend12758, (Optr)&t_method_return);
    Block PBlock12748 = new_Block_with(PArray12749, empty_Array, PThreadedCode12750, 4, PSend12754, PSend12755, PSend12757, PSend12758);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12759 = new_Send((Optr)PSend_classReference, SMB_new_, 1, (Optr)int_1_Const);
    // value:. 
    Send PSend12747 = new_Send((Optr)PBlock12748, SMB_value_, 1, (Optr)PSend12759);
    Assign PAssign12746 = new_Assign((Optr)VAR_callec_0_2, (Optr)PSend12747);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend12760 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_callec_0_2);
    Array PThreadedCode12723 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign12724, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend12725, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send0, (Optr)PSend12726, (Optr)&t_send0, (Optr)PSend12727, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend12728, (Optr)PBlock12729, (Optr)PBlock12733, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12746, (Optr)&t_push_closure, (Optr)PBlock12748, (Optr)&t_push_class_reference, (Optr)PSend_classReference, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12759, (Optr)&t_send1, (Optr)PSend12747, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_callec_0_2, (Optr)&t_send1, (Optr)PSend12760, (Optr)&t_method_return);
    Block PBlock12721 = new_Block_with(PArray12722, empty_Array, PThreadedCode12723, 4, PAssign12724, PSend12728, PAssign12746, PSend12760);
    // on:. 
    Send PSend12761 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12721);
    Array PThreadedCode12720 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12721, (Optr)&t_send1, (Optr)PSend12761, (Optr)&t_method_return);
    Method PMethod12717 = new_Method_with(PArray12718, PArray12719, empty_Array, PThreadedCode12720, 1, PSend12761);
    
    MethodClosure MC_SMB_createReturningMethodBodyFor_ = new_MethodClosure((Method)PMethod12717, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createReturningMethodBodyFor_, MC_SMB_createReturningMethodBodyFor_);
}


static void init_SMB_parse_() {
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray12763 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_parser = new_Symbol(L"parser");
    // parser. 
    Send PSend12765 = new_Send((Optr)self, SMB_parser, 0);
    Symbol SMB_parseMethod_ = new_Symbol(L"parseMethod:");
    // parseMethod:. 
    Send PSend12766 = new_Send((Optr)PSend12765, SMB_parseMethod_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode12764 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12765, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend12766, (Optr)&t_method_return);
    Method PMethod12762 = new_Method_with(PArray12763, empty_Array, empty_Array, PThreadedCode12764, 1, PSend12766);
    
    MethodClosure MC_SMB_parse_ = new_MethodClosure((Method)PMethod12762, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_parse_, MC_SMB_parse_);
}


static void init_SMB_popScope() {
    Symbol SMB_popScope = new_Symbol(L"popScope");
    Symbol SMB_parentScope = new_Symbol(L"parentScope");
    // parentScope. 
    Send PSend12770 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_parentScope, 0);
    Assign PAssign12769 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)PSend12770);
    Array PThreadedCode12768 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign12769, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send0, (Optr)PSend12770, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12767 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12768, 2, PAssign12769, self);
    
    MethodClosure MC_SMB_popScope = new_MethodClosure((Method)PMethod12767, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_popScope, MC_SMB_popScope);
}


static void init_SMB_selectorFor_() {
    Symbol SMB_selectorFor_ = new_Symbol(L"selectorFor:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Array PArray12772 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend12774 = new_Send((Optr)VAR_aMethod_0_0, SMB_message, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12775 = new_Send((Optr)PSend12774, SMB_selector, 0);
    Array PThreadedCode12773 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend12774, (Optr)&t_send0, (Optr)PSend12775, (Optr)&t_method_return);
    Method PMethod12771 = new_Method_with(PArray12772, empty_Array, empty_Array, PThreadedCode12773, 1, PSend12775);
    
    MethodClosure MC_SMB_selectorFor_ = new_MethodClosure((Method)PMethod12771, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_selectorFor_, MC_SMB_selectorFor_);
}


static void init_SMB_currentCallecVariable() {
    Symbol SMB_currentCallecVariable = new_Symbol(L"currentCallecVariable");
    Array PThreadedCode12777 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_currentCallecVariable, (Optr)&t_method_return);
    Method PMethod12776 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12777, 1, slot_Smalltalk_Compiler_Compiler_currentCallecVariable);
    
    MethodClosure MC_SMB_currentCallecVariable = new_MethodClosure((Method)PMethod12776, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_currentCallecVariable, MC_SMB_currentCallecVariable);
}


static void init_SMB_createMethod_with_() {
    Symbol SMB_createMethod_with_ = new_Symbol(L"createMethod:with:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
    Array PArray12779 = new_Array_with(2, (Optr)VAR_aMethod_0_0, (Optr)VAR_body_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12782 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol  SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_annotatedWith_ = new_Symbol(L"annotatedWith:");
    Constant SMB_pPrimitive_plugin__Const = new_Constant((Optr)SMB_pPrimitive_plugin_);
    // annotatedWith:. 
    Send PSend12784 = new_Send((Optr)VAR_aMethod_0_0, SMB_annotatedWith_, 1, (Optr)SMB_pPrimitive_plugin__Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_withAll_ = new_Symbol(L"withAll:");
    // withAll:. 
    Send PSend12788 = new_Send((Optr)PNativeMethod_classReference, SMB_withAll_, 1, (Optr)VAR_body_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12789 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12788);
    Array PThreadedCode12787 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PNativeMethod_classReference, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send1, (Optr)PSend12788, (Optr)&t_send1, (Optr)PSend12789, (Optr)&t_block_return);
    Block PBlock12786 = new_Block_with(empty_Array, empty_Array, PThreadedCode12787, 1, PSend12789);
    // ifTrue:. 
    Send PSend12785 = new_Send((Optr)PSend12784, SMB_ifTrue_, 1, (Optr)PBlock12786);
    Symbol  SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Constant SMB_pPrimitive_plugin_code__Const = new_Constant((Optr)SMB_pPrimitive_plugin_code_);
    // annotatedWith:. 
    Send PSend12790 = new_Send((Optr)VAR_aMethod_0_0, SMB_annotatedWith_, 1, (Optr)SMB_pPrimitive_plugin_code__Const);
    // withAll:. 
    Send PSend12794 = new_Send((Optr)PNativeMethod_classReference, SMB_withAll_, 1, (Optr)VAR_body_0_1);
    // escape:. 
    Send PSend12795 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12794);
    Array PThreadedCode12793 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PNativeMethod_classReference, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send1, (Optr)PSend12794, (Optr)&t_send1, (Optr)PSend12795, (Optr)&t_block_return);
    Block PBlock12792 = new_Block_with(empty_Array, empty_Array, PThreadedCode12793, 1, PSend12795);
    // ifTrue:. 
    Send PSend12791 = new_Send((Optr)PSend12790, SMB_ifTrue_, 1, (Optr)PBlock12792);
    Symbol  SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Constant SMB_pinocchioReflective__Const = new_Constant((Optr)SMB_pinocchioReflective_);
    // annotatedWith:. 
    Send PSend12796 = new_Send((Optr)VAR_aMethod_0_0, SMB_annotatedWith_, 1, (Optr)SMB_pinocchioReflective__Const);
    // withAll:. 
    Send PSend12800 = new_Send((Optr)PReflectionMethod_classReference, SMB_withAll_, 1, (Optr)VAR_body_0_1);
    // escape:. 
    Send PSend12801 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12800);
    Array PThreadedCode12799 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PReflectionMethod_classReference, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send1, (Optr)PSend12800, (Optr)&t_send1, (Optr)PSend12801, (Optr)&t_block_return);
    Block PBlock12798 = new_Block_with(empty_Array, empty_Array, PThreadedCode12799, 1, PSend12801);
    // ifTrue:. 
    Send PSend12797 = new_Send((Optr)PSend12796, SMB_ifTrue_, 1, (Optr)PBlock12798);
    // withAll:. 
    Send PSend12802 = new_Send((Optr)PMethod_classReference, SMB_withAll_, 1, (Optr)VAR_body_0_1);
    Array PThreadedCode12783 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_push1, (Optr)SMB_pPrimitive_plugin_, (Optr)&t_send1, (Optr)PSend12784, (Optr)&t_send_ifTrue_, (Optr)PSend12785, (Optr)PBlock12786, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_push1, (Optr)SMB_pPrimitive_plugin_code_, (Optr)&t_send1, (Optr)PSend12790, (Optr)&t_send_ifTrue_, (Optr)PSend12791, (Optr)PBlock12792, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_push1, (Optr)SMB_pinocchioReflective_, (Optr)&t_send1, (Optr)PSend12796, (Optr)&t_send_ifTrue_, (Optr)PSend12797, (Optr)PBlock12798, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PMethod_classReference, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send1, (Optr)PSend12802, (Optr)&t_method_return);
    Block PBlock12781 = new_Block_with(PArray12782, empty_Array, PThreadedCode12783, 4, PSend12785, PSend12791, PSend12797, PSend12802);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12803 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12781);
    Array PThreadedCode12780 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12781, (Optr)&t_send1, (Optr)PSend12803, (Optr)&t_method_return);
    Method PMethod12778 = new_Method_with(PArray12779, empty_Array, empty_Array, PThreadedCode12780, 1, PSend12803);
    
    MethodClosure MC_SMB_createMethod_with_ = new_MethodClosure((Method)PMethod12778, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createMethod_with_, MC_SMB_createMethod_with_);
}


static void init_SMB_visitMethod_() {
    Symbol SMB_visitMethod_ = new_Symbol(L"visitMethod:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Array PArray12805 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
    Variable VAR_method_0_2 = new_Variable_named(L"method", 0);
    Variable VAR_selector_0_3 = new_Variable_named(L"selector", 0);
    Variable VAR_methodClosure_0_4 = new_Variable_named(L"methodClosure", 0);
    Array PArray12806 = new_Array_with(4, (Optr)VAR_body_0_1, (Optr)VAR_method_0_2, (Optr)VAR_selector_0_3, (Optr)VAR_methodClosure_0_4);
    Assign PAssign12808 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_currentMethod, (Optr)VAR_aMethod_0_0);
    Symbol SMB_pushScope = new_Symbol(L"pushScope");
    // pushScope. 
    Send PSend12809 = new_Send((Optr)self, SMB_pushScope, 0);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend12810 = new_Send((Optr)VAR_aMethod_0_0, SMB_message, 0);
    Symbol SMB_parameters = new_Symbol(L"parameters");
    // parameters. 
    Send PSend12811 = new_Send((Optr)PSend12810, SMB_parameters, 0);
    Symbol SMB_declareAll_ = new_Symbol(L"declareAll:");
    // declareAll:. 
    Send PSend12812 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_declareAll_, 1, (Optr)PSend12811);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend12813 = new_Send((Optr)VAR_aMethod_0_0, SMB_temporaries, 0);
    // declareAll:. 
    Send PSend12814 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_declareAll_, 1, (Optr)PSend12813);
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    // hasReturnExpression. 
    Send PSend12815 = new_Send((Optr)VAR_aMethod_0_0, SMB_hasReturnExpression, 0);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    Symbol SMB_createNonReturningMethodBodyFor_ = new_Symbol(L"createNonReturningMethodBodyFor:");
    // createNonReturningMethodBodyFor:. 
    Send PSend12820 = new_Send((Optr)self, SMB_createNonReturningMethodBodyFor_, 1, (Optr)VAR_aMethod_0_0);
    Assign PAssign12819 = new_Assign((Optr)VAR_body_0_1, (Optr)PSend12820);
    Array PThreadedCode12818 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign12819, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend12820, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock12817 = new_Block_with(empty_Array, empty_Array, PThreadedCode12818, 1, PAssign12819);
    Symbol SMB_createReturningMethodBodyFor_ = new_Symbol(L"createReturningMethodBodyFor:");
    // createReturningMethodBodyFor:. 
    Send PSend12824 = new_Send((Optr)self, SMB_createReturningMethodBodyFor_, 1, (Optr)VAR_aMethod_0_0);
    Assign PAssign12823 = new_Assign((Optr)VAR_body_0_1, (Optr)PSend12824);
    Array PThreadedCode12822 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign12823, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend12824, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock12821 = new_Block_with(empty_Array, empty_Array, PThreadedCode12822, 1, PAssign12823);
    // ifFalse:ifTrue:. 
    Send PSend12816 = new_Send((Optr)PSend12815, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock12817, (Optr)PBlock12821);
    Symbol SMB_selectorFor_ = new_Symbol(L"selectorFor:");
    // selectorFor:. 
    Send PSend12826 = new_Send((Optr)self, SMB_selectorFor_, 1, (Optr)VAR_aMethod_0_0);
    Assign PAssign12825 = new_Assign((Optr)VAR_selector_0_3, (Optr)PSend12826);
    Symbol SMB_createMethod_with_ = new_Symbol(L"createMethod:with:");
    // createMethod:with:. 
    Send PSend12828 = new_Send((Optr)self, SMB_createMethod_with_, 2, (Optr)VAR_aMethod_0_0, (Optr)VAR_body_0_1);
    Assign PAssign12827 = new_Assign((Optr)VAR_method_0_2, (Optr)PSend12828);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12830 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    // message. 
    Send PSend12832 = new_Send((Optr)VAR_aMethod_0_0, SMB_message, 0);
    // parameters. 
    Send PSend12833 = new_Send((Optr)PSend12832, SMB_parameters, 0);
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    // acceptOnCollection:. 
    Send PSend12834 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend12833);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend12835 = new_Send((Optr)PSend12834, SMB_asArray, 0);
    // temporaries. 
    Send PSend12836 = new_Send((Optr)VAR_aMethod_0_0, SMB_temporaries, 0);
    // acceptOnCollection:. 
    Send PSend12837 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend12836);
    // asArray. 
    Send PSend12838 = new_Send((Optr)PSend12837, SMB_asArray, 0);
    Symbol SMB_params_locals_ = new_Symbol(L"params:locals:");
    // params:locals:. 
    Send PSend12839 = new_Send((Optr)VAR__receiver__1_0, SMB_params_locals_, 2, (Optr)PSend12835, (Optr)PSend12838);
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend12840 = new_Send((Optr)VAR_aMethod_0_0, SMB_annotations, 0);
    // acceptOnCollection:. 
    Send PSend12841 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend12840);
    // asArray. 
    Send PSend12842 = new_Send((Optr)PSend12841, SMB_asArray, 0);
    Symbol SMB_annotations_ = new_Symbol(L"annotations:");
    // annotations:. 
    Send PSend12843 = new_Send((Optr)VAR__receiver__1_0, SMB_annotations_, 1, (Optr)PSend12842);
    Symbol SMB_createPInfo = new_Symbol(L"createPInfo");
    // createPInfo. 
    Send PSend12844 = new_Send((Optr)self, SMB_createPInfo, 0);
    Symbol SMB_info_ = new_Symbol(L"info:");
    // info:. 
    Send PSend12845 = new_Send((Optr)VAR__receiver__1_0, SMB_info_, 1, (Optr)PSend12844);
    Array PThreadedCode12831 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend12832, (Optr)&t_send0, (Optr)PSend12833, (Optr)&t_send1, (Optr)PSend12834, (Optr)&t_send0, (Optr)PSend12835, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend12836, (Optr)&t_send1, (Optr)PSend12837, (Optr)&t_send0, (Optr)PSend12838, (Optr)&t_send2, (Optr)PSend12839, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend12840, (Optr)&t_send1, (Optr)PSend12841, (Optr)&t_send0, (Optr)PSend12842, (Optr)&t_send1, (Optr)PSend12843, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12844, (Optr)&t_send1, (Optr)PSend12845, (Optr)&t_method_return);
    Block PBlock12829 = new_Block_with(PArray12830, empty_Array, PThreadedCode12831, 3, PSend12839, PSend12843, PSend12845);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12846 = new_Send((Optr)PBlock12829, SMB_value_, 1, (Optr)VAR_method_0_2);
    Array PArray12850 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_code_ = new_Symbol(L"code:");
    // code:. 
    Send PSend12852 = new_Send((Optr)VAR__receiver__1_0, SMB_code_, 1, (Optr)VAR_method_0_2);
    Symbol SMB_host_ = new_Symbol(L"host:");
    // host:. 
    Send PSend12853 = new_Send((Optr)VAR__receiver__1_0, SMB_host_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend12854 = new_Send((Optr)VAR__receiver__1_0, SMB_selector_, 1, (Optr)VAR_selector_0_3);
    Array PThreadedCode12851 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send1, (Optr)PSend12852, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send1, (Optr)PSend12853, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_selector_0_3, (Optr)&t_send1, (Optr)PSend12854, (Optr)&t_method_return);
    Block PBlock12849 = new_Block_with(PArray12850, empty_Array, PThreadedCode12851, 3, PSend12852, PSend12853, PSend12854);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12855 = new_Send((Optr)PMethodClosure_classReference, SMB_new, 0);
    // value:. 
    Send PSend12848 = new_Send((Optr)PBlock12849, SMB_value_, 1, (Optr)PSend12855);
    Assign PAssign12847 = new_Assign((Optr)VAR_methodClosure_0_4, (Optr)PSend12848);
    Symbol SMB_popScope = new_Symbol(L"popScope");
    // popScope. 
    Send PSend12856 = new_Send((Optr)self, SMB_popScope, 0);
    Symbol SMB_compileThreadedMethod_ = new_Symbol(L"compileThreadedMethod:");
    // compileThreadedMethod:. 
    Send PSend12857 = new_Send((Optr)self, SMB_compileThreadedMethod_, 1, (Optr)VAR_method_0_2);
    Array PThreadedCode12807 = instantiate_Array_with(ThreadedCode_Class, 0, 91, (Optr)&t_push1, (Optr)PAssign12808, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12809, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend12810, (Optr)&t_send0, (Optr)PSend12811, (Optr)&t_send1, (Optr)PSend12812, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend12813, (Optr)&t_send1, (Optr)PSend12814, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend12815, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend12816, (Optr)PBlock12817, (Optr)PBlock12821, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12825, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend12826, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12827, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_send2, (Optr)PSend12828, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock12829, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send1, (Optr)PSend12846, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12847, (Optr)&t_push_closure, (Optr)PBlock12849, (Optr)&t_push_class_reference, (Optr)PMethodClosure_classReference, (Optr)&t_send0, (Optr)PSend12855, (Optr)&t_send1, (Optr)PSend12848, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12856, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send1, (Optr)PSend12857, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_methodClosure_0_4, (Optr)&t_method_return);
    Method PMethod12804 = new_Method_with(PArray12805, PArray12806, empty_Array, PThreadedCode12807, 12, PAssign12808, PSend12809, PSend12812, PSend12814, PSend12816, PAssign12825, PAssign12827, PSend12846, PAssign12847, PSend12856, PSend12857, VAR_methodClosure_0_4);
    
    MethodClosure MC_SMB_visitMethod_ = new_MethodClosure((Method)PMethod12804, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitMethod_, MC_SMB_visitMethod_);
}


static void init_SMB_createNonReturningMethodBodyFor_() {
    Symbol SMB_createNonReturningMethodBodyFor_ = new_Symbol(L"createNonReturningMethodBodyFor:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Array PArray12859 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Variable VAR_statements_0_1 = new_Variable_named(L"statements", 0);
    Array PArray12860 = new_Array_with(1, (Optr)VAR_statements_0_1);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend12863 = new_Send((Optr)VAR_aMethod_0_0, SMB_statements, 0);
    Assign PAssign12862 = new_Assign((Optr)VAR_statements_0_1, (Optr)PSend12863);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12864 = new_Send((Optr)ASTSelf_classReference, SMB_new, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend12865 = new_Send((Optr)VAR_statements_0_1, SMB_add_, 1, (Optr)PSend12864);
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    // acceptOnCollection:. 
    Send PSend12866 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)VAR_statements_0_1);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend12867 = new_Send((Optr)PSend12866, SMB_asArray, 0);
    Array PThreadedCode12861 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign12862, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send0, (Optr)PSend12863, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_statements_0_1, (Optr)&t_push_class_reference, (Optr)ASTSelf_classReference, (Optr)&t_send0, (Optr)PSend12864, (Optr)&t_send1, (Optr)PSend12865, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_statements_0_1, (Optr)&t_send1, (Optr)PSend12866, (Optr)&t_send0, (Optr)PSend12867, (Optr)&t_method_return);
    Method PMethod12858 = new_Method_with(PArray12859, PArray12860, empty_Array, PThreadedCode12861, 3, PAssign12862, PSend12865, PSend12867);
    
    MethodClosure MC_SMB_createNonReturningMethodBodyFor_ = new_MethodClosure((Method)PMethod12858, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createNonReturningMethodBodyFor_, MC_SMB_createNonReturningMethodBodyFor_);
}


static void init_SMB_visitSymbol_() {
    Symbol SMB_visitSymbol_ = new_Symbol(L"visitSymbol:");
    Variable VAR_anASTSymbol_0_0 = new_Variable_named(L"anASTSymbol", 0);
    Array PArray12869 = new_Array_with(1, (Optr)VAR_anASTSymbol_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend12871 = new_Send((Optr)VAR_anASTSymbol_0_0, SMB_asSymbol, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12872 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)PSend12871);
    Array PThreadedCode12870 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTSymbol_0_0, (Optr)&t_send0, (Optr)PSend12871, (Optr)&t_send1, (Optr)PSend12872, (Optr)&t_method_return);
    Method PMethod12868 = new_Method_with(PArray12869, empty_Array, empty_Array, PThreadedCode12870, 1, PSend12872);
    
    MethodClosure MC_SMB_visitSymbol_ = new_MethodClosure((Method)PMethod12868, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitSymbol_, MC_SMB_visitSymbol_);
}


static void init_SMB_createSendTo_() {
    Symbol SMB_createSendTo_ = new_Symbol(L"createSendTo:");
    Variable VAR_receiver_0_0 = new_Variable_named(L"receiver", 0);
    Array PArray12874 = new_Array_with(1, (Optr)VAR_receiver_0_0);
    Symbol SMB_createSendTo_sized_ = new_Symbol(L"createSendTo:sized:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // createSendTo:sized:. 
    Send PSend12876 = new_Send((Optr)self, SMB_createSendTo_sized_, 2, (Optr)VAR_receiver_0_0, (Optr)int_0_Const);
    Array PThreadedCode12875 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend12876, (Optr)&t_method_return);
    Method PMethod12873 = new_Method_with(PArray12874, empty_Array, empty_Array, PThreadedCode12875, 1, PSend12876);
    
    MethodClosure MC_SMB_createSendTo_ = new_MethodClosure((Method)PMethod12873, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createSendTo_, MC_SMB_createSendTo_);
}


static void init_SMB_createCallecBodyFor_() {
    Symbol SMB_createCallecBodyFor_ = new_Symbol(L"createCallecBodyFor:");
    Variable VAR_anASTMethod_0_0 = new_Variable_named(L"anASTMethod", 0);
    Array PArray12878 = new_Array_with(1, (Optr)VAR_anASTMethod_0_0);
    Variable VAR_body_0_1 = new_Variable_named(L"body", 0);
    Variable VAR_statements_0_2 = new_Variable_named(L"statements", 0);
    Variable VAR_statement_0_3 = new_Variable_named(L"statement", 0);
    Array PArray12879 = new_Array_with(3, (Optr)VAR_body_0_1, (Optr)VAR_statements_0_2, (Optr)VAR_statement_0_3);
    Symbol SMB_pushScope = new_Symbol(L"pushScope");
    // pushScope. 
    Send PSend12881 = new_Send((Optr)self, SMB_pushScope, 0);
    Symbol  SMB___return__ = new_Symbol(L"_return_");
    Symbol SMB_depth = new_Symbol(L"depth");
    // depth. 
    Send PSend12882 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_depth, 0);
    Symbol SMB_named_at_ = new_Symbol(L"named:at:");
    Constant SMB___return___Const = new_Constant((Optr)SMB___return__);
    // named:at:. 
    Send PSend12883 = new_Send((Optr)PVariable_classReference, SMB_named_at_, 2, (Optr)SMB___return___Const, (Optr)PSend12882);
    Symbol SMB_currentCallecVariable_ = new_Symbol(L"currentCallecVariable:");
    // currentCallecVariable:. 
    Send PSend12884 = new_Send((Optr)self, SMB_currentCallecVariable_, 1, (Optr)PSend12883);
    Symbol SMB_createBlock_ = new_Symbol(L"createBlock:");
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend12888 = new_Send((Optr)VAR_anASTMethod_0_0, SMB_statements, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12887 = new_Send((Optr)PSend12888, SMB_size, 0);
    // createBlock:. 
    Send PSend12886 = new_Send((Optr)self, SMB_createBlock_, 1, (Optr)PSend12887);
    Assign PAssign12885 = new_Assign((Optr)VAR_body_0_1, (Optr)PSend12886);
    Symbol SMB_currentCallecVariable = new_Symbol(L"currentCallecVariable");
    // currentCallecVariable. 
    Send PSend12889 = new_Send((Optr)self, SMB_currentCallecVariable, 0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend12890 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)PSend12889);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12891 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Symbol SMB_params_locals_ = new_Symbol(L"params:locals:");
    // params:locals:. 
    Send PSend12892 = new_Send((Optr)VAR_body_0_1, SMB_params_locals_, 2, (Optr)PSend12890, (Optr)PSend12891);
    // statements. 
    Send PSend12894 = new_Send((Optr)VAR_anASTMethod_0_0, SMB_statements, 0);
    Assign PAssign12893 = new_Assign((Optr)VAR_statements_0_2, (Optr)PSend12894);
    // size. 
    Send PSend12895 = new_Send((Optr)VAR_statements_0_2, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray12897 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12901 = new_Send((Optr)VAR_statements_0_2, SMB_at_, 1, (Optr)VAR_index_1_0);
    // visit:. 
    Send PSend12900 = new_Send((Optr)self, SMB_visit_, 1, (Optr)PSend12901);
    Assign PAssign12899 = new_Assign((Optr)VAR_statement_0_3, (Optr)PSend12900);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12902 = new_Send((Optr)VAR_body_0_1, SMB_at_put_, 2, (Optr)VAR_index_1_0, (Optr)VAR_statement_0_3);
    Array PThreadedCode12898 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign12899, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_statements_0_2, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend12901, (Optr)&t_send1, (Optr)PSend12900, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_push_variable, (Optr)VAR_statement_0_3, (Optr)&t_send2, (Optr)PSend12902, (Optr)&t_method_return);
    Block PBlock12896 = new_Block_with(PArray12897, empty_Array, PThreadedCode12898, 2, PAssign12899, PSend12902);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend12903 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend12895, (Optr)PBlock12896);
    Symbol SMB_popScope = new_Symbol(L"popScope");
    // popScope. 
    Send PSend12904 = new_Send((Optr)self, SMB_popScope, 0);
    Array PThreadedCode12880 = instantiate_Array_with(ThreadedCode_Class, 0, 73, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12881, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PVariable_classReference, (Optr)&t_push1, (Optr)SMB___return__, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send0, (Optr)PSend12882, (Optr)&t_send2, (Optr)PSend12883, (Optr)&t_send1, (Optr)PSend12884, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12885, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anASTMethod_0_0, (Optr)&t_send0, (Optr)PSend12888, (Optr)&t_send0, (Optr)PSend12887, (Optr)&t_send1, (Optr)PSend12886, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12889, (Optr)&t_send1, (Optr)PSend12890, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend12891, (Optr)&t_send2, (Optr)PSend12892, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12893, (Optr)&t_push_variable, (Optr)VAR_anASTMethod_0_0, (Optr)&t_send0, (Optr)PSend12894, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_statements_0_2, (Optr)&t_send0, (Optr)PSend12895, (Optr)&t_push_closure, (Optr)PBlock12896, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend12903, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12904, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_body_0_1, (Optr)&t_method_return);
    Method PMethod12877 = new_Method_with(PArray12878, PArray12879, empty_Array, PThreadedCode12880, 8, PSend12881, PSend12884, PAssign12885, PSend12892, PAssign12893, PSend12903, PSend12904, VAR_body_0_1);
    
    MethodClosure MC_SMB_createCallecBodyFor_ = new_MethodClosure((Method)PMethod12877, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createCallecBodyFor_, MC_SMB_createCallecBodyFor_);
}


static void init_SMB_currentBlock_() {
    Symbol SMB_currentBlock_ = new_Symbol(L"currentBlock:");
    Variable VAR_aPinocchioBlock_0_0 = new_Variable_named(L"aPinocchioBlock", 0);
    Array PArray12906 = new_Array_with(1, (Optr)VAR_aPinocchioBlock_0_0);
    Assign PAssign12908 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_currentBlock, (Optr)VAR_aPinocchioBlock_0_0);
    Array PThreadedCode12907 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign12908, (Optr)&t_push_variable, (Optr)VAR_aPinocchioBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12905 = new_Method_with(PArray12906, empty_Array, empty_Array, PThreadedCode12907, 2, PAssign12908, self);
    
    MethodClosure MC_SMB_currentBlock_ = new_MethodClosure((Method)PMethod12905, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_currentBlock_, MC_SMB_currentBlock_);
}


static void init_SMB_visitCharacter_() {
    Symbol SMB_visitCharacter_ = new_Symbol(L"visitCharacter:");
    Variable VAR_anASTCharacter_0_0 = new_Variable_named(L"anASTCharacter", 0);
    Array PArray12910 = new_Array_with(1, (Optr)VAR_anASTCharacter_0_0);
    Symbol SMB_char = new_Symbol(L"char");
    // char. 
    Send PSend12912 = new_Send((Optr)VAR_anASTCharacter_0_0, SMB_char, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12913 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)PSend12912);
    Array PThreadedCode12911 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTCharacter_0_0, (Optr)&t_send0, (Optr)PSend12912, (Optr)&t_send1, (Optr)PSend12913, (Optr)&t_method_return);
    Method PMethod12909 = new_Method_with(PArray12910, empty_Array, empty_Array, PThreadedCode12911, 1, PSend12913);
    
    MethodClosure MC_SMB_visitCharacter_ = new_MethodClosure((Method)PMethod12909, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitCharacter_, MC_SMB_visitCharacter_);
}


static void init_SMB_visitSelf_() {
    Symbol SMB_visitSelf_ = new_Symbol(L"visitSelf:");
    Variable VAR_aSelf_0_0 = new_Variable_named(L"aSelf", 0);
    Array PArray12915 = new_Array_with(1, (Optr)VAR_aSelf_0_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend12917 = new_Send((Optr)PSelf_classReference, SMB_instance, 0);
    Array PThreadedCode12916 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PSelf_classReference, (Optr)&t_send0, (Optr)PSend12917, (Optr)&t_method_return);
    Method PMethod12914 = new_Method_with(PArray12915, empty_Array, empty_Array, PThreadedCode12916, 1, PSend12917);
    
    MethodClosure MC_SMB_visitSelf_ = new_MethodClosure((Method)PMethod12914, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitSelf_, MC_SMB_visitSelf_);
}


static void init_SMB_unwrapConstant_() {
    Symbol SMB_unwrapConstant_ = new_Symbol(L"unwrapConstant:");
    Variable VAR_aConstant_0_0 = new_Variable_named(L"aConstant", 0);
    Array PArray12919 = new_Array_with(1, (Optr)VAR_aConstant_0_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend12921 = new_Send((Optr)VAR_aConstant_0_0, SMB_isKindOf_, 1, (Optr)PConstant_classReference);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_12925 = new_String(L"Constant expected");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_12925_Const = new_Constant((Optr)string_12925);
    // error:. 
    Send PSend12926 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_12925_Const);
    Array PThreadedCode12924 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_12925, (Optr)&t_send1, (Optr)PSend12926, (Optr)&t_block_return);
    Block PBlock12923 = new_Block_with(empty_Array, empty_Array, PThreadedCode12924, 1, PSend12926);
    // ifFalse:. 
    Send PSend12922 = new_Send((Optr)PSend12921, SMB_ifFalse_, 1, (Optr)PBlock12923);
    Symbol SMB_constant = new_Symbol(L"constant");
    // constant. 
    Send PSend12927 = new_Send((Optr)VAR_aConstant_0_0, SMB_constant, 0);
    Array PThreadedCode12920 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_aConstant_0_0, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_send1, (Optr)PSend12921, (Optr)&t_send_ifFalse_, (Optr)PSend12922, (Optr)PBlock12923, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aConstant_0_0, (Optr)&t_send0, (Optr)PSend12927, (Optr)&t_method_return);
    Method PMethod12918 = new_Method_with(PArray12919, empty_Array, empty_Array, PThreadedCode12920, 2, PSend12922, PSend12927);
    
    MethodClosure MC_SMB_unwrapConstant_ = new_MethodClosure((Method)PMethod12918, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_unwrapConstant_, MC_SMB_unwrapConstant_);
}


static void init_SMB_parser() {
    Symbol SMB_parser = new_Symbol(L"parser");
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend12930 = new_Send((Optr)PSmalltalkParser_classReference, SMB_instance, 0);
    Array PThreadedCode12929 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PSmalltalkParser_classReference, (Optr)&t_send0, (Optr)PSend12930, (Optr)&t_method_return);
    Method PMethod12928 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12929, 1, PSend12930);
    
    MethodClosure MC_SMB_parser = new_MethodClosure((Method)PMethod12928, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_parser, MC_SMB_parser);
}


static void init_SMB_visitMessageCascadeExpression_() {
    Symbol SMB_visitMessageCascadeExpression_ = new_Symbol(L"visitMessageCascadeExpression:");
    Variable VAR_anASTMessageCascadeExpression_0_0 = new_Variable_named(L"anASTMessageCascadeExpression", 0);
    Array PArray12932 = new_Array_with(1, (Optr)VAR_anASTMessageCascadeExpression_0_0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_block_0_2 = new_Variable_named(L"block", 0);
    Variable VAR_send_0_3 = new_Variable_named(L"send", 0);
    Array PArray12933 = new_Array_with(3, (Optr)VAR_receiver_0_1, (Optr)VAR_block_0_2, (Optr)VAR_send_0_3);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12937 = new_Send((Optr)ASTVariable_classReference, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    Symbol  SMB___receiver__ = new_Symbol(L"_receiver_");
    Constant SMB___receiver___Const = new_Constant((Optr)SMB___receiver__);
    // name:. 
    Send PSend12936 = new_Send((Optr)PSend12937, SMB_name_, 1, (Optr)SMB___receiver___Const);
    Assign PAssign12935 = new_Assign((Optr)VAR_receiver_0_1, (Optr)PSend12936);
    Symbol SMB_cascades = new_Symbol(L"cascades");
    // cascades. 
    Send PSend12938 = new_Send((Optr)VAR_anASTMessageCascadeExpression_0_0, SMB_cascades, 0);
    Variable VAR_message_1_0 = new_Variable_named(L"message", 1);
    Array PArray12940 = new_Array_with(1, (Optr)VAR_message_1_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend12942 = new_Send((Optr)VAR_message_1_0, SMB_receiver_, 1, (Optr)VAR_receiver_0_1);
    Array PThreadedCode12941 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_message_1_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend12942, (Optr)&t_method_return);
    Block PBlock12939 = new_Block_with(PArray12940, empty_Array, PThreadedCode12941, 1, PSend12942);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend12943 = new_Send((Optr)PSend12938, SMB_do_, 1, (Optr)PBlock12939);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12947 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend12949 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_receiver_0_1);
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    // parameters:. 
    Send PSend12950 = new_Send((Optr)VAR__receiver__1_0, SMB_parameters_, 1, (Optr)PSend12949);
    // cascades. 
    Send PSend12951 = new_Send((Optr)VAR_anASTMessageCascadeExpression_0_0, SMB_cascades, 0);
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    // statements:. 
    Send PSend12952 = new_Send((Optr)VAR__receiver__1_0, SMB_statements_, 1, (Optr)PSend12951);
    Array PThreadedCode12948 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend12949, (Optr)&t_send1, (Optr)PSend12950, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anASTMessageCascadeExpression_0_0, (Optr)&t_send0, (Optr)PSend12951, (Optr)&t_send1, (Optr)PSend12952, (Optr)&t_method_return);
    Block PBlock12946 = new_Block_with(PArray12947, empty_Array, PThreadedCode12948, 2, PSend12950, PSend12952);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // new. 
    Send PSend12953 = new_Send((Optr)ASTBlock_classReference, SMB_new, 0);
    // value:. 
    Send PSend12945 = new_Send((Optr)PBlock12946, SMB_value_, 1, (Optr)PSend12953);
    Assign PAssign12944 = new_Assign((Optr)VAR_block_0_2, (Optr)PSend12945);
    Array PArray12957 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    // receiver:. 
    Send PSend12959 = new_Send((Optr)VAR__receiver__1_0, SMB_receiver_, 1, (Optr)VAR_block_0_2);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend12960 = new_Send((Optr)VAR_anASTMessageCascadeExpression_0_0, SMB_receiver, 0);
    // with:. 
    Send PSend12961 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)PSend12960);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend12962 = new_Send((Optr)VAR__receiver__1_0, SMB_arguments_, 1, (Optr)PSend12961);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Constant SMB_value__Const = new_Constant((Optr)SMB_value_);
    // selector:. 
    Send PSend12963 = new_Send((Optr)VAR__receiver__1_0, SMB_selector_, 1, (Optr)SMB_value__Const);
    Array PThreadedCode12958 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_block_0_2, (Optr)&t_send1, (Optr)PSend12959, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anASTMessageCascadeExpression_0_0, (Optr)&t_send0, (Optr)PSend12960, (Optr)&t_send1, (Optr)PSend12961, (Optr)&t_send1, (Optr)PSend12962, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_value_, (Optr)&t_send1, (Optr)PSend12963, (Optr)&t_method_return);
    Block PBlock12956 = new_Block_with(PArray12957, empty_Array, PThreadedCode12958, 3, PSend12959, PSend12962, PSend12963);
    // new. 
    Send PSend12964 = new_Send((Optr)ASTMessageExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend12955 = new_Send((Optr)PBlock12956, SMB_value_, 1, (Optr)PSend12964);
    Assign PAssign12954 = new_Assign((Optr)VAR_send_0_3, (Optr)PSend12955);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend12965 = new_Send((Optr)self, SMB_visit_, 1, (Optr)VAR_send_0_3);
    Array PThreadedCode12934 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign12935, (Optr)&t_push_class_reference, (Optr)ASTVariable_classReference, (Optr)&t_send0, (Optr)PSend12937, (Optr)&t_push1, (Optr)SMB___receiver__, (Optr)&t_send1, (Optr)PSend12936, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_anASTMessageCascadeExpression_0_0, (Optr)&t_send0, (Optr)PSend12938, (Optr)&t_push_closure, (Optr)PBlock12939, (Optr)&t_send1, (Optr)PSend12943, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12944, (Optr)&t_push_closure, (Optr)PBlock12946, (Optr)&t_push_class_reference, (Optr)ASTBlock_classReference, (Optr)&t_send0, (Optr)PSend12953, (Optr)&t_send1, (Optr)PSend12945, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12954, (Optr)&t_push_closure, (Optr)PBlock12956, (Optr)&t_push_class_reference, (Optr)ASTMessageExpression_classReference, (Optr)&t_send0, (Optr)PSend12964, (Optr)&t_send1, (Optr)PSend12955, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_send_0_3, (Optr)&t_send1, (Optr)PSend12965, (Optr)&t_method_return);
    Method PMethod12931 = new_Method_with(PArray12932, PArray12933, empty_Array, PThreadedCode12934, 5, PAssign12935, PSend12943, PAssign12944, PAssign12954, PSend12965);
    
    MethodClosure MC_SMB_visitMessageCascadeExpression_ = new_MethodClosure((Method)PMethod12931, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitMessageCascadeExpression_, MC_SMB_visitMessageCascadeExpression_);
}


static void init_SMB_visitUnaryExpression_() {
    Symbol SMB_visitUnaryExpression_ = new_Symbol(L"visitUnaryExpression:");
    Variable VAR_anASTUnaryExpression_0_0 = new_Variable_named(L"anASTUnaryExpression", 0);
    Array PArray12967 = new_Array_with(1, (Optr)VAR_anASTUnaryExpression_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12970 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12972 = new_Send((Optr)VAR_anASTUnaryExpression_0_0, SMB_selector, 0);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend12973 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)PSend12972);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // new:. 
    Send PSend12974 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_0_Const);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend12975 = new_Send((Optr)VAR__receiver__1_0, SMB_arguments_, 1, (Optr)PSend12974);
    Array PThreadedCode12971 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anASTUnaryExpression_0_0, (Optr)&t_send0, (Optr)PSend12972, (Optr)&t_send1, (Optr)PSend12973, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12974, (Optr)&t_send1, (Optr)PSend12975, (Optr)&t_method_return);
    Block PBlock12969 = new_Block_with(PArray12970, empty_Array, PThreadedCode12971, 2, PSend12973, PSend12975);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend12976 = new_Send((Optr)VAR_anASTUnaryExpression_0_0, SMB_receiver, 0);
    Symbol SMB_createSendTo_ = new_Symbol(L"createSendTo:");
    // createSendTo:. 
    Send PSend12977 = new_Send((Optr)self, SMB_createSendTo_, 1, (Optr)PSend12976);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12978 = new_Send((Optr)PBlock12969, SMB_value_, 1, (Optr)PSend12977);
    Array PThreadedCode12968 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_closure, (Optr)PBlock12969, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anASTUnaryExpression_0_0, (Optr)&t_send0, (Optr)PSend12976, (Optr)&t_send1, (Optr)PSend12977, (Optr)&t_send1, (Optr)PSend12978, (Optr)&t_method_return);
    Method PMethod12966 = new_Method_with(PArray12967, empty_Array, empty_Array, PThreadedCode12968, 1, PSend12978);
    
    MethodClosure MC_SMB_visitUnaryExpression_ = new_MethodClosure((Method)PMethod12966, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitUnaryExpression_, MC_SMB_visitUnaryExpression_);
}


static void init_SMB_error_() {
    Symbol SMB_error_ = new_Symbol(L"error:");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Array PArray12980 = new_Array_with(1, (Optr)VAR_message_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12983 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_target_ = new_Symbol(L"target:");
    // target:. 
    Send PSend12985 = new_Send((Optr)VAR__receiver__1_0, SMB_target_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass);
    Symbol SMB_method_ = new_Symbol(L"method:");
    // method:. 
    Send PSend12986 = new_Send((Optr)VAR__receiver__1_0, SMB_method_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_currentMethod);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend12987 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)VAR_message_0_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend12988 = new_Send((Optr)VAR__receiver__1_0, SMB_signal, 0);
    Array PThreadedCode12984 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send1, (Optr)PSend12985, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_currentMethod, (Optr)&t_send1, (Optr)PSend12986, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_send1, (Optr)PSend12987, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend12988, (Optr)&t_method_return);
    Block PBlock12982 = new_Block_with(PArray12983, empty_Array, PThreadedCode12984, 4, PSend12985, PSend12986, PSend12987, PSend12988);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12989 = new_Send((Optr)PCompilationFailure_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12990 = new_Send((Optr)PBlock12982, SMB_value_, 1, (Optr)PSend12989);
    Array PThreadedCode12981 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock12982, (Optr)&t_push_class_reference, (Optr)PCompilationFailure_classReference, (Optr)&t_send0, (Optr)PSend12989, (Optr)&t_send1, (Optr)PSend12990, (Optr)&t_method_return);
    Method PMethod12979 = new_Method_with(PArray12980, empty_Array, empty_Array, PThreadedCode12981, 1, PSend12990);
    
    MethodClosure MC_SMB_error_ = new_MethodClosure((Method)PMethod12979, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_error_, MC_SMB_error_);
}


static void init_SMB_visitVariable_() {
    Symbol SMB_visitVariable_ = new_Symbol(L"visitVariable:");
    Variable VAR_anASTVariable_0_0 = new_Variable_named(L"anASTVariable", 0);
    Array PArray12992 = new_Array_with(1, (Optr)VAR_anASTVariable_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12995 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_lookup_ = new_Symbol(L"lookup:");
    // lookup:. 
    Send PSend12997 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_lookup_, 1, (Optr)VAR_anASTVariable_0_0);
    Variable VAR_value_2_0 = new_Variable_named(L"value", 2);
    Array PArray12999 = new_Array_with(1, (Optr)VAR_value_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13001 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_2_0);
    Array PThreadedCode13000 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_2_0, (Optr)&t_send1, (Optr)PSend13001, (Optr)&t_method_return);
    Block PBlock12998 = new_Block_with(PArray12999, empty_Array, PThreadedCode13000, 1, PSend13001);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend13002 = new_Send((Optr)PSend12997, SMB_ifNotNil_, 1, (Optr)PBlock12998);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend13003 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend13004 = new_Send((Optr)PSend13003, SMB_first, 0);
    Symbol SMB_isUppercase = new_Symbol(L"isUppercase");
    // isUppercase. 
    Send PSend13005 = new_Send((Optr)PSend13004, SMB_isUppercase, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray13010 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_target_ = new_Symbol(L"target:");
    // target:. 
    Send PSend13012 = new_Send((Optr)VAR__receiver__2_0, SMB_target_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass);
    Symbol SMB_method_ = new_Symbol(L"method:");
    // method:. 
    Send PSend13013 = new_Send((Optr)VAR__receiver__2_0, SMB_method_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_currentMethod);
    Symbol SMB_variable_ = new_Symbol(L"variable:");
    // variable:. 
    Send PSend13014 = new_Send((Optr)VAR__receiver__2_0, SMB_variable_, 1, (Optr)VAR_anASTVariable_0_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend13015 = new_Send((Optr)VAR__receiver__2_0, SMB_signal, 0);
    Array PThreadedCode13011 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send1, (Optr)PSend13012, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_currentMethod, (Optr)&t_send1, (Optr)PSend13013, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send1, (Optr)PSend13014, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend13015, (Optr)&t_method_return);
    Block PBlock13009 = new_Block_with(PArray13010, empty_Array, PThreadedCode13011, 4, PSend13012, PSend13013, PSend13014, PSend13015);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13016 = new_Send((Optr)PUndefinedVariable_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend13017 = new_Send((Optr)PBlock13009, SMB_value_, 1, (Optr)PSend13016);
    // escape:. 
    Send PSend13018 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend13017);
    Array PThreadedCode13008 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_closure, (Optr)PBlock13009, (Optr)&t_push_class_reference, (Optr)PUndefinedVariable_classReference, (Optr)&t_send0, (Optr)PSend13016, (Optr)&t_send1, (Optr)PSend13017, (Optr)&t_send1, (Optr)PSend13018, (Optr)&t_block_return);
    Block PBlock13007 = new_Block_with(empty_Array, empty_Array, PThreadedCode13008, 1, PSend13018);
    // ifFalse:. 
    Send PSend13006 = new_Send((Optr)PSend13005, SMB_ifFalse_, 1, (Optr)PBlock13007);
    Symbol SMB_scope = new_Symbol(L"scope");
    // scope. 
    Send PSend13019 = new_Send((Optr)self, SMB_scope, 0);
    // name. 
    Send PSend13020 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_package = new_Symbol(L"package");
    // package. 
    Send PSend13021 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, SMB_package, 0);
    // name. 
    Send PSend13022 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_world = new_Symbol(L"world");
    // world. 
    Send PSend13025 = new_Send((Optr)self, SMB_world, 0);
    // name. 
    Send PSend13026 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    Symbol SMB_ensureClassReference_ = new_Symbol(L"ensureClassReference:");
    // ensureClassReference:. 
    Send PSend13027 = new_Send((Optr)PSend13025, SMB_ensureClassReference_, 1, (Optr)PSend13026);
    Array PThreadedCode13024 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13025, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13026, (Optr)&t_send1, (Optr)PSend13027, (Optr)&t_block_return);
    Block PBlock13023 = new_Block_with(empty_Array, empty_Array, PThreadedCode13024, 1, PSend13027);
    Symbol SMB_findName_ifAbsent_ = new_Symbol(L"findName:ifAbsent:");
    // findName:ifAbsent:. 
    Send PSend13028 = new_Send((Optr)PSend13021, SMB_findName_ifAbsent_, 2, (Optr)PSend13022, (Optr)PBlock13023);
    Symbol SMB_asNode = new_Symbol(L"asNode");
    // asNode. 
    Send PSend13029 = new_Send((Optr)PSend13028, SMB_asNode, 0);
    Symbol SMB_declare_as_ = new_Symbol(L"declare:as:");
    // declare:as:. 
    Send PSend13030 = new_Send((Optr)PSend13019, SMB_declare_as_, 2, (Optr)PSend13020, (Optr)PSend13029);
    Array PThreadedCode12996 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send1, (Optr)PSend12997, (Optr)&t_push_closure, (Optr)PBlock12998, (Optr)&t_send1, (Optr)PSend13002, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13003, (Optr)&t_send0, (Optr)PSend13004, (Optr)&t_send0, (Optr)PSend13005, (Optr)&t_send_ifFalse_, (Optr)PSend13006, (Optr)PBlock13007, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13019, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13020, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send0, (Optr)PSend13021, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13022, (Optr)&t_push_closure, (Optr)PBlock13023, (Optr)&t_send2, (Optr)PSend13028, (Optr)&t_send0, (Optr)PSend13029, (Optr)&t_send2, (Optr)PSend13030, (Optr)&t_method_return);
    Block PBlock12994 = new_Block_with(PArray12995, empty_Array, PThreadedCode12996, 3, PSend13002, PSend13006, PSend13030);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13031 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12994);
    Array PThreadedCode12993 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12994, (Optr)&t_send1, (Optr)PSend13031, (Optr)&t_method_return);
    Method PMethod12991 = new_Method_with(PArray12992, empty_Array, empty_Array, PThreadedCode12993, 1, PSend13031);
    
    MethodClosure MC_SMB_visitVariable_ = new_MethodClosure((Method)PMethod12991, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitVariable_, MC_SMB_visitVariable_);
}


static void init_SMB_currentBlock() {
    Symbol SMB_currentBlock = new_Symbol(L"currentBlock");
    Array PThreadedCode13033 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_currentBlock, (Optr)&t_method_return);
    Method PMethod13032 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13033, 1, slot_Smalltalk_Compiler_Compiler_currentBlock);
    
    MethodClosure MC_SMB_currentBlock = new_MethodClosure((Method)PMethod13032, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_currentBlock, MC_SMB_currentBlock);
}


static void init_SMB_visitBlock_() {
    Symbol SMB_visitBlock_ = new_Symbol(L"visitBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray13035 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Variable VAR_hasState_0_2 = new_Variable_named(L"hasState", 0);
    Array PArray13036 = new_Array_with(2, (Optr)VAR_block_0_1, (Optr)VAR_hasState_0_2);
    Symbol SMB_parameters = new_Symbol(L"parameters");
    // parameters. 
    Send PSend13042 = new_Send((Optr)VAR_aBlock_0_0, SMB_parameters, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend13041 = new_Send((Optr)PSend13042, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend13040 = new_Send((Optr)PSend13041, SMB__gt_, 1, (Optr)int_0_Const);
    Symbol SMB_or_ = new_Symbol(L"or:");
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend13045 = new_Send((Optr)VAR_aBlock_0_0, SMB_temporaries, 0);
    // size. 
    Send PSend13046 = new_Send((Optr)PSend13045, SMB_size, 0);
    // >. 
    Send PSend13047 = new_Send((Optr)PSend13046, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode13044 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13045, (Optr)&t_send0, (Optr)PSend13046, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend13047, (Optr)&t_block_return);
    Block PBlock13043 = new_Block_with(empty_Array, empty_Array, PThreadedCode13044, 1, PSend13047);
    // or:. 
    Send PSend13039 = new_Send((Optr)PSend13040, SMB_or_, 1, (Optr)PBlock13043);
    Assign PAssign13038 = new_Assign((Optr)VAR_hasState_0_2, (Optr)PSend13039);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_pushScope = new_Symbol(L"pushScope");
    // pushScope. 
    Send PSend13051 = new_Send((Optr)self, SMB_pushScope, 0);
    // parameters. 
    Send PSend13052 = new_Send((Optr)VAR_aBlock_0_0, SMB_parameters, 0);
    Symbol SMB_declareAll_ = new_Symbol(L"declareAll:");
    // declareAll:. 
    Send PSend13053 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_declareAll_, 1, (Optr)PSend13052);
    // temporaries. 
    Send PSend13054 = new_Send((Optr)VAR_aBlock_0_0, SMB_temporaries, 0);
    // declareAll:. 
    Send PSend13055 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_scope, SMB_declareAll_, 1, (Optr)PSend13054);
    Array PThreadedCode13050 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13051, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13052, (Optr)&t_send1, (Optr)PSend13053, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13054, (Optr)&t_send1, (Optr)PSend13055, (Optr)&t_block_return);
    Block PBlock13049 = new_Block_with(empty_Array, empty_Array, PThreadedCode13050, 3, PSend13051, PSend13053, PSend13055);
    // ifTrue:. 
    Send PSend13048 = new_Send((Optr)VAR_hasState_0_2, SMB_ifTrue_, 1, (Optr)PBlock13049);
    Symbol SMB_createBlock_ = new_Symbol(L"createBlock:");
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13059 = new_Send((Optr)VAR_aBlock_0_0, SMB_statements, 0);
    // size. 
    Send PSend13058 = new_Send((Optr)PSend13059, SMB_size, 0);
    // createBlock:. 
    Send PSend13057 = new_Send((Optr)self, SMB_createBlock_, 1, (Optr)PSend13058);
    Assign PAssign13056 = new_Assign((Optr)VAR_block_0_1, (Optr)PSend13057);
    // parameters. 
    Send PSend13060 = new_Send((Optr)VAR_aBlock_0_0, SMB_parameters, 0);
    Symbol SMB_acceptOnCollection_ = new_Symbol(L"acceptOnCollection:");
    // acceptOnCollection:. 
    Send PSend13061 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend13060);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend13062 = new_Send((Optr)PSend13061, SMB_asArray, 0);
    // temporaries. 
    Send PSend13063 = new_Send((Optr)VAR_aBlock_0_0, SMB_temporaries, 0);
    // acceptOnCollection:. 
    Send PSend13064 = new_Send((Optr)self, SMB_acceptOnCollection_, 1, (Optr)PSend13063);
    // asArray. 
    Send PSend13065 = new_Send((Optr)PSend13064, SMB_asArray, 0);
    Symbol SMB_params_locals_ = new_Symbol(L"params:locals:");
    // params:locals:. 
    Send PSend13066 = new_Send((Optr)VAR_block_0_1, SMB_params_locals_, 2, (Optr)PSend13062, (Optr)PSend13065);
    // statements. 
    Send PSend13067 = new_Send((Optr)VAR_aBlock_0_0, SMB_statements, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray13069 = new_Array_with(2, (Optr)VAR_each_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend13071 = new_Send((Optr)self, SMB_visit_, 1, (Optr)VAR_each_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend13072 = new_Send((Optr)VAR_block_0_1, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)PSend13071);
    Array PThreadedCode13070 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send1, (Optr)PSend13071, (Optr)&t_send2, (Optr)PSend13072, (Optr)&t_method_return);
    Block PBlock13068 = new_Block_with(PArray13069, empty_Array, PThreadedCode13070, 1, PSend13072);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend13073 = new_Send((Optr)PSend13067, SMB_withIndexDo_, 1, (Optr)PBlock13068);
    Symbol SMB_popScope = new_Symbol(L"popScope");
    // popScope. 
    Send PSend13077 = new_Send((Optr)self, SMB_popScope, 0);
    Array PThreadedCode13076 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13077, (Optr)&t_block_return);
    Block PBlock13075 = new_Block_with(empty_Array, empty_Array, PThreadedCode13076, 1, PSend13077);
    // ifTrue:. 
    Send PSend13074 = new_Send((Optr)VAR_hasState_0_2, SMB_ifTrue_, 1, (Optr)PBlock13075);
    Array PThreadedCode13037 = instantiate_Array_with(ThreadedCode_Class, 0, 77, (Optr)&t_push1, (Optr)PAssign13038, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13042, (Optr)&t_send0, (Optr)PSend13041, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend13040, (Optr)&t_push_closure, (Optr)PBlock13043, (Optr)&t_send1, (Optr)PSend13039, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hasState_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend13048, (Optr)PBlock13049, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign13056, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13059, (Optr)&t_send0, (Optr)PSend13058, (Optr)&t_send1, (Optr)PSend13057, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13060, (Optr)&t_send1, (Optr)PSend13061, (Optr)&t_send0, (Optr)PSend13062, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13063, (Optr)&t_send1, (Optr)PSend13064, (Optr)&t_send0, (Optr)PSend13065, (Optr)&t_send2, (Optr)PSend13066, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend13067, (Optr)&t_push_closure, (Optr)PBlock13068, (Optr)&t_send1, (Optr)PSend13073, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_hasState_0_2, (Optr)&t_send_ifTrue_, (Optr)PSend13074, (Optr)PBlock13075, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_method_return);
    Method PMethod13034 = new_Method_with(PArray13035, PArray13036, empty_Array, PThreadedCode13037, 7, PAssign13038, PSend13048, PAssign13056, PSend13066, PSend13073, PSend13074, VAR_block_0_1);
    
    MethodClosure MC_SMB_visitBlock_ = new_MethodClosure((Method)PMethod13034, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitBlock_, MC_SMB_visitBlock_);
}


static void init_SMB_createSendTo_sized_() {
    Symbol SMB_createSendTo_sized_ = new_Symbol(L"createSendTo:sized:");
    Variable VAR_receiver_0_0 = new_Variable_named(L"receiver", 0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Array PArray13079 = new_Array_with(2, (Optr)VAR_receiver_0_0, (Optr)VAR_size_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray13082 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend13084 = new_Send((Optr)VAR_receiver_0_0, SMB_isKindOf_, 1, (Optr)ASTSuper_classReference);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend13088 = new_Send((Optr)PSuper_classReference, SMB_new_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13089 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend13088);
    Array PThreadedCode13087 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)PSuper_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend13088, (Optr)&t_send1, (Optr)PSend13089, (Optr)&t_block_return);
    Block PBlock13086 = new_Block_with(empty_Array, empty_Array, PThreadedCode13087, 1, PSend13089);
    // ifTrue:. 
    Send PSend13085 = new_Send((Optr)PSend13084, SMB_ifTrue_, 1, (Optr)PBlock13086);
    // new:. 
    Send PSend13090 = new_Send((Optr)PSend_classReference, SMB_new_, 1, (Optr)VAR_size_0_1);
    Symbol SMB_visit_ = new_Symbol(L"visit:");
    // visit:. 
    Send PSend13091 = new_Send((Optr)self, SMB_visit_, 1, (Optr)VAR_receiver_0_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend13092 = new_Send((Optr)PSend13090, SMB_receiver_, 1, (Optr)PSend13091);
    Array PThreadedCode13083 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_push_class_reference, (Optr)ASTSuper_classReference, (Optr)&t_send1, (Optr)PSend13084, (Optr)&t_send_ifTrue_, (Optr)PSend13085, (Optr)PBlock13086, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PSend_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend13090, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_send1, (Optr)PSend13091, (Optr)&t_send1, (Optr)PSend13092, (Optr)&t_method_return);
    Block PBlock13081 = new_Block_with(PArray13082, empty_Array, PThreadedCode13083, 2, PSend13085, PSend13092);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13093 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock13081);
    Array PThreadedCode13080 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock13081, (Optr)&t_send1, (Optr)PSend13093, (Optr)&t_method_return);
    Method PMethod13078 = new_Method_with(PArray13079, empty_Array, empty_Array, PThreadedCode13080, 1, PSend13093);
    
    MethodClosure MC_SMB_createSendTo_sized_ = new_MethodClosure((Method)PMethod13078, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createSendTo_sized_, MC_SMB_createSendTo_sized_);
}


static void init_SMB_visitPath_() {
    Symbol SMB_visitPath_ = new_Symbol(L"visitPath:");
    Variable VAR_aPath_0_0 = new_Variable_named(L"aPath", 0);
    Array PArray13095 = new_Array_with(1, (Optr)VAR_aPath_0_0);
    Symbol SMB_package = new_Symbol(L"package");
    // package. 
    Send PSend13097 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, SMB_package, 0);
    Symbol SMB_path = new_Symbol(L"path");
    // path. 
    Send PSend13098 = new_Send((Optr)VAR_aPath_0_0, SMB_path, 0);
    Symbol SMB_lookup_ = new_Symbol(L"lookup:");
    // lookup:. 
    Send PSend13099 = new_Send((Optr)PSend13097, SMB_lookup_, 1, (Optr)PSend13098);
    Symbol SMB_asNode = new_Symbol(L"asNode");
    // asNode. 
    Send PSend13100 = new_Send((Optr)PSend13099, SMB_asNode, 0);
    Array PThreadedCode13096 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_pinocchioClass, (Optr)&t_send0, (Optr)PSend13097, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_send0, (Optr)PSend13098, (Optr)&t_send1, (Optr)PSend13099, (Optr)&t_send0, (Optr)PSend13100, (Optr)&t_method_return);
    Method PMethod13094 = new_Method_with(PArray13095, empty_Array, empty_Array, PThreadedCode13096, 1, PSend13100);
    
    MethodClosure MC_SMB_visitPath_ = new_MethodClosure((Method)PMethod13094, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitPath_, MC_SMB_visitPath_);
}


static void init_SMB_visitBraceExpression_() {
    Symbol SMB_visitBraceExpression_ = new_Symbol(L"visitBraceExpression:");
    Variable VAR_braceExpression_0_0 = new_Variable_named(L"braceExpression", 0);
    Array PArray13102 = new_Array_with(1, (Optr)VAR_braceExpression_0_0);
    String string_13104 = new_String(L"Brace expressions are not supported by the compiler. Patches welcome!");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_13104_Const = new_Constant((Optr)string_13104);
    // error:. 
    Send PSend13105 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_13104_Const);
    Array PThreadedCode13103 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_13104, (Optr)&t_send1, (Optr)PSend13105, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13101 = new_Method_with(PArray13102, empty_Array, empty_Array, PThreadedCode13103, 2, PSend13105, self);
    
    MethodClosure MC_SMB_visitBraceExpression_ = new_MethodClosure((Method)PMethod13101, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitBraceExpression_, MC_SMB_visitBraceExpression_);
}


static void init_SMB_world_() {
    Symbol SMB_world_ = new_Symbol(L"world:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray13107 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign13109 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_world, (Optr)VAR_anObject_0_0);
    Array PThreadedCode13108 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign13109, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13106 = new_Method_with(PArray13107, empty_Array, empty_Array, PThreadedCode13108, 2, PAssign13109, self);
    
    MethodClosure MC_SMB_world_ = new_MethodClosure((Method)PMethod13106, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_world_, MC_SMB_world_);
}


static void init_SMB_pushScope() {
    Symbol SMB_pushScope = new_Symbol(L"pushScope");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend13113 = new_Send((Optr)PSubScope_classReference, SMB_new_, 1, (Optr)slot_Smalltalk_Compiler_Compiler_scope);
    Assign PAssign13112 = new_Assign((Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)PSend13113);
    Array PThreadedCode13111 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign13112, (Optr)&t_push_class_reference, (Optr)PSubScope_classReference, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_scope, (Optr)&t_send1, (Optr)PSend13113, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13110 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13111, 2, PAssign13112, self);
    
    MethodClosure MC_SMB_pushScope = new_MethodClosure((Method)PMethod13110, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_pushScope, MC_SMB_pushScope);
}


static void init_SMB_createPInfo() {
    Symbol SMB_createPInfo = new_Symbol(L"createPInfo");
    Variable VAR_info_0_0 = new_Variable_named(L"info", 0);
    Array PArray13115 = new_Array_with(1, (Optr)VAR_info_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13118 = new_Send((Optr)PInfo_classReference, SMB_new, 0);
    Assign PAssign13117 = new_Assign((Optr)VAR_info_0_0, (Optr)PSend13118);
    Symbol SMB_sourceObject = new_Symbol(L"sourceObject");
    // sourceObject. 
    Send PSend13119 = new_Send((Optr)slot_Smalltalk_Compiler_Compiler_currentMethod, SMB_sourceObject, 0);
    Symbol SMB_sourceFile_ = new_Symbol(L"sourceFile:");
    // sourceFile:. 
    Send PSend13120 = new_Send((Optr)VAR_info_0_0, SMB_sourceFile_, 1, (Optr)PSend13119);
    Symbol SMB_line_ = new_Symbol(L"line:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // line:. 
    Send PSend13121 = new_Send((Optr)VAR_info_0_0, SMB_line_, 1, (Optr)int_1_Const);
    Symbol SMB_column_ = new_Symbol(L"column:");
    // column:. 
    Send PSend13122 = new_Send((Optr)VAR_info_0_0, SMB_column_, 1, (Optr)int_1_Const);
    Array PThreadedCode13116 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign13117, (Optr)&t_push_class_reference, (Optr)PInfo_classReference, (Optr)&t_send0, (Optr)PSend13118, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_info_0_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_Compiler_currentMethod, (Optr)&t_send0, (Optr)PSend13119, (Optr)&t_send1, (Optr)PSend13120, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_info_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend13121, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_info_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend13122, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_info_0_0, (Optr)&t_method_return);
    Method PMethod13114 = new_Method_with(empty_Array, PArray13115, empty_Array, PThreadedCode13116, 5, PAssign13117, PSend13120, PSend13121, PSend13122, VAR_info_0_0);
    
    MethodClosure MC_SMB_createPInfo = new_MethodClosure((Method)PMethod13114, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_createPInfo, MC_SMB_createPInfo);
}


static void init_SMB_visitKeywordSelector_() {
    Symbol SMB_visitKeywordSelector_ = new_Symbol(L"visitKeywordSelector:");
    Variable VAR_anASTKeywordSelector_0_0 = new_Variable_named(L"anASTKeywordSelector", 0);
    Array PArray13124 = new_Array_with(1, (Optr)VAR_anASTKeywordSelector_0_0);
    Symbol SMB_selectorSymbol = new_Symbol(L"selectorSymbol");
    // selectorSymbol. 
    Send PSend13126 = new_Send((Optr)VAR_anASTKeywordSelector_0_0, SMB_selectorSymbol, 0);
    Array PThreadedCode13125 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_anASTKeywordSelector_0_0, (Optr)&t_send0, (Optr)PSend13126, (Optr)&t_method_return);
    Method PMethod13123 = new_Method_with(PArray13124, empty_Array, empty_Array, PThreadedCode13125, 1, PSend13126);
    
    MethodClosure MC_SMB_visitKeywordSelector_ = new_MethodClosure((Method)PMethod13123, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitKeywordSelector_, MC_SMB_visitKeywordSelector_);
}


static void init_SMB_visitBoolean_() {
    Symbol SMB_visitBoolean_ = new_Symbol(L"visitBoolean:");
    Variable VAR_aPinocchioBoolean_0_0 = new_Variable_named(L"aPinocchioBoolean", 0);
    Array PArray13128 = new_Array_with(1, (Optr)VAR_aPinocchioBoolean_0_0);
    Array PThreadedCode13129 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_aPinocchioBoolean_0_0, (Optr)&t_method_return);
    Method PMethod13127 = new_Method_with(PArray13128, empty_Array, empty_Array, PThreadedCode13129, 1, VAR_aPinocchioBoolean_0_0);
    
    MethodClosure MC_SMB_visitBoolean_ = new_MethodClosure((Method)PMethod13127, Smalltalk_Compiler_Compiler_Class);
    store_method(Smalltalk_Compiler_Compiler_Class, SMB_visitBoolean_, MC_SMB_visitBoolean_);
}


static void init_class_SMB_compile_on_() {
    Symbol SMB_compile_on_ = new_Symbol(L"compile:on:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Variable VAR_aClass_0_1 = new_Variable_named(L"aClass", 0);
    Array PArray13131 = new_Array_with(2, (Optr)VAR_aString_0_0, (Optr)VAR_aClass_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray13134 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_pclass_ = new_Symbol(L"pclass:");
    // pclass:. 
    Send PSend13136 = new_Send((Optr)VAR__receiver__1_0, SMB_pclass_, 1, (Optr)VAR_aClass_0_1);
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend13137 = new_Send((Optr)VAR__receiver__1_0, SMB_compile_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode13135 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aClass_0_1, (Optr)&t_send1, (Optr)PSend13136, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend13137, (Optr)&t_method_return);
    Block PBlock13133 = new_Block_with(PArray13134, empty_Array, PThreadedCode13135, 2, PSend13136, PSend13137);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend13138 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend13139 = new_Send((Optr)PBlock13133, SMB_value_, 1, (Optr)PSend13138);
    Array PThreadedCode13132 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock13133, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13138, (Optr)&t_send1, (Optr)PSend13139, (Optr)&t_method_return);
    Method PMethod13130 = new_Method_with(PArray13131, empty_Array, empty_Array, PThreadedCode13132, 1, PSend13139);
    
    MethodClosure MC_SMB_compile_on_ = new_MethodClosure((Method)PMethod13130, HEADER(Smalltalk_Compiler_Compiler_Class));
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