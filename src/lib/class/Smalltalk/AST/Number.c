#include <lib/class/Smalltalk/AST/Number.h>


Optr layout_Smalltalk_AST_Number_Class_class;
Optr slot_Smalltalk_AST_Number_number;
Optr slot_Smalltalk_AST_Number_base;
Optr layout_Smalltalk_AST_Number;


static void init_SMB_asNumber() {
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    Symbol SMB_printString = new_Symbol(L"printString");
    // printString. 
    Send PSend15423 = new_Send((Optr)self, SMB_printString, 0);
    // asNumber. 
    Send PSend15424 = new_Send((Optr)PSend15423, SMB_asNumber, 0);
    Array PThreadedCode15422 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15423, (Optr)&t_send0, (Optr)PSend15424, (Optr)&t_method_return);
    Method PMethod15421 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15422, 1, PSend15424);
    
    MethodClosure MC_SMB_asNumber = new_MethodClosure((Method)PMethod15421, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_asNumber, MC_SMB_asNumber);
}


static void init_SMB_number() {
    Symbol SMB_number = new_Symbol(L"number");
    Array PThreadedCode15426 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_number, (Optr)&t_method_return);
    Method PMethod15425 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15426, 1, slot_Smalltalk_AST_Number_number);
    
    MethodClosure MC_SMB_number = new_MethodClosure((Method)PMethod15425, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_number, MC_SMB_number);
}


static void init_SMB_number_() {
    Symbol SMB_number_ = new_Symbol(L"number:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15428 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15430 = new_Assign((Optr)slot_Smalltalk_AST_Number_number, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15429 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15430, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15427 = new_Method_with(PArray15428, empty_Array, empty_Array, PThreadedCode15429, 2, PAssign15430, self);
    
    MethodClosure MC_SMB_number_ = new_MethodClosure((Method)PMethod15427, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_number_, MC_SMB_number_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15432 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15435 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15437 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15441 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15440 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15441, (Optr)&t_block_return);
    Block PBlock15439 = new_Block_with(empty_Array, empty_Array, PThreadedCode15440, 1, PSend15441);
    // ifFalse:. 
    Send PSend15438 = new_Send((Optr)PSuper15437, SMB_ifFalse_, 1, (Optr)PBlock15439);
    Symbol SMB_number = new_Symbol(L"number");
    // number. 
    Send PSend15442 = new_Send((Optr)VAR_other_0_0, SMB_number, 0);
    // =. 
    Send PSend15443 = new_Send((Optr)slot_Smalltalk_AST_Number_number, SMB__equals_, 1, (Optr)PSend15442);
    // escape:. 
    Send PSend15447 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15446 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15447, (Optr)&t_block_return);
    Block PBlock15445 = new_Block_with(empty_Array, empty_Array, PThreadedCode15446, 1, PSend15447);
    // ifFalse:. 
    Send PSend15444 = new_Send((Optr)PSend15443, SMB_ifFalse_, 1, (Optr)PBlock15445);
    Symbol SMB_base = new_Symbol(L"base");
    // base. 
    Send PSend15448 = new_Send((Optr)VAR_other_0_0, SMB_base, 0);
    // =. 
    Send PSend15449 = new_Send((Optr)slot_Smalltalk_AST_Number_base, SMB__equals_, 1, (Optr)PSend15448);
    // escape:. 
    Send PSend15453 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15452 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15453, (Optr)&t_block_return);
    Block PBlock15451 = new_Block_with(empty_Array, empty_Array, PThreadedCode15452, 1, PSend15453);
    // ifFalse:. 
    Send PSend15450 = new_Send((Optr)PSend15449, SMB_ifFalse_, 1, (Optr)PBlock15451);
    Array PThreadedCode15436 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15437, (Optr)&t_send_ifFalse_, (Optr)PSend15438, (Optr)PBlock15439, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_number, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15442, (Optr)&t_send1, (Optr)PSend15443, (Optr)&t_send_ifFalse_, (Optr)PSend15444, (Optr)PBlock15445, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_base, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15448, (Optr)&t_send1, (Optr)PSend15449, (Optr)&t_send_ifFalse_, (Optr)PSend15450, (Optr)PBlock15451, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15434 = new_Block_with(PArray15435, empty_Array, PThreadedCode15436, 4, PSend15438, PSend15444, PSend15450, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15454 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15434);
    Array PThreadedCode15433 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15434, (Optr)&t_send1, (Optr)PSend15454, (Optr)&t_method_return);
    Method PMethod15431 = new_Method_with(PArray15432, empty_Array, empty_Array, PThreadedCode15433, 1, PSend15454);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15431, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_base() {
    Symbol SMB_base = new_Symbol(L"base");
    Array PThreadedCode15456 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_base, (Optr)&t_method_return);
    Method PMethod15455 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15456, 1, slot_Smalltalk_AST_Number_base);
    
    MethodClosure MC_SMB_base = new_MethodClosure((Method)PMethod15455, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_base, MC_SMB_base);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15458 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitNumber_ = new_Symbol(L"visitNumber:");
    // visitNumber:. 
    Send PSend15460 = new_Send((Optr)VAR_visitor_0_0, SMB_visitNumber_, 1, (Optr)self);
    Array PThreadedCode15459 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15460, (Optr)&t_method_return);
    Method PMethod15457 = new_Method_with(PArray15458, empty_Array, empty_Array, PThreadedCode15459, 1, PSend15460);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15457, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15462 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend15464 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)slot_Smalltalk_AST_Number_base);
    String string_15465 = new_String(L"r");
    Constant string_15465_Const = new_Constant((Optr)string_15465);
    // <<. 
    Send PSend15466 = new_Send((Optr)PSend15464, SMB__shiftLeft_, 1, (Optr)string_15465_Const);
    // <<. 
    Send PSend15467 = new_Send((Optr)PSend15466, SMB__shiftLeft_, 1, (Optr)slot_Smalltalk_AST_Number_number);
    Array PThreadedCode15463 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_base, (Optr)&t_send1, (Optr)PSend15464, (Optr)&t_push1, (Optr)string_15465, (Optr)&t_send1, (Optr)PSend15466, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Number_number, (Optr)&t_send1, (Optr)PSend15467, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15461 = new_Method_with(PArray15462, empty_Array, empty_Array, PThreadedCode15463, 2, PSend15467, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15461, Smalltalk_AST_Number_Class);
    store_method(Smalltalk_AST_Number_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_base_() {
    Symbol SMB_base_ = new_Symbol(L"base:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15469 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15471 = new_Assign((Optr)slot_Smalltalk_AST_Number_base, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15470 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15471, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15468 = new_Method_with(PArray15469, empty_Array, empty_Array, PThreadedCode15470, 2, PAssign15471, self);
    
    MethodClosure MC_SMB_base_ = new_MethodClosure((Method)PMethod15468, Smalltalk_AST_Number_Class);
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
    Send PSend15474 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_base_Const, (Optr)SMB_number_Const);
    Array PThreadedCode15473 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_base, (Optr)&t_push1, (Optr)SMB_number, (Optr)&t_send2, (Optr)PSend15474, (Optr)&t_method_return);
    Method PMethod15472 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15473, 1, PSend15474);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod15472, HEADER(Smalltalk_AST_Number_Class));
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