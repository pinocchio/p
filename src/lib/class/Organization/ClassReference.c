#include <lib/class/Organization/ClassReference.h>


Optr layout_Organization_ClassReference_Class_class;
Optr slot_Organization_ClassReference_package;
Optr slot_Organization_ClassReference_pClass;
Optr layout_Organization_ClassReference;


static void init_SMB_fullName() {
    Symbol SMB_fullName = new_Symbol(L"fullName");
    Symbol SMB_package = new_Symbol(L"package");
    // package. 
    Send PSend21632 = new_Send((Optr)self, SMB_package, 0);
    // fullName. 
    Send PSend21633 = new_Send((Optr)PSend21632, SMB_fullName, 0);
    String string_21634 = new_String(L".");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_21634_Const = new_Constant((Optr)string_21634);
    // ,. 
    Send PSend21635 = new_Send((Optr)PSend21633, SMB__append_, 1, (Optr)string_21634_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend21636 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_name, 0);
    // ,. 
    Send PSend21637 = new_Send((Optr)PSend21635, SMB__append_, 1, (Optr)PSend21636);
    Array PThreadedCode21631 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21632, (Optr)&t_send0, (Optr)PSend21633, (Optr)&t_push1, (Optr)string_21634, (Optr)&t_send1, (Optr)PSend21635, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_send0, (Optr)PSend21636, (Optr)&t_send1, (Optr)PSend21637, (Optr)&t_method_return);
    Method PMethod21630 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21631, 1, PSend21637);
    
    MethodClosure MC_SMB_fullName = new_MethodClosure((Method)PMethod21630, ClassReference_Class);
    store_method(ClassReference_Class, SMB_fullName, MC_SMB_fullName);
}


static void init_SMB_asNode() {
    Symbol SMB_asNode = new_Symbol(L"asNode");
    Array PThreadedCode21639 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod21638 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21639, 1, self);
    
    MethodClosure MC_SMB_asNode = new_MethodClosure((Method)PMethod21638, ClassReference_Class);
    store_method(ClassReference_Class, SMB_asNode, MC_SMB_asNode);
}


static void init_SMB_ensurePinocchioClass_() {
    Symbol SMB_ensurePinocchioClass_ = new_Symbol(L"ensurePinocchioClass:");
    Variable VAR_aPinocchioClass_0_0 = new_Variable_named(L"aPinocchioClass", 0);
    Array PArray21641 = new_Array_with(1, (Optr)VAR_aPinocchioClass_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21644 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_shouldNotHappen = new_Symbol(L"shouldNotHappen");
    // shouldNotHappen. 
    Send PSend21648 = new_Send((Optr)self, SMB_shouldNotHappen, 0);
    Array PThreadedCode21647 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21648, (Optr)&t_block_return);
    Block PBlock21646 = new_Block_with(empty_Array, empty_Array, PThreadedCode21647, 1, PSend21648);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend21649 = new_Send((Optr)VAR_aPinocchioClass_0_0, SMB_ifNil_, 1, (Optr)PBlock21646);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend21652 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB__pequals_, 1, (Optr)VAR_aPinocchioClass_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_error = new_Symbol(L"error");
    // error. 
    Send PSend21656 = new_Send((Optr)self, SMB_error, 0);
    Array PThreadedCode21655 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21656, (Optr)&t_block_return);
    Block PBlock21654 = new_Block_with(empty_Array, empty_Array, PThreadedCode21655, 1, PSend21656);
    // ifFalse:. 
    Send PSend21653 = new_Send((Optr)PSend21652, SMB_ifFalse_, 1, (Optr)PBlock21654);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21657 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)slot_Organization_ClassReference_pClass);
    Array PThreadedCode21651 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_send1, (Optr)PSend21652, (Optr)&t_send_ifFalse_, (Optr)PSend21653, (Optr)PBlock21654, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_send1, (Optr)PSend21657, (Optr)&t_block_return);
    Block PBlock21650 = new_Block_with(empty_Array, empty_Array, PThreadedCode21651, 2, PSend21653, PSend21657);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend21658 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_ifNotNil_, 1, (Optr)PBlock21650);
    Assign PAssign21659 = new_Assign((Optr)slot_Organization_ClassReference_pClass, (Optr)VAR_aPinocchioClass_0_0);
    Array PThreadedCode21645 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_push_closure, (Optr)PBlock21646, (Optr)&t_send1, (Optr)PSend21649, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_push_closure, (Optr)PBlock21650, (Optr)&t_send1, (Optr)PSend21658, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21659, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock21643 = new_Block_with(PArray21644, empty_Array, PThreadedCode21645, 3, PSend21649, PSend21658, PAssign21659);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21660 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21643);
    Array PThreadedCode21642 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21643, (Optr)&t_send1, (Optr)PSend21660, (Optr)&t_method_return);
    Method PMethod21640 = new_Method_with(PArray21641, empty_Array, empty_Array, PThreadedCode21642, 1, PSend21660);
    
    MethodClosure MC_SMB_ensurePinocchioClass_ = new_MethodClosure((Method)PMethod21640, ClassReference_Class);
    store_method(ClassReference_Class, SMB_ensurePinocchioClass_, MC_SMB_ensurePinocchioClass_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray21662 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitClassReference_ = new_Symbol(L"visitClassReference:");
    // visitClassReference:. 
    Send PSend21664 = new_Send((Optr)VAR_visitor_0_0, SMB_visitClassReference_, 1, (Optr)self);
    Array PThreadedCode21663 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21664, (Optr)&t_method_return);
    Method PMethod21661 = new_Method_with(PArray21662, empty_Array, empty_Array, PThreadedCode21663, 1, PSend21664);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod21661, ClassReference_Class);
    store_method(ClassReference_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_package() {
    Symbol SMB_package = new_Symbol(L"package");
    Array PThreadedCode21666 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_package, (Optr)&t_method_return);
    Method PMethod21665 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21666, 1, slot_Organization_ClassReference_package);
    
    MethodClosure MC_SMB_package = new_MethodClosure((Method)PMethod21665, ClassReference_Class);
    store_method(ClassReference_Class, SMB_package, MC_SMB_package);
}


static void init_SMB_package_() {
    Symbol SMB_package_ = new_Symbol(L"package:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray21668 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign21670 = new_Assign((Optr)slot_Organization_ClassReference_package, (Optr)VAR_anObject_0_0);
    Array PThreadedCode21669 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21670, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21667 = new_Method_with(PArray21668, empty_Array, empty_Array, PThreadedCode21669, 2, PAssign21670, self);
    
    MethodClosure MC_SMB_package_ = new_MethodClosure((Method)PMethod21667, ClassReference_Class);
    store_method(ClassReference_Class, SMB_package_, MC_SMB_package_);
}


static void init_SMB_packagesDo_() {
    Symbol SMB_packagesDo_ = new_Symbol(L"packagesDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray21672 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode21673 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod21671 = new_Method_with(PArray21672, empty_Array, empty_Array, PThreadedCode21673, 1, self);
    
    MethodClosure MC_SMB_packagesDo_ = new_MethodClosure((Method)PMethod21671, ClassReference_Class);
    store_method(ClassReference_Class, SMB_packagesDo_, MC_SMB_packagesDo_);
}


static void init_SMB_pclass() {
    Symbol SMB_pclass = new_Symbol(L"pclass");
    Array PThreadedCode21675 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_method_return);
    Method PMethod21674 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21675, 1, slot_Organization_ClassReference_pClass);
    
    MethodClosure MC_SMB_pclass = new_MethodClosure((Method)PMethod21674, ClassReference_Class);
    store_method(ClassReference_Class, SMB_pclass, MC_SMB_pclass);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21677 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper21679 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    String string_21682 = new_String(L" (");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_21682_Const = new_Constant((Optr)string_21682);
    // <<. 
    Send PSend21683 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_21682_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend21684 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_name, 0);
    // <<. 
    Send PSend21685 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21684);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend21686 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode21681 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_21682, (Optr)&t_send1, (Optr)PSend21683, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_send0, (Optr)PSend21684, (Optr)&t_send1, (Optr)PSend21685, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend21686, (Optr)&t_block_return);
    Block PBlock21680 = new_Block_with(empty_Array, empty_Array, PThreadedCode21681, 3, PSend21683, PSend21685, PSend21686);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend21687 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_ifNotNil_, 1, (Optr)PBlock21680);
    Array PThreadedCode21678 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper21679, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_push_closure, (Optr)PBlock21680, (Optr)&t_send1, (Optr)PSend21687, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21676 = new_Method_with(PArray21677, empty_Array, empty_Array, PThreadedCode21678, 3, PSuper21679, PSend21687, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21676, ClassReference_Class);
    store_method(ClassReference_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_lookupIn_at_() {
    Symbol SMB_lookupIn_at_ = new_Symbol(L"lookupIn:at:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray21689 = new_Array_with(2, (Optr)VAR_aCollection_0_0, (Optr)VAR_index_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21692 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend21694 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend21695 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)PSend21694);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray21700 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_path_ = new_Symbol(L"path:");
    // path:. 
    Send PSend21702 = new_Send((Optr)VAR__receiver__2_0, SMB_path_, 1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_index_ = new_Symbol(L"index:");
    // index:. 
    Send PSend21703 = new_Send((Optr)VAR__receiver__2_0, SMB_index_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend21704 = new_Send((Optr)VAR__receiver__2_0, SMB_signal, 0);
    Array PThreadedCode21701 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send1, (Optr)PSend21702, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend21703, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend21704, (Optr)&t_method_return);
    Block PBlock21699 = new_Block_with(PArray21700, empty_Array, PThreadedCode21701, 3, PSend21702, PSend21703, PSend21704);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21705 = new_Send((Optr)PNestedClassException_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21706 = new_Send((Optr)PBlock21699, SMB_value_, 1, (Optr)PSend21705);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21707 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend21706);
    Array PThreadedCode21698 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_closure, (Optr)PBlock21699, (Optr)&t_push_class_reference, (Optr)PNestedClassException_classReference, (Optr)&t_send0, (Optr)PSend21705, (Optr)&t_send1, (Optr)PSend21706, (Optr)&t_send1, (Optr)PSend21707, (Optr)&t_block_return);
    Block PBlock21697 = new_Block_with(empty_Array, empty_Array, PThreadedCode21698, 1, PSend21707);
    // ifFalse:. 
    Send PSend21696 = new_Send((Optr)PSend21695, SMB_ifFalse_, 1, (Optr)PBlock21697);
    Array PThreadedCode21693 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend21694, (Optr)&t_send1, (Optr)PSend21695, (Optr)&t_send_ifFalse_, (Optr)PSend21696, (Optr)PBlock21697, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock21691 = new_Block_with(PArray21692, empty_Array, PThreadedCode21693, 2, PSend21696, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21708 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21691);
    Array PThreadedCode21690 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21691, (Optr)&t_send1, (Optr)PSend21708, (Optr)&t_method_return);
    Method PMethod21688 = new_Method_with(PArray21689, empty_Array, empty_Array, PThreadedCode21690, 1, PSend21708);
    
    MethodClosure MC_SMB_lookupIn_at_ = new_MethodClosure((Method)PMethod21688, ClassReference_Class);
    store_method(ClassReference_Class, SMB_lookupIn_at_, MC_SMB_lookupIn_at_);
}


static void init_class_SMB_in_() {
    Symbol SMB_in_ = new_Symbol(L"in:");
    Variable VAR_package_0_0 = new_Variable_named(L"package", 0);
    Array PArray21710 = new_Array_with(1, (Optr)VAR_package_0_0);
    Symbol SMB_shouldNotHappen = new_Symbol(L"shouldNotHappen");
    // shouldNotHappen. 
    Send PSend21714 = new_Send((Optr)self, SMB_shouldNotHappen, 0);
    Array PThreadedCode21713 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21714, (Optr)&t_block_return);
    Block PBlock21712 = new_Block_with(empty_Array, empty_Array, PThreadedCode21713, 1, PSend21714);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend21715 = new_Send((Optr)VAR_package_0_0, SMB_ifNil_, 1, (Optr)PBlock21712);
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper21716 = new_Super(SMB_new, 0);
    Symbol SMB_package_ = new_Symbol(L"package:");
    // package:. 
    Send PSend21717 = new_Send((Optr)PSuper21716, SMB_package_, 1, (Optr)VAR_package_0_0);
    Array PThreadedCode21711 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_package_0_0, (Optr)&t_push_closure, (Optr)PBlock21712, (Optr)&t_send1, (Optr)PSend21715, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper21716, (Optr)&t_push_variable, (Optr)VAR_package_0_0, (Optr)&t_send1, (Optr)PSend21717, (Optr)&t_method_return);
    Method PMethod21709 = new_Method_with(PArray21710, empty_Array, empty_Array, PThreadedCode21711, 2, PSend21715, PSend21717);
    
    MethodClosure MC_SMB_in_ = new_MethodClosure((Method)PMethod21709, HEADER(ClassReference_Class));
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
    Send PSend21720 = new_Send((Optr)self, SMB_shouldNotCall, 0);
    Array PThreadedCode21719 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21720, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21718 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21719, 2, PSend21720, self);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod21718, HEADER(ClassReference_Class));
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