#include <lib/class/Collections/Abstract/ArrayedCollection.h>


Optr layout_Collections_Abstract_ArrayedCollection_Class_class;


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
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // new:. 
    Send PSend1863 = new_Send((Optr)self, SMB_new_, 1, (Optr)int_0_Const);
    Array PThreadedCode1862 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend1863, (Optr)&t_method_return);
    Method PMethod1861 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1862, 1, PSend1863);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod1861, HEADER(Collections_Abstract_ArrayedCollection_Class));
    store_method(HEADER(Collections_Abstract_ArrayedCollection_Class), SMB_new, MC_SMB_new);
}


static void init_class_SMB_newFrom_() {
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray1865 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_newArray_0_1 = new_Variable_named(L"newArray", 0);
    Array PArray1866 = new_Array_with(1, (Optr)VAR_newArray_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1870 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    // new:. 
    Send PSend1869 = new_Send((Optr)self, SMB_new_, 1, (Optr)PSend1870);
    Assign PAssign1868 = new_Assign((Optr)VAR_newArray_0_1, (Optr)PSend1869);
    // size. 
    Send PSend1871 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray1873 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1875 = new_Send((Optr)VAR_aCollection_0_0, SMB_at_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend1876 = new_Send((Optr)VAR_newArray_0_1, SMB_at_put_, 2, (Optr)VAR_i_1_0, (Optr)PSend1875);
    Array PThreadedCode1874 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_newArray_0_1, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend1875, (Optr)&t_send2, (Optr)PSend1876, (Optr)&t_method_return);
    Block PBlock1872 = new_Block_with(PArray1873, empty_Array, PThreadedCode1874, 1, PSend1876);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend1877 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend1871, (Optr)PBlock1872);
    Array PThreadedCode1867 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign1868, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend1870, (Optr)&t_send1, (Optr)PSend1869, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend1871, (Optr)&t_push_closure, (Optr)PBlock1872, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend1877, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newArray_0_1, (Optr)&t_method_return);
    Method PMethod1864 = new_Method_with(PArray1865, PArray1866, empty_Array, PThreadedCode1867, 3, PAssign1868, PSend1877, VAR_newArray_0_1);
    
    MethodClosure MC_SMB_newFrom_ = new_MethodClosure((Method)PMethod1864, HEADER(Collections_Abstract_ArrayedCollection_Class));
    store_method(HEADER(Collections_Abstract_ArrayedCollection_Class), SMB_newFrom_, MC_SMB_newFrom_);
}


static void init_class_SMB_with_() {
    Symbol SMB_with_ = new_Symbol(L"with:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray1879 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Array PArray1880 = new_Array_with(1, (Optr)VAR_newCollection_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // new:. 
    Send PSend1883 = new_Send((Optr)self, SMB_new_, 1, (Optr)int_1_Const);
    Assign PAssign1882 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend1883);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend1884 = new_Send((Optr)VAR_newCollection_0_1, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)VAR_anObject_0_0);
    Array PThreadedCode1881 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign1882, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1883, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send2, (Optr)PSend1884, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod1878 = new_Method_with(PArray1879, PArray1880, empty_Array, PThreadedCode1881, 3, PAssign1882, PSend1884, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_with_ = new_MethodClosure((Method)PMethod1878, HEADER(Collections_Abstract_ArrayedCollection_Class));
    store_method(HEADER(Collections_Abstract_ArrayedCollection_Class), SMB_with_, MC_SMB_with_);
}


static void init_class_SMB_with_with_() {
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Variable VAR_firstObject_0_0 = new_Variable_named(L"firstObject", 0);
    Variable VAR_secondObject_0_1 = new_Variable_named(L"secondObject", 0);
    Array PArray1886 = new_Array_with(2, (Optr)VAR_firstObject_0_0, (Optr)VAR_secondObject_0_1);
    Variable VAR_newCollection_0_2 = new_Variable_named(L"newCollection", 0);
    Array PArray1887 = new_Array_with(1, (Optr)VAR_newCollection_0_2);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // new:. 
    Send PSend1890 = new_Send((Optr)self, SMB_new_, 1, (Optr)int_2_Const);
    Assign PAssign1889 = new_Assign((Optr)VAR_newCollection_0_2, (Optr)PSend1890);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend1891 = new_Send((Optr)VAR_newCollection_0_2, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)VAR_firstObject_0_0);
    // at:put:. 
    Send PSend1892 = new_Send((Optr)VAR_newCollection_0_2, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)VAR_secondObject_0_1);
    Array PThreadedCode1888 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign1889, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend1890, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_2, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_firstObject_0_0, (Optr)&t_send2, (Optr)PSend1891, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_2, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_secondObject_0_1, (Optr)&t_send2, (Optr)PSend1892, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_2, (Optr)&t_method_return);
    Method PMethod1885 = new_Method_with(PArray1886, PArray1887, empty_Array, PThreadedCode1888, 4, PAssign1889, PSend1891, PSend1892, VAR_newCollection_0_2);
    
    MethodClosure MC_SMB_with_with_ = new_MethodClosure((Method)PMethod1885, HEADER(Collections_Abstract_ArrayedCollection_Class));
    store_method(HEADER(Collections_Abstract_ArrayedCollection_Class), SMB_with_with_, MC_SMB_with_with_);
}


static void init_class_SMB_with_with_with_() {
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    Variable VAR_firstObject_0_0 = new_Variable_named(L"firstObject", 0);
    Variable VAR_secondObject_0_1 = new_Variable_named(L"secondObject", 0);
    Variable VAR_thirdObject_0_2 = new_Variable_named(L"thirdObject", 0);
    Array PArray1894 = new_Array_with(3, (Optr)VAR_firstObject_0_0, (Optr)VAR_secondObject_0_1, (Optr)VAR_thirdObject_0_2);
    Variable VAR_newCollection_0_3 = new_Variable_named(L"newCollection", 0);
    Array PArray1895 = new_Array_with(1, (Optr)VAR_newCollection_0_3);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // new:. 
    Send PSend1898 = new_Send((Optr)self, SMB_new_, 1, (Optr)int_3_Const);
    Assign PAssign1897 = new_Assign((Optr)VAR_newCollection_0_3, (Optr)PSend1898);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend1899 = new_Send((Optr)VAR_newCollection_0_3, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)VAR_firstObject_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend1900 = new_Send((Optr)VAR_newCollection_0_3, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)VAR_secondObject_0_1);
    // at:put:. 
    Send PSend1901 = new_Send((Optr)VAR_newCollection_0_3, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)VAR_thirdObject_0_2);
    Array PThreadedCode1896 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign1897, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend1898, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_3, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_firstObject_0_0, (Optr)&t_send2, (Optr)PSend1899, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_3, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_secondObject_0_1, (Optr)&t_send2, (Optr)PSend1900, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_3, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_variable, (Optr)VAR_thirdObject_0_2, (Optr)&t_send2, (Optr)PSend1901, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_3, (Optr)&t_method_return);
    Method PMethod1893 = new_Method_with(PArray1894, PArray1895, empty_Array, PThreadedCode1896, 5, PAssign1897, PSend1899, PSend1900, PSend1901, VAR_newCollection_0_3);
    
    MethodClosure MC_SMB_with_with_with_ = new_MethodClosure((Method)PMethod1893, HEADER(Collections_Abstract_ArrayedCollection_Class));
    store_method(HEADER(Collections_Abstract_ArrayedCollection_Class), SMB_with_with_with_, MC_SMB_with_with_with_);
}


static void init_class_SMB_withAll_() {
    Symbol SMB_withAll_ = new_Symbol(L"withAll:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray1903 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1905 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend1906 = new_Send((Optr)self, SMB_new_, 1, (Optr)PSend1905);
    // size. 
    Send PSend1907 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Symbol SMB_replaceFrom_to_with_ = new_Symbol(L"replaceFrom:to:with:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // replaceFrom:to:with:. 
    Send PSend1908 = new_Send((Optr)PSend1906, SMB_replaceFrom_to_with_, 3, (Optr)int_1_Const, (Optr)PSend1907, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode1904 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend1905, (Optr)&t_send1, (Optr)PSend1906, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend1907, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send3, (Optr)PSend1908, (Optr)&t_method_return);
    Method PMethod1902 = new_Method_with(PArray1903, empty_Array, empty_Array, PThreadedCode1904, 1, PSend1908);
    
    MethodClosure MC_SMB_withAll_ = new_MethodClosure((Method)PMethod1902, HEADER(Collections_Abstract_ArrayedCollection_Class));
    store_method(HEADER(Collections_Abstract_ArrayedCollection_Class), SMB_withAll_, MC_SMB_withAll_);
}

void init_Collections_Abstract_ArrayedCollection_layout() {
    layout_Collections_Abstract_ArrayedCollection_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collections_Abstract_ArrayedCollection_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Collections_Abstract_ArrayedCollection_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Collections_Abstract_ArrayedCollection_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Collections_Abstract_ArrayedCollection_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Collections_Abstract_ArrayedCollection_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_ArrayedCollection = new_Symbol(L"ArrayedCollection");
    Collections_Abstract_ArrayedCollection_Class = (Class)new_Class(Collections_Abstract_SequenceableCollection_Class, layout_Collections_Abstract_ArrayedCollection_Class_class);
    Collections_Abstract_ArrayedCollection_Class->layout = empty_object_layout;
    Collections_Abstract_ArrayedCollection_Class->name = SMB_ArrayedCollection;
    
}

void init_Collections_Abstract_ArrayedCollection_methods() {
    init_class_SMB_new();
    init_class_SMB_newFrom_();
    init_class_SMB_with_();
    init_class_SMB_with_with_();
    init_class_SMB_with_with_with_();
    init_class_SMB_withAll_();
    
}