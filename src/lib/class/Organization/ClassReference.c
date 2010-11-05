#include <lib/class/Organization/ClassReference.h>


Optr layout_Organization_ClassReference_Class_class;
Optr slot_Organization_ClassReference_package;
Optr slot_Organization_ClassReference_pClass;
Optr layout_Organization_ClassReference;


static void init_SMB_fullName() {
    Symbol SMB_fullName = new_Symbol(L"fullName");
    Symbol SMB_package = new_Symbol(L"package");
    // package. 
    Send PSend21621 = new_Send((Optr)self, SMB_package, 0);
    // fullName. 
    Send PSend21622 = new_Send((Optr)PSend21621, SMB_fullName, 0);
    String string_21623 = new_String(L".");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_21623_Const = new_Constant((Optr)string_21623);
    // ,. 
    Send PSend21624 = new_Send((Optr)PSend21622, SMB__append_, 1, (Optr)string_21623_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend21625 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_name, 0);
    // ,. 
    Send PSend21626 = new_Send((Optr)PSend21624, SMB__append_, 1, (Optr)PSend21625);
    Array PThreadedCode21620 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21621, (Optr)&t_send0, (Optr)PSend21622, (Optr)&t_push1, (Optr)string_21623, (Optr)&t_send1, (Optr)PSend21624, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_send0, (Optr)PSend21625, (Optr)&t_send1, (Optr)PSend21626, (Optr)&t_method_return);
    Method PMethod21619 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21620, 1, PSend21626);
    
    MethodClosure MC_SMB_fullName = new_MethodClosure((Method)PMethod21619, ClassReference_Class);
    store_method(ClassReference_Class, SMB_fullName, MC_SMB_fullName);
}


static void init_SMB_asNode() {
    Symbol SMB_asNode = new_Symbol(L"asNode");
    Array PThreadedCode21628 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod21627 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21628, 1, self);
    
    MethodClosure MC_SMB_asNode = new_MethodClosure((Method)PMethod21627, ClassReference_Class);
    store_method(ClassReference_Class, SMB_asNode, MC_SMB_asNode);
}


static void init_SMB_ensurePinocchioClass_() {
    Symbol SMB_ensurePinocchioClass_ = new_Symbol(L"ensurePinocchioClass:");
    Variable VAR_aPinocchioClass_0_0 = new_Variable_named(L"aPinocchioClass", 0);
    Array PArray21630 = new_Array_with(1, (Optr)VAR_aPinocchioClass_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21633 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_shouldNotHappen = new_Symbol(L"shouldNotHappen");
    // shouldNotHappen. 
    Send PSend21637 = new_Send((Optr)self, SMB_shouldNotHappen, 0);
    Array PThreadedCode21636 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21637, (Optr)&t_block_return);
    Block PBlock21635 = new_Block_with(empty_Array, empty_Array, PThreadedCode21636, 1, PSend21637);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend21638 = new_Send((Optr)VAR_aPinocchioClass_0_0, SMB_ifNil_, 1, (Optr)PBlock21635);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend21641 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB__pequals_, 1, (Optr)VAR_aPinocchioClass_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_error = new_Symbol(L"error");
    // error. 
    Send PSend21645 = new_Send((Optr)self, SMB_error, 0);
    Array PThreadedCode21644 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21645, (Optr)&t_block_return);
    Block PBlock21643 = new_Block_with(empty_Array, empty_Array, PThreadedCode21644, 1, PSend21645);
    // ifFalse:. 
    Send PSend21642 = new_Send((Optr)PSend21641, SMB_ifFalse_, 1, (Optr)PBlock21643);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21646 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)slot_Organization_ClassReference_pClass);
    Array PThreadedCode21640 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_send1, (Optr)PSend21641, (Optr)&t_send_ifFalse_, (Optr)PSend21642, (Optr)PBlock21643, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_send1, (Optr)PSend21646, (Optr)&t_block_return);
    Block PBlock21639 = new_Block_with(empty_Array, empty_Array, PThreadedCode21640, 2, PSend21642, PSend21646);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend21647 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_ifNotNil_, 1, (Optr)PBlock21639);
    Assign PAssign21648 = new_Assign((Optr)slot_Organization_ClassReference_pClass, (Optr)VAR_aPinocchioClass_0_0);
    Array PThreadedCode21634 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_push_closure, (Optr)PBlock21635, (Optr)&t_send1, (Optr)PSend21638, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_push_closure, (Optr)PBlock21639, (Optr)&t_send1, (Optr)PSend21647, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21648, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock21632 = new_Block_with(PArray21633, empty_Array, PThreadedCode21634, 3, PSend21638, PSend21647, PAssign21648);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21649 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21632);
    Array PThreadedCode21631 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21632, (Optr)&t_send1, (Optr)PSend21649, (Optr)&t_method_return);
    Method PMethod21629 = new_Method_with(PArray21630, empty_Array, empty_Array, PThreadedCode21631, 1, PSend21649);
    
    MethodClosure MC_SMB_ensurePinocchioClass_ = new_MethodClosure((Method)PMethod21629, ClassReference_Class);
    store_method(ClassReference_Class, SMB_ensurePinocchioClass_, MC_SMB_ensurePinocchioClass_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray21651 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitClassReference_ = new_Symbol(L"visitClassReference:");
    // visitClassReference:. 
    Send PSend21653 = new_Send((Optr)VAR_visitor_0_0, SMB_visitClassReference_, 1, (Optr)self);
    Array PThreadedCode21652 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21653, (Optr)&t_method_return);
    Method PMethod21650 = new_Method_with(PArray21651, empty_Array, empty_Array, PThreadedCode21652, 1, PSend21653);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod21650, ClassReference_Class);
    store_method(ClassReference_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_package() {
    Symbol SMB_package = new_Symbol(L"package");
    Array PThreadedCode21655 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_package, (Optr)&t_method_return);
    Method PMethod21654 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21655, 1, slot_Organization_ClassReference_package);
    
    MethodClosure MC_SMB_package = new_MethodClosure((Method)PMethod21654, ClassReference_Class);
    store_method(ClassReference_Class, SMB_package, MC_SMB_package);
}


static void init_SMB_package_() {
    Symbol SMB_package_ = new_Symbol(L"package:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray21657 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign21659 = new_Assign((Optr)slot_Organization_ClassReference_package, (Optr)VAR_anObject_0_0);
    Array PThreadedCode21658 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21659, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21656 = new_Method_with(PArray21657, empty_Array, empty_Array, PThreadedCode21658, 2, PAssign21659, self);
    
    MethodClosure MC_SMB_package_ = new_MethodClosure((Method)PMethod21656, ClassReference_Class);
    store_method(ClassReference_Class, SMB_package_, MC_SMB_package_);
}


static void init_SMB_packagesDo_() {
    Symbol SMB_packagesDo_ = new_Symbol(L"packagesDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray21661 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode21662 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod21660 = new_Method_with(PArray21661, empty_Array, empty_Array, PThreadedCode21662, 1, self);
    
    MethodClosure MC_SMB_packagesDo_ = new_MethodClosure((Method)PMethod21660, ClassReference_Class);
    store_method(ClassReference_Class, SMB_packagesDo_, MC_SMB_packagesDo_);
}


static void init_SMB_pclass() {
    Symbol SMB_pclass = new_Symbol(L"pclass");
    Array PThreadedCode21664 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_method_return);
    Method PMethod21663 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21664, 1, slot_Organization_ClassReference_pClass);
    
    MethodClosure MC_SMB_pclass = new_MethodClosure((Method)PMethod21663, ClassReference_Class);
    store_method(ClassReference_Class, SMB_pclass, MC_SMB_pclass);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21666 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper21668 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    String string_21671 = new_String(L" (");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_21671_Const = new_Constant((Optr)string_21671);
    // <<. 
    Send PSend21672 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_21671_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend21673 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_name, 0);
    // <<. 
    Send PSend21674 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21673);
    Character char_4146 = new_Character(L')');
    Constant char_4146_Const = new_Constant((Optr)char_4146);
    // <<. 
    Send PSend21675 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4146_Const);
    Array PThreadedCode21670 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_21671, (Optr)&t_send1, (Optr)PSend21672, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_send0, (Optr)PSend21673, (Optr)&t_send1, (Optr)PSend21674, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4146, (Optr)&t_send1, (Optr)PSend21675, (Optr)&t_block_return);
    Block PBlock21669 = new_Block_with(empty_Array, empty_Array, PThreadedCode21670, 3, PSend21672, PSend21674, PSend21675);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend21676 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_ifNotNil_, 1, (Optr)PBlock21669);
    Array PThreadedCode21667 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper21668, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_push_closure, (Optr)PBlock21669, (Optr)&t_send1, (Optr)PSend21676, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21665 = new_Method_with(PArray21666, empty_Array, empty_Array, PThreadedCode21667, 3, PSuper21668, PSend21676, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21665, ClassReference_Class);
    store_method(ClassReference_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_lookupIn_at_() {
    Symbol SMB_lookupIn_at_ = new_Symbol(L"lookupIn:at:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray21678 = new_Array_with(2, (Optr)VAR_aCollection_0_0, (Optr)VAR_index_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21681 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend21683 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend21684 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)PSend21683);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray21689 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_path_ = new_Symbol(L"path:");
    // path:. 
    Send PSend21691 = new_Send((Optr)VAR__receiver__2_0, SMB_path_, 1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_index_ = new_Symbol(L"index:");
    // index:. 
    Send PSend21692 = new_Send((Optr)VAR__receiver__2_0, SMB_index_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend21693 = new_Send((Optr)VAR__receiver__2_0, SMB_signal, 0);
    Array PThreadedCode21690 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send1, (Optr)PSend21691, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend21692, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend21693, (Optr)&t_method_return);
    Block PBlock21688 = new_Block_with(PArray21689, empty_Array, PThreadedCode21690, 3, PSend21691, PSend21692, PSend21693);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21694 = new_Send((Optr)PNestedClassException_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21695 = new_Send((Optr)PBlock21688, SMB_value_, 1, (Optr)PSend21694);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21696 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend21695);
    Array PThreadedCode21687 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_closure, (Optr)PBlock21688, (Optr)&t_push_class_reference, (Optr)PNestedClassException_classReference, (Optr)&t_send0, (Optr)PSend21694, (Optr)&t_send1, (Optr)PSend21695, (Optr)&t_send1, (Optr)PSend21696, (Optr)&t_block_return);
    Block PBlock21686 = new_Block_with(empty_Array, empty_Array, PThreadedCode21687, 1, PSend21696);
    // ifFalse:. 
    Send PSend21685 = new_Send((Optr)PSend21684, SMB_ifFalse_, 1, (Optr)PBlock21686);
    Array PThreadedCode21682 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend21683, (Optr)&t_send1, (Optr)PSend21684, (Optr)&t_send_ifFalse_, (Optr)PSend21685, (Optr)PBlock21686, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock21680 = new_Block_with(PArray21681, empty_Array, PThreadedCode21682, 2, PSend21685, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21697 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21680);
    Array PThreadedCode21679 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21680, (Optr)&t_send1, (Optr)PSend21697, (Optr)&t_method_return);
    Method PMethod21677 = new_Method_with(PArray21678, empty_Array, empty_Array, PThreadedCode21679, 1, PSend21697);
    
    MethodClosure MC_SMB_lookupIn_at_ = new_MethodClosure((Method)PMethod21677, ClassReference_Class);
    store_method(ClassReference_Class, SMB_lookupIn_at_, MC_SMB_lookupIn_at_);
}


static void init_class_SMB_in_() {
    Symbol SMB_in_ = new_Symbol(L"in:");
    Variable VAR_package_0_0 = new_Variable_named(L"package", 0);
    Array PArray21699 = new_Array_with(1, (Optr)VAR_package_0_0);
    Symbol SMB_shouldNotHappen = new_Symbol(L"shouldNotHappen");
    // shouldNotHappen. 
    Send PSend21703 = new_Send((Optr)self, SMB_shouldNotHappen, 0);
    Array PThreadedCode21702 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21703, (Optr)&t_block_return);
    Block PBlock21701 = new_Block_with(empty_Array, empty_Array, PThreadedCode21702, 1, PSend21703);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend21704 = new_Send((Optr)VAR_package_0_0, SMB_ifNil_, 1, (Optr)PBlock21701);
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper21705 = new_Super(SMB_new, 0);
    Symbol SMB_package_ = new_Symbol(L"package:");
    // package:. 
    Send PSend21706 = new_Send((Optr)PSuper21705, SMB_package_, 1, (Optr)VAR_package_0_0);
    Array PThreadedCode21700 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_package_0_0, (Optr)&t_push_closure, (Optr)PBlock21701, (Optr)&t_send1, (Optr)PSend21704, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper21705, (Optr)&t_push_variable, (Optr)VAR_package_0_0, (Optr)&t_send1, (Optr)PSend21706, (Optr)&t_method_return);
    Method PMethod21698 = new_Method_with(PArray21699, empty_Array, empty_Array, PThreadedCode21700, 2, PSend21704, PSend21706);
    
    MethodClosure MC_SMB_in_ = new_MethodClosure((Method)PMethod21698, HEADER(ClassReference_Class));
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
    Send PSend21709 = new_Send((Optr)self, SMB_shouldNotCall, 0);
    Array PThreadedCode21708 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21709, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21707 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21708, 2, PSend21709, self);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod21707, HEADER(ClassReference_Class));
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