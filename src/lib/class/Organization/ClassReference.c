#include <lib/class/Organization/ClassReference.h>


Optr layout_Organization_ClassReference_Class_class;
Optr slot_Organization_ClassReference_package;
Optr slot_Organization_ClassReference_pClass;
Optr layout_Organization_ClassReference;


static void init_SMB_fullName() {
    Symbol SMB_fullName = new_Symbol(L"fullName");
    Symbol SMB_package = new_Symbol(L"package");
    // package. 
<<<<<<< HEAD
    Send PSend22002 = new_Send((Optr)self, SMB_package, 0);
    // fullName. 
    Send PSend22003 = new_Send((Optr)PSend22002, SMB_fullName, 0);
    String string_22004 = new_String(L".");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_22004_Const = new_Constant((Optr)string_22004);
    // ,. 
    Send PSend22005 = new_Send((Optr)PSend22003, SMB__append_, 1, (Optr)string_22004_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend22006 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_name, 0);
    // ,. 
    Send PSend22007 = new_Send((Optr)PSend22005, SMB__append_, 1, (Optr)PSend22006);
    Array PThreadedCode22001 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22002, (Optr)&t_send0, (Optr)PSend22003, (Optr)&t_push1, (Optr)string_22004, (Optr)&t_send1, (Optr)PSend22005, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_send0, (Optr)PSend22006, (Optr)&t_send1, (Optr)PSend22007, (Optr)&t_method_return);
    Method PMethod22000 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22001, 1, PSend22007);
    
    MethodClosure MC_SMB_fullName = new_MethodClosure((Method)PMethod22000, ClassReference_Class);
=======
    Send PSend21819 = new_Send((Optr)self, SMB_package, 0);
    // fullName. 
    Send PSend21820 = new_Send((Optr)PSend21819, SMB_fullName, 0);
    String string_21821 = new_String(L".");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_21821_Const = new_Constant((Optr)string_21821);
    // ,. 
    Send PSend21822 = new_Send((Optr)PSend21820, SMB__append_, 1, (Optr)string_21821_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend21823 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_name, 0);
    // ,. 
    Send PSend21824 = new_Send((Optr)PSend21822, SMB__append_, 1, (Optr)PSend21823);
    Array PThreadedCode21818 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21819, (Optr)&t_send0, (Optr)PSend21820, (Optr)&t_push1, (Optr)string_21821, (Optr)&t_send1, (Optr)PSend21822, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_send0, (Optr)PSend21823, (Optr)&t_send1, (Optr)PSend21824, (Optr)&t_method_return);
    Method PMethod21817 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21818, 1, PSend21824);
    
    MethodClosure MC_SMB_fullName = new_MethodClosure((Method)PMethod21817, ClassReference_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(ClassReference_Class, SMB_fullName, MC_SMB_fullName);
}


static void init_SMB_asNode() {
    Symbol SMB_asNode = new_Symbol(L"asNode");
<<<<<<< HEAD
    Array PThreadedCode22009 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod22008 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22009, 1, self);
    
    MethodClosure MC_SMB_asNode = new_MethodClosure((Method)PMethod22008, ClassReference_Class);
=======
    Array PThreadedCode21826 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod21825 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21826, 1, self);
    
    MethodClosure MC_SMB_asNode = new_MethodClosure((Method)PMethod21825, ClassReference_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(ClassReference_Class, SMB_asNode, MC_SMB_asNode);
}


static void init_SMB_ensurePinocchioClass_() {
    Symbol SMB_ensurePinocchioClass_ = new_Symbol(L"ensurePinocchioClass:");
    Variable VAR_aPinocchioClass_0_0 = new_Variable_named(L"aPinocchioClass", 0);
<<<<<<< HEAD
    Array PArray22011 = new_Array_with(1, (Optr)VAR_aPinocchioClass_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22014 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_shouldNotHappen = new_Symbol(L"shouldNotHappen");
    // shouldNotHappen. 
    Send PSend22018 = new_Send((Optr)self, SMB_shouldNotHappen, 0);
    Array PThreadedCode22017 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22018, (Optr)&t_block_return);
    Block PBlock22016 = new_Block_with(empty_Array, empty_Array, PThreadedCode22017, 1, PSend22018);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22019 = new_Send((Optr)VAR_aPinocchioClass_0_0, SMB_ifNil_, 1, (Optr)PBlock22016);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend22022 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB__pequals_, 1, (Optr)VAR_aPinocchioClass_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_error = new_Symbol(L"error");
    // error. 
    Send PSend22026 = new_Send((Optr)self, SMB_error, 0);
    Array PThreadedCode22025 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22026, (Optr)&t_block_return);
    Block PBlock22024 = new_Block_with(empty_Array, empty_Array, PThreadedCode22025, 1, PSend22026);
    // ifFalse:. 
    Send PSend22023 = new_Send((Optr)PSend22022, SMB_ifFalse_, 1, (Optr)PBlock22024);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22027 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)slot_Organization_ClassReference_pClass);
    Array PThreadedCode22021 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_send1, (Optr)PSend22022, (Optr)&t_send_ifFalse_, (Optr)PSend22023, (Optr)PBlock22024, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_send1, (Optr)PSend22027, (Optr)&t_block_return);
    Block PBlock22020 = new_Block_with(empty_Array, empty_Array, PThreadedCode22021, 2, PSend22023, PSend22027);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22028 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_ifNotNil_, 1, (Optr)PBlock22020);
    Assign PAssign22029 = new_Assign((Optr)slot_Organization_ClassReference_pClass, (Optr)VAR_aPinocchioClass_0_0);
    Array PThreadedCode22015 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_push_closure, (Optr)PBlock22016, (Optr)&t_send1, (Optr)PSend22019, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_push_closure, (Optr)PBlock22020, (Optr)&t_send1, (Optr)PSend22028, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22029, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock22013 = new_Block_with(PArray22014, empty_Array, PThreadedCode22015, 3, PSend22019, PSend22028, PAssign22029);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22030 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22013);
    Array PThreadedCode22012 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22013, (Optr)&t_send1, (Optr)PSend22030, (Optr)&t_method_return);
    Method PMethod22010 = new_Method_with(PArray22011, empty_Array, empty_Array, PThreadedCode22012, 1, PSend22030);
    
    MethodClosure MC_SMB_ensurePinocchioClass_ = new_MethodClosure((Method)PMethod22010, ClassReference_Class);
=======
    Array PArray21828 = new_Array_with(1, (Optr)VAR_aPinocchioClass_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21831 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_shouldNotHappen = new_Symbol(L"shouldNotHappen");
    // shouldNotHappen. 
    Send PSend21835 = new_Send((Optr)self, SMB_shouldNotHappen, 0);
    Array PThreadedCode21834 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21835, (Optr)&t_block_return);
    Block PBlock21833 = new_Block_with(empty_Array, empty_Array, PThreadedCode21834, 1, PSend21835);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend21836 = new_Send((Optr)VAR_aPinocchioClass_0_0, SMB_ifNil_, 1, (Optr)PBlock21833);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend21839 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB__pequals_, 1, (Optr)VAR_aPinocchioClass_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_error = new_Symbol(L"error");
    // error. 
    Send PSend21843 = new_Send((Optr)self, SMB_error, 0);
    Array PThreadedCode21842 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21843, (Optr)&t_block_return);
    Block PBlock21841 = new_Block_with(empty_Array, empty_Array, PThreadedCode21842, 1, PSend21843);
    // ifFalse:. 
    Send PSend21840 = new_Send((Optr)PSend21839, SMB_ifFalse_, 1, (Optr)PBlock21841);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21844 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)slot_Organization_ClassReference_pClass);
    Array PThreadedCode21838 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_send1, (Optr)PSend21839, (Optr)&t_send_ifFalse_, (Optr)PSend21840, (Optr)PBlock21841, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_send1, (Optr)PSend21844, (Optr)&t_block_return);
    Block PBlock21837 = new_Block_with(empty_Array, empty_Array, PThreadedCode21838, 2, PSend21840, PSend21844);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend21845 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_ifNotNil_, 1, (Optr)PBlock21837);
    Assign PAssign21846 = new_Assign((Optr)slot_Organization_ClassReference_pClass, (Optr)VAR_aPinocchioClass_0_0);
    Array PThreadedCode21832 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_push_closure, (Optr)PBlock21833, (Optr)&t_send1, (Optr)PSend21836, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_push_closure, (Optr)PBlock21837, (Optr)&t_send1, (Optr)PSend21845, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21846, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock21830 = new_Block_with(PArray21831, empty_Array, PThreadedCode21832, 3, PSend21836, PSend21845, PAssign21846);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21847 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21830);
    Array PThreadedCode21829 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21830, (Optr)&t_send1, (Optr)PSend21847, (Optr)&t_method_return);
    Method PMethod21827 = new_Method_with(PArray21828, empty_Array, empty_Array, PThreadedCode21829, 1, PSend21847);
    
    MethodClosure MC_SMB_ensurePinocchioClass_ = new_MethodClosure((Method)PMethod21827, ClassReference_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(ClassReference_Class, SMB_ensurePinocchioClass_, MC_SMB_ensurePinocchioClass_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
<<<<<<< HEAD
    Array PArray22032 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitClassReference_ = new_Symbol(L"visitClassReference:");
    // visitClassReference:. 
    Send PSend22034 = new_Send((Optr)VAR_visitor_0_0, SMB_visitClassReference_, 1, (Optr)self);
    Array PThreadedCode22033 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22034, (Optr)&t_method_return);
    Method PMethod22031 = new_Method_with(PArray22032, empty_Array, empty_Array, PThreadedCode22033, 1, PSend22034);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod22031, ClassReference_Class);
=======
    Array PArray21849 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitClassReference_ = new_Symbol(L"visitClassReference:");
    // visitClassReference:. 
    Send PSend21851 = new_Send((Optr)VAR_visitor_0_0, SMB_visitClassReference_, 1, (Optr)self);
    Array PThreadedCode21850 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21851, (Optr)&t_method_return);
    Method PMethod21848 = new_Method_with(PArray21849, empty_Array, empty_Array, PThreadedCode21850, 1, PSend21851);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod21848, ClassReference_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(ClassReference_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_package() {
    Symbol SMB_package = new_Symbol(L"package");
<<<<<<< HEAD
    Array PThreadedCode22036 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_package, (Optr)&t_method_return);
    Method PMethod22035 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22036, 1, slot_Organization_ClassReference_package);
    
    MethodClosure MC_SMB_package = new_MethodClosure((Method)PMethod22035, ClassReference_Class);
=======
    Array PThreadedCode21853 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_package, (Optr)&t_method_return);
    Method PMethod21852 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21853, 1, slot_Organization_ClassReference_package);
    
    MethodClosure MC_SMB_package = new_MethodClosure((Method)PMethod21852, ClassReference_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(ClassReference_Class, SMB_package, MC_SMB_package);
}


static void init_SMB_package_() {
    Symbol SMB_package_ = new_Symbol(L"package:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray22038 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign22040 = new_Assign((Optr)slot_Organization_ClassReference_package, (Optr)VAR_anObject_0_0);
    Array PThreadedCode22039 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22040, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22037 = new_Method_with(PArray22038, empty_Array, empty_Array, PThreadedCode22039, 2, PAssign22040, self);
    
    MethodClosure MC_SMB_package_ = new_MethodClosure((Method)PMethod22037, ClassReference_Class);
=======
    Array PArray21855 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign21857 = new_Assign((Optr)slot_Organization_ClassReference_package, (Optr)VAR_anObject_0_0);
    Array PThreadedCode21856 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21857, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21854 = new_Method_with(PArray21855, empty_Array, empty_Array, PThreadedCode21856, 2, PAssign21857, self);
    
    MethodClosure MC_SMB_package_ = new_MethodClosure((Method)PMethod21854, ClassReference_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(ClassReference_Class, SMB_package_, MC_SMB_package_);
}


static void init_SMB_packagesDo_() {
    Symbol SMB_packagesDo_ = new_Symbol(L"packagesDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
<<<<<<< HEAD
    Array PArray22042 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22043 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod22041 = new_Method_with(PArray22042, empty_Array, empty_Array, PThreadedCode22043, 1, self);
    
    MethodClosure MC_SMB_packagesDo_ = new_MethodClosure((Method)PMethod22041, ClassReference_Class);
=======
    Array PArray21859 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode21860 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod21858 = new_Method_with(PArray21859, empty_Array, empty_Array, PThreadedCode21860, 1, self);
    
    MethodClosure MC_SMB_packagesDo_ = new_MethodClosure((Method)PMethod21858, ClassReference_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(ClassReference_Class, SMB_packagesDo_, MC_SMB_packagesDo_);
}


static void init_SMB_pclass() {
    Symbol SMB_pclass = new_Symbol(L"pclass");
<<<<<<< HEAD
    Array PThreadedCode22045 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_method_return);
    Method PMethod22044 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22045, 1, slot_Organization_ClassReference_pClass);
    
    MethodClosure MC_SMB_pclass = new_MethodClosure((Method)PMethod22044, ClassReference_Class);
=======
    Array PThreadedCode21862 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_method_return);
    Method PMethod21861 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21862, 1, slot_Organization_ClassReference_pClass);
    
    MethodClosure MC_SMB_pclass = new_MethodClosure((Method)PMethod21861, ClassReference_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(ClassReference_Class, SMB_pclass, MC_SMB_pclass);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
<<<<<<< HEAD
    Array PArray22047 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper22049 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    String string_22052 = new_String(L" (");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_22052_Const = new_Constant((Optr)string_22052);
    // <<. 
    Send PSend22053 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_22052_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend22054 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_name, 0);
    // <<. 
    Send PSend22055 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend22054);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend22056 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode22051 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_22052, (Optr)&t_send1, (Optr)PSend22053, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_send0, (Optr)PSend22054, (Optr)&t_send1, (Optr)PSend22055, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend22056, (Optr)&t_block_return);
    Block PBlock22050 = new_Block_with(empty_Array, empty_Array, PThreadedCode22051, 3, PSend22053, PSend22055, PSend22056);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend22057 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_ifNotNil_, 1, (Optr)PBlock22050);
    Array PThreadedCode22048 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper22049, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_push_closure, (Optr)PBlock22050, (Optr)&t_send1, (Optr)PSend22057, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22046 = new_Method_with(PArray22047, empty_Array, empty_Array, PThreadedCode22048, 3, PSuper22049, PSend22057, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod22046, ClassReference_Class);
=======
    Array PArray21864 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper21866 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    String string_21869 = new_String(L" (");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_21869_Const = new_Constant((Optr)string_21869);
    // <<. 
    Send PSend21870 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_21869_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend21871 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_name, 0);
    // <<. 
    Send PSend21872 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21871);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend21873 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode21868 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_21869, (Optr)&t_send1, (Optr)PSend21870, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_send0, (Optr)PSend21871, (Optr)&t_send1, (Optr)PSend21872, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend21873, (Optr)&t_block_return);
    Block PBlock21867 = new_Block_with(empty_Array, empty_Array, PThreadedCode21868, 3, PSend21870, PSend21872, PSend21873);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend21874 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_ifNotNil_, 1, (Optr)PBlock21867);
    Array PThreadedCode21865 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper21866, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_push_closure, (Optr)PBlock21867, (Optr)&t_send1, (Optr)PSend21874, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21863 = new_Method_with(PArray21864, empty_Array, empty_Array, PThreadedCode21865, 3, PSuper21866, PSend21874, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21863, ClassReference_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(ClassReference_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_lookupIn_at_() {
    Symbol SMB_lookupIn_at_ = new_Symbol(L"lookupIn:at:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
<<<<<<< HEAD
    Array PArray22059 = new_Array_with(2, (Optr)VAR_aCollection_0_0, (Optr)VAR_index_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22062 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend22064 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend22065 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)PSend22064);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray22070 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_path_ = new_Symbol(L"path:");
    // path:. 
    Send PSend22072 = new_Send((Optr)VAR__receiver__2_0, SMB_path_, 1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_index_ = new_Symbol(L"index:");
    // index:. 
    Send PSend22073 = new_Send((Optr)VAR__receiver__2_0, SMB_index_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22074 = new_Send((Optr)VAR__receiver__2_0, SMB_signal, 0);
    Array PThreadedCode22071 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send1, (Optr)PSend22072, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend22073, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend22074, (Optr)&t_method_return);
    Block PBlock22069 = new_Block_with(PArray22070, empty_Array, PThreadedCode22071, 3, PSend22072, PSend22073, PSend22074);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22075 = new_Send((Optr)PNestedClassException_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22076 = new_Send((Optr)PBlock22069, SMB_value_, 1, (Optr)PSend22075);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22077 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22076);
    Array PThreadedCode22068 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_closure, (Optr)PBlock22069, (Optr)&t_push_class_reference, (Optr)PNestedClassException_classReference, (Optr)&t_send0, (Optr)PSend22075, (Optr)&t_send1, (Optr)PSend22076, (Optr)&t_send1, (Optr)PSend22077, (Optr)&t_block_return);
    Block PBlock22067 = new_Block_with(empty_Array, empty_Array, PThreadedCode22068, 1, PSend22077);
    // ifFalse:. 
    Send PSend22066 = new_Send((Optr)PSend22065, SMB_ifFalse_, 1, (Optr)PBlock22067);
    Array PThreadedCode22063 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend22064, (Optr)&t_send1, (Optr)PSend22065, (Optr)&t_send_ifFalse_, (Optr)PSend22066, (Optr)PBlock22067, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22061 = new_Block_with(PArray22062, empty_Array, PThreadedCode22063, 2, PSend22066, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22078 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22061);
    Array PThreadedCode22060 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22061, (Optr)&t_send1, (Optr)PSend22078, (Optr)&t_method_return);
    Method PMethod22058 = new_Method_with(PArray22059, empty_Array, empty_Array, PThreadedCode22060, 1, PSend22078);
    
    MethodClosure MC_SMB_lookupIn_at_ = new_MethodClosure((Method)PMethod22058, ClassReference_Class);
=======
    Array PArray21876 = new_Array_with(2, (Optr)VAR_aCollection_0_0, (Optr)VAR_index_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21879 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend21881 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend21882 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)PSend21881);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray21887 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_path_ = new_Symbol(L"path:");
    // path:. 
    Send PSend21889 = new_Send((Optr)VAR__receiver__2_0, SMB_path_, 1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_index_ = new_Symbol(L"index:");
    // index:. 
    Send PSend21890 = new_Send((Optr)VAR__receiver__2_0, SMB_index_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend21891 = new_Send((Optr)VAR__receiver__2_0, SMB_signal, 0);
    Array PThreadedCode21888 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send1, (Optr)PSend21889, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend21890, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend21891, (Optr)&t_method_return);
    Block PBlock21886 = new_Block_with(PArray21887, empty_Array, PThreadedCode21888, 3, PSend21889, PSend21890, PSend21891);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21892 = new_Send((Optr)PNestedClassException_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21893 = new_Send((Optr)PBlock21886, SMB_value_, 1, (Optr)PSend21892);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21894 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend21893);
    Array PThreadedCode21885 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_closure, (Optr)PBlock21886, (Optr)&t_push_class_reference, (Optr)PNestedClassException_classReference, (Optr)&t_send0, (Optr)PSend21892, (Optr)&t_send1, (Optr)PSend21893, (Optr)&t_send1, (Optr)PSend21894, (Optr)&t_block_return);
    Block PBlock21884 = new_Block_with(empty_Array, empty_Array, PThreadedCode21885, 1, PSend21894);
    // ifFalse:. 
    Send PSend21883 = new_Send((Optr)PSend21882, SMB_ifFalse_, 1, (Optr)PBlock21884);
    Array PThreadedCode21880 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend21881, (Optr)&t_send1, (Optr)PSend21882, (Optr)&t_send_ifFalse_, (Optr)PSend21883, (Optr)PBlock21884, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock21878 = new_Block_with(PArray21879, empty_Array, PThreadedCode21880, 2, PSend21883, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21895 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21878);
    Array PThreadedCode21877 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21878, (Optr)&t_send1, (Optr)PSend21895, (Optr)&t_method_return);
    Method PMethod21875 = new_Method_with(PArray21876, empty_Array, empty_Array, PThreadedCode21877, 1, PSend21895);
    
    MethodClosure MC_SMB_lookupIn_at_ = new_MethodClosure((Method)PMethod21875, ClassReference_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(ClassReference_Class, SMB_lookupIn_at_, MC_SMB_lookupIn_at_);
}


static void init_class_SMB_in_() {
    Symbol SMB_in_ = new_Symbol(L"in:");
    Variable VAR_package_0_0 = new_Variable_named(L"package", 0);
<<<<<<< HEAD
    Array PArray22080 = new_Array_with(1, (Optr)VAR_package_0_0);
    Symbol SMB_shouldNotHappen = new_Symbol(L"shouldNotHappen");
    // shouldNotHappen. 
    Send PSend22084 = new_Send((Optr)self, SMB_shouldNotHappen, 0);
    Array PThreadedCode22083 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22084, (Optr)&t_block_return);
    Block PBlock22082 = new_Block_with(empty_Array, empty_Array, PThreadedCode22083, 1, PSend22084);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22085 = new_Send((Optr)VAR_package_0_0, SMB_ifNil_, 1, (Optr)PBlock22082);
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper22086 = new_Super(SMB_new, 0);
    Symbol SMB_package_ = new_Symbol(L"package:");
    // package:. 
    Send PSend22087 = new_Send((Optr)PSuper22086, SMB_package_, 1, (Optr)VAR_package_0_0);
    Array PThreadedCode22081 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_package_0_0, (Optr)&t_push_closure, (Optr)PBlock22082, (Optr)&t_send1, (Optr)PSend22085, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper22086, (Optr)&t_push_variable, (Optr)VAR_package_0_0, (Optr)&t_send1, (Optr)PSend22087, (Optr)&t_method_return);
    Method PMethod22079 = new_Method_with(PArray22080, empty_Array, empty_Array, PThreadedCode22081, 2, PSend22085, PSend22087);
    
    MethodClosure MC_SMB_in_ = new_MethodClosure((Method)PMethod22079, HEADER(ClassReference_Class));
=======
    Array PArray21897 = new_Array_with(1, (Optr)VAR_package_0_0);
    Symbol SMB_shouldNotHappen = new_Symbol(L"shouldNotHappen");
    // shouldNotHappen. 
    Send PSend21901 = new_Send((Optr)self, SMB_shouldNotHappen, 0);
    Array PThreadedCode21900 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21901, (Optr)&t_block_return);
    Block PBlock21899 = new_Block_with(empty_Array, empty_Array, PThreadedCode21900, 1, PSend21901);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend21902 = new_Send((Optr)VAR_package_0_0, SMB_ifNil_, 1, (Optr)PBlock21899);
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper21903 = new_Super(SMB_new, 0);
    Symbol SMB_package_ = new_Symbol(L"package:");
    // package:. 
    Send PSend21904 = new_Send((Optr)PSuper21903, SMB_package_, 1, (Optr)VAR_package_0_0);
    Array PThreadedCode21898 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_package_0_0, (Optr)&t_push_closure, (Optr)PBlock21899, (Optr)&t_send1, (Optr)PSend21902, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper21903, (Optr)&t_push_variable, (Optr)VAR_package_0_0, (Optr)&t_send1, (Optr)PSend21904, (Optr)&t_method_return);
    Method PMethod21896 = new_Method_with(PArray21897, empty_Array, empty_Array, PThreadedCode21898, 2, PSend21902, PSend21904);
    
    MethodClosure MC_SMB_in_ = new_MethodClosure((Method)PMethod21896, HEADER(ClassReference_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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
<<<<<<< HEAD
    Send PSend22090 = new_Send((Optr)self, SMB_shouldNotCall, 0);
    Array PThreadedCode22089 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22090, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22088 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22089, 2, PSend22090, self);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod22088, HEADER(ClassReference_Class));
=======
    Send PSend21907 = new_Send((Optr)self, SMB_shouldNotCall, 0);
    Array PThreadedCode21906 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21907, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21905 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21906, 2, PSend21907, self);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod21905, HEADER(ClassReference_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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