#include <lib/class/Organization/ClassReference.h>


Optr layout_Organization_ClassReference_Class_class;
Optr slot_Organization_ClassReference_package;
Optr slot_Organization_ClassReference_pClass;
Optr layout_Organization_ClassReference;


static void init_SMB_fullName() {
    Symbol SMB_fullName = new_Symbol(L"fullName");
    Symbol SMB_package = new_Symbol(L"package");
    // package. 
    Send PSend21821 = new_Send((Optr)self, SMB_package, 0);
    // fullName. 
    Send PSend21822 = new_Send((Optr)PSend21821, SMB_fullName, 0);
    String string_21823 = new_String(L".");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_21823_Const = new_Constant((Optr)string_21823);
    // ,. 
    Send PSend21824 = new_Send((Optr)PSend21822, SMB__append_, 1, (Optr)string_21823_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend21825 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_name, 0);
    // ,. 
    Send PSend21826 = new_Send((Optr)PSend21824, SMB__append_, 1, (Optr)PSend21825);
    Array PThreadedCode21820 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21821, (Optr)&t_send0, (Optr)PSend21822, (Optr)&t_push1, (Optr)string_21823, (Optr)&t_send1, (Optr)PSend21824, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_send0, (Optr)PSend21825, (Optr)&t_send1, (Optr)PSend21826, (Optr)&t_method_return);
    Method PMethod21819 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21820, 1, PSend21826);
    
    MethodClosure MC_SMB_fullName = new_MethodClosure((Method)PMethod21819, ClassReference_Class);
    store_method(ClassReference_Class, SMB_fullName, MC_SMB_fullName);
}


static void init_SMB_asNode() {
    Symbol SMB_asNode = new_Symbol(L"asNode");
    Array PThreadedCode21828 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod21827 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21828, 1, self);
    
    MethodClosure MC_SMB_asNode = new_MethodClosure((Method)PMethod21827, ClassReference_Class);
    store_method(ClassReference_Class, SMB_asNode, MC_SMB_asNode);
}


static void init_SMB_ensurePinocchioClass_() {
    Symbol SMB_ensurePinocchioClass_ = new_Symbol(L"ensurePinocchioClass:");
    Variable VAR_aPinocchioClass_0_0 = new_Variable_named(L"aPinocchioClass", 0);
    Array PArray21830 = new_Array_with(1, (Optr)VAR_aPinocchioClass_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21833 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_shouldNotHappen = new_Symbol(L"shouldNotHappen");
    // shouldNotHappen. 
    Send PSend21837 = new_Send((Optr)self, SMB_shouldNotHappen, 0);
    Array PThreadedCode21836 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21837, (Optr)&t_block_return);
    Block PBlock21835 = new_Block_with(empty_Array, empty_Array, PThreadedCode21836, 1, PSend21837);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend21838 = new_Send((Optr)VAR_aPinocchioClass_0_0, SMB_ifNil_, 1, (Optr)PBlock21835);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend21841 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB__pequals_, 1, (Optr)VAR_aPinocchioClass_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_error = new_Symbol(L"error");
    // error. 
    Send PSend21845 = new_Send((Optr)self, SMB_error, 0);
    Array PThreadedCode21844 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21845, (Optr)&t_block_return);
    Block PBlock21843 = new_Block_with(empty_Array, empty_Array, PThreadedCode21844, 1, PSend21845);
    // ifFalse:. 
    Send PSend21842 = new_Send((Optr)PSend21841, SMB_ifFalse_, 1, (Optr)PBlock21843);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21846 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)slot_Organization_ClassReference_pClass);
    Array PThreadedCode21840 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_send1, (Optr)PSend21841, (Optr)&t_send_ifFalse_, (Optr)PSend21842, (Optr)PBlock21843, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_send1, (Optr)PSend21846, (Optr)&t_block_return);
    Block PBlock21839 = new_Block_with(empty_Array, empty_Array, PThreadedCode21840, 2, PSend21842, PSend21846);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend21847 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_ifNotNil_, 1, (Optr)PBlock21839);
    Assign PAssign21848 = new_Assign((Optr)slot_Organization_ClassReference_pClass, (Optr)VAR_aPinocchioClass_0_0);
    Array PThreadedCode21834 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_push_closure, (Optr)PBlock21835, (Optr)&t_send1, (Optr)PSend21838, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_push_closure, (Optr)PBlock21839, (Optr)&t_send1, (Optr)PSend21847, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21848, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock21832 = new_Block_with(PArray21833, empty_Array, PThreadedCode21834, 3, PSend21838, PSend21847, PAssign21848);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21849 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21832);
    Array PThreadedCode21831 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21832, (Optr)&t_send1, (Optr)PSend21849, (Optr)&t_method_return);
    Method PMethod21829 = new_Method_with(PArray21830, empty_Array, empty_Array, PThreadedCode21831, 1, PSend21849);
    
    MethodClosure MC_SMB_ensurePinocchioClass_ = new_MethodClosure((Method)PMethod21829, ClassReference_Class);
    store_method(ClassReference_Class, SMB_ensurePinocchioClass_, MC_SMB_ensurePinocchioClass_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray21851 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitClassReference_ = new_Symbol(L"visitClassReference:");
    // visitClassReference:. 
    Send PSend21853 = new_Send((Optr)VAR_visitor_0_0, SMB_visitClassReference_, 1, (Optr)self);
    Array PThreadedCode21852 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21853, (Optr)&t_method_return);
    Method PMethod21850 = new_Method_with(PArray21851, empty_Array, empty_Array, PThreadedCode21852, 1, PSend21853);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod21850, ClassReference_Class);
    store_method(ClassReference_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_package() {
    Symbol SMB_package = new_Symbol(L"package");
    Array PThreadedCode21855 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_package, (Optr)&t_method_return);
    Method PMethod21854 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21855, 1, slot_Organization_ClassReference_package);
    
    MethodClosure MC_SMB_package = new_MethodClosure((Method)PMethod21854, ClassReference_Class);
    store_method(ClassReference_Class, SMB_package, MC_SMB_package);
}


static void init_SMB_package_() {
    Symbol SMB_package_ = new_Symbol(L"package:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray21857 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign21859 = new_Assign((Optr)slot_Organization_ClassReference_package, (Optr)VAR_anObject_0_0);
    Array PThreadedCode21858 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21859, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21856 = new_Method_with(PArray21857, empty_Array, empty_Array, PThreadedCode21858, 2, PAssign21859, self);
    
    MethodClosure MC_SMB_package_ = new_MethodClosure((Method)PMethod21856, ClassReference_Class);
    store_method(ClassReference_Class, SMB_package_, MC_SMB_package_);
}


static void init_SMB_packagesDo_() {
    Symbol SMB_packagesDo_ = new_Symbol(L"packagesDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray21861 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode21862 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod21860 = new_Method_with(PArray21861, empty_Array, empty_Array, PThreadedCode21862, 1, self);
    
    MethodClosure MC_SMB_packagesDo_ = new_MethodClosure((Method)PMethod21860, ClassReference_Class);
    store_method(ClassReference_Class, SMB_packagesDo_, MC_SMB_packagesDo_);
}


static void init_SMB_pclass() {
    Symbol SMB_pclass = new_Symbol(L"pclass");
    Array PThreadedCode21864 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_method_return);
    Method PMethod21863 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21864, 1, slot_Organization_ClassReference_pClass);
    
    MethodClosure MC_SMB_pclass = new_MethodClosure((Method)PMethod21863, ClassReference_Class);
    store_method(ClassReference_Class, SMB_pclass, MC_SMB_pclass);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21866 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper21868 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    String string_21871 = new_String(L" (");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_21871_Const = new_Constant((Optr)string_21871);
    // <<. 
    Send PSend21872 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_21871_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend21873 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_name, 0);
    // <<. 
    Send PSend21874 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21873);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend21875 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode21870 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_21871, (Optr)&t_send1, (Optr)PSend21872, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_send0, (Optr)PSend21873, (Optr)&t_send1, (Optr)PSend21874, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend21875, (Optr)&t_block_return);
    Block PBlock21869 = new_Block_with(empty_Array, empty_Array, PThreadedCode21870, 3, PSend21872, PSend21874, PSend21875);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend21876 = new_Send((Optr)slot_Organization_ClassReference_pClass, SMB_ifNotNil_, 1, (Optr)PBlock21869);
    Array PThreadedCode21867 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper21868, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_ClassReference_pClass, (Optr)&t_push_closure, (Optr)PBlock21869, (Optr)&t_send1, (Optr)PSend21876, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21865 = new_Method_with(PArray21866, empty_Array, empty_Array, PThreadedCode21867, 3, PSuper21868, PSend21876, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21865, ClassReference_Class);
    store_method(ClassReference_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_lookupIn_at_() {
    Symbol SMB_lookupIn_at_ = new_Symbol(L"lookupIn:at:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray21878 = new_Array_with(2, (Optr)VAR_aCollection_0_0, (Optr)VAR_index_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21881 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend21883 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend21884 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)PSend21883);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray21889 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_path_ = new_Symbol(L"path:");
    // path:. 
    Send PSend21891 = new_Send((Optr)VAR__receiver__2_0, SMB_path_, 1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_index_ = new_Symbol(L"index:");
    // index:. 
    Send PSend21892 = new_Send((Optr)VAR__receiver__2_0, SMB_index_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend21893 = new_Send((Optr)VAR__receiver__2_0, SMB_signal, 0);
    Array PThreadedCode21890 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send1, (Optr)PSend21891, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend21892, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend21893, (Optr)&t_method_return);
    Block PBlock21888 = new_Block_with(PArray21889, empty_Array, PThreadedCode21890, 3, PSend21891, PSend21892, PSend21893);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21894 = new_Send((Optr)PNestedClassException_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21895 = new_Send((Optr)PBlock21888, SMB_value_, 1, (Optr)PSend21894);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21896 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend21895);
    Array PThreadedCode21887 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_closure, (Optr)PBlock21888, (Optr)&t_push_class_reference, (Optr)PNestedClassException_classReference, (Optr)&t_send0, (Optr)PSend21894, (Optr)&t_send1, (Optr)PSend21895, (Optr)&t_send1, (Optr)PSend21896, (Optr)&t_block_return);
    Block PBlock21886 = new_Block_with(empty_Array, empty_Array, PThreadedCode21887, 1, PSend21896);
    // ifFalse:. 
    Send PSend21885 = new_Send((Optr)PSend21884, SMB_ifFalse_, 1, (Optr)PBlock21886);
    Array PThreadedCode21882 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend21883, (Optr)&t_send1, (Optr)PSend21884, (Optr)&t_send_ifFalse_, (Optr)PSend21885, (Optr)PBlock21886, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock21880 = new_Block_with(PArray21881, empty_Array, PThreadedCode21882, 2, PSend21885, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21897 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21880);
    Array PThreadedCode21879 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21880, (Optr)&t_send1, (Optr)PSend21897, (Optr)&t_method_return);
    Method PMethod21877 = new_Method_with(PArray21878, empty_Array, empty_Array, PThreadedCode21879, 1, PSend21897);
    
    MethodClosure MC_SMB_lookupIn_at_ = new_MethodClosure((Method)PMethod21877, ClassReference_Class);
    store_method(ClassReference_Class, SMB_lookupIn_at_, MC_SMB_lookupIn_at_);
}


static void init_class_SMB_in_() {
    Symbol SMB_in_ = new_Symbol(L"in:");
    Variable VAR_package_0_0 = new_Variable_named(L"package", 0);
    Array PArray21899 = new_Array_with(1, (Optr)VAR_package_0_0);
    Symbol SMB_shouldNotHappen = new_Symbol(L"shouldNotHappen");
    // shouldNotHappen. 
    Send PSend21903 = new_Send((Optr)self, SMB_shouldNotHappen, 0);
    Array PThreadedCode21902 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21903, (Optr)&t_block_return);
    Block PBlock21901 = new_Block_with(empty_Array, empty_Array, PThreadedCode21902, 1, PSend21903);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend21904 = new_Send((Optr)VAR_package_0_0, SMB_ifNil_, 1, (Optr)PBlock21901);
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper21905 = new_Super(SMB_new, 0);
    Symbol SMB_package_ = new_Symbol(L"package:");
    // package:. 
    Send PSend21906 = new_Send((Optr)PSuper21905, SMB_package_, 1, (Optr)VAR_package_0_0);
    Array PThreadedCode21900 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_package_0_0, (Optr)&t_push_closure, (Optr)PBlock21901, (Optr)&t_send1, (Optr)PSend21904, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper21905, (Optr)&t_push_variable, (Optr)VAR_package_0_0, (Optr)&t_send1, (Optr)PSend21906, (Optr)&t_method_return);
    Method PMethod21898 = new_Method_with(PArray21899, empty_Array, empty_Array, PThreadedCode21900, 2, PSend21904, PSend21906);
    
    MethodClosure MC_SMB_in_ = new_MethodClosure((Method)PMethod21898, HEADER(ClassReference_Class));
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
    Send PSend21909 = new_Send((Optr)self, SMB_shouldNotCall, 0);
    Array PThreadedCode21908 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21909, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21907 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21908, 2, PSend21909, self);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod21907, HEADER(ClassReference_Class));
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