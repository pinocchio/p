#include <lib/class/Organization/RootPackage.h>


Optr layout_Organization_RootPackage_Class_class;
Optr slot_Organization_RootPackage_imports;
Optr layout_Organization_RootPackage;


static void init_SMB_root() {
    Symbol SMB_root = new_Symbol(L"root");
<<<<<<< HEAD
    Array PThreadedCode21838 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod21837 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21838, 1, self);
    
    MethodClosure MC_SMB_root = new_MethodClosure((Method)PMethod21837, Organization_RootPackage_Class);
=======
    Array PThreadedCode21655 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod21654 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21655, 1, self);
    
    MethodClosure MC_SMB_root = new_MethodClosure((Method)PMethod21654, Organization_RootPackage_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Organization_RootPackage_Class, SMB_root, MC_SMB_root);
}


static void init_SMB_isRoot() {
    Symbol SMB_isRoot = new_Symbol(L"isRoot");
<<<<<<< HEAD
    Array PThreadedCode21840 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod21839 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21840, 1, true_Const);
    
    MethodClosure MC_SMB_isRoot = new_MethodClosure((Method)PMethod21839, Organization_RootPackage_Class);
=======
    Array PThreadedCode21657 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod21656 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21657, 1, true_Const);
    
    MethodClosure MC_SMB_isRoot = new_MethodClosure((Method)PMethod21656, Organization_RootPackage_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Organization_RootPackage_Class, SMB_isRoot, MC_SMB_isRoot);
}


static void init_SMB_findPackageName_() {
    Symbol SMB_findPackageName_ = new_Symbol(L"findPackageName:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
<<<<<<< HEAD
    Array PArray21842 = new_Array_with(1, (Optr)VAR_aName_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21845 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_shortName = new_Symbol(L"shortName");
    // shortName. 
    Send PSend21847 = new_Send((Optr)self, SMB_shortName, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend21848 = new_Send((Optr)PSend21847, SMB__pequals_, 1, (Optr)VAR_aName_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21852 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode21851 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21852, (Optr)&t_block_return);
    Block PBlock21850 = new_Block_with(empty_Array, empty_Array, PThreadedCode21851, 1, PSend21852);
    // ifTrue:. 
    Send PSend21849 = new_Send((Optr)PSend21848, SMB_ifTrue_, 1, (Optr)PBlock21850);
    Array PThreadedCode21846 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21847, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend21848, (Optr)&t_send_ifTrue_, (Optr)PSend21849, (Optr)PBlock21850, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Block PBlock21844 = new_Block_with(PArray21845, empty_Array, PThreadedCode21846, 2, PSend21849, nil_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21853 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21844);
    Array PThreadedCode21843 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21844, (Optr)&t_send1, (Optr)PSend21853, (Optr)&t_method_return);
    Method PMethod21841 = new_Method_with(PArray21842, empty_Array, empty_Array, PThreadedCode21843, 1, PSend21853);
    
    MethodClosure MC_SMB_findPackageName_ = new_MethodClosure((Method)PMethod21841, Organization_RootPackage_Class);
=======
    Array PArray21659 = new_Array_with(1, (Optr)VAR_aName_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21662 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_shortName = new_Symbol(L"shortName");
    // shortName. 
    Send PSend21664 = new_Send((Optr)self, SMB_shortName, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend21665 = new_Send((Optr)PSend21664, SMB__pequals_, 1, (Optr)VAR_aName_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21669 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode21668 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21669, (Optr)&t_block_return);
    Block PBlock21667 = new_Block_with(empty_Array, empty_Array, PThreadedCode21668, 1, PSend21669);
    // ifTrue:. 
    Send PSend21666 = new_Send((Optr)PSend21665, SMB_ifTrue_, 1, (Optr)PBlock21667);
    Array PThreadedCode21663 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21664, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend21665, (Optr)&t_send_ifTrue_, (Optr)PSend21666, (Optr)PBlock21667, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Block PBlock21661 = new_Block_with(PArray21662, empty_Array, PThreadedCode21663, 2, PSend21666, nil_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21670 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21661);
    Array PThreadedCode21660 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21661, (Optr)&t_send1, (Optr)PSend21670, (Optr)&t_method_return);
    Method PMethod21658 = new_Method_with(PArray21659, empty_Array, empty_Array, PThreadedCode21660, 1, PSend21670);
    
    MethodClosure MC_SMB_findPackageName_ = new_MethodClosure((Method)PMethod21658, Organization_RootPackage_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Organization_RootPackage_Class, SMB_findPackageName_, MC_SMB_findPackageName_);
}


static void init_SMB_lookup_() {
    Symbol SMB_lookup_ = new_Symbol(L"lookup:");
    Variable VAR_aPath_0_0 = new_Variable_named(L"aPath", 0);
<<<<<<< HEAD
    Array PArray21855 = new_Array_with(1, (Optr)VAR_aPath_0_0);
    Variable VAR_package_0_1 = new_Variable_named(L"package", 0);
    Array PArray21856 = new_Array_with(1, (Optr)VAR_package_0_1);
    Symbol SMB_findName_ifAbsent_ = new_Symbol(L"findName:ifAbsent:");
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend21861 = new_Send((Optr)VAR_aPath_0_0, SMB_first, 0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend21860 = new_Send((Optr)PSend21861, SMB_asSymbol, 0);
=======
    Array PArray21672 = new_Array_with(1, (Optr)VAR_aPath_0_0);
    Variable VAR_package_0_1 = new_Variable_named(L"package", 0);
    Array PArray21673 = new_Array_with(1, (Optr)VAR_package_0_1);
    Symbol SMB_findName_ifAbsent_ = new_Symbol(L"findName:ifAbsent:");
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend21678 = new_Send((Optr)VAR_aPath_0_0, SMB_first, 0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend21677 = new_Send((Optr)PSend21678, SMB_asSymbol, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_flagUndefinedPath_at_ = new_Symbol(L"flagUndefinedPath:at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // flagUndefinedPath:at:. 
<<<<<<< HEAD
    Send PSend21864 = new_Send((Optr)self, SMB_flagUndefinedPath_at_, 2, (Optr)VAR_aPath_0_0, (Optr)int_1_Const);
    Array PThreadedCode21863 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_push_1, (Optr)&t_send2, (Optr)PSend21864, (Optr)&t_block_return);
    Block PBlock21862 = new_Block_with(empty_Array, empty_Array, PThreadedCode21863, 1, PSend21864);
    // findName:ifAbsent:. 
    Send PSend21859 = new_Send((Optr)self, SMB_findName_ifAbsent_, 2, (Optr)PSend21860, (Optr)PBlock21862);
    Assign PAssign21858 = new_Assign((Optr)VAR_package_0_1, (Optr)PSend21859);
=======
    Send PSend21681 = new_Send((Optr)self, SMB_flagUndefinedPath_at_, 2, (Optr)VAR_aPath_0_0, (Optr)int_1_Const);
    Array PThreadedCode21680 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_push_1, (Optr)&t_send2, (Optr)PSend21681, (Optr)&t_block_return);
    Block PBlock21679 = new_Block_with(empty_Array, empty_Array, PThreadedCode21680, 1, PSend21681);
    // findName:ifAbsent:. 
    Send PSend21676 = new_Send((Optr)self, SMB_findName_ifAbsent_, 2, (Optr)PSend21677, (Optr)PBlock21679);
    Assign PAssign21675 = new_Assign((Optr)VAR_package_0_1, (Optr)PSend21676);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_lookupIn_at_ = new_Symbol(L"lookupIn:at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // lookupIn:at:. 
<<<<<<< HEAD
    Send PSend21865 = new_Send((Optr)VAR_package_0_1, SMB_lookupIn_at_, 2, (Optr)VAR_aPath_0_0, (Optr)int_2_Const);
    Array PThreadedCode21857 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign21858, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_send0, (Optr)PSend21861, (Optr)&t_send0, (Optr)PSend21860, (Optr)&t_push_closure, (Optr)PBlock21862, (Optr)&t_send2, (Optr)PSend21859, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_package_0_1, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_push_2, (Optr)&t_send2, (Optr)PSend21865, (Optr)&t_method_return);
    Method PMethod21854 = new_Method_with(PArray21855, PArray21856, empty_Array, PThreadedCode21857, 2, PAssign21858, PSend21865);
    
    MethodClosure MC_SMB_lookup_ = new_MethodClosure((Method)PMethod21854, Organization_RootPackage_Class);
=======
    Send PSend21682 = new_Send((Optr)VAR_package_0_1, SMB_lookupIn_at_, 2, (Optr)VAR_aPath_0_0, (Optr)int_2_Const);
    Array PThreadedCode21674 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign21675, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_send0, (Optr)PSend21678, (Optr)&t_send0, (Optr)PSend21677, (Optr)&t_push_closure, (Optr)PBlock21679, (Optr)&t_send2, (Optr)PSend21676, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_package_0_1, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_push_2, (Optr)&t_send2, (Optr)PSend21682, (Optr)&t_method_return);
    Method PMethod21671 = new_Method_with(PArray21672, PArray21673, empty_Array, PThreadedCode21674, 2, PAssign21675, PSend21682);
    
    MethodClosure MC_SMB_lookup_ = new_MethodClosure((Method)PMethod21671, Organization_RootPackage_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Organization_RootPackage_Class, SMB_lookup_, MC_SMB_lookup_);
}


static void init_SMB_findName_ifAbsent_() {
    Symbol SMB_findName_ifAbsent_ = new_Symbol(L"findName:ifAbsent:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Array PArray21684 = new_Array_with(2, (Optr)VAR_aName_0_0, (Optr)VAR_block_0_1);
    Variable VAR_returnBlock_0_2 = new_Variable_named(L"returnBlock", 0);
    Array PArray21685 = new_Array_with(1, (Optr)VAR_returnBlock_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21688 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_value_2_0 = new_Variable_named(L"value", 2);
    Array PArray21692 = new_Array_with(1, (Optr)VAR_value_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21694 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_2_0);
    Array PThreadedCode21693 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_2_0, (Optr)&t_send1, (Optr)PSend21694, (Optr)&t_method_return);
    Block PBlock21691 = new_Block_with(PArray21692, empty_Array, PThreadedCode21693, 1, PSend21694);
    Assign PAssign21690 = new_Assign((Optr)VAR_returnBlock_0_2, (Optr)PBlock21691);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    // at:ifPresent:. 
    Send PSend21695 = new_Send((Optr)self, SMB_at_ifPresent_, 2, (Optr)VAR_aName_0_0, (Optr)VAR_returnBlock_0_2);
    Symbol SMB_shortName = new_Symbol(L"shortName");
    // shortName. 
    Send PSend21696 = new_Send((Optr)self, SMB_shortName, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend21697 = new_Send((Optr)PSend21696, SMB__pequals_, 1, (Optr)VAR_aName_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend21701 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode21700 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21701, (Optr)&t_block_return);
    Block PBlock21699 = new_Block_with(empty_Array, empty_Array, PThreadedCode21700, 1, PSend21701);
    // ifTrue:. 
    Send PSend21698 = new_Send((Optr)PSend21697, SMB_ifTrue_, 1, (Optr)PBlock21699);
    // at:ifPresent:. 
    Send PSend21702 = new_Send((Optr)slot_Organization_RootPackage_imports, SMB_at_ifPresent_, 2, (Optr)VAR_aName_0_0, (Optr)VAR_returnBlock_0_2);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend21703 = new_Send((Optr)VAR_block_0_1, SMB_value, 0);
    Array PThreadedCode21689 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign21690, (Optr)&t_push_closure, (Optr)PBlock21691, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_push_variable, (Optr)VAR_returnBlock_0_2, (Optr)&t_send2, (Optr)PSend21695, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21696, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend21697, (Optr)&t_send_ifTrue_, (Optr)PSend21698, (Optr)PBlock21699, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_RootPackage_imports, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_push_variable, (Optr)VAR_returnBlock_0_2, (Optr)&t_send2, (Optr)PSend21702, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_send0, (Optr)PSend21703, (Optr)&t_method_return);
    Block PBlock21687 = new_Block_with(PArray21688, empty_Array, PThreadedCode21689, 5, PAssign21690, PSend21695, PSend21698, PSend21702, PSend21703);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21704 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21687);
    Array PThreadedCode21686 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21687, (Optr)&t_send1, (Optr)PSend21704, (Optr)&t_method_return);
    Method PMethod21683 = new_Method_with(PArray21684, PArray21685, empty_Array, PThreadedCode21686, 1, PSend21704);
    
    MethodClosure MC_SMB_findName_ifAbsent_ = new_MethodClosure((Method)PMethod21683, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_findName_ifAbsent_, MC_SMB_findName_ifAbsent_);
}


static void init_SMB_shortName() {
    Symbol SMB_shortName = new_Symbol(L"shortName");
    Symbol  SMB_Pinocchio = new_Symbol(L"Pinocchio");
    Array PThreadedCode21706 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)SMB_Pinocchio, (Optr)&t_method_return);
    Constant SMB_Pinocchio_Const = new_Constant((Optr)SMB_Pinocchio);
    Method PMethod21705 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21706, 1, SMB_Pinocchio_Const);
    
    MethodClosure MC_SMB_shortName = new_MethodClosure((Method)PMethod21705, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_shortName, MC_SMB_shortName);
}


static void init_SMB_import_() {
    Symbol SMB_import_ = new_Symbol(L"import:");
    Variable VAR_package_0_0 = new_Variable_named(L"package", 0);
    Array PArray21708 = new_Array_with(1, (Optr)VAR_package_0_0);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray21711 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Array PThreadedCode21714 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_block_return);
    Block PBlock21713 = new_Block_with(empty_Array, empty_Array, PThreadedCode21714, 1, VAR_value_1_1);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend21715 = new_Send((Optr)slot_Organization_RootPackage_imports, SMB_at_ifAbsentPut_, 2, (Optr)VAR_key_1_0, (Optr)PBlock21713);
    Array PThreadedCode21712 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Organization_RootPackage_imports, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_closure, (Optr)PBlock21713, (Optr)&t_send2, (Optr)PSend21715, (Optr)&t_method_return);
    Block PBlock21710 = new_Block_with(PArray21711, empty_Array, PThreadedCode21712, 1, PSend21715);
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    // keysAndValuesDo:. 
    Send PSend21716 = new_Send((Optr)VAR_package_0_0, SMB_keysAndValuesDo_, 1, (Optr)PBlock21710);
    Array PThreadedCode21709 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_package_0_0, (Optr)&t_push_closure, (Optr)PBlock21710, (Optr)&t_send1, (Optr)PSend21716, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21707 = new_Method_with(PArray21708, empty_Array, empty_Array, PThreadedCode21709, 2, PSend21716, self);
    
    MethodClosure MC_SMB_import_ = new_MethodClosure((Method)PMethod21707, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_import_, MC_SMB_import_);
}


static void init_SMB_ensureClassReferenceFor_() {
    Symbol SMB_ensureClassReferenceFor_ = new_Symbol(L"ensureClassReferenceFor:");
    Variable VAR_aPinocchioClass_0_0 = new_Variable_named(L"aPinocchioClass", 0);
<<<<<<< HEAD
    Array PArray21867 = new_Array_with(1, (Optr)VAR_aPinocchioClass_0_0);
    Variable VAR_reference_0_1 = new_Variable_named(L"reference", 0);
    Array PArray21868 = new_Array_with(1, (Optr)VAR_reference_0_1);
    Symbol SMB_ensureClassReference_ = new_Symbol(L"ensureClassReference:");
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend21872 = new_Send((Optr)VAR_aPinocchioClass_0_0, SMB_name, 0);
    // ensureClassReference:. 
    Send PSend21871 = new_Send((Optr)self, SMB_ensureClassReference_, 1, (Optr)PSend21872);
    Assign PAssign21870 = new_Assign((Optr)VAR_reference_0_1, (Optr)PSend21871);
    Symbol SMB_ensurePinocchioClass_ = new_Symbol(L"ensurePinocchioClass:");
    // ensurePinocchioClass:. 
    Send PSend21873 = new_Send((Optr)VAR_reference_0_1, SMB_ensurePinocchioClass_, 1, (Optr)VAR_aPinocchioClass_0_0);
    Symbol SMB_package_ = new_Symbol(L"package:");
    // package:. 
    Send PSend21874 = new_Send((Optr)VAR_aPinocchioClass_0_0, SMB_package_, 1, (Optr)self);
    Array PThreadedCode21869 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign21870, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_send0, (Optr)PSend21872, (Optr)&t_send1, (Optr)PSend21871, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_reference_0_1, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_send1, (Optr)PSend21873, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21874, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_reference_0_1, (Optr)&t_method_return);
    Method PMethod21866 = new_Method_with(PArray21867, PArray21868, empty_Array, PThreadedCode21869, 4, PAssign21870, PSend21873, PSend21874, VAR_reference_0_1);
    
    MethodClosure MC_SMB_ensureClassReferenceFor_ = new_MethodClosure((Method)PMethod21866, Organization_RootPackage_Class);
=======
    Array PArray21718 = new_Array_with(1, (Optr)VAR_aPinocchioClass_0_0);
    Variable VAR_reference_0_1 = new_Variable_named(L"reference", 0);
    Array PArray21719 = new_Array_with(1, (Optr)VAR_reference_0_1);
    Symbol SMB_ensureClassReference_ = new_Symbol(L"ensureClassReference:");
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend21723 = new_Send((Optr)VAR_aPinocchioClass_0_0, SMB_name, 0);
    // ensureClassReference:. 
    Send PSend21722 = new_Send((Optr)self, SMB_ensureClassReference_, 1, (Optr)PSend21723);
    Assign PAssign21721 = new_Assign((Optr)VAR_reference_0_1, (Optr)PSend21722);
    Symbol SMB_ensurePinocchioClass_ = new_Symbol(L"ensurePinocchioClass:");
    // ensurePinocchioClass:. 
    Send PSend21724 = new_Send((Optr)VAR_reference_0_1, SMB_ensurePinocchioClass_, 1, (Optr)VAR_aPinocchioClass_0_0);
    Symbol SMB_package_ = new_Symbol(L"package:");
    // package:. 
    Send PSend21725 = new_Send((Optr)VAR_aPinocchioClass_0_0, SMB_package_, 1, (Optr)self);
    Array PThreadedCode21720 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign21721, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_send0, (Optr)PSend21723, (Optr)&t_send1, (Optr)PSend21722, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_reference_0_1, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_send1, (Optr)PSend21724, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21725, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_reference_0_1, (Optr)&t_method_return);
    Method PMethod21717 = new_Method_with(PArray21718, PArray21719, empty_Array, PThreadedCode21720, 4, PAssign21721, PSend21724, PSend21725, VAR_reference_0_1);
    
    MethodClosure MC_SMB_ensureClassReferenceFor_ = new_MethodClosure((Method)PMethod21717, Organization_RootPackage_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Organization_RootPackage_Class, SMB_ensureClassReferenceFor_, MC_SMB_ensureClassReferenceFor_);
}


static void init_SMB_ensurePath_() {
    Symbol SMB_ensurePath_ = new_Symbol(L"ensurePath:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
<<<<<<< HEAD
    Array PArray21876 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_package_0_1 = new_Variable_named(L"package", 0);
    Array PArray21877 = new_Array_with(1, (Optr)VAR_package_0_1);
    Assign PAssign21879 = new_Assign((Optr)VAR_package_0_1, (Optr)self);
    Variable VAR_segment_1_0 = new_Variable_named(L"segment", 1);
    Array PArray21881 = new_Array_with(1, (Optr)VAR_segment_1_0);
    Symbol SMB_ensurePackageNamed_ = new_Symbol(L"ensurePackageNamed:");
    // ensurePackageNamed:. 
    Send PSend21884 = new_Send((Optr)VAR_package_0_1, SMB_ensurePackageNamed_, 1, (Optr)VAR_segment_1_0);
    Assign PAssign21883 = new_Assign((Optr)VAR_package_0_1, (Optr)PSend21884);
    Array PThreadedCode21882 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign21883, (Optr)&t_push_variable, (Optr)VAR_package_0_1, (Optr)&t_push_variable, (Optr)VAR_segment_1_0, (Optr)&t_send1, (Optr)PSend21884, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock21880 = new_Block_with(PArray21881, empty_Array, PThreadedCode21882, 1, PAssign21883);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend21885 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock21880);
    Array PThreadedCode21878 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign21879, (Optr)&t_push_self, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock21880, (Optr)&t_send1, (Optr)PSend21885, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_package_0_1, (Optr)&t_method_return);
    Method PMethod21875 = new_Method_with(PArray21876, PArray21877, empty_Array, PThreadedCode21878, 3, PAssign21879, PSend21885, VAR_package_0_1);
    
    MethodClosure MC_SMB_ensurePath_ = new_MethodClosure((Method)PMethod21875, Organization_RootPackage_Class);
=======
    Array PArray21727 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_package_0_1 = new_Variable_named(L"package", 0);
    Array PArray21728 = new_Array_with(1, (Optr)VAR_package_0_1);
    Assign PAssign21730 = new_Assign((Optr)VAR_package_0_1, (Optr)self);
    Variable VAR_segment_1_0 = new_Variable_named(L"segment", 1);
    Array PArray21732 = new_Array_with(1, (Optr)VAR_segment_1_0);
    Symbol SMB_ensurePackageNamed_ = new_Symbol(L"ensurePackageNamed:");
    // ensurePackageNamed:. 
    Send PSend21735 = new_Send((Optr)VAR_package_0_1, SMB_ensurePackageNamed_, 1, (Optr)VAR_segment_1_0);
    Assign PAssign21734 = new_Assign((Optr)VAR_package_0_1, (Optr)PSend21735);
    Array PThreadedCode21733 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign21734, (Optr)&t_push_variable, (Optr)VAR_package_0_1, (Optr)&t_push_variable, (Optr)VAR_segment_1_0, (Optr)&t_send1, (Optr)PSend21735, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock21731 = new_Block_with(PArray21732, empty_Array, PThreadedCode21733, 1, PAssign21734);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend21736 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock21731);
    Array PThreadedCode21729 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign21730, (Optr)&t_push_self, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock21731, (Optr)&t_send1, (Optr)PSend21736, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_package_0_1, (Optr)&t_method_return);
    Method PMethod21726 = new_Method_with(PArray21727, PArray21728, empty_Array, PThreadedCode21729, 3, PAssign21730, PSend21736, VAR_package_0_1);
    
    MethodClosure MC_SMB_ensurePath_ = new_MethodClosure((Method)PMethod21726, Organization_RootPackage_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Organization_RootPackage_Class, SMB_ensurePath_, MC_SMB_ensurePath_);
}


static void init_SMB_pathDo_separatedBy_() {
    Symbol SMB_pathDo_separatedBy_ = new_Symbol(L"pathDo:separatedBy:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Variable VAR_separator_0_1 = new_Variable_named(L"separator", 0);
    Array PArray21738 = new_Array_with(2, (Optr)VAR_block_0_0, (Optr)VAR_separator_0_1);
    Array PThreadedCode21739 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod21737 = new_Method_with(PArray21738, empty_Array, empty_Array, PThreadedCode21739, 1, self);
    
    MethodClosure MC_SMB_pathDo_separatedBy_ = new_MethodClosure((Method)PMethod21737, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_pathDo_separatedBy_, MC_SMB_pathDo_separatedBy_);
}


static void init_SMB_asNode() {
    Symbol SMB_asNode = new_Symbol(L"asNode");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
<<<<<<< HEAD
    Send PSend21888 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)self);
    Array PThreadedCode21887 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21888, (Optr)&t_method_return);
    Method PMethod21886 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21887, 1, PSend21888);
    
    MethodClosure MC_SMB_asNode = new_MethodClosure((Method)PMethod21886, Organization_RootPackage_Class);
=======
    Send PSend21742 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)self);
    Array PThreadedCode21741 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21742, (Optr)&t_method_return);
    Method PMethod21740 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21741, 1, PSend21742);
    
    MethodClosure MC_SMB_asNode = new_MethodClosure((Method)PMethod21740, Organization_RootPackage_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Organization_RootPackage_Class, SMB_asNode, MC_SMB_asNode);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
<<<<<<< HEAD
    Super PSuper21891 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21893 = new_Send((Optr)IdentityDictionary_classReference, SMB_new, 0);
    Assign PAssign21892 = new_Assign((Optr)slot_Organization_RootPackage_imports, (Optr)PSend21893);
    Array PThreadedCode21890 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper21891, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21892, (Optr)&t_push_class_reference, (Optr)IdentityDictionary_classReference, (Optr)&t_send0, (Optr)PSend21893, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21889 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21890, 3, PSuper21891, PAssign21892, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod21889, Organization_RootPackage_Class);
=======
    Super PSuper21745 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21747 = new_Send((Optr)IdentityDictionary_classReference, SMB_new, 0);
    Assign PAssign21746 = new_Assign((Optr)slot_Organization_RootPackage_imports, (Optr)PSend21747);
    Array PThreadedCode21744 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper21745, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21746, (Optr)&t_push_class_reference, (Optr)IdentityDictionary_classReference, (Optr)&t_send0, (Optr)PSend21747, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21743 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21744, 3, PSuper21745, PAssign21746, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod21743, Organization_RootPackage_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Organization_RootPackage_Class, SMB_initialize, MC_SMB_initialize);
}


<<<<<<< HEAD
static void init_SMB_findName_ifAbsent_() {
    Symbol SMB_findName_ifAbsent_ = new_Symbol(L"findName:ifAbsent:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Array PArray21895 = new_Array_with(2, (Optr)VAR_aName_0_0, (Optr)VAR_block_0_1);
    Variable VAR_returnBlock_0_2 = new_Variable_named(L"returnBlock", 0);
    Array PArray21896 = new_Array_with(1, (Optr)VAR_returnBlock_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21899 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_value_2_0 = new_Variable_named(L"value", 2);
    Array PArray21903 = new_Array_with(1, (Optr)VAR_value_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21905 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_2_0);
    Array PThreadedCode21904 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_2_0, (Optr)&t_send1, (Optr)PSend21905, (Optr)&t_method_return);
    Block PBlock21902 = new_Block_with(PArray21903, empty_Array, PThreadedCode21904, 1, PSend21905);
    Assign PAssign21901 = new_Assign((Optr)VAR_returnBlock_0_2, (Optr)PBlock21902);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    // at:ifPresent:. 
    Send PSend21906 = new_Send((Optr)self, SMB_at_ifPresent_, 2, (Optr)VAR_aName_0_0, (Optr)VAR_returnBlock_0_2);
    Symbol SMB_shortName = new_Symbol(L"shortName");
    // shortName. 
    Send PSend21907 = new_Send((Optr)self, SMB_shortName, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend21908 = new_Send((Optr)PSend21907, SMB__pequals_, 1, (Optr)VAR_aName_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend21912 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode21911 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21912, (Optr)&t_block_return);
    Block PBlock21910 = new_Block_with(empty_Array, empty_Array, PThreadedCode21911, 1, PSend21912);
    // ifTrue:. 
    Send PSend21909 = new_Send((Optr)PSend21908, SMB_ifTrue_, 1, (Optr)PBlock21910);
    // at:ifPresent:. 
    Send PSend21913 = new_Send((Optr)slot_Organization_RootPackage_imports, SMB_at_ifPresent_, 2, (Optr)VAR_aName_0_0, (Optr)VAR_returnBlock_0_2);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend21914 = new_Send((Optr)VAR_block_0_1, SMB_value, 0);
    Array PThreadedCode21900 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign21901, (Optr)&t_push_closure, (Optr)PBlock21902, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_push_variable, (Optr)VAR_returnBlock_0_2, (Optr)&t_send2, (Optr)PSend21906, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21907, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend21908, (Optr)&t_send_ifTrue_, (Optr)PSend21909, (Optr)PBlock21910, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_RootPackage_imports, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_push_variable, (Optr)VAR_returnBlock_0_2, (Optr)&t_send2, (Optr)PSend21913, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_send0, (Optr)PSend21914, (Optr)&t_method_return);
    Block PBlock21898 = new_Block_with(PArray21899, empty_Array, PThreadedCode21900, 5, PAssign21901, PSend21906, PSend21909, PSend21913, PSend21914);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21915 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21898);
    Array PThreadedCode21897 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21898, (Optr)&t_send1, (Optr)PSend21915, (Optr)&t_method_return);
    Method PMethod21894 = new_Method_with(PArray21895, PArray21896, empty_Array, PThreadedCode21897, 1, PSend21915);
    
    MethodClosure MC_SMB_findName_ifAbsent_ = new_MethodClosure((Method)PMethod21894, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_findName_ifAbsent_, MC_SMB_findName_ifAbsent_);
}


static void init_SMB_ensureClassReference_() {
    Symbol SMB_ensureClassReference_ = new_Symbol(L"ensureClassReference:");
    Variable VAR_aNameSymbol_0_0 = new_Variable_named(L"aNameSymbol", 0);
    Array PArray21917 = new_Array_with(1, (Optr)VAR_aNameSymbol_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend21919 = new_Send((Optr)VAR_aNameSymbol_0_0, SMB_asSymbol, 0);
    Symbol SMB_in_ = new_Symbol(L"in:");
    // in:. 
    Send PSend21922 = new_Send((Optr)PClassReference_classReference, SMB_in_, 1, (Optr)self);
    Array PThreadedCode21921 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PClassReference_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21922, (Optr)&t_block_return);
    Block PBlock21920 = new_Block_with(empty_Array, empty_Array, PThreadedCode21921, 1, PSend21922);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend21923 = new_Send((Optr)self, SMB_at_ifAbsentPut_, 2, (Optr)PSend21919, (Optr)PBlock21920);
    Array PThreadedCode21918 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNameSymbol_0_0, (Optr)&t_send0, (Optr)PSend21919, (Optr)&t_push_closure, (Optr)PBlock21920, (Optr)&t_send2, (Optr)PSend21923, (Optr)&t_method_return);
    Method PMethod21916 = new_Method_with(PArray21917, empty_Array, empty_Array, PThreadedCode21918, 1, PSend21923);
    
    MethodClosure MC_SMB_ensureClassReference_ = new_MethodClosure((Method)PMethod21916, Organization_RootPackage_Class);
=======
static void init_SMB_ensureClassReference_() {
    Symbol SMB_ensureClassReference_ = new_Symbol(L"ensureClassReference:");
    Variable VAR_aNameSymbol_0_0 = new_Variable_named(L"aNameSymbol", 0);
    Array PArray21749 = new_Array_with(1, (Optr)VAR_aNameSymbol_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend21751 = new_Send((Optr)VAR_aNameSymbol_0_0, SMB_asSymbol, 0);
    Symbol SMB_in_ = new_Symbol(L"in:");
    // in:. 
    Send PSend21754 = new_Send((Optr)PClassReference_classReference, SMB_in_, 1, (Optr)self);
    Array PThreadedCode21753 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PClassReference_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21754, (Optr)&t_block_return);
    Block PBlock21752 = new_Block_with(empty_Array, empty_Array, PThreadedCode21753, 1, PSend21754);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend21755 = new_Send((Optr)self, SMB_at_ifAbsentPut_, 2, (Optr)PSend21751, (Optr)PBlock21752);
    Array PThreadedCode21750 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNameSymbol_0_0, (Optr)&t_send0, (Optr)PSend21751, (Optr)&t_push_closure, (Optr)PBlock21752, (Optr)&t_send2, (Optr)PSend21755, (Optr)&t_method_return);
    Method PMethod21748 = new_Method_with(PArray21749, empty_Array, empty_Array, PThreadedCode21750, 1, PSend21755);
    
    MethodClosure MC_SMB_ensureClassReference_ = new_MethodClosure((Method)PMethod21748, Organization_RootPackage_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Organization_RootPackage_Class, SMB_ensureClassReference_, MC_SMB_ensureClassReference_);
}


static void init_SMB_ensurePackageNamed_() {
    Symbol SMB_ensurePackageNamed_ = new_Symbol(L"ensurePackageNamed:");
    Variable VAR_aPinocchioSymbol_0_0 = new_Variable_named(L"aPinocchioSymbol", 0);
<<<<<<< HEAD
    Array PArray21925 = new_Array_with(1, (Optr)VAR_aPinocchioSymbol_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend21927 = new_Send((Optr)VAR_aPinocchioSymbol_0_0, SMB_asSymbol, 0);
    Symbol SMB_named_in_ = new_Symbol(L"named:in:");
    // named:in:. 
    Send PSend21930 = new_Send((Optr)PPackage_classReference, SMB_named_in_, 2, (Optr)VAR_aPinocchioSymbol_0_0, (Optr)self);
    Array PThreadedCode21929 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)PPackage_classReference, (Optr)&t_push_variable, (Optr)VAR_aPinocchioSymbol_0_0, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend21930, (Optr)&t_block_return);
    Block PBlock21928 = new_Block_with(empty_Array, empty_Array, PThreadedCode21929, 1, PSend21930);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend21931 = new_Send((Optr)self, SMB_at_ifAbsentPut_, 2, (Optr)PSend21927, (Optr)PBlock21928);
    Array PThreadedCode21926 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPinocchioSymbol_0_0, (Optr)&t_send0, (Optr)PSend21927, (Optr)&t_push_closure, (Optr)PBlock21928, (Optr)&t_send2, (Optr)PSend21931, (Optr)&t_method_return);
    Method PMethod21924 = new_Method_with(PArray21925, empty_Array, empty_Array, PThreadedCode21926, 1, PSend21931);
    
    MethodClosure MC_SMB_ensurePackageNamed_ = new_MethodClosure((Method)PMethod21924, Organization_RootPackage_Class);
=======
    Array PArray21757 = new_Array_with(1, (Optr)VAR_aPinocchioSymbol_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend21759 = new_Send((Optr)VAR_aPinocchioSymbol_0_0, SMB_asSymbol, 0);
    Symbol SMB_named_in_ = new_Symbol(L"named:in:");
    // named:in:. 
    Send PSend21762 = new_Send((Optr)PPackage_classReference, SMB_named_in_, 2, (Optr)VAR_aPinocchioSymbol_0_0, (Optr)self);
    Array PThreadedCode21761 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)PPackage_classReference, (Optr)&t_push_variable, (Optr)VAR_aPinocchioSymbol_0_0, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend21762, (Optr)&t_block_return);
    Block PBlock21760 = new_Block_with(empty_Array, empty_Array, PThreadedCode21761, 1, PSend21762);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend21763 = new_Send((Optr)self, SMB_at_ifAbsentPut_, 2, (Optr)PSend21759, (Optr)PBlock21760);
    Array PThreadedCode21758 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPinocchioSymbol_0_0, (Optr)&t_send0, (Optr)PSend21759, (Optr)&t_push_closure, (Optr)PBlock21760, (Optr)&t_send2, (Optr)PSend21763, (Optr)&t_method_return);
    Method PMethod21756 = new_Method_with(PArray21757, empty_Array, empty_Array, PThreadedCode21758, 1, PSend21763);
    
    MethodClosure MC_SMB_ensurePackageNamed_ = new_MethodClosure((Method)PMethod21756, Organization_RootPackage_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Organization_RootPackage_Class, SMB_ensurePackageNamed_, MC_SMB_ensurePackageNamed_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
<<<<<<< HEAD
    Array PArray21933 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitRootPackage_ = new_Symbol(L"visitRootPackage:");
    // visitRootPackage:. 
    Send PSend21935 = new_Send((Optr)VAR_visitor_0_0, SMB_visitRootPackage_, 1, (Optr)self);
    Array PThreadedCode21934 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21935, (Optr)&t_method_return);
    Method PMethod21932 = new_Method_with(PArray21933, empty_Array, empty_Array, PThreadedCode21934, 1, PSend21935);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod21932, Organization_RootPackage_Class);
=======
    Array PArray21765 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitRootPackage_ = new_Symbol(L"visitRootPackage:");
    // visitRootPackage:. 
    Send PSend21767 = new_Send((Optr)VAR_visitor_0_0, SMB_visitRootPackage_, 1, (Optr)self);
    Array PThreadedCode21766 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21767, (Optr)&t_method_return);
    Method PMethod21764 = new_Method_with(PArray21765, empty_Array, empty_Array, PThreadedCode21766, 1, PSend21767);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod21764, Organization_RootPackage_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Organization_RootPackage_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
<<<<<<< HEAD
    Array PArray21937 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_shortName = new_Symbol(L"shortName");
    // shortName. 
    Send PSend21939 = new_Send((Optr)self, SMB_shortName, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend21940 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21939);
    Array PThreadedCode21938 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21939, (Optr)&t_send1, (Optr)PSend21940, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21936 = new_Method_with(PArray21937, empty_Array, empty_Array, PThreadedCode21938, 2, PSend21940, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21936, Organization_RootPackage_Class);
=======
    Array PArray21769 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_shortName = new_Symbol(L"shortName");
    // shortName. 
    Send PSend21771 = new_Send((Optr)self, SMB_shortName, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend21772 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21771);
    Array PThreadedCode21770 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21771, (Optr)&t_send1, (Optr)PSend21772, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21768 = new_Method_with(PArray21769, empty_Array, empty_Array, PThreadedCode21770, 2, PSend21772, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21768, Organization_RootPackage_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Organization_RootPackage_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_packagesDo_() {
    Symbol SMB_packagesDo_ = new_Symbol(L"packagesDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
<<<<<<< HEAD
    Array PArray21942 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_element_1_0 = new_Variable_named(L"element", 1);
    Array PArray21945 = new_Array_with(1, (Optr)VAR_element_1_0);
    // packagesDo:. 
    Send PSend21947 = new_Send((Optr)VAR_element_1_0, SMB_packagesDo_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode21946 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_element_1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend21947, (Optr)&t_method_return);
    Block PBlock21944 = new_Block_with(PArray21945, empty_Array, PThreadedCode21946, 1, PSend21947);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend21948 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock21944);
    Array PThreadedCode21943 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock21944, (Optr)&t_send1, (Optr)PSend21948, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21941 = new_Method_with(PArray21942, empty_Array, empty_Array, PThreadedCode21943, 2, PSend21948, self);
    
    MethodClosure MC_SMB_packagesDo_ = new_MethodClosure((Method)PMethod21941, Organization_RootPackage_Class);
=======
    Array PArray21774 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_element_1_0 = new_Variable_named(L"element", 1);
    Array PArray21777 = new_Array_with(1, (Optr)VAR_element_1_0);
    // packagesDo:. 
    Send PSend21779 = new_Send((Optr)VAR_element_1_0, SMB_packagesDo_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode21778 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_element_1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend21779, (Optr)&t_method_return);
    Block PBlock21776 = new_Block_with(PArray21777, empty_Array, PThreadedCode21778, 1, PSend21779);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend21780 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock21776);
    Array PThreadedCode21775 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock21776, (Optr)&t_send1, (Optr)PSend21780, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21773 = new_Method_with(PArray21774, empty_Array, empty_Array, PThreadedCode21775, 2, PSend21780, self);
    
    MethodClosure MC_SMB_packagesDo_ = new_MethodClosure((Method)PMethod21773, Organization_RootPackage_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Organization_RootPackage_Class, SMB_packagesDo_, MC_SMB_packagesDo_);
}


<<<<<<< HEAD
static void init_SMB_shortName() {
    Symbol SMB_shortName = new_Symbol(L"shortName");
    Symbol  SMB_Pinocchio = new_Symbol(L"Pinocchio");
    Array PThreadedCode21950 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)SMB_Pinocchio, (Optr)&t_method_return);
    Constant SMB_Pinocchio_Const = new_Constant((Optr)SMB_Pinocchio);
    Method PMethod21949 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21950, 1, SMB_Pinocchio_Const);
    
    MethodClosure MC_SMB_shortName = new_MethodClosure((Method)PMethod21949, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_shortName, MC_SMB_shortName);
}


static void init_SMB_import_() {
    Symbol SMB_import_ = new_Symbol(L"import:");
    Variable VAR_package_0_0 = new_Variable_named(L"package", 0);
    Array PArray21952 = new_Array_with(1, (Optr)VAR_package_0_0);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray21955 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Array PThreadedCode21958 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_block_return);
    Block PBlock21957 = new_Block_with(empty_Array, empty_Array, PThreadedCode21958, 1, VAR_value_1_1);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend21959 = new_Send((Optr)slot_Organization_RootPackage_imports, SMB_at_ifAbsentPut_, 2, (Optr)VAR_key_1_0, (Optr)PBlock21957);
    Array PThreadedCode21956 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Organization_RootPackage_imports, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_closure, (Optr)PBlock21957, (Optr)&t_send2, (Optr)PSend21959, (Optr)&t_method_return);
    Block PBlock21954 = new_Block_with(PArray21955, empty_Array, PThreadedCode21956, 1, PSend21959);
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    // keysAndValuesDo:. 
    Send PSend21960 = new_Send((Optr)VAR_package_0_0, SMB_keysAndValuesDo_, 1, (Optr)PBlock21954);
    Array PThreadedCode21953 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_package_0_0, (Optr)&t_push_closure, (Optr)PBlock21954, (Optr)&t_send1, (Optr)PSend21960, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21951 = new_Method_with(PArray21952, empty_Array, empty_Array, PThreadedCode21953, 2, PSend21960, self);
    
    MethodClosure MC_SMB_import_ = new_MethodClosure((Method)PMethod21951, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_import_, MC_SMB_import_);
}


=======
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
static void init_SMB_lookupIn_at_() {
    Symbol SMB_lookupIn_at_ = new_Symbol(L"lookupIn:at:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
<<<<<<< HEAD
    Array PArray21962 = new_Array_with(2, (Optr)VAR_aCollection_0_0, (Optr)VAR_index_0_1);
    Variable VAR_subPackage_0_2 = new_Variable_named(L"subPackage", 0);
    Variable VAR_first_0_3 = new_Variable_named(L"first", 0);
    Array PArray21963 = new_Array_with(2, (Optr)VAR_subPackage_0_2, (Optr)VAR_first_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21966 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend21968 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend21969 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)PSend21968);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21973 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode21972 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21973, (Optr)&t_block_return);
    Block PBlock21971 = new_Block_with(empty_Array, empty_Array, PThreadedCode21972, 1, PSend21973);
    // ifTrue:. 
    Send PSend21970 = new_Send((Optr)PSend21969, SMB_ifTrue_, 1, (Optr)PBlock21971);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend21977 = new_Send((Optr)VAR_aCollection_0_0, SMB_at_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend21976 = new_Send((Optr)PSend21977, SMB_asSymbol, 0);
    // at:. 
    Send PSend21975 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend21976);
    Assign PAssign21974 = new_Assign((Optr)VAR_subPackage_0_2, (Optr)PSend21975);
    Symbol SMB_flagUndefinedPath_at_ = new_Symbol(L"flagUndefinedPath:at:");
    // flagUndefinedPath:at:. 
    Send PSend21980 = new_Send((Optr)self, SMB_flagUndefinedPath_at_, 2, (Optr)VAR_aCollection_0_0, (Optr)VAR_index_0_1);
    // escape:. 
    Send PSend21981 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend21980);
    Array PThreadedCode21979 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send2, (Optr)PSend21980, (Optr)&t_send1, (Optr)PSend21981, (Optr)&t_block_return);
    Block PBlock21978 = new_Block_with(empty_Array, empty_Array, PThreadedCode21979, 1, PSend21981);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend21982 = new_Send((Optr)VAR_subPackage_0_2, SMB_ifNil_, 1, (Optr)PBlock21978);
=======
    Array PArray21782 = new_Array_with(2, (Optr)VAR_aCollection_0_0, (Optr)VAR_index_0_1);
    Variable VAR_subPackage_0_2 = new_Variable_named(L"subPackage", 0);
    Variable VAR_first_0_3 = new_Variable_named(L"first", 0);
    Array PArray21783 = new_Array_with(2, (Optr)VAR_subPackage_0_2, (Optr)VAR_first_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21786 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend21788 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend21789 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)PSend21788);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21793 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode21792 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21793, (Optr)&t_block_return);
    Block PBlock21791 = new_Block_with(empty_Array, empty_Array, PThreadedCode21792, 1, PSend21793);
    // ifTrue:. 
    Send PSend21790 = new_Send((Optr)PSend21789, SMB_ifTrue_, 1, (Optr)PBlock21791);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend21797 = new_Send((Optr)VAR_aCollection_0_0, SMB_at_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend21796 = new_Send((Optr)PSend21797, SMB_asSymbol, 0);
    // at:. 
    Send PSend21795 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend21796);
    Assign PAssign21794 = new_Assign((Optr)VAR_subPackage_0_2, (Optr)PSend21795);
    Symbol SMB_flagUndefinedPath_at_ = new_Symbol(L"flagUndefinedPath:at:");
    // flagUndefinedPath:at:. 
    Send PSend21800 = new_Send((Optr)self, SMB_flagUndefinedPath_at_, 2, (Optr)VAR_aCollection_0_0, (Optr)VAR_index_0_1);
    // escape:. 
    Send PSend21801 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend21800);
    Array PThreadedCode21799 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send2, (Optr)PSend21800, (Optr)&t_send1, (Optr)PSend21801, (Optr)&t_block_return);
    Block PBlock21798 = new_Block_with(empty_Array, empty_Array, PThreadedCode21799, 1, PSend21801);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend21802 = new_Send((Optr)VAR_subPackage_0_2, SMB_ifNil_, 1, (Optr)PBlock21798);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
<<<<<<< HEAD
    Send PSend21983 = new_Send((Optr)VAR_index_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    // lookupIn:at:. 
    Send PSend21984 = new_Send((Optr)VAR_subPackage_0_2, SMB_lookupIn_at_, 2, (Optr)VAR_aCollection_0_0, (Optr)PSend21983);
    Array PThreadedCode21967 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend21968, (Optr)&t_send1, (Optr)PSend21969, (Optr)&t_send_ifTrue_, (Optr)PSend21970, (Optr)PBlock21971, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21974, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend21977, (Optr)&t_send0, (Optr)PSend21976, (Optr)&t_send1, (Optr)PSend21975, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_subPackage_0_2, (Optr)&t_push_closure, (Optr)PBlock21978, (Optr)&t_send1, (Optr)PSend21982, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_subPackage_0_2, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21983, (Optr)&t_send2, (Optr)PSend21984, (Optr)&t_method_return);
    Block PBlock21965 = new_Block_with(PArray21966, empty_Array, PThreadedCode21967, 4, PSend21970, PAssign21974, PSend21982, PSend21984);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21985 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21965);
    Array PThreadedCode21964 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21965, (Optr)&t_send1, (Optr)PSend21985, (Optr)&t_method_return);
    Method PMethod21961 = new_Method_with(PArray21962, PArray21963, empty_Array, PThreadedCode21964, 1, PSend21985);
    
    MethodClosure MC_SMB_lookupIn_at_ = new_MethodClosure((Method)PMethod21961, Organization_RootPackage_Class);
=======
    Send PSend21803 = new_Send((Optr)VAR_index_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    // lookupIn:at:. 
    Send PSend21804 = new_Send((Optr)VAR_subPackage_0_2, SMB_lookupIn_at_, 2, (Optr)VAR_aCollection_0_0, (Optr)PSend21803);
    Array PThreadedCode21787 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend21788, (Optr)&t_send1, (Optr)PSend21789, (Optr)&t_send_ifTrue_, (Optr)PSend21790, (Optr)PBlock21791, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21794, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend21797, (Optr)&t_send0, (Optr)PSend21796, (Optr)&t_send1, (Optr)PSend21795, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_subPackage_0_2, (Optr)&t_push_closure, (Optr)PBlock21798, (Optr)&t_send1, (Optr)PSend21802, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_subPackage_0_2, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21803, (Optr)&t_send2, (Optr)PSend21804, (Optr)&t_method_return);
    Block PBlock21785 = new_Block_with(PArray21786, empty_Array, PThreadedCode21787, 4, PSend21790, PAssign21794, PSend21802, PSend21804);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21805 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21785);
    Array PThreadedCode21784 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21785, (Optr)&t_send1, (Optr)PSend21805, (Optr)&t_method_return);
    Method PMethod21781 = new_Method_with(PArray21782, PArray21783, empty_Array, PThreadedCode21784, 1, PSend21805);
    
    MethodClosure MC_SMB_lookupIn_at_ = new_MethodClosure((Method)PMethod21781, Organization_RootPackage_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Organization_RootPackage_Class, SMB_lookupIn_at_, MC_SMB_lookupIn_at_);
}


static void init_SMB_flagUndefinedPath_at_() {
    Symbol SMB_flagUndefinedPath_at_ = new_Symbol(L"flagUndefinedPath:at:");
    Variable VAR_aPath_0_0 = new_Variable_named(L"aPath", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
<<<<<<< HEAD
    Array PArray21987 = new_Array_with(2, (Optr)VAR_aPath_0_0, (Optr)VAR_index_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21990 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_path_ = new_Symbol(L"path:");
    // path:. 
    Send PSend21992 = new_Send((Optr)VAR__receiver__1_0, SMB_path_, 1, (Optr)VAR_aPath_0_0);
    Symbol SMB_index_ = new_Symbol(L"index:");
    // index:. 
    Send PSend21993 = new_Send((Optr)VAR__receiver__1_0, SMB_index_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend21994 = new_Send((Optr)VAR__receiver__1_0, SMB_signal, 0);
    Array PThreadedCode21991 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_send1, (Optr)PSend21992, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend21993, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21994, (Optr)&t_method_return);
    Block PBlock21989 = new_Block_with(PArray21990, empty_Array, PThreadedCode21991, 3, PSend21992, PSend21993, PSend21994);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21995 = new_Send((Optr)PUndefinedPathReference_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21996 = new_Send((Optr)PBlock21989, SMB_value_, 1, (Optr)PSend21995);
    Array PThreadedCode21988 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock21989, (Optr)&t_push_class_reference, (Optr)PUndefinedPathReference_classReference, (Optr)&t_send0, (Optr)PSend21995, (Optr)&t_send1, (Optr)PSend21996, (Optr)&t_method_return);
    Method PMethod21986 = new_Method_with(PArray21987, empty_Array, empty_Array, PThreadedCode21988, 1, PSend21996);
    
    MethodClosure MC_SMB_flagUndefinedPath_at_ = new_MethodClosure((Method)PMethod21986, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_flagUndefinedPath_at_, MC_SMB_flagUndefinedPath_at_);
}


static void init_SMB_pathDo_separatedBy_() {
    Symbol SMB_pathDo_separatedBy_ = new_Symbol(L"pathDo:separatedBy:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Variable VAR_separator_0_1 = new_Variable_named(L"separator", 0);
    Array PArray21998 = new_Array_with(2, (Optr)VAR_block_0_0, (Optr)VAR_separator_0_1);
    Array PThreadedCode21999 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod21997 = new_Method_with(PArray21998, empty_Array, empty_Array, PThreadedCode21999, 1, self);
    
    MethodClosure MC_SMB_pathDo_separatedBy_ = new_MethodClosure((Method)PMethod21997, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_pathDo_separatedBy_, MC_SMB_pathDo_separatedBy_);
}

=======
    Array PArray21807 = new_Array_with(2, (Optr)VAR_aPath_0_0, (Optr)VAR_index_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21810 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_path_ = new_Symbol(L"path:");
    // path:. 
    Send PSend21812 = new_Send((Optr)VAR__receiver__1_0, SMB_path_, 1, (Optr)VAR_aPath_0_0);
    Symbol SMB_index_ = new_Symbol(L"index:");
    // index:. 
    Send PSend21813 = new_Send((Optr)VAR__receiver__1_0, SMB_index_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend21814 = new_Send((Optr)VAR__receiver__1_0, SMB_signal, 0);
    Array PThreadedCode21811 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_send1, (Optr)PSend21812, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend21813, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21814, (Optr)&t_method_return);
    Block PBlock21809 = new_Block_with(PArray21810, empty_Array, PThreadedCode21811, 3, PSend21812, PSend21813, PSend21814);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21815 = new_Send((Optr)PUndefinedPathReference_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21816 = new_Send((Optr)PBlock21809, SMB_value_, 1, (Optr)PSend21815);
    Array PThreadedCode21808 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock21809, (Optr)&t_push_class_reference, (Optr)PUndefinedPathReference_classReference, (Optr)&t_send0, (Optr)PSend21815, (Optr)&t_send1, (Optr)PSend21816, (Optr)&t_method_return);
    Method PMethod21806 = new_Method_with(PArray21807, empty_Array, empty_Array, PThreadedCode21808, 1, PSend21816);
    
    MethodClosure MC_SMB_flagUndefinedPath_at_ = new_MethodClosure((Method)PMethod21806, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_flagUndefinedPath_at_, MC_SMB_flagUndefinedPath_at_);
}

>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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