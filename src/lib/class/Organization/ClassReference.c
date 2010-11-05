#include <lib/class/Organization/ClassReference.h>


Optr layout_Organization_ClassReference_Class_class;
Optr slot_Organization_ClassReference_package;
Optr slot_Organization_ClassReference_pClass;
Optr layout_Organization_ClassReference;


static void init_SMB_fullName() {
    Symbol SMB_fullName = new_Symbol(L"fullName");
    Symbol SMB_package = new_Symbol(L"package");
    // package. 
    Send PSend21657 = new_Send((Optr)self, SMB_package, 0);
    // fullName. 
    Send PSend21658 = new_Send((Optr)PSend21657, SMB_fullName, 0);
    String string_21659 = new_String(L".");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_21659_Const = new_Constant((Optr)string_21659);
    // ,. 
    Send PSend21660 = new_Send((Optr)PSend21658, SMB__append_, 1, (Optr)string_21659_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend21661 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_name, 0);
    // ,. 
    Send PSend21662 = new_Send((Optr)PSend21660, SMB__append_, 1, (Optr)PSend21661);
    Array PThreadedCode21656 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21657, (Optr)&t_send0, (Optr)PSend21658, (Optr)&t_push1, (Optr)string_21659, (Optr)&t_send1, (Optr)PSend21660, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_send0, (Optr)PSend21661, (Optr)&t_send1, (Optr)PSend21662, (Optr)&t_method_return);
    Method PMethod21655 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21656, 1, PSend21662);
    
    MethodClosure MC_SMB_fullName = new_MethodClosure((Method)PMethod21655, ClassReference_Class);
    store_method(ClassReference_Class, SMB_fullName, MC_SMB_fullName);
}


static void init_SMB_asNode() {
    Symbol SMB_asNode = new_Symbol(L"asNode");
    Array PThreadedCode21664 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod21663 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21664, 1, self);
    
    MethodClosure MC_SMB_asNode = new_MethodClosure((Method)PMethod21663, ClassReference_Class);
    store_method(ClassReference_Class, SMB_asNode, MC_SMB_asNode);
}


static void init_SMB_ensurePinocchioClass_() {
    Symbol SMB_ensurePinocchioClass_ = new_Symbol(L"ensurePinocchioClass:");
    Variable VAR_aPinocchioClass_0_0 = new_Variable_named(L"aPinocchioClass", 0);
    Array PArray21666 = new_Array_with(1, (Optr)VAR_aPinocchioClass_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21669 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_shouldNotHappen = new_Symbol(L"shouldNotHappen");
    // shouldNotHappen. 
    Send PSend21673 = new_Send((Optr)self, SMB_shouldNotHappen, 0);
    Array PThreadedCode21672 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21673, (Optr)&t_block_return);
    Block PBlock21671 = new_Block_with(empty_Array, empty_Array, PThreadedCode21672, 1, PSend21673);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend21674 = new_Send((Optr)VAR_aPinocchioClass_0_0, SMB_ifNil_, 1, (Optr)PBlock21671);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend21677 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB__pequals_, 1, (Optr)VAR_aPinocchioClass_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_error = new_Symbol(L"error");
    // error. 
    Send PSend21681 = new_Send((Optr)self, SMB_error, 0);
    Array PThreadedCode21680 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21681, (Optr)&t_block_return);
    Block PBlock21679 = new_Block_with(empty_Array, empty_Array, PThreadedCode21680, 1, PSend21681);
    // ifFalse:. 
    Send PSend21678 = new_Send((Optr)PSend21677, SMB_ifFalse_, 1, (Optr)PBlock21679);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21682 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)slot_Organization_ClassReference_pClass);
    Array PThreadedCode21676 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_send1, (Optr)PSend21677, (Optr)&t_send_ifFalse_, (Optr)PSend21678, (Optr)PBlock21679, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_send1, (Optr)PSend21682, (Optr)&t_block_return);
    Block PBlock21675 = new_Block_with(empty_Array, empty_Array, PThreadedCode21676, 2, PSend21678, PSend21682);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend21683 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_ifNotNil_, 1, (Optr)PBlock21675);
    Assign PAssign21684 = new_Assign((Optr)slot_Organization_ClassReference_pClass, (Optr)VAR_aPinocchioClass_0_0);
    Array PThreadedCode21670 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_push_closure, (Optr)PBlock21671, (Optr)&t_send1, (Optr)PSend21674, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_push_closure, (Optr)PBlock21675, (Optr)&t_send1, (Optr)PSend21683, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21684, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock21668 = new_Block_with(PArray21669, empty_Array, PThreadedCode21670, 3, PSend21674, PSend21683, PAssign21684);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21685 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21668);
    Array PThreadedCode21667 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21668, (Optr)&t_send1, (Optr)PSend21685, (Optr)&t_method_return);
    Method PMethod21665 = new_Method_with(PArray21666, empty_Array, empty_Array, PThreadedCode21667, 1, PSend21685);
    
    MethodClosure MC_SMB_ensurePinocchioClass_ = new_MethodClosure((Method)PMethod21665, ClassReference_Class);
    store_method(ClassReference_Class, SMB_ensurePinocchioClass_, MC_SMB_ensurePinocchioClass_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray21687 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitClassReference_ = new_Symbol(L"visitClassReference:");
    // visitClassReference:. 
    Send PSend21689 = new_Send((Optr)VAR_visitor_0_0, SMB_visitClassReference_, 1, (Optr)self);
    Array PThreadedCode21688 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21689, (Optr)&t_method_return);
    Method PMethod21686 = new_Method_with(PArray21687, empty_Array, empty_Array, PThreadedCode21688, 1, PSend21689);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod21686, ClassReference_Class);
    store_method(ClassReference_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_package() {
    Symbol SMB_package = new_Symbol(L"package");
    Array PThreadedCode21691 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_package, (Optr)&t_method_return);
    Method PMethod21690 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21691, 1, slot_Organization_ClassReference_package);
    
    MethodClosure MC_SMB_package = new_MethodClosure((Method)PMethod21690, ClassReference_Class);
    store_method(ClassReference_Class, SMB_package, MC_SMB_package);
}


static void init_SMB_package_() {
    Symbol SMB_package_ = new_Symbol(L"package:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray21693 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign21695 = new_Assign((Optr)slot_Organization_ClassReference_package, (Optr)VAR_anObject_0_0);
    Array PThreadedCode21694 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21695, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21692 = new_Method_with(PArray21693, empty_Array, empty_Array, PThreadedCode21694, 2, PAssign21695, self);
    
    MethodClosure MC_SMB_package_ = new_MethodClosure((Method)PMethod21692, ClassReference_Class);
    store_method(ClassReference_Class, SMB_package_, MC_SMB_package_);
}


static void init_SMB_packagesDo_() {
    Symbol SMB_packagesDo_ = new_Symbol(L"packagesDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray21697 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode21698 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod21696 = new_Method_with(PArray21697, empty_Array, empty_Array, PThreadedCode21698, 1, self);
    
    MethodClosure MC_SMB_packagesDo_ = new_MethodClosure((Method)PMethod21696, ClassReference_Class);
    store_method(ClassReference_Class, SMB_packagesDo_, MC_SMB_packagesDo_);
}


static void init_SMB_pclass() {
    Symbol SMB_pclass = new_Symbol(L"pclass");
    Array PThreadedCode21700 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_method_return);
    Method PMethod21699 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21700, 1, slot_Organization_ClassReference_pClass);
    
    MethodClosure MC_SMB_pclass = new_MethodClosure((Method)PMethod21699, ClassReference_Class);
    store_method(ClassReference_Class, SMB_pclass, MC_SMB_pclass);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21702 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper21704 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    String string_21707 = new_String(L" (");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_21707_Const = new_Constant((Optr)string_21707);
    // <<. 
    Send PSend21708 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_21707_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend21709 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_name, 0);
    // <<. 
    Send PSend21710 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21709);
    Character char_4146 = new_Character(L')');
    Constant char_4146_Const = new_Constant((Optr)char_4146);
    // <<. 
    Send PSend21711 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4146_Const);
    Array PThreadedCode21706 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_21707, (Optr)&t_send1, (Optr)PSend21708, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_send0, (Optr)PSend21709, (Optr)&t_send1, (Optr)PSend21710, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4146, (Optr)&t_send1, (Optr)PSend21711, (Optr)&t_block_return);
    Block PBlock21705 = new_Block_with(empty_Array, empty_Array, PThreadedCode21706, 3, PSend21708, PSend21710, PSend21711);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend21712 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_ifNotNil_, 1, (Optr)PBlock21705);
    Array PThreadedCode21703 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper21704, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_push_closure, (Optr)PBlock21705, (Optr)&t_send1, (Optr)PSend21712, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21701 = new_Method_with(PArray21702, empty_Array, empty_Array, PThreadedCode21703, 3, PSuper21704, PSend21712, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21701, ClassReference_Class);
    store_method(ClassReference_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_lookupIn_at_() {
    Symbol SMB_lookupIn_at_ = new_Symbol(L"lookupIn:at:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray21714 = new_Array_with(2, (Optr)VAR_aCollection_0_0, (Optr)VAR_index_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21717 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend21719 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend21720 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)PSend21719);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray21725 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_path_ = new_Symbol(L"path:");
    // path:. 
    Send PSend21727 = new_Send((Optr)VAR__receiver__2_0, SMB_path_, 1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_index_ = new_Symbol(L"index:");
    // index:. 
    Send PSend21728 = new_Send((Optr)VAR__receiver__2_0, SMB_index_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend21729 = new_Send((Optr)VAR__receiver__2_0, SMB_signal, 0);
    Array PThreadedCode21726 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send1, (Optr)PSend21727, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend21728, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend21729, (Optr)&t_method_return);
    Block PBlock21724 = new_Block_with(PArray21725, empty_Array, PThreadedCode21726, 3, PSend21727, PSend21728, PSend21729);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21730 = new_Send((Optr)PNestedClassException_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21731 = new_Send((Optr)PBlock21724, SMB_value_, 1, (Optr)PSend21730);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21732 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend21731);
    Array PThreadedCode21723 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_closure, (Optr)PBlock21724, (Optr)&t_push_class_reference, (Optr)PNestedClassException_classReference, (Optr)&t_send0, (Optr)PSend21730, (Optr)&t_send1, (Optr)PSend21731, (Optr)&t_send1, (Optr)PSend21732, (Optr)&t_block_return);
    Block PBlock21722 = new_Block_with(empty_Array, empty_Array, PThreadedCode21723, 1, PSend21732);
    // ifFalse:. 
    Send PSend21721 = new_Send((Optr)PSend21720, SMB_ifFalse_, 1, (Optr)PBlock21722);
    Array PThreadedCode21718 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend21719, (Optr)&t_send1, (Optr)PSend21720, (Optr)&t_send_ifFalse_, (Optr)PSend21721, (Optr)PBlock21722, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock21716 = new_Block_with(PArray21717, empty_Array, PThreadedCode21718, 2, PSend21721, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21733 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21716);
    Array PThreadedCode21715 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21716, (Optr)&t_send1, (Optr)PSend21733, (Optr)&t_method_return);
    Method PMethod21713 = new_Method_with(PArray21714, empty_Array, empty_Array, PThreadedCode21715, 1, PSend21733);
    
    MethodClosure MC_SMB_lookupIn_at_ = new_MethodClosure((Method)PMethod21713, ClassReference_Class);
    store_method(ClassReference_Class, SMB_lookupIn_at_, MC_SMB_lookupIn_at_);
}


static void init_class_SMB_in_() {
    Symbol SMB_in_ = new_Symbol(L"in:");
    Variable VAR_package_0_0 = new_Variable_named(L"package", 0);
    Array PArray21735 = new_Array_with(1, (Optr)VAR_package_0_0);
    Symbol SMB_shouldNotHappen = new_Symbol(L"shouldNotHappen");
    // shouldNotHappen. 
    Send PSend21739 = new_Send((Optr)self, SMB_shouldNotHappen, 0);
    Array PThreadedCode21738 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21739, (Optr)&t_block_return);
    Block PBlock21737 = new_Block_with(empty_Array, empty_Array, PThreadedCode21738, 1, PSend21739);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend21740 = new_Send((Optr)VAR_package_0_0, SMB_ifNil_, 1, (Optr)PBlock21737);
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper21741 = new_Super(SMB_new, 0);
    Symbol SMB_package_ = new_Symbol(L"package:");
    // package:. 
    Send PSend21742 = new_Send((Optr)PSuper21741, SMB_package_, 1, (Optr)VAR_package_0_0);
    Array PThreadedCode21736 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_package_0_0, (Optr)&t_push_closure, (Optr)PBlock21737, (Optr)&t_send1, (Optr)PSend21740, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper21741, (Optr)&t_push_variable, (Optr)VAR_package_0_0, (Optr)&t_send1, (Optr)PSend21742, (Optr)&t_method_return);
    Method PMethod21734 = new_Method_with(PArray21735, empty_Array, empty_Array, PThreadedCode21736, 2, PSend21740, PSend21742);
    
    MethodClosure MC_SMB_in_ = new_MethodClosure((Method)PMethod21734, HEADER(ClassReference_Class));
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
    Send PSend21745 = new_Send((Optr)self, SMB_shouldNotCall, 0);
    Array PThreadedCode21744 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21745, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21743 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21744, 2, PSend21745, self);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod21743, HEADER(ClassReference_Class));
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