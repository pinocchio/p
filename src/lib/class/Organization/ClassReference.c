#include <lib/class/Organization/ClassReference.h>


Optr layout_Organization_ClassReference_Class_class;
Optr slot_Organization_ClassReference_package;
Optr slot_Organization_ClassReference_pClass;
Optr layout_Organization_ClassReference;


static void init_SMB_fullName() {
    Symbol SMB_fullName = new_Symbol(L"fullName");
    Symbol SMB_package = new_Symbol(L"package");
    // package. 
    Send PSend21548 = new_Send((Optr)self, SMB_package, 0);
    // fullName. 
    Send PSend21549 = new_Send((Optr)PSend21548, SMB_fullName, 0);
    String string_21550 = new_String(L".");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_21550_Const = new_Constant((Optr)string_21550);
    // ,. 
    Send PSend21551 = new_Send((Optr)PSend21549, SMB__append_, 1, (Optr)string_21550_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend21552 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_name, 0);
    // ,. 
    Send PSend21553 = new_Send((Optr)PSend21551, SMB__append_, 1, (Optr)PSend21552);
    Array PThreadedCode21547 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21548, (Optr)&t_send0, (Optr)PSend21549, (Optr)&t_push1, (Optr)string_21550, (Optr)&t_send1, (Optr)PSend21551, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_send0, (Optr)PSend21552, (Optr)&t_send1, (Optr)PSend21553, (Optr)&t_method_return);
    Method PMethod21546 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21547, 1, PSend21553);
    
    MethodClosure MC_SMB_fullName = new_MethodClosure((Method)PMethod21546, ClassReference_Class);
    store_method(ClassReference_Class, SMB_fullName, MC_SMB_fullName);
}


static void init_SMB_asNode() {
    Symbol SMB_asNode = new_Symbol(L"asNode");
    Array PThreadedCode21555 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod21554 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21555, 1, self);
    
    MethodClosure MC_SMB_asNode = new_MethodClosure((Method)PMethod21554, ClassReference_Class);
    store_method(ClassReference_Class, SMB_asNode, MC_SMB_asNode);
}


static void init_SMB_ensurePinocchioClass_() {
    Symbol SMB_ensurePinocchioClass_ = new_Symbol(L"ensurePinocchioClass:");
    Variable VAR_aPinocchioClass_0_0 = new_Variable_named(L"aPinocchioClass", 0);
    Array PArray21557 = new_Array_with(1, (Optr)VAR_aPinocchioClass_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21560 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_shouldNotHappen = new_Symbol(L"shouldNotHappen");
    // shouldNotHappen. 
    Send PSend21564 = new_Send((Optr)self, SMB_shouldNotHappen, 0);
    Array PThreadedCode21563 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21564, (Optr)&t_block_return);
    Block PBlock21562 = new_Block_with(empty_Array, empty_Array, PThreadedCode21563, 1, PSend21564);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend21565 = new_Send((Optr)VAR_aPinocchioClass_0_0, SMB_ifNil_, 1, (Optr)PBlock21562);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend21568 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB__pequals_, 1, (Optr)VAR_aPinocchioClass_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_error = new_Symbol(L"error");
    // error. 
    Send PSend21572 = new_Send((Optr)self, SMB_error, 0);
    Array PThreadedCode21571 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21572, (Optr)&t_block_return);
    Block PBlock21570 = new_Block_with(empty_Array, empty_Array, PThreadedCode21571, 1, PSend21572);
    // ifFalse:. 
    Send PSend21569 = new_Send((Optr)PSend21568, SMB_ifFalse_, 1, (Optr)PBlock21570);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21573 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)slot_Organization_ClassReference_pClass);
    Array PThreadedCode21567 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_send1, (Optr)PSend21568, (Optr)&t_send_ifFalse_, (Optr)PSend21569, (Optr)PBlock21570, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_send1, (Optr)PSend21573, (Optr)&t_block_return);
    Block PBlock21566 = new_Block_with(empty_Array, empty_Array, PThreadedCode21567, 2, PSend21569, PSend21573);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend21574 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_ifNotNil_, 1, (Optr)PBlock21566);
    Assign PAssign21575 = new_Assign((Optr)slot_Organization_ClassReference_pClass, (Optr)VAR_aPinocchioClass_0_0);
    Array PThreadedCode21561 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_push_closure, (Optr)PBlock21562, (Optr)&t_send1, (Optr)PSend21565, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_push_closure, (Optr)PBlock21566, (Optr)&t_send1, (Optr)PSend21574, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21575, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock21559 = new_Block_with(PArray21560, empty_Array, PThreadedCode21561, 3, PSend21565, PSend21574, PAssign21575);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21576 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21559);
    Array PThreadedCode21558 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21559, (Optr)&t_send1, (Optr)PSend21576, (Optr)&t_method_return);
    Method PMethod21556 = new_Method_with(PArray21557, empty_Array, empty_Array, PThreadedCode21558, 1, PSend21576);
    
    MethodClosure MC_SMB_ensurePinocchioClass_ = new_MethodClosure((Method)PMethod21556, ClassReference_Class);
    store_method(ClassReference_Class, SMB_ensurePinocchioClass_, MC_SMB_ensurePinocchioClass_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray21578 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitClassReference_ = new_Symbol(L"visitClassReference:");
    // visitClassReference:. 
    Send PSend21580 = new_Send((Optr)VAR_visitor_0_0, SMB_visitClassReference_, 1, (Optr)self);
    Array PThreadedCode21579 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21580, (Optr)&t_method_return);
    Method PMethod21577 = new_Method_with(PArray21578, empty_Array, empty_Array, PThreadedCode21579, 1, PSend21580);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod21577, ClassReference_Class);
    store_method(ClassReference_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_package() {
    Symbol SMB_package = new_Symbol(L"package");
    Array PThreadedCode21582 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_package, (Optr)&t_method_return);
    Method PMethod21581 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21582, 1, slot_Organization_ClassReference_package);
    
    MethodClosure MC_SMB_package = new_MethodClosure((Method)PMethod21581, ClassReference_Class);
    store_method(ClassReference_Class, SMB_package, MC_SMB_package);
}


static void init_SMB_package_() {
    Symbol SMB_package_ = new_Symbol(L"package:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray21584 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign21586 = new_Assign((Optr)slot_Organization_ClassReference_package, (Optr)VAR_anObject_0_0);
    Array PThreadedCode21585 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21586, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21583 = new_Method_with(PArray21584, empty_Array, empty_Array, PThreadedCode21585, 2, PAssign21586, self);
    
    MethodClosure MC_SMB_package_ = new_MethodClosure((Method)PMethod21583, ClassReference_Class);
    store_method(ClassReference_Class, SMB_package_, MC_SMB_package_);
}


static void init_SMB_packagesDo_() {
    Symbol SMB_packagesDo_ = new_Symbol(L"packagesDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray21588 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode21589 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod21587 = new_Method_with(PArray21588, empty_Array, empty_Array, PThreadedCode21589, 1, self);
    
    MethodClosure MC_SMB_packagesDo_ = new_MethodClosure((Method)PMethod21587, ClassReference_Class);
    store_method(ClassReference_Class, SMB_packagesDo_, MC_SMB_packagesDo_);
}


static void init_SMB_pclass() {
    Symbol SMB_pclass = new_Symbol(L"pclass");
    Array PThreadedCode21591 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_method_return);
    Method PMethod21590 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21591, 1, slot_Organization_ClassReference_pClass);
    
    MethodClosure MC_SMB_pclass = new_MethodClosure((Method)PMethod21590, ClassReference_Class);
    store_method(ClassReference_Class, SMB_pclass, MC_SMB_pclass);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21593 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper21595 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    String string_21598 = new_String(L" (");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_21598_Const = new_Constant((Optr)string_21598);
    // <<. 
    Send PSend21599 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_21598_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend21600 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_name, 0);
    // <<. 
    Send PSend21601 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21600);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend21602 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode21597 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_21598, (Optr)&t_send1, (Optr)PSend21599, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_send0, (Optr)PSend21600, (Optr)&t_send1, (Optr)PSend21601, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend21602, (Optr)&t_block_return);
    Block PBlock21596 = new_Block_with(empty_Array, empty_Array, PThreadedCode21597, 3, PSend21599, PSend21601, PSend21602);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend21603 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_ifNotNil_, 1, (Optr)PBlock21596);
    Array PThreadedCode21594 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper21595, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_push_closure, (Optr)PBlock21596, (Optr)&t_send1, (Optr)PSend21603, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21592 = new_Method_with(PArray21593, empty_Array, empty_Array, PThreadedCode21594, 3, PSuper21595, PSend21603, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21592, ClassReference_Class);
    store_method(ClassReference_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_lookupIn_at_() {
    Symbol SMB_lookupIn_at_ = new_Symbol(L"lookupIn:at:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray21605 = new_Array_with(2, (Optr)VAR_aCollection_0_0, (Optr)VAR_index_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21608 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend21610 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend21611 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)PSend21610);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray21616 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_path_ = new_Symbol(L"path:");
    // path:. 
    Send PSend21618 = new_Send((Optr)VAR__receiver__2_0, SMB_path_, 1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_index_ = new_Symbol(L"index:");
    // index:. 
    Send PSend21619 = new_Send((Optr)VAR__receiver__2_0, SMB_index_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend21620 = new_Send((Optr)VAR__receiver__2_0, SMB_signal, 0);
    Array PThreadedCode21617 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send1, (Optr)PSend21618, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend21619, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend21620, (Optr)&t_method_return);
    Block PBlock21615 = new_Block_with(PArray21616, empty_Array, PThreadedCode21617, 3, PSend21618, PSend21619, PSend21620);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21621 = new_Send((Optr)PNestedClassException_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21622 = new_Send((Optr)PBlock21615, SMB_value_, 1, (Optr)PSend21621);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21623 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend21622);
    Array PThreadedCode21614 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_closure, (Optr)PBlock21615, (Optr)&t_push_class_reference, (Optr)PNestedClassException_classReference, (Optr)&t_send0, (Optr)PSend21621, (Optr)&t_send1, (Optr)PSend21622, (Optr)&t_send1, (Optr)PSend21623, (Optr)&t_block_return);
    Block PBlock21613 = new_Block_with(empty_Array, empty_Array, PThreadedCode21614, 1, PSend21623);
    // ifFalse:. 
    Send PSend21612 = new_Send((Optr)PSend21611, SMB_ifFalse_, 1, (Optr)PBlock21613);
    Array PThreadedCode21609 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend21610, (Optr)&t_send1, (Optr)PSend21611, (Optr)&t_send_ifFalse_, (Optr)PSend21612, (Optr)PBlock21613, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock21607 = new_Block_with(PArray21608, empty_Array, PThreadedCode21609, 2, PSend21612, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21624 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21607);
    Array PThreadedCode21606 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21607, (Optr)&t_send1, (Optr)PSend21624, (Optr)&t_method_return);
    Method PMethod21604 = new_Method_with(PArray21605, empty_Array, empty_Array, PThreadedCode21606, 1, PSend21624);
    
    MethodClosure MC_SMB_lookupIn_at_ = new_MethodClosure((Method)PMethod21604, ClassReference_Class);
    store_method(ClassReference_Class, SMB_lookupIn_at_, MC_SMB_lookupIn_at_);
}


static void init_class_SMB_in_() {
    Symbol SMB_in_ = new_Symbol(L"in:");
    Variable VAR_package_0_0 = new_Variable_named(L"package", 0);
    Array PArray21626 = new_Array_with(1, (Optr)VAR_package_0_0);
    Symbol SMB_shouldNotHappen = new_Symbol(L"shouldNotHappen");
    // shouldNotHappen. 
    Send PSend21630 = new_Send((Optr)self, SMB_shouldNotHappen, 0);
    Array PThreadedCode21629 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21630, (Optr)&t_block_return);
    Block PBlock21628 = new_Block_with(empty_Array, empty_Array, PThreadedCode21629, 1, PSend21630);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend21631 = new_Send((Optr)VAR_package_0_0, SMB_ifNil_, 1, (Optr)PBlock21628);
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper21632 = new_Super(SMB_new, 0);
    Symbol SMB_package_ = new_Symbol(L"package:");
    // package:. 
    Send PSend21633 = new_Send((Optr)PSuper21632, SMB_package_, 1, (Optr)VAR_package_0_0);
    Array PThreadedCode21627 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_package_0_0, (Optr)&t_push_closure, (Optr)PBlock21628, (Optr)&t_send1, (Optr)PSend21631, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper21632, (Optr)&t_push_variable, (Optr)VAR_package_0_0, (Optr)&t_send1, (Optr)PSend21633, (Optr)&t_method_return);
    Method PMethod21625 = new_Method_with(PArray21626, empty_Array, empty_Array, PThreadedCode21627, 2, PSend21631, PSend21633);
    
    MethodClosure MC_SMB_in_ = new_MethodClosure((Method)PMethod21625, HEADER(ClassReference_Class));
    store_method(HEADER(ClassReference_Class), SMB_in_, MC_SMB_in_);
}


static void init_class_SMB_new() {
    /*
    new
// 	"The receiver can only have one instance. Create it or complain that
// 	one already exists."
// 
// 	thisClass class ~~ self
// 		ifTrue: [^thisClass := self basicNew]
// 		ifFalse: [self error: 'A Metaclass should only have one instance!']
    */
    Symbol SMB_new = new_Symbol(L"new");
    Symbol SMB_shouldNotCall = new_Symbol(L"shouldNotCall");
    // shouldNotCall. 
    Send PSend21636 = new_Send((Optr)self, SMB_shouldNotCall, 0);
    Array PThreadedCode21635 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21636, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21634 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21635, 2, PSend21636, self);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod21634, HEADER(ClassReference_Class));
    store_method(HEADER(ClassReference_Class), SMB_new, MC_SMB_new);
}

void init_Organization_PClassReference_layout() {
    layout_Organization_ClassReference_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Organization_ClassReference_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Organization_ClassReference_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Organization_ClassReference_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Organization_ClassReference_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Organization_ClassReference_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_ClassReference = new_Symbol(L"ClassReference");
    slot_Organization_ClassReference_package = (Optr)new_Slot(0, L"package");
    slot_Organization_ClassReference_pClass = (Optr)new_Slot(1, L"pClass");
    layout_Organization_ClassReference = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Organization_ClassReference)->values[0] = slot_Organization_ClassReference_package; // package 
    ((Array)layout_Organization_ClassReference)->values[1] = slot_Organization_ClassReference_pClass; // pClass 
    ClassReference_Class = (Class)new_Class(Object_Class, layout_Organization_ClassReference_Class_class);
    ClassReference_Class->layout = layout_Organization_ClassReference;
    ClassReference_Class->name = SMB_ClassReference;
    
}

void init_Organization_PClassReference_methods() {
    init_SMB_fullName();
    init_SMB_asNode();
    init_SMB_ensurePinocchioClass_();
    init_SMB_accept_();
    init_SMB_package();
    init_SMB_package_();
    init_SMB_packagesDo_();
    init_SMB_pclass();
    init_SMB_printOn_();
    init_SMB_lookupIn_at_();
    init_class_SMB_in_();
    init_class_SMB_new();
    
}