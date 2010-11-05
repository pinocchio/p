#include <lib/class/Kernel/String/String.h>


Optr layout_Kernel_String_String_Class_class;


static void init_SMB_capitalized() {
    Symbol SMB_capitalized = new_Symbol(L"capitalized");
    Variable VAR_cap_0_0 = new_Variable_named(L"cap", 0);
    Array PArray1910 = new_Array_with(1, (Optr)VAR_cap_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1913 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend1915 = new_Send((Optr)self, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_copy = new_Symbol(L"copy");
    // copy. 
    Send PSend1919 = new_Send((Optr)self, SMB_copy, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1920 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend1919);
    Array PThreadedCode1918 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1919, (Optr)&t_send1, (Optr)PSend1920, (Optr)&t_block_return);
    Block PBlock1917 = new_Block_with(empty_Array, empty_Array, PThreadedCode1918, 1, PSend1920);
    // ifTrue:. 
    Send PSend1916 = new_Send((Optr)PSend1915, SMB_ifTrue_, 1, (Optr)PBlock1917);
    // copy. 
    Send PSend1922 = new_Send((Optr)self, SMB_copy, 0);
    Assign PAssign1921 = new_Assign((Optr)VAR_cap_0_0, (Optr)PSend1922);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend1923 = new_Send((Optr)VAR_cap_0_0, SMB_at_, 1, (Optr)int_1_Const);
    Symbol SMB_asUppercase = new_Symbol(L"asUppercase");
    // asUppercase. 
    Send PSend1924 = new_Send((Optr)PSend1923, SMB_asUppercase, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend1925 = new_Send((Optr)VAR_cap_0_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend1924);
    Array PThreadedCode1914 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1915, (Optr)&t_send_ifTrue_, (Optr)PSend1916, (Optr)PBlock1917, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1921, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1922, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1923, (Optr)&t_send0, (Optr)PSend1924, (Optr)&t_send2, (Optr)PSend1925, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_method_return);
    Block PBlock1912 = new_Block_with(PArray1913, empty_Array, PThreadedCode1914, 4, PSend1916, PAssign1921, PSend1925, VAR_cap_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1926 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1912);
    Array PThreadedCode1911 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1912, (Optr)&t_send1, (Optr)PSend1926, (Optr)&t_method_return);
    Method PMethod1909 = new_Method_with(empty_Array, PArray1910, empty_Array, PThreadedCode1911, 1, PSend1926);
    
    MethodClosure MC_SMB_capitalized = new_MethodClosure((Method)PMethod1909, String_Class);
    store_method(String_Class, SMB_capitalized, MC_SMB_capitalized);
}


static void init_SMB_at_() {
    Symbol SMB_at_ = new_Symbol(L"at:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Array PArray1928 = new_Array_with(1, (Optr)VAR_index_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_Symbol = new_Symbol(L"String.Symbol");
    Annotation PAnnotation1930 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_at_, (Optr)SMB_String_minus_Symbol);
    Array PArray1929 = new_Array_with(1, (Optr)PAnnotation1930);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend1932 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode1931 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1932, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod1927 = new_NativeMethod_with(PArray1928, empty_Array, PArray1929, PThreadedCode1931, 2, PSend1932, self);
    
    MethodClosure MC_SMB_at_ = new_MethodClosure((Method)PNativeMethod1927, String_Class);
    store_method(String_Class, SMB_at_, MC_SMB_at_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray1934 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_Symbol = new_Symbol(L"String.Symbol");
    Annotation PAnnotation1936 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__equals_, (Optr)SMB_String_minus_Symbol);
    Array PArray1935 = new_Array_with(1, (Optr)PAnnotation1936);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend1938 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode1937 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1938, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod1933 = new_NativeMethod_with(PArray1934, empty_Array, PArray1935, PThreadedCode1937, 2, PSend1938, self);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PNativeMethod1933, String_Class);
    store_method(String_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_asUppercase() {
    Symbol SMB_asUppercase = new_Symbol(L"asUppercase");
    Variable VAR_cap_0_0 = new_Variable_named(L"cap", 0);
    Array PArray1940 = new_Array_with(1, (Optr)VAR_cap_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1943 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend1945 = new_Send((Optr)self, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_copy = new_Symbol(L"copy");
    // copy. 
    Send PSend1949 = new_Send((Optr)self, SMB_copy, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1950 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend1949);
    Array PThreadedCode1948 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1949, (Optr)&t_send1, (Optr)PSend1950, (Optr)&t_block_return);
    Block PBlock1947 = new_Block_with(empty_Array, empty_Array, PThreadedCode1948, 1, PSend1950);
    // ifTrue:. 
    Send PSend1946 = new_Send((Optr)PSend1945, SMB_ifTrue_, 1, (Optr)PBlock1947);
    // copy. 
    Send PSend1952 = new_Send((Optr)self, SMB_copy, 0);
    Assign PAssign1951 = new_Assign((Optr)VAR_cap_0_0, (Optr)PSend1952);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1953 = new_Send((Optr)VAR_cap_0_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray1955 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1957 = new_Send((Optr)VAR_cap_0_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    // asUppercase. 
    Send PSend1958 = new_Send((Optr)PSend1957, SMB_asUppercase, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend1959 = new_Send((Optr)VAR_cap_0_0, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend1958);
    Array PThreadedCode1956 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend1957, (Optr)&t_send0, (Optr)PSend1958, (Optr)&t_send2, (Optr)PSend1959, (Optr)&t_method_return);
    Block PBlock1954 = new_Block_with(PArray1955, empty_Array, PThreadedCode1956, 1, PSend1959);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend1960 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend1953, (Optr)PBlock1954);
    Array PThreadedCode1944 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1945, (Optr)&t_send_ifTrue_, (Optr)PSend1946, (Optr)PBlock1947, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1951, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1952, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_send0, (Optr)PSend1953, (Optr)&t_push_closure, (Optr)PBlock1954, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend1960, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_method_return);
    Block PBlock1942 = new_Block_with(PArray1943, empty_Array, PThreadedCode1944, 4, PSend1946, PAssign1951, PSend1960, VAR_cap_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1961 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1942);
    Array PThreadedCode1941 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1942, (Optr)&t_send1, (Optr)PSend1961, (Optr)&t_method_return);
    Method PMethod1939 = new_Method_with(empty_Array, PArray1940, empty_Array, PThreadedCode1941, 1, PSend1961);
    
    MethodClosure MC_SMB_asUppercase = new_MethodClosure((Method)PMethod1939, String_Class);
    store_method(String_Class, SMB_asUppercase, MC_SMB_asUppercase);
}


static void init_SMB_asSymbol() {
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_String = new_Symbol(L"String.String");
    Annotation PAnnotation1964 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_asSymbol, (Optr)SMB_String_minus_String);
    Array PArray1963 = new_Array_with(1, (Optr)PAnnotation1964);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend1966 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode1965 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1966, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod1962 = new_NativeMethod_with(empty_Array, empty_Array, PArray1963, PThreadedCode1965, 2, PSend1966, self);
    
    MethodClosure MC_SMB_asSymbol = new_MethodClosure((Method)PNativeMethod1962, String_Class);
    store_method(String_Class, SMB_asSymbol, MC_SMB_asSymbol);
}


static void init_SMB_basicAt_() {
    Symbol SMB_basicAt_ = new_Symbol(L"basicAt:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Array PArray1968 = new_Array_with(1, (Optr)VAR_index_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_Symbol = new_Symbol(L"String.Symbol");
    Annotation PAnnotation1970 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_basicAt_, (Optr)SMB_String_minus_Symbol);
    Array PArray1969 = new_Array_with(1, (Optr)PAnnotation1970);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend1972 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode1971 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1972, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod1967 = new_NativeMethod_with(PArray1968, empty_Array, PArray1969, PThreadedCode1971, 2, PSend1972, self);
    
    MethodClosure MC_SMB_basicAt_ = new_MethodClosure((Method)PNativeMethod1967, String_Class);
    store_method(String_Class, SMB_basicAt_, MC_SMB_basicAt_);
}


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    Array PThreadedCode1974 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod1973 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1974, 1, self);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PMethod1973, String_Class);
    store_method(String_Class, SMB_asString, MC_SMB_asString);
}


static void init_SMB_putOn_() {
    Symbol SMB_putOn_ = new_Symbol(L"putOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray1976 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend1978 = new_Send((Optr)VAR_aStream_0_0, SMB_writeAll_, 1, (Optr)self);
    Array PThreadedCode1977 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend1978, (Optr)&t_method_return);
    Method PMethod1975 = new_Method_with(PArray1976, empty_Array, empty_Array, PThreadedCode1977, 1, PSend1978);
    
    MethodClosure MC_SMB_putOn_ = new_MethodClosure((Method)PMethod1975, String_Class);
    store_method(String_Class, SMB_putOn_, MC_SMB_putOn_);
}


static void init_SMB_findTokens_() {
    Symbol SMB_findTokens_ = new_Symbol(L"findTokens:");
    Variable VAR_delimiters_0_0 = new_Variable_named(L"delimiters", 0);
    Array PArray1980 = new_Array_with(1, (Optr)VAR_delimiters_0_0);
    Variable VAR_tokens_0_1 = new_Variable_named(L"tokens", 0);
    Variable VAR_keyStart_0_2 = new_Variable_named(L"keyStart", 0);
    Variable VAR_keyStop_0_3 = new_Variable_named(L"keyStop", 0);
    Variable VAR_separators_0_4 = new_Variable_named(L"separators", 0);
    Array PArray1981 = new_Array_with(4, (Optr)VAR_tokens_0_1, (Optr)VAR_keyStart_0_2, (Optr)VAR_keyStop_0_3, (Optr)VAR_separators_0_4);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend1984 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign1983 = new_Assign((Optr)VAR_tokens_0_1, (Optr)PSend1984);
    Symbol SMB_isCharacter = new_Symbol(L"isCharacter");
    // isCharacter. 
    Send PSend1987 = new_Send((Optr)VAR_delimiters_0_0, SMB_isCharacter, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend1990 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_delimiters_0_0);
    Array PThreadedCode1989 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_delimiters_0_0, (Optr)&t_send1, (Optr)PSend1990, (Optr)&t_block_return);
    Block PBlock1988 = new_Block_with(empty_Array, empty_Array, PThreadedCode1989, 1, PSend1990);
    Array PThreadedCode1992 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_delimiters_0_0, (Optr)&t_block_return);
    Block PBlock1991 = new_Block_with(empty_Array, empty_Array, PThreadedCode1992, 1, VAR_delimiters_0_0);
    // ifTrue:ifFalse:. 
    Send PSend1986 = new_Send((Optr)PSend1987, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock1988, (Optr)PBlock1991);
    Assign PAssign1985 = new_Assign((Optr)VAR_separators_0_4, (Optr)PSend1986);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign1993 = new_Assign((Optr)VAR_keyStop_0_3, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1996 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend1997 = new_Send((Optr)VAR_keyStop_0_3, SMB__lt__equals_, 1, (Optr)PSend1996);
    Array PThreadedCode1995 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_keyStop_0_3, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1996, (Optr)&t_send1, (Optr)PSend1997, (Optr)&t_block_return);
    Block PBlock1994 = new_Block_with(empty_Array, empty_Array, PThreadedCode1995, 1, PSend1997);
    Symbol SMB_skipDelimiters_startingAt_ = new_Symbol(L"skipDelimiters:startingAt:");
    // skipDelimiters:startingAt:. 
    Send PSend2001 = new_Send((Optr)self, SMB_skipDelimiters_startingAt_, 2, (Optr)VAR_separators_0_4, (Optr)VAR_keyStop_0_3);
    Assign PAssign2000 = new_Assign((Optr)VAR_keyStart_0_2, (Optr)PSend2001);
    Symbol SMB_findDelimiters_startingAt_ = new_Symbol(L"findDelimiters:startingAt:");
    // findDelimiters:startingAt:. 
    Send PSend2003 = new_Send((Optr)self, SMB_findDelimiters_startingAt_, 2, (Optr)VAR_separators_0_4, (Optr)VAR_keyStart_0_2);
    Assign PAssign2002 = new_Assign((Optr)VAR_keyStop_0_3, (Optr)PSend2003);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend2004 = new_Send((Optr)VAR_keyStart_0_2, SMB__lt_, 1, (Optr)VAR_keyStop_0_3);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend2008 = new_Send((Optr)VAR_keyStop_0_3, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend2009 = new_Send((Optr)self, SMB_copyFrom_to_, 2, (Optr)VAR_keyStart_0_2, (Optr)PSend2008);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend2010 = new_Send((Optr)VAR_tokens_0_1, SMB_add_, 1, (Optr)PSend2009);
    Array PThreadedCode2007 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_keyStart_0_2, (Optr)&t_push_variable, (Optr)VAR_keyStop_0_3, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend2008, (Optr)&t_send2, (Optr)PSend2009, (Optr)&t_send1, (Optr)PSend2010, (Optr)&t_block_return);
    Block PBlock2006 = new_Block_with(empty_Array, empty_Array, PThreadedCode2007, 1, PSend2010);
    // ifTrue:. 
    Send PSend2005 = new_Send((Optr)PSend2004, SMB_ifTrue_, 1, (Optr)PBlock2006);
    Array PThreadedCode1999 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign2000, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_separators_0_4, (Optr)&t_push_variable, (Optr)VAR_keyStop_0_3, (Optr)&t_send2, (Optr)PSend2001, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign2002, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_separators_0_4, (Optr)&t_push_variable, (Optr)VAR_keyStart_0_2, (Optr)&t_send2, (Optr)PSend2003, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_keyStart_0_2, (Optr)&t_push_variable, (Optr)VAR_keyStop_0_3, (Optr)&t_send1, (Optr)PSend2004, (Optr)&t_send_ifTrue_, (Optr)PSend2005, (Optr)PBlock2006, (Optr)&t_block_return);
    Block PBlock1998 = new_Block_with(empty_Array, empty_Array, PThreadedCode1999, 3, PAssign2000, PAssign2002, PSend2005);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend2011 = new_Send((Optr)PBlock1994, SMB_whileTrue_, 1, (Optr)PBlock1998);
    Array PThreadedCode1982 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign1983, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend1984, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1985, (Optr)&t_push_variable, (Optr)VAR_delimiters_0_0, (Optr)&t_send0, (Optr)PSend1987, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend1986, (Optr)PBlock1988, (Optr)PBlock1991, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1993, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock1994, (Optr)&t_push_closure, (Optr)PBlock1998, (Optr)&t_send1, (Optr)PSend2011, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_method_return);
    Method PMethod1979 = new_Method_with(PArray1980, PArray1981, empty_Array, PThreadedCode1982, 5, PAssign1983, PAssign1985, PAssign1993, PSend2011, VAR_tokens_0_1);
    
    MethodClosure MC_SMB_findTokens_ = new_MethodClosure((Method)PMethod1979, String_Class);
    store_method(String_Class, SMB_findTokens_, MC_SMB_findTokens_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
    Array PArray2013 = new_Array_with(1, (Optr)VAR_stream_0_0);
    String string_2015 = new_String(L"'");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_2015_Const = new_Constant((Optr)string_2015);
    // <<. 
    Send PSend2016 = new_Send((Optr)VAR_stream_0_0, SMB__shiftLeft_, 1, (Optr)string_2015_Const);
    // <<. 
    Send PSend2017 = new_Send((Optr)PSend2016, SMB__shiftLeft_, 1, (Optr)self);
    String string_2018 = new_String(L"'");
    Constant string_2018_Const = new_Constant((Optr)string_2018);
    // <<. 
    Send PSend2019 = new_Send((Optr)PSend2017, SMB__shiftLeft_, 1, (Optr)string_2018_Const);
    Array PThreadedCode2014 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_push1, (Optr)string_2015, (Optr)&t_send1, (Optr)PSend2016, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2017, (Optr)&t_push1, (Optr)string_2018, (Optr)&t_send1, (Optr)PSend2019, (Optr)&t_method_return);
    Method PMethod2012 = new_Method_with(PArray2013, empty_Array, empty_Array, PThreadedCode2014, 1, PSend2019);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod2012, String_Class);
    store_method(String_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_findDelimiters_startingAt_() {
    Symbol SMB_findDelimiters_startingAt_ = new_Symbol(L"findDelimiters:startingAt:");
    Variable VAR_delimiters_0_0 = new_Variable_named(L"delimiters", 0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Array PArray2021 = new_Array_with(2, (Optr)VAR_delimiters_0_0, (Optr)VAR_start_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2024 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend2026 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray2028 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR_delim_3_0 = new_Variable_named(L"delim", 3);
    Array PArray2031 = new_Array_with(1, (Optr)VAR_delim_3_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend2033 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend2034 = new_Send((Optr)VAR_delim_3_0, SMB__equals_, 1, (Optr)PSend2033);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend2038 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_i_2_0);
    Array PThreadedCode2037 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend2038, (Optr)&t_block_return);
    Block PBlock2036 = new_Block_with(empty_Array, empty_Array, PThreadedCode2037, 1, PSend2038);
    // ifTrue:. 
    Send PSend2035 = new_Send((Optr)PSend2034, SMB_ifTrue_, 1, (Optr)PBlock2036);
    Array PThreadedCode2032 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_delim_3_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend2033, (Optr)&t_send1, (Optr)PSend2034, (Optr)&t_send_ifTrue_, (Optr)PSend2035, (Optr)PBlock2036, (Optr)&t_method_return);
    Block PBlock2030 = new_Block_with(PArray2031, empty_Array, PThreadedCode2032, 1, PSend2035);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend2039 = new_Send((Optr)VAR_delimiters_0_0, SMB_do_, 1, (Optr)PBlock2030);
    Array PThreadedCode2029 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_delimiters_0_0, (Optr)&t_push_closure, (Optr)PBlock2030, (Optr)&t_send1, (Optr)PSend2039, (Optr)&t_method_return);
    Block PBlock2027 = new_Block_with(PArray2028, empty_Array, PThreadedCode2029, 1, PSend2039);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend2040 = new_Send((Optr)VAR_start_0_1, SMB_to_do_, 2, (Optr)PSend2026, (Optr)PBlock2027);
    // size. 
    Send PSend2041 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend2042 = new_Send((Optr)PSend2041, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode2025 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2026, (Optr)&t_push_closure, (Optr)PBlock2027, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend2040, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2041, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend2042, (Optr)&t_method_return);
    Block PBlock2023 = new_Block_with(PArray2024, empty_Array, PThreadedCode2025, 2, PSend2040, PSend2042);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2043 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2023);
    Array PThreadedCode2022 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2023, (Optr)&t_send1, (Optr)PSend2043, (Optr)&t_method_return);
    Method PMethod2020 = new_Method_with(PArray2021, empty_Array, empty_Array, PThreadedCode2022, 1, PSend2043);
    
    MethodClosure MC_SMB_findDelimiters_startingAt_ = new_MethodClosure((Method)PMethod2020, String_Class);
    store_method(String_Class, SMB_findDelimiters_startingAt_, MC_SMB_findDelimiters_startingAt_);
}


static void init_SMB_size() {
    Symbol SMB_size = new_Symbol(L"size");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_Symbol = new_Symbol(L"String.Symbol");
    Annotation PAnnotation2046 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_size, (Optr)SMB_String_minus_Symbol);
    Array PArray2045 = new_Array_with(1, (Optr)PAnnotation2046);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend2048 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode2047 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2048, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod2044 = new_NativeMethod_with(empty_Array, empty_Array, PArray2045, PThreadedCode2047, 2, PSend2048, self);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PNativeMethod2044, String_Class);
    store_method(String_Class, SMB_size, MC_SMB_size);
}


static void init_SMB_indexOf_startingAt_() {
    Symbol SMB_indexOf_startingAt_ = new_Symbol(L"indexOf:startingAt:");
    Variable VAR_aCharacter_0_0 = new_Variable_named(L"aCharacter", 0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Array PArray2050 = new_Array_with(2, (Optr)VAR_aCharacter_0_0, (Optr)VAR_start_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2053 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isCharacter = new_Symbol(L"isCharacter");
    // isCharacter. 
    Send PSend2055 = new_Send((Optr)VAR_aCharacter_0_0, SMB_isCharacter, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // escape:. 
    Send PSend2059 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)int_0_Const);
    Array PThreadedCode2058 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend2059, (Optr)&t_block_return);
    Block PBlock2057 = new_Block_with(empty_Array, empty_Array, PThreadedCode2058, 1, PSend2059);
    // ifFalse:. 
    Send PSend2056 = new_Send((Optr)PSend2055, SMB_ifFalse_, 1, (Optr)PBlock2057);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend2060 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_pos_2_0 = new_Variable_named(L"pos", 2);
    Array PArray2062 = new_Array_with(1, (Optr)VAR_pos_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend2064 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_pos_2_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend2065 = new_Send((Optr)PSend2064, SMB_asInteger, 0);
    // asInteger. 
    Send PSend2066 = new_Send((Optr)VAR_aCharacter_0_0, SMB_asInteger, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend2067 = new_Send((Optr)PSend2065, SMB__equals_, 1, (Optr)PSend2066);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend2071 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_pos_2_0);
    Array PThreadedCode2070 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_pos_2_0, (Optr)&t_send1, (Optr)PSend2071, (Optr)&t_block_return);
    Block PBlock2069 = new_Block_with(empty_Array, empty_Array, PThreadedCode2070, 1, PSend2071);
    // ifTrue:. 
    Send PSend2068 = new_Send((Optr)PSend2067, SMB_ifTrue_, 1, (Optr)PBlock2069);
    Array PThreadedCode2063 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_pos_2_0, (Optr)&t_send1, (Optr)PSend2064, (Optr)&t_send0, (Optr)PSend2065, (Optr)&t_push_variable, (Optr)VAR_aCharacter_0_0, (Optr)&t_send0, (Optr)PSend2066, (Optr)&t_send1, (Optr)PSend2067, (Optr)&t_send_ifTrue_, (Optr)PSend2068, (Optr)PBlock2069, (Optr)&t_method_return);
    Block PBlock2061 = new_Block_with(PArray2062, empty_Array, PThreadedCode2063, 1, PSend2068);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend2072 = new_Send((Optr)VAR_start_0_1, SMB_to_do_, 2, (Optr)PSend2060, (Optr)PBlock2061);
    Array PThreadedCode2054 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_aCharacter_0_0, (Optr)&t_send0, (Optr)PSend2055, (Optr)&t_send_ifFalse_, (Optr)PSend2056, (Optr)PBlock2057, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2060, (Optr)&t_push_closure, (Optr)PBlock2061, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend2072, (Optr)&t_zap, (Optr)&t_method_return_0);
    Block PBlock2052 = new_Block_with(PArray2053, empty_Array, PThreadedCode2054, 3, PSend2056, PSend2072, int_0_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2073 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2052);
    Array PThreadedCode2051 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2052, (Optr)&t_send1, (Optr)PSend2073, (Optr)&t_method_return);
    Method PMethod2049 = new_Method_with(PArray2050, empty_Array, empty_Array, PThreadedCode2051, 1, PSend2073);
    
    MethodClosure MC_SMB_indexOf_startingAt_ = new_MethodClosure((Method)PMethod2049, String_Class);
    store_method(String_Class, SMB_indexOf_startingAt_, MC_SMB_indexOf_startingAt_);
}


static void init_SMB_withBlanksTrimmed() {
    Symbol SMB_withBlanksTrimmed = new_Symbol(L"withBlanksTrimmed");
    Variable VAR_first_0_0 = new_Variable_named(L"first", 0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Array PArray2075 = new_Array_with(2, (Optr)VAR_first_0_0, (Optr)VAR_result_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2078 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_findFirst_ = new_Symbol(L"findFirst:");
    Variable VAR_c_2_0 = new_Variable_named(L"c", 2);
    Array PArray2083 = new_Array_with(1, (Optr)VAR_c_2_0);
    Symbol SMB_isSeparator = new_Symbol(L"isSeparator");
    // isSeparator. 
    Send PSend2085 = new_Send((Optr)VAR_c_2_0, SMB_isSeparator, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend2086 = new_Send((Optr)PSend2085, SMB_not, 0);
    Array PThreadedCode2084 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_c_2_0, (Optr)&t_send0, (Optr)PSend2085, (Optr)&t_send0, (Optr)PSend2086, (Optr)&t_method_return);
    Block PBlock2082 = new_Block_with(PArray2083, empty_Array, PThreadedCode2084, 1, PSend2086);
    // findFirst:. 
    Send PSend2081 = new_Send((Optr)self, SMB_findFirst_, 1, (Optr)PBlock2082);
    Assign PAssign2080 = new_Assign((Optr)VAR_first_0_0, (Optr)PSend2081);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend2087 = new_Send((Optr)VAR_first_0_0, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_2091 = new_String(L"");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    Constant string_2091_Const = new_Constant((Optr)string_2091);
    // escape:. 
    Send PSend2092 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_2091_Const);
    Array PThreadedCode2090 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_2091, (Optr)&t_send1, (Optr)PSend2092, (Optr)&t_block_return);
    Block PBlock2089 = new_Block_with(empty_Array, empty_Array, PThreadedCode2090, 1, PSend2092);
    // ifTrue:. 
    Send PSend2088 = new_Send((Optr)PSend2087, SMB_ifTrue_, 1, (Optr)PBlock2089);
    Array PArray2094 = new_Array_with(1, (Optr)VAR_c_2_0);
    // isSeparator. 
    Send PSend2096 = new_Send((Optr)VAR_c_2_0, SMB_isSeparator, 0);
    // not. 
    Send PSend2097 = new_Send((Optr)PSend2096, SMB_not, 0);
    Array PThreadedCode2095 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_c_2_0, (Optr)&t_send0, (Optr)PSend2096, (Optr)&t_send0, (Optr)PSend2097, (Optr)&t_method_return);
    Block PBlock2093 = new_Block_with(PArray2094, empty_Array, PThreadedCode2095, 1, PSend2097);
    Symbol SMB_findLast_ = new_Symbol(L"findLast:");
    // findLast:. 
    Send PSend2098 = new_Send((Optr)self, SMB_findLast_, 1, (Optr)PBlock2093);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend2099 = new_Send((Optr)self, SMB_copyFrom_to_, 2, (Optr)VAR_first_0_0, (Optr)PSend2098);
    Array PThreadedCode2079 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign2080, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock2082, (Optr)&t_send1, (Optr)PSend2081, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_first_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend2087, (Optr)&t_send_ifTrue_, (Optr)PSend2088, (Optr)PBlock2089, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_first_0_0, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock2093, (Optr)&t_send1, (Optr)PSend2098, (Optr)&t_send2, (Optr)PSend2099, (Optr)&t_method_return);
    Block PBlock2077 = new_Block_with(PArray2078, empty_Array, PThreadedCode2079, 3, PAssign2080, PSend2088, PSend2099);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2100 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2077);
    Array PThreadedCode2076 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2077, (Optr)&t_send1, (Optr)PSend2100, (Optr)&t_method_return);
    Method PMethod2074 = new_Method_with(empty_Array, PArray2075, empty_Array, PThreadedCode2076, 1, PSend2100);
    
    MethodClosure MC_SMB_withBlanksTrimmed = new_MethodClosure((Method)PMethod2074, String_Class);
    store_method(String_Class, SMB_withBlanksTrimmed, MC_SMB_withBlanksTrimmed);
}


static void init_SMB_contains_at_() {
    Symbol SMB_contains_at_ = new_Symbol(L"contains:at:");
    Variable VAR_substring_0_0 = new_Variable_named(L"substring", 0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Array PArray2102 = new_Array_with(2, (Optr)VAR_substring_0_0, (Optr)VAR_position_0_1);
    Variable VAR_size_0_2 = new_Variable_named(L"size", 0);
    Array PArray2103 = new_Array_with(1, (Optr)VAR_size_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2106 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend2109 = new_Send((Optr)VAR_substring_0_0, SMB_size, 0);
    Assign PAssign2108 = new_Assign((Optr)VAR_size_0_2, (Optr)PSend2109);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend2110 = new_Send((Optr)VAR_position_0_1, SMB__plus_, 1, (Optr)VAR_size_0_2);
    // size. 
    Send PSend2111 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend2112 = new_Send((Optr)PSend2110, SMB__gt_, 1, (Optr)PSend2111);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend2116 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode2115 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend2116, (Optr)&t_block_return);
    Block PBlock2114 = new_Block_with(empty_Array, empty_Array, PThreadedCode2115, 1, PSend2116);
    // ifTrue:. 
    Send PSend2113 = new_Send((Optr)PSend2112, SMB_ifTrue_, 1, (Optr)PBlock2114);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray2118 = new_Array_with(1, (Optr)VAR_i_2_0);
    // +. 
    Send PSend2120 = new_Send((Optr)VAR_position_0_1, SMB__plus_, 1, (Optr)VAR_i_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend2121 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend2120);
    // at:. 
    Send PSend2122 = new_Send((Optr)VAR_substring_0_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend2123 = new_Send((Optr)PSend2121, SMB__equals_, 1, (Optr)PSend2122);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend2127 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode2126 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend2127, (Optr)&t_block_return);
    Block PBlock2125 = new_Block_with(empty_Array, empty_Array, PThreadedCode2126, 1, PSend2127);
    // ifFalse:. 
    Send PSend2124 = new_Send((Optr)PSend2123, SMB_ifFalse_, 1, (Optr)PBlock2125);
    Array PThreadedCode2119 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend2120, (Optr)&t_send1, (Optr)PSend2121, (Optr)&t_push_variable, (Optr)VAR_substring_0_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend2122, (Optr)&t_send1, (Optr)PSend2123, (Optr)&t_send_ifFalse_, (Optr)PSend2124, (Optr)PBlock2125, (Optr)&t_method_return);
    Block PBlock2117 = new_Block_with(PArray2118, empty_Array, PThreadedCode2119, 1, PSend2124);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend2128 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_size_0_2, (Optr)PBlock2117);
    Array PThreadedCode2107 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign2108, (Optr)&t_push_variable, (Optr)VAR_substring_0_0, (Optr)&t_send0, (Optr)PSend2109, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_push_variable, (Optr)VAR_size_0_2, (Optr)&t_send1, (Optr)PSend2110, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2111, (Optr)&t_send1, (Optr)PSend2112, (Optr)&t_send_ifTrue_, (Optr)PSend2113, (Optr)PBlock2114, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_2, (Optr)&t_push_closure, (Optr)PBlock2117, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend2128, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock2105 = new_Block_with(PArray2106, empty_Array, PThreadedCode2107, 4, PAssign2108, PSend2113, PSend2128, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2129 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2105);
    Array PThreadedCode2104 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2105, (Optr)&t_send1, (Optr)PSend2129, (Optr)&t_method_return);
    Method PMethod2101 = new_Method_with(PArray2102, PArray2103, empty_Array, PThreadedCode2104, 1, PSend2129);
    
    MethodClosure MC_SMB_contains_at_ = new_MethodClosure((Method)PMethod2101, String_Class);
    store_method(String_Class, SMB_contains_at_, MC_SMB_contains_at_);
}


static void init_SMB_asLowercase() {
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    Variable VAR_cap_0_0 = new_Variable_named(L"cap", 0);
    Array PArray2131 = new_Array_with(1, (Optr)VAR_cap_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2134 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend2136 = new_Send((Optr)self, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_copy = new_Symbol(L"copy");
    // copy. 
    Send PSend2140 = new_Send((Optr)self, SMB_copy, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend2141 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend2140);
    Array PThreadedCode2139 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2140, (Optr)&t_send1, (Optr)PSend2141, (Optr)&t_block_return);
    Block PBlock2138 = new_Block_with(empty_Array, empty_Array, PThreadedCode2139, 1, PSend2141);
    // ifTrue:. 
    Send PSend2137 = new_Send((Optr)PSend2136, SMB_ifTrue_, 1, (Optr)PBlock2138);
    // copy. 
    Send PSend2143 = new_Send((Optr)self, SMB_copy, 0);
    Assign PAssign2142 = new_Assign((Optr)VAR_cap_0_0, (Optr)PSend2143);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend2144 = new_Send((Optr)VAR_cap_0_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray2146 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend2148 = new_Send((Optr)VAR_cap_0_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    // asLowercase. 
    Send PSend2149 = new_Send((Optr)PSend2148, SMB_asLowercase, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend2150 = new_Send((Optr)VAR_cap_0_0, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend2149);
    Array PThreadedCode2147 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend2148, (Optr)&t_send0, (Optr)PSend2149, (Optr)&t_send2, (Optr)PSend2150, (Optr)&t_method_return);
    Block PBlock2145 = new_Block_with(PArray2146, empty_Array, PThreadedCode2147, 1, PSend2150);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend2151 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend2144, (Optr)PBlock2145);
    Array PThreadedCode2135 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2136, (Optr)&t_send_ifTrue_, (Optr)PSend2137, (Optr)PBlock2138, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign2142, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2143, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_send0, (Optr)PSend2144, (Optr)&t_push_closure, (Optr)PBlock2145, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend2151, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_method_return);
    Block PBlock2133 = new_Block_with(PArray2134, empty_Array, PThreadedCode2135, 4, PSend2137, PAssign2142, PSend2151, VAR_cap_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2152 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2133);
    Array PThreadedCode2132 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2133, (Optr)&t_send1, (Optr)PSend2152, (Optr)&t_method_return);
    Method PMethod2130 = new_Method_with(empty_Array, PArray2131, empty_Array, PThreadedCode2132, 1, PSend2152);
    
    MethodClosure MC_SMB_asLowercase = new_MethodClosure((Method)PMethod2130, String_Class);
    store_method(String_Class, SMB_asLowercase, MC_SMB_asLowercase);
}


static void init_SMB_asNumber() {
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_String = new_Symbol(L"String.String");
    Annotation PAnnotation2155 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_asNumber, (Optr)SMB_String_minus_String);
    Array PArray2154 = new_Array_with(1, (Optr)PAnnotation2155);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend2157 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode2156 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2157, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod2153 = new_NativeMethod_with(empty_Array, empty_Array, PArray2154, PThreadedCode2156, 2, PSend2157, self);
    
    MethodClosure MC_SMB_asNumber = new_MethodClosure((Method)PNativeMethod2153, String_Class);
    store_method(String_Class, SMB_asNumber, MC_SMB_asNumber);
}


static void init_SMB_asArray() {
    Symbol SMB_asArray = new_Symbol(L"asArray");
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    // newFrom:. 
    Send PSend2160 = new_Send((Optr)Array_classReference, SMB_newFrom_, 1, (Optr)self);
    Array PThreadedCode2159 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2160, (Optr)&t_method_return);
    Method PMethod2158 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2159, 1, PSend2160);
    
    MethodClosure MC_SMB_asArray = new_MethodClosure((Method)PMethod2158, String_Class);
    store_method(String_Class, SMB_asArray, MC_SMB_asArray);
}


static void init_SMB_hash() {
    Symbol SMB_hash = new_Symbol(L"hash");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_Symbol = new_Symbol(L"String.Symbol");
    Annotation PAnnotation2163 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_hash, (Optr)SMB_String_minus_Symbol);
    Array PArray2162 = new_Array_with(1, (Optr)PAnnotation2163);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend2165 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode2164 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2165, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod2161 = new_NativeMethod_with(empty_Array, empty_Array, PArray2162, PThreadedCode2164, 2, PSend2165, self);
    
    MethodClosure MC_SMB_hash = new_MethodClosure((Method)PNativeMethod2161, String_Class);
    store_method(String_Class, SMB_hash, MC_SMB_hash);
}


static void init_SMB_asPEGRange() {
    Symbol SMB_asPEGRange = new_Symbol(L"asPEGRange");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend2168 = new_Send((Optr)self, SMB_size, 0);
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant int_3_Const = new_Constant((Optr)int_3);
    // =. 
    Send PSend2169 = new_Send((Optr)PSend2168, SMB__equals_, 1, (Optr)int_3_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend2172 = new_Send((Optr)self, SMB_at_, 1, (Optr)int_2_Const);
    Character char_2173 = new_Character(L'-');
    Constant char_2173_Const = new_Constant((Optr)char_2173);
    // =. 
    Send PSend2174 = new_Send((Optr)PSend2172, SMB__equals_, 1, (Optr)char_2173_Const);
    Array PThreadedCode2171 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend2172, (Optr)&t_push1, (Optr)char_2173, (Optr)&t_send1, (Optr)PSend2174, (Optr)&t_block_return);
    Block PBlock2170 = new_Block_with(empty_Array, empty_Array, PThreadedCode2171, 1, PSend2174);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend2175 = new_Send((Optr)PSend2169, SMB_and_, 1, (Optr)PBlock2170);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_2179 = new_String(L"Cannot convert ");
    Constant string_2179_Const = new_Constant((Optr)string_2179);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend2180 = new_Send((Optr)string_2179_Const, SMB__append_, 1, (Optr)self);
    String string_2181 = new_String(L" to PEG range. Expected format: beginchar-endchar");
    Constant string_2181_Const = new_Constant((Optr)string_2181);
    // ,. 
    Send PSend2182 = new_Send((Optr)PSend2180, SMB__append_, 1, (Optr)string_2181_Const);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend2183 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend2182);
    Array PThreadedCode2178 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_2179, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2180, (Optr)&t_push1, (Optr)string_2181, (Optr)&t_send1, (Optr)PSend2182, (Optr)&t_send1, (Optr)PSend2183, (Optr)&t_block_return);
    Block PBlock2177 = new_Block_with(empty_Array, empty_Array, PThreadedCode2178, 1, PSend2183);
    // ifFalse:. 
    Send PSend2176 = new_Send((Optr)PSend2175, SMB_ifFalse_, 1, (Optr)PBlock2177);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend2184 = new_Send((Optr)self, SMB_at_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend2185 = new_Send((Optr)self, SMB_at_, 1, (Optr)int_3_Const);
    Symbol SMB_between_and_ = new_Symbol(L"between:and:");
    // between:and:. 
    Send PSend2186 = new_Send((Optr)PEGRange_classReference, SMB_between_and_, 2, (Optr)PSend2184, (Optr)PSend2185);
    Array PThreadedCode2167 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2168, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend2169, (Optr)&t_push_closure, (Optr)PBlock2170, (Optr)&t_send1, (Optr)PSend2175, (Optr)&t_send_ifFalse_, (Optr)PSend2176, (Optr)PBlock2177, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PEGRange_classReference, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend2184, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend2185, (Optr)&t_send2, (Optr)PSend2186, (Optr)&t_method_return);
    Method PMethod2166 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2167, 2, PSend2176, PSend2186);
    
    MethodClosure MC_SMB_asPEGRange = new_MethodClosure((Method)PMethod2166, String_Class);
    store_method(String_Class, SMB_asPEGRange, MC_SMB_asPEGRange);
}


static void init_SMB_copy() {
    Symbol SMB_copy = new_Symbol(L"copy");
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend2189 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    // newFrom:. 
    Send PSend2190 = new_Send((Optr)PSend2189, SMB_newFrom_, 1, (Optr)self);
    Array PThreadedCode2188 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2189, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2190, (Optr)&t_method_return);
    Method PMethod2187 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2188, 1, PSend2190);
    
    MethodClosure MC_SMB_copy = new_MethodClosure((Method)PMethod2187, String_Class);
    store_method(String_Class, SMB_copy, MC_SMB_copy);
}


static void init_SMB__append_() {
    Symbol SMB__append_ = new_Symbol(L",");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray2192 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_String = new_Symbol(L"String.String");
    Annotation PAnnotation2194 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__append_, (Optr)SMB_String_minus_String);
    Array PArray2193 = new_Array_with(1, (Optr)PAnnotation2194);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend2196 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode2195 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2196, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod2191 = new_NativeMethod_with(PArray2192, empty_Array, PArray2193, PThreadedCode2195, 2, PSend2196, self);
    
    MethodClosure MC_SMB__append_ = new_MethodClosure((Method)PNativeMethod2191, String_Class);
    store_method(String_Class, SMB__append_, MC_SMB__append_);
}


static void init_SMB_at_put_() {
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Variable VAR_character_0_1 = new_Variable_named(L"character", 0);
    Array PArray2198 = new_Array_with(2, (Optr)VAR_index_0_0, (Optr)VAR_character_0_1);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_String = new_Symbol(L"String.String");
    Annotation PAnnotation2200 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_at_put_, (Optr)SMB_String_minus_String);
    Array PArray2199 = new_Array_with(1, (Optr)PAnnotation2200);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend2202 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode2201 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2202, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod2197 = new_NativeMethod_with(PArray2198, empty_Array, PArray2199, PThreadedCode2201, 2, PSend2202, self);
    
    MethodClosure MC_SMB_at_put_ = new_MethodClosure((Method)PNativeMethod2197, String_Class);
    store_method(String_Class, SMB_at_put_, MC_SMB_at_put_);
}


static void init_SMB_skipDelimiters_startingAt_() {
    Symbol SMB_skipDelimiters_startingAt_ = new_Symbol(L"skipDelimiters:startingAt:");
    Variable VAR_delimiters_0_0 = new_Variable_named(L"delimiters", 0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Array PArray2204 = new_Array_with(2, (Optr)VAR_delimiters_0_0, (Optr)VAR_start_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2207 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend2209 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray2211 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR_delim_3_0 = new_Variable_named(L"delim", 3);
    Array PArray2214 = new_Array_with(1, (Optr)VAR_delim_3_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend2216 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend2217 = new_Send((Optr)VAR_delim_3_0, SMB__equals_, 1, (Optr)PSend2216);
    Array PThreadedCode2215 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_delim_3_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend2216, (Optr)&t_send1, (Optr)PSend2217, (Optr)&t_method_return);
    Block PBlock2213 = new_Block_with(PArray2214, empty_Array, PThreadedCode2215, 1, PSend2217);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend2220 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_i_2_0);
    Array PThreadedCode2219 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend2220, (Optr)&t_block_return);
    Block PBlock2218 = new_Block_with(empty_Array, empty_Array, PThreadedCode2219, 1, PSend2220);
    Symbol SMB_detect_ifNone_ = new_Symbol(L"detect:ifNone:");
    // detect:ifNone:. 
    Send PSend2221 = new_Send((Optr)VAR_delimiters_0_0, SMB_detect_ifNone_, 2, (Optr)PBlock2213, (Optr)PBlock2218);
    Array PThreadedCode2212 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_delimiters_0_0, (Optr)&t_push_closure, (Optr)PBlock2213, (Optr)&t_push_closure, (Optr)PBlock2218, (Optr)&t_send2, (Optr)PSend2221, (Optr)&t_method_return);
    Block PBlock2210 = new_Block_with(PArray2211, empty_Array, PThreadedCode2212, 1, PSend2221);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend2222 = new_Send((Optr)VAR_start_0_1, SMB_to_do_, 2, (Optr)PSend2209, (Optr)PBlock2210);
    // size. 
    Send PSend2223 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend2224 = new_Send((Optr)PSend2223, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode2208 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2209, (Optr)&t_push_closure, (Optr)PBlock2210, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend2222, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2223, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend2224, (Optr)&t_method_return);
    Block PBlock2206 = new_Block_with(PArray2207, empty_Array, PThreadedCode2208, 2, PSend2222, PSend2224);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2225 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2206);
    Array PThreadedCode2205 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2206, (Optr)&t_send1, (Optr)PSend2225, (Optr)&t_method_return);
    Method PMethod2203 = new_Method_with(PArray2204, empty_Array, empty_Array, PThreadedCode2205, 1, PSend2225);
    
    MethodClosure MC_SMB_skipDelimiters_startingAt_ = new_MethodClosure((Method)PMethod2203, String_Class);
    store_method(String_Class, SMB_skipDelimiters_startingAt_, MC_SMB_skipDelimiters_startingAt_);
}


static void init_SMB_join_() {
    Symbol SMB_join_ = new_Symbol(L"join:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray2227 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_stream_1_0 = new_Variable_named(L"stream", 1);
    Array PArray2230 = new_Array_with(1, (Optr)VAR_stream_1_0);
    Variable VAR_each_2_0 = new_Variable_named(L"each", 2);
    Array PArray2233 = new_Array_with(1, (Optr)VAR_each_2_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend2235 = new_Send((Optr)VAR_each_2_0, SMB_asString, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend2236 = new_Send((Optr)VAR_stream_1_0, SMB__shiftLeft_, 1, (Optr)PSend2235);
    Array PThreadedCode2234 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_stream_1_0, (Optr)&t_push_variable, (Optr)VAR_each_2_0, (Optr)&t_send0, (Optr)PSend2235, (Optr)&t_send1, (Optr)PSend2236, (Optr)&t_method_return);
    Block PBlock2232 = new_Block_with(PArray2233, empty_Array, PThreadedCode2234, 1, PSend2236);
    // <<. 
    Send PSend2239 = new_Send((Optr)VAR_stream_1_0, SMB__shiftLeft_, 1, (Optr)self);
    Array PThreadedCode2238 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_stream_1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2239, (Optr)&t_block_return);
    Block PBlock2237 = new_Block_with(empty_Array, empty_Array, PThreadedCode2238, 1, PSend2239);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend2240 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_separatedBy_, 2, (Optr)PBlock2232, (Optr)PBlock2237);
    Array PThreadedCode2231 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock2232, (Optr)&t_push_closure, (Optr)PBlock2237, (Optr)&t_send2, (Optr)PSend2240, (Optr)&t_method_return);
    Block PBlock2229 = new_Block_with(PArray2230, empty_Array, PThreadedCode2231, 1, PSend2240);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend2241 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock2229);
    Array PThreadedCode2228 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock2229, (Optr)&t_send1, (Optr)PSend2241, (Optr)&t_method_return);
    Method PMethod2226 = new_Method_with(PArray2227, empty_Array, empty_Array, PThreadedCode2228, 1, PSend2241);
    
    MethodClosure MC_SMB_join_ = new_MethodClosure((Method)PMethod2226, String_Class);
    store_method(String_Class, SMB_join_, MC_SMB_join_);
}


static void init_SMB_asPEGChoice() {
    Symbol SMB_asPEGChoice = new_Symbol(L"asPEGChoice");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2244 = new_Send((Optr)PEGTerminalChoice_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode2243 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGTerminalChoice_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2244, (Optr)&t_method_return);
    Method PMethod2242 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2243, 1, PSend2244);
    
    MethodClosure MC_SMB_asPEGChoice = new_MethodClosure((Method)PMethod2242, String_Class);
    store_method(String_Class, SMB_asPEGChoice, MC_SMB_asPEGChoice);
}


static void init_SMB_replaceFrom_to_with_startingAt_() {
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    Variable VAR_start_0_0 = new_Variable_named(L"start", 0);
    Variable VAR_stop_0_1 = new_Variable_named(L"stop", 0);
    Variable VAR_replacement_0_2 = new_Variable_named(L"replacement", 0);
    Variable VAR_repStart_0_3 = new_Variable_named(L"repStart", 0);
    Array PArray2246 = new_Array_with(4, (Optr)VAR_start_0_0, (Optr)VAR_stop_0_1, (Optr)VAR_replacement_0_2, (Optr)VAR_repStart_0_3);
    Variable VAR_index_0_4 = new_Variable_named(L"index", 0);
    Variable VAR_repOff_0_5 = new_Variable_named(L"repOff", 0);
    Array PArray2247 = new_Array_with(2, (Optr)VAR_index_0_4, (Optr)VAR_repOff_0_5);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend2250 = new_Send((Optr)VAR_repStart_0_3, SMB__minus_, 1, (Optr)VAR_start_0_0);
    Assign PAssign2249 = new_Assign((Optr)VAR_repOff_0_5, (Optr)PSend2250);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend2252 = new_Send((Optr)VAR_start_0_0, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign2251 = new_Assign((Optr)VAR_index_0_4, (Optr)PSend2252);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend2256 = new_Send((Optr)VAR_index_0_4, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign2255 = new_Assign((Optr)VAR_index_0_4, (Optr)PSend2256);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend2257 = new_Send((Optr)PAssign2255, SMB__lt__equals_, 1, (Optr)VAR_stop_0_1);
    Array PThreadedCode2254 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign2255, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend2256, (Optr)&t_assign, (Optr)&t_push_variable, (Optr)VAR_stop_0_1, (Optr)&t_send1, (Optr)PSend2257, (Optr)&t_block_return);
    Block PBlock2253 = new_Block_with(empty_Array, empty_Array, PThreadedCode2254, 1, PSend2257);
    // +. 
    Send PSend2260 = new_Send((Optr)VAR_repOff_0_5, SMB__plus_, 1, (Optr)VAR_index_0_4);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend2261 = new_Send((Optr)VAR_replacement_0_2, SMB_at_, 1, (Optr)PSend2260);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend2262 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)VAR_index_0_4, (Optr)PSend2261);
    Array PThreadedCode2259 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_variable, (Optr)VAR_replacement_0_2, (Optr)&t_push_variable, (Optr)VAR_repOff_0_5, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_send1, (Optr)PSend2260, (Optr)&t_send1, (Optr)PSend2261, (Optr)&t_send2, (Optr)PSend2262, (Optr)&t_block_return);
    Block PBlock2258 = new_Block_with(empty_Array, empty_Array, PThreadedCode2259, 1, PSend2262);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend2263 = new_Send((Optr)PBlock2253, SMB_whileTrue_, 1, (Optr)PBlock2258);
    Array PThreadedCode2248 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign2249, (Optr)&t_push_variable, (Optr)VAR_repStart_0_3, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_send1, (Optr)PSend2250, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign2251, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend2252, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock2253, (Optr)&t_push_closure, (Optr)PBlock2258, (Optr)&t_send1, (Optr)PSend2263, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod2245 = new_Method_with(PArray2246, PArray2247, empty_Array, PThreadedCode2248, 4, PAssign2249, PAssign2251, PSend2263, self);
    
    MethodClosure MC_SMB_replaceFrom_to_with_startingAt_ = new_MethodClosure((Method)PMethod2245, String_Class);
    store_method(String_Class, SMB_replaceFrom_to_with_startingAt_, MC_SMB_replaceFrom_to_with_startingAt_);
}


static void init_SMB_isString() {
    Symbol SMB_isString = new_Symbol(L"isString");
    Array PThreadedCode2265 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod2264 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2265, 1, true_Const);
    
    MethodClosure MC_SMB_isString = new_MethodClosure((Method)PMethod2264, String_Class);
    store_method(String_Class, SMB_isString, MC_SMB_isString);
}


static void init_SMB_asParser() {
    Symbol SMB_asParser = new_Symbol(L"asParser");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2269 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend2271 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend2272 = new_Send((Optr)PSend2271, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend2276 = new_Send((Optr)self, SMB_at_, 1, (Optr)int_1_Const);
    // asParser. 
    Send PSend2277 = new_Send((Optr)PSend2276, SMB_asParser, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend2278 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend2277);
    Array PThreadedCode2275 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend2276, (Optr)&t_send0, (Optr)PSend2277, (Optr)&t_send1, (Optr)PSend2278, (Optr)&t_block_return);
    Block PBlock2274 = new_Block_with(empty_Array, empty_Array, PThreadedCode2275, 1, PSend2278);
    // ifTrue:. 
    Send PSend2273 = new_Send((Optr)PSend2272, SMB_ifTrue_, 1, (Optr)PBlock2274);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2279 = new_Send((Optr)PEGTerminal_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode2270 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2271, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend2272, (Optr)&t_send_ifTrue_, (Optr)PSend2273, (Optr)PBlock2274, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PEGTerminal_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2279, (Optr)&t_method_return);
    Block PBlock2268 = new_Block_with(PArray2269, empty_Array, PThreadedCode2270, 2, PSend2273, PSend2279);
    // on:. 
    Send PSend2280 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2268);
    Array PThreadedCode2267 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2268, (Optr)&t_send1, (Optr)PSend2280, (Optr)&t_method_return);
    Method PMethod2266 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2267, 1, PSend2280);
    
    MethodClosure MC_SMB_asParser = new_MethodClosure((Method)PMethod2266, String_Class);
    store_method(String_Class, SMB_asParser, MC_SMB_asParser);
}


static void init_class_SMB_lf() {
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend2283 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend2284 = new_Send((Optr)self, SMB_with_, 1, (Optr)PSend2283);
    Array PThreadedCode2282 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend2283, (Optr)&t_send1, (Optr)PSend2284, (Optr)&t_method_return);
    Method PMethod2281 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2282, 1, PSend2284);
    
    MethodClosure MC_SMB_lf = new_MethodClosure((Method)PMethod2281, HEADER(String_Class));
    store_method(HEADER(String_Class), SMB_lf, MC_SMB_lf);
}


static void init_class_SMB_crlf() {
    Symbol SMB_crlf = new_Symbol(L"crlf");
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend2287 = new_Send((Optr)Character_classReference, SMB_cr, 0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend2288 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend2289 = new_Send((Optr)self, SMB_with_with_, 2, (Optr)PSend2287, (Optr)PSend2288);
    Array PThreadedCode2286 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend2287, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend2288, (Optr)&t_send2, (Optr)PSend2289, (Optr)&t_method_return);
    Method PMethod2285 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2286, 1, PSend2289);
    
    MethodClosure MC_SMB_crlf = new_MethodClosure((Method)PMethod2285, HEADER(String_Class));
    store_method(HEADER(String_Class), SMB_crlf, MC_SMB_crlf);
}


static void init_class_SMB_with_() {
    Symbol SMB_with_ = new_Symbol(L"with:");
    Variable VAR_aChar_0_0 = new_Variable_named(L"aChar", 0);
    Array PArray2291 = new_Array_with(1, (Optr)VAR_aChar_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray2294 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend2296 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)VAR_aChar_0_0);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend2297 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode2295 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_aChar_0_0, (Optr)&t_send2, (Optr)PSend2296, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend2297, (Optr)&t_method_return);
    Block PBlock2293 = new_Block_with(PArray2294, empty_Array, PThreadedCode2295, 2, PSend2296, PSend2297);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend2298 = new_Send((Optr)self, SMB_new_, 1, (Optr)int_1_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend2299 = new_Send((Optr)PBlock2293, SMB_value_, 1, (Optr)PSend2298);
    Array PThreadedCode2292 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock2293, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend2298, (Optr)&t_send1, (Optr)PSend2299, (Optr)&t_method_return);
    Method PMethod2290 = new_Method_with(PArray2291, empty_Array, empty_Array, PThreadedCode2292, 1, PSend2299);
    
    MethodClosure MC_SMB_with_ = new_MethodClosure((Method)PMethod2290, HEADER(String_Class));
    store_method(HEADER(String_Class), SMB_with_, MC_SMB_with_);
}


static void init_class_SMB_space() {
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend2302 = new_Send((Optr)Character_classReference, SMB_space, 0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend2303 = new_Send((Optr)self, SMB_with_, 1, (Optr)PSend2302);
    Array PThreadedCode2301 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend2302, (Optr)&t_send1, (Optr)PSend2303, (Optr)&t_method_return);
    Method PMethod2300 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2301, 1, PSend2303);
    
    MethodClosure MC_SMB_space = new_MethodClosure((Method)PMethod2300, HEADER(String_Class));
    store_method(HEADER(String_Class), SMB_space, MC_SMB_space);
}


static void init_class_SMB_newFromAll_() {
    Symbol SMB_newFromAll_ = new_Symbol(L"newFromAll:");
    Variable VAR_strings_0_0 = new_Variable_named(L"strings", 0);
    Array PArray2305 = new_Array_with(1, (Optr)VAR_strings_0_0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Variable VAR_result_0_2 = new_Variable_named(L"result", 0);
    Variable VAR_position_0_3 = new_Variable_named(L"position", 0);
    Array PArray2306 = new_Array_with(3, (Optr)VAR_size_0_1, (Optr)VAR_result_0_2, (Optr)VAR_position_0_3);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign2308 = new_Assign((Optr)VAR_size_0_1, (Optr)int_0_Const);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray2310 = new_Array_with(1, (Optr)VAR_s_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend2314 = new_Send((Optr)VAR_s_1_0, SMB_size, 0);
    // +. 
    Send PSend2313 = new_Send((Optr)VAR_size_0_1, SMB__plus_, 1, (Optr)PSend2314);
    Assign PAssign2312 = new_Assign((Optr)VAR_size_0_1, (Optr)PSend2313);
    Array PThreadedCode2311 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign2312, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send0, (Optr)PSend2314, (Optr)&t_send1, (Optr)PSend2313, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock2309 = new_Block_with(PArray2310, empty_Array, PThreadedCode2311, 1, PAssign2312);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend2315 = new_Send((Optr)VAR_strings_0_0, SMB_do_, 1, (Optr)PBlock2309);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend2317 = new_Send((Optr)self, SMB_new_, 1, (Optr)VAR_size_0_1);
    Assign PAssign2316 = new_Assign((Optr)VAR_result_0_2, (Optr)PSend2317);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign2318 = new_Assign((Optr)VAR_position_0_3, (Optr)int_1_Const);
    Array PArray2320 = new_Array_with(1, (Optr)VAR_s_1_0);
    Variable VAR_c_2_0 = new_Variable_named(L"c", 2);
    Array PArray2323 = new_Array_with(1, (Optr)VAR_c_2_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend2325 = new_Send((Optr)VAR_result_0_2, SMB_at_put_, 2, (Optr)VAR_position_0_3, (Optr)VAR_c_2_0);
    // +. 
    Send PSend2327 = new_Send((Optr)VAR_position_0_3, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign2326 = new_Assign((Optr)VAR_position_0_3, (Optr)PSend2327);
    Array PThreadedCode2324 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_push_variable, (Optr)VAR_position_0_3, (Optr)&t_push_variable, (Optr)VAR_c_2_0, (Optr)&t_send2, (Optr)PSend2325, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign2326, (Optr)&t_push_variable, (Optr)VAR_position_0_3, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend2327, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock2322 = new_Block_with(PArray2323, empty_Array, PThreadedCode2324, 2, PSend2325, PAssign2326);
    // do:. 
    Send PSend2328 = new_Send((Optr)VAR_s_1_0, SMB_do_, 1, (Optr)PBlock2322);
    Array PThreadedCode2321 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_closure, (Optr)PBlock2322, (Optr)&t_send1, (Optr)PSend2328, (Optr)&t_method_return);
    Block PBlock2319 = new_Block_with(PArray2320, empty_Array, PThreadedCode2321, 1, PSend2328);
    // do:. 
    Send PSend2329 = new_Send((Optr)VAR_strings_0_0, SMB_do_, 1, (Optr)PBlock2319);
    Array PThreadedCode2307 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign2308, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_strings_0_0, (Optr)&t_push_closure, (Optr)PBlock2309, (Optr)&t_send1, (Optr)PSend2315, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign2316, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend2317, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign2318, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_strings_0_0, (Optr)&t_push_closure, (Optr)PBlock2319, (Optr)&t_send1, (Optr)PSend2329, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_method_return);
    Method PMethod2304 = new_Method_with(PArray2305, PArray2306, empty_Array, PThreadedCode2307, 6, PAssign2308, PSend2315, PAssign2316, PAssign2318, PSend2329, VAR_result_0_2);
    
    MethodClosure MC_SMB_newFromAll_ = new_MethodClosure((Method)PMethod2304, HEADER(String_Class));
    store_method(HEADER(String_Class), SMB_newFromAll_, MC_SMB_newFromAll_);
}


static void init_class_SMB_streamContents_() {
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    Variable VAR_blockWithArg_0_0 = new_Variable_named(L"blockWithArg", 0);
    Array PArray2331 = new_Array_with(1, (Optr)VAR_blockWithArg_0_0);
    Variable VAR_stream_0_1 = new_Variable_named(L"stream", 0);
    Array PArray2332 = new_Array_with(1, (Optr)VAR_stream_0_1);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_100 = new_SmallInt(100);
    Constant int_100_Const = new_Constant((Optr)int_100);
    // new:. 
    Send PSend2336 = new_Send((Optr)self, SMB_new_, 1, (Optr)int_100_Const);
    // on:. 
    Send PSend2335 = new_Send((Optr)WriteStream_classReference, SMB_on_, 1, (Optr)PSend2336);
    Assign PAssign2334 = new_Assign((Optr)VAR_stream_0_1, (Optr)PSend2335);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend2337 = new_Send((Optr)VAR_blockWithArg_0_0, SMB_value_, 1, (Optr)VAR_stream_0_1);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend2338 = new_Send((Optr)VAR_stream_0_1, SMB_contents, 0);
    Array PThreadedCode2333 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign2334, (Optr)&t_push_class_reference, (Optr)WriteStream_classReference, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend2336, (Optr)&t_send1, (Optr)PSend2335, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_blockWithArg_0_0, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send1, (Optr)PSend2337, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend2338, (Optr)&t_method_return);
    Method PMethod2330 = new_Method_with(PArray2331, PArray2332, empty_Array, PThreadedCode2333, 3, PAssign2334, PSend2337, PSend2338);
    
    MethodClosure MC_SMB_streamContents_ = new_MethodClosure((Method)PMethod2330, HEADER(String_Class));
    store_method(HEADER(String_Class), SMB_streamContents_, MC_SMB_streamContents_);
}


static void init_class_SMB_cr() {
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend2341 = new_Send((Optr)Character_classReference, SMB_cr, 0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend2342 = new_Send((Optr)self, SMB_with_, 1, (Optr)PSend2341);
    Array PThreadedCode2340 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend2341, (Optr)&t_send1, (Optr)PSend2342, (Optr)&t_method_return);
    Method PMethod2339 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2340, 1, PSend2342);
    
    MethodClosure MC_SMB_cr = new_MethodClosure((Method)PMethod2339, HEADER(String_Class));
    store_method(HEADER(String_Class), SMB_cr, MC_SMB_cr);
}


static void init_class_SMB_tab() {
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
    Send PSend2345 = new_Send((Optr)Character_classReference, SMB_tab, 0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend2346 = new_Send((Optr)self, SMB_with_, 1, (Optr)PSend2345);
    Array PThreadedCode2344 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend2345, (Optr)&t_send1, (Optr)PSend2346, (Optr)&t_method_return);
    Method PMethod2343 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2344, 1, PSend2346);
    
    MethodClosure MC_SMB_tab = new_MethodClosure((Method)PMethod2343, HEADER(String_Class));
    store_method(HEADER(String_Class), SMB_tab, MC_SMB_tab);
}

void init_Kernel_String_String_layout() {
    layout_Kernel_String_String_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_String_String_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_String_String_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_String_String_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_String_String_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_String_String_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_String = new_Symbol(L"String");
    String_Class = (Class)new_Class(Collections_Abstract_ArrayedCollection_Class, layout_Kernel_String_String_Class_class);
    Class_set_superclass(String_Class, Collections_Abstract_ArrayedCollection_Class);
    HEADER(String_Class)->layout = layout_Kernel_String_String_Class_class;
    String_Class->name = SMB_String;
    
}

void init_Kernel_String_String_methods() {
    init_SMB_capitalized();
    init_SMB_at_();
    init_SMB__equals_();
    init_SMB_asUppercase();
    init_SMB_asSymbol();
    init_SMB_basicAt_();
    init_SMB_asString();
    init_SMB_putOn_();
    init_SMB_findTokens_();
    init_SMB_printOn_();
    init_SMB_findDelimiters_startingAt_();
    init_SMB_size();
    init_SMB_indexOf_startingAt_();
    init_SMB_withBlanksTrimmed();
    init_SMB_contains_at_();
    init_SMB_asLowercase();
    init_SMB_asNumber();
    init_SMB_asArray();
    init_SMB_hash();
    init_SMB_asPEGRange();
    init_SMB_copy();
    init_SMB__append_();
    init_SMB_at_put_();
    init_SMB_skipDelimiters_startingAt_();
    init_SMB_join_();
    init_SMB_asPEGChoice();
    init_SMB_replaceFrom_to_with_startingAt_();
    init_SMB_isString();
    init_SMB_asParser();
    init_class_SMB_lf();
    init_class_SMB_crlf();
    init_class_SMB_with_();
    init_class_SMB_space();
    init_class_SMB_newFromAll_();
    init_class_SMB_streamContents_();
    init_class_SMB_cr();
    init_class_SMB_tab();
    
}