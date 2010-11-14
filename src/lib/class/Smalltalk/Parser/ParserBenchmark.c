#include <lib/class/Smalltalk/Parser/ParserBenchmark.h>


Optr layout_Smalltalk_Parser_ParserBenchmark_Class_class;
Optr slot_Smalltalk_Parser_ParserBenchmark_methodParser;
Optr slot_Smalltalk_Parser_ParserBenchmark_parser;
Optr layout_Smalltalk_Parser_ParserBenchmark;


static void init_SMB_benchBlockWithArgAndBody() {
    Symbol SMB_benchBlockWithArgAndBody = new_Symbol(L"benchBlockWithArgAndBody");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14285 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14289 = new_String(L"a\n\t\t^ [ :a| a]");
    Constant string_14289_Const = new_Constant((Optr)string_14289);
    // on:. 
    Send PSend14288 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14289_Const);
    Assign PAssign14287 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14288);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14290 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14293 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14294 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14292 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14293, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14294, (Optr)&t_block_return);
    Block PBlock14291 = new_Block_with(empty_Array, empty_Array, PThreadedCode14292, 2, PSend14293, PSend14294);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14295 = new_Send((Optr)PSend14290, SMB_timesRepeat_, 1, (Optr)PBlock14291);
    Array PThreadedCode14286 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14287, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14289, (Optr)&t_send1, (Optr)PSend14288, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14290, (Optr)&t_push_closure, (Optr)PBlock14291, (Optr)&t_send1, (Optr)PSend14295, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14284 = new_Method_with(empty_Array, PArray14285, empty_Array, PThreadedCode14286, 3, PAssign14287, PSend14295, self);
    
    MethodClosure MC_SMB_benchBlockWithArgAndBody = new_MethodClosure((Method)PMethod14284, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchBlockWithArgAndBody, MC_SMB_benchBlockWithArgAndBody);
}


static void init_SMB_benchBlock() {
    Symbol SMB_benchBlock = new_Symbol(L"benchBlock");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14297 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14301 = new_String(L"a\n\t\t^ []");
    Constant string_14301_Const = new_Constant((Optr)string_14301);
    // on:. 
    Send PSend14300 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14301_Const);
    Assign PAssign14299 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14300);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14302 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14305 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14306 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14304 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14305, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14306, (Optr)&t_block_return);
    Block PBlock14303 = new_Block_with(empty_Array, empty_Array, PThreadedCode14304, 2, PSend14305, PSend14306);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14307 = new_Send((Optr)PSend14302, SMB_timesRepeat_, 1, (Optr)PBlock14303);
    Array PThreadedCode14298 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14299, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14301, (Optr)&t_send1, (Optr)PSend14300, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14302, (Optr)&t_push_closure, (Optr)PBlock14303, (Optr)&t_send1, (Optr)PSend14307, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14296 = new_Method_with(empty_Array, PArray14297, empty_Array, PThreadedCode14298, 3, PAssign14299, PSend14307, self);
    
    MethodClosure MC_SMB_benchBlock = new_MethodClosure((Method)PMethod14296, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchBlock, MC_SMB_benchBlock);
}


static void init_SMB_benchString() {
    Symbol SMB_benchString = new_Symbol(L"benchString");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14309 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14313 = new_String(L"a\n\t^ 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789'");
    Constant string_14313_Const = new_Constant((Optr)string_14313);
    // on:. 
    Send PSend14312 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14313_Const);
    Assign PAssign14311 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14312);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14314 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14317 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14318 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14316 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14317, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14318, (Optr)&t_block_return);
    Block PBlock14315 = new_Block_with(empty_Array, empty_Array, PThreadedCode14316, 2, PSend14317, PSend14318);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14319 = new_Send((Optr)PSend14314, SMB_timesRepeat_, 1, (Optr)PBlock14315);
    Array PThreadedCode14310 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14311, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14313, (Optr)&t_send1, (Optr)PSend14312, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14314, (Optr)&t_push_closure, (Optr)PBlock14315, (Optr)&t_send1, (Optr)PSend14319, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14308 = new_Method_with(empty_Array, PArray14309, empty_Array, PThreadedCode14310, 3, PAssign14311, PSend14319, self);
    
    MethodClosure MC_SMB_benchString = new_MethodClosure((Method)PMethod14308, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchString, MC_SMB_benchString);
}


static void init_SMB_repetitionCount() {
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    SmallInt int_300 = new_SmallInt(300);
    Array PThreadedCode14321 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_300, (Optr)&t_method_return);
    Constant int_300_Const = new_Constant((Optr)int_300);
    Method PMethod14320 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14321, 1, int_300_Const);
    
    MethodClosure MC_SMB_repetitionCount = new_MethodClosure((Method)PMethod14320, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_repetitionCount, MC_SMB_repetitionCount);
}


static void init_SMB_benchAnnotation() {
    Symbol SMB_benchAnnotation = new_Symbol(L"benchAnnotation");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14323 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14327 = new_String(L"a\n\t\t<abcdefghil>");
    Constant string_14327_Const = new_Constant((Optr)string_14327);
    // on:. 
    Send PSend14326 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14327_Const);
    Assign PAssign14325 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14326);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14328 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14331 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14332 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14330 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14331, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14332, (Optr)&t_block_return);
    Block PBlock14329 = new_Block_with(empty_Array, empty_Array, PThreadedCode14330, 2, PSend14331, PSend14332);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14333 = new_Send((Optr)PSend14328, SMB_timesRepeat_, 1, (Optr)PBlock14329);
    Array PThreadedCode14324 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14325, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14327, (Optr)&t_send1, (Optr)PSend14326, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14328, (Optr)&t_push_closure, (Optr)PBlock14329, (Optr)&t_send1, (Optr)PSend14333, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14322 = new_Method_with(empty_Array, PArray14323, empty_Array, PThreadedCode14324, 3, PAssign14325, PSend14333, self);
    
    MethodClosure MC_SMB_benchAnnotation = new_MethodClosure((Method)PMethod14322, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchAnnotation, MC_SMB_benchAnnotation);
}


static void init_SMB_benchLongMethod() {
    Symbol SMB_benchLongMethod = new_Symbol(L"benchLongMethod");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14335 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14339 = new_String(L"initialize \n\t|c key bucketIndex values index internalConstantCode custom1 custom2 custom3 custom4 custom5 custom6 custom7 custom8 custom9|\n\tinternalConstantCode := PDictionary new.\n\tinternalConstantCode at: false put: #pushfalse.\n\tinternalConstantCode at: true put: #pushtrue.\n\tinternalConstantCode at: nil put: #pushnil.\n\tinternalConstantCode at: 0 put: #push0.\n\tinternalConstantCode at: 1 put: #push1.\n\tinternalConstantCode at: 2 put: #push2.\n\tvalues := Array new: size.\n\tindex := 0.\n\tself do: [ :value | values at: (index := index + 1) put: value ].\n\tvalues := Array new: size.\n\tindex := 0.\n\tself do: [ :value | values at: (index := index + 1) put: value ].\n\tc := 1.\n\tbuckets at: index put: bucket.\n\t[ c <= bucket bucketSize ] whileTrue: [ \n\t\t\tkey := bucket at: c.\n\t\t\tbucketIndex := key hash \\\\ buckets size + 1.\n\t\t\tbucketIndex = index\n\t\t\t\tifTrue: [ c := c + 2 ]\n\t\t\t\tifFalse: [ \n\t\t\t\t\t(self bucketWithRoomAt: bucketIndex) newKey: key value: (bucket at: c + 1).\n\t\t\t\t\tbucket removeAt: c ] ]\n\t");
    Constant string_14339_Const = new_Constant((Optr)string_14339);
    // on:. 
    Send PSend14338 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14339_Const);
    Assign PAssign14337 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14338);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14340 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    // parse:. 
    Send PSend14343 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_parse_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14344 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14342 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14343, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14344, (Optr)&t_block_return);
    Block PBlock14341 = new_Block_with(empty_Array, empty_Array, PThreadedCode14342, 2, PSend14343, PSend14344);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14345 = new_Send((Optr)PSend14340, SMB_timesRepeat_, 1, (Optr)PBlock14341);
    Array PThreadedCode14336 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14337, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14339, (Optr)&t_send1, (Optr)PSend14338, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14340, (Optr)&t_push_closure, (Optr)PBlock14341, (Optr)&t_send1, (Optr)PSend14345, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14334 = new_Method_with(empty_Array, PArray14335, empty_Array, PThreadedCode14336, 3, PAssign14337, PSend14345, self);
    
    MethodClosure MC_SMB_benchLongMethod = new_MethodClosure((Method)PMethod14334, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchLongMethod, MC_SMB_benchLongMethod);
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14349 = new_Send((Optr)PSmalltalkParser_classReference, SMB_new, 0);
    Assign PAssign14348 = new_Assign((Optr)slot_Smalltalk_Parser_ParserBenchmark_parser, (Optr)PSend14349);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend14351 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_parser, SMB_method, 0);
    Assign PAssign14350 = new_Assign((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)PSend14351);
    Array PThreadedCode14347 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign14348, (Optr)&t_push_class_reference, (Optr)PSmalltalkParser_classReference, (Optr)&t_send0, (Optr)PSend14349, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14350, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_parser, (Optr)&t_send0, (Optr)PSend14351, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14346 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14347, 3, PAssign14348, PAssign14350, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod14346, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_SMB_benchSymbol() {
    Symbol SMB_benchSymbol = new_Symbol(L"benchSymbol");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14353 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14357 = new_String(L"a\n\t^ #abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
    Constant string_14357_Const = new_Constant((Optr)string_14357);
    // on:. 
    Send PSend14356 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14357_Const);
    Assign PAssign14355 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14356);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14358 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14361 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14362 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14360 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14361, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14362, (Optr)&t_block_return);
    Block PBlock14359 = new_Block_with(empty_Array, empty_Array, PThreadedCode14360, 2, PSend14361, PSend14362);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14363 = new_Send((Optr)PSend14358, SMB_timesRepeat_, 1, (Optr)PBlock14359);
    Array PThreadedCode14354 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14355, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14357, (Optr)&t_send1, (Optr)PSend14356, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14358, (Optr)&t_push_closure, (Optr)PBlock14359, (Optr)&t_send1, (Optr)PSend14363, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14352 = new_Method_with(empty_Array, PArray14353, empty_Array, PThreadedCode14354, 3, PAssign14355, PSend14363, self);
    
    MethodClosure MC_SMB_benchSymbol = new_MethodClosure((Method)PMethod14352, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchSymbol, MC_SMB_benchSymbol);
}


static void init_SMB_benchSmallMethod() {
    Symbol SMB_benchSmallMethod = new_Symbol(L"benchSmallMethod");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14365 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14369 = new_String(L"a\n\t^ self");
    Constant string_14369_Const = new_Constant((Optr)string_14369);
    // on:. 
    Send PSend14368 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14369_Const);
    Assign PAssign14367 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14368);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14370 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14373 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14374 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14372 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14373, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14374, (Optr)&t_block_return);
    Block PBlock14371 = new_Block_with(empty_Array, empty_Array, PThreadedCode14372, 2, PSend14373, PSend14374);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14375 = new_Send((Optr)PSend14370, SMB_timesRepeat_, 1, (Optr)PBlock14371);
    Array PThreadedCode14366 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14367, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14369, (Optr)&t_send1, (Optr)PSend14368, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14370, (Optr)&t_push_closure, (Optr)PBlock14371, (Optr)&t_send1, (Optr)PSend14375, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14364 = new_Method_with(empty_Array, PArray14365, empty_Array, PThreadedCode14366, 3, PAssign14367, PSend14375, self);
    
    MethodClosure MC_SMB_benchSmallMethod = new_MethodClosure((Method)PMethod14364, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchSmallMethod, MC_SMB_benchSmallMethod);
}


static void init_SMB_benchBlockWithArg() {
    Symbol SMB_benchBlockWithArg = new_Symbol(L"benchBlockWithArg");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14377 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14381 = new_String(L"a\n\t\t^ [ :a| ]");
    Constant string_14381_Const = new_Constant((Optr)string_14381);
    // on:. 
    Send PSend14380 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14381_Const);
    Assign PAssign14379 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14380);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14382 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14385 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14386 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14384 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14385, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14386, (Optr)&t_block_return);
    Block PBlock14383 = new_Block_with(empty_Array, empty_Array, PThreadedCode14384, 2, PSend14385, PSend14386);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14387 = new_Send((Optr)PSend14382, SMB_timesRepeat_, 1, (Optr)PBlock14383);
    Array PThreadedCode14378 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14379, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14381, (Optr)&t_send1, (Optr)PSend14380, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14382, (Optr)&t_push_closure, (Optr)PBlock14383, (Optr)&t_send1, (Optr)PSend14387, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14376 = new_Method_with(empty_Array, PArray14377, empty_Array, PThreadedCode14378, 3, PAssign14379, PSend14387, self);
    
    MethodClosure MC_SMB_benchBlockWithArg = new_MethodClosure((Method)PMethod14376, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchBlockWithArg, MC_SMB_benchBlockWithArg);
}


static void init_SMB_benchMediumMethod() {
    Symbol SMB_benchMediumMethod = new_Symbol(L"benchMediumMethod");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14389 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14393 = new_String(L"initialize \n\tinternalConstantCode := PDictionary new.\n\tinternalConstantCode at: false put: #pushfalse.\n\tinternalConstantCode at: true put: #pushtrue.\n\tinternalConstantCode at: nil put: #pushnil.\n\tinternalConstantCode at: 0 put: #push0.\n\tinternalConstantCode at: 1 put: #push1.\n\tinternalConstantCode at: 2 put: #push2.");
    Constant string_14393_Const = new_Constant((Optr)string_14393);
    // on:. 
    Send PSend14392 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14393_Const);
    Assign PAssign14391 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14392);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14394 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14397 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14398 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14396 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14397, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14398, (Optr)&t_block_return);
    Block PBlock14395 = new_Block_with(empty_Array, empty_Array, PThreadedCode14396, 2, PSend14397, PSend14398);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14399 = new_Send((Optr)PSend14394, SMB_timesRepeat_, 1, (Optr)PBlock14395);
    Array PThreadedCode14390 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14391, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14393, (Optr)&t_send1, (Optr)PSend14392, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14394, (Optr)&t_push_closure, (Optr)PBlock14395, (Optr)&t_send1, (Optr)PSend14399, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14388 = new_Method_with(empty_Array, PArray14389, empty_Array, PThreadedCode14390, 3, PAssign14391, PSend14399, self);
    
    MethodClosure MC_SMB_benchMediumMethod = new_MethodClosure((Method)PMethod14388, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchMediumMethod, MC_SMB_benchMediumMethod);
}


static void init_SMB_benchStringNumbers() {
    Symbol SMB_benchStringNumbers = new_Symbol(L"benchStringNumbers");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14401 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14405 = new_String(L"a\n\t^ '012345689'");
    Constant string_14405_Const = new_Constant((Optr)string_14405);
    // on:. 
    Send PSend14404 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14405_Const);
    Assign PAssign14403 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14404);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14406 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14409 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14410 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14408 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14409, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14410, (Optr)&t_block_return);
    Block PBlock14407 = new_Block_with(empty_Array, empty_Array, PThreadedCode14408, 2, PSend14409, PSend14410);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14411 = new_Send((Optr)PSend14406, SMB_timesRepeat_, 1, (Optr)PBlock14407);
    Array PThreadedCode14402 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14403, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14405, (Optr)&t_send1, (Optr)PSend14404, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14406, (Optr)&t_push_closure, (Optr)PBlock14407, (Optr)&t_send1, (Optr)PSend14411, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14400 = new_Method_with(empty_Array, PArray14401, empty_Array, PThreadedCode14402, 3, PAssign14403, PSend14411, self);
    
    MethodClosure MC_SMB_benchStringNumbers = new_MethodClosure((Method)PMethod14400, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchStringNumbers, MC_SMB_benchStringNumbers);
}

void init_Smalltalk_Parser_PParserBenchmark_layout() {
    layout_Smalltalk_Parser_ParserBenchmark_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_Parser_ParserBenchmark_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_Parser_ParserBenchmark_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_Parser_ParserBenchmark_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_Parser_ParserBenchmark_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_Parser_ParserBenchmark_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_ParserBenchmark = new_Symbol(L"ParserBenchmark");
    slot_Smalltalk_Parser_ParserBenchmark_methodParser = (Optr)new_Slot(2, L"methodParser");
    slot_Smalltalk_Parser_ParserBenchmark_parser = (Optr)new_Slot(3, L"parser");
    layout_Smalltalk_Parser_ParserBenchmark = (Optr)create_layout_with_vars(ObjectLayout_Class, 4);
    ((Array)layout_Smalltalk_Parser_ParserBenchmark)->values[0] = slot_PBenchmark_AbstractBenchmark_probeCount; // probeCount 
    ((Array)layout_Smalltalk_Parser_ParserBenchmark)->values[1] = slot_PBenchmark_BenchmarkSuite_runs; // runs 
    ((Array)layout_Smalltalk_Parser_ParserBenchmark)->values[2] = slot_Smalltalk_Parser_ParserBenchmark_methodParser; // methodParser 
    ((Array)layout_Smalltalk_Parser_ParserBenchmark)->values[3] = slot_Smalltalk_Parser_ParserBenchmark_parser; // parser 
    Smalltalk_Parser_ParserBenchmark_Class = (Class)new_Class(PBenchmark_BenchmarkSuite_Class, layout_Smalltalk_Parser_ParserBenchmark_Class_class);
    Smalltalk_Parser_ParserBenchmark_Class->layout = layout_Smalltalk_Parser_ParserBenchmark;
    Smalltalk_Parser_ParserBenchmark_Class->name = SMB_ParserBenchmark;
    
}

void init_Smalltalk_Parser_PParserBenchmark_methods() {
    init_SMB_benchBlockWithArgAndBody();
    init_SMB_benchBlock();
    init_SMB_benchString();
    init_SMB_repetitionCount();
    init_SMB_benchAnnotation();
    init_SMB_benchLongMethod();
    init_SMB_setUp();
    init_SMB_benchSymbol();
    init_SMB_benchSmallMethod();
    init_SMB_benchBlockWithArg();
    init_SMB_benchMediumMethod();
    init_SMB_benchStringNumbers();
    
}