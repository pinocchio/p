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
    Send PSend1872 = new_Send((Optr)self, SMB_new_, 1, (Optr)int_0_Const);
    Array PThreadedCode1871 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend1872, (Optr)&t_method_return);
    Method PMethod1870 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1871, 1, PSend1872);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod1870, HEADER(Collections_Abstract_ArrayedCollection_Class));
    store_method(HEADER(Collections_Abstract_ArrayedCollection_Class), SMB_new, MC_SMB_new);
}


static void init_class_SMB_newFrom_() {
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray1874 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_newArray_0_1 = new_Variable_named(L"newArray", 0);
    Array PArray1875 = new_Array_with(1, (Optr)VAR_newArray_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1879 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    // new:. 
    Send PSend1878 = new_Send((Optr)self, SMB_new_, 1, (Optr)PSend1879);
    Assign PAssign1877 = new_Assign((Optr)VAR_newArray_0_1, (Optr)PSend1878);
    // size. 
    Send PSend1880 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray1882 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1884 = new_Send((Optr)VAR_aCollection_0_0, SMB_at_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend1885 = new_Send((Optr)VAR_newArray_0_1, SMB_at_put_, 2, (Optr)VAR_i_1_0, (Optr)PSend1884);
    Array PThreadedCode1883 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_newArray_0_1, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend1884, (Optr)&t_send2, (Optr)PSend1885, (Optr)&t_method_return);
    Block PBlock1881 = new_Block_with(PArray1882, empty_Array, PThreadedCode1883, 1, PSend1885);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend1886 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend1880, (Optr)PBlock1881);
    Array PThreadedCode1876 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign1877, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend1879, (Optr)&t_send1, (Optr)PSend1878, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend1880, (Optr)&t_push_closure, (Optr)PBlock1881, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend1886, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newArray_0_1, (Optr)&t_method_return);
    Method PMethod1873 = new_Method_with(PArray1874, PArray1875, empty_Array, PThreadedCode1876, 3, PAssign1877, PSend1886, VAR_newArray_0_1);
    
    MethodClosure MC_SMB_newFrom_ = new_MethodClosure((Method)PMethod1873, HEADER(Collections_Abstract_ArrayedCollection_Class));
    store_method(HEADER(Collections_Abstract_ArrayedCollection_Class), SMB_newFrom_, MC_SMB_newFrom_);
}


static void init_class_SMB_with_() {
    Symbol SMB_with_ = new_Symbol(L"with:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray1888 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Array PArray1889 = new_Array_with(1, (Optr)VAR_newCollection_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // new:. 
    Send PSend1892 = new_Send((Optr)self, SMB_new_, 1, (Optr)int_1_Const);
    Assign PAssign1891 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend1892);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend1893 = new_Send((Optr)VAR_newCollection_0_1, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)VAR_anObject_0_0);
    Array PThreadedCode1890 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign1891, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1892, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send2, (Optr)PSend1893, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod1887 = new_Method_with(PArray1888, PArray1889, empty_Array, PThreadedCode1890, 3, PAssign1891, PSend1893, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_with_ = new_MethodClosure((Method)PMethod1887, HEADER(Collections_Abstract_ArrayedCollection_Class));
    store_method(HEADER(Collections_Abstract_ArrayedCollection_Class), SMB_with_, MC_SMB_with_);
}


static void init_class_SMB_with_with_() {
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Variable VAR_firstObject_0_0 = new_Variable_named(L"firstObject", 0);
    Variable VAR_secondObject_0_1 = new_Variable_named(L"secondObject", 0);
    Array PArray1895 = new_Array_with(2, (Optr)VAR_firstObject_0_0, (Optr)VAR_secondObject_0_1);
    Variable VAR_newCollection_0_2 = new_Variable_named(L"newCollection", 0);
    Array PArray1896 = new_Array_with(1, (Optr)VAR_newCollection_0_2);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // new:. 
    Send PSend1899 = new_Send((Optr)self, SMB_new_, 1, (Optr)int_2_Const);
    Assign PAssign1898 = new_Assign((Optr)VAR_newCollection_0_2, (Optr)PSend1899);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend1900 = new_Send((Optr)VAR_newCollection_0_2, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)VAR_firstObject_0_0);
    // at:put:. 
    Send PSend1901 = new_Send((Optr)VAR_newCollection_0_2, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)VAR_secondObject_0_1);
    Array PThreadedCode1897 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign1898, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend1899, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_2, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_firstObject_0_0, (Optr)&t_send2, (Optr)PSend1900, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_2, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_secondObject_0_1, (Optr)&t_send2, (Optr)PSend1901, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_2, (Optr)&t_method_return);
    Method PMethod1894 = new_Method_with(PArray1895, PArray1896, empty_Array, PThreadedCode1897, 4, PAssign1898, PSend1900, PSend1901, VAR_newCollection_0_2);
    
    MethodClosure MC_SMB_with_with_ = new_MethodClosure((Method)PMethod1894, HEADER(Collections_Abstract_ArrayedCollection_Class));
    store_method(HEADER(Collections_Abstract_ArrayedCollection_Class), SMB_with_with_, MC_SMB_with_with_);
}


static void init_class_SMB_with_with_with_() {
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    Variable VAR_firstObject_0_0 = new_Variable_named(L"firstObject", 0);
    Variable VAR_secondObject_0_1 = new_Variable_named(L"secondObject", 0);
    Variable VAR_thirdObject_0_2 = new_Variable_named(L"thirdObject", 0);
    Array PArray1903 = new_Array_with(3, (Optr)VAR_firstObject_0_0, (Optr)VAR_secondObject_0_1, (Optr)VAR_thirdObject_0_2);
    Variable VAR_newCollection_0_3 = new_Variable_named(L"newCollection", 0);
    Array PArray1904 = new_Array_with(1, (Optr)VAR_newCollection_0_3);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // new:. 
    Send PSend1907 = new_Send((Optr)self, SMB_new_, 1, (Optr)int_3_Const);
    Assign PAssign1906 = new_Assign((Optr)VAR_newCollection_0_3, (Optr)PSend1907);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend1908 = new_Send((Optr)VAR_newCollection_0_3, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)VAR_firstObject_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend1909 = new_Send((Optr)VAR_newCollection_0_3, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)VAR_secondObject_0_1);
    // at:put:. 
    Send PSend1910 = new_Send((Optr)VAR_newCollection_0_3, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)VAR_thirdObject_0_2);
    Array PThreadedCode1905 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push1, (Optr)PAssign1906, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend1907, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_3, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_firstObject_0_0, (Optr)&t_send2, (Optr)PSend1908, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_3, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_secondObject_0_1, (Optr)&t_send2, (Optr)PSend1909, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_3, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_variable, (Optr)VAR_thirdObject_0_2, (Optr)&t_send2, (Optr)PSend1910, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_3, (Optr)&t_method_return);
    Method PMethod1902 = new_Method_with(PArray1903, PArray1904, empty_Array, PThreadedCode1905, 5, PAssign1906, PSend1908, PSend1909, PSend1910, VAR_newCollection_0_3);
    
    MethodClosure MC_SMB_with_with_with_ = new_MethodClosure((Method)PMethod1902, HEADER(Collections_Abstract_ArrayedCollection_Class));
    store_method(HEADER(Collections_Abstract_ArrayedCollection_Class), SMB_with_with_with_, MC_SMB_with_with_with_);
}


static void init_class_SMB_withAll_() {
    Symbol SMB_withAll_ = new_Symbol(L"withAll:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray1912 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1914 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend1915 = new_Send((Optr)self, SMB_new_, 1, (Optr)PSend1914);
    // size. 
    Send PSend1916 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Symbol SMB_replaceFrom_to_with_ = new_Symbol(L"replaceFrom:to:with:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // replaceFrom:to:with:. 
    Send PSend1917 = new_Send((Optr)PSend1915, SMB_replaceFrom_to_with_, 3, (Optr)int_1_Const, (Optr)PSend1916, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode1913 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend1914, (Optr)&t_send1, (Optr)PSend1915, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend1916, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send3, (Optr)PSend1917, (Optr)&t_method_return);
    Method PMethod1911 = new_Method_with(PArray1912, empty_Array, empty_Array, PThreadedCode1913, 1, PSend1917);
    
    MethodClosure MC_SMB_withAll_ = new_MethodClosure((Method)PMethod1911, HEADER(Collections_Abstract_ArrayedCollection_Class));
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