#include <lib/class/Organization/ClassReference.h>


Optr layout_Organization_ClassReference_Class_class;
Optr slot_Organization_ClassReference_package;
Optr slot_Organization_ClassReference_pClass;
Optr layout_Organization_ClassReference;


static void init_SMB_fullName() {
    Symbol SMB_fullName = new_Symbol(L"fullName");
    Symbol SMB_package = new_Symbol(L"package");
    // package. 
    Send PSend21461 = new_Send((Optr)self, SMB_package, 0);
    // fullName. 
    Send PSend21462 = new_Send((Optr)PSend21461, SMB_fullName, 0);
    String string_21463 = new_String(L".");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_21463_Const = new_Constant((Optr)string_21463);
    // ,. 
    Send PSend21464 = new_Send((Optr)PSend21462, SMB__append_, 1, (Optr)string_21463_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend21465 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_name, 0);
    // ,. 
    Send PSend21466 = new_Send((Optr)PSend21464, SMB__append_, 1, (Optr)PSend21465);
    Array PThreadedCode21460 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21461, (Optr)&t_send0, (Optr)PSend21462, (Optr)&t_push1, (Optr)string_21463, (Optr)&t_send1, (Optr)PSend21464, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_send0, (Optr)PSend21465, (Optr)&t_send1, (Optr)PSend21466, (Optr)&t_method_return);
    Method PMethod21459 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21460, 1, PSend21466);
    
    MethodClosure MC_SMB_fullName = new_MethodClosure((Method)PMethod21459, ClassReference_Class);
    store_method(ClassReference_Class, SMB_fullName, MC_SMB_fullName);
}


static void init_SMB_asNode() {
    Symbol SMB_asNode = new_Symbol(L"asNode");
    Array PThreadedCode21468 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod21467 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21468, 1, self);
    
    MethodClosure MC_SMB_asNode = new_MethodClosure((Method)PMethod21467, ClassReference_Class);
    store_method(ClassReference_Class, SMB_asNode, MC_SMB_asNode);
}


static void init_SMB_ensurePinocchioClass_() {
    Symbol SMB_ensurePinocchioClass_ = new_Symbol(L"ensurePinocchioClass:");
    Variable VAR_aPinocchioClass_0_0 = new_Variable_named(L"aPinocchioClass", 0);
    Array PArray21470 = new_Array_with(1, (Optr)VAR_aPinocchioClass_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21473 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_shouldNotHappen = new_Symbol(L"shouldNotHappen");
    // shouldNotHappen. 
    Send PSend21477 = new_Send((Optr)self, SMB_shouldNotHappen, 0);
    Array PThreadedCode21476 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21477, (Optr)&t_block_return);
    Block PBlock21475 = new_Block_with(empty_Array, empty_Array, PThreadedCode21476, 1, PSend21477);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend21478 = new_Send((Optr)VAR_aPinocchioClass_0_0, SMB_ifNil_, 1, (Optr)PBlock21475);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend21481 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB__pequals_, 1, (Optr)VAR_aPinocchioClass_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_error = new_Symbol(L"error");
    // error. 
    Send PSend21485 = new_Send((Optr)self, SMB_error, 0);
    Array PThreadedCode21484 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21485, (Optr)&t_block_return);
    Block PBlock21483 = new_Block_with(empty_Array, empty_Array, PThreadedCode21484, 1, PSend21485);
    // ifFalse:. 
    Send PSend21482 = new_Send((Optr)PSend21481, SMB_ifFalse_, 1, (Optr)PBlock21483);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21486 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)slot_Organization_ClassReference_pClass);
    Array PThreadedCode21480 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_send1, (Optr)PSend21481, (Optr)&t_send_ifFalse_, (Optr)PSend21482, (Optr)PBlock21483, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_send1, (Optr)PSend21486, (Optr)&t_block_return);
    Block PBlock21479 = new_Block_with(empty_Array, empty_Array, PThreadedCode21480, 2, PSend21482, PSend21486);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend21487 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_ifNotNil_, 1, (Optr)PBlock21479);
    Assign PAssign21488 = new_Assign((Optr)slot_Organization_ClassReference_pClass, (Optr)VAR_aPinocchioClass_0_0);
    Array PThreadedCode21474 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_push_closure, (Optr)PBlock21475, (Optr)&t_send1, (Optr)PSend21478, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_push_closure, (Optr)PBlock21479, (Optr)&t_send1, (Optr)PSend21487, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21488, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock21472 = new_Block_with(PArray21473, empty_Array, PThreadedCode21474, 3, PSend21478, PSend21487, PAssign21488);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21489 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21472);
    Array PThreadedCode21471 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21472, (Optr)&t_send1, (Optr)PSend21489, (Optr)&t_method_return);
    Method PMethod21469 = new_Method_with(PArray21470, empty_Array, empty_Array, PThreadedCode21471, 1, PSend21489);
    
    MethodClosure MC_SMB_ensurePinocchioClass_ = new_MethodClosure((Method)PMethod21469, ClassReference_Class);
    store_method(ClassReference_Class, SMB_ensurePinocchioClass_, MC_SMB_ensurePinocchioClass_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray21491 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitClassReference_ = new_Symbol(L"visitClassReference:");
    // visitClassReference:. 
    Send PSend21493 = new_Send((Optr)VAR_visitor_0_0, SMB_visitClassReference_, 1, (Optr)self);
    Array PThreadedCode21492 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21493, (Optr)&t_method_return);
    Method PMethod21490 = new_Method_with(PArray21491, empty_Array, empty_Array, PThreadedCode21492, 1, PSend21493);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod21490, ClassReference_Class);
    store_method(ClassReference_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_package() {
    Symbol SMB_package = new_Symbol(L"package");
    Array PThreadedCode21495 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_package, (Optr)&t_method_return);
    Method PMethod21494 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21495, 1, slot_Organization_ClassReference_package);
    
    MethodClosure MC_SMB_package = new_MethodClosure((Method)PMethod21494, ClassReference_Class);
    store_method(ClassReference_Class, SMB_package, MC_SMB_package);
}


static void init_SMB_package_() {
    Symbol SMB_package_ = new_Symbol(L"package:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray21497 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign21499 = new_Assign((Optr)slot_Organization_ClassReference_package, (Optr)VAR_anObject_0_0);
    Array PThreadedCode21498 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21499, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21496 = new_Method_with(PArray21497, empty_Array, empty_Array, PThreadedCode21498, 2, PAssign21499, self);
    
    MethodClosure MC_SMB_package_ = new_MethodClosure((Method)PMethod21496, ClassReference_Class);
    store_method(ClassReference_Class, SMB_package_, MC_SMB_package_);
}


static void init_SMB_packagesDo_() {
    Symbol SMB_packagesDo_ = new_Symbol(L"packagesDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray21501 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode21502 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod21500 = new_Method_with(PArray21501, empty_Array, empty_Array, PThreadedCode21502, 1, self);
    
    MethodClosure MC_SMB_packagesDo_ = new_MethodClosure((Method)PMethod21500, ClassReference_Class);
    store_method(ClassReference_Class, SMB_packagesDo_, MC_SMB_packagesDo_);
}


static void init_SMB_pclass() {
    Symbol SMB_pclass = new_Symbol(L"pclass");
    Array PThreadedCode21504 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_method_return);
    Method PMethod21503 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21504, 1, slot_Organization_ClassReference_pClass);
    
    MethodClosure MC_SMB_pclass = new_MethodClosure((Method)PMethod21503, ClassReference_Class);
    store_method(ClassReference_Class, SMB_pclass, MC_SMB_pclass);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21506 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper21508 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    String string_21511 = new_String(L" (");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_21511_Const = new_Constant((Optr)string_21511);
    // <<. 
    Send PSend21512 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_21511_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend21513 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_name, 0);
    // <<. 
    Send PSend21514 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21513);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend21515 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode21510 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_21511, (Optr)&t_send1, (Optr)PSend21512, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_send0, (Optr)PSend21513, (Optr)&t_send1, (Optr)PSend21514, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend21515, (Optr)&t_block_return);
    Block PBlock21509 = new_Block_with(empty_Array, empty_Array, PThreadedCode21510, 3, PSend21512, PSend21514, PSend21515);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend21516 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_ifNotNil_, 1, (Optr)PBlock21509);
    Array PThreadedCode21507 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper21508, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_push_closure, (Optr)PBlock21509, (Optr)&t_send1, (Optr)PSend21516, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21505 = new_Method_with(PArray21506, empty_Array, empty_Array, PThreadedCode21507, 3, PSuper21508, PSend21516, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21505, ClassReference_Class);
    store_method(ClassReference_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_lookupIn_at_() {
    Symbol SMB_lookupIn_at_ = new_Symbol(L"lookupIn:at:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray21518 = new_Array_with(2, (Optr)VAR_aCollection_0_0, (Optr)VAR_index_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21521 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend21523 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend21524 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)PSend21523);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray21529 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_path_ = new_Symbol(L"path:");
    // path:. 
    Send PSend21531 = new_Send((Optr)VAR__receiver__2_0, SMB_path_, 1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_index_ = new_Symbol(L"index:");
    // index:. 
    Send PSend21532 = new_Send((Optr)VAR__receiver__2_0, SMB_index_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend21533 = new_Send((Optr)VAR__receiver__2_0, SMB_signal, 0);
    Array PThreadedCode21530 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send1, (Optr)PSend21531, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend21532, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend21533, (Optr)&t_method_return);
    Block PBlock21528 = new_Block_with(PArray21529, empty_Array, PThreadedCode21530, 3, PSend21531, PSend21532, PSend21533);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21534 = new_Send((Optr)PNestedClassException_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21535 = new_Send((Optr)PBlock21528, SMB_value_, 1, (Optr)PSend21534);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21536 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend21535);
    Array PThreadedCode21527 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_closure, (Optr)PBlock21528, (Optr)&t_push_class_reference, (Optr)PNestedClassException_classReference, (Optr)&t_send0, (Optr)PSend21534, (Optr)&t_send1, (Optr)PSend21535, (Optr)&t_send1, (Optr)PSend21536, (Optr)&t_block_return);
    Block PBlock21526 = new_Block_with(empty_Array, empty_Array, PThreadedCode21527, 1, PSend21536);
    // ifFalse:. 
    Send PSend21525 = new_Send((Optr)PSend21524, SMB_ifFalse_, 1, (Optr)PBlock21526);
    Array PThreadedCode21522 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend21523, (Optr)&t_send1, (Optr)PSend21524, (Optr)&t_send_ifFalse_, (Optr)PSend21525, (Optr)PBlock21526, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock21520 = new_Block_with(PArray21521, empty_Array, PThreadedCode21522, 2, PSend21525, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21537 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21520);
    Array PThreadedCode21519 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21520, (Optr)&t_send1, (Optr)PSend21537, (Optr)&t_method_return);
    Method PMethod21517 = new_Method_with(PArray21518, empty_Array, empty_Array, PThreadedCode21519, 1, PSend21537);
    
    MethodClosure MC_SMB_lookupIn_at_ = new_MethodClosure((Method)PMethod21517, ClassReference_Class);
    store_method(ClassReference_Class, SMB_lookupIn_at_, MC_SMB_lookupIn_at_);
}


static void init_class_SMB_in_() {
    Symbol SMB_in_ = new_Symbol(L"in:");
    Variable VAR_package_0_0 = new_Variable_named(L"package", 0);
    Array PArray21539 = new_Array_with(1, (Optr)VAR_package_0_0);
    Symbol SMB_shouldNotHappen = new_Symbol(L"shouldNotHappen");
    // shouldNotHappen. 
    Send PSend21543 = new_Send((Optr)self, SMB_shouldNotHappen, 0);
    Array PThreadedCode21542 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21543, (Optr)&t_block_return);
    Block PBlock21541 = new_Block_with(empty_Array, empty_Array, PThreadedCode21542, 1, PSend21543);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend21544 = new_Send((Optr)VAR_package_0_0, SMB_ifNil_, 1, (Optr)PBlock21541);
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper21545 = new_Super(SMB_new, 0);
    Symbol SMB_package_ = new_Symbol(L"package:");
    // package:. 
    Send PSend21546 = new_Send((Optr)PSuper21545, SMB_package_, 1, (Optr)VAR_package_0_0);
    Array PThreadedCode21540 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_package_0_0, (Optr)&t_push_closure, (Optr)PBlock21541, (Optr)&t_send1, (Optr)PSend21544, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper21545, (Optr)&t_push_variable, (Optr)VAR_package_0_0, (Optr)&t_send1, (Optr)PSend21546, (Optr)&t_method_return);
    Method PMethod21538 = new_Method_with(PArray21539, empty_Array, empty_Array, PThreadedCode21540, 2, PSend21544, PSend21546);
    
    MethodClosure MC_SMB_in_ = new_MethodClosure((Method)PMethod21538, HEADER(ClassReference_Class));
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
    Send PSend21549 = new_Send((Optr)self, SMB_shouldNotCall, 0);
    Array PThreadedCode21548 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21549, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21547 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21548, 2, PSend21549, self);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod21547, HEADER(ClassReference_Class));
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