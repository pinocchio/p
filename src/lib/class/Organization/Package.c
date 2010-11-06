#include <lib/class/Organization/Package.h>


Optr layout_Organization_Package_Class_class;
Optr slot_Organization_Package_parent;
Optr slot_Organization_Package_name;
Optr layout_Organization_Package;


static void init_SMB_root() {
    Symbol SMB_root = new_Symbol(L"root");
    // root. 
    Send PSend21723 = new_Send((Optr)slot_Organization_Package_parent, SMB_root, 0);
    Array PThreadedCode21722 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_send0, (Optr)PSend21723, (Optr)&t_method_return);
    Method PMethod21721 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21722, 1, PSend21723);
    
    MethodClosure MC_SMB_root = new_MethodClosure((Method)PMethod21721, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_root, MC_SMB_root);
}


static void init_SMB_findPackageName_() {
    Symbol SMB_findPackageName_ = new_Symbol(L"findPackageName:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
    Array PArray21725 = new_Array_with(1, (Optr)VAR_aName_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21728 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend21730 = new_Send((Optr)slot_Organization_Package_name, SMB__equals_, 1, (Optr)VAR_aName_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21734 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode21733 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21734, (Optr)&t_block_return);
    Block PBlock21732 = new_Block_with(empty_Array, empty_Array, PThreadedCode21733, 1, PSend21734);
    // ifTrue:. 
    Send PSend21731 = new_Send((Optr)PSend21730, SMB_ifTrue_, 1, (Optr)PBlock21732);
    // findPackageName:. 
    Send PSend21735 = new_Send((Optr)slot_Organization_Package_parent, SMB_findPackageName_, 1, (Optr)VAR_aName_0_0);
    Array PThreadedCode21729 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Organization_Package_name, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend21730, (Optr)&t_send_ifTrue_, (Optr)PSend21731, (Optr)PBlock21732, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend21735, (Optr)&t_method_return);
    Block PBlock21727 = new_Block_with(PArray21728, empty_Array, PThreadedCode21729, 2, PSend21731, PSend21735);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21736 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21727);
    Array PThreadedCode21726 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21727, (Optr)&t_send1, (Optr)PSend21736, (Optr)&t_method_return);
    Method PMethod21724 = new_Method_with(PArray21725, empty_Array, empty_Array, PThreadedCode21726, 1, PSend21736);
    
    MethodClosure MC_SMB_findPackageName_ = new_MethodClosure((Method)PMethod21724, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_findPackageName_, MC_SMB_findPackageName_);
}


static void init_SMB_parent_() {
    Symbol SMB_parent_ = new_Symbol(L"parent:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray21738 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign21740 = new_Assign((Optr)slot_Organization_Package_parent, (Optr)VAR_anObject_0_0);
    Array PThreadedCode21739 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21740, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21737 = new_Method_with(PArray21738, empty_Array, empty_Array, PThreadedCode21739, 2, PAssign21740, self);
    
    MethodClosure MC_SMB_parent_ = new_MethodClosure((Method)PMethod21737, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_parent_, MC_SMB_parent_);
}


static void init_SMB_isRoot() {
    Symbol SMB_isRoot = new_Symbol(L"isRoot");
    Array PThreadedCode21742 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_false);
    Method PMethod21741 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21742, 1, false_Const);
    
    MethodClosure MC_SMB_isRoot = new_MethodClosure((Method)PMethod21741, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_isRoot, MC_SMB_isRoot);
}


static void init_SMB_ensurePath_() {
    Symbol SMB_ensurePath_ = new_Symbol(L"ensurePath:");
    Variable VAR_aPath_0_0 = new_Variable_named(L"aPath", 0);
    Array PArray21744 = new_Array_with(1, (Optr)VAR_aPath_0_0);
    // ensurePath:. 
    Send PSend21746 = new_Send((Optr)slot_Organization_Package_parent, SMB_ensurePath_, 1, (Optr)VAR_aPath_0_0);
    Array PThreadedCode21745 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_send1, (Optr)PSend21746, (Optr)&t_method_return);
    Method PMethod21743 = new_Method_with(PArray21744, empty_Array, empty_Array, PThreadedCode21745, 1, PSend21746);
    
    MethodClosure MC_SMB_ensurePath_ = new_MethodClosure((Method)PMethod21743, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_ensurePath_, MC_SMB_ensurePath_);
}


static void init_SMB_findName_ifAbsent_() {
    Symbol SMB_findName_ifAbsent_ = new_Symbol(L"findName:ifAbsent:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Array PArray21748 = new_Array_with(2, (Optr)VAR_aName_0_0, (Optr)VAR_block_0_1);
    Variable VAR_returnBlock_0_2 = new_Variable_named(L"returnBlock", 0);
    Array PArray21749 = new_Array_with(1, (Optr)VAR_returnBlock_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21752 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_value_2_0 = new_Variable_named(L"value", 2);
    Array PArray21756 = new_Array_with(1, (Optr)VAR_value_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21758 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_2_0);
    Array PThreadedCode21757 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_2_0, (Optr)&t_send1, (Optr)PSend21758, (Optr)&t_method_return);
    Block PBlock21755 = new_Block_with(PArray21756, empty_Array, PThreadedCode21757, 1, PSend21758);
    Assign PAssign21754 = new_Assign((Optr)VAR_returnBlock_0_2, (Optr)PBlock21755);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    // at:ifPresent:. 
    Send PSend21759 = new_Send((Optr)self, SMB_at_ifPresent_, 2, (Optr)VAR_aName_0_0, (Optr)VAR_returnBlock_0_2);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend21760 = new_Send((Optr)slot_Organization_Package_name, SMB__pequals_, 1, (Optr)VAR_aName_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend21764 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode21763 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21764, (Optr)&t_block_return);
    Block PBlock21762 = new_Block_with(empty_Array, empty_Array, PThreadedCode21763, 1, PSend21764);
    // ifTrue:. 
    Send PSend21761 = new_Send((Optr)PSend21760, SMB_ifTrue_, 1, (Optr)PBlock21762);
    // at:ifPresent:. 
    Send PSend21765 = new_Send((Optr)slot_Organization_RootPackage_imports, SMB_at_ifPresent_, 2, (Optr)VAR_aName_0_0, (Optr)VAR_returnBlock_0_2);
    // findName:ifAbsent:. 
    Send PSend21766 = new_Send((Optr)slot_Organization_Package_parent, SMB_findName_ifAbsent_, 2, (Optr)VAR_aName_0_0, (Optr)VAR_block_0_1);
    Array PThreadedCode21753 = instantiate_Array_with(ThreadedCode_Class, 0, 42, (Optr)&t_push1, (Optr)PAssign21754, (Optr)&t_push_closure, (Optr)PBlock21755, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_push_variable, (Optr)VAR_returnBlock_0_2, (Optr)&t_send2, (Optr)PSend21759, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_Package_name, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend21760, (Optr)&t_send_ifTrue_, (Optr)PSend21761, (Optr)PBlock21762, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_RootPackage_imports, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_push_variable, (Optr)VAR_returnBlock_0_2, (Optr)&t_send2, (Optr)PSend21765, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_send2, (Optr)PSend21766, (Optr)&t_method_return);
    Block PBlock21751 = new_Block_with(PArray21752, empty_Array, PThreadedCode21753, 5, PAssign21754, PSend21759, PSend21761, PSend21765, PSend21766);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21767 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21751);
    Array PThreadedCode21750 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21751, (Optr)&t_send1, (Optr)PSend21767, (Optr)&t_method_return);
    Method PMethod21747 = new_Method_with(PArray21748, PArray21749, empty_Array, PThreadedCode21750, 1, PSend21767);
    
    MethodClosure MC_SMB_findName_ifAbsent_ = new_MethodClosure((Method)PMethod21747, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_findName_ifAbsent_, MC_SMB_findName_ifAbsent_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray21769 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitPackage_ = new_Symbol(L"visitPackage:");
    // visitPackage:. 
    Send PSend21771 = new_Send((Optr)VAR_visitor_0_0, SMB_visitPackage_, 1, (Optr)self);
    Array PThreadedCode21770 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21771, (Optr)&t_method_return);
    Method PMethod21768 = new_Method_with(PArray21769, empty_Array, empty_Array, PThreadedCode21770, 1, PSend21771);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod21768, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21773 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_segment_1_0 = new_Variable_named(L"segment", 1);
    Array PArray21776 = new_Array_with(1, (Optr)VAR_segment_1_0);
    Symbol SMB_shortName = new_Symbol(L"shortName");
    // shortName. 
    Send PSend21778 = new_Send((Optr)VAR_segment_1_0, SMB_shortName, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend21779 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21778);
    Array PThreadedCode21777 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_segment_1_0, (Optr)&t_send0, (Optr)PSend21778, (Optr)&t_send1, (Optr)PSend21779, (Optr)&t_method_return);
    Block PBlock21775 = new_Block_with(PArray21776, empty_Array, PThreadedCode21777, 1, PSend21779);
    Character char_2907 = new_Character(L'.');
    Constant char_2907_Const = new_Constant((Optr)char_2907);
    // <<. 
    Send PSend21782 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2907_Const);
    Array PThreadedCode21781 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2907, (Optr)&t_send1, (Optr)PSend21782, (Optr)&t_block_return);
    Block PBlock21780 = new_Block_with(empty_Array, empty_Array, PThreadedCode21781, 1, PSend21782);
    Symbol SMB_pathDo_separatedBy_ = new_Symbol(L"pathDo:separatedBy:");
    // pathDo:separatedBy:. 
    Send PSend21783 = new_Send((Optr)self, SMB_pathDo_separatedBy_, 2, (Optr)PBlock21775, (Optr)PBlock21780);
    Array PThreadedCode21774 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock21775, (Optr)&t_push_closure, (Optr)PBlock21780, (Optr)&t_send2, (Optr)PSend21783, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21772 = new_Method_with(PArray21773, empty_Array, empty_Array, PThreadedCode21774, 2, PSend21783, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21772, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_packagesDo_() {
    Symbol SMB_packagesDo_ = new_Symbol(L"packagesDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray21785 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21787 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)self);
    Variable VAR_element_1_0 = new_Variable_named(L"element", 1);
    Array PArray21789 = new_Array_with(1, (Optr)VAR_element_1_0);
    // packagesDo:. 
    Send PSend21791 = new_Send((Optr)VAR_element_1_0, SMB_packagesDo_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode21790 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_element_1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend21791, (Optr)&t_method_return);
    Block PBlock21788 = new_Block_with(PArray21789, empty_Array, PThreadedCode21790, 1, PSend21791);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend21792 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock21788);
    Array PThreadedCode21786 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21787, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock21788, (Optr)&t_send1, (Optr)PSend21792, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21784 = new_Method_with(PArray21785, empty_Array, empty_Array, PThreadedCode21786, 3, PSend21787, PSend21792, self);
    
    MethodClosure MC_SMB_packagesDo_ = new_MethodClosure((Method)PMethod21784, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_packagesDo_, MC_SMB_packagesDo_);
}


static void init_SMB_parent() {
    Symbol SMB_parent = new_Symbol(L"parent");
    Array PThreadedCode21794 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_method_return);
    Method PMethod21793 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21794, 1, slot_Organization_Package_parent);
    
    MethodClosure MC_SMB_parent = new_MethodClosure((Method)PMethod21793, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_parent, MC_SMB_parent);
}


static void init_SMB_packageName_() {
    Symbol SMB_packageName_ = new_Symbol(L"packageName:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
    Array PArray21796 = new_Array_with(1, (Optr)VAR_aName_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend21799 = new_Send((Optr)VAR_aName_0_0, SMB_asSymbol, 0);
    Assign PAssign21798 = new_Assign((Optr)slot_Organization_Package_name, (Optr)PSend21799);
    Array PThreadedCode21797 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign21798, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send0, (Optr)PSend21799, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21795 = new_Method_with(PArray21796, empty_Array, empty_Array, PThreadedCode21797, 2, PAssign21798, self);
    
    MethodClosure MC_SMB_packageName_ = new_MethodClosure((Method)PMethod21795, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_packageName_, MC_SMB_packageName_);
}


static void init_SMB_shortName() {
    Symbol SMB_shortName = new_Symbol(L"shortName");
    Array PThreadedCode21801 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_Package_name, (Optr)&t_method_return);
    Method PMethod21800 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21801, 1, slot_Organization_Package_name);
    
    MethodClosure MC_SMB_shortName = new_MethodClosure((Method)PMethod21800, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_shortName, MC_SMB_shortName);
}


static void init_SMB_pathDo_separatedBy_() {
    Symbol SMB_pathDo_separatedBy_ = new_Symbol(L"pathDo:separatedBy:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Variable VAR_separator_0_1 = new_Variable_named(L"separator", 0);
    Array PArray21803 = new_Array_with(2, (Optr)VAR_block_0_0, (Optr)VAR_separator_0_1);
    Symbol SMB_isRoot = new_Symbol(L"isRoot");
    // isRoot. 
    Send PSend21805 = new_Send((Optr)slot_Organization_Package_parent, SMB_isRoot, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // pathDo:separatedBy:. 
    Send PSend21809 = new_Send((Optr)slot_Organization_Package_parent, SMB_pathDo_separatedBy_, 2, (Optr)VAR_block_0_0, (Optr)VAR_separator_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend21810 = new_Send((Optr)VAR_separator_0_1, SMB_value, 0);
    Array PThreadedCode21808 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_variable, (Optr)VAR_separator_0_1, (Optr)&t_send2, (Optr)PSend21809, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_separator_0_1, (Optr)&t_send0, (Optr)PSend21810, (Optr)&t_block_return);
    Block PBlock21807 = new_Block_with(empty_Array, empty_Array, PThreadedCode21808, 2, PSend21809, PSend21810);
    // ifFalse:. 
    Send PSend21806 = new_Send((Optr)PSend21805, SMB_ifFalse_, 1, (Optr)PBlock21807);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21811 = new_Send((Optr)VAR_block_0_0, SMB_value_, 1, (Optr)self);
    Array PThreadedCode21804 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_send0, (Optr)PSend21805, (Optr)&t_send_ifFalse_, (Optr)PSend21806, (Optr)PBlock21807, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21811, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21802 = new_Method_with(PArray21803, empty_Array, empty_Array, PThreadedCode21804, 3, PSend21806, PSend21811, self);
    
    MethodClosure MC_SMB_pathDo_separatedBy_ = new_MethodClosure((Method)PMethod21802, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_pathDo_separatedBy_, MC_SMB_pathDo_separatedBy_);
}


static void init_class_SMB_named_in_() {
    Symbol SMB_named_in_ = new_Symbol(L"named:in:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Variable VAR_package_0_1 = new_Variable_named(L"package", 0);
    Array PArray21813 = new_Array_with(2, (Optr)VAR_aSymbol_0_0, (Optr)VAR_package_0_1);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend21815 = new_Send((Optr)self, SMB_named_, 1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_parent_ = new_Symbol(L"parent:");
    // parent:. 
    Send PSend21816 = new_Send((Optr)PSend21815, SMB_parent_, 1, (Optr)VAR_package_0_1);
    Array PThreadedCode21814 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send1, (Optr)PSend21815, (Optr)&t_push_variable, (Optr)VAR_package_0_1, (Optr)&t_send1, (Optr)PSend21816, (Optr)&t_method_return);
    Method PMethod21812 = new_Method_with(PArray21813, empty_Array, empty_Array, PThreadedCode21814, 1, PSend21816);
    
    MethodClosure MC_SMB_named_in_ = new_MethodClosure((Method)PMethod21812, HEADER(Organization_Package_Class));
    store_method(HEADER(Organization_Package_Class), SMB_named_in_, MC_SMB_named_in_);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Array PArray21818 = new_Array_with(1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21820 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_packageName_ = new_Symbol(L"packageName:");
    // packageName:. 
    Send PSend21821 = new_Send((Optr)PSend21820, SMB_packageName_, 1, (Optr)VAR_aSymbol_0_0);
    Array PThreadedCode21819 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21820, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send1, (Optr)PSend21821, (Optr)&t_method_return);
    Method PMethod21817 = new_Method_with(PArray21818, empty_Array, empty_Array, PThreadedCode21819, 1, PSend21821);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod21817, HEADER(Organization_Package_Class));
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