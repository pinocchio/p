#include <lib/class/Smalltalk/Parser/ParserBenchmark.h>


Optr layout_Smalltalk_Parser_ParserBenchmark_Class_class;
Optr slot_Smalltalk_Parser_ParserBenchmark_methodParser;
Optr slot_Smalltalk_Parser_ParserBenchmark_parser;
Optr layout_Smalltalk_Parser_ParserBenchmark;


static void init_SMB_benchBlockWithArgAndBody() {
    Symbol SMB_benchBlockWithArgAndBody = new_Symbol(L"benchBlockWithArgAndBody");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
<<<<<<< HEAD
    Array PArray14317 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14321 = new_String(L"initialize \n\t|c key bucketIndex values index internalConstantCode custom1 custom2 custom3 custom4 custom5 custom6 custom7 custom8 custom9|\n\tinternalConstantCode := PDictionary new.\n\tinternalConstantCode at: false put: #pushfalse.\n\tinternalConstantCode at: true put: #pushtrue.\n\tinternalConstantCode at: nil put: #pushnil.\n\tinternalConstantCode at: 0 put: #push0.\n\tinternalConstantCode at: 1 put: #push1.\n\tinternalConstantCode at: 2 put: #push2.\n\tvalues := Array new: size.\n\tindex := 0.\n\tself do: [ :value | values at: (index := index + 1) put: value ].\n\tvalues := Array new: size.\n\tindex := 0.\n\tself do: [ :value | values at: (index := index + 1) put: value ].\n\tc := 1.\n\tbuckets at: index put: bucket.\n\t[ c <= bucket bucketSize ] whileTrue: [ \n\t\t\tkey := bucket at: c.\n\t\t\tbucketIndex := key hash \\\\ buckets size + 1.\n\t\t\tbucketIndex = index\n\t\t\t\tifTrue: [ c := c + 2 ]\n\t\t\t\tifFalse: [ \n\t\t\t\t\t(self bucketWithRoomAt: bucketIndex) newKey: key value: (bucket at: c + 1).\n\t\t\t\t\tbucket removeAt: c ] ]\n\t");
    Constant string_14321_Const = new_Constant((Optr)string_14321);
    // on:. 
    Send PSend14320 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14321_Const);
    Assign PAssign14319 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14320);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14322 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    // parse:. 
    Send PSend14325 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_parse_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14326 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14324 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14325, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14326, (Optr)&t_block_return);
    Block PBlock14323 = new_Block_with(empty_Array, empty_Array, PThreadedCode14324, 2, PSend14325, PSend14326);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14327 = new_Send((Optr)PSend14322, SMB_timesRepeat_, 1, (Optr)PBlock14323);
    Array PThreadedCode14318 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14319, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14321, (Optr)&t_send1, (Optr)PSend14320, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14322, (Optr)&t_push_closure, (Optr)PBlock14323, (Optr)&t_send1, (Optr)PSend14327, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14316 = new_Method_with(empty_Array, PArray14317, empty_Array, PThreadedCode14318, 3, PAssign14319, PSend14327, self);
    
    MethodClosure MC_SMB_benchLongMethod = new_MethodClosure((Method)PMethod14316, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchLongMethod, MC_SMB_benchLongMethod);
=======
    Array PArray14283 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14287 = new_String(L"a\n\t\t^ [ :a| a]");
    Constant string_14287_Const = new_Constant((Optr)string_14287);
    // on:. 
    Send PSend14286 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14287_Const);
    Assign PAssign14285 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14286);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14288 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14291 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14292 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14290 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14291, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14292, (Optr)&t_block_return);
    Block PBlock14289 = new_Block_with(empty_Array, empty_Array, PThreadedCode14290, 2, PSend14291, PSend14292);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14293 = new_Send((Optr)PSend14288, SMB_timesRepeat_, 1, (Optr)PBlock14289);
    Array PThreadedCode14284 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14285, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14287, (Optr)&t_send1, (Optr)PSend14286, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14288, (Optr)&t_push_closure, (Optr)PBlock14289, (Optr)&t_send1, (Optr)PSend14293, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14282 = new_Method_with(empty_Array, PArray14283, empty_Array, PThreadedCode14284, 3, PAssign14285, PSend14293, self);
    
    MethodClosure MC_SMB_benchBlockWithArgAndBody = new_MethodClosure((Method)PMethod14282, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchBlockWithArgAndBody, MC_SMB_benchBlockWithArgAndBody);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
}


static void init_SMB_benchBlock() {
    Symbol SMB_benchBlock = new_Symbol(L"benchBlock");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
<<<<<<< HEAD
    Array PArray14329 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14333 = new_String(L"a\n\t^ 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789'");
    Constant string_14333_Const = new_Constant((Optr)string_14333);
    // on:. 
    Send PSend14332 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14333_Const);
    Assign PAssign14331 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14332);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14334 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14337 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14338 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14336 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14337, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14338, (Optr)&t_block_return);
    Block PBlock14335 = new_Block_with(empty_Array, empty_Array, PThreadedCode14336, 2, PSend14337, PSend14338);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14339 = new_Send((Optr)PSend14334, SMB_timesRepeat_, 1, (Optr)PBlock14335);
    Array PThreadedCode14330 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14331, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14333, (Optr)&t_send1, (Optr)PSend14332, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14334, (Optr)&t_push_closure, (Optr)PBlock14335, (Optr)&t_send1, (Optr)PSend14339, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14328 = new_Method_with(empty_Array, PArray14329, empty_Array, PThreadedCode14330, 3, PAssign14331, PSend14339, self);
    
    MethodClosure MC_SMB_benchString = new_MethodClosure((Method)PMethod14328, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchString, MC_SMB_benchString);
=======
    Array PArray14295 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14299 = new_String(L"a\n\t\t^ []");
    Constant string_14299_Const = new_Constant((Optr)string_14299);
    // on:. 
    Send PSend14298 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14299_Const);
    Assign PAssign14297 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14298);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14300 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14303 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14304 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14302 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14303, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14304, (Optr)&t_block_return);
    Block PBlock14301 = new_Block_with(empty_Array, empty_Array, PThreadedCode14302, 2, PSend14303, PSend14304);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14305 = new_Send((Optr)PSend14300, SMB_timesRepeat_, 1, (Optr)PBlock14301);
    Array PThreadedCode14296 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14297, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14299, (Optr)&t_send1, (Optr)PSend14298, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14300, (Optr)&t_push_closure, (Optr)PBlock14301, (Optr)&t_send1, (Optr)PSend14305, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14294 = new_Method_with(empty_Array, PArray14295, empty_Array, PThreadedCode14296, 3, PAssign14297, PSend14305, self);
    
    MethodClosure MC_SMB_benchBlock = new_MethodClosure((Method)PMethod14294, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchBlock, MC_SMB_benchBlock);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
}


static void init_SMB_benchString() {
    Symbol SMB_benchString = new_Symbol(L"benchString");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
<<<<<<< HEAD
    Array PArray14341 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14345 = new_String(L"initialize \n\tinternalConstantCode := PDictionary new.\n\tinternalConstantCode at: false put: #pushfalse.\n\tinternalConstantCode at: true put: #pushtrue.\n\tinternalConstantCode at: nil put: #pushnil.\n\tinternalConstantCode at: 0 put: #push0.\n\tinternalConstantCode at: 1 put: #push1.\n\tinternalConstantCode at: 2 put: #push2.");
    Constant string_14345_Const = new_Constant((Optr)string_14345);
    // on:. 
    Send PSend14344 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14345_Const);
    Assign PAssign14343 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14344);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14346 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14349 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14350 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14348 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14349, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14350, (Optr)&t_block_return);
    Block PBlock14347 = new_Block_with(empty_Array, empty_Array, PThreadedCode14348, 2, PSend14349, PSend14350);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14351 = new_Send((Optr)PSend14346, SMB_timesRepeat_, 1, (Optr)PBlock14347);
    Array PThreadedCode14342 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14343, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14345, (Optr)&t_send1, (Optr)PSend14344, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14346, (Optr)&t_push_closure, (Optr)PBlock14347, (Optr)&t_send1, (Optr)PSend14351, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14340 = new_Method_with(empty_Array, PArray14341, empty_Array, PThreadedCode14342, 3, PAssign14343, PSend14351, self);
    
    MethodClosure MC_SMB_benchMediumMethod = new_MethodClosure((Method)PMethod14340, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchMediumMethod, MC_SMB_benchMediumMethod);
}


static void init_SMB_benchAnnotation() {
    Symbol SMB_benchAnnotation = new_Symbol(L"benchAnnotation");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14353 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14357 = new_String(L"a\n\t\t<abcdefghil>");
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
    
    MethodClosure MC_SMB_benchAnnotation = new_MethodClosure((Method)PMethod14352, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchAnnotation, MC_SMB_benchAnnotation);
=======
    Array PArray14307 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14311 = new_String(L"a\n\t^ 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789'");
    Constant string_14311_Const = new_Constant((Optr)string_14311);
    // on:. 
    Send PSend14310 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14311_Const);
    Assign PAssign14309 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14310);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14312 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14315 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14316 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14314 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14315, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14316, (Optr)&t_block_return);
    Block PBlock14313 = new_Block_with(empty_Array, empty_Array, PThreadedCode14314, 2, PSend14315, PSend14316);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14317 = new_Send((Optr)PSend14312, SMB_timesRepeat_, 1, (Optr)PBlock14313);
    Array PThreadedCode14308 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14309, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14311, (Optr)&t_send1, (Optr)PSend14310, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14312, (Optr)&t_push_closure, (Optr)PBlock14313, (Optr)&t_send1, (Optr)PSend14317, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14306 = new_Method_with(empty_Array, PArray14307, empty_Array, PThreadedCode14308, 3, PAssign14309, PSend14317, self);
    
    MethodClosure MC_SMB_benchString = new_MethodClosure((Method)PMethod14306, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchString, MC_SMB_benchString);
}


static void init_SMB_repetitionCount() {
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    SmallInt int_300 = new_SmallInt(300);
    Array PThreadedCode14319 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_300, (Optr)&t_method_return);
    Constant int_300_Const = new_Constant((Optr)int_300);
    Method PMethod14318 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14319, 1, int_300_Const);
    
    MethodClosure MC_SMB_repetitionCount = new_MethodClosure((Method)PMethod14318, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_repetitionCount, MC_SMB_repetitionCount);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
}


static void init_SMB_benchAnnotation() {
    Symbol SMB_benchAnnotation = new_Symbol(L"benchAnnotation");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
<<<<<<< HEAD
    Array PArray14365 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14369 = new_String(L"a\n\t\t^ [ :a| ]");
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
    
    MethodClosure MC_SMB_benchBlockWithArg = new_MethodClosure((Method)PMethod14364, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchBlockWithArg, MC_SMB_benchBlockWithArg);
=======
    Array PArray14321 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14325 = new_String(L"a\n\t\t<abcdefghil>");
    Constant string_14325_Const = new_Constant((Optr)string_14325);
    // on:. 
    Send PSend14324 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14325_Const);
    Assign PAssign14323 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14324);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14326 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14329 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14330 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14328 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14329, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14330, (Optr)&t_block_return);
    Block PBlock14327 = new_Block_with(empty_Array, empty_Array, PThreadedCode14328, 2, PSend14329, PSend14330);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14331 = new_Send((Optr)PSend14326, SMB_timesRepeat_, 1, (Optr)PBlock14327);
    Array PThreadedCode14322 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14323, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14325, (Optr)&t_send1, (Optr)PSend14324, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14326, (Optr)&t_push_closure, (Optr)PBlock14327, (Optr)&t_send1, (Optr)PSend14331, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14320 = new_Method_with(empty_Array, PArray14321, empty_Array, PThreadedCode14322, 3, PAssign14323, PSend14331, self);
    
    MethodClosure MC_SMB_benchAnnotation = new_MethodClosure((Method)PMethod14320, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchAnnotation, MC_SMB_benchAnnotation);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
}


static void init_SMB_benchLongMethod() {
    Symbol SMB_benchLongMethod = new_Symbol(L"benchLongMethod");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
<<<<<<< HEAD
    Array PArray14377 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14381 = new_String(L"a\n\t^ self");
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
    
    MethodClosure MC_SMB_benchSmallMethod = new_MethodClosure((Method)PMethod14376, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchSmallMethod, MC_SMB_benchSmallMethod);
=======
    Array PArray14333 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14337 = new_String(L"initialize \n\t|c key bucketIndex values index internalConstantCode custom1 custom2 custom3 custom4 custom5 custom6 custom7 custom8 custom9|\n\tinternalConstantCode := PDictionary new.\n\tinternalConstantCode at: false put: #pushfalse.\n\tinternalConstantCode at: true put: #pushtrue.\n\tinternalConstantCode at: nil put: #pushnil.\n\tinternalConstantCode at: 0 put: #push0.\n\tinternalConstantCode at: 1 put: #push1.\n\tinternalConstantCode at: 2 put: #push2.\n\tvalues := Array new: size.\n\tindex := 0.\n\tself do: [ :value | values at: (index := index + 1) put: value ].\n\tvalues := Array new: size.\n\tindex := 0.\n\tself do: [ :value | values at: (index := index + 1) put: value ].\n\tc := 1.\n\tbuckets at: index put: bucket.\n\t[ c <= bucket bucketSize ] whileTrue: [ \n\t\t\tkey := bucket at: c.\n\t\t\tbucketIndex := key hash \\\\ buckets size + 1.\n\t\t\tbucketIndex = index\n\t\t\t\tifTrue: [ c := c + 2 ]\n\t\t\t\tifFalse: [ \n\t\t\t\t\t(self bucketWithRoomAt: bucketIndex) newKey: key value: (bucket at: c + 1).\n\t\t\t\t\tbucket removeAt: c ] ]\n\t");
    Constant string_14337_Const = new_Constant((Optr)string_14337);
    // on:. 
    Send PSend14336 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14337_Const);
    Assign PAssign14335 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14336);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14338 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    // parse:. 
    Send PSend14341 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_parse_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14342 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14340 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14341, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14342, (Optr)&t_block_return);
    Block PBlock14339 = new_Block_with(empty_Array, empty_Array, PThreadedCode14340, 2, PSend14341, PSend14342);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14343 = new_Send((Optr)PSend14338, SMB_timesRepeat_, 1, (Optr)PBlock14339);
    Array PThreadedCode14334 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14335, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14337, (Optr)&t_send1, (Optr)PSend14336, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14338, (Optr)&t_push_closure, (Optr)PBlock14339, (Optr)&t_send1, (Optr)PSend14343, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14332 = new_Method_with(empty_Array, PArray14333, empty_Array, PThreadedCode14334, 3, PAssign14335, PSend14343, self);
    
    MethodClosure MC_SMB_benchLongMethod = new_MethodClosure((Method)PMethod14332, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchLongMethod, MC_SMB_benchLongMethod);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
<<<<<<< HEAD
    Send PSend14391 = new_Send((Optr)PSmalltalkParser_classReference, SMB_new, 0);
    Assign PAssign14390 = new_Assign((Optr)slot_Smalltalk_Parser_ParserBenchmark_parser, (Optr)PSend14391);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend14393 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_parser, SMB_method, 0);
    Assign PAssign14392 = new_Assign((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)PSend14393);
    Array PThreadedCode14389 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign14390, (Optr)&t_push_class_reference, (Optr)PSmalltalkParser_classReference, (Optr)&t_send0, (Optr)PSend14391, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14392, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_parser, (Optr)&t_send0, (Optr)PSend14393, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14388 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14389, 3, PAssign14390, PAssign14392, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod14388, Smalltalk_Parser_ParserBenchmark_Class);
=======
    Send PSend14347 = new_Send((Optr)PSmalltalkParser_classReference, SMB_new, 0);
    Assign PAssign14346 = new_Assign((Optr)slot_Smalltalk_Parser_ParserBenchmark_parser, (Optr)PSend14347);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend14349 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_parser, SMB_method, 0);
    Assign PAssign14348 = new_Assign((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)PSend14349);
    Array PThreadedCode14345 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign14346, (Optr)&t_push_class_reference, (Optr)PSmalltalkParser_classReference, (Optr)&t_send0, (Optr)PSend14347, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14348, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_parser, (Optr)&t_send0, (Optr)PSend14349, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14344 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14345, 3, PAssign14346, PAssign14348, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod14344, Smalltalk_Parser_ParserBenchmark_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_SMB_benchSymbol() {
    Symbol SMB_benchSymbol = new_Symbol(L"benchSymbol");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
<<<<<<< HEAD
    Array PArray14395 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14399 = new_String(L"a\n\t\t^ []");
    Constant string_14399_Const = new_Constant((Optr)string_14399);
    // on:. 
    Send PSend14398 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14399_Const);
    Assign PAssign14397 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14398);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14400 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14403 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14404 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14402 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14403, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14404, (Optr)&t_block_return);
    Block PBlock14401 = new_Block_with(empty_Array, empty_Array, PThreadedCode14402, 2, PSend14403, PSend14404);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14405 = new_Send((Optr)PSend14400, SMB_timesRepeat_, 1, (Optr)PBlock14401);
    Array PThreadedCode14396 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14397, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14399, (Optr)&t_send1, (Optr)PSend14398, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14400, (Optr)&t_push_closure, (Optr)PBlock14401, (Optr)&t_send1, (Optr)PSend14405, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14394 = new_Method_with(empty_Array, PArray14395, empty_Array, PThreadedCode14396, 3, PAssign14397, PSend14405, self);
    
    MethodClosure MC_SMB_benchBlock = new_MethodClosure((Method)PMethod14394, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchBlock, MC_SMB_benchBlock);
=======
    Array PArray14351 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14355 = new_String(L"a\n\t^ #abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
    Constant string_14355_Const = new_Constant((Optr)string_14355);
    // on:. 
    Send PSend14354 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14355_Const);
    Assign PAssign14353 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14354);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14356 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14359 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14360 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14358 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14359, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14360, (Optr)&t_block_return);
    Block PBlock14357 = new_Block_with(empty_Array, empty_Array, PThreadedCode14358, 2, PSend14359, PSend14360);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14361 = new_Send((Optr)PSend14356, SMB_timesRepeat_, 1, (Optr)PBlock14357);
    Array PThreadedCode14352 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14353, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14355, (Optr)&t_send1, (Optr)PSend14354, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14356, (Optr)&t_push_closure, (Optr)PBlock14357, (Optr)&t_send1, (Optr)PSend14361, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14350 = new_Method_with(empty_Array, PArray14351, empty_Array, PThreadedCode14352, 3, PAssign14353, PSend14361, self);
    
    MethodClosure MC_SMB_benchSymbol = new_MethodClosure((Method)PMethod14350, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchSymbol, MC_SMB_benchSymbol);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
}


static void init_SMB_benchSmallMethod() {
    Symbol SMB_benchSmallMethod = new_Symbol(L"benchSmallMethod");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14363 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14367 = new_String(L"a\n\t^ self");
    Constant string_14367_Const = new_Constant((Optr)string_14367);
    // on:. 
    Send PSend14366 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14367_Const);
    Assign PAssign14365 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14366);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
<<<<<<< HEAD
    SmallInt int_300 = new_SmallInt(300);
    Array PThreadedCode14407 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_300, (Optr)&t_method_return);
    Constant int_300_Const = new_Constant((Optr)int_300);
    Method PMethod14406 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14407, 1, int_300_Const);
    
    MethodClosure MC_SMB_repetitionCount = new_MethodClosure((Method)PMethod14406, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_repetitionCount, MC_SMB_repetitionCount);
=======
    // repetitionCount. 
    Send PSend14368 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14371 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14372 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14370 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14371, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14372, (Optr)&t_block_return);
    Block PBlock14369 = new_Block_with(empty_Array, empty_Array, PThreadedCode14370, 2, PSend14371, PSend14372);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14373 = new_Send((Optr)PSend14368, SMB_timesRepeat_, 1, (Optr)PBlock14369);
    Array PThreadedCode14364 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14365, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14367, (Optr)&t_send1, (Optr)PSend14366, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14368, (Optr)&t_push_closure, (Optr)PBlock14369, (Optr)&t_send1, (Optr)PSend14373, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14362 = new_Method_with(empty_Array, PArray14363, empty_Array, PThreadedCode14364, 3, PAssign14365, PSend14373, self);
    
    MethodClosure MC_SMB_benchSmallMethod = new_MethodClosure((Method)PMethod14362, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchSmallMethod, MC_SMB_benchSmallMethod);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
}


static void init_SMB_benchBlockWithArg() {
    Symbol SMB_benchBlockWithArg = new_Symbol(L"benchBlockWithArg");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
<<<<<<< HEAD
    Array PArray14409 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14413 = new_String(L"a\n\t^ '012345689'");
    Constant string_14413_Const = new_Constant((Optr)string_14413);
    // on:. 
    Send PSend14412 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14413_Const);
    Assign PAssign14411 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14412);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14414 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14417 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14418 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14416 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14417, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14418, (Optr)&t_block_return);
    Block PBlock14415 = new_Block_with(empty_Array, empty_Array, PThreadedCode14416, 2, PSend14417, PSend14418);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14419 = new_Send((Optr)PSend14414, SMB_timesRepeat_, 1, (Optr)PBlock14415);
    Array PThreadedCode14410 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14411, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14413, (Optr)&t_send1, (Optr)PSend14412, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14414, (Optr)&t_push_closure, (Optr)PBlock14415, (Optr)&t_send1, (Optr)PSend14419, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14408 = new_Method_with(empty_Array, PArray14409, empty_Array, PThreadedCode14410, 3, PAssign14411, PSend14419, self);
    
    MethodClosure MC_SMB_benchStringNumbers = new_MethodClosure((Method)PMethod14408, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchStringNumbers, MC_SMB_benchStringNumbers);
=======
    Array PArray14375 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14379 = new_String(L"a\n\t\t^ [ :a| ]");
    Constant string_14379_Const = new_Constant((Optr)string_14379);
    // on:. 
    Send PSend14378 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14379_Const);
    Assign PAssign14377 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14378);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14380 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14383 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14384 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14382 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14383, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14384, (Optr)&t_block_return);
    Block PBlock14381 = new_Block_with(empty_Array, empty_Array, PThreadedCode14382, 2, PSend14383, PSend14384);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14385 = new_Send((Optr)PSend14380, SMB_timesRepeat_, 1, (Optr)PBlock14381);
    Array PThreadedCode14376 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14377, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14379, (Optr)&t_send1, (Optr)PSend14378, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14380, (Optr)&t_push_closure, (Optr)PBlock14381, (Optr)&t_send1, (Optr)PSend14385, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14374 = new_Method_with(empty_Array, PArray14375, empty_Array, PThreadedCode14376, 3, PAssign14377, PSend14385, self);
    
    MethodClosure MC_SMB_benchBlockWithArg = new_MethodClosure((Method)PMethod14374, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchBlockWithArg, MC_SMB_benchBlockWithArg);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
}


static void init_SMB_benchMediumMethod() {
    Symbol SMB_benchMediumMethod = new_Symbol(L"benchMediumMethod");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
<<<<<<< HEAD
    Array PArray14421 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14425 = new_String(L"a\n\t\t^ [ :a| a]");
    Constant string_14425_Const = new_Constant((Optr)string_14425);
    // on:. 
    Send PSend14424 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14425_Const);
    Assign PAssign14423 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14424);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14426 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14429 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14430 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14428 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14429, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14430, (Optr)&t_block_return);
    Block PBlock14427 = new_Block_with(empty_Array, empty_Array, PThreadedCode14428, 2, PSend14429, PSend14430);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14431 = new_Send((Optr)PSend14426, SMB_timesRepeat_, 1, (Optr)PBlock14427);
    Array PThreadedCode14422 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14423, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14425, (Optr)&t_send1, (Optr)PSend14424, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14426, (Optr)&t_push_closure, (Optr)PBlock14427, (Optr)&t_send1, (Optr)PSend14431, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14420 = new_Method_with(empty_Array, PArray14421, empty_Array, PThreadedCode14422, 3, PAssign14423, PSend14431, self);
    
    MethodClosure MC_SMB_benchBlockWithArgAndBody = new_MethodClosure((Method)PMethod14420, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchBlockWithArgAndBody, MC_SMB_benchBlockWithArgAndBody);
=======
    Array PArray14387 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14391 = new_String(L"initialize \n\tinternalConstantCode := PDictionary new.\n\tinternalConstantCode at: false put: #pushfalse.\n\tinternalConstantCode at: true put: #pushtrue.\n\tinternalConstantCode at: nil put: #pushnil.\n\tinternalConstantCode at: 0 put: #push0.\n\tinternalConstantCode at: 1 put: #push1.\n\tinternalConstantCode at: 2 put: #push2.");
    Constant string_14391_Const = new_Constant((Optr)string_14391);
    // on:. 
    Send PSend14390 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14391_Const);
    Assign PAssign14389 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14390);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14392 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14395 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14396 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14394 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14395, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14396, (Optr)&t_block_return);
    Block PBlock14393 = new_Block_with(empty_Array, empty_Array, PThreadedCode14394, 2, PSend14395, PSend14396);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14397 = new_Send((Optr)PSend14392, SMB_timesRepeat_, 1, (Optr)PBlock14393);
    Array PThreadedCode14388 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14389, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14391, (Optr)&t_send1, (Optr)PSend14390, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14392, (Optr)&t_push_closure, (Optr)PBlock14393, (Optr)&t_send1, (Optr)PSend14397, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14386 = new_Method_with(empty_Array, PArray14387, empty_Array, PThreadedCode14388, 3, PAssign14389, PSend14397, self);
    
    MethodClosure MC_SMB_benchMediumMethod = new_MethodClosure((Method)PMethod14386, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchMediumMethod, MC_SMB_benchMediumMethod);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
}


static void init_SMB_benchStringNumbers() {
    Symbol SMB_benchStringNumbers = new_Symbol(L"benchStringNumbers");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
<<<<<<< HEAD
    Array PArray14433 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14437 = new_String(L"a\n\t^ #abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
    Constant string_14437_Const = new_Constant((Optr)string_14437);
    // on:. 
    Send PSend14436 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14437_Const);
    Assign PAssign14435 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14436);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14438 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14441 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14442 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14440 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14441, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14442, (Optr)&t_block_return);
    Block PBlock14439 = new_Block_with(empty_Array, empty_Array, PThreadedCode14440, 2, PSend14441, PSend14442);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14443 = new_Send((Optr)PSend14438, SMB_timesRepeat_, 1, (Optr)PBlock14439);
    Array PThreadedCode14434 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14435, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14437, (Optr)&t_send1, (Optr)PSend14436, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14438, (Optr)&t_push_closure, (Optr)PBlock14439, (Optr)&t_send1, (Optr)PSend14443, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14432 = new_Method_with(empty_Array, PArray14433, empty_Array, PThreadedCode14434, 3, PAssign14435, PSend14443, self);
    
    MethodClosure MC_SMB_benchSymbol = new_MethodClosure((Method)PMethod14432, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchSymbol, MC_SMB_benchSymbol);
=======
    Array PArray14399 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14403 = new_String(L"a\n\t^ '012345689'");
    Constant string_14403_Const = new_Constant((Optr)string_14403);
    // on:. 
    Send PSend14402 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14403_Const);
    Assign PAssign14401 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14402);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14404 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14407 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14408 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14406 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14407, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14408, (Optr)&t_block_return);
    Block PBlock14405 = new_Block_with(empty_Array, empty_Array, PThreadedCode14406, 2, PSend14407, PSend14408);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14409 = new_Send((Optr)PSend14404, SMB_timesRepeat_, 1, (Optr)PBlock14405);
    Array PThreadedCode14400 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14401, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14403, (Optr)&t_send1, (Optr)PSend14402, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14404, (Optr)&t_push_closure, (Optr)PBlock14405, (Optr)&t_send1, (Optr)PSend14409, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14398 = new_Method_with(empty_Array, PArray14399, empty_Array, PThreadedCode14400, 3, PAssign14401, PSend14409, self);
    
    MethodClosure MC_SMB_benchStringNumbers = new_MethodClosure((Method)PMethod14398, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchStringNumbers, MC_SMB_benchStringNumbers);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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