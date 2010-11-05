#include <lib/class/Kernel/String/String.h>


Optr layout_Kernel_String_String_Class_class;


static void init_SMB_capitalized() {
    Symbol SMB_capitalized = new_Symbol(L"capitalized");
    Variable VAR_cap_0_0 = new_Variable_named(L"cap", 0);
    Array PArray1919 = new_Array_with(1, (Optr)VAR_cap_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1922 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend1924 = new_Send((Optr)self, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_copy = new_Symbol(L"copy");
    // copy. 
    Send PSend1928 = new_Send((Optr)self, SMB_copy, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1929 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend1928);
    Array PThreadedCode1927 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1928, (Optr)&t_send1, (Optr)PSend1929, (Optr)&t_block_return);
    Block PBlock1926 = new_Block_with(empty_Array, empty_Array, PThreadedCode1927, 1, PSend1929);
    // ifTrue:. 
    Send PSend1925 = new_Send((Optr)PSend1924, SMB_ifTrue_, 1, (Optr)PBlock1926);
    // copy. 
    Send PSend1931 = new_Send((Optr)self, SMB_copy, 0);
    Assign PAssign1930 = new_Assign((Optr)VAR_cap_0_0, (Optr)PSend1931);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend1932 = new_Send((Optr)VAR_cap_0_0, SMB_at_, 1, (Optr)int_1_Const);
    Symbol SMB_asUppercase = new_Symbol(L"asUppercase");
    // asUppercase. 
    Send PSend1933 = new_Send((Optr)PSend1932, SMB_asUppercase, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend1934 = new_Send((Optr)VAR_cap_0_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend1933);
    Array PThreadedCode1923 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1924, (Optr)&t_send_ifTrue_, (Optr)PSend1925, (Optr)PBlock1926, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1930, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1931, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1932, (Optr)&t_send0, (Optr)PSend1933, (Optr)&t_send2, (Optr)PSend1934, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_method_return);
    Block PBlock1921 = new_Block_with(PArray1922, empty_Array, PThreadedCode1923, 4, PSend1925, PAssign1930, PSend1934, VAR_cap_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1935 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1921);
    Array PThreadedCode1920 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1921, (Optr)&t_send1, (Optr)PSend1935, (Optr)&t_method_return);
    Method PMethod1918 = new_Method_with(empty_Array, PArray1919, empty_Array, PThreadedCode1920, 1, PSend1935);
    
    MethodClosure MC_SMB_capitalized = new_MethodClosure((Method)PMethod1918, String_Class);
    store_method(String_Class, SMB_capitalized, MC_SMB_capitalized);
}


static void init_SMB_at_() {
    Symbol SMB_at_ = new_Symbol(L"at:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Array PArray1937 = new_Array_with(1, (Optr)VAR_index_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_Symbol = new_Symbol(L"String.Symbol");
    Annotation PAnnotation1939 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_at_, (Optr)SMB_String_minus_Symbol);
    Array PArray1938 = new_Array_with(1, (Optr)PAnnotation1939);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend1941 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode1940 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1941, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod1936 = new_NativeMethod_with(PArray1937, empty_Array, PArray1938, PThreadedCode1940, 2, PSend1941, self);
    
    MethodClosure MC_SMB_at_ = new_MethodClosure((Method)PNativeMethod1936, String_Class);
    store_method(String_Class, SMB_at_, MC_SMB_at_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray1943 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_Symbol = new_Symbol(L"String.Symbol");
    Annotation PAnnotation1945 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__equals_, (Optr)SMB_String_minus_Symbol);
    Array PArray1944 = new_Array_with(1, (Optr)PAnnotation1945);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend1947 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode1946 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1947, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod1942 = new_NativeMethod_with(PArray1943, empty_Array, PArray1944, PThreadedCode1946, 2, PSend1947, self);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PNativeMethod1942, String_Class);
    store_method(String_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_asUppercase() {
    Symbol SMB_asUppercase = new_Symbol(L"asUppercase");
    Variable VAR_cap_0_0 = new_Variable_named(L"cap", 0);
    Array PArray1949 = new_Array_with(1, (Optr)VAR_cap_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1952 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend1954 = new_Send((Optr)self, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_copy = new_Symbol(L"copy");
    // copy. 
    Send PSend1958 = new_Send((Optr)self, SMB_copy, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1959 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend1958);
    Array PThreadedCode1957 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1958, (Optr)&t_send1, (Optr)PSend1959, (Optr)&t_block_return);
    Block PBlock1956 = new_Block_with(empty_Array, empty_Array, PThreadedCode1957, 1, PSend1959);
    // ifTrue:. 
    Send PSend1955 = new_Send((Optr)PSend1954, SMB_ifTrue_, 1, (Optr)PBlock1956);
    // copy. 
    Send PSend1961 = new_Send((Optr)self, SMB_copy, 0);
    Assign PAssign1960 = new_Assign((Optr)VAR_cap_0_0, (Optr)PSend1961);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1962 = new_Send((Optr)VAR_cap_0_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray1964 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1966 = new_Send((Optr)VAR_cap_0_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    // asUppercase. 
    Send PSend1967 = new_Send((Optr)PSend1966, SMB_asUppercase, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend1968 = new_Send((Optr)VAR_cap_0_0, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend1967);
    Array PThreadedCode1965 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend1966, (Optr)&t_send0, (Optr)PSend1967, (Optr)&t_send2, (Optr)PSend1968, (Optr)&t_method_return);
    Block PBlock1963 = new_Block_with(PArray1964, empty_Array, PThreadedCode1965, 1, PSend1968);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend1969 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend1962, (Optr)PBlock1963);
    Array PThreadedCode1953 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1954, (Optr)&t_send_ifTrue_, (Optr)PSend1955, (Optr)PBlock1956, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1960, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1961, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_send0, (Optr)PSend1962, (Optr)&t_push_closure, (Optr)PBlock1963, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend1969, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_method_return);
    Block PBlock1951 = new_Block_with(PArray1952, empty_Array, PThreadedCode1953, 4, PSend1955, PAssign1960, PSend1969, VAR_cap_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1970 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1951);
    Array PThreadedCode1950 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1951, (Optr)&t_send1, (Optr)PSend1970, (Optr)&t_method_return);
    Method PMethod1948 = new_Method_with(empty_Array, PArray1949, empty_Array, PThreadedCode1950, 1, PSend1970);
    
    MethodClosure MC_SMB_asUppercase = new_MethodClosure((Method)PMethod1948, String_Class);
    store_method(String_Class, SMB_asUppercase, MC_SMB_asUppercase);
}


static void init_SMB_asSymbol() {
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_String = new_Symbol(L"String.String");
    Annotation PAnnotation1973 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_asSymbol, (Optr)SMB_String_minus_String);
    Array PArray1972 = new_Array_with(1, (Optr)PAnnotation1973);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend1975 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode1974 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1975, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod1971 = new_NativeMethod_with(empty_Array, empty_Array, PArray1972, PThreadedCode1974, 2, PSend1975, self);
    
    MethodClosure MC_SMB_asSymbol = new_MethodClosure((Method)PNativeMethod1971, String_Class);
    store_method(String_Class, SMB_asSymbol, MC_SMB_asSymbol);
}


static void init_SMB_basicAt_() {
    Symbol SMB_basicAt_ = new_Symbol(L"basicAt:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Array PArray1977 = new_Array_with(1, (Optr)VAR_index_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_Symbol = new_Symbol(L"String.Symbol");
    Annotation PAnnotation1979 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_basicAt_, (Optr)SMB_String_minus_Symbol);
    Array PArray1978 = new_Array_with(1, (Optr)PAnnotation1979);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend1981 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode1980 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1981, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod1976 = new_NativeMethod_with(PArray1977, empty_Array, PArray1978, PThreadedCode1980, 2, PSend1981, self);
    
    MethodClosure MC_SMB_basicAt_ = new_MethodClosure((Method)PNativeMethod1976, String_Class);
    store_method(String_Class, SMB_basicAt_, MC_SMB_basicAt_);
}


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    Array PThreadedCode1983 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod1982 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1983, 1, self);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PMethod1982, String_Class);
    store_method(String_Class, SMB_asString, MC_SMB_asString);
}


static void init_SMB_putOn_() {
    Symbol SMB_putOn_ = new_Symbol(L"putOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray1985 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend1987 = new_Send((Optr)VAR_aStream_0_0, SMB_writeAll_, 1, (Optr)self);
    Array PThreadedCode1986 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend1987, (Optr)&t_method_return);
    Method PMethod1984 = new_Method_with(PArray1985, empty_Array, empty_Array, PThreadedCode1986, 1, PSend1987);
    
    MethodClosure MC_SMB_putOn_ = new_MethodClosure((Method)PMethod1984, String_Class);
    store_method(String_Class, SMB_putOn_, MC_SMB_putOn_);
}


static void init_SMB_findTokens_() {
    Symbol SMB_findTokens_ = new_Symbol(L"findTokens:");
    Variable VAR_delimiters_0_0 = new_Variable_named(L"delimiters", 0);
    Array PArray1989 = new_Array_with(1, (Optr)VAR_delimiters_0_0);
    Variable VAR_tokens_0_1 = new_Variable_named(L"tokens", 0);
    Variable VAR_keyStart_0_2 = new_Variable_named(L"keyStart", 0);
    Variable VAR_keyStop_0_3 = new_Variable_named(L"keyStop", 0);
    Variable VAR_separators_0_4 = new_Variable_named(L"separators", 0);
    Array PArray1990 = new_Array_with(4, (Optr)VAR_tokens_0_1, (Optr)VAR_keyStart_0_2, (Optr)VAR_keyStop_0_3, (Optr)VAR_separators_0_4);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend1993 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign1992 = new_Assign((Optr)VAR_tokens_0_1, (Optr)PSend1993);
    Symbol SMB_isCharacter = new_Symbol(L"isCharacter");
    // isCharacter. 
    Send PSend1996 = new_Send((Optr)VAR_delimiters_0_0, SMB_isCharacter, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend1999 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_delimiters_0_0);
    Array PThreadedCode1998 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_delimiters_0_0, (Optr)&t_send1, (Optr)PSend1999, (Optr)&t_block_return);
    Block PBlock1997 = new_Block_with(empty_Array, empty_Array, PThreadedCode1998, 1, PSend1999);
    Array PThreadedCode2001 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_delimiters_0_0, (Optr)&t_block_return);
    Block PBlock2000 = new_Block_with(empty_Array, empty_Array, PThreadedCode2001, 1, VAR_delimiters_0_0);
    // ifTrue:ifFalse:. 
    Send PSend1995 = new_Send((Optr)PSend1996, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock1997, (Optr)PBlock2000);
    Assign PAssign1994 = new_Assign((Optr)VAR_separators_0_4, (Optr)PSend1995);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign2002 = new_Assign((Optr)VAR_keyStop_0_3, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend2005 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend2006 = new_Send((Optr)VAR_keyStop_0_3, SMB__lt__equals_, 1, (Optr)PSend2005);
    Array PThreadedCode2004 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_keyStop_0_3, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2005, (Optr)&t_send1, (Optr)PSend2006, (Optr)&t_block_return);
    Block PBlock2003 = new_Block_with(empty_Array, empty_Array, PThreadedCode2004, 1, PSend2006);
    Symbol SMB_skipDelimiters_startingAt_ = new_Symbol(L"skipDelimiters:startingAt:");
    // skipDelimiters:startingAt:. 
    Send PSend2010 = new_Send((Optr)self, SMB_skipDelimiters_startingAt_, 2, (Optr)VAR_separators_0_4, (Optr)VAR_keyStop_0_3);
    Assign PAssign2009 = new_Assign((Optr)VAR_keyStart_0_2, (Optr)PSend2010);
    Symbol SMB_findDelimiters_startingAt_ = new_Symbol(L"findDelimiters:startingAt:");
    // findDelimiters:startingAt:. 
    Send PSend2012 = new_Send((Optr)self, SMB_findDelimiters_startingAt_, 2, (Optr)VAR_separators_0_4, (Optr)VAR_keyStart_0_2);
    Assign PAssign2011 = new_Assign((Optr)VAR_keyStop_0_3, (Optr)PSend2012);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend2013 = new_Send((Optr)VAR_keyStart_0_2, SMB__lt_, 1, (Optr)VAR_keyStop_0_3);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend2017 = new_Send((Optr)VAR_keyStop_0_3, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend2018 = new_Send((Optr)self, SMB_copyFrom_to_, 2, (Optr)VAR_keyStart_0_2, (Optr)PSend2017);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend2019 = new_Send((Optr)VAR_tokens_0_1, SMB_add_, 1, (Optr)PSend2018);
    Array PThreadedCode2016 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_keyStart_0_2, (Optr)&t_push_variable, (Optr)VAR_keyStop_0_3, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend2017, (Optr)&t_send2, (Optr)PSend2018, (Optr)&t_send1, (Optr)PSend2019, (Optr)&t_block_return);
    Block PBlock2015 = new_Block_with(empty_Array, empty_Array, PThreadedCode2016, 1, PSend2019);
    // ifTrue:. 
    Send PSend2014 = new_Send((Optr)PSend2013, SMB_ifTrue_, 1, (Optr)PBlock2015);
    Array PThreadedCode2008 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign2009, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_separators_0_4, (Optr)&t_push_variable, (Optr)VAR_keyStop_0_3, (Optr)&t_send2, (Optr)PSend2010, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign2011, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_separators_0_4, (Optr)&t_push_variable, (Optr)VAR_keyStart_0_2, (Optr)&t_send2, (Optr)PSend2012, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_keyStart_0_2, (Optr)&t_push_variable, (Optr)VAR_keyStop_0_3, (Optr)&t_send1, (Optr)PSend2013, (Optr)&t_send_ifTrue_, (Optr)PSend2014, (Optr)PBlock2015, (Optr)&t_block_return);
    Block PBlock2007 = new_Block_with(empty_Array, empty_Array, PThreadedCode2008, 3, PAssign2009, PAssign2011, PSend2014);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend2020 = new_Send((Optr)PBlock2003, SMB_whileTrue_, 1, (Optr)PBlock2007);
    Array PThreadedCode1991 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign1992, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend1993, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1994, (Optr)&t_push_variable, (Optr)VAR_delimiters_0_0, (Optr)&t_send0, (Optr)PSend1996, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend1995, (Optr)PBlock1997, (Optr)PBlock2000, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign2002, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock2003, (Optr)&t_push_closure, (Optr)PBlock2007, (Optr)&t_send1, (Optr)PSend2020, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_method_return);
    Method PMethod1988 = new_Method_with(PArray1989, PArray1990, empty_Array, PThreadedCode1991, 5, PAssign1992, PAssign1994, PAssign2002, PSend2020, VAR_tokens_0_1);
    
    MethodClosure MC_SMB_findTokens_ = new_MethodClosure((Method)PMethod1988, String_Class);
    store_method(String_Class, SMB_findTokens_, MC_SMB_findTokens_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
    Array PArray2022 = new_Array_with(1, (Optr)VAR_stream_0_0);
    String string_2024 = new_String(L"'");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_2024_Const = new_Constant((Optr)string_2024);
    // <<. 
    Send PSend2025 = new_Send((Optr)VAR_stream_0_0, SMB__shiftLeft_, 1, (Optr)string_2024_Const);
    // <<. 
    Send PSend2026 = new_Send((Optr)PSend2025, SMB__shiftLeft_, 1, (Optr)self);
    String string_2027 = new_String(L"'");
    Constant string_2027_Const = new_Constant((Optr)string_2027);
    // <<. 
    Send PSend2028 = new_Send((Optr)PSend2026, SMB__shiftLeft_, 1, (Optr)string_2027_Const);
    Array PThreadedCode2023 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_push1, (Optr)string_2024, (Optr)&t_send1, (Optr)PSend2025, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2026, (Optr)&t_push1, (Optr)string_2027, (Optr)&t_send1, (Optr)PSend2028, (Optr)&t_method_return);
    Method PMethod2021 = new_Method_with(PArray2022, empty_Array, empty_Array, PThreadedCode2023, 1, PSend2028);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod2021, String_Class);
    store_method(String_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_findDelimiters_startingAt_() {
    Symbol SMB_findDelimiters_startingAt_ = new_Symbol(L"findDelimiters:startingAt:");
    Variable VAR_delimiters_0_0 = new_Variable_named(L"delimiters", 0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Array PArray2030 = new_Array_with(2, (Optr)VAR_delimiters_0_0, (Optr)VAR_start_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2033 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend2035 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray2037 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR_delim_3_0 = new_Variable_named(L"delim", 3);
    Array PArray2040 = new_Array_with(1, (Optr)VAR_delim_3_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend2042 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend2043 = new_Send((Optr)VAR_delim_3_0, SMB__equals_, 1, (Optr)PSend2042);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend2047 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_i_2_0);
    Array PThreadedCode2046 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend2047, (Optr)&t_block_return);
    Block PBlock2045 = new_Block_with(empty_Array, empty_Array, PThreadedCode2046, 1, PSend2047);
    // ifTrue:. 
    Send PSend2044 = new_Send((Optr)PSend2043, SMB_ifTrue_, 1, (Optr)PBlock2045);
    Array PThreadedCode2041 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_delim_3_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend2042, (Optr)&t_send1, (Optr)PSend2043, (Optr)&t_send_ifTrue_, (Optr)PSend2044, (Optr)PBlock2045, (Optr)&t_method_return);
    Block PBlock2039 = new_Block_with(PArray2040, empty_Array, PThreadedCode2041, 1, PSend2044);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend2048 = new_Send((Optr)VAR_delimiters_0_0, SMB_do_, 1, (Optr)PBlock2039);
    Array PThreadedCode2038 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_delimiters_0_0, (Optr)&t_push_closure, (Optr)PBlock2039, (Optr)&t_send1, (Optr)PSend2048, (Optr)&t_method_return);
    Block PBlock2036 = new_Block_with(PArray2037, empty_Array, PThreadedCode2038, 1, PSend2048);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend2049 = new_Send((Optr)VAR_start_0_1, SMB_to_do_, 2, (Optr)PSend2035, (Optr)PBlock2036);
    // size. 
    Send PSend2050 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend2051 = new_Send((Optr)PSend2050, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode2034 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2035, (Optr)&t_push_closure, (Optr)PBlock2036, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend2049, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2050, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend2051, (Optr)&t_method_return);
    Block PBlock2032 = new_Block_with(PArray2033, empty_Array, PThreadedCode2034, 2, PSend2049, PSend2051);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2052 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2032);
    Array PThreadedCode2031 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2032, (Optr)&t_send1, (Optr)PSend2052, (Optr)&t_method_return);
    Method PMethod2029 = new_Method_with(PArray2030, empty_Array, empty_Array, PThreadedCode2031, 1, PSend2052);
    
    MethodClosure MC_SMB_findDelimiters_startingAt_ = new_MethodClosure((Method)PMethod2029, String_Class);
    store_method(String_Class, SMB_findDelimiters_startingAt_, MC_SMB_findDelimiters_startingAt_);
}


static void init_SMB_size() {
    Symbol SMB_size = new_Symbol(L"size");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_Symbol = new_Symbol(L"String.Symbol");
    Annotation PAnnotation2055 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_size, (Optr)SMB_String_minus_Symbol);
    Array PArray2054 = new_Array_with(1, (Optr)PAnnotation2055);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend2057 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode2056 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2057, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod2053 = new_NativeMethod_with(empty_Array, empty_Array, PArray2054, PThreadedCode2056, 2, PSend2057, self);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PNativeMethod2053, String_Class);
    store_method(String_Class, SMB_size, MC_SMB_size);
}


static void init_SMB_indexOf_startingAt_() {
    Symbol SMB_indexOf_startingAt_ = new_Symbol(L"indexOf:startingAt:");
    Variable VAR_aCharacter_0_0 = new_Variable_named(L"aCharacter", 0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Array PArray2059 = new_Array_with(2, (Optr)VAR_aCharacter_0_0, (Optr)VAR_start_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2062 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isCharacter = new_Symbol(L"isCharacter");
    // isCharacter. 
    Send PSend2064 = new_Send((Optr)VAR_aCharacter_0_0, SMB_isCharacter, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // escape:. 
    Send PSend2068 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)int_0_Const);
    Array PThreadedCode2067 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend2068, (Optr)&t_block_return);
    Block PBlock2066 = new_Block_with(empty_Array, empty_Array, PThreadedCode2067, 1, PSend2068);
    // ifFalse:. 
    Send PSend2065 = new_Send((Optr)PSend2064, SMB_ifFalse_, 1, (Optr)PBlock2066);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend2069 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_pos_2_0 = new_Variable_named(L"pos", 2);
    Array PArray2071 = new_Array_with(1, (Optr)VAR_pos_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend2073 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_pos_2_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend2074 = new_Send((Optr)PSend2073, SMB_asInteger, 0);
    // asInteger. 
    Send PSend2075 = new_Send((Optr)VAR_aCharacter_0_0, SMB_asInteger, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend2076 = new_Send((Optr)PSend2074, SMB__equals_, 1, (Optr)PSend2075);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend2080 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_pos_2_0);
    Array PThreadedCode2079 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_pos_2_0, (Optr)&t_send1, (Optr)PSend2080, (Optr)&t_block_return);
    Block PBlock2078 = new_Block_with(empty_Array, empty_Array, PThreadedCode2079, 1, PSend2080);
    // ifTrue:. 
    Send PSend2077 = new_Send((Optr)PSend2076, SMB_ifTrue_, 1, (Optr)PBlock2078);
    Array PThreadedCode2072 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_pos_2_0, (Optr)&t_send1, (Optr)PSend2073, (Optr)&t_send0, (Optr)PSend2074, (Optr)&t_push_variable, (Optr)VAR_aCharacter_0_0, (Optr)&t_send0, (Optr)PSend2075, (Optr)&t_send1, (Optr)PSend2076, (Optr)&t_send_ifTrue_, (Optr)PSend2077, (Optr)PBlock2078, (Optr)&t_method_return);
    Block PBlock2070 = new_Block_with(PArray2071, empty_Array, PThreadedCode2072, 1, PSend2077);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend2081 = new_Send((Optr)VAR_start_0_1, SMB_to_do_, 2, (Optr)PSend2069, (Optr)PBlock2070);
    Array PThreadedCode2063 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_aCharacter_0_0, (Optr)&t_send0, (Optr)PSend2064, (Optr)&t_send_ifFalse_, (Optr)PSend2065, (Optr)PBlock2066, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2069, (Optr)&t_push_closure, (Optr)PBlock2070, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend2081, (Optr)&t_zap, (Optr)&t_method_return_0);
    Block PBlock2061 = new_Block_with(PArray2062, empty_Array, PThreadedCode2063, 3, PSend2065, PSend2081, int_0_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2082 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2061);
    Array PThreadedCode2060 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2061, (Optr)&t_send1, (Optr)PSend2082, (Optr)&t_method_return);
    Method PMethod2058 = new_Method_with(PArray2059, empty_Array, empty_Array, PThreadedCode2060, 1, PSend2082);
    
    MethodClosure MC_SMB_indexOf_startingAt_ = new_MethodClosure((Method)PMethod2058, String_Class);
    store_method(String_Class, SMB_indexOf_startingAt_, MC_SMB_indexOf_startingAt_);
}


static void init_SMB_withBlanksTrimmed() {
    Symbol SMB_withBlanksTrimmed = new_Symbol(L"withBlanksTrimmed");
    Variable VAR_first_0_0 = new_Variable_named(L"first", 0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Array PArray2084 = new_Array_with(2, (Optr)VAR_first_0_0, (Optr)VAR_result_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2087 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_findFirst_ = new_Symbol(L"findFirst:");
    Variable VAR_c_2_0 = new_Variable_named(L"c", 2);
    Array PArray2092 = new_Array_with(1, (Optr)VAR_c_2_0);
    Symbol SMB_isSeparator = new_Symbol(L"isSeparator");
    // isSeparator. 
    Send PSend2094 = new_Send((Optr)VAR_c_2_0, SMB_isSeparator, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend2095 = new_Send((Optr)PSend2094, SMB_not, 0);
    Array PThreadedCode2093 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_c_2_0, (Optr)&t_send0, (Optr)PSend2094, (Optr)&t_send0, (Optr)PSend2095, (Optr)&t_method_return);
    Block PBlock2091 = new_Block_with(PArray2092, empty_Array, PThreadedCode2093, 1, PSend2095);
    // findFirst:. 
    Send PSend2090 = new_Send((Optr)self, SMB_findFirst_, 1, (Optr)PBlock2091);
    Assign PAssign2089 = new_Assign((Optr)VAR_first_0_0, (Optr)PSend2090);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend2096 = new_Send((Optr)VAR_first_0_0, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_2100 = new_String(L"");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    Constant string_2100_Const = new_Constant((Optr)string_2100);
    // escape:. 
    Send PSend2101 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_2100_Const);
    Array PThreadedCode2099 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_2100, (Optr)&t_send1, (Optr)PSend2101, (Optr)&t_block_return);
    Block PBlock2098 = new_Block_with(empty_Array, empty_Array, PThreadedCode2099, 1, PSend2101);
    // ifTrue:. 
    Send PSend2097 = new_Send((Optr)PSend2096, SMB_ifTrue_, 1, (Optr)PBlock2098);
    Array PArray2103 = new_Array_with(1, (Optr)VAR_c_2_0);
    // isSeparator. 
    Send PSend2105 = new_Send((Optr)VAR_c_2_0, SMB_isSeparator, 0);
    // not. 
    Send PSend2106 = new_Send((Optr)PSend2105, SMB_not, 0);
    Array PThreadedCode2104 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_c_2_0, (Optr)&t_send0, (Optr)PSend2105, (Optr)&t_send0, (Optr)PSend2106, (Optr)&t_method_return);
    Block PBlock2102 = new_Block_with(PArray2103, empty_Array, PThreadedCode2104, 1, PSend2106);
    Symbol SMB_findLast_ = new_Symbol(L"findLast:");
    // findLast:. 
    Send PSend2107 = new_Send((Optr)self, SMB_findLast_, 1, (Optr)PBlock2102);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend2108 = new_Send((Optr)self, SMB_copyFrom_to_, 2, (Optr)VAR_first_0_0, (Optr)PSend2107);
    Array PThreadedCode2088 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign2089, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock2091, (Optr)&t_send1, (Optr)PSend2090, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_first_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend2096, (Optr)&t_send_ifTrue_, (Optr)PSend2097, (Optr)PBlock2098, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_first_0_0, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock2102, (Optr)&t_send1, (Optr)PSend2107, (Optr)&t_send2, (Optr)PSend2108, (Optr)&t_method_return);
    Block PBlock2086 = new_Block_with(PArray2087, empty_Array, PThreadedCode2088, 3, PAssign2089, PSend2097, PSend2108);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2109 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2086);
    Array PThreadedCode2085 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2086, (Optr)&t_send1, (Optr)PSend2109, (Optr)&t_method_return);
    Method PMethod2083 = new_Method_with(empty_Array, PArray2084, empty_Array, PThreadedCode2085, 1, PSend2109);
    
    MethodClosure MC_SMB_withBlanksTrimmed = new_MethodClosure((Method)PMethod2083, String_Class);
    store_method(String_Class, SMB_withBlanksTrimmed, MC_SMB_withBlanksTrimmed);
}


static void init_SMB_contains_at_() {
    Symbol SMB_contains_at_ = new_Symbol(L"contains:at:");
    Variable VAR_substring_0_0 = new_Variable_named(L"substring", 0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Array PArray2111 = new_Array_with(2, (Optr)VAR_substring_0_0, (Optr)VAR_position_0_1);
    Variable VAR_size_0_2 = new_Variable_named(L"size", 0);
    Array PArray2112 = new_Array_with(1, (Optr)VAR_size_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2115 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend2118 = new_Send((Optr)VAR_substring_0_0, SMB_size, 0);
    Assign PAssign2117 = new_Assign((Optr)VAR_size_0_2, (Optr)PSend2118);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend2119 = new_Send((Optr)VAR_position_0_1, SMB__plus_, 1, (Optr)VAR_size_0_2);
    // size. 
    Send PSend2120 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend2121 = new_Send((Optr)PSend2119, SMB__gt_, 1, (Optr)PSend2120);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend2125 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode2124 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend2125, (Optr)&t_block_return);
    Block PBlock2123 = new_Block_with(empty_Array, empty_Array, PThreadedCode2124, 1, PSend2125);
    // ifTrue:. 
    Send PSend2122 = new_Send((Optr)PSend2121, SMB_ifTrue_, 1, (Optr)PBlock2123);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray2127 = new_Array_with(1, (Optr)VAR_i_2_0);
    // +. 
    Send PSend2129 = new_Send((Optr)VAR_position_0_1, SMB__plus_, 1, (Optr)VAR_i_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend2130 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend2129);
    // at:. 
    Send PSend2131 = new_Send((Optr)VAR_substring_0_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend2132 = new_Send((Optr)PSend2130, SMB__equals_, 1, (Optr)PSend2131);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend2136 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode2135 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend2136, (Optr)&t_block_return);
    Block PBlock2134 = new_Block_with(empty_Array, empty_Array, PThreadedCode2135, 1, PSend2136);
    // ifFalse:. 
    Send PSend2133 = new_Send((Optr)PSend2132, SMB_ifFalse_, 1, (Optr)PBlock2134);
    Array PThreadedCode2128 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend2129, (Optr)&t_send1, (Optr)PSend2130, (Optr)&t_push_variable, (Optr)VAR_substring_0_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend2131, (Optr)&t_send1, (Optr)PSend2132, (Optr)&t_send_ifFalse_, (Optr)PSend2133, (Optr)PBlock2134, (Optr)&t_method_return);
    Block PBlock2126 = new_Block_with(PArray2127, empty_Array, PThreadedCode2128, 1, PSend2133);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend2137 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_size_0_2, (Optr)PBlock2126);
    Array PThreadedCode2116 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign2117, (Optr)&t_push_variable, (Optr)VAR_substring_0_0, (Optr)&t_send0, (Optr)PSend2118, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_push_variable, (Optr)VAR_size_0_2, (Optr)&t_send1, (Optr)PSend2119, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2120, (Optr)&t_send1, (Optr)PSend2121, (Optr)&t_send_ifTrue_, (Optr)PSend2122, (Optr)PBlock2123, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_2, (Optr)&t_push_closure, (Optr)PBlock2126, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend2137, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock2114 = new_Block_with(PArray2115, empty_Array, PThreadedCode2116, 4, PAssign2117, PSend2122, PSend2137, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2138 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2114);
    Array PThreadedCode2113 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2114, (Optr)&t_send1, (Optr)PSend2138, (Optr)&t_method_return);
    Method PMethod2110 = new_Method_with(PArray2111, PArray2112, empty_Array, PThreadedCode2113, 1, PSend2138);
    
    MethodClosure MC_SMB_contains_at_ = new_MethodClosure((Method)PMethod2110, String_Class);
    store_method(String_Class, SMB_contains_at_, MC_SMB_contains_at_);
}


static void init_SMB_asLowercase() {
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    Variable VAR_cap_0_0 = new_Variable_named(L"cap", 0);
    Array PArray2140 = new_Array_with(1, (Optr)VAR_cap_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2143 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend2145 = new_Send((Optr)self, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_copy = new_Symbol(L"copy");
    // copy. 
    Send PSend2149 = new_Send((Optr)self, SMB_copy, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend2150 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend2149);
    Array PThreadedCode2148 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2149, (Optr)&t_send1, (Optr)PSend2150, (Optr)&t_block_return);
    Block PBlock2147 = new_Block_with(empty_Array, empty_Array, PThreadedCode2148, 1, PSend2150);
    // ifTrue:. 
    Send PSend2146 = new_Send((Optr)PSend2145, SMB_ifTrue_, 1, (Optr)PBlock2147);
    // copy. 
    Send PSend2152 = new_Send((Optr)self, SMB_copy, 0);
    Assign PAssign2151 = new_Assign((Optr)VAR_cap_0_0, (Optr)PSend2152);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend2153 = new_Send((Optr)VAR_cap_0_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray2155 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend2157 = new_Send((Optr)VAR_cap_0_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    // asLowercase. 
    Send PSend2158 = new_Send((Optr)PSend2157, SMB_asLowercase, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend2159 = new_Send((Optr)VAR_cap_0_0, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend2158);
    Array PThreadedCode2156 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend2157, (Optr)&t_send0, (Optr)PSend2158, (Optr)&t_send2, (Optr)PSend2159, (Optr)&t_method_return);
    Block PBlock2154 = new_Block_with(PArray2155, empty_Array, PThreadedCode2156, 1, PSend2159);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend2160 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend2153, (Optr)PBlock2154);
    Array PThreadedCode2144 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2145, (Optr)&t_send_ifTrue_, (Optr)PSend2146, (Optr)PBlock2147, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign2151, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2152, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_send0, (Optr)PSend2153, (Optr)&t_push_closure, (Optr)PBlock2154, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend2160, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_method_return);
    Block PBlock2142 = new_Block_with(PArray2143, empty_Array, PThreadedCode2144, 4, PSend2146, PAssign2151, PSend2160, VAR_cap_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2161 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2142);
    Array PThreadedCode2141 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2142, (Optr)&t_send1, (Optr)PSend2161, (Optr)&t_method_return);
    Method PMethod2139 = new_Method_with(empty_Array, PArray2140, empty_Array, PThreadedCode2141, 1, PSend2161);
    
    MethodClosure MC_SMB_asLowercase = new_MethodClosure((Method)PMethod2139, String_Class);
    store_method(String_Class, SMB_asLowercase, MC_SMB_asLowercase);
}


static void init_SMB_asNumber() {
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_String = new_Symbol(L"String.String");
    Annotation PAnnotation2164 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_asNumber, (Optr)SMB_String_minus_String);
    Array PArray2163 = new_Array_with(1, (Optr)PAnnotation2164);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend2166 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode2165 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2166, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod2162 = new_NativeMethod_with(empty_Array, empty_Array, PArray2163, PThreadedCode2165, 2, PSend2166, self);
    
    MethodClosure MC_SMB_asNumber = new_MethodClosure((Method)PNativeMethod2162, String_Class);
    store_method(String_Class, SMB_asNumber, MC_SMB_asNumber);
}


static void init_SMB_asArray() {
    Symbol SMB_asArray = new_Symbol(L"asArray");
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    // newFrom:. 
    Send PSend2169 = new_Send((Optr)Array_classReference, SMB_newFrom_, 1, (Optr)self);
    Array PThreadedCode2168 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2169, (Optr)&t_method_return);
    Method PMethod2167 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2168, 1, PSend2169);
    
    MethodClosure MC_SMB_asArray = new_MethodClosure((Method)PMethod2167, String_Class);
    store_method(String_Class, SMB_asArray, MC_SMB_asArray);
}


static void init_SMB_hash() {
    Symbol SMB_hash = new_Symbol(L"hash");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_Symbol = new_Symbol(L"String.Symbol");
    Annotation PAnnotation2172 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_hash, (Optr)SMB_String_minus_Symbol);
    Array PArray2171 = new_Array_with(1, (Optr)PAnnotation2172);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend2174 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode2173 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2174, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod2170 = new_NativeMethod_with(empty_Array, empty_Array, PArray2171, PThreadedCode2173, 2, PSend2174, self);
    
    MethodClosure MC_SMB_hash = new_MethodClosure((Method)PNativeMethod2170, String_Class);
    store_method(String_Class, SMB_hash, MC_SMB_hash);
}


static void init_SMB_asPEGRange() {
    Symbol SMB_asPEGRange = new_Symbol(L"asPEGRange");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend2177 = new_Send((Optr)self, SMB_size, 0);
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant int_3_Const = new_Constant((Optr)int_3);
    // =. 
    Send PSend2178 = new_Send((Optr)PSend2177, SMB__equals_, 1, (Optr)int_3_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend2181 = new_Send((Optr)self, SMB_at_, 1, (Optr)int_2_Const);
    Character char_2182 = new_Character(L'-');
    Constant char_2182_Const = new_Constant((Optr)char_2182);
    // =. 
    Send PSend2183 = new_Send((Optr)PSend2181, SMB__equals_, 1, (Optr)char_2182_Const);
    Array PThreadedCode2180 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend2181, (Optr)&t_push1, (Optr)char_2182, (Optr)&t_send1, (Optr)PSend2183, (Optr)&t_block_return);
    Block PBlock2179 = new_Block_with(empty_Array, empty_Array, PThreadedCode2180, 1, PSend2183);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend2184 = new_Send((Optr)PSend2178, SMB_and_, 1, (Optr)PBlock2179);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_2188 = new_String(L"Cannot convert ");
    Constant string_2188_Const = new_Constant((Optr)string_2188);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend2189 = new_Send((Optr)string_2188_Const, SMB__append_, 1, (Optr)self);
    String string_2190 = new_String(L" to PEG range. Expected format: beginchar-endchar");
    Constant string_2190_Const = new_Constant((Optr)string_2190);
    // ,. 
    Send PSend2191 = new_Send((Optr)PSend2189, SMB__append_, 1, (Optr)string_2190_Const);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend2192 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend2191);
    Array PThreadedCode2187 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_2188, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2189, (Optr)&t_push1, (Optr)string_2190, (Optr)&t_send1, (Optr)PSend2191, (Optr)&t_send1, (Optr)PSend2192, (Optr)&t_block_return);
    Block PBlock2186 = new_Block_with(empty_Array, empty_Array, PThreadedCode2187, 1, PSend2192);
    // ifFalse:. 
    Send PSend2185 = new_Send((Optr)PSend2184, SMB_ifFalse_, 1, (Optr)PBlock2186);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend2193 = new_Send((Optr)self, SMB_at_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend2194 = new_Send((Optr)self, SMB_at_, 1, (Optr)int_3_Const);
    Symbol SMB_between_and_ = new_Symbol(L"between:and:");
    // between:and:. 
    Send PSend2195 = new_Send((Optr)PEGRange_classReference, SMB_between_and_, 2, (Optr)PSend2193, (Optr)PSend2194);
    Array PThreadedCode2176 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2177, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend2178, (Optr)&t_push_closure, (Optr)PBlock2179, (Optr)&t_send1, (Optr)PSend2184, (Optr)&t_send_ifFalse_, (Optr)PSend2185, (Optr)PBlock2186, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PEGRange_classReference, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend2193, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend2194, (Optr)&t_send2, (Optr)PSend2195, (Optr)&t_method_return);
    Method PMethod2175 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2176, 2, PSend2185, PSend2195);
    
    MethodClosure MC_SMB_asPEGRange = new_MethodClosure((Method)PMethod2175, String_Class);
    store_method(String_Class, SMB_asPEGRange, MC_SMB_asPEGRange);
}


static void init_SMB_copy() {
    Symbol SMB_copy = new_Symbol(L"copy");
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend2198 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    // newFrom:. 
    Send PSend2199 = new_Send((Optr)PSend2198, SMB_newFrom_, 1, (Optr)self);
    Array PThreadedCode2197 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2198, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2199, (Optr)&t_method_return);
    Method PMethod2196 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2197, 1, PSend2199);
    
    MethodClosure MC_SMB_copy = new_MethodClosure((Method)PMethod2196, String_Class);
    store_method(String_Class, SMB_copy, MC_SMB_copy);
}


static void init_SMB__append_() {
    Symbol SMB__append_ = new_Symbol(L",");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray2201 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_String = new_Symbol(L"String.String");
    Annotation PAnnotation2203 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__append_, (Optr)SMB_String_minus_String);
    Array PArray2202 = new_Array_with(1, (Optr)PAnnotation2203);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend2205 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode2204 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2205, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod2200 = new_NativeMethod_with(PArray2201, empty_Array, PArray2202, PThreadedCode2204, 2, PSend2205, self);
    
    MethodClosure MC_SMB__append_ = new_MethodClosure((Method)PNativeMethod2200, String_Class);
    store_method(String_Class, SMB__append_, MC_SMB__append_);
}


static void init_SMB_at_put_() {
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Variable VAR_character_0_1 = new_Variable_named(L"character", 0);
    Array PArray2207 = new_Array_with(2, (Optr)VAR_index_0_0, (Optr)VAR_character_0_1);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_String = new_Symbol(L"String.String");
    Annotation PAnnotation2209 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_at_put_, (Optr)SMB_String_minus_String);
    Array PArray2208 = new_Array_with(1, (Optr)PAnnotation2209);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend2211 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode2210 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2211, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod2206 = new_NativeMethod_with(PArray2207, empty_Array, PArray2208, PThreadedCode2210, 2, PSend2211, self);
    
    MethodClosure MC_SMB_at_put_ = new_MethodClosure((Method)PNativeMethod2206, String_Class);
    store_method(String_Class, SMB_at_put_, MC_SMB_at_put_);
}


static void init_SMB_skipDelimiters_startingAt_() {
    Symbol SMB_skipDelimiters_startingAt_ = new_Symbol(L"skipDelimiters:startingAt:");
    Variable VAR_delimiters_0_0 = new_Variable_named(L"delimiters", 0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Array PArray2213 = new_Array_with(2, (Optr)VAR_delimiters_0_0, (Optr)VAR_start_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2216 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend2218 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray2220 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR_delim_3_0 = new_Variable_named(L"delim", 3);
    Array PArray2223 = new_Array_with(1, (Optr)VAR_delim_3_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend2225 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend2226 = new_Send((Optr)VAR_delim_3_0, SMB__equals_, 1, (Optr)PSend2225);
    Array PThreadedCode2224 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_delim_3_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend2225, (Optr)&t_send1, (Optr)PSend2226, (Optr)&t_method_return);
    Block PBlock2222 = new_Block_with(PArray2223, empty_Array, PThreadedCode2224, 1, PSend2226);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend2229 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_i_2_0);
    Array PThreadedCode2228 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend2229, (Optr)&t_block_return);
    Block PBlock2227 = new_Block_with(empty_Array, empty_Array, PThreadedCode2228, 1, PSend2229);
    Symbol SMB_detect_ifNone_ = new_Symbol(L"detect:ifNone:");
    // detect:ifNone:. 
    Send PSend2230 = new_Send((Optr)VAR_delimiters_0_0, SMB_detect_ifNone_, 2, (Optr)PBlock2222, (Optr)PBlock2227);
    Array PThreadedCode2221 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_delimiters_0_0, (Optr)&t_push_closure, (Optr)PBlock2222, (Optr)&t_push_closure, (Optr)PBlock2227, (Optr)&t_send2, (Optr)PSend2230, (Optr)&t_method_return);
    Block PBlock2219 = new_Block_with(PArray2220, empty_Array, PThreadedCode2221, 1, PSend2230);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend2231 = new_Send((Optr)VAR_start_0_1, SMB_to_do_, 2, (Optr)PSend2218, (Optr)PBlock2219);
    // size. 
    Send PSend2232 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend2233 = new_Send((Optr)PSend2232, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode2217 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2218, (Optr)&t_push_closure, (Optr)PBlock2219, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend2231, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2232, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend2233, (Optr)&t_method_return);
    Block PBlock2215 = new_Block_with(PArray2216, empty_Array, PThreadedCode2217, 2, PSend2231, PSend2233);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2234 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2215);
    Array PThreadedCode2214 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2215, (Optr)&t_send1, (Optr)PSend2234, (Optr)&t_method_return);
    Method PMethod2212 = new_Method_with(PArray2213, empty_Array, empty_Array, PThreadedCode2214, 1, PSend2234);
    
    MethodClosure MC_SMB_skipDelimiters_startingAt_ = new_MethodClosure((Method)PMethod2212, String_Class);
    store_method(String_Class, SMB_skipDelimiters_startingAt_, MC_SMB_skipDelimiters_startingAt_);
}


static void init_SMB_join_() {
    Symbol SMB_join_ = new_Symbol(L"join:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray2236 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_stream_1_0 = new_Variable_named(L"stream", 1);
    Array PArray2239 = new_Array_with(1, (Optr)VAR_stream_1_0);
    Variable VAR_each_2_0 = new_Variable_named(L"each", 2);
    Array PArray2242 = new_Array_with(1, (Optr)VAR_each_2_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend2244 = new_Send((Optr)VAR_each_2_0, SMB_asString, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend2245 = new_Send((Optr)VAR_stream_1_0, SMB__shiftLeft_, 1, (Optr)PSend2244);
    Array PThreadedCode2243 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_stream_1_0, (Optr)&t_push_variable, (Optr)VAR_each_2_0, (Optr)&t_send0, (Optr)PSend2244, (Optr)&t_send1, (Optr)PSend2245, (Optr)&t_method_return);
    Block PBlock2241 = new_Block_with(PArray2242, empty_Array, PThreadedCode2243, 1, PSend2245);
    // <<. 
    Send PSend2248 = new_Send((Optr)VAR_stream_1_0, SMB__shiftLeft_, 1, (Optr)self);
    Array PThreadedCode2247 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_stream_1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2248, (Optr)&t_block_return);
    Block PBlock2246 = new_Block_with(empty_Array, empty_Array, PThreadedCode2247, 1, PSend2248);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend2249 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_separatedBy_, 2, (Optr)PBlock2241, (Optr)PBlock2246);
    Array PThreadedCode2240 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock2241, (Optr)&t_push_closure, (Optr)PBlock2246, (Optr)&t_send2, (Optr)PSend2249, (Optr)&t_method_return);
    Block PBlock2238 = new_Block_with(PArray2239, empty_Array, PThreadedCode2240, 1, PSend2249);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend2250 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock2238);
    Array PThreadedCode2237 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock2238, (Optr)&t_send1, (Optr)PSend2250, (Optr)&t_method_return);
    Method PMethod2235 = new_Method_with(PArray2236, empty_Array, empty_Array, PThreadedCode2237, 1, PSend2250);
    
    MethodClosure MC_SMB_join_ = new_MethodClosure((Method)PMethod2235, String_Class);
    store_method(String_Class, SMB_join_, MC_SMB_join_);
}


static void init_SMB_asPEGChoice() {
    Symbol SMB_asPEGChoice = new_Symbol(L"asPEGChoice");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2253 = new_Send((Optr)PEGTerminalChoice_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode2252 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGTerminalChoice_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2253, (Optr)&t_method_return);
    Method PMethod2251 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2252, 1, PSend2253);
    
    MethodClosure MC_SMB_asPEGChoice = new_MethodClosure((Method)PMethod2251, String_Class);
    store_method(String_Class, SMB_asPEGChoice, MC_SMB_asPEGChoice);
}


static void init_SMB_replaceFrom_to_with_startingAt_() {
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    Variable VAR_start_0_0 = new_Variable_named(L"start", 0);
    Variable VAR_stop_0_1 = new_Variable_named(L"stop", 0);
    Variable VAR_replacement_0_2 = new_Variable_named(L"replacement", 0);
    Variable VAR_repStart_0_3 = new_Variable_named(L"repStart", 0);
    Array PArray2255 = new_Array_with(4, (Optr)VAR_start_0_0, (Optr)VAR_stop_0_1, (Optr)VAR_replacement_0_2, (Optr)VAR_repStart_0_3);
    Variable VAR_index_0_4 = new_Variable_named(L"index", 0);
    Variable VAR_repOff_0_5 = new_Variable_named(L"repOff", 0);
    Array PArray2256 = new_Array_with(2, (Optr)VAR_index_0_4, (Optr)VAR_repOff_0_5);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend2259 = new_Send((Optr)VAR_repStart_0_3, SMB__minus_, 1, (Optr)VAR_start_0_0);
    Assign PAssign2258 = new_Assign((Optr)VAR_repOff_0_5, (Optr)PSend2259);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend2261 = new_Send((Optr)VAR_start_0_0, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign2260 = new_Assign((Optr)VAR_index_0_4, (Optr)PSend2261);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend2265 = new_Send((Optr)VAR_index_0_4, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign2264 = new_Assign((Optr)VAR_index_0_4, (Optr)PSend2265);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend2266 = new_Send((Optr)PAssign2264, SMB__lt__equals_, 1, (Optr)VAR_stop_0_1);
    Array PThreadedCode2263 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign2264, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend2265, (Optr)&t_assign, (Optr)&t_push_variable, (Optr)VAR_stop_0_1, (Optr)&t_send1, (Optr)PSend2266, (Optr)&t_block_return);
    Block PBlock2262 = new_Block_with(empty_Array, empty_Array, PThreadedCode2263, 1, PSend2266);
    // +. 
    Send PSend2269 = new_Send((Optr)VAR_repOff_0_5, SMB__plus_, 1, (Optr)VAR_index_0_4);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend2270 = new_Send((Optr)VAR_replacement_0_2, SMB_at_, 1, (Optr)PSend2269);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend2271 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)VAR_index_0_4, (Optr)PSend2270);
    Array PThreadedCode2268 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_variable, (Optr)VAR_replacement_0_2, (Optr)&t_push_variable, (Optr)VAR_repOff_0_5, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_send1, (Optr)PSend2269, (Optr)&t_send1, (Optr)PSend2270, (Optr)&t_send2, (Optr)PSend2271, (Optr)&t_block_return);
    Block PBlock2267 = new_Block_with(empty_Array, empty_Array, PThreadedCode2268, 1, PSend2271);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend2272 = new_Send((Optr)PBlock2262, SMB_whileTrue_, 1, (Optr)PBlock2267);
    Array PThreadedCode2257 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign2258, (Optr)&t_push_variable, (Optr)VAR_repStart_0_3, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_send1, (Optr)PSend2259, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign2260, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend2261, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock2262, (Optr)&t_push_closure, (Optr)PBlock2267, (Optr)&t_send1, (Optr)PSend2272, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod2254 = new_Method_with(PArray2255, PArray2256, empty_Array, PThreadedCode2257, 4, PAssign2258, PAssign2260, PSend2272, self);
    
    MethodClosure MC_SMB_replaceFrom_to_with_startingAt_ = new_MethodClosure((Method)PMethod2254, String_Class);
    store_method(String_Class, SMB_replaceFrom_to_with_startingAt_, MC_SMB_replaceFrom_to_with_startingAt_);
}


static void init_SMB_isString() {
    Symbol SMB_isString = new_Symbol(L"isString");
    Array PThreadedCode2274 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod2273 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2274, 1, true_Const);
    
    MethodClosure MC_SMB_isString = new_MethodClosure((Method)PMethod2273, String_Class);
    store_method(String_Class, SMB_isString, MC_SMB_isString);
}


static void init_SMB_asParser() {
    Symbol SMB_asParser = new_Symbol(L"asParser");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2278 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend2280 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend2281 = new_Send((Optr)PSend2280, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend2285 = new_Send((Optr)self, SMB_at_, 1, (Optr)int_1_Const);
    // asParser. 
    Send PSend2286 = new_Send((Optr)PSend2285, SMB_asParser, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend2287 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend2286);
    Array PThreadedCode2284 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend2285, (Optr)&t_send0, (Optr)PSend2286, (Optr)&t_send1, (Optr)PSend2287, (Optr)&t_block_return);
    Block PBlock2283 = new_Block_with(empty_Array, empty_Array, PThreadedCode2284, 1, PSend2287);
    // ifTrue:. 
    Send PSend2282 = new_Send((Optr)PSend2281, SMB_ifTrue_, 1, (Optr)PBlock2283);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2288 = new_Send((Optr)PEGTerminal_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode2279 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2280, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend2281, (Optr)&t_send_ifTrue_, (Optr)PSend2282, (Optr)PBlock2283, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PEGTerminal_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2288, (Optr)&t_method_return);
    Block PBlock2277 = new_Block_with(PArray2278, empty_Array, PThreadedCode2279, 2, PSend2282, PSend2288);
    // on:. 
    Send PSend2289 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2277);
    Array PThreadedCode2276 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2277, (Optr)&t_send1, (Optr)PSend2289, (Optr)&t_method_return);
    Method PMethod2275 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2276, 1, PSend2289);
    
    MethodClosure MC_SMB_asParser = new_MethodClosure((Method)PMethod2275, String_Class);
    store_method(String_Class, SMB_asParser, MC_SMB_asParser);
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