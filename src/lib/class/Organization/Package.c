#include <lib/class/Organization/Package.h>


Optr layout_Organization_Package_Class_class;
Optr slot_Organization_Package_parent;
Optr slot_Organization_Package_name;
Optr layout_Organization_Package;


static void init_SMB_root() {
    Symbol SMB_root = new_Symbol(L"root");
    // root. 
    Send PSend21582 = new_Send((Optr)slot_Organization_Package_parent, SMB_root, 0);
    Array PThreadedCode21581 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_send0, (Optr)PSend21582, (Optr)&t_method_return);
    Method PMethod21580 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21581, 1, PSend21582);
    
    MethodClosure MC_SMB_root = new_MethodClosure((Method)PMethod21580, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_root, MC_SMB_root);
}


static void init_SMB_findPackageName_() {
    Symbol SMB_findPackageName_ = new_Symbol(L"findPackageName:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
    Array PArray21584 = new_Array_with(1, (Optr)VAR_aName_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21587 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend21589 = new_Send((Optr)slot_Organization_Package_name, SMB__equals_, 1, (Optr)VAR_aName_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21593 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode21592 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21593, (Optr)&t_block_return);
    Block PBlock21591 = new_Block_with(empty_Array, empty_Array, PThreadedCode21592, 1, PSend21593);
    // ifTrue:. 
    Send PSend21590 = new_Send((Optr)PSend21589, SMB_ifTrue_, 1, (Optr)PBlock21591);
    // findPackageName:. 
    Send PSend21594 = new_Send((Optr)slot_Organization_Package_parent, SMB_findPackageName_, 1, (Optr)VAR_aName_0_0);
    Array PThreadedCode21588 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Organization_Package_name, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend21589, (Optr)&t_send_ifTrue_, (Optr)PSend21590, (Optr)PBlock21591, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend21594, (Optr)&t_method_return);
    Block PBlock21586 = new_Block_with(PArray21587, empty_Array, PThreadedCode21588, 2, PSend21590, PSend21594);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21595 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21586);
    Array PThreadedCode21585 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21586, (Optr)&t_send1, (Optr)PSend21595, (Optr)&t_method_return);
    Method PMethod21583 = new_Method_with(PArray21584, empty_Array, empty_Array, PThreadedCode21585, 1, PSend21595);
    
    MethodClosure MC_SMB_findPackageName_ = new_MethodClosure((Method)PMethod21583, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_findPackageName_, MC_SMB_findPackageName_);
}


static void init_SMB_parent_() {
    Symbol SMB_parent_ = new_Symbol(L"parent:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray21597 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign21599 = new_Assign((Optr)slot_Organization_Package_parent, (Optr)VAR_anObject_0_0);
    Array PThreadedCode21598 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21599, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21596 = new_Method_with(PArray21597, empty_Array, empty_Array, PThreadedCode21598, 2, PAssign21599, self);
    
    MethodClosure MC_SMB_parent_ = new_MethodClosure((Method)PMethod21596, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_parent_, MC_SMB_parent_);
}


static void init_SMB_isRoot() {
    Symbol SMB_isRoot = new_Symbol(L"isRoot");
    Array PThreadedCode21601 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_false);
    Method PMethod21600 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21601, 1, false_Const);
    
    MethodClosure MC_SMB_isRoot = new_MethodClosure((Method)PMethod21600, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_isRoot, MC_SMB_isRoot);
}


static void init_SMB_ensurePath_() {
    Symbol SMB_ensurePath_ = new_Symbol(L"ensurePath:");
    Variable VAR_aPath_0_0 = new_Variable_named(L"aPath", 0);
    Array PArray21603 = new_Array_with(1, (Optr)VAR_aPath_0_0);
    // ensurePath:. 
    Send PSend21605 = new_Send((Optr)slot_Organization_Package_parent, SMB_ensurePath_, 1, (Optr)VAR_aPath_0_0);
    Array PThreadedCode21604 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_send1, (Optr)PSend21605, (Optr)&t_method_return);
    Method PMethod21602 = new_Method_with(PArray21603, empty_Array, empty_Array, PThreadedCode21604, 1, PSend21605);
    
    MethodClosure MC_SMB_ensurePath_ = new_MethodClosure((Method)PMethod21602, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_ensurePath_, MC_SMB_ensurePath_);
}


static void init_SMB_findName_ifAbsent_() {
    Symbol SMB_findName_ifAbsent_ = new_Symbol(L"findName:ifAbsent:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Array PArray21607 = new_Array_with(2, (Optr)VAR_aName_0_0, (Optr)VAR_block_0_1);
    Variable VAR_returnBlock_0_2 = new_Variable_named(L"returnBlock", 0);
    Array PArray21608 = new_Array_with(1, (Optr)VAR_returnBlock_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21611 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_value_2_0 = new_Variable_named(L"value", 2);
    Array PArray21615 = new_Array_with(1, (Optr)VAR_value_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21617 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_2_0);
    Array PThreadedCode21616 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_2_0, (Optr)&t_send1, (Optr)PSend21617, (Optr)&t_method_return);
    Block PBlock21614 = new_Block_with(PArray21615, empty_Array, PThreadedCode21616, 1, PSend21617);
    Assign PAssign21613 = new_Assign((Optr)VAR_returnBlock_0_2, (Optr)PBlock21614);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    // at:ifPresent:. 
    Send PSend21618 = new_Send((Optr)self, SMB_at_ifPresent_, 2, (Optr)VAR_aName_0_0, (Optr)VAR_returnBlock_0_2);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend21619 = new_Send((Optr)slot_Organization_Package_name, SMB__pequals_, 1, (Optr)VAR_aName_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend21623 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode21622 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21623, (Optr)&t_block_return);
    Block PBlock21621 = new_Block_with(empty_Array, empty_Array, PThreadedCode21622, 1, PSend21623);
    // ifTrue:. 
    Send PSend21620 = new_Send((Optr)PSend21619, SMB_ifTrue_, 1, (Optr)PBlock21621);
    // at:ifPresent:. 
    Send PSend21624 = new_Send((Optr)slot_Organization_RootPackage_imports, SMB_at_ifPresent_, 2, (Optr)VAR_aName_0_0, (Optr)VAR_returnBlock_0_2);
    // findName:ifAbsent:. 
    Send PSend21625 = new_Send((Optr)slot_Organization_Package_parent, SMB_findName_ifAbsent_, 2, (Optr)VAR_aName_0_0, (Optr)VAR_block_0_1);
    Array PThreadedCode21612 = instantiate_Array_with(ThreadedCode_Class, 0, 42, (Optr)&t_push1, (Optr)PAssign21613, (Optr)&t_push_closure, (Optr)PBlock21614, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_push_variable, (Optr)VAR_returnBlock_0_2, (Optr)&t_send2, (Optr)PSend21618, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_Package_name, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend21619, (Optr)&t_send_ifTrue_, (Optr)PSend21620, (Optr)PBlock21621, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_RootPackage_imports, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_push_variable, (Optr)VAR_returnBlock_0_2, (Optr)&t_send2, (Optr)PSend21624, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_send2, (Optr)PSend21625, (Optr)&t_method_return);
    Block PBlock21610 = new_Block_with(PArray21611, empty_Array, PThreadedCode21612, 5, PAssign21613, PSend21618, PSend21620, PSend21624, PSend21625);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21626 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21610);
    Array PThreadedCode21609 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21610, (Optr)&t_send1, (Optr)PSend21626, (Optr)&t_method_return);
    Method PMethod21606 = new_Method_with(PArray21607, PArray21608, empty_Array, PThreadedCode21609, 1, PSend21626);
    
    MethodClosure MC_SMB_findName_ifAbsent_ = new_MethodClosure((Method)PMethod21606, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_findName_ifAbsent_, MC_SMB_findName_ifAbsent_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray21628 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitPackage_ = new_Symbol(L"visitPackage:");
    // visitPackage:. 
    Send PSend21630 = new_Send((Optr)VAR_visitor_0_0, SMB_visitPackage_, 1, (Optr)self);
    Array PThreadedCode21629 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21630, (Optr)&t_method_return);
    Method PMethod21627 = new_Method_with(PArray21628, empty_Array, empty_Array, PThreadedCode21629, 1, PSend21630);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod21627, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21632 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_segment_1_0 = new_Variable_named(L"segment", 1);
    Array PArray21635 = new_Array_with(1, (Optr)VAR_segment_1_0);
    Symbol SMB_shortName = new_Symbol(L"shortName");
    // shortName. 
    Send PSend21637 = new_Send((Optr)VAR_segment_1_0, SMB_shortName, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend21638 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21637);
    Array PThreadedCode21636 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_segment_1_0, (Optr)&t_send0, (Optr)PSend21637, (Optr)&t_send1, (Optr)PSend21638, (Optr)&t_method_return);
    Block PBlock21634 = new_Block_with(PArray21635, empty_Array, PThreadedCode21636, 1, PSend21638);
    Character char_2898 = new_Character(L'.');
    Constant char_2898_Const = new_Constant((Optr)char_2898);
    // <<. 
    Send PSend21641 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2898_Const);
    Array PThreadedCode21640 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2898, (Optr)&t_send1, (Optr)PSend21641, (Optr)&t_block_return);
    Block PBlock21639 = new_Block_with(empty_Array, empty_Array, PThreadedCode21640, 1, PSend21641);
    Symbol SMB_pathDo_separatedBy_ = new_Symbol(L"pathDo:separatedBy:");
    // pathDo:separatedBy:. 
    Send PSend21642 = new_Send((Optr)self, SMB_pathDo_separatedBy_, 2, (Optr)PBlock21634, (Optr)PBlock21639);
    Array PThreadedCode21633 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock21634, (Optr)&t_push_closure, (Optr)PBlock21639, (Optr)&t_send2, (Optr)PSend21642, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21631 = new_Method_with(PArray21632, empty_Array, empty_Array, PThreadedCode21633, 2, PSend21642, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21631, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_packagesDo_() {
    Symbol SMB_packagesDo_ = new_Symbol(L"packagesDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray21644 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21646 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)self);
    Variable VAR_element_1_0 = new_Variable_named(L"element", 1);
    Array PArray21648 = new_Array_with(1, (Optr)VAR_element_1_0);
    // packagesDo:. 
    Send PSend21650 = new_Send((Optr)VAR_element_1_0, SMB_packagesDo_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode21649 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_element_1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend21650, (Optr)&t_method_return);
    Block PBlock21647 = new_Block_with(PArray21648, empty_Array, PThreadedCode21649, 1, PSend21650);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend21651 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock21647);
    Array PThreadedCode21645 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21646, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock21647, (Optr)&t_send1, (Optr)PSend21651, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21643 = new_Method_with(PArray21644, empty_Array, empty_Array, PThreadedCode21645, 3, PSend21646, PSend21651, self);
    
    MethodClosure MC_SMB_packagesDo_ = new_MethodClosure((Method)PMethod21643, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_packagesDo_, MC_SMB_packagesDo_);
}


static void init_SMB_parent() {
    Symbol SMB_parent = new_Symbol(L"parent");
    Array PThreadedCode21653 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_method_return);
    Method PMethod21652 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21653, 1, slot_Organization_Package_parent);
    
    MethodClosure MC_SMB_parent = new_MethodClosure((Method)PMethod21652, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_parent, MC_SMB_parent);
}


static void init_SMB_packageName_() {
    Symbol SMB_packageName_ = new_Symbol(L"packageName:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
    Array PArray21655 = new_Array_with(1, (Optr)VAR_aName_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend21658 = new_Send((Optr)VAR_aName_0_0, SMB_asSymbol, 0);
    Assign PAssign21657 = new_Assign((Optr)slot_Organization_Package_name, (Optr)PSend21658);
    Array PThreadedCode21656 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign21657, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send0, (Optr)PSend21658, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21654 = new_Method_with(PArray21655, empty_Array, empty_Array, PThreadedCode21656, 2, PAssign21657, self);
    
    MethodClosure MC_SMB_packageName_ = new_MethodClosure((Method)PMethod21654, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_packageName_, MC_SMB_packageName_);
}


static void init_SMB_shortName() {
    Symbol SMB_shortName = new_Symbol(L"shortName");
    Array PThreadedCode21660 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_Package_name, (Optr)&t_method_return);
    Method PMethod21659 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21660, 1, slot_Organization_Package_name);
    
    MethodClosure MC_SMB_shortName = new_MethodClosure((Method)PMethod21659, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_shortName, MC_SMB_shortName);
}


static void init_SMB_pathDo_separatedBy_() {
    Symbol SMB_pathDo_separatedBy_ = new_Symbol(L"pathDo:separatedBy:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Variable VAR_separator_0_1 = new_Variable_named(L"separator", 0);
    Array PArray21662 = new_Array_with(2, (Optr)VAR_block_0_0, (Optr)VAR_separator_0_1);
    Symbol SMB_isRoot = new_Symbol(L"isRoot");
    // isRoot. 
    Send PSend21664 = new_Send((Optr)slot_Organization_Package_parent, SMB_isRoot, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // pathDo:separatedBy:. 
    Send PSend21668 = new_Send((Optr)slot_Organization_Package_parent, SMB_pathDo_separatedBy_, 2, (Optr)VAR_block_0_0, (Optr)VAR_separator_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend21669 = new_Send((Optr)VAR_separator_0_1, SMB_value, 0);
    Array PThreadedCode21667 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_variable, (Optr)VAR_separator_0_1, (Optr)&t_send2, (Optr)PSend21668, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_separator_0_1, (Optr)&t_send0, (Optr)PSend21669, (Optr)&t_block_return);
    Block PBlock21666 = new_Block_with(empty_Array, empty_Array, PThreadedCode21667, 2, PSend21668, PSend21669);
    // ifFalse:. 
    Send PSend21665 = new_Send((Optr)PSend21664, SMB_ifFalse_, 1, (Optr)PBlock21666);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21670 = new_Send((Optr)VAR_block_0_0, SMB_value_, 1, (Optr)self);
    Array PThreadedCode21663 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_send0, (Optr)PSend21664, (Optr)&t_send_ifFalse_, (Optr)PSend21665, (Optr)PBlock21666, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21670, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21661 = new_Method_with(PArray21662, empty_Array, empty_Array, PThreadedCode21663, 3, PSend21665, PSend21670, self);
    
    MethodClosure MC_SMB_pathDo_separatedBy_ = new_MethodClosure((Method)PMethod21661, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_pathDo_separatedBy_, MC_SMB_pathDo_separatedBy_);
}


static void init_class_SMB_named_in_() {
    Symbol SMB_named_in_ = new_Symbol(L"named:in:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Variable VAR_package_0_1 = new_Variable_named(L"package", 0);
    Array PArray21672 = new_Array_with(2, (Optr)VAR_aSymbol_0_0, (Optr)VAR_package_0_1);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend21674 = new_Send((Optr)self, SMB_named_, 1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_parent_ = new_Symbol(L"parent:");
    // parent:. 
    Send PSend21675 = new_Send((Optr)PSend21674, SMB_parent_, 1, (Optr)VAR_package_0_1);
    Array PThreadedCode21673 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send1, (Optr)PSend21674, (Optr)&t_push_variable, (Optr)VAR_package_0_1, (Optr)&t_send1, (Optr)PSend21675, (Optr)&t_method_return);
    Method PMethod21671 = new_Method_with(PArray21672, empty_Array, empty_Array, PThreadedCode21673, 1, PSend21675);
    
    MethodClosure MC_SMB_named_in_ = new_MethodClosure((Method)PMethod21671, HEADER(Organization_Package_Class));
    store_method(HEADER(Organization_Package_Class), SMB_named_in_, MC_SMB_named_in_);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Array PArray21677 = new_Array_with(1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21679 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_packageName_ = new_Symbol(L"packageName:");
    // packageName:. 
    Send PSend21680 = new_Send((Optr)PSend21679, SMB_packageName_, 1, (Optr)VAR_aSymbol_0_0);
    Array PThreadedCode21678 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21679, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send1, (Optr)PSend21680, (Optr)&t_method_return);
    Method PMethod21676 = new_Method_with(PArray21677, empty_Array, empty_Array, PThreadedCode21678, 1, PSend21680);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod21676, HEADER(Organization_Package_Class));
    store_method(HEADER(Organization_Package_Class), SMB_named_, MC_SMB_named_);
}

void init_Organization_PPackage_layout() {
    layout_Organization_Package_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Organization_Package_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Organization_Package_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Organization_Package_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Organization_Package_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Organization_Package_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Package = new_Symbol(L"Package");
    slot_Organization_Package_parent = (Optr)new_Slot(6, L"parent");
    slot_Organization_Package_name = (Optr)new_Slot(7, L"name");
    layout_Organization_Package = (Optr)create_layout_with_vars(ObjectLayout_Class, 8);
    ((Array)layout_Organization_Package)->values[0] = slot_Collection_HashedCollection_size; // size 
    ((Array)layout_Organization_Package)->values[1] = slot_Collection_HashedCollection_maxLinear; // maxLinear 
    ((Array)layout_Organization_Package)->values[2] = slot_Collection_HashedCollection_ratio; // ratio 
    ((Array)layout_Organization_Package)->values[3] = slot_Collection_HashedCollection_buckets; // buckets 
    ((Array)layout_Organization_Package)->values[4] = slot_Collection_HashedCollection_linear; // linear 
    ((Array)layout_Organization_Package)->values[5] = slot_Organization_RootPackage_imports; // imports 
    ((Array)layout_Organization_Package)->values[6] = slot_Organization_Package_parent; // parent 
    ((Array)layout_Organization_Package)->values[7] = slot_Organization_Package_name; // name 
    Organization_Package_Class = (Class)new_Class(Organization_RootPackage_Class, layout_Organization_Package_Class_class);
    Organization_Package_Class->layout = layout_Organization_Package;
    Organization_Package_Class->name = SMB_Package;
    
}

void init_Organization_PPackage_methods() {
    init_SMB_root();
    init_SMB_findPackageName_();
    init_SMB_parent_();
    init_SMB_isRoot();
    init_SMB_ensurePath_();
    init_SMB_findName_ifAbsent_();
    init_SMB_accept_();
    init_SMB_printOn_();
    init_SMB_packagesDo_();
    init_SMB_parent();
    init_SMB_packageName_();
    init_SMB_shortName();
    init_SMB_pathDo_separatedBy_();
    init_class_SMB_named_in_();
    init_class_SMB_named_();
    
}