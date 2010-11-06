#include <lib/class/Organization/RootPackage.h>


Optr layout_Organization_RootPackage_Class_class;
Optr slot_Organization_RootPackage_imports;
Optr layout_Organization_RootPackage;


static void init_SMB_root() {
    Symbol SMB_root = new_Symbol(L"root");
    Array PThreadedCode21468 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod21467 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21468, 1, self);
    
    MethodClosure MC_SMB_root = new_MethodClosure((Method)PMethod21467, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_root, MC_SMB_root);
}


static void init_SMB_isRoot() {
    Symbol SMB_isRoot = new_Symbol(L"isRoot");
    Array PThreadedCode21470 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod21469 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21470, 1, true_Const);
    
    MethodClosure MC_SMB_isRoot = new_MethodClosure((Method)PMethod21469, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_isRoot, MC_SMB_isRoot);
}


static void init_SMB_findPackageName_() {
    Symbol SMB_findPackageName_ = new_Symbol(L"findPackageName:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
    Array PArray21472 = new_Array_with(1, (Optr)VAR_aName_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21475 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_shortName = new_Symbol(L"shortName");
    // shortName. 
    Send PSend21477 = new_Send((Optr)self, SMB_shortName, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend21478 = new_Send((Optr)PSend21477, SMB__pequals_, 1, (Optr)VAR_aName_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21482 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode21481 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21482, (Optr)&t_block_return);
    Block PBlock21480 = new_Block_with(empty_Array, empty_Array, PThreadedCode21481, 1, PSend21482);
    // ifTrue:. 
    Send PSend21479 = new_Send((Optr)PSend21478, SMB_ifTrue_, 1, (Optr)PBlock21480);
    Array PThreadedCode21476 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21477, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend21478, (Optr)&t_send_ifTrue_, (Optr)PSend21479, (Optr)PBlock21480, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Block PBlock21474 = new_Block_with(PArray21475, empty_Array, PThreadedCode21476, 2, PSend21479, nil_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21483 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21474);
    Array PThreadedCode21473 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21474, (Optr)&t_send1, (Optr)PSend21483, (Optr)&t_method_return);
    Method PMethod21471 = new_Method_with(PArray21472, empty_Array, empty_Array, PThreadedCode21473, 1, PSend21483);
    
    MethodClosure MC_SMB_findPackageName_ = new_MethodClosure((Method)PMethod21471, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_findPackageName_, MC_SMB_findPackageName_);
}


static void init_SMB_lookup_() {
    Symbol SMB_lookup_ = new_Symbol(L"lookup:");
    Variable VAR_aPath_0_0 = new_Variable_named(L"aPath", 0);
    Array PArray21485 = new_Array_with(1, (Optr)VAR_aPath_0_0);
    Variable VAR_package_0_1 = new_Variable_named(L"package", 0);
    Array PArray21486 = new_Array_with(1, (Optr)VAR_package_0_1);
    Symbol SMB_findName_ifAbsent_ = new_Symbol(L"findName:ifAbsent:");
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend21491 = new_Send((Optr)VAR_aPath_0_0, SMB_first, 0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend21490 = new_Send((Optr)PSend21491, SMB_asSymbol, 0);
    Symbol SMB_flagUndefinedPath_at_ = new_Symbol(L"flagUndefinedPath:at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // flagUndefinedPath:at:. 
    Send PSend21494 = new_Send((Optr)self, SMB_flagUndefinedPath_at_, 2, (Optr)VAR_aPath_0_0, (Optr)int_1_Const);
    Array PThreadedCode21493 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_push_1, (Optr)&t_send2, (Optr)PSend21494, (Optr)&t_block_return);
    Block PBlock21492 = new_Block_with(empty_Array, empty_Array, PThreadedCode21493, 1, PSend21494);
    // findName:ifAbsent:. 
    Send PSend21489 = new_Send((Optr)self, SMB_findName_ifAbsent_, 2, (Optr)PSend21490, (Optr)PBlock21492);
    Assign PAssign21488 = new_Assign((Optr)VAR_package_0_1, (Optr)PSend21489);
    Symbol SMB_lookupIn_at_ = new_Symbol(L"lookupIn:at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // lookupIn:at:. 
    Send PSend21495 = new_Send((Optr)VAR_package_0_1, SMB_lookupIn_at_, 2, (Optr)VAR_aPath_0_0, (Optr)int_2_Const);
    Array PThreadedCode21487 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign21488, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_send0, (Optr)PSend21491, (Optr)&t_send0, (Optr)PSend21490, (Optr)&t_push_closure, (Optr)PBlock21492, (Optr)&t_send2, (Optr)PSend21489, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_package_0_1, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_push_2, (Optr)&t_send2, (Optr)PSend21495, (Optr)&t_method_return);
    Method PMethod21484 = new_Method_with(PArray21485, PArray21486, empty_Array, PThreadedCode21487, 2, PAssign21488, PSend21495);
    
    MethodClosure MC_SMB_lookup_ = new_MethodClosure((Method)PMethod21484, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_lookup_, MC_SMB_lookup_);
}


static void init_SMB_ensureClassReferenceFor_() {
    Symbol SMB_ensureClassReferenceFor_ = new_Symbol(L"ensureClassReferenceFor:");
    Variable VAR_aPinocchioClass_0_0 = new_Variable_named(L"aPinocchioClass", 0);
    Array PArray21497 = new_Array_with(1, (Optr)VAR_aPinocchioClass_0_0);
    Variable VAR_reference_0_1 = new_Variable_named(L"reference", 0);
    Array PArray21498 = new_Array_with(1, (Optr)VAR_reference_0_1);
    Symbol SMB_ensureClassReference_ = new_Symbol(L"ensureClassReference:");
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend21502 = new_Send((Optr)VAR_aPinocchioClass_0_0, SMB_name, 0);
    // ensureClassReference:. 
    Send PSend21501 = new_Send((Optr)self, SMB_ensureClassReference_, 1, (Optr)PSend21502);
    Assign PAssign21500 = new_Assign((Optr)VAR_reference_0_1, (Optr)PSend21501);
    Symbol SMB_ensurePinocchioClass_ = new_Symbol(L"ensurePinocchioClass:");
    // ensurePinocchioClass:. 
    Send PSend21503 = new_Send((Optr)VAR_reference_0_1, SMB_ensurePinocchioClass_, 1, (Optr)VAR_aPinocchioClass_0_0);
    Symbol SMB_package_ = new_Symbol(L"package:");
    // package:. 
    Send PSend21504 = new_Send((Optr)VAR_aPinocchioClass_0_0, SMB_package_, 1, (Optr)self);
    Array PThreadedCode21499 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign21500, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_send0, (Optr)PSend21502, (Optr)&t_send1, (Optr)PSend21501, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_reference_0_1, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_send1, (Optr)PSend21503, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21504, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_reference_0_1, (Optr)&t_method_return);
    Method PMethod21496 = new_Method_with(PArray21497, PArray21498, empty_Array, PThreadedCode21499, 4, PAssign21500, PSend21503, PSend21504, VAR_reference_0_1);
    
    MethodClosure MC_SMB_ensureClassReferenceFor_ = new_MethodClosure((Method)PMethod21496, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_ensureClassReferenceFor_, MC_SMB_ensureClassReferenceFor_);
}


static void init_SMB_ensurePath_() {
    Symbol SMB_ensurePath_ = new_Symbol(L"ensurePath:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray21506 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_package_0_1 = new_Variable_named(L"package", 0);
    Array PArray21507 = new_Array_with(1, (Optr)VAR_package_0_1);
    Assign PAssign21509 = new_Assign((Optr)VAR_package_0_1, (Optr)self);
    Variable VAR_segment_1_0 = new_Variable_named(L"segment", 1);
    Array PArray21511 = new_Array_with(1, (Optr)VAR_segment_1_0);
    Symbol SMB_ensurePackageNamed_ = new_Symbol(L"ensurePackageNamed:");
    // ensurePackageNamed:. 
    Send PSend21514 = new_Send((Optr)VAR_package_0_1, SMB_ensurePackageNamed_, 1, (Optr)VAR_segment_1_0);
    Assign PAssign21513 = new_Assign((Optr)VAR_package_0_1, (Optr)PSend21514);
    Array PThreadedCode21512 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign21513, (Optr)&t_push_variable, (Optr)VAR_package_0_1, (Optr)&t_push_variable, (Optr)VAR_segment_1_0, (Optr)&t_send1, (Optr)PSend21514, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock21510 = new_Block_with(PArray21511, empty_Array, PThreadedCode21512, 1, PAssign21513);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend21515 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock21510);
    Array PThreadedCode21508 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign21509, (Optr)&t_push_self, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock21510, (Optr)&t_send1, (Optr)PSend21515, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_package_0_1, (Optr)&t_method_return);
    Method PMethod21505 = new_Method_with(PArray21506, PArray21507, empty_Array, PThreadedCode21508, 3, PAssign21509, PSend21515, VAR_package_0_1);
    
    MethodClosure MC_SMB_ensurePath_ = new_MethodClosure((Method)PMethod21505, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_ensurePath_, MC_SMB_ensurePath_);
}


static void init_SMB_asNode() {
    Symbol SMB_asNode = new_Symbol(L"asNode");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend21518 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)self);
    Array PThreadedCode21517 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21518, (Optr)&t_method_return);
    Method PMethod21516 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21517, 1, PSend21518);
    
    MethodClosure MC_SMB_asNode = new_MethodClosure((Method)PMethod21516, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_asNode, MC_SMB_asNode);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper21521 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21523 = new_Send((Optr)IdentityDictionary_classReference, SMB_new, 0);
    Assign PAssign21522 = new_Assign((Optr)slot_Organization_RootPackage_imports, (Optr)PSend21523);
    Array PThreadedCode21520 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper21521, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21522, (Optr)&t_push_class_reference, (Optr)IdentityDictionary_classReference, (Optr)&t_send0, (Optr)PSend21523, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21519 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21520, 3, PSuper21521, PAssign21522, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod21519, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_findName_ifAbsent_() {
    Symbol SMB_findName_ifAbsent_ = new_Symbol(L"findName:ifAbsent:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Array PArray21525 = new_Array_with(2, (Optr)VAR_aName_0_0, (Optr)VAR_block_0_1);
    Variable VAR_returnBlock_0_2 = new_Variable_named(L"returnBlock", 0);
    Array PArray21526 = new_Array_with(1, (Optr)VAR_returnBlock_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21529 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_value_2_0 = new_Variable_named(L"value", 2);
    Array PArray21533 = new_Array_with(1, (Optr)VAR_value_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21535 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_2_0);
    Array PThreadedCode21534 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_2_0, (Optr)&t_send1, (Optr)PSend21535, (Optr)&t_method_return);
    Block PBlock21532 = new_Block_with(PArray21533, empty_Array, PThreadedCode21534, 1, PSend21535);
    Assign PAssign21531 = new_Assign((Optr)VAR_returnBlock_0_2, (Optr)PBlock21532);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    // at:ifPresent:. 
    Send PSend21536 = new_Send((Optr)self, SMB_at_ifPresent_, 2, (Optr)VAR_aName_0_0, (Optr)VAR_returnBlock_0_2);
    Symbol SMB_shortName = new_Symbol(L"shortName");
    // shortName. 
    Send PSend21537 = new_Send((Optr)self, SMB_shortName, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend21538 = new_Send((Optr)PSend21537, SMB__pequals_, 1, (Optr)VAR_aName_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend21542 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode21541 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21542, (Optr)&t_block_return);
    Block PBlock21540 = new_Block_with(empty_Array, empty_Array, PThreadedCode21541, 1, PSend21542);
    // ifTrue:. 
    Send PSend21539 = new_Send((Optr)PSend21538, SMB_ifTrue_, 1, (Optr)PBlock21540);
    // at:ifPresent:. 
    Send PSend21543 = new_Send((Optr)slot_Organization_RootPackage_imports, SMB_at_ifPresent_, 2, (Optr)VAR_aName_0_0, (Optr)VAR_returnBlock_0_2);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend21544 = new_Send((Optr)VAR_block_0_1, SMB_value, 0);
    Array PThreadedCode21530 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign21531, (Optr)&t_push_closure, (Optr)PBlock21532, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_push_variable, (Optr)VAR_returnBlock_0_2, (Optr)&t_send2, (Optr)PSend21536, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21537, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend21538, (Optr)&t_send_ifTrue_, (Optr)PSend21539, (Optr)PBlock21540, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_RootPackage_imports, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_push_variable, (Optr)VAR_returnBlock_0_2, (Optr)&t_send2, (Optr)PSend21543, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_send0, (Optr)PSend21544, (Optr)&t_method_return);
    Block PBlock21528 = new_Block_with(PArray21529, empty_Array, PThreadedCode21530, 5, PAssign21531, PSend21536, PSend21539, PSend21543, PSend21544);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21545 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21528);
    Array PThreadedCode21527 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21528, (Optr)&t_send1, (Optr)PSend21545, (Optr)&t_method_return);
    Method PMethod21524 = new_Method_with(PArray21525, PArray21526, empty_Array, PThreadedCode21527, 1, PSend21545);
    
    MethodClosure MC_SMB_findName_ifAbsent_ = new_MethodClosure((Method)PMethod21524, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_findName_ifAbsent_, MC_SMB_findName_ifAbsent_);
}


static void init_SMB_ensureClassReference_() {
    Symbol SMB_ensureClassReference_ = new_Symbol(L"ensureClassReference:");
    Variable VAR_aNameSymbol_0_0 = new_Variable_named(L"aNameSymbol", 0);
    Array PArray21547 = new_Array_with(1, (Optr)VAR_aNameSymbol_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend21549 = new_Send((Optr)VAR_aNameSymbol_0_0, SMB_asSymbol, 0);
    Symbol SMB_in_ = new_Symbol(L"in:");
    // in:. 
    Send PSend21552 = new_Send((Optr)PClassReference_classReference, SMB_in_, 1, (Optr)self);
    Array PThreadedCode21551 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PClassReference_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21552, (Optr)&t_block_return);
    Block PBlock21550 = new_Block_with(empty_Array, empty_Array, PThreadedCode21551, 1, PSend21552);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend21553 = new_Send((Optr)self, SMB_at_ifAbsentPut_, 2, (Optr)PSend21549, (Optr)PBlock21550);
    Array PThreadedCode21548 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNameSymbol_0_0, (Optr)&t_send0, (Optr)PSend21549, (Optr)&t_push_closure, (Optr)PBlock21550, (Optr)&t_send2, (Optr)PSend21553, (Optr)&t_method_return);
    Method PMethod21546 = new_Method_with(PArray21547, empty_Array, empty_Array, PThreadedCode21548, 1, PSend21553);
    
    MethodClosure MC_SMB_ensureClassReference_ = new_MethodClosure((Method)PMethod21546, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_ensureClassReference_, MC_SMB_ensureClassReference_);
}


static void init_SMB_ensurePackageNamed_() {
    Symbol SMB_ensurePackageNamed_ = new_Symbol(L"ensurePackageNamed:");
    Variable VAR_aPinocchioSymbol_0_0 = new_Variable_named(L"aPinocchioSymbol", 0);
    Array PArray21555 = new_Array_with(1, (Optr)VAR_aPinocchioSymbol_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend21557 = new_Send((Optr)VAR_aPinocchioSymbol_0_0, SMB_asSymbol, 0);
    Symbol SMB_named_in_ = new_Symbol(L"named:in:");
    // named:in:. 
    Send PSend21560 = new_Send((Optr)PPackage_classReference, SMB_named_in_, 2, (Optr)VAR_aPinocchioSymbol_0_0, (Optr)self);
    Array PThreadedCode21559 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)PPackage_classReference, (Optr)&t_push_variable, (Optr)VAR_aPinocchioSymbol_0_0, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend21560, (Optr)&t_block_return);
    Block PBlock21558 = new_Block_with(empty_Array, empty_Array, PThreadedCode21559, 1, PSend21560);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend21561 = new_Send((Optr)self, SMB_at_ifAbsentPut_, 2, (Optr)PSend21557, (Optr)PBlock21558);
    Array PThreadedCode21556 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPinocchioSymbol_0_0, (Optr)&t_send0, (Optr)PSend21557, (Optr)&t_push_closure, (Optr)PBlock21558, (Optr)&t_send2, (Optr)PSend21561, (Optr)&t_method_return);
    Method PMethod21554 = new_Method_with(PArray21555, empty_Array, empty_Array, PThreadedCode21556, 1, PSend21561);
    
    MethodClosure MC_SMB_ensurePackageNamed_ = new_MethodClosure((Method)PMethod21554, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_ensurePackageNamed_, MC_SMB_ensurePackageNamed_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray21563 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitRootPackage_ = new_Symbol(L"visitRootPackage:");
    // visitRootPackage:. 
    Send PSend21565 = new_Send((Optr)VAR_visitor_0_0, SMB_visitRootPackage_, 1, (Optr)self);
    Array PThreadedCode21564 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21565, (Optr)&t_method_return);
    Method PMethod21562 = new_Method_with(PArray21563, empty_Array, empty_Array, PThreadedCode21564, 1, PSend21565);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod21562, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21567 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_shortName = new_Symbol(L"shortName");
    // shortName. 
    Send PSend21569 = new_Send((Optr)self, SMB_shortName, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend21570 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21569);
    Array PThreadedCode21568 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21569, (Optr)&t_send1, (Optr)PSend21570, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21566 = new_Method_with(PArray21567, empty_Array, empty_Array, PThreadedCode21568, 2, PSend21570, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21566, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_packagesDo_() {
    Symbol SMB_packagesDo_ = new_Symbol(L"packagesDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray21572 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_element_1_0 = new_Variable_named(L"element", 1);
    Array PArray21575 = new_Array_with(1, (Optr)VAR_element_1_0);
    // packagesDo:. 
    Send PSend21577 = new_Send((Optr)VAR_element_1_0, SMB_packagesDo_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode21576 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_element_1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend21577, (Optr)&t_method_return);
    Block PBlock21574 = new_Block_with(PArray21575, empty_Array, PThreadedCode21576, 1, PSend21577);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend21578 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock21574);
    Array PThreadedCode21573 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock21574, (Optr)&t_send1, (Optr)PSend21578, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21571 = new_Method_with(PArray21572, empty_Array, empty_Array, PThreadedCode21573, 2, PSend21578, self);
    
    MethodClosure MC_SMB_packagesDo_ = new_MethodClosure((Method)PMethod21571, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_packagesDo_, MC_SMB_packagesDo_);
}


static void init_SMB_shortName() {
    Symbol SMB_shortName = new_Symbol(L"shortName");
    Symbol  SMB_Pinocchio = new_Symbol(L"Pinocchio");
    Array PThreadedCode21580 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)SMB_Pinocchio, (Optr)&t_method_return);
    Constant SMB_Pinocchio_Const = new_Constant((Optr)SMB_Pinocchio);
    Method PMethod21579 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21580, 1, SMB_Pinocchio_Const);
    
    MethodClosure MC_SMB_shortName = new_MethodClosure((Method)PMethod21579, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_shortName, MC_SMB_shortName);
}


static void init_SMB_import_() {
    Symbol SMB_import_ = new_Symbol(L"import:");
    Variable VAR_package_0_0 = new_Variable_named(L"package", 0);
    Array PArray21582 = new_Array_with(1, (Optr)VAR_package_0_0);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray21585 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Array PThreadedCode21588 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_block_return);
    Block PBlock21587 = new_Block_with(empty_Array, empty_Array, PThreadedCode21588, 1, VAR_value_1_1);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend21589 = new_Send((Optr)slot_Organization_RootPackage_imports, SMB_at_ifAbsentPut_, 2, (Optr)VAR_key_1_0, (Optr)PBlock21587);
    Array PThreadedCode21586 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Organization_RootPackage_imports, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_closure, (Optr)PBlock21587, (Optr)&t_send2, (Optr)PSend21589, (Optr)&t_method_return);
    Block PBlock21584 = new_Block_with(PArray21585, empty_Array, PThreadedCode21586, 1, PSend21589);
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    // keysAndValuesDo:. 
    Send PSend21590 = new_Send((Optr)VAR_package_0_0, SMB_keysAndValuesDo_, 1, (Optr)PBlock21584);
    Array PThreadedCode21583 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_package_0_0, (Optr)&t_push_closure, (Optr)PBlock21584, (Optr)&t_send1, (Optr)PSend21590, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21581 = new_Method_with(PArray21582, empty_Array, empty_Array, PThreadedCode21583, 2, PSend21590, self);
    
    MethodClosure MC_SMB_import_ = new_MethodClosure((Method)PMethod21581, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_import_, MC_SMB_import_);
}


static void init_SMB_lookupIn_at_() {
    Symbol SMB_lookupIn_at_ = new_Symbol(L"lookupIn:at:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray21592 = new_Array_with(2, (Optr)VAR_aCollection_0_0, (Optr)VAR_index_0_1);
    Variable VAR_subPackage_0_2 = new_Variable_named(L"subPackage", 0);
    Variable VAR_first_0_3 = new_Variable_named(L"first", 0);
    Array PArray21593 = new_Array_with(2, (Optr)VAR_subPackage_0_2, (Optr)VAR_first_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21596 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend21598 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend21599 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)PSend21598);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21603 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode21602 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21603, (Optr)&t_block_return);
    Block PBlock21601 = new_Block_with(empty_Array, empty_Array, PThreadedCode21602, 1, PSend21603);
    // ifTrue:. 
    Send PSend21600 = new_Send((Optr)PSend21599, SMB_ifTrue_, 1, (Optr)PBlock21601);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend21607 = new_Send((Optr)VAR_aCollection_0_0, SMB_at_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend21606 = new_Send((Optr)PSend21607, SMB_asSymbol, 0);
    // at:. 
    Send PSend21605 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend21606);
    Assign PAssign21604 = new_Assign((Optr)VAR_subPackage_0_2, (Optr)PSend21605);
    Symbol SMB_flagUndefinedPath_at_ = new_Symbol(L"flagUndefinedPath:at:");
    // flagUndefinedPath:at:. 
    Send PSend21610 = new_Send((Optr)self, SMB_flagUndefinedPath_at_, 2, (Optr)VAR_aCollection_0_0, (Optr)VAR_index_0_1);
    // escape:. 
    Send PSend21611 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend21610);
    Array PThreadedCode21609 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send2, (Optr)PSend21610, (Optr)&t_send1, (Optr)PSend21611, (Optr)&t_block_return);
    Block PBlock21608 = new_Block_with(empty_Array, empty_Array, PThreadedCode21609, 1, PSend21611);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend21612 = new_Send((Optr)VAR_subPackage_0_2, SMB_ifNil_, 1, (Optr)PBlock21608);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend21613 = new_Send((Optr)VAR_index_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    // lookupIn:at:. 
    Send PSend21614 = new_Send((Optr)VAR_subPackage_0_2, SMB_lookupIn_at_, 2, (Optr)VAR_aCollection_0_0, (Optr)PSend21613);
    Array PThreadedCode21597 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend21598, (Optr)&t_send1, (Optr)PSend21599, (Optr)&t_send_ifTrue_, (Optr)PSend21600, (Optr)PBlock21601, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21604, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend21607, (Optr)&t_send0, (Optr)PSend21606, (Optr)&t_send1, (Optr)PSend21605, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_subPackage_0_2, (Optr)&t_push_closure, (Optr)PBlock21608, (Optr)&t_send1, (Optr)PSend21612, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_subPackage_0_2, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21613, (Optr)&t_send2, (Optr)PSend21614, (Optr)&t_method_return);
    Block PBlock21595 = new_Block_with(PArray21596, empty_Array, PThreadedCode21597, 4, PSend21600, PAssign21604, PSend21612, PSend21614);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21615 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21595);
    Array PThreadedCode21594 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21595, (Optr)&t_send1, (Optr)PSend21615, (Optr)&t_method_return);
    Method PMethod21591 = new_Method_with(PArray21592, PArray21593, empty_Array, PThreadedCode21594, 1, PSend21615);
    
    MethodClosure MC_SMB_lookupIn_at_ = new_MethodClosure((Method)PMethod21591, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_lookupIn_at_, MC_SMB_lookupIn_at_);
}


static void init_SMB_flagUndefinedPath_at_() {
    Symbol SMB_flagUndefinedPath_at_ = new_Symbol(L"flagUndefinedPath:at:");
    Variable VAR_aPath_0_0 = new_Variable_named(L"aPath", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray21617 = new_Array_with(2, (Optr)VAR_aPath_0_0, (Optr)VAR_index_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21620 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_path_ = new_Symbol(L"path:");
    // path:. 
    Send PSend21622 = new_Send((Optr)VAR__receiver__1_0, SMB_path_, 1, (Optr)VAR_aPath_0_0);
    Symbol SMB_index_ = new_Symbol(L"index:");
    // index:. 
    Send PSend21623 = new_Send((Optr)VAR__receiver__1_0, SMB_index_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend21624 = new_Send((Optr)VAR__receiver__1_0, SMB_signal, 0);
    Array PThreadedCode21621 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_send1, (Optr)PSend21622, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend21623, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21624, (Optr)&t_method_return);
    Block PBlock21619 = new_Block_with(PArray21620, empty_Array, PThreadedCode21621, 3, PSend21622, PSend21623, PSend21624);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21625 = new_Send((Optr)PUndefinedPathReference_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21626 = new_Send((Optr)PBlock21619, SMB_value_, 1, (Optr)PSend21625);
    Array PThreadedCode21618 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock21619, (Optr)&t_push_class_reference, (Optr)PUndefinedPathReference_classReference, (Optr)&t_send0, (Optr)PSend21625, (Optr)&t_send1, (Optr)PSend21626, (Optr)&t_method_return);
    Method PMethod21616 = new_Method_with(PArray21617, empty_Array, empty_Array, PThreadedCode21618, 1, PSend21626);
    
    MethodClosure MC_SMB_flagUndefinedPath_at_ = new_MethodClosure((Method)PMethod21616, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_flagUndefinedPath_at_, MC_SMB_flagUndefinedPath_at_);
}


static void init_SMB_pathDo_separatedBy_() {
    Symbol SMB_pathDo_separatedBy_ = new_Symbol(L"pathDo:separatedBy:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Variable VAR_separator_0_1 = new_Variable_named(L"separator", 0);
    Array PArray21628 = new_Array_with(2, (Optr)VAR_block_0_0, (Optr)VAR_separator_0_1);
    Array PThreadedCode21629 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod21627 = new_Method_with(PArray21628, empty_Array, empty_Array, PThreadedCode21629, 1, self);
    
    MethodClosure MC_SMB_pathDo_separatedBy_ = new_MethodClosure((Method)PMethod21627, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_pathDo_separatedBy_, MC_SMB_pathDo_separatedBy_);
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
    init_SMB_ensureClassReferenceFor_();
    init_SMB_ensurePath_();
    init_SMB_asNode();
    init_SMB_initialize();
    init_SMB_findName_ifAbsent_();
    init_SMB_ensureClassReference_();
    init_SMB_ensurePackageNamed_();
    init_SMB_accept_();
    init_SMB_printOn_();
    init_SMB_packagesDo_();
    init_SMB_shortName();
    init_SMB_import_();
    init_SMB_lookupIn_at_();
    init_SMB_flagUndefinedPath_at_();
    init_SMB_pathDo_separatedBy_();
    
}