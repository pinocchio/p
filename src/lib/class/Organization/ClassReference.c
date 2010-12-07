#include <lib/class/Organization/ClassReference.h>


Optr layout_Organization_ClassReference_Class_class;
Optr slot_Organization_ClassReference_package;
Optr slot_Organization_ClassReference_pClass;
Optr layout_Organization_ClassReference;


static void init_SMB_fullName() {
    Symbol SMB_fullName = new_Symbol(L"fullName");
    Symbol SMB_package = new_Symbol(L"package");
    // package. 
    Send PSend22045 = new_Send((Optr)self, SMB_package, 0);
    // fullName. 
    Send PSend22046 = new_Send((Optr)PSend22045, SMB_fullName, 0);
    String string_22047 = new_String(L".");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_22047_Const = new_Constant((Optr)string_22047);
    // ,. 
    Send PSend22048 = new_Send((Optr)PSend22046, SMB__append_, 1, (Optr)string_22047_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend22049 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_name, 0);
    // ,. 
    Send PSend22050 = new_Send((Optr)PSend22048, SMB__append_, 1, (Optr)PSend22049);
    Array PThreadedCode22044 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22045, (Optr)&t_send0, (Optr)PSend22046, (Optr)&t_push1, (Optr)string_22047, (Optr)&t_send1, (Optr)PSend22048, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_send0, (Optr)PSend22049, (Optr)&t_send1, (Optr)PSend22050, (Optr)&t_method_return);
    Method PMethod22043 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22044, 1, PSend22050);
    
    MethodClosure MC_SMB_fullName = new_MethodClosure((Method)PMethod22043, ClassReference_Class);
    store_method(ClassReference_Class, SMB_fullName, MC_SMB_fullName);
}


static void init_SMB_asNode() {
    Symbol SMB_asNode = new_Symbol(L"asNode");
    Array PThreadedCode22052 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod22051 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22052, 1, self);
    
    MethodClosure MC_SMB_asNode = new_MethodClosure((Method)PMethod22051, ClassReference_Class);
    store_method(ClassReference_Class, SMB_asNode, MC_SMB_asNode);
}


static void init_SMB_ensurePinocchioClass_() {
    Symbol SMB_ensurePinocchioClass_ = new_Symbol(L"ensurePinocchioClass:");
    Variable VAR_aPinocchioClass_0_0 = new_Variable_named(L"aPinocchioClass", 0);
    Array PArray22054 = new_Array_with(1, (Optr)VAR_aPinocchioClass_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22057 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_shouldNotHappen = new_Symbol(L"shouldNotHappen");
    // shouldNotHappen. 
    Send PSend22061 = new_Send((Optr)self, SMB_shouldNotHappen, 0);
    Array PThreadedCode22060 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22061, (Optr)&t_block_return);
    Block PBlock22059 = new_Block_with(empty_Array, empty_Array, PThreadedCode22060, 1, PSend22061);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22062 = new_Send((Optr)VAR_aPinocchioClass_0_0, SMB_ifNil_, 1, (Optr)PBlock22059);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend22065 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB__pequals_, 1, (Optr)VAR_aPinocchioClass_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_error = new_Symbol(L"error");
    // error. 
    Send PSend22069 = new_Send((Optr)self, SMB_error, 0);
    Array PThreadedCode22068 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22069, (Optr)&t_block_return);
    Block PBlock22067 = new_Block_with(empty_Array, empty_Array, PThreadedCode22068, 1, PSend22069);
    // ifFalse:. 
    Send PSend22066 = new_Send((Optr)PSend22065, SMB_ifFalse_, 1, (Optr)PBlock22067);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22070 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)slot_Organization_ClassReference_pClass);
    Array PThreadedCode22064 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_send1, (Optr)PSend22065, (Optr)&t_send_ifFalse_, (Optr)PSend22066, (Optr)PBlock22067, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_send1, (Optr)PSend22070, (Optr)&t_block_return);
    Block PBlock22063 = new_Block_with(empty_Array, empty_Array, PThreadedCode22064, 2, PSend22066, PSend22070);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22071 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_ifNotNil_, 1, (Optr)PBlock22063);
    Assign PAssign22072 = new_Assign((Optr)slot_Organization_ClassReference_pClass, (Optr)VAR_aPinocchioClass_0_0);
    Array PThreadedCode22058 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_push_closure, (Optr)PBlock22059, (Optr)&t_send1, (Optr)PSend22062, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_push_closure, (Optr)PBlock22063, (Optr)&t_send1, (Optr)PSend22071, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22072, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock22056 = new_Block_with(PArray22057, empty_Array, PThreadedCode22058, 3, PSend22062, PSend22071, PAssign22072);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22073 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22056);
    Array PThreadedCode22055 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22056, (Optr)&t_send1, (Optr)PSend22073, (Optr)&t_method_return);
    Method PMethod22053 = new_Method_with(PArray22054, empty_Array, empty_Array, PThreadedCode22055, 1, PSend22073);
    
    MethodClosure MC_SMB_ensurePinocchioClass_ = new_MethodClosure((Method)PMethod22053, ClassReference_Class);
    store_method(ClassReference_Class, SMB_ensurePinocchioClass_, MC_SMB_ensurePinocchioClass_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray22075 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitClassReference_ = new_Symbol(L"visitClassReference:");
    // visitClassReference:. 
    Send PSend22077 = new_Send((Optr)VAR_visitor_0_0, SMB_visitClassReference_, 1, (Optr)self);
    Array PThreadedCode22076 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22077, (Optr)&t_method_return);
    Method PMethod22074 = new_Method_with(PArray22075, empty_Array, empty_Array, PThreadedCode22076, 1, PSend22077);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod22074, ClassReference_Class);
    store_method(ClassReference_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_package() {
    Symbol SMB_package = new_Symbol(L"package");
    Array PThreadedCode22079 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_package, (Optr)&t_method_return);
    Method PMethod22078 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22079, 1, slot_Organization_ClassReference_package);
    
    MethodClosure MC_SMB_package = new_MethodClosure((Method)PMethod22078, ClassReference_Class);
    store_method(ClassReference_Class, SMB_package, MC_SMB_package);
}


static void init_SMB_package_() {
    Symbol SMB_package_ = new_Symbol(L"package:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray22081 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign22083 = new_Assign((Optr)slot_Organization_ClassReference_package, (Optr)VAR_anObject_0_0);
    Array PThreadedCode22082 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22083, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22080 = new_Method_with(PArray22081, empty_Array, empty_Array, PThreadedCode22082, 2, PAssign22083, self);
    
    MethodClosure MC_SMB_package_ = new_MethodClosure((Method)PMethod22080, ClassReference_Class);
    store_method(ClassReference_Class, SMB_package_, MC_SMB_package_);
}


static void init_SMB_packagesDo_() {
    Symbol SMB_packagesDo_ = new_Symbol(L"packagesDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray22085 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22086 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod22084 = new_Method_with(PArray22085, empty_Array, empty_Array, PThreadedCode22086, 1, self);
    
    MethodClosure MC_SMB_packagesDo_ = new_MethodClosure((Method)PMethod22084, ClassReference_Class);
    store_method(ClassReference_Class, SMB_packagesDo_, MC_SMB_packagesDo_);
}


static void init_SMB_pclass() {
    Symbol SMB_pclass = new_Symbol(L"pclass");
    Array PThreadedCode22088 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_method_return);
    Method PMethod22087 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22088, 1, slot_Organization_ClassReference_pClass);
    
    MethodClosure MC_SMB_pclass = new_MethodClosure((Method)PMethod22087, ClassReference_Class);
    store_method(ClassReference_Class, SMB_pclass, MC_SMB_pclass);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22090 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper22092 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    String string_22095 = new_String(L" (");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_22095_Const = new_Constant((Optr)string_22095);
    // <<. 
    Send PSend22096 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_22095_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend22097 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_name, 0);
    // <<. 
    Send PSend22098 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend22097);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend22099 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode22094 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_22095, (Optr)&t_send1, (Optr)PSend22096, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_send0, (Optr)PSend22097, (Optr)&t_send1, (Optr)PSend22098, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend22099, (Optr)&t_block_return);
    Block PBlock22093 = new_Block_with(empty_Array, empty_Array, PThreadedCode22094, 3, PSend22096, PSend22098, PSend22099);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22100 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_ifNotNil_, 1, (Optr)PBlock22093);
    Array PThreadedCode22091 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper22092, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_push_closure, (Optr)PBlock22093, (Optr)&t_send1, (Optr)PSend22100, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22089 = new_Method_with(PArray22090, empty_Array, empty_Array, PThreadedCode22091, 3, PSuper22092, PSend22100, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod22089, ClassReference_Class);
    store_method(ClassReference_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_lookupIn_at_() {
    Symbol SMB_lookupIn_at_ = new_Symbol(L"lookupIn:at:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray22102 = new_Array_with(2, (Optr)VAR_aCollection_0_0, (Optr)VAR_index_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22105 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend22107 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend22108 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)PSend22107);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray22113 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_path_ = new_Symbol(L"path:");
    // path:. 
    Send PSend22115 = new_Send((Optr)VAR__receiver__2_0, SMB_path_, 1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_index_ = new_Symbol(L"index:");
    // index:. 
    Send PSend22116 = new_Send((Optr)VAR__receiver__2_0, SMB_index_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22117 = new_Send((Optr)VAR__receiver__2_0, SMB_signal, 0);
    Array PThreadedCode22114 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send1, (Optr)PSend22115, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend22116, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend22117, (Optr)&t_method_return);
    Block PBlock22112 = new_Block_with(PArray22113, empty_Array, PThreadedCode22114, 3, PSend22115, PSend22116, PSend22117);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22118 = new_Send((Optr)PNestedClassException_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22119 = new_Send((Optr)PBlock22112, SMB_value_, 1, (Optr)PSend22118);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22120 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22119);
    Array PThreadedCode22111 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_closure, (Optr)PBlock22112, (Optr)&t_push_class_reference, (Optr)PNestedClassException_classReference, (Optr)&t_send0, (Optr)PSend22118, (Optr)&t_send1, (Optr)PSend22119, (Optr)&t_send1, (Optr)PSend22120, (Optr)&t_block_return);
    Block PBlock22110 = new_Block_with(empty_Array, empty_Array, PThreadedCode22111, 1, PSend22120);
    // ifFalse:. 
    Send PSend22109 = new_Send((Optr)PSend22108, SMB_ifFalse_, 1, (Optr)PBlock22110);
    Array PThreadedCode22106 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend22107, (Optr)&t_send1, (Optr)PSend22108, (Optr)&t_send_ifFalse_, (Optr)PSend22109, (Optr)PBlock22110, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22104 = new_Block_with(PArray22105, empty_Array, PThreadedCode22106, 2, PSend22109, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22121 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22104);
    Array PThreadedCode22103 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22104, (Optr)&t_send1, (Optr)PSend22121, (Optr)&t_method_return);
    Method PMethod22101 = new_Method_with(PArray22102, empty_Array, empty_Array, PThreadedCode22103, 1, PSend22121);
    
    MethodClosure MC_SMB_lookupIn_at_ = new_MethodClosure((Method)PMethod22101, ClassReference_Class);
    store_method(ClassReference_Class, SMB_lookupIn_at_, MC_SMB_lookupIn_at_);
}


static void init_class_SMB_in_() {
    Symbol SMB_in_ = new_Symbol(L"in:");
    Variable VAR_package_0_0 = new_Variable_named(L"package", 0);
    Array PArray22123 = new_Array_with(1, (Optr)VAR_package_0_0);
    Symbol SMB_shouldNotHappen = new_Symbol(L"shouldNotHappen");
    // shouldNotHappen. 
    Send PSend22127 = new_Send((Optr)self, SMB_shouldNotHappen, 0);
    Array PThreadedCode22126 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22127, (Optr)&t_block_return);
    Block PBlock22125 = new_Block_with(empty_Array, empty_Array, PThreadedCode22126, 1, PSend22127);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22128 = new_Send((Optr)VAR_package_0_0, SMB_ifNil_, 1, (Optr)PBlock22125);
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper22129 = new_Super(SMB_new, 0);
    Symbol SMB_package_ = new_Symbol(L"package:");
    // package:. 
    Send PSend22130 = new_Send((Optr)PSuper22129, SMB_package_, 1, (Optr)VAR_package_0_0);
    Array PThreadedCode22124 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_package_0_0, (Optr)&t_push_closure, (Optr)PBlock22125, (Optr)&t_send1, (Optr)PSend22128, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper22129, (Optr)&t_push_variable, (Optr)VAR_package_0_0, (Optr)&t_send1, (Optr)PSend22130, (Optr)&t_method_return);
    Method PMethod22122 = new_Method_with(PArray22123, empty_Array, empty_Array, PThreadedCode22124, 2, PSend22128, PSend22130);
    
    MethodClosure MC_SMB_in_ = new_MethodClosure((Method)PMethod22122, HEADER(ClassReference_Class));
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
    Send PSend22133 = new_Send((Optr)self, SMB_shouldNotCall, 0);
    Array PThreadedCode22132 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22133, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22131 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22132, 2, PSend22133, self);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod22131, HEADER(ClassReference_Class));
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