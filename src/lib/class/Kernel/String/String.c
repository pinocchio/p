#include <lib/class/Kernel/String/String.h>


Optr layout_Kernel_String_String_Class_class;


static void init_SMB_at_() {
    Symbol SMB_at_ = new_Symbol(L"at:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Array PArray1919 = new_Array_with(1, (Optr)VAR_index_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_Symbol = new_Symbol(L"String.Symbol");
    Annotation PAnnotation1921 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_at_, (Optr)SMB_String_minus_Symbol);
    Array PArray1920 = new_Array_with(1, (Optr)PAnnotation1921);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend1923 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode1922 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1923, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod1918 = new_NativeMethod_with(PArray1919, empty_Array, PArray1920, PThreadedCode1922, 2, PSend1923, self);
    
    MethodClosure MC_SMB_at_ = new_MethodClosure((Method)PNativeMethod1918, String_Class);
    store_method(String_Class, SMB_at_, MC_SMB_at_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray1925 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_Symbol = new_Symbol(L"String.Symbol");
    Annotation PAnnotation1927 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__equals_, (Optr)SMB_String_minus_Symbol);
    Array PArray1926 = new_Array_with(1, (Optr)PAnnotation1927);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend1929 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode1928 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1929, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod1924 = new_NativeMethod_with(PArray1925, empty_Array, PArray1926, PThreadedCode1928, 2, PSend1929, self);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PNativeMethod1924, String_Class);
    store_method(String_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_asUppercase() {
    Symbol SMB_asUppercase = new_Symbol(L"asUppercase");
    Variable VAR_cap_0_0 = new_Variable_named(L"cap", 0);
    Array PArray1931 = new_Array_with(1, (Optr)VAR_cap_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1934 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend1936 = new_Send((Optr)self, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_copy = new_Symbol(L"copy");
    // copy. 
    Send PSend1940 = new_Send((Optr)self, SMB_copy, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1941 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend1940);
    Array PThreadedCode1939 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1940, (Optr)&t_send1, (Optr)PSend1941, (Optr)&t_block_return);
    Block PBlock1938 = new_Block_with(empty_Array, empty_Array, PThreadedCode1939, 1, PSend1941);
    // ifTrue:. 
    Send PSend1937 = new_Send((Optr)PSend1936, SMB_ifTrue_, 1, (Optr)PBlock1938);
    // copy. 
    Send PSend1943 = new_Send((Optr)self, SMB_copy, 0);
    Assign PAssign1942 = new_Assign((Optr)VAR_cap_0_0, (Optr)PSend1943);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1944 = new_Send((Optr)VAR_cap_0_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray1946 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1948 = new_Send((Optr)VAR_cap_0_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    // asUppercase. 
    Send PSend1949 = new_Send((Optr)PSend1948, SMB_asUppercase, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend1950 = new_Send((Optr)VAR_cap_0_0, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend1949);
    Array PThreadedCode1947 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend1948, (Optr)&t_send0, (Optr)PSend1949, (Optr)&t_send2, (Optr)PSend1950, (Optr)&t_method_return);
    Block PBlock1945 = new_Block_with(PArray1946, empty_Array, PThreadedCode1947, 1, PSend1950);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend1951 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend1944, (Optr)PBlock1945);
    Array PThreadedCode1935 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1936, (Optr)&t_send_ifTrue_, (Optr)PSend1937, (Optr)PBlock1938, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1942, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1943, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_send0, (Optr)PSend1944, (Optr)&t_push_closure, (Optr)PBlock1945, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend1951, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_method_return);
    Block PBlock1933 = new_Block_with(PArray1934, empty_Array, PThreadedCode1935, 4, PSend1937, PAssign1942, PSend1951, VAR_cap_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1952 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1933);
    Array PThreadedCode1932 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1933, (Optr)&t_send1, (Optr)PSend1952, (Optr)&t_method_return);
    Method PMethod1930 = new_Method_with(empty_Array, PArray1931, empty_Array, PThreadedCode1932, 1, PSend1952);
    
    MethodClosure MC_SMB_asUppercase = new_MethodClosure((Method)PMethod1930, String_Class);
    store_method(String_Class, SMB_asUppercase, MC_SMB_asUppercase);
}


static void init_SMB_asParser() {
    Symbol SMB_asParser = new_Symbol(L"asParser");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1956 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1958 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend1959 = new_Send((Optr)PSend1958, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1963 = new_Send((Optr)self, SMB_at_, 1, (Optr)int_1_Const);
    // asParser. 
    Send PSend1964 = new_Send((Optr)PSend1963, SMB_asParser, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1965 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend1964);
    Array PThreadedCode1962 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1963, (Optr)&t_send0, (Optr)PSend1964, (Optr)&t_send1, (Optr)PSend1965, (Optr)&t_block_return);
    Block PBlock1961 = new_Block_with(empty_Array, empty_Array, PThreadedCode1962, 1, PSend1965);
    // ifTrue:. 
    Send PSend1960 = new_Send((Optr)PSend1959, SMB_ifTrue_, 1, (Optr)PBlock1961);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1966 = new_Send((Optr)PEGTerminal_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode1957 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1958, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1959, (Optr)&t_send_ifTrue_, (Optr)PSend1960, (Optr)PBlock1961, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PEGTerminal_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend1966, (Optr)&t_method_return);
    Block PBlock1955 = new_Block_with(PArray1956, empty_Array, PThreadedCode1957, 2, PSend1960, PSend1966);
    // on:. 
    Send PSend1967 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1955);
    Array PThreadedCode1954 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1955, (Optr)&t_send1, (Optr)PSend1967, (Optr)&t_method_return);
    Method PMethod1953 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1954, 1, PSend1967);
    
    MethodClosure MC_SMB_asParser = new_MethodClosure((Method)PMethod1953, String_Class);
    store_method(String_Class, SMB_asParser, MC_SMB_asParser);
}


static void init_SMB_asSymbol() {
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_String = new_Symbol(L"String.String");
    Annotation PAnnotation1970 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_asSymbol, (Optr)SMB_String_minus_String);
    Array PArray1969 = new_Array_with(1, (Optr)PAnnotation1970);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend1972 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode1971 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1972, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod1968 = new_NativeMethod_with(empty_Array, empty_Array, PArray1969, PThreadedCode1971, 2, PSend1972, self);
    
    MethodClosure MC_SMB_asSymbol = new_MethodClosure((Method)PNativeMethod1968, String_Class);
    store_method(String_Class, SMB_asSymbol, MC_SMB_asSymbol);
}


static void init_SMB_basicAt_() {
    Symbol SMB_basicAt_ = new_Symbol(L"basicAt:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Array PArray1974 = new_Array_with(1, (Optr)VAR_index_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_Symbol = new_Symbol(L"String.Symbol");
    Annotation PAnnotation1976 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_basicAt_, (Optr)SMB_String_minus_Symbol);
    Array PArray1975 = new_Array_with(1, (Optr)PAnnotation1976);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend1978 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode1977 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1978, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod1973 = new_NativeMethod_with(PArray1974, empty_Array, PArray1975, PThreadedCode1977, 2, PSend1978, self);
    
    MethodClosure MC_SMB_basicAt_ = new_MethodClosure((Method)PNativeMethod1973, String_Class);
    store_method(String_Class, SMB_basicAt_, MC_SMB_basicAt_);
}


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    Array PThreadedCode1980 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod1979 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1980, 1, self);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PMethod1979, String_Class);
    store_method(String_Class, SMB_asString, MC_SMB_asString);
}


static void init_SMB_putOn_() {
    Symbol SMB_putOn_ = new_Symbol(L"putOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray1982 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend1984 = new_Send((Optr)VAR_aStream_0_0, SMB_writeAll_, 1, (Optr)self);
    Array PThreadedCode1983 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend1984, (Optr)&t_method_return);
    Method PMethod1981 = new_Method_with(PArray1982, empty_Array, empty_Array, PThreadedCode1983, 1, PSend1984);
    
    MethodClosure MC_SMB_putOn_ = new_MethodClosure((Method)PMethod1981, String_Class);
    store_method(String_Class, SMB_putOn_, MC_SMB_putOn_);
}


static void init_SMB_findTokens_() {
    Symbol SMB_findTokens_ = new_Symbol(L"findTokens:");
    Variable VAR_delimiters_0_0 = new_Variable_named(L"delimiters", 0);
    Array PArray1986 = new_Array_with(1, (Optr)VAR_delimiters_0_0);
    Variable VAR_tokens_0_1 = new_Variable_named(L"tokens", 0);
    Variable VAR_keyStart_0_2 = new_Variable_named(L"keyStart", 0);
    Variable VAR_keyStop_0_3 = new_Variable_named(L"keyStop", 0);
    Variable VAR_separators_0_4 = new_Variable_named(L"separators", 0);
    Array PArray1987 = new_Array_with(4, (Optr)VAR_tokens_0_1, (Optr)VAR_keyStart_0_2, (Optr)VAR_keyStop_0_3, (Optr)VAR_separators_0_4);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend1990 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign1989 = new_Assign((Optr)VAR_tokens_0_1, (Optr)PSend1990);
    Symbol SMB_isCharacter = new_Symbol(L"isCharacter");
    // isCharacter. 
    Send PSend1993 = new_Send((Optr)VAR_delimiters_0_0, SMB_isCharacter, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend1996 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_delimiters_0_0);
    Array PThreadedCode1995 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_delimiters_0_0, (Optr)&t_send1, (Optr)PSend1996, (Optr)&t_block_return);
    Block PBlock1994 = new_Block_with(empty_Array, empty_Array, PThreadedCode1995, 1, PSend1996);
    Array PThreadedCode1998 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_delimiters_0_0, (Optr)&t_block_return);
    Block PBlock1997 = new_Block_with(empty_Array, empty_Array, PThreadedCode1998, 1, VAR_delimiters_0_0);
    // ifTrue:ifFalse:. 
    Send PSend1992 = new_Send((Optr)PSend1993, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock1994, (Optr)PBlock1997);
    Assign PAssign1991 = new_Assign((Optr)VAR_separators_0_4, (Optr)PSend1992);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign1999 = new_Assign((Optr)VAR_keyStop_0_3, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend2002 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend2003 = new_Send((Optr)VAR_keyStop_0_3, SMB__lt__equals_, 1, (Optr)PSend2002);
    Array PThreadedCode2001 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_keyStop_0_3, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2002, (Optr)&t_send1, (Optr)PSend2003, (Optr)&t_block_return);
    Block PBlock2000 = new_Block_with(empty_Array, empty_Array, PThreadedCode2001, 1, PSend2003);
    Symbol SMB_skipDelimiters_startingAt_ = new_Symbol(L"skipDelimiters:startingAt:");
    // skipDelimiters:startingAt:. 
    Send PSend2007 = new_Send((Optr)self, SMB_skipDelimiters_startingAt_, 2, (Optr)VAR_separators_0_4, (Optr)VAR_keyStop_0_3);
    Assign PAssign2006 = new_Assign((Optr)VAR_keyStart_0_2, (Optr)PSend2007);
    Symbol SMB_findDelimiters_startingAt_ = new_Symbol(L"findDelimiters:startingAt:");
    // findDelimiters:startingAt:. 
    Send PSend2009 = new_Send((Optr)self, SMB_findDelimiters_startingAt_, 2, (Optr)VAR_separators_0_4, (Optr)VAR_keyStart_0_2);
    Assign PAssign2008 = new_Assign((Optr)VAR_keyStop_0_3, (Optr)PSend2009);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend2010 = new_Send((Optr)VAR_keyStart_0_2, SMB__lt_, 1, (Optr)VAR_keyStop_0_3);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend2014 = new_Send((Optr)VAR_keyStop_0_3, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend2015 = new_Send((Optr)self, SMB_copyFrom_to_, 2, (Optr)VAR_keyStart_0_2, (Optr)PSend2014);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend2016 = new_Send((Optr)VAR_tokens_0_1, SMB_add_, 1, (Optr)PSend2015);
    Array PThreadedCode2013 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_keyStart_0_2, (Optr)&t_push_variable, (Optr)VAR_keyStop_0_3, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend2014, (Optr)&t_send2, (Optr)PSend2015, (Optr)&t_send1, (Optr)PSend2016, (Optr)&t_block_return);
    Block PBlock2012 = new_Block_with(empty_Array, empty_Array, PThreadedCode2013, 1, PSend2016);
    // ifTrue:. 
    Send PSend2011 = new_Send((Optr)PSend2010, SMB_ifTrue_, 1, (Optr)PBlock2012);
    Array PThreadedCode2005 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign2006, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_separators_0_4, (Optr)&t_push_variable, (Optr)VAR_keyStop_0_3, (Optr)&t_send2, (Optr)PSend2007, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign2008, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_separators_0_4, (Optr)&t_push_variable, (Optr)VAR_keyStart_0_2, (Optr)&t_send2, (Optr)PSend2009, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_keyStart_0_2, (Optr)&t_push_variable, (Optr)VAR_keyStop_0_3, (Optr)&t_send1, (Optr)PSend2010, (Optr)&t_send_ifTrue_, (Optr)PSend2011, (Optr)PBlock2012, (Optr)&t_block_return);
    Block PBlock2004 = new_Block_with(empty_Array, empty_Array, PThreadedCode2005, 3, PAssign2006, PAssign2008, PSend2011);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend2017 = new_Send((Optr)PBlock2000, SMB_whileTrue_, 1, (Optr)PBlock2004);
    Array PThreadedCode1988 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign1989, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend1990, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1991, (Optr)&t_push_variable, (Optr)VAR_delimiters_0_0, (Optr)&t_send0, (Optr)PSend1993, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend1992, (Optr)PBlock1994, (Optr)PBlock1997, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1999, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock2000, (Optr)&t_push_closure, (Optr)PBlock2004, (Optr)&t_send1, (Optr)PSend2017, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_method_return);
    Method PMethod1985 = new_Method_with(PArray1986, PArray1987, empty_Array, PThreadedCode1988, 5, PAssign1989, PAssign1991, PAssign1999, PSend2017, VAR_tokens_0_1);
    
    MethodClosure MC_SMB_findTokens_ = new_MethodClosure((Method)PMethod1985, String_Class);
    store_method(String_Class, SMB_findTokens_, MC_SMB_findTokens_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
    Array PArray2019 = new_Array_with(1, (Optr)VAR_stream_0_0);
    String string_2021 = new_String(L"'");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_2021_Const = new_Constant((Optr)string_2021);
    // <<. 
    Send PSend2022 = new_Send((Optr)VAR_stream_0_0, SMB__shiftLeft_, 1, (Optr)string_2021_Const);
    // <<. 
    Send PSend2023 = new_Send((Optr)PSend2022, SMB__shiftLeft_, 1, (Optr)self);
    String string_2024 = new_String(L"'");
    Constant string_2024_Const = new_Constant((Optr)string_2024);
    // <<. 
    Send PSend2025 = new_Send((Optr)PSend2023, SMB__shiftLeft_, 1, (Optr)string_2024_Const);
    Array PThreadedCode2020 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_push1, (Optr)string_2021, (Optr)&t_send1, (Optr)PSend2022, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2023, (Optr)&t_push1, (Optr)string_2024, (Optr)&t_send1, (Optr)PSend2025, (Optr)&t_method_return);
    Method PMethod2018 = new_Method_with(PArray2019, empty_Array, empty_Array, PThreadedCode2020, 1, PSend2025);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod2018, String_Class);
    store_method(String_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_findDelimiters_startingAt_() {
    Symbol SMB_findDelimiters_startingAt_ = new_Symbol(L"findDelimiters:startingAt:");
    Variable VAR_delimiters_0_0 = new_Variable_named(L"delimiters", 0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Array PArray2027 = new_Array_with(2, (Optr)VAR_delimiters_0_0, (Optr)VAR_start_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2030 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend2032 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray2034 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR_delim_3_0 = new_Variable_named(L"delim", 3);
    Array PArray2037 = new_Array_with(1, (Optr)VAR_delim_3_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend2039 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend2040 = new_Send((Optr)VAR_delim_3_0, SMB__equals_, 1, (Optr)PSend2039);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend2044 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_i_2_0);
    Array PThreadedCode2043 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend2044, (Optr)&t_block_return);
    Block PBlock2042 = new_Block_with(empty_Array, empty_Array, PThreadedCode2043, 1, PSend2044);
    // ifTrue:. 
    Send PSend2041 = new_Send((Optr)PSend2040, SMB_ifTrue_, 1, (Optr)PBlock2042);
    Array PThreadedCode2038 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_delim_3_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend2039, (Optr)&t_send1, (Optr)PSend2040, (Optr)&t_send_ifTrue_, (Optr)PSend2041, (Optr)PBlock2042, (Optr)&t_method_return);
    Block PBlock2036 = new_Block_with(PArray2037, empty_Array, PThreadedCode2038, 1, PSend2041);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend2045 = new_Send((Optr)VAR_delimiters_0_0, SMB_do_, 1, (Optr)PBlock2036);
    Array PThreadedCode2035 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_delimiters_0_0, (Optr)&t_push_closure, (Optr)PBlock2036, (Optr)&t_send1, (Optr)PSend2045, (Optr)&t_method_return);
    Block PBlock2033 = new_Block_with(PArray2034, empty_Array, PThreadedCode2035, 1, PSend2045);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend2046 = new_Send((Optr)VAR_start_0_1, SMB_to_do_, 2, (Optr)PSend2032, (Optr)PBlock2033);
    // size. 
    Send PSend2047 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend2048 = new_Send((Optr)PSend2047, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode2031 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2032, (Optr)&t_push_closure, (Optr)PBlock2033, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend2046, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2047, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend2048, (Optr)&t_method_return);
    Block PBlock2029 = new_Block_with(PArray2030, empty_Array, PThreadedCode2031, 2, PSend2046, PSend2048);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2049 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2029);
    Array PThreadedCode2028 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2029, (Optr)&t_send1, (Optr)PSend2049, (Optr)&t_method_return);
    Method PMethod2026 = new_Method_with(PArray2027, empty_Array, empty_Array, PThreadedCode2028, 1, PSend2049);
    
    MethodClosure MC_SMB_findDelimiters_startingAt_ = new_MethodClosure((Method)PMethod2026, String_Class);
    store_method(String_Class, SMB_findDelimiters_startingAt_, MC_SMB_findDelimiters_startingAt_);
}


static void init_SMB_size() {
    Symbol SMB_size = new_Symbol(L"size");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_Symbol = new_Symbol(L"String.Symbol");
    Annotation PAnnotation2052 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_size, (Optr)SMB_String_minus_Symbol);
    Array PArray2051 = new_Array_with(1, (Optr)PAnnotation2052);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend2054 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode2053 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2054, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod2050 = new_NativeMethod_with(empty_Array, empty_Array, PArray2051, PThreadedCode2053, 2, PSend2054, self);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PNativeMethod2050, String_Class);
    store_method(String_Class, SMB_size, MC_SMB_size);
}


static void init_SMB_indexOf_startingAt_() {
    Symbol SMB_indexOf_startingAt_ = new_Symbol(L"indexOf:startingAt:");
    Variable VAR_aCharacter_0_0 = new_Variable_named(L"aCharacter", 0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Array PArray2056 = new_Array_with(2, (Optr)VAR_aCharacter_0_0, (Optr)VAR_start_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2059 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isCharacter = new_Symbol(L"isCharacter");
    // isCharacter. 
    Send PSend2061 = new_Send((Optr)VAR_aCharacter_0_0, SMB_isCharacter, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // escape:. 
    Send PSend2065 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)int_0_Const);
    Array PThreadedCode2064 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend2065, (Optr)&t_block_return);
    Block PBlock2063 = new_Block_with(empty_Array, empty_Array, PThreadedCode2064, 1, PSend2065);
    // ifFalse:. 
    Send PSend2062 = new_Send((Optr)PSend2061, SMB_ifFalse_, 1, (Optr)PBlock2063);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend2066 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_pos_2_0 = new_Variable_named(L"pos", 2);
    Array PArray2068 = new_Array_with(1, (Optr)VAR_pos_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend2070 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_pos_2_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend2071 = new_Send((Optr)PSend2070, SMB_asInteger, 0);
    // asInteger. 
    Send PSend2072 = new_Send((Optr)VAR_aCharacter_0_0, SMB_asInteger, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend2073 = new_Send((Optr)PSend2071, SMB__equals_, 1, (Optr)PSend2072);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend2077 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_pos_2_0);
    Array PThreadedCode2076 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_pos_2_0, (Optr)&t_send1, (Optr)PSend2077, (Optr)&t_block_return);
    Block PBlock2075 = new_Block_with(empty_Array, empty_Array, PThreadedCode2076, 1, PSend2077);
    // ifTrue:. 
    Send PSend2074 = new_Send((Optr)PSend2073, SMB_ifTrue_, 1, (Optr)PBlock2075);
    Array PThreadedCode2069 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_pos_2_0, (Optr)&t_send1, (Optr)PSend2070, (Optr)&t_send0, (Optr)PSend2071, (Optr)&t_push_variable, (Optr)VAR_aCharacter_0_0, (Optr)&t_send0, (Optr)PSend2072, (Optr)&t_send1, (Optr)PSend2073, (Optr)&t_send_ifTrue_, (Optr)PSend2074, (Optr)PBlock2075, (Optr)&t_method_return);
    Block PBlock2067 = new_Block_with(PArray2068, empty_Array, PThreadedCode2069, 1, PSend2074);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend2078 = new_Send((Optr)VAR_start_0_1, SMB_to_do_, 2, (Optr)PSend2066, (Optr)PBlock2067);
    Array PThreadedCode2060 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_aCharacter_0_0, (Optr)&t_send0, (Optr)PSend2061, (Optr)&t_send_ifFalse_, (Optr)PSend2062, (Optr)PBlock2063, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2066, (Optr)&t_push_closure, (Optr)PBlock2067, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend2078, (Optr)&t_zap, (Optr)&t_method_return_0);
    Block PBlock2058 = new_Block_with(PArray2059, empty_Array, PThreadedCode2060, 3, PSend2062, PSend2078, int_0_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2079 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2058);
    Array PThreadedCode2057 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2058, (Optr)&t_send1, (Optr)PSend2079, (Optr)&t_method_return);
    Method PMethod2055 = new_Method_with(PArray2056, empty_Array, empty_Array, PThreadedCode2057, 1, PSend2079);
    
    MethodClosure MC_SMB_indexOf_startingAt_ = new_MethodClosure((Method)PMethod2055, String_Class);
    store_method(String_Class, SMB_indexOf_startingAt_, MC_SMB_indexOf_startingAt_);
}


static void init_SMB_withBlanksTrimmed() {
    Symbol SMB_withBlanksTrimmed = new_Symbol(L"withBlanksTrimmed");
    Variable VAR_first_0_0 = new_Variable_named(L"first", 0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Array PArray2081 = new_Array_with(2, (Optr)VAR_first_0_0, (Optr)VAR_result_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2084 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_findFirst_ = new_Symbol(L"findFirst:");
    Variable VAR_c_2_0 = new_Variable_named(L"c", 2);
    Array PArray2089 = new_Array_with(1, (Optr)VAR_c_2_0);
    Symbol SMB_isSeparator = new_Symbol(L"isSeparator");
    // isSeparator. 
    Send PSend2091 = new_Send((Optr)VAR_c_2_0, SMB_isSeparator, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend2092 = new_Send((Optr)PSend2091, SMB_not, 0);
    Array PThreadedCode2090 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_c_2_0, (Optr)&t_send0, (Optr)PSend2091, (Optr)&t_send0, (Optr)PSend2092, (Optr)&t_method_return);
    Block PBlock2088 = new_Block_with(PArray2089, empty_Array, PThreadedCode2090, 1, PSend2092);
    // findFirst:. 
    Send PSend2087 = new_Send((Optr)self, SMB_findFirst_, 1, (Optr)PBlock2088);
    Assign PAssign2086 = new_Assign((Optr)VAR_first_0_0, (Optr)PSend2087);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend2093 = new_Send((Optr)VAR_first_0_0, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_2097 = new_String(L"");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    Constant string_2097_Const = new_Constant((Optr)string_2097);
    // escape:. 
    Send PSend2098 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_2097_Const);
    Array PThreadedCode2096 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_2097, (Optr)&t_send1, (Optr)PSend2098, (Optr)&t_block_return);
    Block PBlock2095 = new_Block_with(empty_Array, empty_Array, PThreadedCode2096, 1, PSend2098);
    // ifTrue:. 
    Send PSend2094 = new_Send((Optr)PSend2093, SMB_ifTrue_, 1, (Optr)PBlock2095);
    Array PArray2100 = new_Array_with(1, (Optr)VAR_c_2_0);
    // isSeparator. 
    Send PSend2102 = new_Send((Optr)VAR_c_2_0, SMB_isSeparator, 0);
    // not. 
    Send PSend2103 = new_Send((Optr)PSend2102, SMB_not, 0);
    Array PThreadedCode2101 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_c_2_0, (Optr)&t_send0, (Optr)PSend2102, (Optr)&t_send0, (Optr)PSend2103, (Optr)&t_method_return);
    Block PBlock2099 = new_Block_with(PArray2100, empty_Array, PThreadedCode2101, 1, PSend2103);
    Symbol SMB_findLast_ = new_Symbol(L"findLast:");
    // findLast:. 
    Send PSend2104 = new_Send((Optr)self, SMB_findLast_, 1, (Optr)PBlock2099);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend2105 = new_Send((Optr)self, SMB_copyFrom_to_, 2, (Optr)VAR_first_0_0, (Optr)PSend2104);
    Array PThreadedCode2085 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign2086, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock2088, (Optr)&t_send1, (Optr)PSend2087, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_first_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend2093, (Optr)&t_send_ifTrue_, (Optr)PSend2094, (Optr)PBlock2095, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_first_0_0, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock2099, (Optr)&t_send1, (Optr)PSend2104, (Optr)&t_send2, (Optr)PSend2105, (Optr)&t_method_return);
    Block PBlock2083 = new_Block_with(PArray2084, empty_Array, PThreadedCode2085, 3, PAssign2086, PSend2094, PSend2105);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2106 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2083);
    Array PThreadedCode2082 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2083, (Optr)&t_send1, (Optr)PSend2106, (Optr)&t_method_return);
    Method PMethod2080 = new_Method_with(empty_Array, PArray2081, empty_Array, PThreadedCode2082, 1, PSend2106);
    
    MethodClosure MC_SMB_withBlanksTrimmed = new_MethodClosure((Method)PMethod2080, String_Class);
    store_method(String_Class, SMB_withBlanksTrimmed, MC_SMB_withBlanksTrimmed);
}


static void init_SMB_contains_at_() {
    Symbol SMB_contains_at_ = new_Symbol(L"contains:at:");
    Variable VAR_substring_0_0 = new_Variable_named(L"substring", 0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Array PArray2108 = new_Array_with(2, (Optr)VAR_substring_0_0, (Optr)VAR_position_0_1);
    Variable VAR_size_0_2 = new_Variable_named(L"size", 0);
    Array PArray2109 = new_Array_with(1, (Optr)VAR_size_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2112 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend2115 = new_Send((Optr)VAR_substring_0_0, SMB_size, 0);
    Assign PAssign2114 = new_Assign((Optr)VAR_size_0_2, (Optr)PSend2115);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend2116 = new_Send((Optr)VAR_position_0_1, SMB__plus_, 1, (Optr)VAR_size_0_2);
    // size. 
    Send PSend2117 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend2118 = new_Send((Optr)PSend2116, SMB__gt_, 1, (Optr)PSend2117);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend2122 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode2121 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend2122, (Optr)&t_block_return);
    Block PBlock2120 = new_Block_with(empty_Array, empty_Array, PThreadedCode2121, 1, PSend2122);
    // ifTrue:. 
    Send PSend2119 = new_Send((Optr)PSend2118, SMB_ifTrue_, 1, (Optr)PBlock2120);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray2124 = new_Array_with(1, (Optr)VAR_i_2_0);
    // +. 
    Send PSend2126 = new_Send((Optr)VAR_position_0_1, SMB__plus_, 1, (Optr)VAR_i_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend2127 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend2126);
    // at:. 
    Send PSend2128 = new_Send((Optr)VAR_substring_0_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend2129 = new_Send((Optr)PSend2127, SMB__equals_, 1, (Optr)PSend2128);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend2133 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode2132 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend2133, (Optr)&t_block_return);
    Block PBlock2131 = new_Block_with(empty_Array, empty_Array, PThreadedCode2132, 1, PSend2133);
    // ifFalse:. 
    Send PSend2130 = new_Send((Optr)PSend2129, SMB_ifFalse_, 1, (Optr)PBlock2131);
    Array PThreadedCode2125 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend2126, (Optr)&t_send1, (Optr)PSend2127, (Optr)&t_push_variable, (Optr)VAR_substring_0_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend2128, (Optr)&t_send1, (Optr)PSend2129, (Optr)&t_send_ifFalse_, (Optr)PSend2130, (Optr)PBlock2131, (Optr)&t_method_return);
    Block PBlock2123 = new_Block_with(PArray2124, empty_Array, PThreadedCode2125, 1, PSend2130);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend2134 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_size_0_2, (Optr)PBlock2123);
    Array PThreadedCode2113 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign2114, (Optr)&t_push_variable, (Optr)VAR_substring_0_0, (Optr)&t_send0, (Optr)PSend2115, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_push_variable, (Optr)VAR_size_0_2, (Optr)&t_send1, (Optr)PSend2116, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2117, (Optr)&t_send1, (Optr)PSend2118, (Optr)&t_send_ifTrue_, (Optr)PSend2119, (Optr)PBlock2120, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_2, (Optr)&t_push_closure, (Optr)PBlock2123, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend2134, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock2111 = new_Block_with(PArray2112, empty_Array, PThreadedCode2113, 4, PAssign2114, PSend2119, PSend2134, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2135 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2111);
    Array PThreadedCode2110 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2111, (Optr)&t_send1, (Optr)PSend2135, (Optr)&t_method_return);
    Method PMethod2107 = new_Method_with(PArray2108, PArray2109, empty_Array, PThreadedCode2110, 1, PSend2135);
    
    MethodClosure MC_SMB_contains_at_ = new_MethodClosure((Method)PMethod2107, String_Class);
    store_method(String_Class, SMB_contains_at_, MC_SMB_contains_at_);
}


static void init_SMB_asLowercase() {
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    Variable VAR_cap_0_0 = new_Variable_named(L"cap", 0);
    Array PArray2137 = new_Array_with(1, (Optr)VAR_cap_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2140 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend2142 = new_Send((Optr)self, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_copy = new_Symbol(L"copy");
    // copy. 
    Send PSend2146 = new_Send((Optr)self, SMB_copy, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend2147 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend2146);
    Array PThreadedCode2145 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2146, (Optr)&t_send1, (Optr)PSend2147, (Optr)&t_block_return);
    Block PBlock2144 = new_Block_with(empty_Array, empty_Array, PThreadedCode2145, 1, PSend2147);
    // ifTrue:. 
    Send PSend2143 = new_Send((Optr)PSend2142, SMB_ifTrue_, 1, (Optr)PBlock2144);
    // copy. 
    Send PSend2149 = new_Send((Optr)self, SMB_copy, 0);
    Assign PAssign2148 = new_Assign((Optr)VAR_cap_0_0, (Optr)PSend2149);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend2150 = new_Send((Optr)VAR_cap_0_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray2152 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend2154 = new_Send((Optr)VAR_cap_0_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    // asLowercase. 
    Send PSend2155 = new_Send((Optr)PSend2154, SMB_asLowercase, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend2156 = new_Send((Optr)VAR_cap_0_0, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend2155);
    Array PThreadedCode2153 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend2154, (Optr)&t_send0, (Optr)PSend2155, (Optr)&t_send2, (Optr)PSend2156, (Optr)&t_method_return);
    Block PBlock2151 = new_Block_with(PArray2152, empty_Array, PThreadedCode2153, 1, PSend2156);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend2157 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend2150, (Optr)PBlock2151);
    Array PThreadedCode2141 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2142, (Optr)&t_send_ifTrue_, (Optr)PSend2143, (Optr)PBlock2144, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign2148, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2149, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_send0, (Optr)PSend2150, (Optr)&t_push_closure, (Optr)PBlock2151, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend2157, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_method_return);
    Block PBlock2139 = new_Block_with(PArray2140, empty_Array, PThreadedCode2141, 4, PSend2143, PAssign2148, PSend2157, VAR_cap_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2158 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2139);
    Array PThreadedCode2138 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2139, (Optr)&t_send1, (Optr)PSend2158, (Optr)&t_method_return);
    Method PMethod2136 = new_Method_with(empty_Array, PArray2137, empty_Array, PThreadedCode2138, 1, PSend2158);
    
    MethodClosure MC_SMB_asLowercase = new_MethodClosure((Method)PMethod2136, String_Class);
    store_method(String_Class, SMB_asLowercase, MC_SMB_asLowercase);
}


static void init_SMB_asNumber() {
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_String = new_Symbol(L"String.String");
    Annotation PAnnotation2161 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_asNumber, (Optr)SMB_String_minus_String);
    Array PArray2160 = new_Array_with(1, (Optr)PAnnotation2161);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend2163 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode2162 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2163, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod2159 = new_NativeMethod_with(empty_Array, empty_Array, PArray2160, PThreadedCode2162, 2, PSend2163, self);
    
    MethodClosure MC_SMB_asNumber = new_MethodClosure((Method)PNativeMethod2159, String_Class);
    store_method(String_Class, SMB_asNumber, MC_SMB_asNumber);
}


static void init_SMB_asArray() {
    Symbol SMB_asArray = new_Symbol(L"asArray");
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    // newFrom:. 
    Send PSend2166 = new_Send((Optr)Array_classReference, SMB_newFrom_, 1, (Optr)self);
    Array PThreadedCode2165 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2166, (Optr)&t_method_return);
    Method PMethod2164 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2165, 1, PSend2166);
    
    MethodClosure MC_SMB_asArray = new_MethodClosure((Method)PMethod2164, String_Class);
    store_method(String_Class, SMB_asArray, MC_SMB_asArray);
}


static void init_SMB_hash() {
    Symbol SMB_hash = new_Symbol(L"hash");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_Symbol = new_Symbol(L"String.Symbol");
    Annotation PAnnotation2169 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_hash, (Optr)SMB_String_minus_Symbol);
    Array PArray2168 = new_Array_with(1, (Optr)PAnnotation2169);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend2171 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode2170 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2171, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod2167 = new_NativeMethod_with(empty_Array, empty_Array, PArray2168, PThreadedCode2170, 2, PSend2171, self);
    
    MethodClosure MC_SMB_hash = new_MethodClosure((Method)PNativeMethod2167, String_Class);
    store_method(String_Class, SMB_hash, MC_SMB_hash);
}


static void init_SMB_asPEGRange() {
    Symbol SMB_asPEGRange = new_Symbol(L"asPEGRange");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend2174 = new_Send((Optr)self, SMB_size, 0);
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant int_3_Const = new_Constant((Optr)int_3);
    // =. 
    Send PSend2175 = new_Send((Optr)PSend2174, SMB__equals_, 1, (Optr)int_3_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend2178 = new_Send((Optr)self, SMB_at_, 1, (Optr)int_2_Const);
    Character char_2179 = new_Character(L'-');
    Constant char_2179_Const = new_Constant((Optr)char_2179);
    // =. 
    Send PSend2180 = new_Send((Optr)PSend2178, SMB__equals_, 1, (Optr)char_2179_Const);
    Array PThreadedCode2177 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend2178, (Optr)&t_push1, (Optr)char_2179, (Optr)&t_send1, (Optr)PSend2180, (Optr)&t_block_return);
    Block PBlock2176 = new_Block_with(empty_Array, empty_Array, PThreadedCode2177, 1, PSend2180);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend2181 = new_Send((Optr)PSend2175, SMB_and_, 1, (Optr)PBlock2176);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_2185 = new_String(L"Cannot convert ");
    Constant string_2185_Const = new_Constant((Optr)string_2185);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend2186 = new_Send((Optr)string_2185_Const, SMB__append_, 1, (Optr)self);
    String string_2187 = new_String(L" to PEG range. Expected format: beginchar-endchar");
    Constant string_2187_Const = new_Constant((Optr)string_2187);
    // ,. 
    Send PSend2188 = new_Send((Optr)PSend2186, SMB__append_, 1, (Optr)string_2187_Const);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend2189 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend2188);
    Array PThreadedCode2184 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_2185, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2186, (Optr)&t_push1, (Optr)string_2187, (Optr)&t_send1, (Optr)PSend2188, (Optr)&t_send1, (Optr)PSend2189, (Optr)&t_block_return);
    Block PBlock2183 = new_Block_with(empty_Array, empty_Array, PThreadedCode2184, 1, PSend2189);
    // ifFalse:. 
    Send PSend2182 = new_Send((Optr)PSend2181, SMB_ifFalse_, 1, (Optr)PBlock2183);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend2190 = new_Send((Optr)self, SMB_at_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend2191 = new_Send((Optr)self, SMB_at_, 1, (Optr)int_3_Const);
    Symbol SMB_between_and_ = new_Symbol(L"between:and:");
    // between:and:. 
    Send PSend2192 = new_Send((Optr)PEGRange_classReference, SMB_between_and_, 2, (Optr)PSend2190, (Optr)PSend2191);
    Array PThreadedCode2173 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2174, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend2175, (Optr)&t_push_closure, (Optr)PBlock2176, (Optr)&t_send1, (Optr)PSend2181, (Optr)&t_send_ifFalse_, (Optr)PSend2182, (Optr)PBlock2183, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PEGRange_classReference, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend2190, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend2191, (Optr)&t_send2, (Optr)PSend2192, (Optr)&t_method_return);
    Method PMethod2172 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2173, 2, PSend2182, PSend2192);
    
    MethodClosure MC_SMB_asPEGRange = new_MethodClosure((Method)PMethod2172, String_Class);
    store_method(String_Class, SMB_asPEGRange, MC_SMB_asPEGRange);
}


static void init_SMB_copy() {
    Symbol SMB_copy = new_Symbol(L"copy");
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend2195 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    // newFrom:. 
    Send PSend2196 = new_Send((Optr)PSend2195, SMB_newFrom_, 1, (Optr)self);
    Array PThreadedCode2194 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2195, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2196, (Optr)&t_method_return);
    Method PMethod2193 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2194, 1, PSend2196);
    
    MethodClosure MC_SMB_copy = new_MethodClosure((Method)PMethod2193, String_Class);
    store_method(String_Class, SMB_copy, MC_SMB_copy);
}


static void init_SMB__append_() {
    Symbol SMB__append_ = new_Symbol(L",");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray2198 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_String = new_Symbol(L"String.String");
    Annotation PAnnotation2200 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__append_, (Optr)SMB_String_minus_String);
    Array PArray2199 = new_Array_with(1, (Optr)PAnnotation2200);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend2202 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode2201 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2202, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod2197 = new_NativeMethod_with(PArray2198, empty_Array, PArray2199, PThreadedCode2201, 2, PSend2202, self);
    
    MethodClosure MC_SMB__append_ = new_MethodClosure((Method)PNativeMethod2197, String_Class);
    store_method(String_Class, SMB__append_, MC_SMB__append_);
}


static void init_SMB_at_put_() {
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Variable VAR_character_0_1 = new_Variable_named(L"character", 0);
    Array PArray2204 = new_Array_with(2, (Optr)VAR_index_0_0, (Optr)VAR_character_0_1);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_String = new_Symbol(L"String.String");
    Annotation PAnnotation2206 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_at_put_, (Optr)SMB_String_minus_String);
    Array PArray2205 = new_Array_with(1, (Optr)PAnnotation2206);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend2208 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode2207 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2208, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod2203 = new_NativeMethod_with(PArray2204, empty_Array, PArray2205, PThreadedCode2207, 2, PSend2208, self);
    
    MethodClosure MC_SMB_at_put_ = new_MethodClosure((Method)PNativeMethod2203, String_Class);
    store_method(String_Class, SMB_at_put_, MC_SMB_at_put_);
}


static void init_SMB_skipDelimiters_startingAt_() {
    Symbol SMB_skipDelimiters_startingAt_ = new_Symbol(L"skipDelimiters:startingAt:");
    Variable VAR_delimiters_0_0 = new_Variable_named(L"delimiters", 0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Array PArray2210 = new_Array_with(2, (Optr)VAR_delimiters_0_0, (Optr)VAR_start_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2213 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend2215 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray2217 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR_delim_3_0 = new_Variable_named(L"delim", 3);
    Array PArray2220 = new_Array_with(1, (Optr)VAR_delim_3_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend2222 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend2223 = new_Send((Optr)VAR_delim_3_0, SMB__equals_, 1, (Optr)PSend2222);
    Array PThreadedCode2221 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_delim_3_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend2222, (Optr)&t_send1, (Optr)PSend2223, (Optr)&t_method_return);
    Block PBlock2219 = new_Block_with(PArray2220, empty_Array, PThreadedCode2221, 1, PSend2223);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend2226 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_i_2_0);
    Array PThreadedCode2225 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend2226, (Optr)&t_block_return);
    Block PBlock2224 = new_Block_with(empty_Array, empty_Array, PThreadedCode2225, 1, PSend2226);
    Symbol SMB_detect_ifNone_ = new_Symbol(L"detect:ifNone:");
    // detect:ifNone:. 
    Send PSend2227 = new_Send((Optr)VAR_delimiters_0_0, SMB_detect_ifNone_, 2, (Optr)PBlock2219, (Optr)PBlock2224);
    Array PThreadedCode2218 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_delimiters_0_0, (Optr)&t_push_closure, (Optr)PBlock2219, (Optr)&t_push_closure, (Optr)PBlock2224, (Optr)&t_send2, (Optr)PSend2227, (Optr)&t_method_return);
    Block PBlock2216 = new_Block_with(PArray2217, empty_Array, PThreadedCode2218, 1, PSend2227);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend2228 = new_Send((Optr)VAR_start_0_1, SMB_to_do_, 2, (Optr)PSend2215, (Optr)PBlock2216);
    // size. 
    Send PSend2229 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend2230 = new_Send((Optr)PSend2229, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode2214 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2215, (Optr)&t_push_closure, (Optr)PBlock2216, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend2228, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2229, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend2230, (Optr)&t_method_return);
    Block PBlock2212 = new_Block_with(PArray2213, empty_Array, PThreadedCode2214, 2, PSend2228, PSend2230);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2231 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2212);
    Array PThreadedCode2211 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2212, (Optr)&t_send1, (Optr)PSend2231, (Optr)&t_method_return);
    Method PMethod2209 = new_Method_with(PArray2210, empty_Array, empty_Array, PThreadedCode2211, 1, PSend2231);
    
    MethodClosure MC_SMB_skipDelimiters_startingAt_ = new_MethodClosure((Method)PMethod2209, String_Class);
    store_method(String_Class, SMB_skipDelimiters_startingAt_, MC_SMB_skipDelimiters_startingAt_);
}


static void init_SMB_join_() {
    Symbol SMB_join_ = new_Symbol(L"join:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray2233 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_stream_1_0 = new_Variable_named(L"stream", 1);
    Array PArray2236 = new_Array_with(1, (Optr)VAR_stream_1_0);
    Variable VAR_each_2_0 = new_Variable_named(L"each", 2);
    Array PArray2239 = new_Array_with(1, (Optr)VAR_each_2_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend2241 = new_Send((Optr)VAR_each_2_0, SMB_asString, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend2242 = new_Send((Optr)VAR_stream_1_0, SMB__shiftLeft_, 1, (Optr)PSend2241);
    Array PThreadedCode2240 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_stream_1_0, (Optr)&t_push_variable, (Optr)VAR_each_2_0, (Optr)&t_send0, (Optr)PSend2241, (Optr)&t_send1, (Optr)PSend2242, (Optr)&t_method_return);
    Block PBlock2238 = new_Block_with(PArray2239, empty_Array, PThreadedCode2240, 1, PSend2242);
    // <<. 
    Send PSend2245 = new_Send((Optr)VAR_stream_1_0, SMB__shiftLeft_, 1, (Optr)self);
    Array PThreadedCode2244 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_stream_1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2245, (Optr)&t_block_return);
    Block PBlock2243 = new_Block_with(empty_Array, empty_Array, PThreadedCode2244, 1, PSend2245);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend2246 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_separatedBy_, 2, (Optr)PBlock2238, (Optr)PBlock2243);
    Array PThreadedCode2237 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock2238, (Optr)&t_push_closure, (Optr)PBlock2243, (Optr)&t_send2, (Optr)PSend2246, (Optr)&t_method_return);
    Block PBlock2235 = new_Block_with(PArray2236, empty_Array, PThreadedCode2237, 1, PSend2246);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend2247 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock2235);
    Array PThreadedCode2234 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock2235, (Optr)&t_send1, (Optr)PSend2247, (Optr)&t_method_return);
    Method PMethod2232 = new_Method_with(PArray2233, empty_Array, empty_Array, PThreadedCode2234, 1, PSend2247);
    
    MethodClosure MC_SMB_join_ = new_MethodClosure((Method)PMethod2232, String_Class);
    store_method(String_Class, SMB_join_, MC_SMB_join_);
}


static void init_SMB_asPEGChoice() {
    Symbol SMB_asPEGChoice = new_Symbol(L"asPEGChoice");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2250 = new_Send((Optr)PEGTerminalChoice_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode2249 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGTerminalChoice_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2250, (Optr)&t_method_return);
    Method PMethod2248 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2249, 1, PSend2250);
    
    MethodClosure MC_SMB_asPEGChoice = new_MethodClosure((Method)PMethod2248, String_Class);
    store_method(String_Class, SMB_asPEGChoice, MC_SMB_asPEGChoice);
}


static void init_SMB_replaceFrom_to_with_startingAt_() {
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    Variable VAR_start_0_0 = new_Variable_named(L"start", 0);
    Variable VAR_stop_0_1 = new_Variable_named(L"stop", 0);
    Variable VAR_replacement_0_2 = new_Variable_named(L"replacement", 0);
    Variable VAR_repStart_0_3 = new_Variable_named(L"repStart", 0);
    Array PArray2252 = new_Array_with(4, (Optr)VAR_start_0_0, (Optr)VAR_stop_0_1, (Optr)VAR_replacement_0_2, (Optr)VAR_repStart_0_3);
    Variable VAR_index_0_4 = new_Variable_named(L"index", 0);
    Variable VAR_repOff_0_5 = new_Variable_named(L"repOff", 0);
    Array PArray2253 = new_Array_with(2, (Optr)VAR_index_0_4, (Optr)VAR_repOff_0_5);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend2256 = new_Send((Optr)VAR_repStart_0_3, SMB__minus_, 1, (Optr)VAR_start_0_0);
    Assign PAssign2255 = new_Assign((Optr)VAR_repOff_0_5, (Optr)PSend2256);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend2258 = new_Send((Optr)VAR_start_0_0, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign2257 = new_Assign((Optr)VAR_index_0_4, (Optr)PSend2258);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend2262 = new_Send((Optr)VAR_index_0_4, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign2261 = new_Assign((Optr)VAR_index_0_4, (Optr)PSend2262);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend2263 = new_Send((Optr)PAssign2261, SMB__lt__equals_, 1, (Optr)VAR_stop_0_1);
    Array PThreadedCode2260 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign2261, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend2262, (Optr)&t_assign, (Optr)&t_push_variable, (Optr)VAR_stop_0_1, (Optr)&t_send1, (Optr)PSend2263, (Optr)&t_block_return);
    Block PBlock2259 = new_Block_with(empty_Array, empty_Array, PThreadedCode2260, 1, PSend2263);
    // +. 
    Send PSend2266 = new_Send((Optr)VAR_repOff_0_5, SMB__plus_, 1, (Optr)VAR_index_0_4);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend2267 = new_Send((Optr)VAR_replacement_0_2, SMB_at_, 1, (Optr)PSend2266);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend2268 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)VAR_index_0_4, (Optr)PSend2267);
    Array PThreadedCode2265 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_variable, (Optr)VAR_replacement_0_2, (Optr)&t_push_variable, (Optr)VAR_repOff_0_5, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_send1, (Optr)PSend2266, (Optr)&t_send1, (Optr)PSend2267, (Optr)&t_send2, (Optr)PSend2268, (Optr)&t_block_return);
    Block PBlock2264 = new_Block_with(empty_Array, empty_Array, PThreadedCode2265, 1, PSend2268);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend2269 = new_Send((Optr)PBlock2259, SMB_whileTrue_, 1, (Optr)PBlock2264);
    Array PThreadedCode2254 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign2255, (Optr)&t_push_variable, (Optr)VAR_repStart_0_3, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_send1, (Optr)PSend2256, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign2257, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend2258, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock2259, (Optr)&t_push_closure, (Optr)PBlock2264, (Optr)&t_send1, (Optr)PSend2269, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod2251 = new_Method_with(PArray2252, PArray2253, empty_Array, PThreadedCode2254, 4, PAssign2255, PAssign2257, PSend2269, self);
    
    MethodClosure MC_SMB_replaceFrom_to_with_startingAt_ = new_MethodClosure((Method)PMethod2251, String_Class);
    store_method(String_Class, SMB_replaceFrom_to_with_startingAt_, MC_SMB_replaceFrom_to_with_startingAt_);
}


static void init_SMB_isString() {
    Symbol SMB_isString = new_Symbol(L"isString");
    Array PThreadedCode2271 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod2270 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2271, 1, true_Const);
    
    MethodClosure MC_SMB_isString = new_MethodClosure((Method)PMethod2270, String_Class);
    store_method(String_Class, SMB_isString, MC_SMB_isString);
}


static void init_SMB_capitalized() {
    Symbol SMB_capitalized = new_Symbol(L"capitalized");
    Variable VAR_cap_0_0 = new_Variable_named(L"cap", 0);
    Array PArray2273 = new_Array_with(1, (Optr)VAR_cap_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2276 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend2278 = new_Send((Optr)self, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_copy = new_Symbol(L"copy");
    // copy. 
    Send PSend2282 = new_Send((Optr)self, SMB_copy, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend2283 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend2282);
    Array PThreadedCode2281 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2282, (Optr)&t_send1, (Optr)PSend2283, (Optr)&t_block_return);
    Block PBlock2280 = new_Block_with(empty_Array, empty_Array, PThreadedCode2281, 1, PSend2283);
    // ifTrue:. 
    Send PSend2279 = new_Send((Optr)PSend2278, SMB_ifTrue_, 1, (Optr)PBlock2280);
    // copy. 
    Send PSend2285 = new_Send((Optr)self, SMB_copy, 0);
    Assign PAssign2284 = new_Assign((Optr)VAR_cap_0_0, (Optr)PSend2285);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend2286 = new_Send((Optr)VAR_cap_0_0, SMB_at_, 1, (Optr)int_1_Const);
    Symbol SMB_asUppercase = new_Symbol(L"asUppercase");
    // asUppercase. 
    Send PSend2287 = new_Send((Optr)PSend2286, SMB_asUppercase, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend2288 = new_Send((Optr)VAR_cap_0_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend2287);
    Array PThreadedCode2277 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2278, (Optr)&t_send_ifTrue_, (Optr)PSend2279, (Optr)PBlock2280, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign2284, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2285, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend2286, (Optr)&t_send0, (Optr)PSend2287, (Optr)&t_send2, (Optr)PSend2288, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_method_return);
    Block PBlock2275 = new_Block_with(PArray2276, empty_Array, PThreadedCode2277, 4, PSend2279, PAssign2284, PSend2288, VAR_cap_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2289 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2275);
    Array PThreadedCode2274 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2275, (Optr)&t_send1, (Optr)PSend2289, (Optr)&t_method_return);
    Method PMethod2272 = new_Method_with(empty_Array, PArray2273, empty_Array, PThreadedCode2274, 1, PSend2289);
    
    MethodClosure MC_SMB_capitalized = new_MethodClosure((Method)PMethod2272, String_Class);
    store_method(String_Class, SMB_capitalized, MC_SMB_capitalized);
}


static void init_class_SMB_lf() {
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend2292 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend2293 = new_Send((Optr)self, SMB_with_, 1, (Optr)PSend2292);
    Array PThreadedCode2291 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend2292, (Optr)&t_send1, (Optr)PSend2293, (Optr)&t_method_return);
    Method PMethod2290 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2291, 1, PSend2293);
    
    MethodClosure MC_SMB_lf = new_MethodClosure((Method)PMethod2290, HEADER(String_Class));
    store_method(HEADER(String_Class), SMB_lf, MC_SMB_lf);
}


static void init_class_SMB_crlf() {
    Symbol SMB_crlf = new_Symbol(L"crlf");
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend2296 = new_Send((Optr)Character_classReference, SMB_cr, 0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend2297 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend2298 = new_Send((Optr)self, SMB_with_with_, 2, (Optr)PSend2296, (Optr)PSend2297);
    Array PThreadedCode2295 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend2296, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend2297, (Optr)&t_send2, (Optr)PSend2298, (Optr)&t_method_return);
    Method PMethod2294 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2295, 1, PSend2298);
    
    MethodClosure MC_SMB_crlf = new_MethodClosure((Method)PMethod2294, HEADER(String_Class));
    store_method(HEADER(String_Class), SMB_crlf, MC_SMB_crlf);
}


static void init_class_SMB_with_() {
    Symbol SMB_with_ = new_Symbol(L"with:");
    Variable VAR_aChar_0_0 = new_Variable_named(L"aChar", 0);
    Array PArray2300 = new_Array_with(1, (Optr)VAR_aChar_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray2303 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend2305 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)VAR_aChar_0_0);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend2306 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode2304 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_aChar_0_0, (Optr)&t_send2, (Optr)PSend2305, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend2306, (Optr)&t_method_return);
    Block PBlock2302 = new_Block_with(PArray2303, empty_Array, PThreadedCode2304, 2, PSend2305, PSend2306);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend2307 = new_Send((Optr)self, SMB_new_, 1, (Optr)int_1_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend2308 = new_Send((Optr)PBlock2302, SMB_value_, 1, (Optr)PSend2307);
    Array PThreadedCode2301 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock2302, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend2307, (Optr)&t_send1, (Optr)PSend2308, (Optr)&t_method_return);
    Method PMethod2299 = new_Method_with(PArray2300, empty_Array, empty_Array, PThreadedCode2301, 1, PSend2308);
    
    MethodClosure MC_SMB_with_ = new_MethodClosure((Method)PMethod2299, HEADER(String_Class));
    store_method(HEADER(String_Class), SMB_with_, MC_SMB_with_);
}


static void init_class_SMB_space() {
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend2311 = new_Send((Optr)Character_classReference, SMB_space, 0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend2312 = new_Send((Optr)self, SMB_with_, 1, (Optr)PSend2311);
    Array PThreadedCode2310 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend2311, (Optr)&t_send1, (Optr)PSend2312, (Optr)&t_method_return);
    Method PMethod2309 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2310, 1, PSend2312);
    
    MethodClosure MC_SMB_space = new_MethodClosure((Method)PMethod2309, HEADER(String_Class));
    store_method(HEADER(String_Class), SMB_space, MC_SMB_space);
}


static void init_class_SMB_newFromAll_() {
    Symbol SMB_newFromAll_ = new_Symbol(L"newFromAll:");
    Variable VAR_strings_0_0 = new_Variable_named(L"strings", 0);
    Array PArray2314 = new_Array_with(1, (Optr)VAR_strings_0_0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Variable VAR_result_0_2 = new_Variable_named(L"result", 0);
    Variable VAR_position_0_3 = new_Variable_named(L"position", 0);
    Array PArray2315 = new_Array_with(3, (Optr)VAR_size_0_1, (Optr)VAR_result_0_2, (Optr)VAR_position_0_3);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign2317 = new_Assign((Optr)VAR_size_0_1, (Optr)int_0_Const);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray2319 = new_Array_with(1, (Optr)VAR_s_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend2323 = new_Send((Optr)VAR_s_1_0, SMB_size, 0);
    // +. 
    Send PSend2322 = new_Send((Optr)VAR_size_0_1, SMB__plus_, 1, (Optr)PSend2323);
    Assign PAssign2321 = new_Assign((Optr)VAR_size_0_1, (Optr)PSend2322);
    Array PThreadedCode2320 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign2321, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send0, (Optr)PSend2323, (Optr)&t_send1, (Optr)PSend2322, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock2318 = new_Block_with(PArray2319, empty_Array, PThreadedCode2320, 1, PAssign2321);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend2324 = new_Send((Optr)VAR_strings_0_0, SMB_do_, 1, (Optr)PBlock2318);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend2326 = new_Send((Optr)self, SMB_new_, 1, (Optr)VAR_size_0_1);
    Assign PAssign2325 = new_Assign((Optr)VAR_result_0_2, (Optr)PSend2326);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign2327 = new_Assign((Optr)VAR_position_0_3, (Optr)int_1_Const);
    Array PArray2329 = new_Array_with(1, (Optr)VAR_s_1_0);
    Variable VAR_c_2_0 = new_Variable_named(L"c", 2);
    Array PArray2332 = new_Array_with(1, (Optr)VAR_c_2_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend2334 = new_Send((Optr)VAR_result_0_2, SMB_at_put_, 2, (Optr)VAR_position_0_3, (Optr)VAR_c_2_0);
    // +. 
    Send PSend2336 = new_Send((Optr)VAR_position_0_3, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign2335 = new_Assign((Optr)VAR_position_0_3, (Optr)PSend2336);
    Array PThreadedCode2333 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_push_variable, (Optr)VAR_position_0_3, (Optr)&t_push_variable, (Optr)VAR_c_2_0, (Optr)&t_send2, (Optr)PSend2334, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign2335, (Optr)&t_push_variable, (Optr)VAR_position_0_3, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend2336, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock2331 = new_Block_with(PArray2332, empty_Array, PThreadedCode2333, 2, PSend2334, PAssign2335);
    // do:. 
    Send PSend2337 = new_Send((Optr)VAR_s_1_0, SMB_do_, 1, (Optr)PBlock2331);
    Array PThreadedCode2330 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push_closure, (Optr)PBlock2331, (Optr)&t_send1, (Optr)PSend2337, (Optr)&t_method_return);
    Block PBlock2328 = new_Block_with(PArray2329, empty_Array, PThreadedCode2330, 1, PSend2337);
    // do:. 
    Send PSend2338 = new_Send((Optr)VAR_strings_0_0, SMB_do_, 1, (Optr)PBlock2328);
    Array PThreadedCode2316 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign2317, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_strings_0_0, (Optr)&t_push_closure, (Optr)PBlock2318, (Optr)&t_send1, (Optr)PSend2324, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign2325, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_send1, (Optr)PSend2326, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign2327, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_strings_0_0, (Optr)&t_push_closure, (Optr)PBlock2328, (Optr)&t_send1, (Optr)PSend2338, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_method_return);
    Method PMethod2313 = new_Method_with(PArray2314, PArray2315, empty_Array, PThreadedCode2316, 6, PAssign2317, PSend2324, PAssign2325, PAssign2327, PSend2338, VAR_result_0_2);
    
    MethodClosure MC_SMB_newFromAll_ = new_MethodClosure((Method)PMethod2313, HEADER(String_Class));
    store_method(HEADER(String_Class), SMB_newFromAll_, MC_SMB_newFromAll_);
}


static void init_class_SMB_streamContents_() {
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    Variable VAR_blockWithArg_0_0 = new_Variable_named(L"blockWithArg", 0);
    Array PArray2340 = new_Array_with(1, (Optr)VAR_blockWithArg_0_0);
    Variable VAR_stream_0_1 = new_Variable_named(L"stream", 0);
    Array PArray2341 = new_Array_with(1, (Optr)VAR_stream_0_1);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_100 = new_SmallInt(100);
    Constant int_100_Const = new_Constant((Optr)int_100);
    // new:. 
    Send PSend2345 = new_Send((Optr)self, SMB_new_, 1, (Optr)int_100_Const);
    // on:. 
    Send PSend2344 = new_Send((Optr)WriteStream_classReference, SMB_on_, 1, (Optr)PSend2345);
    Assign PAssign2343 = new_Assign((Optr)VAR_stream_0_1, (Optr)PSend2344);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend2346 = new_Send((Optr)VAR_blockWithArg_0_0, SMB_value_, 1, (Optr)VAR_stream_0_1);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend2347 = new_Send((Optr)VAR_stream_0_1, SMB_contents, 0);
    Array PThreadedCode2342 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign2343, (Optr)&t_push_class_reference, (Optr)WriteStream_classReference, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_100, (Optr)&t_send1, (Optr)PSend2345, (Optr)&t_send1, (Optr)PSend2344, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_blockWithArg_0_0, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send1, (Optr)PSend2346, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_stream_0_1, (Optr)&t_send0, (Optr)PSend2347, (Optr)&t_method_return);
    Method PMethod2339 = new_Method_with(PArray2340, PArray2341, empty_Array, PThreadedCode2342, 3, PAssign2343, PSend2346, PSend2347);
    
    MethodClosure MC_SMB_streamContents_ = new_MethodClosure((Method)PMethod2339, HEADER(String_Class));
    store_method(HEADER(String_Class), SMB_streamContents_, MC_SMB_streamContents_);
}


static void init_class_SMB_cr() {
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend2350 = new_Send((Optr)Character_classReference, SMB_cr, 0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend2351 = new_Send((Optr)self, SMB_with_, 1, (Optr)PSend2350);
    Array PThreadedCode2349 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend2350, (Optr)&t_send1, (Optr)PSend2351, (Optr)&t_method_return);
    Method PMethod2348 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2349, 1, PSend2351);
    
    MethodClosure MC_SMB_cr = new_MethodClosure((Method)PMethod2348, HEADER(String_Class));
    store_method(HEADER(String_Class), SMB_cr, MC_SMB_cr);
}


static void init_class_SMB_tab() {
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
    Send PSend2354 = new_Send((Optr)Character_classReference, SMB_tab, 0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend2355 = new_Send((Optr)self, SMB_with_, 1, (Optr)PSend2354);
    Array PThreadedCode2353 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend2354, (Optr)&t_send1, (Optr)PSend2355, (Optr)&t_method_return);
    Method PMethod2352 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2353, 1, PSend2355);
    
    MethodClosure MC_SMB_tab = new_MethodClosure((Method)PMethod2352, HEADER(String_Class));
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
    init_SMB_at_();
    init_SMB__equals_();
    init_SMB_asUppercase();
    init_SMB_asParser();
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
    init_SMB_capitalized();
    init_class_SMB_lf();
    init_class_SMB_crlf();
    init_class_SMB_with_();
    init_class_SMB_space();
    init_class_SMB_newFromAll_();
    init_class_SMB_streamContents_();
    init_class_SMB_cr();
    init_class_SMB_tab();
    
}