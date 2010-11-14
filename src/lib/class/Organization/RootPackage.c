#include <lib/class/Organization/RootPackage.h>


Optr layout_Organization_RootPackage_Class_class;
Optr slot_Organization_RootPackage_imports;
Optr layout_Organization_RootPackage;


static void init_SMB_root() {
    Symbol SMB_root = new_Symbol(L"root");
    Array PThreadedCode21657 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod21656 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21657, 1, self);
    
    MethodClosure MC_SMB_root = new_MethodClosure((Method)PMethod21656, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_root, MC_SMB_root);
}


static void init_SMB_isRoot() {
    Symbol SMB_isRoot = new_Symbol(L"isRoot");
    Array PThreadedCode21659 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod21658 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21659, 1, true_Const);
    
    MethodClosure MC_SMB_isRoot = new_MethodClosure((Method)PMethod21658, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_isRoot, MC_SMB_isRoot);
}


static void init_SMB_findPackageName_() {
    Symbol SMB_findPackageName_ = new_Symbol(L"findPackageName:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
    Array PArray21661 = new_Array_with(1, (Optr)VAR_aName_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21664 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_shortName = new_Symbol(L"shortName");
    // shortName. 
    Send PSend21666 = new_Send((Optr)self, SMB_shortName, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend21667 = new_Send((Optr)PSend21666, SMB__pequals_, 1, (Optr)VAR_aName_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21671 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode21670 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21671, (Optr)&t_block_return);
    Block PBlock21669 = new_Block_with(empty_Array, empty_Array, PThreadedCode21670, 1, PSend21671);
    // ifTrue:. 
    Send PSend21668 = new_Send((Optr)PSend21667, SMB_ifTrue_, 1, (Optr)PBlock21669);
    Array PThreadedCode21665 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21666, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend21667, (Optr)&t_send_ifTrue_, (Optr)PSend21668, (Optr)PBlock21669, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Block PBlock21663 = new_Block_with(PArray21664, empty_Array, PThreadedCode21665, 2, PSend21668, nil_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21672 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21663);
    Array PThreadedCode21662 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21663, (Optr)&t_send1, (Optr)PSend21672, (Optr)&t_method_return);
    Method PMethod21660 = new_Method_with(PArray21661, empty_Array, empty_Array, PThreadedCode21662, 1, PSend21672);
    
    MethodClosure MC_SMB_findPackageName_ = new_MethodClosure((Method)PMethod21660, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_findPackageName_, MC_SMB_findPackageName_);
}


static void init_SMB_lookup_() {
    Symbol SMB_lookup_ = new_Symbol(L"lookup:");
    Variable VAR_aPath_0_0 = new_Variable_named(L"aPath", 0);
    Array PArray21674 = new_Array_with(1, (Optr)VAR_aPath_0_0);
    Variable VAR_package_0_1 = new_Variable_named(L"package", 0);
    Array PArray21675 = new_Array_with(1, (Optr)VAR_package_0_1);
    Symbol SMB_findName_ifAbsent_ = new_Symbol(L"findName:ifAbsent:");
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend21680 = new_Send((Optr)VAR_aPath_0_0, SMB_first, 0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend21679 = new_Send((Optr)PSend21680, SMB_asSymbol, 0);
    Symbol SMB_flagUndefinedPath_at_ = new_Symbol(L"flagUndefinedPath:at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // flagUndefinedPath:at:. 
    Send PSend21683 = new_Send((Optr)self, SMB_flagUndefinedPath_at_, 2, (Optr)VAR_aPath_0_0, (Optr)int_1_Const);
    Array PThreadedCode21682 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_push_1, (Optr)&t_send2, (Optr)PSend21683, (Optr)&t_block_return);
    Block PBlock21681 = new_Block_with(empty_Array, empty_Array, PThreadedCode21682, 1, PSend21683);
    // findName:ifAbsent:. 
    Send PSend21678 = new_Send((Optr)self, SMB_findName_ifAbsent_, 2, (Optr)PSend21679, (Optr)PBlock21681);
    Assign PAssign21677 = new_Assign((Optr)VAR_package_0_1, (Optr)PSend21678);
    Symbol SMB_lookupIn_at_ = new_Symbol(L"lookupIn:at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // lookupIn:at:. 
    Send PSend21684 = new_Send((Optr)VAR_package_0_1, SMB_lookupIn_at_, 2, (Optr)VAR_aPath_0_0, (Optr)int_2_Const);
    Array PThreadedCode21676 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign21677, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_send0, (Optr)PSend21680, (Optr)&t_send0, (Optr)PSend21679, (Optr)&t_push_closure, (Optr)PBlock21681, (Optr)&t_send2, (Optr)PSend21678, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_package_0_1, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_push_2, (Optr)&t_send2, (Optr)PSend21684, (Optr)&t_method_return);
    Method PMethod21673 = new_Method_with(PArray21674, PArray21675, empty_Array, PThreadedCode21676, 2, PAssign21677, PSend21684);
    
    MethodClosure MC_SMB_lookup_ = new_MethodClosure((Method)PMethod21673, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_lookup_, MC_SMB_lookup_);
}


static void init_SMB_findName_ifAbsent_() {
    Symbol SMB_findName_ifAbsent_ = new_Symbol(L"findName:ifAbsent:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Array PArray21686 = new_Array_with(2, (Optr)VAR_aName_0_0, (Optr)VAR_block_0_1);
    Variable VAR_returnBlock_0_2 = new_Variable_named(L"returnBlock", 0);
    Array PArray21687 = new_Array_with(1, (Optr)VAR_returnBlock_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21690 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_value_2_0 = new_Variable_named(L"value", 2);
    Array PArray21694 = new_Array_with(1, (Optr)VAR_value_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21696 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_2_0);
    Array PThreadedCode21695 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_2_0, (Optr)&t_send1, (Optr)PSend21696, (Optr)&t_method_return);
    Block PBlock21693 = new_Block_with(PArray21694, empty_Array, PThreadedCode21695, 1, PSend21696);
    Assign PAssign21692 = new_Assign((Optr)VAR_returnBlock_0_2, (Optr)PBlock21693);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    // at:ifPresent:. 
    Send PSend21697 = new_Send((Optr)self, SMB_at_ifPresent_, 2, (Optr)VAR_aName_0_0, (Optr)VAR_returnBlock_0_2);
    Symbol SMB_shortName = new_Symbol(L"shortName");
    // shortName. 
    Send PSend21698 = new_Send((Optr)self, SMB_shortName, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend21699 = new_Send((Optr)PSend21698, SMB__pequals_, 1, (Optr)VAR_aName_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend21703 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode21702 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21703, (Optr)&t_block_return);
    Block PBlock21701 = new_Block_with(empty_Array, empty_Array, PThreadedCode21702, 1, PSend21703);
    // ifTrue:. 
    Send PSend21700 = new_Send((Optr)PSend21699, SMB_ifTrue_, 1, (Optr)PBlock21701);
    // at:ifPresent:. 
    Send PSend21704 = new_Send((Optr)slot_Organization_RootPackage_imports, SMB_at_ifPresent_, 2, (Optr)VAR_aName_0_0, (Optr)VAR_returnBlock_0_2);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend21705 = new_Send((Optr)VAR_block_0_1, SMB_value, 0);
    Array PThreadedCode21691 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign21692, (Optr)&t_push_closure, (Optr)PBlock21693, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_push_variable, (Optr)VAR_returnBlock_0_2, (Optr)&t_send2, (Optr)PSend21697, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21698, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend21699, (Optr)&t_send_ifTrue_, (Optr)PSend21700, (Optr)PBlock21701, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_RootPackage_imports, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_push_variable, (Optr)VAR_returnBlock_0_2, (Optr)&t_send2, (Optr)PSend21704, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_send0, (Optr)PSend21705, (Optr)&t_method_return);
    Block PBlock21689 = new_Block_with(PArray21690, empty_Array, PThreadedCode21691, 5, PAssign21692, PSend21697, PSend21700, PSend21704, PSend21705);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21706 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21689);
    Array PThreadedCode21688 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21689, (Optr)&t_send1, (Optr)PSend21706, (Optr)&t_method_return);
    Method PMethod21685 = new_Method_with(PArray21686, PArray21687, empty_Array, PThreadedCode21688, 1, PSend21706);
    
    MethodClosure MC_SMB_findName_ifAbsent_ = new_MethodClosure((Method)PMethod21685, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_findName_ifAbsent_, MC_SMB_findName_ifAbsent_);
}


static void init_SMB_shortName() {
    Symbol SMB_shortName = new_Symbol(L"shortName");
    Symbol  SMB_Pinocchio = new_Symbol(L"Pinocchio");
    Array PThreadedCode21708 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)SMB_Pinocchio, (Optr)&t_method_return);
    Constant SMB_Pinocchio_Const = new_Constant((Optr)SMB_Pinocchio);
    Method PMethod21707 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21708, 1, SMB_Pinocchio_Const);
    
    MethodClosure MC_SMB_shortName = new_MethodClosure((Method)PMethod21707, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_shortName, MC_SMB_shortName);
}


static void init_SMB_import_() {
    Symbol SMB_import_ = new_Symbol(L"import:");
    Variable VAR_package_0_0 = new_Variable_named(L"package", 0);
    Array PArray21710 = new_Array_with(1, (Optr)VAR_package_0_0);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray21713 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Array PThreadedCode21716 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_block_return);
    Block PBlock21715 = new_Block_with(empty_Array, empty_Array, PThreadedCode21716, 1, VAR_value_1_1);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend21717 = new_Send((Optr)slot_Organization_RootPackage_imports, SMB_at_ifAbsentPut_, 2, (Optr)VAR_key_1_0, (Optr)PBlock21715);
    Array PThreadedCode21714 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Organization_RootPackage_imports, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_closure, (Optr)PBlock21715, (Optr)&t_send2, (Optr)PSend21717, (Optr)&t_method_return);
    Block PBlock21712 = new_Block_with(PArray21713, empty_Array, PThreadedCode21714, 1, PSend21717);
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    // keysAndValuesDo:. 
    Send PSend21718 = new_Send((Optr)VAR_package_0_0, SMB_keysAndValuesDo_, 1, (Optr)PBlock21712);
    Array PThreadedCode21711 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_package_0_0, (Optr)&t_push_closure, (Optr)PBlock21712, (Optr)&t_send1, (Optr)PSend21718, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21709 = new_Method_with(PArray21710, empty_Array, empty_Array, PThreadedCode21711, 2, PSend21718, self);
    
    MethodClosure MC_SMB_import_ = new_MethodClosure((Method)PMethod21709, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_import_, MC_SMB_import_);
}


static void init_SMB_ensureClassReferenceFor_() {
    Symbol SMB_ensureClassReferenceFor_ = new_Symbol(L"ensureClassReferenceFor:");
    Variable VAR_aPinocchioClass_0_0 = new_Variable_named(L"aPinocchioClass", 0);
    Array PArray21720 = new_Array_with(1, (Optr)VAR_aPinocchioClass_0_0);
    Variable VAR_reference_0_1 = new_Variable_named(L"reference", 0);
    Array PArray21721 = new_Array_with(1, (Optr)VAR_reference_0_1);
    Symbol SMB_ensureClassReference_ = new_Symbol(L"ensureClassReference:");
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend21725 = new_Send((Optr)VAR_aPinocchioClass_0_0, SMB_name, 0);
    // ensureClassReference:. 
    Send PSend21724 = new_Send((Optr)self, SMB_ensureClassReference_, 1, (Optr)PSend21725);
    Assign PAssign21723 = new_Assign((Optr)VAR_reference_0_1, (Optr)PSend21724);
    Symbol SMB_ensurePinocchioClass_ = new_Symbol(L"ensurePinocchioClass:");
    // ensurePinocchioClass:. 
    Send PSend21726 = new_Send((Optr)VAR_reference_0_1, SMB_ensurePinocchioClass_, 1, (Optr)VAR_aPinocchioClass_0_0);
    Symbol SMB_package_ = new_Symbol(L"package:");
    // package:. 
    Send PSend21727 = new_Send((Optr)VAR_aPinocchioClass_0_0, SMB_package_, 1, (Optr)self);
    Array PThreadedCode21722 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign21723, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_send0, (Optr)PSend21725, (Optr)&t_send1, (Optr)PSend21724, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_reference_0_1, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_send1, (Optr)PSend21726, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21727, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_reference_0_1, (Optr)&t_method_return);
    Method PMethod21719 = new_Method_with(PArray21720, PArray21721, empty_Array, PThreadedCode21722, 4, PAssign21723, PSend21726, PSend21727, VAR_reference_0_1);
    
    MethodClosure MC_SMB_ensureClassReferenceFor_ = new_MethodClosure((Method)PMethod21719, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_ensureClassReferenceFor_, MC_SMB_ensureClassReferenceFor_);
}


static void init_SMB_ensurePath_() {
    Symbol SMB_ensurePath_ = new_Symbol(L"ensurePath:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray21729 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_package_0_1 = new_Variable_named(L"package", 0);
    Array PArray21730 = new_Array_with(1, (Optr)VAR_package_0_1);
    Assign PAssign21732 = new_Assign((Optr)VAR_package_0_1, (Optr)self);
    Variable VAR_segment_1_0 = new_Variable_named(L"segment", 1);
    Array PArray21734 = new_Array_with(1, (Optr)VAR_segment_1_0);
    Symbol SMB_ensurePackageNamed_ = new_Symbol(L"ensurePackageNamed:");
    // ensurePackageNamed:. 
    Send PSend21737 = new_Send((Optr)VAR_package_0_1, SMB_ensurePackageNamed_, 1, (Optr)VAR_segment_1_0);
    Assign PAssign21736 = new_Assign((Optr)VAR_package_0_1, (Optr)PSend21737);
    Array PThreadedCode21735 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign21736, (Optr)&t_push_variable, (Optr)VAR_package_0_1, (Optr)&t_push_variable, (Optr)VAR_segment_1_0, (Optr)&t_send1, (Optr)PSend21737, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock21733 = new_Block_with(PArray21734, empty_Array, PThreadedCode21735, 1, PAssign21736);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend21738 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock21733);
    Array PThreadedCode21731 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign21732, (Optr)&t_push_self, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock21733, (Optr)&t_send1, (Optr)PSend21738, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_package_0_1, (Optr)&t_method_return);
    Method PMethod21728 = new_Method_with(PArray21729, PArray21730, empty_Array, PThreadedCode21731, 3, PAssign21732, PSend21738, VAR_package_0_1);
    
    MethodClosure MC_SMB_ensurePath_ = new_MethodClosure((Method)PMethod21728, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_ensurePath_, MC_SMB_ensurePath_);
}


static void init_SMB_pathDo_separatedBy_() {
    Symbol SMB_pathDo_separatedBy_ = new_Symbol(L"pathDo:separatedBy:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Variable VAR_separator_0_1 = new_Variable_named(L"separator", 0);
    Array PArray21740 = new_Array_with(2, (Optr)VAR_block_0_0, (Optr)VAR_separator_0_1);
    Array PThreadedCode21741 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod21739 = new_Method_with(PArray21740, empty_Array, empty_Array, PThreadedCode21741, 1, self);
    
    MethodClosure MC_SMB_pathDo_separatedBy_ = new_MethodClosure((Method)PMethod21739, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_pathDo_separatedBy_, MC_SMB_pathDo_separatedBy_);
}


static void init_SMB_asNode() {
    Symbol SMB_asNode = new_Symbol(L"asNode");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend21744 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)self);
    Array PThreadedCode21743 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21744, (Optr)&t_method_return);
    Method PMethod21742 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21743, 1, PSend21744);
    
    MethodClosure MC_SMB_asNode = new_MethodClosure((Method)PMethod21742, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_asNode, MC_SMB_asNode);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper21747 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21749 = new_Send((Optr)IdentityDictionary_classReference, SMB_new, 0);
    Assign PAssign21748 = new_Assign((Optr)slot_Organization_RootPackage_imports, (Optr)PSend21749);
    Array PThreadedCode21746 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper21747, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21748, (Optr)&t_push_class_reference, (Optr)IdentityDictionary_classReference, (Optr)&t_send0, (Optr)PSend21749, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21745 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21746, 3, PSuper21747, PAssign21748, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod21745, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_ensureClassReference_() {
    Symbol SMB_ensureClassReference_ = new_Symbol(L"ensureClassReference:");
    Variable VAR_aNameSymbol_0_0 = new_Variable_named(L"aNameSymbol", 0);
    Array PArray21751 = new_Array_with(1, (Optr)VAR_aNameSymbol_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend21753 = new_Send((Optr)VAR_aNameSymbol_0_0, SMB_asSymbol, 0);
    Symbol SMB_in_ = new_Symbol(L"in:");
    // in:. 
    Send PSend21756 = new_Send((Optr)PClassReference_classReference, SMB_in_, 1, (Optr)self);
    Array PThreadedCode21755 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PClassReference_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21756, (Optr)&t_block_return);
    Block PBlock21754 = new_Block_with(empty_Array, empty_Array, PThreadedCode21755, 1, PSend21756);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend21757 = new_Send((Optr)self, SMB_at_ifAbsentPut_, 2, (Optr)PSend21753, (Optr)PBlock21754);
    Array PThreadedCode21752 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNameSymbol_0_0, (Optr)&t_send0, (Optr)PSend21753, (Optr)&t_push_closure, (Optr)PBlock21754, (Optr)&t_send2, (Optr)PSend21757, (Optr)&t_method_return);
    Method PMethod21750 = new_Method_with(PArray21751, empty_Array, empty_Array, PThreadedCode21752, 1, PSend21757);
    
    MethodClosure MC_SMB_ensureClassReference_ = new_MethodClosure((Method)PMethod21750, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_ensureClassReference_, MC_SMB_ensureClassReference_);
}


static void init_SMB_ensurePackageNamed_() {
    Symbol SMB_ensurePackageNamed_ = new_Symbol(L"ensurePackageNamed:");
    Variable VAR_aPinocchioSymbol_0_0 = new_Variable_named(L"aPinocchioSymbol", 0);
    Array PArray21759 = new_Array_with(1, (Optr)VAR_aPinocchioSymbol_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend21761 = new_Send((Optr)VAR_aPinocchioSymbol_0_0, SMB_asSymbol, 0);
    Symbol SMB_named_in_ = new_Symbol(L"named:in:");
    // named:in:. 
    Send PSend21764 = new_Send((Optr)PPackage_classReference, SMB_named_in_, 2, (Optr)VAR_aPinocchioSymbol_0_0, (Optr)self);
    Array PThreadedCode21763 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)PPackage_classReference, (Optr)&t_push_variable, (Optr)VAR_aPinocchioSymbol_0_0, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend21764, (Optr)&t_block_return);
    Block PBlock21762 = new_Block_with(empty_Array, empty_Array, PThreadedCode21763, 1, PSend21764);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend21765 = new_Send((Optr)self, SMB_at_ifAbsentPut_, 2, (Optr)PSend21761, (Optr)PBlock21762);
    Array PThreadedCode21760 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPinocchioSymbol_0_0, (Optr)&t_send0, (Optr)PSend21761, (Optr)&t_push_closure, (Optr)PBlock21762, (Optr)&t_send2, (Optr)PSend21765, (Optr)&t_method_return);
    Method PMethod21758 = new_Method_with(PArray21759, empty_Array, empty_Array, PThreadedCode21760, 1, PSend21765);
    
    MethodClosure MC_SMB_ensurePackageNamed_ = new_MethodClosure((Method)PMethod21758, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_ensurePackageNamed_, MC_SMB_ensurePackageNamed_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray21767 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitRootPackage_ = new_Symbol(L"visitRootPackage:");
    // visitRootPackage:. 
    Send PSend21769 = new_Send((Optr)VAR_visitor_0_0, SMB_visitRootPackage_, 1, (Optr)self);
    Array PThreadedCode21768 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21769, (Optr)&t_method_return);
    Method PMethod21766 = new_Method_with(PArray21767, empty_Array, empty_Array, PThreadedCode21768, 1, PSend21769);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod21766, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21771 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_shortName = new_Symbol(L"shortName");
    // shortName. 
    Send PSend21773 = new_Send((Optr)self, SMB_shortName, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend21774 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21773);
    Array PThreadedCode21772 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21773, (Optr)&t_send1, (Optr)PSend21774, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21770 = new_Method_with(PArray21771, empty_Array, empty_Array, PThreadedCode21772, 2, PSend21774, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21770, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_packagesDo_() {
    Symbol SMB_packagesDo_ = new_Symbol(L"packagesDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray21776 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_element_1_0 = new_Variable_named(L"element", 1);
    Array PArray21779 = new_Array_with(1, (Optr)VAR_element_1_0);
    // packagesDo:. 
    Send PSend21781 = new_Send((Optr)VAR_element_1_0, SMB_packagesDo_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode21780 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_element_1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend21781, (Optr)&t_method_return);
    Block PBlock21778 = new_Block_with(PArray21779, empty_Array, PThreadedCode21780, 1, PSend21781);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend21782 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock21778);
    Array PThreadedCode21777 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock21778, (Optr)&t_send1, (Optr)PSend21782, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21775 = new_Method_with(PArray21776, empty_Array, empty_Array, PThreadedCode21777, 2, PSend21782, self);
    
    MethodClosure MC_SMB_packagesDo_ = new_MethodClosure((Method)PMethod21775, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_packagesDo_, MC_SMB_packagesDo_);
}


static void init_SMB_lookupIn_at_() {
    Symbol SMB_lookupIn_at_ = new_Symbol(L"lookupIn:at:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray21784 = new_Array_with(2, (Optr)VAR_aCollection_0_0, (Optr)VAR_index_0_1);
    Variable VAR_subPackage_0_2 = new_Variable_named(L"subPackage", 0);
    Variable VAR_first_0_3 = new_Variable_named(L"first", 0);
    Array PArray21785 = new_Array_with(2, (Optr)VAR_subPackage_0_2, (Optr)VAR_first_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21788 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend21790 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend21791 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)PSend21790);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21795 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode21794 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21795, (Optr)&t_block_return);
    Block PBlock21793 = new_Block_with(empty_Array, empty_Array, PThreadedCode21794, 1, PSend21795);
    // ifTrue:. 
    Send PSend21792 = new_Send((Optr)PSend21791, SMB_ifTrue_, 1, (Optr)PBlock21793);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend21799 = new_Send((Optr)VAR_aCollection_0_0, SMB_at_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend21798 = new_Send((Optr)PSend21799, SMB_asSymbol, 0);
    // at:. 
    Send PSend21797 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend21798);
    Assign PAssign21796 = new_Assign((Optr)VAR_subPackage_0_2, (Optr)PSend21797);
    Symbol SMB_flagUndefinedPath_at_ = new_Symbol(L"flagUndefinedPath:at:");
    // flagUndefinedPath:at:. 
    Send PSend21802 = new_Send((Optr)self, SMB_flagUndefinedPath_at_, 2, (Optr)VAR_aCollection_0_0, (Optr)VAR_index_0_1);
    // escape:. 
    Send PSend21803 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend21802);
    Array PThreadedCode21801 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send2, (Optr)PSend21802, (Optr)&t_send1, (Optr)PSend21803, (Optr)&t_block_return);
    Block PBlock21800 = new_Block_with(empty_Array, empty_Array, PThreadedCode21801, 1, PSend21803);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend21804 = new_Send((Optr)VAR_subPackage_0_2, SMB_ifNil_, 1, (Optr)PBlock21800);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend21805 = new_Send((Optr)VAR_index_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    // lookupIn:at:. 
    Send PSend21806 = new_Send((Optr)VAR_subPackage_0_2, SMB_lookupIn_at_, 2, (Optr)VAR_aCollection_0_0, (Optr)PSend21805);
    Array PThreadedCode21789 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend21790, (Optr)&t_send1, (Optr)PSend21791, (Optr)&t_send_ifTrue_, (Optr)PSend21792, (Optr)PBlock21793, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21796, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend21799, (Optr)&t_send0, (Optr)PSend21798, (Optr)&t_send1, (Optr)PSend21797, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_subPackage_0_2, (Optr)&t_push_closure, (Optr)PBlock21800, (Optr)&t_send1, (Optr)PSend21804, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_subPackage_0_2, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21805, (Optr)&t_send2, (Optr)PSend21806, (Optr)&t_method_return);
    Block PBlock21787 = new_Block_with(PArray21788, empty_Array, PThreadedCode21789, 4, PSend21792, PAssign21796, PSend21804, PSend21806);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21807 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21787);
    Array PThreadedCode21786 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21787, (Optr)&t_send1, (Optr)PSend21807, (Optr)&t_method_return);
    Method PMethod21783 = new_Method_with(PArray21784, PArray21785, empty_Array, PThreadedCode21786, 1, PSend21807);
    
    MethodClosure MC_SMB_lookupIn_at_ = new_MethodClosure((Method)PMethod21783, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_lookupIn_at_, MC_SMB_lookupIn_at_);
}


static void init_SMB_flagUndefinedPath_at_() {
    Symbol SMB_flagUndefinedPath_at_ = new_Symbol(L"flagUndefinedPath:at:");
    Variable VAR_aPath_0_0 = new_Variable_named(L"aPath", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray21809 = new_Array_with(2, (Optr)VAR_aPath_0_0, (Optr)VAR_index_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21812 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_path_ = new_Symbol(L"path:");
    // path:. 
    Send PSend21814 = new_Send((Optr)VAR__receiver__1_0, SMB_path_, 1, (Optr)VAR_aPath_0_0);
    Symbol SMB_index_ = new_Symbol(L"index:");
    // index:. 
    Send PSend21815 = new_Send((Optr)VAR__receiver__1_0, SMB_index_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend21816 = new_Send((Optr)VAR__receiver__1_0, SMB_signal, 0);
    Array PThreadedCode21813 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_send1, (Optr)PSend21814, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend21815, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21816, (Optr)&t_method_return);
    Block PBlock21811 = new_Block_with(PArray21812, empty_Array, PThreadedCode21813, 3, PSend21814, PSend21815, PSend21816);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21817 = new_Send((Optr)PUndefinedPathReference_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21818 = new_Send((Optr)PBlock21811, SMB_value_, 1, (Optr)PSend21817);
    Array PThreadedCode21810 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock21811, (Optr)&t_push_class_reference, (Optr)PUndefinedPathReference_classReference, (Optr)&t_send0, (Optr)PSend21817, (Optr)&t_send1, (Optr)PSend21818, (Optr)&t_method_return);
    Method PMethod21808 = new_Method_with(PArray21809, empty_Array, empty_Array, PThreadedCode21810, 1, PSend21818);
    
    MethodClosure MC_SMB_flagUndefinedPath_at_ = new_MethodClosure((Method)PMethod21808, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_flagUndefinedPath_at_, MC_SMB_flagUndefinedPath_at_);
}

void init_Organization_PRootPackage_layout() {
    layout_Organization_RootPackage_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Organization_RootPackage_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Organization_RootPackage_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Organization_RootPackage_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Organization_RootPackage_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Organization_RootPackage_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_RootPackage = new_Symbol(L"RootPackage");
    slot_Organization_RootPackage_imports = (Optr)new_Slot(5, L"imports");
    layout_Organization_RootPackage = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_Organization_RootPackage)->values[0] = slot_Collection_HashedCollection_size; // size 
    ((Array)layout_Organization_RootPackage)->values[1] = slot_Collection_HashedCollection_maxLinear; // maxLinear 
    ((Array)layout_Organization_RootPackage)->values[2] = slot_Collection_HashedCollection_ratio; // ratio 
    ((Array)layout_Organization_RootPackage)->values[3] = slot_Collection_HashedCollection_buckets; // buckets 
    ((Array)layout_Organization_RootPackage)->values[4] = slot_Collection_HashedCollection_linear; // linear 
    ((Array)layout_Organization_RootPackage)->values[5] = slot_Organization_RootPackage_imports; // imports 
    Organization_RootPackage_Class = (Class)new_Class(IdentityDictionary_Class, layout_Organization_RootPackage_Class_class);
    Organization_RootPackage_Class->layout = layout_Organization_RootPackage;
    Organization_RootPackage_Class->name = SMB_RootPackage;
    
}

void init_Organization_PRootPackage_methods() {
    init_SMB_root();
    init_SMB_isRoot();
    init_SMB_findPackageName_();
    init_SMB_lookup_();
    init_SMB_findName_ifAbsent_();
    init_SMB_shortName();
    init_SMB_import_();
    init_SMB_ensureClassReferenceFor_();
    init_SMB_ensurePath_();
    init_SMB_pathDo_separatedBy_();
    init_SMB_asNode();
    init_SMB_initialize();
    init_SMB_ensureClassReference_();
    init_SMB_ensurePackageNamed_();
    init_SMB_accept_();
    init_SMB_printOn_();
    init_SMB_packagesDo_();
    init_SMB_lookupIn_at_();
    init_SMB_flagUndefinedPath_at_();
    
}