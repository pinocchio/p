#include <lib/class/Smalltalk/AST/Number.h>


Optr layout_Smalltalk_AST_Number_Class_class;
Optr slot_Smalltalk_AST_Number_number;
Optr slot_Smalltalk_AST_Number_base;
Optr layout_Smalltalk_AST_Number;


static void init_SMB_asNumber() {
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    Symbol SMB_printString = new_Symbol(L"printString");
    // printString. 
    Send PSend15425 = new_Send((Optr)self, SMB_printString, 0);
    // asNumber. 
    Send PSend15426 = new_Send((Optr)PSend15425, SMB_asNumber, 0);
    Array PThreadedCode15424 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15425, (Optr)&t_send0, (Optr)PSend15426, (Optr)&t_method_return);
    Method PMethod15423 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15424, 1, PSend15426);
    
    MethodClosure MC_SMB_asNumber = new_MethodClosure((Method)PMethod15423, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_asNumber, MC_SMB_asNumber);
}


static void init_SMB_number() {
    Symbol SMB_number = new_Symbol(L"number");
    Array PThreadedCode15428 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_number, (Optr)&t_method_return);
    Method PMethod15427 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15428, 1, slot_Smalltalk_AST_Number_number);
    
    MethodClosure MC_SMB_number = new_MethodClosure((Method)PMethod15427, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_number, MC_SMB_number);
}


static void init_SMB_number_() {
    Symbol SMB_number_ = new_Symbol(L"number:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15430 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15432 = new_Assign((Optr)slot_Smalltalk_AST_Number_number, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15431 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15432, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15429 = new_Method_with(PArray15430, empty_Array, empty_Array, PThreadedCode15431, 2, PAssign15432, self);
    
    MethodClosure MC_SMB_number_ = new_MethodClosure((Method)PMethod15429, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_number_, MC_SMB_number_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15434 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15437 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15439 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15443 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15442 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15443, (Optr)&t_block_return);
    Block PBlock15441 = new_Block_with(empty_Array, empty_Array, PThreadedCode15442, 1, PSend15443);
    // ifFalse:. 
    Send PSend15440 = new_Send((Optr)PSuper15439, SMB_ifFalse_, 1, (Optr)PBlock15441);
    Symbol SMB_number = new_Symbol(L"number");
    // number. 
    Send PSend15444 = new_Send((Optr)VAR_other_0_0, SMB_number, 0);
    // =. 
    Send PSend15445 = new_Send((Optr)slot_Smalltalk_AST_Number_number, SMB__equals_, 1, (Optr)PSend15444);
    // escape:. 
    Send PSend15449 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15448 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15449, (Optr)&t_block_return);
    Block PBlock15447 = new_Block_with(empty_Array, empty_Array, PThreadedCode15448, 1, PSend15449);
    // ifFalse:. 
    Send PSend15446 = new_Send((Optr)PSend15445, SMB_ifFalse_, 1, (Optr)PBlock15447);
    Symbol SMB_base = new_Symbol(L"base");
    // base. 
    Send PSend15450 = new_Send((Optr)VAR_other_0_0, SMB_base, 0);
    // =. 
    Send PSend15451 = new_Send((Optr)slot_Smalltalk_AST_Number_base, SMB__equals_, 1, (Optr)PSend15450);
    // escape:. 
    Send PSend15455 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15454 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15455, (Optr)&t_block_return);
    Block PBlock15453 = new_Block_with(empty_Array, empty_Array, PThreadedCode15454, 1, PSend15455);
    // ifFalse:. 
    Send PSend15452 = new_Send((Optr)PSend15451, SMB_ifFalse_, 1, (Optr)PBlock15453);
    Array PThreadedCode15438 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15439, (Optr)&t_send_ifFalse_, (Optr)PSend15440, (Optr)PBlock15441, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_number, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15444, (Optr)&t_send1, (Optr)PSend15445, (Optr)&t_send_ifFalse_, (Optr)PSend15446, (Optr)PBlock15447, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_base, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15450, (Optr)&t_send1, (Optr)PSend15451, (Optr)&t_send_ifFalse_, (Optr)PSend15452, (Optr)PBlock15453, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15436 = new_Block_with(PArray15437, empty_Array, PThreadedCode15438, 4, PSend15440, PSend15446, PSend15452, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15456 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15436);
    Array PThreadedCode15435 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15436, (Optr)&t_send1, (Optr)PSend15456, (Optr)&t_method_return);
    Method PMethod15433 = new_Method_with(PArray15434, empty_Array, empty_Array, PThreadedCode15435, 1, PSend15456);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15433, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_base() {
    Symbol SMB_base = new_Symbol(L"base");
    Array PThreadedCode15458 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_base, (Optr)&t_method_return);
    Method PMethod15457 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15458, 1, slot_Smalltalk_AST_Number_base);
    
    MethodClosure MC_SMB_base = new_MethodClosure((Method)PMethod15457, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_base, MC_SMB_base);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15460 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitNumber_ = new_Symbol(L"visitNumber:");
    // visitNumber:. 
    Send PSend15462 = new_Send((Optr)VAR_visitor_0_0, SMB_visitNumber_, 1, (Optr)self);
    Array PThreadedCode15461 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15462, (Optr)&t_method_return);
    Method PMethod15459 = new_Method_with(PArray15460, empty_Array, empty_Array, PThreadedCode15461, 1, PSend15462);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15459, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15464 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend15466 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)slot_Smalltalk_AST_Number_base);
    String string_15467 = new_String(L"r");
    Constant string_15467_Const = new_Constant((Optr)string_15467);
    // <<. 
    Send PSend15468 = new_Send((Optr)PSend15466, SMB__shiftLeft_, 1, (Optr)string_15467_Const);
    // <<. 
    Send PSend15469 = new_Send((Optr)PSend15468, SMB__shiftLeft_, 1, (Optr)slot_Smalltalk_AST_Number_number);
    Array PThreadedCode15465 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_base, (Optr)&t_send1, (Optr)PSend15466, (Optr)&t_push1, (Optr)string_15467, (Optr)&t_send1, (Optr)PSend15468, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_number, (Optr)&t_send1, (Optr)PSend15469, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15463 = new_Method_with(PArray15464, empty_Array, empty_Array, PThreadedCode15465, 2, PSend15469, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15463, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_base_() {
    Symbol SMB_base_ = new_Symbol(L"base:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15471 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15473 = new_Assign((Optr)slot_Smalltalk_AST_Number_base, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15472 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15473, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15470 = new_Method_with(PArray15471, empty_Array, empty_Array, PThreadedCode15472, 2, PAssign15473, self);
    
    MethodClosure MC_SMB_base_ = new_MethodClosure((Method)PMethod15470, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_base_, MC_SMB_base_);
}


static void init_class_SMB_astSelectors() {
    Symbol SMB_astSelectors = new_Symbol(L"astSelectors");
    Symbol  SMB_base = new_Symbol(L"base");
    Symbol  SMB_number = new_Symbol(L"number");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant SMB_base_Const = new_Constant((Optr)SMB_base);
    Constant SMB_number_Const = new_Constant((Optr)SMB_number);
    // with:with:. 
    Send PSend15476 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_base_Const, (Optr)SMB_number_Const);
    Array PThreadedCode15475 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_base, (Optr)&t_push1, (Optr)SMB_number, (Optr)&t_send2, (Optr)PSend15476, (Optr)&t_method_return);
    Method PMethod15474 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15475, 1, PSend15476);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod15474, HEADER(Smalltalk_AST_Number_Class));
    store_method(HEADER(Smalltalk_AST_Number_Class), SMB_astSelectors, MC_SMB_astSelectors);
}

void init_Smalltalk_AST_ASTNumber_layout() {
    layout_Smalltalk_AST_Number_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_Number_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_Number_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_Number_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_Number_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_Number_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Number = new_Symbol(L"Number");
    slot_Smalltalk_AST_Number_number = (Optr)new_Slot(0, L"number");
    slot_Smalltalk_AST_Number_base = (Optr)new_Slot(1, L"base");
    layout_Smalltalk_AST_Number = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Smalltalk_AST_Number)->values[0] = slot_Smalltalk_AST_Number_number; // number 
    ((Array)layout_Smalltalk_AST_Number)->values[1] = slot_Smalltalk_AST_Number_base; // base 
    Smalltalk_AST_Number_Class = (Class)new_Class(Smalltalk_AST_Literal_Class, layout_Smalltalk_AST_Number_Class_class);
    Smalltalk_AST_Number_Class->layout = layout_Smalltalk_AST_Number;
    Smalltalk_AST_Number_Class->name = SMB_Number;
    
}

void init_Smalltalk_AST_ASTNumber_methods() {
    init_SMB_asNumber();
    init_SMB_number();
    init_SMB_number_();
    init_SMB__equals_();
    init_SMB_base();
    init_SMB_accept_();
    init_SMB_printOn_();
    init_SMB_base_();
    init_class_SMB_astSelectors();
    
}