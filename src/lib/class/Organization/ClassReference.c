#include <lib/class/Organization/ClassReference.h>


Optr layout_Organization_ClassReference_Class_class;
Optr slot_Organization_ClassReference_package;
Optr slot_Organization_ClassReference_pClass;
Optr layout_Organization_ClassReference;


static void init_SMB_fullName() {
    Symbol SMB_fullName = new_Symbol(L"fullName");
    Symbol SMB_package = new_Symbol(L"package");
    // package. 
    Send PSend22142 = new_Send((Optr)self, SMB_package, 0);
    // fullName. 
    Send PSend22143 = new_Send((Optr)PSend22142, SMB_fullName, 0);
    String string_22144 = new_String(L".");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_22144_Const = new_Constant((Optr)string_22144);
    // ,. 
    Send PSend22145 = new_Send((Optr)PSend22143, SMB__append_, 1, (Optr)string_22144_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend22146 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_name, 0);
    // ,. 
    Send PSend22147 = new_Send((Optr)PSend22145, SMB__append_, 1, (Optr)PSend22146);
    Array PThreadedCode22141 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22142, (Optr)&t_send0, (Optr)PSend22143, (Optr)&t_push1, (Optr)string_22144, (Optr)&t_send1, (Optr)PSend22145, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_send0, (Optr)PSend22146, (Optr)&t_send1, (Optr)PSend22147, (Optr)&t_method_return);
    Method PMethod22140 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22141, 1, PSend22147);
    
    MethodClosure MC_SMB_fullName = new_MethodClosure((Method)PMethod22140, ClassReference_Class);
    store_method(ClassReference_Class, SMB_fullName, MC_SMB_fullName);
}


static void init_SMB_asNode() {
    Symbol SMB_asNode = new_Symbol(L"asNode");
    Array PThreadedCode22149 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod22148 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22149, 1, self);
    
    MethodClosure MC_SMB_asNode = new_MethodClosure((Method)PMethod22148, ClassReference_Class);
    store_method(ClassReference_Class, SMB_asNode, MC_SMB_asNode);
}


static void init_SMB_ensurePinocchioClass_() {
    Symbol SMB_ensurePinocchioClass_ = new_Symbol(L"ensurePinocchioClass:");
    Variable VAR_aPinocchioClass_0_0 = new_Variable_named(L"aPinocchioClass", 0);
    Array PArray22151 = new_Array_with(1, (Optr)VAR_aPinocchioClass_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22154 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_shouldNotHappen = new_Symbol(L"shouldNotHappen");
    // shouldNotHappen. 
    Send PSend22158 = new_Send((Optr)self, SMB_shouldNotHappen, 0);
    Array PThreadedCode22157 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22158, (Optr)&t_block_return);
    Block PBlock22156 = new_Block_with(empty_Array, empty_Array, PThreadedCode22157, 1, PSend22158);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22159 = new_Send((Optr)VAR_aPinocchioClass_0_0, SMB_ifNil_, 1, (Optr)PBlock22156);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend22162 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB__pequals_, 1, (Optr)VAR_aPinocchioClass_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_error = new_Symbol(L"error");
    // error. 
    Send PSend22166 = new_Send((Optr)self, SMB_error, 0);
    Array PThreadedCode22165 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22166, (Optr)&t_block_return);
    Block PBlock22164 = new_Block_with(empty_Array, empty_Array, PThreadedCode22165, 1, PSend22166);
    // ifFalse:. 
    Send PSend22163 = new_Send((Optr)PSend22162, SMB_ifFalse_, 1, (Optr)PBlock22164);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22167 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)slot_Organization_ClassReference_pClass);
    Array PThreadedCode22161 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_send1, (Optr)PSend22162, (Optr)&t_send_ifFalse_, (Optr)PSend22163, (Optr)PBlock22164, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_send1, (Optr)PSend22167, (Optr)&t_block_return);
    Block PBlock22160 = new_Block_with(empty_Array, empty_Array, PThreadedCode22161, 2, PSend22163, PSend22167);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22168 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_ifNotNil_, 1, (Optr)PBlock22160);
    Assign PAssign22169 = new_Assign((Optr)slot_Organization_ClassReference_pClass, (Optr)VAR_aPinocchioClass_0_0);
    Array PThreadedCode22155 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_push_closure, (Optr)PBlock22156, (Optr)&t_send1, (Optr)PSend22159, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_push_closure, (Optr)PBlock22160, (Optr)&t_send1, (Optr)PSend22168, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22169, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock22153 = new_Block_with(PArray22154, empty_Array, PThreadedCode22155, 3, PSend22159, PSend22168, PAssign22169);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22170 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22153);
    Array PThreadedCode22152 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22153, (Optr)&t_send1, (Optr)PSend22170, (Optr)&t_method_return);
    Method PMethod22150 = new_Method_with(PArray22151, empty_Array, empty_Array, PThreadedCode22152, 1, PSend22170);
    
    MethodClosure MC_SMB_ensurePinocchioClass_ = new_MethodClosure((Method)PMethod22150, ClassReference_Class);
    store_method(ClassReference_Class, SMB_ensurePinocchioClass_, MC_SMB_ensurePinocchioClass_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray22172 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitClassReference_ = new_Symbol(L"visitClassReference:");
    // visitClassReference:. 
    Send PSend22174 = new_Send((Optr)VAR_visitor_0_0, SMB_visitClassReference_, 1, (Optr)self);
    Array PThreadedCode22173 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22174, (Optr)&t_method_return);
    Method PMethod22171 = new_Method_with(PArray22172, empty_Array, empty_Array, PThreadedCode22173, 1, PSend22174);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod22171, ClassReference_Class);
    store_method(ClassReference_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_package() {
    Symbol SMB_package = new_Symbol(L"package");
    Array PThreadedCode22176 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_package, (Optr)&t_method_return);
    Method PMethod22175 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22176, 1, slot_Organization_ClassReference_package);
    
    MethodClosure MC_SMB_package = new_MethodClosure((Method)PMethod22175, ClassReference_Class);
    store_method(ClassReference_Class, SMB_package, MC_SMB_package);
}


static void init_SMB_package_() {
    Symbol SMB_package_ = new_Symbol(L"package:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray22178 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign22180 = new_Assign((Optr)slot_Organization_ClassReference_package, (Optr)VAR_anObject_0_0);
    Array PThreadedCode22179 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22180, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22177 = new_Method_with(PArray22178, empty_Array, empty_Array, PThreadedCode22179, 2, PAssign22180, self);
    
    MethodClosure MC_SMB_package_ = new_MethodClosure((Method)PMethod22177, ClassReference_Class);
    store_method(ClassReference_Class, SMB_package_, MC_SMB_package_);
}


static void init_SMB_packagesDo_() {
    Symbol SMB_packagesDo_ = new_Symbol(L"packagesDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22182 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22183 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod22181 = new_Method_with(PArray22182, empty_Array, empty_Array, PThreadedCode22183, 1, self);
    
    MethodClosure MC_SMB_packagesDo_ = new_MethodClosure((Method)PMethod22181, ClassReference_Class);
    store_method(ClassReference_Class, SMB_packagesDo_, MC_SMB_packagesDo_);
}


static void init_SMB_pclass() {
    Symbol SMB_pclass = new_Symbol(L"pclass");
    Array PThreadedCode22185 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_method_return);
    Method PMethod22184 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22185, 1, slot_Organization_ClassReference_pClass);
    
    MethodClosure MC_SMB_pclass = new_MethodClosure((Method)PMethod22184, ClassReference_Class);
    store_method(ClassReference_Class, SMB_pclass, MC_SMB_pclass);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22187 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper22189 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    String string_22192 = new_String(L" (");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_22192_Const = new_Constant((Optr)string_22192);
    // <<. 
    Send PSend22193 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_22192_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend22194 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_name, 0);
    // <<. 
    Send PSend22195 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend22194);
    Character char_4149 = new_Character(L')');
    Constant char_4149_Const = new_Constant((Optr)char_4149);
    // <<. 
    Send PSend22196 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4149_Const);
    Array PThreadedCode22191 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_22192, (Optr)&t_send1, (Optr)PSend22193, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_send0, (Optr)PSend22194, (Optr)&t_send1, (Optr)PSend22195, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4149, (Optr)&t_send1, (Optr)PSend22196, (Optr)&t_block_return);
    Block PBlock22190 = new_Block_with(empty_Array, empty_Array, PThreadedCode22191, 3, PSend22193, PSend22195, PSend22196);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22197 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_ifNotNil_, 1, (Optr)PBlock22190);
    Array PThreadedCode22188 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper22189, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_push_closure, (Optr)PBlock22190, (Optr)&t_send1, (Optr)PSend22197, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22186 = new_Method_with(PArray22187, empty_Array, empty_Array, PThreadedCode22188, 3, PSuper22189, PSend22197, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod22186, ClassReference_Class);
    store_method(ClassReference_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_lookupIn_at_() {
    Symbol SMB_lookupIn_at_ = new_Symbol(L"lookupIn:at:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray22199 = new_Array_with(2, (Optr)VAR_aCollection_0_0, (Optr)VAR_index_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22202 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend22204 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend22205 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)PSend22204);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray22210 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_path_ = new_Symbol(L"path:");
    // path:. 
    Send PSend22212 = new_Send((Optr)VAR__receiver__2_0, SMB_path_, 1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_index_ = new_Symbol(L"index:");
    // index:. 
    Send PSend22213 = new_Send((Optr)VAR__receiver__2_0, SMB_index_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22214 = new_Send((Optr)VAR__receiver__2_0, SMB_signal, 0);
    Array PThreadedCode22211 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send1, (Optr)PSend22212, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend22213, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend22214, (Optr)&t_method_return);
    Block PBlock22209 = new_Block_with(PArray22210, empty_Array, PThreadedCode22211, 3, PSend22212, PSend22213, PSend22214);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22215 = new_Send((Optr)PNestedClassException_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22216 = new_Send((Optr)PBlock22209, SMB_value_, 1, (Optr)PSend22215);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22217 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22216);
    Array PThreadedCode22208 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_closure, (Optr)PBlock22209, (Optr)&t_push_class_reference, (Optr)PNestedClassException_classReference, (Optr)&t_send0, (Optr)PSend22215, (Optr)&t_send1, (Optr)PSend22216, (Optr)&t_send1, (Optr)PSend22217, (Optr)&t_block_return);
    Block PBlock22207 = new_Block_with(empty_Array, empty_Array, PThreadedCode22208, 1, PSend22217);
    // ifFalse:. 
    Send PSend22206 = new_Send((Optr)PSend22205, SMB_ifFalse_, 1, (Optr)PBlock22207);
    Array PThreadedCode22203 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend22204, (Optr)&t_send1, (Optr)PSend22205, (Optr)&t_send_ifFalse_, (Optr)PSend22206, (Optr)PBlock22207, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22201 = new_Block_with(PArray22202, empty_Array, PThreadedCode22203, 2, PSend22206, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22218 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22201);
    Array PThreadedCode22200 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22201, (Optr)&t_send1, (Optr)PSend22218, (Optr)&t_method_return);
    Method PMethod22198 = new_Method_with(PArray22199, empty_Array, empty_Array, PThreadedCode22200, 1, PSend22218);
    
    MethodClosure MC_SMB_lookupIn_at_ = new_MethodClosure((Method)PMethod22198, ClassReference_Class);
    store_method(ClassReference_Class, SMB_lookupIn_at_, MC_SMB_lookupIn_at_);
}


static void init_class_SMB_in_() {
    Symbol SMB_in_ = new_Symbol(L"in:");
    Variable VAR_package_0_0 = new_Variable_named(L"package", 0);
    Array PArray22220 = new_Array_with(1, (Optr)VAR_package_0_0);
    Symbol SMB_shouldNotHappen = new_Symbol(L"shouldNotHappen");
    // shouldNotHappen. 
    Send PSend22224 = new_Send((Optr)self, SMB_shouldNotHappen, 0);
    Array PThreadedCode22223 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22224, (Optr)&t_block_return);
    Block PBlock22222 = new_Block_with(empty_Array, empty_Array, PThreadedCode22223, 1, PSend22224);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22225 = new_Send((Optr)VAR_package_0_0, SMB_ifNil_, 1, (Optr)PBlock22222);
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper22226 = new_Super(SMB_new, 0);
    Symbol SMB_package_ = new_Symbol(L"package:");
    // package:. 
    Send PSend22227 = new_Send((Optr)PSuper22226, SMB_package_, 1, (Optr)VAR_package_0_0);
    Array PThreadedCode22221 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_package_0_0, (Optr)&t_push_closure, (Optr)PBlock22222, (Optr)&t_send1, (Optr)PSend22225, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper22226, (Optr)&t_push_variable, (Optr)VAR_package_0_0, (Optr)&t_send1, (Optr)PSend22227, (Optr)&t_method_return);
    Method PMethod22219 = new_Method_with(PArray22220, empty_Array, empty_Array, PThreadedCode22221, 2, PSend22225, PSend22227);
    
    MethodClosure MC_SMB_in_ = new_MethodClosure((Method)PMethod22219, HEADER(ClassReference_Class));
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
    Send PSend22230 = new_Send((Optr)self, SMB_shouldNotCall, 0);
    Array PThreadedCode22229 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22230, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22228 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22229, 2, PSend22230, self);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod22228, HEADER(ClassReference_Class));
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