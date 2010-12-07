#include <lib/class/Organization/Package.h>


Optr layout_Organization_Package_Class_class;
Optr slot_Organization_Package_parent;
Optr slot_Organization_Package_name;
Optr layout_Organization_Package;


static void init_SMB_root() {
    Symbol SMB_root = new_Symbol(L"root");
    // root. 
    Send PSend22131 = new_Send((Optr)slot_Organization_Package_parent, SMB_root, 0);
    Array PThreadedCode22130 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_send0, (Optr)PSend22131, (Optr)&t_method_return);
    Method PMethod22129 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22130, 1, PSend22131);
    
    MethodClosure MC_SMB_root = new_MethodClosure((Method)PMethod22129, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_root, MC_SMB_root);
}


static void init_SMB_findPackageName_() {
    Symbol SMB_findPackageName_ = new_Symbol(L"findPackageName:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
    Array PArray22133 = new_Array_with(1, (Optr)VAR_aName_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22136 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend22138 = new_Send((Optr)slot_Organization_Package_name, SMB__equals_, 1, (Optr)VAR_aName_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22142 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode22141 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22142, (Optr)&t_block_return);
    Block PBlock22140 = new_Block_with(empty_Array, empty_Array, PThreadedCode22141, 1, PSend22142);
    // ifTrue:. 
    Send PSend22139 = new_Send((Optr)PSend22138, SMB_ifTrue_, 1, (Optr)PBlock22140);
    // findPackageName:. 
    Send PSend22143 = new_Send((Optr)slot_Organization_Package_parent, SMB_findPackageName_, 1, (Optr)VAR_aName_0_0);
    Array PThreadedCode22137 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Organization_Package_name, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend22138, (Optr)&t_send_ifTrue_, (Optr)PSend22139, (Optr)PBlock22140, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend22143, (Optr)&t_method_return);
    Block PBlock22135 = new_Block_with(PArray22136, empty_Array, PThreadedCode22137, 2, PSend22139, PSend22143);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22144 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22135);
    Array PThreadedCode22134 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22135, (Optr)&t_send1, (Optr)PSend22144, (Optr)&t_method_return);
    Method PMethod22132 = new_Method_with(PArray22133, empty_Array, empty_Array, PThreadedCode22134, 1, PSend22144);
    
    MethodClosure MC_SMB_findPackageName_ = new_MethodClosure((Method)PMethod22132, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_findPackageName_, MC_SMB_findPackageName_);
}


static void init_SMB_parent_() {
    Symbol SMB_parent_ = new_Symbol(L"parent:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray22146 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign22148 = new_Assign((Optr)slot_Organization_Package_parent, (Optr)VAR_anObject_0_0);
    Array PThreadedCode22147 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22148, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22145 = new_Method_with(PArray22146, empty_Array, empty_Array, PThreadedCode22147, 2, PAssign22148, self);
    
    MethodClosure MC_SMB_parent_ = new_MethodClosure((Method)PMethod22145, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_parent_, MC_SMB_parent_);
}


static void init_SMB_isRoot() {
    Symbol SMB_isRoot = new_Symbol(L"isRoot");
    Array PThreadedCode22150 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_false);
    Method PMethod22149 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22150, 1, false_Const);
    
    MethodClosure MC_SMB_isRoot = new_MethodClosure((Method)PMethod22149, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_isRoot, MC_SMB_isRoot);
}


static void init_SMB_ensurePath_() {
    Symbol SMB_ensurePath_ = new_Symbol(L"ensurePath:");
    Variable VAR_aPath_0_0 = new_Variable_named(L"aPath", 0);
    Array PArray22152 = new_Array_with(1, (Optr)VAR_aPath_0_0);
    // ensurePath:. 
    Send PSend22154 = new_Send((Optr)slot_Organization_Package_parent, SMB_ensurePath_, 1, (Optr)VAR_aPath_0_0);
    Array PThreadedCode22153 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_send1, (Optr)PSend22154, (Optr)&t_method_return);
    Method PMethod22151 = new_Method_with(PArray22152, empty_Array, empty_Array, PThreadedCode22153, 1, PSend22154);
    
    MethodClosure MC_SMB_ensurePath_ = new_MethodClosure((Method)PMethod22151, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_ensurePath_, MC_SMB_ensurePath_);
}


static void init_SMB_findName_ifAbsent_() {
    Symbol SMB_findName_ifAbsent_ = new_Symbol(L"findName:ifAbsent:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Array PArray22156 = new_Array_with(2, (Optr)VAR_aName_0_0, (Optr)VAR_block_0_1);
    Variable VAR_returnBlock_0_2 = new_Variable_named(L"returnBlock", 0);
    Array PArray22157 = new_Array_with(1, (Optr)VAR_returnBlock_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22160 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_value_2_0 = new_Variable_named(L"value", 2);
    Array PArray22164 = new_Array_with(1, (Optr)VAR_value_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22166 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_2_0);
    Array PThreadedCode22165 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_2_0, (Optr)&t_send1, (Optr)PSend22166, (Optr)&t_method_return);
    Block PBlock22163 = new_Block_with(PArray22164, empty_Array, PThreadedCode22165, 1, PSend22166);
    Assign PAssign22162 = new_Assign((Optr)VAR_returnBlock_0_2, (Optr)PBlock22163);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    // at:ifPresent:. 
    Send PSend22167 = new_Send((Optr)self, SMB_at_ifPresent_, 2, (Optr)VAR_aName_0_0, (Optr)VAR_returnBlock_0_2);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend22168 = new_Send((Optr)slot_Organization_Package_name, SMB__pequals_, 1, (Optr)VAR_aName_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend22172 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode22171 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22172, (Optr)&t_block_return);
    Block PBlock22170 = new_Block_with(empty_Array, empty_Array, PThreadedCode22171, 1, PSend22172);
    // ifTrue:. 
    Send PSend22169 = new_Send((Optr)PSend22168, SMB_ifTrue_, 1, (Optr)PBlock22170);
    // at:ifPresent:. 
    Send PSend22173 = new_Send((Optr)slot_Organization_RootPackage_imports, SMB_at_ifPresent_, 2, (Optr)VAR_aName_0_0, (Optr)VAR_returnBlock_0_2);
    // findName:ifAbsent:. 
    Send PSend22174 = new_Send((Optr)slot_Organization_Package_parent, SMB_findName_ifAbsent_, 2, (Optr)VAR_aName_0_0, (Optr)VAR_block_0_1);
    Array PThreadedCode22161 = instantiate_Array_with(ThreadedCode_Class, 0, 42, (Optr)&t_push1, (Optr)PAssign22162, (Optr)&t_push_closure, (Optr)PBlock22163, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_push_variable, (Optr)VAR_returnBlock_0_2, (Optr)&t_send2, (Optr)PSend22167, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_Package_name, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend22168, (Optr)&t_send_ifTrue_, (Optr)PSend22169, (Optr)PBlock22170, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_RootPackage_imports, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_push_variable, (Optr)VAR_returnBlock_0_2, (Optr)&t_send2, (Optr)PSend22173, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_send2, (Optr)PSend22174, (Optr)&t_method_return);
    Block PBlock22159 = new_Block_with(PArray22160, empty_Array, PThreadedCode22161, 5, PAssign22162, PSend22167, PSend22169, PSend22173, PSend22174);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22175 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22159);
    Array PThreadedCode22158 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22159, (Optr)&t_send1, (Optr)PSend22175, (Optr)&t_method_return);
    Method PMethod22155 = new_Method_with(PArray22156, PArray22157, empty_Array, PThreadedCode22158, 1, PSend22175);
    
    MethodClosure MC_SMB_findName_ifAbsent_ = new_MethodClosure((Method)PMethod22155, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_findName_ifAbsent_, MC_SMB_findName_ifAbsent_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray22177 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitPackage_ = new_Symbol(L"visitPackage:");
    // visitPackage:. 
    Send PSend22179 = new_Send((Optr)VAR_visitor_0_0, SMB_visitPackage_, 1, (Optr)self);
    Array PThreadedCode22178 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22179, (Optr)&t_method_return);
    Method PMethod22176 = new_Method_with(PArray22177, empty_Array, empty_Array, PThreadedCode22178, 1, PSend22179);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod22176, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22181 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_segment_1_0 = new_Variable_named(L"segment", 1);
    Array PArray22184 = new_Array_with(1, (Optr)VAR_segment_1_0);
    Symbol SMB_shortName = new_Symbol(L"shortName");
    // shortName. 
    Send PSend22186 = new_Send((Optr)VAR_segment_1_0, SMB_shortName, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend22187 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend22186);
    Array PThreadedCode22185 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_segment_1_0, (Optr)&t_send0, (Optr)PSend22186, (Optr)&t_send1, (Optr)PSend22187, (Optr)&t_method_return);
    Block PBlock22183 = new_Block_with(PArray22184, empty_Array, PThreadedCode22185, 1, PSend22187);
    Character char_2907 = new_Character(L'.');
    Constant char_2907_Const = new_Constant((Optr)char_2907);
    // <<. 
    Send PSend22190 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2907_Const);
    Array PThreadedCode22189 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2907, (Optr)&t_send1, (Optr)PSend22190, (Optr)&t_block_return);
    Block PBlock22188 = new_Block_with(empty_Array, empty_Array, PThreadedCode22189, 1, PSend22190);
    Symbol SMB_pathDo_separatedBy_ = new_Symbol(L"pathDo:separatedBy:");
    // pathDo:separatedBy:. 
    Send PSend22191 = new_Send((Optr)self, SMB_pathDo_separatedBy_, 2, (Optr)PBlock22183, (Optr)PBlock22188);
    Array PThreadedCode22182 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock22183, (Optr)&t_push_closure, (Optr)PBlock22188, (Optr)&t_send2, (Optr)PSend22191, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22180 = new_Method_with(PArray22181, empty_Array, empty_Array, PThreadedCode22182, 2, PSend22191, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod22180, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_packagesDo_() {
    Symbol SMB_packagesDo_ = new_Symbol(L"packagesDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22193 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22195 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)self);
    Variable VAR_element_1_0 = new_Variable_named(L"element", 1);
    Array PArray22197 = new_Array_with(1, (Optr)VAR_element_1_0);
    // packagesDo:. 
    Send PSend22199 = new_Send((Optr)VAR_element_1_0, SMB_packagesDo_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22198 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_element_1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend22199, (Optr)&t_method_return);
    Block PBlock22196 = new_Block_with(PArray22197, empty_Array, PThreadedCode22198, 1, PSend22199);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend22200 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock22196);
    Array PThreadedCode22194 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22195, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock22196, (Optr)&t_send1, (Optr)PSend22200, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22192 = new_Method_with(PArray22193, empty_Array, empty_Array, PThreadedCode22194, 3, PSend22195, PSend22200, self);
    
    MethodClosure MC_SMB_packagesDo_ = new_MethodClosure((Method)PMethod22192, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_packagesDo_, MC_SMB_packagesDo_);
}


static void init_SMB_parent() {
    Symbol SMB_parent = new_Symbol(L"parent");
    Array PThreadedCode22202 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_method_return);
    Method PMethod22201 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22202, 1, slot_Organization_Package_parent);
    
    MethodClosure MC_SMB_parent = new_MethodClosure((Method)PMethod22201, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_parent, MC_SMB_parent);
}


static void init_SMB_packageName_() {
    Symbol SMB_packageName_ = new_Symbol(L"packageName:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
    Array PArray22204 = new_Array_with(1, (Optr)VAR_aName_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend22207 = new_Send((Optr)VAR_aName_0_0, SMB_asSymbol, 0);
    Assign PAssign22206 = new_Assign((Optr)slot_Organization_Package_name, (Optr)PSend22207);
    Array PThreadedCode22205 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign22206, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send0, (Optr)PSend22207, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22203 = new_Method_with(PArray22204, empty_Array, empty_Array, PThreadedCode22205, 2, PAssign22206, self);
    
    MethodClosure MC_SMB_packageName_ = new_MethodClosure((Method)PMethod22203, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_packageName_, MC_SMB_packageName_);
}


static void init_SMB_shortName() {
    Symbol SMB_shortName = new_Symbol(L"shortName");
    Array PThreadedCode22209 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_Package_name, (Optr)&t_method_return);
    Method PMethod22208 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22209, 1, slot_Organization_Package_name);
    
    MethodClosure MC_SMB_shortName = new_MethodClosure((Method)PMethod22208, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_shortName, MC_SMB_shortName);
}


static void init_SMB_pathDo_separatedBy_() {
    Symbol SMB_pathDo_separatedBy_ = new_Symbol(L"pathDo:separatedBy:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Variable VAR_separator_0_1 = new_Variable_named(L"separator", 0);
    Array PArray22211 = new_Array_with(2, (Optr)VAR_block_0_0, (Optr)VAR_separator_0_1);
    Symbol SMB_isRoot = new_Symbol(L"isRoot");
    // isRoot. 
    Send PSend22213 = new_Send((Optr)slot_Organization_Package_parent, SMB_isRoot, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // pathDo:separatedBy:. 
    Send PSend22217 = new_Send((Optr)slot_Organization_Package_parent, SMB_pathDo_separatedBy_, 2, (Optr)VAR_block_0_0, (Optr)VAR_separator_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend22218 = new_Send((Optr)VAR_separator_0_1, SMB_value, 0);
    Array PThreadedCode22216 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_variable, (Optr)VAR_separator_0_1, (Optr)&t_send2, (Optr)PSend22217, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_separator_0_1, (Optr)&t_send0, (Optr)PSend22218, (Optr)&t_block_return);
    Block PBlock22215 = new_Block_with(empty_Array, empty_Array, PThreadedCode22216, 2, PSend22217, PSend22218);
    // ifFalse:. 
    Send PSend22214 = new_Send((Optr)PSend22213, SMB_ifFalse_, 1, (Optr)PBlock22215);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22219 = new_Send((Optr)VAR_block_0_0, SMB_value_, 1, (Optr)self);
    Array PThreadedCode22212 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_send0, (Optr)PSend22213, (Optr)&t_send_ifFalse_, (Optr)PSend22214, (Optr)PBlock22215, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22219, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22210 = new_Method_with(PArray22211, empty_Array, empty_Array, PThreadedCode22212, 3, PSend22214, PSend22219, self);
    
    MethodClosure MC_SMB_pathDo_separatedBy_ = new_MethodClosure((Method)PMethod22210, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_pathDo_separatedBy_, MC_SMB_pathDo_separatedBy_);
}


static void init_class_SMB_named_in_() {
    Symbol SMB_named_in_ = new_Symbol(L"named:in:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Variable VAR_package_0_1 = new_Variable_named(L"package", 0);
    Array PArray22221 = new_Array_with(2, (Optr)VAR_aSymbol_0_0, (Optr)VAR_package_0_1);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend22223 = new_Send((Optr)self, SMB_named_, 1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_parent_ = new_Symbol(L"parent:");
    // parent:. 
    Send PSend22224 = new_Send((Optr)PSend22223, SMB_parent_, 1, (Optr)VAR_package_0_1);
    Array PThreadedCode22222 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send1, (Optr)PSend22223, (Optr)&t_push_variable, (Optr)VAR_package_0_1, (Optr)&t_send1, (Optr)PSend22224, (Optr)&t_method_return);
    Method PMethod22220 = new_Method_with(PArray22221, empty_Array, empty_Array, PThreadedCode22222, 1, PSend22224);
    
    MethodClosure MC_SMB_named_in_ = new_MethodClosure((Method)PMethod22220, HEADER(Organization_Package_Class));
    store_method(HEADER(Organization_Package_Class), SMB_named_in_, MC_SMB_named_in_);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Array PArray22226 = new_Array_with(1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22228 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_packageName_ = new_Symbol(L"packageName:");
    // packageName:. 
    Send PSend22229 = new_Send((Optr)PSend22228, SMB_packageName_, 1, (Optr)VAR_aSymbol_0_0);
    Array PThreadedCode22227 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22228, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send1, (Optr)PSend22229, (Optr)&t_method_return);
    Method PMethod22225 = new_Method_with(PArray22226, empty_Array, empty_Array, PThreadedCode22227, 1, PSend22229);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod22225, HEADER(Organization_Package_Class));
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