#include <lib/class/Kernel/String/String.h>


Optr layout_Kernel_String_String_Class_class;


static void init_SMB_at_() {
    Symbol SMB_at_ = new_Symbol(L"at:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Array PArray1910 = new_Array_with(1, (Optr)VAR_index_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_Symbol = new_Symbol(L"String.Symbol");
    Annotation PAnnotation1912 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_at_, (Optr)SMB_String_minus_Symbol);
    Array PArray1911 = new_Array_with(1, (Optr)PAnnotation1912);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend1914 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode1913 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1914, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod1909 = new_NativeMethod_with(PArray1910, empty_Array, PArray1911, PThreadedCode1913, 2, PSend1914, self);
    
    MethodClosure MC_SMB_at_ = new_MethodClosure((Method)PNativeMethod1909, String_Class);
    store_method(String_Class, SMB_at_, MC_SMB_at_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray1916 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_Symbol = new_Symbol(L"String.Symbol");
    Annotation PAnnotation1918 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__equals_, (Optr)SMB_String_minus_Symbol);
    Array PArray1917 = new_Array_with(1, (Optr)PAnnotation1918);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend1920 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode1919 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1920, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod1915 = new_NativeMethod_with(PArray1916, empty_Array, PArray1917, PThreadedCode1919, 2, PSend1920, self);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PNativeMethod1915, String_Class);
    store_method(String_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_asUppercase() {
    Symbol SMB_asUppercase = new_Symbol(L"asUppercase");
    Variable VAR_cap_0_0 = new_Variable_named(L"cap", 0);
    Array PArray1922 = new_Array_with(1, (Optr)VAR_cap_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1925 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend1927 = new_Send((Optr)self, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_copy = new_Symbol(L"copy");
    // copy. 
    Send PSend1931 = new_Send((Optr)self, SMB_copy, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1932 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend1931);
    Array PThreadedCode1930 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1931, (Optr)&t_send1, (Optr)PSend1932, (Optr)&t_block_return);
    Block PBlock1929 = new_Block_with(empty_Array, empty_Array, PThreadedCode1930, 1, PSend1932);
    // ifTrue:. 
    Send PSend1928 = new_Send((Optr)PSend1927, SMB_ifTrue_, 1, (Optr)PBlock1929);
    // copy. 
    Send PSend1934 = new_Send((Optr)self, SMB_copy, 0);
    Assign PAssign1933 = new_Assign((Optr)VAR_cap_0_0, (Optr)PSend1934);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1935 = new_Send((Optr)VAR_cap_0_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray1937 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1939 = new_Send((Optr)VAR_cap_0_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    // asUppercase. 
    Send PSend1940 = new_Send((Optr)PSend1939, SMB_asUppercase, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend1941 = new_Send((Optr)VAR_cap_0_0, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend1940);
    Array PThreadedCode1938 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend1939, (Optr)&t_send0, (Optr)PSend1940, (Optr)&t_send2, (Optr)PSend1941, (Optr)&t_method_return);
    Block PBlock1936 = new_Block_with(PArray1937, empty_Array, PThreadedCode1938, 1, PSend1941);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend1942 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend1935, (Optr)PBlock1936);
    Array PThreadedCode1926 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1927, (Optr)&t_send_ifTrue_, (Optr)PSend1928, (Optr)PBlock1929, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1933, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1934, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_send0, (Optr)PSend1935, (Optr)&t_push_closure, (Optr)PBlock1936, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend1942, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_method_return);
    Block PBlock1924 = new_Block_with(PArray1925, empty_Array, PThreadedCode1926, 4, PSend1928, PAssign1933, PSend1942, VAR_cap_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1943 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1924);
    Array PThreadedCode1923 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1924, (Optr)&t_send1, (Optr)PSend1943, (Optr)&t_method_return);
    Method PMethod1921 = new_Method_with(empty_Array, PArray1922, empty_Array, PThreadedCode1923, 1, PSend1943);
    
    MethodClosure MC_SMB_asUppercase = new_MethodClosure((Method)PMethod1921, String_Class);
    store_method(String_Class, SMB_asUppercase, MC_SMB_asUppercase);
}


static void init_SMB_asParser() {
    Symbol SMB_asParser = new_Symbol(L"asParser");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1947 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1949 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend1950 = new_Send((Optr)PSend1949, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1954 = new_Send((Optr)self, SMB_at_, 1, (Optr)int_1_Const);
    // asParser. 
    Send PSend1955 = new_Send((Optr)PSend1954, SMB_asParser, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1956 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend1955);
    Array PThreadedCode1953 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1954, (Optr)&t_send0, (Optr)PSend1955, (Optr)&t_send1, (Optr)PSend1956, (Optr)&t_block_return);
    Block PBlock1952 = new_Block_with(empty_Array, empty_Array, PThreadedCode1953, 1, PSend1956);
    // ifTrue:. 
    Send PSend1951 = new_Send((Optr)PSend1950, SMB_ifTrue_, 1, (Optr)PBlock1952);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1957 = new_Send((Optr)PEGTerminal_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode1948 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1949, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1950, (Optr)&t_send_ifTrue_, (Optr)PSend1951, (Optr)PBlock1952, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PEGTerminal_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend1957, (Optr)&t_method_return);
    Block PBlock1946 = new_Block_with(PArray1947, empty_Array, PThreadedCode1948, 2, PSend1951, PSend1957);
    // on:. 
    Send PSend1958 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1946);
    Array PThreadedCode1945 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1946, (Optr)&t_send1, (Optr)PSend1958, (Optr)&t_method_return);
    Method PMethod1944 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1945, 1, PSend1958);
    
    MethodClosure MC_SMB_asParser = new_MethodClosure((Method)PMethod1944, String_Class);
    store_method(String_Class, SMB_asParser, MC_SMB_asParser);
}


static void init_SMB_asSymbol() {
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_String = new_Symbol(L"String.String");
    Annotation PAnnotation1961 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_asSymbol, (Optr)SMB_String_minus_String);
    Array PArray1960 = new_Array_with(1, (Optr)PAnnotation1961);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend1963 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode1962 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1963, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod1959 = new_NativeMethod_with(empty_Array, empty_Array, PArray1960, PThreadedCode1962, 2, PSend1963, self);
    
    MethodClosure MC_SMB_asSymbol = new_MethodClosure((Method)PNativeMethod1959, String_Class);
    store_method(String_Class, SMB_asSymbol, MC_SMB_asSymbol);
}


static void init_SMB_basicAt_() {
    Symbol SMB_basicAt_ = new_Symbol(L"basicAt:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Array PArray1965 = new_Array_with(1, (Optr)VAR_index_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_Symbol = new_Symbol(L"String.Symbol");
    Annotation PAnnotation1967 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_basicAt_, (Optr)SMB_String_minus_Symbol);
    Array PArray1966 = new_Array_with(1, (Optr)PAnnotation1967);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend1969 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode1968 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1969, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod1964 = new_NativeMethod_with(PArray1965, empty_Array, PArray1966, PThreadedCode1968, 2, PSend1969, self);
    
    MethodClosure MC_SMB_basicAt_ = new_MethodClosure((Method)PNativeMethod1964, String_Class);
    store_method(String_Class, SMB_basicAt_, MC_SMB_basicAt_);
}


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    Array PThreadedCode1971 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod1970 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1971, 1, self);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PMethod1970, String_Class);
    store_method(String_Class, SMB_asString, MC_SMB_asString);
}


static void init_SMB_putOn_() {
    Symbol SMB_putOn_ = new_Symbol(L"putOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray1973 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend1975 = new_Send((Optr)VAR_aStream_0_0, SMB_writeAll_, 1, (Optr)self);
    Array PThreadedCode1974 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend1975, (Optr)&t_method_return);
    Method PMethod1972 = new_Method_with(PArray1973, empty_Array, empty_Array, PThreadedCode1974, 1, PSend1975);
    
    MethodClosure MC_SMB_putOn_ = new_MethodClosure((Method)PMethod1972, String_Class);
    store_method(String_Class, SMB_putOn_, MC_SMB_putOn_);
}


static void init_SMB_findTokens_() {
    Symbol SMB_findTokens_ = new_Symbol(L"findTokens:");
    Variable VAR_delimiters_0_0 = new_Variable_named(L"delimiters", 0);
    Array PArray1977 = new_Array_with(1, (Optr)VAR_delimiters_0_0);
    Variable VAR_tokens_0_1 = new_Variable_named(L"tokens", 0);
    Variable VAR_keyStart_0_2 = new_Variable_named(L"keyStart", 0);
    Variable VAR_keyStop_0_3 = new_Variable_named(L"keyStop", 0);
    Variable VAR_separators_0_4 = new_Variable_named(L"separators", 0);
    Array PArray1978 = new_Array_with(4, (Optr)VAR_tokens_0_1, (Optr)VAR_keyStart_0_2, (Optr)VAR_keyStop_0_3, (Optr)VAR_separators_0_4);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend1981 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign1980 = new_Assign((Optr)VAR_tokens_0_1, (Optr)PSend1981);
    Symbol SMB_isCharacter = new_Symbol(L"isCharacter");
    // isCharacter. 
    Send PSend1984 = new_Send((Optr)VAR_delimiters_0_0, SMB_isCharacter, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend1987 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)VAR_delimiters_0_0);
    Array PThreadedCode1986 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_delimiters_0_0, (Optr)&t_send1, (Optr)PSend1987, (Optr)&t_block_return);
    Block PBlock1985 = new_Block_with(empty_Array, empty_Array, PThreadedCode1986, 1, PSend1987);
    Array PThreadedCode1989 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_delimiters_0_0, (Optr)&t_block_return);
    Block PBlock1988 = new_Block_with(empty_Array, empty_Array, PThreadedCode1989, 1, VAR_delimiters_0_0);
    // ifTrue:ifFalse:. 
    Send PSend1983 = new_Send((Optr)PSend1984, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock1985, (Optr)PBlock1988);
    Assign PAssign1982 = new_Assign((Optr)VAR_separators_0_4, (Optr)PSend1983);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign1990 = new_Assign((Optr)VAR_keyStop_0_3, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1993 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend1994 = new_Send((Optr)VAR_keyStop_0_3, SMB__lt__equals_, 1, (Optr)PSend1993);
    Array PThreadedCode1992 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_keyStop_0_3, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1993, (Optr)&t_send1, (Optr)PSend1994, (Optr)&t_block_return);
    Block PBlock1991 = new_Block_with(empty_Array, empty_Array, PThreadedCode1992, 1, PSend1994);
    Symbol SMB_skipDelimiters_startingAt_ = new_Symbol(L"skipDelimiters:startingAt:");
    // skipDelimiters:startingAt:. 
    Send PSend1998 = new_Send((Optr)self, SMB_skipDelimiters_startingAt_, 2, (Optr)VAR_separators_0_4, (Optr)VAR_keyStop_0_3);
    Assign PAssign1997 = new_Assign((Optr)VAR_keyStart_0_2, (Optr)PSend1998);
    Symbol SMB_findDelimiters_startingAt_ = new_Symbol(L"findDelimiters:startingAt:");
    // findDelimiters:startingAt:. 
    Send PSend2000 = new_Send((Optr)self, SMB_findDelimiters_startingAt_, 2, (Optr)VAR_separators_0_4, (Optr)VAR_keyStart_0_2);
    Assign PAssign1999 = new_Assign((Optr)VAR_keyStop_0_3, (Optr)PSend2000);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend2001 = new_Send((Optr)VAR_keyStart_0_2, SMB__lt_, 1, (Optr)VAR_keyStop_0_3);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend2005 = new_Send((Optr)VAR_keyStop_0_3, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend2006 = new_Send((Optr)self, SMB_copyFrom_to_, 2, (Optr)VAR_keyStart_0_2, (Optr)PSend2005);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend2007 = new_Send((Optr)VAR_tokens_0_1, SMB_add_, 1, (Optr)PSend2006);
    Array PThreadedCode2004 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_keyStart_0_2, (Optr)&t_push_variable, (Optr)VAR_keyStop_0_3, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend2005, (Optr)&t_send2, (Optr)PSend2006, (Optr)&t_send1, (Optr)PSend2007, (Optr)&t_block_return);
    Block PBlock2003 = new_Block_with(empty_Array, empty_Array, PThreadedCode2004, 1, PSend2007);
    // ifTrue:. 
    Send PSend2002 = new_Send((Optr)PSend2001, SMB_ifTrue_, 1, (Optr)PBlock2003);
    Array PThreadedCode1996 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign1997, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_separators_0_4, (Optr)&t_push_variable, (Optr)VAR_keyStop_0_3, (Optr)&t_send2, (Optr)PSend1998, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1999, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_separators_0_4, (Optr)&t_push_variable, (Optr)VAR_keyStart_0_2, (Optr)&t_send2, (Optr)PSend2000, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_keyStart_0_2, (Optr)&t_push_variable, (Optr)VAR_keyStop_0_3, (Optr)&t_send1, (Optr)PSend2001, (Optr)&t_send_ifTrue_, (Optr)PSend2002, (Optr)PBlock2003, (Optr)&t_block_return);
    Block PBlock1995 = new_Block_with(empty_Array, empty_Array, PThreadedCode1996, 3, PAssign1997, PAssign1999, PSend2002);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend2008 = new_Send((Optr)PBlock1991, SMB_whileTrue_, 1, (Optr)PBlock1995);
    Array PThreadedCode1979 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign1980, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend1981, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1982, (Optr)&t_push_variable, (Optr)VAR_delimiters_0_0, (Optr)&t_send0, (Optr)PSend1984, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend1983, (Optr)PBlock1985, (Optr)PBlock1988, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1990, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock1991, (Optr)&t_push_closure, (Optr)PBlock1995, (Optr)&t_send1, (Optr)PSend2008, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_tokens_0_1, (Optr)&t_method_return);
    Method PMethod1976 = new_Method_with(PArray1977, PArray1978, empty_Array, PThreadedCode1979, 5, PAssign1980, PAssign1982, PAssign1990, PSend2008, VAR_tokens_0_1);
    
    MethodClosure MC_SMB_findTokens_ = new_MethodClosure((Method)PMethod1976, String_Class);
    store_method(String_Class, SMB_findTokens_, MC_SMB_findTokens_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
    Array PArray2010 = new_Array_with(1, (Optr)VAR_stream_0_0);
    String string_2012 = new_String(L"'");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_2012_Const = new_Constant((Optr)string_2012);
    // <<. 
    Send PSend2013 = new_Send((Optr)VAR_stream_0_0, SMB__shiftLeft_, 1, (Optr)string_2012_Const);
    // <<. 
    Send PSend2014 = new_Send((Optr)PSend2013, SMB__shiftLeft_, 1, (Optr)self);
    String string_2015 = new_String(L"'");
    Constant string_2015_Const = new_Constant((Optr)string_2015);
    // <<. 
    Send PSend2016 = new_Send((Optr)PSend2014, SMB__shiftLeft_, 1, (Optr)string_2015_Const);
    Array PThreadedCode2011 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_push1, (Optr)string_2012, (Optr)&t_send1, (Optr)PSend2013, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2014, (Optr)&t_push1, (Optr)string_2015, (Optr)&t_send1, (Optr)PSend2016, (Optr)&t_method_return);
    Method PMethod2009 = new_Method_with(PArray2010, empty_Array, empty_Array, PThreadedCode2011, 1, PSend2016);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod2009, String_Class);
    store_method(String_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_findDelimiters_startingAt_() {
    Symbol SMB_findDelimiters_startingAt_ = new_Symbol(L"findDelimiters:startingAt:");
    Variable VAR_delimiters_0_0 = new_Variable_named(L"delimiters", 0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Array PArray2018 = new_Array_with(2, (Optr)VAR_delimiters_0_0, (Optr)VAR_start_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2021 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend2023 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray2025 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR_delim_3_0 = new_Variable_named(L"delim", 3);
    Array PArray2028 = new_Array_with(1, (Optr)VAR_delim_3_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend2030 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend2031 = new_Send((Optr)VAR_delim_3_0, SMB__equals_, 1, (Optr)PSend2030);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend2035 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_i_2_0);
    Array PThreadedCode2034 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend2035, (Optr)&t_block_return);
    Block PBlock2033 = new_Block_with(empty_Array, empty_Array, PThreadedCode2034, 1, PSend2035);
    // ifTrue:. 
    Send PSend2032 = new_Send((Optr)PSend2031, SMB_ifTrue_, 1, (Optr)PBlock2033);
    Array PThreadedCode2029 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_delim_3_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend2030, (Optr)&t_send1, (Optr)PSend2031, (Optr)&t_send_ifTrue_, (Optr)PSend2032, (Optr)PBlock2033, (Optr)&t_method_return);
    Block PBlock2027 = new_Block_with(PArray2028, empty_Array, PThreadedCode2029, 1, PSend2032);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend2036 = new_Send((Optr)VAR_delimiters_0_0, SMB_do_, 1, (Optr)PBlock2027);
    Array PThreadedCode2026 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_delimiters_0_0, (Optr)&t_push_closure, (Optr)PBlock2027, (Optr)&t_send1, (Optr)PSend2036, (Optr)&t_method_return);
    Block PBlock2024 = new_Block_with(PArray2025, empty_Array, PThreadedCode2026, 1, PSend2036);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend2037 = new_Send((Optr)VAR_start_0_1, SMB_to_do_, 2, (Optr)PSend2023, (Optr)PBlock2024);
    // size. 
    Send PSend2038 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend2039 = new_Send((Optr)PSend2038, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode2022 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2023, (Optr)&t_push_closure, (Optr)PBlock2024, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend2037, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2038, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend2039, (Optr)&t_method_return);
    Block PBlock2020 = new_Block_with(PArray2021, empty_Array, PThreadedCode2022, 2, PSend2037, PSend2039);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2040 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2020);
    Array PThreadedCode2019 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2020, (Optr)&t_send1, (Optr)PSend2040, (Optr)&t_method_return);
    Method PMethod2017 = new_Method_with(PArray2018, empty_Array, empty_Array, PThreadedCode2019, 1, PSend2040);
    
    MethodClosure MC_SMB_findDelimiters_startingAt_ = new_MethodClosure((Method)PMethod2017, String_Class);
    store_method(String_Class, SMB_findDelimiters_startingAt_, MC_SMB_findDelimiters_startingAt_);
}


static void init_SMB_size() {
    Symbol SMB_size = new_Symbol(L"size");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_Symbol = new_Symbol(L"String.Symbol");
    Annotation PAnnotation2043 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_size, (Optr)SMB_String_minus_Symbol);
    Array PArray2042 = new_Array_with(1, (Optr)PAnnotation2043);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend2045 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode2044 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2045, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod2041 = new_NativeMethod_with(empty_Array, empty_Array, PArray2042, PThreadedCode2044, 2, PSend2045, self);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PNativeMethod2041, String_Class);
    store_method(String_Class, SMB_size, MC_SMB_size);
}


static void init_SMB_indexOf_startingAt_() {
    Symbol SMB_indexOf_startingAt_ = new_Symbol(L"indexOf:startingAt:");
    Variable VAR_aCharacter_0_0 = new_Variable_named(L"aCharacter", 0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Array PArray2047 = new_Array_with(2, (Optr)VAR_aCharacter_0_0, (Optr)VAR_start_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2050 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isCharacter = new_Symbol(L"isCharacter");
    // isCharacter. 
    Send PSend2052 = new_Send((Optr)VAR_aCharacter_0_0, SMB_isCharacter, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // escape:. 
    Send PSend2056 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)int_0_Const);
    Array PThreadedCode2055 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend2056, (Optr)&t_block_return);
    Block PBlock2054 = new_Block_with(empty_Array, empty_Array, PThreadedCode2055, 1, PSend2056);
    // ifFalse:. 
    Send PSend2053 = new_Send((Optr)PSend2052, SMB_ifFalse_, 1, (Optr)PBlock2054);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend2057 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_pos_2_0 = new_Variable_named(L"pos", 2);
    Array PArray2059 = new_Array_with(1, (Optr)VAR_pos_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend2061 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_pos_2_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend2062 = new_Send((Optr)PSend2061, SMB_asInteger, 0);
    // asInteger. 
    Send PSend2063 = new_Send((Optr)VAR_aCharacter_0_0, SMB_asInteger, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend2064 = new_Send((Optr)PSend2062, SMB__equals_, 1, (Optr)PSend2063);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend2068 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_pos_2_0);
    Array PThreadedCode2067 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_pos_2_0, (Optr)&t_send1, (Optr)PSend2068, (Optr)&t_block_return);
    Block PBlock2066 = new_Block_with(empty_Array, empty_Array, PThreadedCode2067, 1, PSend2068);
    // ifTrue:. 
    Send PSend2065 = new_Send((Optr)PSend2064, SMB_ifTrue_, 1, (Optr)PBlock2066);
    Array PThreadedCode2060 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_pos_2_0, (Optr)&t_send1, (Optr)PSend2061, (Optr)&t_send0, (Optr)PSend2062, (Optr)&t_push_variable, (Optr)VAR_aCharacter_0_0, (Optr)&t_send0, (Optr)PSend2063, (Optr)&t_send1, (Optr)PSend2064, (Optr)&t_send_ifTrue_, (Optr)PSend2065, (Optr)PBlock2066, (Optr)&t_method_return);
    Block PBlock2058 = new_Block_with(PArray2059, empty_Array, PThreadedCode2060, 1, PSend2065);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend2069 = new_Send((Optr)VAR_start_0_1, SMB_to_do_, 2, (Optr)PSend2057, (Optr)PBlock2058);
    Array PThreadedCode2051 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_aCharacter_0_0, (Optr)&t_send0, (Optr)PSend2052, (Optr)&t_send_ifFalse_, (Optr)PSend2053, (Optr)PBlock2054, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2057, (Optr)&t_push_closure, (Optr)PBlock2058, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend2069, (Optr)&t_zap, (Optr)&t_method_return_0);
    Block PBlock2049 = new_Block_with(PArray2050, empty_Array, PThreadedCode2051, 3, PSend2053, PSend2069, int_0_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2070 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2049);
    Array PThreadedCode2048 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2049, (Optr)&t_send1, (Optr)PSend2070, (Optr)&t_method_return);
    Method PMethod2046 = new_Method_with(PArray2047, empty_Array, empty_Array, PThreadedCode2048, 1, PSend2070);
    
    MethodClosure MC_SMB_indexOf_startingAt_ = new_MethodClosure((Method)PMethod2046, String_Class);
    store_method(String_Class, SMB_indexOf_startingAt_, MC_SMB_indexOf_startingAt_);
}


static void init_SMB_withBlanksTrimmed() {
    Symbol SMB_withBlanksTrimmed = new_Symbol(L"withBlanksTrimmed");
    Variable VAR_first_0_0 = new_Variable_named(L"first", 0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Array PArray2072 = new_Array_with(2, (Optr)VAR_first_0_0, (Optr)VAR_result_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2075 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_findFirst_ = new_Symbol(L"findFirst:");
    Variable VAR_c_2_0 = new_Variable_named(L"c", 2);
    Array PArray2080 = new_Array_with(1, (Optr)VAR_c_2_0);
    Symbol SMB_isSeparator = new_Symbol(L"isSeparator");
    // isSeparator. 
    Send PSend2082 = new_Send((Optr)VAR_c_2_0, SMB_isSeparator, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend2083 = new_Send((Optr)PSend2082, SMB_not, 0);
    Array PThreadedCode2081 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_c_2_0, (Optr)&t_send0, (Optr)PSend2082, (Optr)&t_send0, (Optr)PSend2083, (Optr)&t_method_return);
    Block PBlock2079 = new_Block_with(PArray2080, empty_Array, PThreadedCode2081, 1, PSend2083);
    // findFirst:. 
    Send PSend2078 = new_Send((Optr)self, SMB_findFirst_, 1, (Optr)PBlock2079);
    Assign PAssign2077 = new_Assign((Optr)VAR_first_0_0, (Optr)PSend2078);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend2084 = new_Send((Optr)VAR_first_0_0, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_2088 = new_String(L"");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    Constant string_2088_Const = new_Constant((Optr)string_2088);
    // escape:. 
    Send PSend2089 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)string_2088_Const);
    Array PThreadedCode2087 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)string_2088, (Optr)&t_send1, (Optr)PSend2089, (Optr)&t_block_return);
    Block PBlock2086 = new_Block_with(empty_Array, empty_Array, PThreadedCode2087, 1, PSend2089);
    // ifTrue:. 
    Send PSend2085 = new_Send((Optr)PSend2084, SMB_ifTrue_, 1, (Optr)PBlock2086);
    Array PArray2091 = new_Array_with(1, (Optr)VAR_c_2_0);
    // isSeparator. 
    Send PSend2093 = new_Send((Optr)VAR_c_2_0, SMB_isSeparator, 0);
    // not. 
    Send PSend2094 = new_Send((Optr)PSend2093, SMB_not, 0);
    Array PThreadedCode2092 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_c_2_0, (Optr)&t_send0, (Optr)PSend2093, (Optr)&t_send0, (Optr)PSend2094, (Optr)&t_method_return);
    Block PBlock2090 = new_Block_with(PArray2091, empty_Array, PThreadedCode2092, 1, PSend2094);
    Symbol SMB_findLast_ = new_Symbol(L"findLast:");
    // findLast:. 
    Send PSend2095 = new_Send((Optr)self, SMB_findLast_, 1, (Optr)PBlock2090);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend2096 = new_Send((Optr)self, SMB_copyFrom_to_, 2, (Optr)VAR_first_0_0, (Optr)PSend2095);
    Array PThreadedCode2076 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign2077, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock2079, (Optr)&t_send1, (Optr)PSend2078, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_first_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend2084, (Optr)&t_send_ifTrue_, (Optr)PSend2085, (Optr)PBlock2086, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_first_0_0, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock2090, (Optr)&t_send1, (Optr)PSend2095, (Optr)&t_send2, (Optr)PSend2096, (Optr)&t_method_return);
    Block PBlock2074 = new_Block_with(PArray2075, empty_Array, PThreadedCode2076, 3, PAssign2077, PSend2085, PSend2096);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2097 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2074);
    Array PThreadedCode2073 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2074, (Optr)&t_send1, (Optr)PSend2097, (Optr)&t_method_return);
    Method PMethod2071 = new_Method_with(empty_Array, PArray2072, empty_Array, PThreadedCode2073, 1, PSend2097);
    
    MethodClosure MC_SMB_withBlanksTrimmed = new_MethodClosure((Method)PMethod2071, String_Class);
    store_method(String_Class, SMB_withBlanksTrimmed, MC_SMB_withBlanksTrimmed);
}


static void init_SMB_contains_at_() {
    Symbol SMB_contains_at_ = new_Symbol(L"contains:at:");
    Variable VAR_substring_0_0 = new_Variable_named(L"substring", 0);
    Variable VAR_position_0_1 = new_Variable_named(L"position", 0);
    Array PArray2099 = new_Array_with(2, (Optr)VAR_substring_0_0, (Optr)VAR_position_0_1);
    Variable VAR_size_0_2 = new_Variable_named(L"size", 0);
    Array PArray2100 = new_Array_with(1, (Optr)VAR_size_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2103 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend2106 = new_Send((Optr)VAR_substring_0_0, SMB_size, 0);
    Assign PAssign2105 = new_Assign((Optr)VAR_size_0_2, (Optr)PSend2106);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend2107 = new_Send((Optr)VAR_position_0_1, SMB__plus_, 1, (Optr)VAR_size_0_2);
    // size. 
    Send PSend2108 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend2109 = new_Send((Optr)PSend2107, SMB__gt_, 1, (Optr)PSend2108);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend2113 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode2112 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend2113, (Optr)&t_block_return);
    Block PBlock2111 = new_Block_with(empty_Array, empty_Array, PThreadedCode2112, 1, PSend2113);
    // ifTrue:. 
    Send PSend2110 = new_Send((Optr)PSend2109, SMB_ifTrue_, 1, (Optr)PBlock2111);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray2115 = new_Array_with(1, (Optr)VAR_i_2_0);
    // +. 
    Send PSend2117 = new_Send((Optr)VAR_position_0_1, SMB__plus_, 1, (Optr)VAR_i_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend2118 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend2117);
    // at:. 
    Send PSend2119 = new_Send((Optr)VAR_substring_0_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend2120 = new_Send((Optr)PSend2118, SMB__equals_, 1, (Optr)PSend2119);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend2124 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode2123 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend2124, (Optr)&t_block_return);
    Block PBlock2122 = new_Block_with(empty_Array, empty_Array, PThreadedCode2123, 1, PSend2124);
    // ifFalse:. 
    Send PSend2121 = new_Send((Optr)PSend2120, SMB_ifFalse_, 1, (Optr)PBlock2122);
    Array PThreadedCode2116 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend2117, (Optr)&t_send1, (Optr)PSend2118, (Optr)&t_push_variable, (Optr)VAR_substring_0_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend2119, (Optr)&t_send1, (Optr)PSend2120, (Optr)&t_send_ifFalse_, (Optr)PSend2121, (Optr)PBlock2122, (Optr)&t_method_return);
    Block PBlock2114 = new_Block_with(PArray2115, empty_Array, PThreadedCode2116, 1, PSend2121);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend2125 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_size_0_2, (Optr)PBlock2114);
    Array PThreadedCode2104 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign2105, (Optr)&t_push_variable, (Optr)VAR_substring_0_0, (Optr)&t_send0, (Optr)PSend2106, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_position_0_1, (Optr)&t_push_variable, (Optr)VAR_size_0_2, (Optr)&t_send1, (Optr)PSend2107, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2108, (Optr)&t_send1, (Optr)PSend2109, (Optr)&t_send_ifTrue_, (Optr)PSend2110, (Optr)PBlock2111, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_2, (Optr)&t_push_closure, (Optr)PBlock2114, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend2125, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock2102 = new_Block_with(PArray2103, empty_Array, PThreadedCode2104, 4, PAssign2105, PSend2110, PSend2125, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2126 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2102);
    Array PThreadedCode2101 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2102, (Optr)&t_send1, (Optr)PSend2126, (Optr)&t_method_return);
    Method PMethod2098 = new_Method_with(PArray2099, PArray2100, empty_Array, PThreadedCode2101, 1, PSend2126);
    
    MethodClosure MC_SMB_contains_at_ = new_MethodClosure((Method)PMethod2098, String_Class);
    store_method(String_Class, SMB_contains_at_, MC_SMB_contains_at_);
}


static void init_SMB_asLowercase() {
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    Variable VAR_cap_0_0 = new_Variable_named(L"cap", 0);
    Array PArray2128 = new_Array_with(1, (Optr)VAR_cap_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2131 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend2133 = new_Send((Optr)self, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_copy = new_Symbol(L"copy");
    // copy. 
    Send PSend2137 = new_Send((Optr)self, SMB_copy, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend2138 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend2137);
    Array PThreadedCode2136 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2137, (Optr)&t_send1, (Optr)PSend2138, (Optr)&t_block_return);
    Block PBlock2135 = new_Block_with(empty_Array, empty_Array, PThreadedCode2136, 1, PSend2138);
    // ifTrue:. 
    Send PSend2134 = new_Send((Optr)PSend2133, SMB_ifTrue_, 1, (Optr)PBlock2135);
    // copy. 
    Send PSend2140 = new_Send((Optr)self, SMB_copy, 0);
    Assign PAssign2139 = new_Assign((Optr)VAR_cap_0_0, (Optr)PSend2140);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend2141 = new_Send((Optr)VAR_cap_0_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray2143 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend2145 = new_Send((Optr)VAR_cap_0_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    // asLowercase. 
    Send PSend2146 = new_Send((Optr)PSend2145, SMB_asLowercase, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend2147 = new_Send((Optr)VAR_cap_0_0, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend2146);
    Array PThreadedCode2144 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend2145, (Optr)&t_send0, (Optr)PSend2146, (Optr)&t_send2, (Optr)PSend2147, (Optr)&t_method_return);
    Block PBlock2142 = new_Block_with(PArray2143, empty_Array, PThreadedCode2144, 1, PSend2147);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend2148 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend2141, (Optr)PBlock2142);
    Array PThreadedCode2132 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2133, (Optr)&t_send_ifTrue_, (Optr)PSend2134, (Optr)PBlock2135, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign2139, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2140, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_send0, (Optr)PSend2141, (Optr)&t_push_closure, (Optr)PBlock2142, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend2148, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_method_return);
    Block PBlock2130 = new_Block_with(PArray2131, empty_Array, PThreadedCode2132, 4, PSend2134, PAssign2139, PSend2148, VAR_cap_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2149 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2130);
    Array PThreadedCode2129 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2130, (Optr)&t_send1, (Optr)PSend2149, (Optr)&t_method_return);
    Method PMethod2127 = new_Method_with(empty_Array, PArray2128, empty_Array, PThreadedCode2129, 1, PSend2149);
    
    MethodClosure MC_SMB_asLowercase = new_MethodClosure((Method)PMethod2127, String_Class);
    store_method(String_Class, SMB_asLowercase, MC_SMB_asLowercase);
}


static void init_SMB_asNumber() {
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_String = new_Symbol(L"String.String");
    Annotation PAnnotation2152 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_asNumber, (Optr)SMB_String_minus_String);
    Array PArray2151 = new_Array_with(1, (Optr)PAnnotation2152);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend2154 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode2153 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2154, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod2150 = new_NativeMethod_with(empty_Array, empty_Array, PArray2151, PThreadedCode2153, 2, PSend2154, self);
    
    MethodClosure MC_SMB_asNumber = new_MethodClosure((Method)PNativeMethod2150, String_Class);
    store_method(String_Class, SMB_asNumber, MC_SMB_asNumber);
}


static void init_SMB_asArray() {
    Symbol SMB_asArray = new_Symbol(L"asArray");
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    // newFrom:. 
    Send PSend2157 = new_Send((Optr)Array_classReference, SMB_newFrom_, 1, (Optr)self);
    Array PThreadedCode2156 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2157, (Optr)&t_method_return);
    Method PMethod2155 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2156, 1, PSend2157);
    
    MethodClosure MC_SMB_asArray = new_MethodClosure((Method)PMethod2155, String_Class);
    store_method(String_Class, SMB_asArray, MC_SMB_asArray);
}


static void init_SMB_hash() {
    Symbol SMB_hash = new_Symbol(L"hash");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_Symbol = new_Symbol(L"String.Symbol");
    Annotation PAnnotation2160 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_hash, (Optr)SMB_String_minus_Symbol);
    Array PArray2159 = new_Array_with(1, (Optr)PAnnotation2160);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend2162 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode2161 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2162, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod2158 = new_NativeMethod_with(empty_Array, empty_Array, PArray2159, PThreadedCode2161, 2, PSend2162, self);
    
    MethodClosure MC_SMB_hash = new_MethodClosure((Method)PNativeMethod2158, String_Class);
    store_method(String_Class, SMB_hash, MC_SMB_hash);
}


static void init_SMB_asPEGRange() {
    Symbol SMB_asPEGRange = new_Symbol(L"asPEGRange");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend2165 = new_Send((Optr)self, SMB_size, 0);
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant int_3_Const = new_Constant((Optr)int_3);
    // =. 
    Send PSend2166 = new_Send((Optr)PSend2165, SMB__equals_, 1, (Optr)int_3_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend2169 = new_Send((Optr)self, SMB_at_, 1, (Optr)int_2_Const);
    Character char_2170 = new_Character(L'-');
    Constant char_2170_Const = new_Constant((Optr)char_2170);
    // =. 
    Send PSend2171 = new_Send((Optr)PSend2169, SMB__equals_, 1, (Optr)char_2170_Const);
    Array PThreadedCode2168 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend2169, (Optr)&t_push1, (Optr)char_2170, (Optr)&t_send1, (Optr)PSend2171, (Optr)&t_block_return);
    Block PBlock2167 = new_Block_with(empty_Array, empty_Array, PThreadedCode2168, 1, PSend2171);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend2172 = new_Send((Optr)PSend2166, SMB_and_, 1, (Optr)PBlock2167);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_2176 = new_String(L"Cannot convert ");
    Constant string_2176_Const = new_Constant((Optr)string_2176);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend2177 = new_Send((Optr)string_2176_Const, SMB__append_, 1, (Optr)self);
    String string_2178 = new_String(L" to PEG range. Expected format: beginchar-endchar");
    Constant string_2178_Const = new_Constant((Optr)string_2178);
    // ,. 
    Send PSend2179 = new_Send((Optr)PSend2177, SMB__append_, 1, (Optr)string_2178_Const);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend2180 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend2179);
    Array PThreadedCode2175 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_2176, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2177, (Optr)&t_push1, (Optr)string_2178, (Optr)&t_send1, (Optr)PSend2179, (Optr)&t_send1, (Optr)PSend2180, (Optr)&t_block_return);
    Block PBlock2174 = new_Block_with(empty_Array, empty_Array, PThreadedCode2175, 1, PSend2180);
    // ifFalse:. 
    Send PSend2173 = new_Send((Optr)PSend2172, SMB_ifFalse_, 1, (Optr)PBlock2174);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend2181 = new_Send((Optr)self, SMB_at_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend2182 = new_Send((Optr)self, SMB_at_, 1, (Optr)int_3_Const);
    Symbol SMB_between_and_ = new_Symbol(L"between:and:");
    // between:and:. 
    Send PSend2183 = new_Send((Optr)PEGRange_classReference, SMB_between_and_, 2, (Optr)PSend2181, (Optr)PSend2182);
    Array PThreadedCode2164 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2165, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend2166, (Optr)&t_push_closure, (Optr)PBlock2167, (Optr)&t_send1, (Optr)PSend2172, (Optr)&t_send_ifFalse_, (Optr)PSend2173, (Optr)PBlock2174, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PEGRange_classReference, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend2181, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend2182, (Optr)&t_send2, (Optr)PSend2183, (Optr)&t_method_return);
    Method PMethod2163 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2164, 2, PSend2173, PSend2183);
    
    MethodClosure MC_SMB_asPEGRange = new_MethodClosure((Method)PMethod2163, String_Class);
    store_method(String_Class, SMB_asPEGRange, MC_SMB_asPEGRange);
}


static void init_SMB_copy() {
    Symbol SMB_copy = new_Symbol(L"copy");
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend2186 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    // newFrom:. 
    Send PSend2187 = new_Send((Optr)PSend2186, SMB_newFrom_, 1, (Optr)self);
    Array PThreadedCode2185 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2186, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2187, (Optr)&t_method_return);
    Method PMethod2184 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2185, 1, PSend2187);
    
    MethodClosure MC_SMB_copy = new_MethodClosure((Method)PMethod2184, String_Class);
    store_method(String_Class, SMB_copy, MC_SMB_copy);
}


static void init_SMB__append_() {
    Symbol SMB__append_ = new_Symbol(L",");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray2189 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_String = new_Symbol(L"String.String");
    Annotation PAnnotation2191 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__append_, (Optr)SMB_String_minus_String);
    Array PArray2190 = new_Array_with(1, (Optr)PAnnotation2191);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend2193 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode2192 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2193, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod2188 = new_NativeMethod_with(PArray2189, empty_Array, PArray2190, PThreadedCode2192, 2, PSend2193, self);
    
    MethodClosure MC_SMB__append_ = new_MethodClosure((Method)PNativeMethod2188, String_Class);
    store_method(String_Class, SMB__append_, MC_SMB__append_);
}


static void init_SMB_at_put_() {
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Variable VAR_character_0_1 = new_Variable_named(L"character", 0);
    Array PArray2195 = new_Array_with(2, (Optr)VAR_index_0_0, (Optr)VAR_character_0_1);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_String = new_Symbol(L"String.String");
    Annotation PAnnotation2197 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_at_put_, (Optr)SMB_String_minus_String);
    Array PArray2196 = new_Array_with(1, (Optr)PAnnotation2197);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend2199 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode2198 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2199, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod2194 = new_NativeMethod_with(PArray2195, empty_Array, PArray2196, PThreadedCode2198, 2, PSend2199, self);
    
    MethodClosure MC_SMB_at_put_ = new_MethodClosure((Method)PNativeMethod2194, String_Class);
    store_method(String_Class, SMB_at_put_, MC_SMB_at_put_);
}


static void init_SMB_skipDelimiters_startingAt_() {
    Symbol SMB_skipDelimiters_startingAt_ = new_Symbol(L"skipDelimiters:startingAt:");
    Variable VAR_delimiters_0_0 = new_Variable_named(L"delimiters", 0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Array PArray2201 = new_Array_with(2, (Optr)VAR_delimiters_0_0, (Optr)VAR_start_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2204 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend2206 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray2208 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR_delim_3_0 = new_Variable_named(L"delim", 3);
    Array PArray2211 = new_Array_with(1, (Optr)VAR_delim_3_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend2213 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend2214 = new_Send((Optr)VAR_delim_3_0, SMB__equals_, 1, (Optr)PSend2213);
    Array PThreadedCode2212 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_delim_3_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend2213, (Optr)&t_send1, (Optr)PSend2214, (Optr)&t_method_return);
    Block PBlock2210 = new_Block_with(PArray2211, empty_Array, PThreadedCode2212, 1, PSend2214);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend2217 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_i_2_0);
    Array PThreadedCode2216 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend2217, (Optr)&t_block_return);
    Block PBlock2215 = new_Block_with(empty_Array, empty_Array, PThreadedCode2216, 1, PSend2217);
    Symbol SMB_detect_ifNone_ = new_Symbol(L"detect:ifNone:");
    // detect:ifNone:. 
    Send PSend2218 = new_Send((Optr)VAR_delimiters_0_0, SMB_detect_ifNone_, 2, (Optr)PBlock2210, (Optr)PBlock2215);
    Array PThreadedCode2209 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_delimiters_0_0, (Optr)&t_push_closure, (Optr)PBlock2210, (Optr)&t_push_closure, (Optr)PBlock2215, (Optr)&t_send2, (Optr)PSend2218, (Optr)&t_method_return);
    Block PBlock2207 = new_Block_with(PArray2208, empty_Array, PThreadedCode2209, 1, PSend2218);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend2219 = new_Send((Optr)VAR_start_0_1, SMB_to_do_, 2, (Optr)PSend2206, (Optr)PBlock2207);
    // size. 
    Send PSend2220 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend2221 = new_Send((Optr)PSend2220, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode2205 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2206, (Optr)&t_push_closure, (Optr)PBlock2207, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend2219, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2220, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend2221, (Optr)&t_method_return);
    Block PBlock2203 = new_Block_with(PArray2204, empty_Array, PThreadedCode2205, 2, PSend2219, PSend2221);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2222 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2203);
    Array PThreadedCode2202 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2203, (Optr)&t_send1, (Optr)PSend2222, (Optr)&t_method_return);
    Method PMethod2200 = new_Method_with(PArray2201, empty_Array, empty_Array, PThreadedCode2202, 1, PSend2222);
    
    MethodClosure MC_SMB_skipDelimiters_startingAt_ = new_MethodClosure((Method)PMethod2200, String_Class);
    store_method(String_Class, SMB_skipDelimiters_startingAt_, MC_SMB_skipDelimiters_startingAt_);
}


static void init_SMB_join_() {
    Symbol SMB_join_ = new_Symbol(L"join:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray2224 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_stream_1_0 = new_Variable_named(L"stream", 1);
    Array PArray2227 = new_Array_with(1, (Optr)VAR_stream_1_0);
    Variable VAR_each_2_0 = new_Variable_named(L"each", 2);
    Array PArray2230 = new_Array_with(1, (Optr)VAR_each_2_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend2232 = new_Send((Optr)VAR_each_2_0, SMB_asString, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend2233 = new_Send((Optr)VAR_stream_1_0, SMB__shiftLeft_, 1, (Optr)PSend2232);
    Array PThreadedCode2231 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_stream_1_0, (Optr)&t_push_variable, (Optr)VAR_each_2_0, (Optr)&t_send0, (Optr)PSend2232, (Optr)&t_send1, (Optr)PSend2233, (Optr)&t_method_return);
    Block PBlock2229 = new_Block_with(PArray2230, empty_Array, PThreadedCode2231, 1, PSend2233);
    // <<. 
    Send PSend2236 = new_Send((Optr)VAR_stream_1_0, SMB__shiftLeft_, 1, (Optr)self);
    Array PThreadedCode2235 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_stream_1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2236, (Optr)&t_block_return);
    Block PBlock2234 = new_Block_with(empty_Array, empty_Array, PThreadedCode2235, 1, PSend2236);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend2237 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_separatedBy_, 2, (Optr)PBlock2229, (Optr)PBlock2234);
    Array PThreadedCode2228 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock2229, (Optr)&t_push_closure, (Optr)PBlock2234, (Optr)&t_send2, (Optr)PSend2237, (Optr)&t_method_return);
    Block PBlock2226 = new_Block_with(PArray2227, empty_Array, PThreadedCode2228, 1, PSend2237);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend2238 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock2226);
    Array PThreadedCode2225 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock2226, (Optr)&t_send1, (Optr)PSend2238, (Optr)&t_method_return);
    Method PMethod2223 = new_Method_with(PArray2224, empty_Array, empty_Array, PThreadedCode2225, 1, PSend2238);
    
    MethodClosure MC_SMB_join_ = new_MethodClosure((Method)PMethod2223, String_Class);
    store_method(String_Class, SMB_join_, MC_SMB_join_);
}


static void init_SMB_asPEGChoice() {
    Symbol SMB_asPEGChoice = new_Symbol(L"asPEGChoice");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2241 = new_Send((Optr)PEGTerminalChoice_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode2240 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGTerminalChoice_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2241, (Optr)&t_method_return);
    Method PMethod2239 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2240, 1, PSend2241);
    
    MethodClosure MC_SMB_asPEGChoice = new_MethodClosure((Method)PMethod2239, String_Class);
    store_method(String_Class, SMB_asPEGChoice, MC_SMB_asPEGChoice);
}


static void init_SMB_replaceFrom_to_with_startingAt_() {
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    Variable VAR_start_0_0 = new_Variable_named(L"start", 0);
    Variable VAR_stop_0_1 = new_Variable_named(L"stop", 0);
    Variable VAR_replacement_0_2 = new_Variable_named(L"replacement", 0);
    Variable VAR_repStart_0_3 = new_Variable_named(L"repStart", 0);
    Array PArray2243 = new_Array_with(4, (Optr)VAR_start_0_0, (Optr)VAR_stop_0_1, (Optr)VAR_replacement_0_2, (Optr)VAR_repStart_0_3);
    Variable VAR_index_0_4 = new_Variable_named(L"index", 0);
    Variable VAR_repOff_0_5 = new_Variable_named(L"repOff", 0);
    Array PArray2244 = new_Array_with(2, (Optr)VAR_index_0_4, (Optr)VAR_repOff_0_5);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend2247 = new_Send((Optr)VAR_repStart_0_3, SMB__minus_, 1, (Optr)VAR_start_0_0);
    Assign PAssign2246 = new_Assign((Optr)VAR_repOff_0_5, (Optr)PSend2247);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend2249 = new_Send((Optr)VAR_start_0_0, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign2248 = new_Assign((Optr)VAR_index_0_4, (Optr)PSend2249);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend2253 = new_Send((Optr)VAR_index_0_4, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign2252 = new_Assign((Optr)VAR_index_0_4, (Optr)PSend2253);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend2254 = new_Send((Optr)PAssign2252, SMB__lt__equals_, 1, (Optr)VAR_stop_0_1);
    Array PThreadedCode2251 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign2252, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend2253, (Optr)&t_assign, (Optr)&t_push_variable, (Optr)VAR_stop_0_1, (Optr)&t_send1, (Optr)PSend2254, (Optr)&t_block_return);
    Block PBlock2250 = new_Block_with(empty_Array, empty_Array, PThreadedCode2251, 1, PSend2254);
    // +. 
    Send PSend2257 = new_Send((Optr)VAR_repOff_0_5, SMB__plus_, 1, (Optr)VAR_index_0_4);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend2258 = new_Send((Optr)VAR_replacement_0_2, SMB_at_, 1, (Optr)PSend2257);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend2259 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)VAR_index_0_4, (Optr)PSend2258);
    Array PThreadedCode2256 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_variable, (Optr)VAR_replacement_0_2, (Optr)&t_push_variable, (Optr)VAR_repOff_0_5, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_send1, (Optr)PSend2257, (Optr)&t_send1, (Optr)PSend2258, (Optr)&t_send2, (Optr)PSend2259, (Optr)&t_block_return);
    Block PBlock2255 = new_Block_with(empty_Array, empty_Array, PThreadedCode2256, 1, PSend2259);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend2260 = new_Send((Optr)PBlock2250, SMB_whileTrue_, 1, (Optr)PBlock2255);
    Array PThreadedCode2245 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign2246, (Optr)&t_push_variable, (Optr)VAR_repStart_0_3, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_send1, (Optr)PSend2247, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign2248, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend2249, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock2250, (Optr)&t_push_closure, (Optr)PBlock2255, (Optr)&t_send1, (Optr)PSend2260, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod2242 = new_Method_with(PArray2243, PArray2244, empty_Array, PThreadedCode2245, 4, PAssign2246, PAssign2248, PSend2260, self);
    
    MethodClosure MC_SMB_replaceFrom_to_with_startingAt_ = new_MethodClosure((Method)PMethod2242, String_Class);
    store_method(String_Class, SMB_replaceFrom_to_with_startingAt_, MC_SMB_replaceFrom_to_with_startingAt_);
}


static void init_SMB_isString() {
    Symbol SMB_isString = new_Symbol(L"isString");
    Array PThreadedCode2262 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod2261 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2262, 1, true_Const);
    
    MethodClosure MC_SMB_isString = new_MethodClosure((Method)PMethod2261, String_Class);
    store_method(String_Class, SMB_isString, MC_SMB_isString);
}


static void init_SMB_capitalized() {
    Symbol SMB_capitalized = new_Symbol(L"capitalized");
    Variable VAR_cap_0_0 = new_Variable_named(L"cap", 0);
    Array PArray2264 = new_Array_with(1, (Optr)VAR_cap_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2267 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend2269 = new_Send((Optr)self, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_copy = new_Symbol(L"copy");
    // copy. 
    Send PSend2273 = new_Send((Optr)self, SMB_copy, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend2274 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend2273);
    Array PThreadedCode2272 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2273, (Optr)&t_send1, (Optr)PSend2274, (Optr)&t_block_return);
    Block PBlock2271 = new_Block_with(empty_Array, empty_Array, PThreadedCode2272, 1, PSend2274);
    // ifTrue:. 
    Send PSend2270 = new_Send((Optr)PSend2269, SMB_ifTrue_, 1, (Optr)PBlock2271);
    // copy. 
    Send PSend2276 = new_Send((Optr)self, SMB_copy, 0);
    Assign PAssign2275 = new_Assign((Optr)VAR_cap_0_0, (Optr)PSend2276);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend2277 = new_Send((Optr)VAR_cap_0_0, SMB_at_, 1, (Optr)int_1_Const);
    Symbol SMB_asUppercase = new_Symbol(L"asUppercase");
    // asUppercase. 
    Send PSend2278 = new_Send((Optr)PSend2277, SMB_asUppercase, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend2279 = new_Send((Optr)VAR_cap_0_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend2278);
    Array PThreadedCode2268 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2269, (Optr)&t_send_ifTrue_, (Optr)PSend2270, (Optr)PBlock2271, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign2275, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2276, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend2277, (Optr)&t_send0, (Optr)PSend2278, (Optr)&t_send2, (Optr)PSend2279, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_cap_0_0, (Optr)&t_method_return);
    Block PBlock2266 = new_Block_with(PArray2267, empty_Array, PThreadedCode2268, 4, PSend2270, PAssign2275, PSend2279, VAR_cap_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2280 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2266);
    Array PThreadedCode2265 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2266, (Optr)&t_send1, (Optr)PSend2280, (Optr)&t_method_return);
    Method PMethod2263 = new_Method_with(empty_Array, PArray2264, empty_Array, PThreadedCode2265, 1, PSend2280);
    
    MethodClosure MC_SMB_capitalized = new_MethodClosure((Method)PMethod2263, String_Class);
    store_method(String_Class, SMB_capitalized, MC_SMB_capitalized);
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