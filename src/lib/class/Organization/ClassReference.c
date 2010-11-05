#include <lib/class/Organization/ClassReference.h>


Optr layout_Organization_ClassReference_Class_class;
Optr slot_Organization_ClassReference_package;
Optr slot_Organization_ClassReference_pClass;
Optr layout_Organization_ClassReference;


static void init_SMB_fullName() {
    Symbol SMB_fullName = new_Symbol(L"fullName");
    Symbol SMB_package = new_Symbol(L"package");
    // package. 
    Send PSend21491 = new_Send((Optr)self, SMB_package, 0);
    // fullName. 
    Send PSend21492 = new_Send((Optr)PSend21491, SMB_fullName, 0);
    String string_21493 = new_String(L".");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_21493_Const = new_Constant((Optr)string_21493);
    // ,. 
    Send PSend21494 = new_Send((Optr)PSend21492, SMB__append_, 1, (Optr)string_21493_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend21495 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_name, 0);
    // ,. 
    Send PSend21496 = new_Send((Optr)PSend21494, SMB__append_, 1, (Optr)PSend21495);
    Array PThreadedCode21490 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21491, (Optr)&t_send0, (Optr)PSend21492, (Optr)&t_push1, (Optr)string_21493, (Optr)&t_send1, (Optr)PSend21494, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_send0, (Optr)PSend21495, (Optr)&t_send1, (Optr)PSend21496, (Optr)&t_method_return);
    Method PMethod21489 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21490, 1, PSend21496);
    
    MethodClosure MC_SMB_fullName = new_MethodClosure((Method)PMethod21489, ClassReference_Class);
    store_method(ClassReference_Class, SMB_fullName, MC_SMB_fullName);
}


static void init_SMB_asNode() {
    Symbol SMB_asNode = new_Symbol(L"asNode");
    Array PThreadedCode21498 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod21497 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21498, 1, self);
    
    MethodClosure MC_SMB_asNode = new_MethodClosure((Method)PMethod21497, ClassReference_Class);
    store_method(ClassReference_Class, SMB_asNode, MC_SMB_asNode);
}


static void init_SMB_ensurePinocchioClass_() {
    Symbol SMB_ensurePinocchioClass_ = new_Symbol(L"ensurePinocchioClass:");
    Variable VAR_aPinocchioClass_0_0 = new_Variable_named(L"aPinocchioClass", 0);
    Array PArray21500 = new_Array_with(1, (Optr)VAR_aPinocchioClass_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21503 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_shouldNotHappen = new_Symbol(L"shouldNotHappen");
    // shouldNotHappen. 
    Send PSend21507 = new_Send((Optr)self, SMB_shouldNotHappen, 0);
    Array PThreadedCode21506 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21507, (Optr)&t_block_return);
    Block PBlock21505 = new_Block_with(empty_Array, empty_Array, PThreadedCode21506, 1, PSend21507);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend21508 = new_Send((Optr)VAR_aPinocchioClass_0_0, SMB_ifNil_, 1, (Optr)PBlock21505);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend21511 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB__pequals_, 1, (Optr)VAR_aPinocchioClass_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_error = new_Symbol(L"error");
    // error. 
    Send PSend21515 = new_Send((Optr)self, SMB_error, 0);
    Array PThreadedCode21514 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21515, (Optr)&t_block_return);
    Block PBlock21513 = new_Block_with(empty_Array, empty_Array, PThreadedCode21514, 1, PSend21515);
    // ifFalse:. 
    Send PSend21512 = new_Send((Optr)PSend21511, SMB_ifFalse_, 1, (Optr)PBlock21513);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21516 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)slot_Organization_ClassReference_pClass);
    Array PThreadedCode21510 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_send1, (Optr)PSend21511, (Optr)&t_send_ifFalse_, (Optr)PSend21512, (Optr)PBlock21513, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_send1, (Optr)PSend21516, (Optr)&t_block_return);
    Block PBlock21509 = new_Block_with(empty_Array, empty_Array, PThreadedCode21510, 2, PSend21512, PSend21516);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend21517 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_ifNotNil_, 1, (Optr)PBlock21509);
    Assign PAssign21518 = new_Assign((Optr)slot_Organization_ClassReference_pClass, (Optr)VAR_aPinocchioClass_0_0);
    Array PThreadedCode21504 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_push_closure, (Optr)PBlock21505, (Optr)&t_send1, (Optr)PSend21508, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_push_closure, (Optr)PBlock21509, (Optr)&t_send1, (Optr)PSend21517, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21518, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock21502 = new_Block_with(PArray21503, empty_Array, PThreadedCode21504, 3, PSend21508, PSend21517, PAssign21518);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21519 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21502);
    Array PThreadedCode21501 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21502, (Optr)&t_send1, (Optr)PSend21519, (Optr)&t_method_return);
    Method PMethod21499 = new_Method_with(PArray21500, empty_Array, empty_Array, PThreadedCode21501, 1, PSend21519);
    
    MethodClosure MC_SMB_ensurePinocchioClass_ = new_MethodClosure((Method)PMethod21499, ClassReference_Class);
    store_method(ClassReference_Class, SMB_ensurePinocchioClass_, MC_SMB_ensurePinocchioClass_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray21521 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitClassReference_ = new_Symbol(L"visitClassReference:");
    // visitClassReference:. 
    Send PSend21523 = new_Send((Optr)VAR_visitor_0_0, SMB_visitClassReference_, 1, (Optr)self);
    Array PThreadedCode21522 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21523, (Optr)&t_method_return);
    Method PMethod21520 = new_Method_with(PArray21521, empty_Array, empty_Array, PThreadedCode21522, 1, PSend21523);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod21520, ClassReference_Class);
    store_method(ClassReference_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_package() {
    Symbol SMB_package = new_Symbol(L"package");
    Array PThreadedCode21525 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_package, (Optr)&t_method_return);
    Method PMethod21524 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21525, 1, slot_Organization_ClassReference_package);
    
    MethodClosure MC_SMB_package = new_MethodClosure((Method)PMethod21524, ClassReference_Class);
    store_method(ClassReference_Class, SMB_package, MC_SMB_package);
}


static void init_SMB_package_() {
    Symbol SMB_package_ = new_Symbol(L"package:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray21527 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign21529 = new_Assign((Optr)slot_Organization_ClassReference_package, (Optr)VAR_anObject_0_0);
    Array PThreadedCode21528 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21529, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21526 = new_Method_with(PArray21527, empty_Array, empty_Array, PThreadedCode21528, 2, PAssign21529, self);
    
    MethodClosure MC_SMB_package_ = new_MethodClosure((Method)PMethod21526, ClassReference_Class);
    store_method(ClassReference_Class, SMB_package_, MC_SMB_package_);
}


static void init_SMB_packagesDo_() {
    Symbol SMB_packagesDo_ = new_Symbol(L"packagesDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray21531 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode21532 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod21530 = new_Method_with(PArray21531, empty_Array, empty_Array, PThreadedCode21532, 1, self);
    
    MethodClosure MC_SMB_packagesDo_ = new_MethodClosure((Method)PMethod21530, ClassReference_Class);
    store_method(ClassReference_Class, SMB_packagesDo_, MC_SMB_packagesDo_);
}


static void init_SMB_pclass() {
    Symbol SMB_pclass = new_Symbol(L"pclass");
    Array PThreadedCode21534 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_method_return);
    Method PMethod21533 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21534, 1, slot_Organization_ClassReference_pClass);
    
    MethodClosure MC_SMB_pclass = new_MethodClosure((Method)PMethod21533, ClassReference_Class);
    store_method(ClassReference_Class, SMB_pclass, MC_SMB_pclass);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21536 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper21538 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    String string_21541 = new_String(L" (");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_21541_Const = new_Constant((Optr)string_21541);
    // <<. 
    Send PSend21542 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_21541_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend21543 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_name, 0);
    // <<. 
    Send PSend21544 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21543);
    Character char_4146 = new_Character(L')');
    Constant char_4146_Const = new_Constant((Optr)char_4146);
    // <<. 
    Send PSend21545 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4146_Const);
    Array PThreadedCode21540 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_21541, (Optr)&t_send1, (Optr)PSend21542, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_send0, (Optr)PSend21543, (Optr)&t_send1, (Optr)PSend21544, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4146, (Optr)&t_send1, (Optr)PSend21545, (Optr)&t_block_return);
    Block PBlock21539 = new_Block_with(empty_Array, empty_Array, PThreadedCode21540, 3, PSend21542, PSend21544, PSend21545);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend21546 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_ifNotNil_, 1, (Optr)PBlock21539);
    Array PThreadedCode21537 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper21538, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_push_closure, (Optr)PBlock21539, (Optr)&t_send1, (Optr)PSend21546, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21535 = new_Method_with(PArray21536, empty_Array, empty_Array, PThreadedCode21537, 3, PSuper21538, PSend21546, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21535, ClassReference_Class);
    store_method(ClassReference_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_lookupIn_at_() {
    Symbol SMB_lookupIn_at_ = new_Symbol(L"lookupIn:at:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray21548 = new_Array_with(2, (Optr)VAR_aCollection_0_0, (Optr)VAR_index_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21551 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend21553 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend21554 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)PSend21553);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray21559 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_path_ = new_Symbol(L"path:");
    // path:. 
    Send PSend21561 = new_Send((Optr)VAR__receiver__2_0, SMB_path_, 1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_index_ = new_Symbol(L"index:");
    // index:. 
    Send PSend21562 = new_Send((Optr)VAR__receiver__2_0, SMB_index_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend21563 = new_Send((Optr)VAR__receiver__2_0, SMB_signal, 0);
    Array PThreadedCode21560 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send1, (Optr)PSend21561, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend21562, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend21563, (Optr)&t_method_return);
    Block PBlock21558 = new_Block_with(PArray21559, empty_Array, PThreadedCode21560, 3, PSend21561, PSend21562, PSend21563);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21564 = new_Send((Optr)PNestedClassException_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21565 = new_Send((Optr)PBlock21558, SMB_value_, 1, (Optr)PSend21564);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21566 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend21565);
    Array PThreadedCode21557 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_closure, (Optr)PBlock21558, (Optr)&t_push_class_reference, (Optr)PNestedClassException_classReference, (Optr)&t_send0, (Optr)PSend21564, (Optr)&t_send1, (Optr)PSend21565, (Optr)&t_send1, (Optr)PSend21566, (Optr)&t_block_return);
    Block PBlock21556 = new_Block_with(empty_Array, empty_Array, PThreadedCode21557, 1, PSend21566);
    // ifFalse:. 
    Send PSend21555 = new_Send((Optr)PSend21554, SMB_ifFalse_, 1, (Optr)PBlock21556);
    Array PThreadedCode21552 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend21553, (Optr)&t_send1, (Optr)PSend21554, (Optr)&t_send_ifFalse_, (Optr)PSend21555, (Optr)PBlock21556, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock21550 = new_Block_with(PArray21551, empty_Array, PThreadedCode21552, 2, PSend21555, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21567 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21550);
    Array PThreadedCode21549 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21550, (Optr)&t_send1, (Optr)PSend21567, (Optr)&t_method_return);
    Method PMethod21547 = new_Method_with(PArray21548, empty_Array, empty_Array, PThreadedCode21549, 1, PSend21567);
    
    MethodClosure MC_SMB_lookupIn_at_ = new_MethodClosure((Method)PMethod21547, ClassReference_Class);
    store_method(ClassReference_Class, SMB_lookupIn_at_, MC_SMB_lookupIn_at_);
}


static void init_class_SMB_in_() {
    Symbol SMB_in_ = new_Symbol(L"in:");
    Variable VAR_package_0_0 = new_Variable_named(L"package", 0);
    Array PArray21569 = new_Array_with(1, (Optr)VAR_package_0_0);
    Symbol SMB_shouldNotHappen = new_Symbol(L"shouldNotHappen");
    // shouldNotHappen. 
    Send PSend21573 = new_Send((Optr)self, SMB_shouldNotHappen, 0);
    Array PThreadedCode21572 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21573, (Optr)&t_block_return);
    Block PBlock21571 = new_Block_with(empty_Array, empty_Array, PThreadedCode21572, 1, PSend21573);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend21574 = new_Send((Optr)VAR_package_0_0, SMB_ifNil_, 1, (Optr)PBlock21571);
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper21575 = new_Super(SMB_new, 0);
    Symbol SMB_package_ = new_Symbol(L"package:");
    // package:. 
    Send PSend21576 = new_Send((Optr)PSuper21575, SMB_package_, 1, (Optr)VAR_package_0_0);
    Array PThreadedCode21570 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_package_0_0, (Optr)&t_push_closure, (Optr)PBlock21571, (Optr)&t_send1, (Optr)PSend21574, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper21575, (Optr)&t_push_variable, (Optr)VAR_package_0_0, (Optr)&t_send1, (Optr)PSend21576, (Optr)&t_method_return);
    Method PMethod21568 = new_Method_with(PArray21569, empty_Array, empty_Array, PThreadedCode21570, 2, PSend21574, PSend21576);
    
    MethodClosure MC_SMB_in_ = new_MethodClosure((Method)PMethod21568, HEADER(ClassReference_Class));
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
    Send PSend21579 = new_Send((Optr)self, SMB_shouldNotCall, 0);
    Array PThreadedCode21578 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21579, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21577 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21578, 2, PSend21579, self);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod21577, HEADER(ClassReference_Class));
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