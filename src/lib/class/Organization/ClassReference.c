#include <lib/class/Organization/ClassReference.h>


Optr layout_Organization_ClassReference_Class_class;
Optr slot_Organization_ClassReference_package;
Optr slot_Organization_ClassReference_pClass;
Optr layout_Organization_ClassReference;


static void init_SMB_fullName() {
    Symbol SMB_fullName = new_Symbol(L"fullName");
    Symbol SMB_package = new_Symbol(L"package");
    // package. 
    Send PSend22040 = new_Send((Optr)self, SMB_package, 0);
    // fullName. 
    Send PSend22041 = new_Send((Optr)PSend22040, SMB_fullName, 0);
    String string_22042 = new_String(L".");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_22042_Const = new_Constant((Optr)string_22042);
    // ,. 
    Send PSend22043 = new_Send((Optr)PSend22041, SMB__append_, 1, (Optr)string_22042_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend22044 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_name, 0);
    // ,. 
    Send PSend22045 = new_Send((Optr)PSend22043, SMB__append_, 1, (Optr)PSend22044);
    Array PThreadedCode22039 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22040, (Optr)&t_send0, (Optr)PSend22041, (Optr)&t_push1, (Optr)string_22042, (Optr)&t_send1, (Optr)PSend22043, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_send0, (Optr)PSend22044, (Optr)&t_send1, (Optr)PSend22045, (Optr)&t_method_return);
    Method PMethod22038 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22039, 1, PSend22045);
    
    MethodClosure MC_SMB_fullName = new_MethodClosure((Method)PMethod22038, ClassReference_Class);
    store_method(ClassReference_Class, SMB_fullName, MC_SMB_fullName);
}


static void init_SMB_asNode() {
    Symbol SMB_asNode = new_Symbol(L"asNode");
    Array PThreadedCode22047 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod22046 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22047, 1, self);
    
    MethodClosure MC_SMB_asNode = new_MethodClosure((Method)PMethod22046, ClassReference_Class);
    store_method(ClassReference_Class, SMB_asNode, MC_SMB_asNode);
}


static void init_SMB_ensurePinocchioClass_() {
    Symbol SMB_ensurePinocchioClass_ = new_Symbol(L"ensurePinocchioClass:");
    Variable VAR_aPinocchioClass_0_0 = new_Variable_named(L"aPinocchioClass", 0);
    Array PArray22049 = new_Array_with(1, (Optr)VAR_aPinocchioClass_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22052 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_shouldNotHappen = new_Symbol(L"shouldNotHappen");
    // shouldNotHappen. 
    Send PSend22056 = new_Send((Optr)self, SMB_shouldNotHappen, 0);
    Array PThreadedCode22055 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22056, (Optr)&t_block_return);
    Block PBlock22054 = new_Block_with(empty_Array, empty_Array, PThreadedCode22055, 1, PSend22056);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22057 = new_Send((Optr)VAR_aPinocchioClass_0_0, SMB_ifNil_, 1, (Optr)PBlock22054);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend22060 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB__pequals_, 1, (Optr)VAR_aPinocchioClass_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_error = new_Symbol(L"error");
    // error. 
    Send PSend22064 = new_Send((Optr)self, SMB_error, 0);
    Array PThreadedCode22063 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22064, (Optr)&t_block_return);
    Block PBlock22062 = new_Block_with(empty_Array, empty_Array, PThreadedCode22063, 1, PSend22064);
    // ifFalse:. 
    Send PSend22061 = new_Send((Optr)PSend22060, SMB_ifFalse_, 1, (Optr)PBlock22062);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22065 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)slot_Organization_ClassReference_pClass);
    Array PThreadedCode22059 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_send1, (Optr)PSend22060, (Optr)&t_send_ifFalse_, (Optr)PSend22061, (Optr)PBlock22062, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_send1, (Optr)PSend22065, (Optr)&t_block_return);
    Block PBlock22058 = new_Block_with(empty_Array, empty_Array, PThreadedCode22059, 2, PSend22061, PSend22065);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22066 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_ifNotNil_, 1, (Optr)PBlock22058);
    Assign PAssign22067 = new_Assign((Optr)slot_Organization_ClassReference_pClass, (Optr)VAR_aPinocchioClass_0_0);
    Array PThreadedCode22053 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_push_closure, (Optr)PBlock22054, (Optr)&t_send1, (Optr)PSend22057, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_push_closure, (Optr)PBlock22058, (Optr)&t_send1, (Optr)PSend22066, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22067, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock22051 = new_Block_with(PArray22052, empty_Array, PThreadedCode22053, 3, PSend22057, PSend22066, PAssign22067);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22068 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22051);
    Array PThreadedCode22050 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22051, (Optr)&t_send1, (Optr)PSend22068, (Optr)&t_method_return);
    Method PMethod22048 = new_Method_with(PArray22049, empty_Array, empty_Array, PThreadedCode22050, 1, PSend22068);
    
    MethodClosure MC_SMB_ensurePinocchioClass_ = new_MethodClosure((Method)PMethod22048, ClassReference_Class);
    store_method(ClassReference_Class, SMB_ensurePinocchioClass_, MC_SMB_ensurePinocchioClass_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray22070 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitClassReference_ = new_Symbol(L"visitClassReference:");
    // visitClassReference:. 
    Send PSend22072 = new_Send((Optr)VAR_visitor_0_0, SMB_visitClassReference_, 1, (Optr)self);
    Array PThreadedCode22071 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22072, (Optr)&t_method_return);
    Method PMethod22069 = new_Method_with(PArray22070, empty_Array, empty_Array, PThreadedCode22071, 1, PSend22072);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod22069, ClassReference_Class);
    store_method(ClassReference_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_package() {
    Symbol SMB_package = new_Symbol(L"package");
    Array PThreadedCode22074 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_package, (Optr)&t_method_return);
    Method PMethod22073 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22074, 1, slot_Organization_ClassReference_package);
    
    MethodClosure MC_SMB_package = new_MethodClosure((Method)PMethod22073, ClassReference_Class);
    store_method(ClassReference_Class, SMB_package, MC_SMB_package);
}


static void init_SMB_package_() {
    Symbol SMB_package_ = new_Symbol(L"package:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray22076 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign22078 = new_Assign((Optr)slot_Organization_ClassReference_package, (Optr)VAR_anObject_0_0);
    Array PThreadedCode22077 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22078, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22075 = new_Method_with(PArray22076, empty_Array, empty_Array, PThreadedCode22077, 2, PAssign22078, self);
    
    MethodClosure MC_SMB_package_ = new_MethodClosure((Method)PMethod22075, ClassReference_Class);
    store_method(ClassReference_Class, SMB_package_, MC_SMB_package_);
}


static void init_SMB_packagesDo_() {
    Symbol SMB_packagesDo_ = new_Symbol(L"packagesDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22080 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22081 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod22079 = new_Method_with(PArray22080, empty_Array, empty_Array, PThreadedCode22081, 1, self);
    
    MethodClosure MC_SMB_packagesDo_ = new_MethodClosure((Method)PMethod22079, ClassReference_Class);
    store_method(ClassReference_Class, SMB_packagesDo_, MC_SMB_packagesDo_);
}


static void init_SMB_pclass() {
    Symbol SMB_pclass = new_Symbol(L"pclass");
    Array PThreadedCode22083 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_method_return);
    Method PMethod22082 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22083, 1, slot_Organization_ClassReference_pClass);
    
    MethodClosure MC_SMB_pclass = new_MethodClosure((Method)PMethod22082, ClassReference_Class);
    store_method(ClassReference_Class, SMB_pclass, MC_SMB_pclass);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22085 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper22087 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    String string_22090 = new_String(L" (");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_22090_Const = new_Constant((Optr)string_22090);
    // <<. 
    Send PSend22091 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_22090_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend22092 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_name, 0);
    // <<. 
    Send PSend22093 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend22092);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend22094 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode22089 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_22090, (Optr)&t_send1, (Optr)PSend22091, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_send0, (Optr)PSend22092, (Optr)&t_send1, (Optr)PSend22093, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend22094, (Optr)&t_block_return);
    Block PBlock22088 = new_Block_with(empty_Array, empty_Array, PThreadedCode22089, 3, PSend22091, PSend22093, PSend22094);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22095 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_ifNotNil_, 1, (Optr)PBlock22088);
    Array PThreadedCode22086 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper22087, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_push_closure, (Optr)PBlock22088, (Optr)&t_send1, (Optr)PSend22095, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22084 = new_Method_with(PArray22085, empty_Array, empty_Array, PThreadedCode22086, 3, PSuper22087, PSend22095, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod22084, ClassReference_Class);
    store_method(ClassReference_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_lookupIn_at_() {
    Symbol SMB_lookupIn_at_ = new_Symbol(L"lookupIn:at:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray22097 = new_Array_with(2, (Optr)VAR_aCollection_0_0, (Optr)VAR_index_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22100 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend22102 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend22103 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)PSend22102);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray22108 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_path_ = new_Symbol(L"path:");
    // path:. 
    Send PSend22110 = new_Send((Optr)VAR__receiver__2_0, SMB_path_, 1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_index_ = new_Symbol(L"index:");
    // index:. 
    Send PSend22111 = new_Send((Optr)VAR__receiver__2_0, SMB_index_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22112 = new_Send((Optr)VAR__receiver__2_0, SMB_signal, 0);
    Array PThreadedCode22109 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send1, (Optr)PSend22110, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend22111, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend22112, (Optr)&t_method_return);
    Block PBlock22107 = new_Block_with(PArray22108, empty_Array, PThreadedCode22109, 3, PSend22110, PSend22111, PSend22112);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22113 = new_Send((Optr)PNestedClassException_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22114 = new_Send((Optr)PBlock22107, SMB_value_, 1, (Optr)PSend22113);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22115 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22114);
    Array PThreadedCode22106 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_closure, (Optr)PBlock22107, (Optr)&t_push_class_reference, (Optr)PNestedClassException_classReference, (Optr)&t_send0, (Optr)PSend22113, (Optr)&t_send1, (Optr)PSend22114, (Optr)&t_send1, (Optr)PSend22115, (Optr)&t_block_return);
    Block PBlock22105 = new_Block_with(empty_Array, empty_Array, PThreadedCode22106, 1, PSend22115);
    // ifFalse:. 
    Send PSend22104 = new_Send((Optr)PSend22103, SMB_ifFalse_, 1, (Optr)PBlock22105);
    Array PThreadedCode22101 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend22102, (Optr)&t_send1, (Optr)PSend22103, (Optr)&t_send_ifFalse_, (Optr)PSend22104, (Optr)PBlock22105, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22099 = new_Block_with(PArray22100, empty_Array, PThreadedCode22101, 2, PSend22104, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22116 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22099);
    Array PThreadedCode22098 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22099, (Optr)&t_send1, (Optr)PSend22116, (Optr)&t_method_return);
    Method PMethod22096 = new_Method_with(PArray22097, empty_Array, empty_Array, PThreadedCode22098, 1, PSend22116);
    
    MethodClosure MC_SMB_lookupIn_at_ = new_MethodClosure((Method)PMethod22096, ClassReference_Class);
    store_method(ClassReference_Class, SMB_lookupIn_at_, MC_SMB_lookupIn_at_);
}


static void init_class_SMB_in_() {
    Symbol SMB_in_ = new_Symbol(L"in:");
    Variable VAR_package_0_0 = new_Variable_named(L"package", 0);
    Array PArray22118 = new_Array_with(1, (Optr)VAR_package_0_0);
    Symbol SMB_shouldNotHappen = new_Symbol(L"shouldNotHappen");
    // shouldNotHappen. 
    Send PSend22122 = new_Send((Optr)self, SMB_shouldNotHappen, 0);
    Array PThreadedCode22121 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22122, (Optr)&t_block_return);
    Block PBlock22120 = new_Block_with(empty_Array, empty_Array, PThreadedCode22121, 1, PSend22122);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22123 = new_Send((Optr)VAR_package_0_0, SMB_ifNil_, 1, (Optr)PBlock22120);
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper22124 = new_Super(SMB_new, 0);
    Symbol SMB_package_ = new_Symbol(L"package:");
    // package:. 
    Send PSend22125 = new_Send((Optr)PSuper22124, SMB_package_, 1, (Optr)VAR_package_0_0);
    Array PThreadedCode22119 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_package_0_0, (Optr)&t_push_closure, (Optr)PBlock22120, (Optr)&t_send1, (Optr)PSend22123, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper22124, (Optr)&t_push_variable, (Optr)VAR_package_0_0, (Optr)&t_send1, (Optr)PSend22125, (Optr)&t_method_return);
    Method PMethod22117 = new_Method_with(PArray22118, empty_Array, empty_Array, PThreadedCode22119, 2, PSend22123, PSend22125);
    
    MethodClosure MC_SMB_in_ = new_MethodClosure((Method)PMethod22117, HEADER(ClassReference_Class));
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
    Send PSend22128 = new_Send((Optr)self, SMB_shouldNotCall, 0);
    Array PThreadedCode22127 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22128, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22126 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22127, 2, PSend22128, self);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod22126, HEADER(ClassReference_Class));
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