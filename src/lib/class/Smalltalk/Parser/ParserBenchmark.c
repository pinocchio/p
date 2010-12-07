#include <lib/class/Smalltalk/Parser/ParserBenchmark.h>


Optr layout_Smalltalk_Parser_ParserBenchmark_Class_class;
Optr slot_Smalltalk_Parser_ParserBenchmark_methodParser;
Optr slot_Smalltalk_Parser_ParserBenchmark_parser;
Optr layout_Smalltalk_Parser_ParserBenchmark;


static void init_SMB_benchLongMethod() {
    Symbol SMB_benchLongMethod = new_Symbol(L"benchLongMethod");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
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
}


static void init_SMB_benchString() {
    Symbol SMB_benchString = new_Symbol(L"benchString");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
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
}


static void init_SMB_benchMediumMethod() {
    Symbol SMB_benchMediumMethod = new_Symbol(L"benchMediumMethod");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
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
}


static void init_SMB_benchBlockWithArg() {
    Symbol SMB_benchBlockWithArg = new_Symbol(L"benchBlockWithArg");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
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
}


static void init_SMB_benchSmallMethod() {
    Symbol SMB_benchSmallMethod = new_Symbol(L"benchSmallMethod");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
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
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14391 = new_Send((Optr)PSmalltalkParser_classReference, SMB_new, 0);
    Assign PAssign14390 = new_Assign((Optr)slot_Smalltalk_Parser_ParserBenchmark_parser, (Optr)PSend14391);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend14393 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_parser, SMB_method, 0);
    Assign PAssign14392 = new_Assign((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)PSend14393);
    Array PThreadedCode14389 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign14390, (Optr)&t_push_class_reference, (Optr)PSmalltalkParser_classReference, (Optr)&t_send0, (Optr)PSend14391, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14392, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_parser, (Optr)&t_send0, (Optr)PSend14393, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14388 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14389, 3, PAssign14390, PAssign14392, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod14388, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_SMB_benchBlock() {
    Symbol SMB_benchBlock = new_Symbol(L"benchBlock");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
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
}


static void init_SMB_repetitionCount() {
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    SmallInt int_300 = new_SmallInt(300);
    Array PThreadedCode14407 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_300, (Optr)&t_method_return);
    Constant int_300_Const = new_Constant((Optr)int_300);
    Method PMethod14406 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14407, 1, int_300_Const);
    
    MethodClosure MC_SMB_repetitionCount = new_MethodClosure((Method)PMethod14406, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_repetitionCount, MC_SMB_repetitionCount);
}


static void init_SMB_benchStringNumbers() {
    Symbol SMB_benchStringNumbers = new_Symbol(L"benchStringNumbers");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
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
}


static void init_SMB_benchBlockWithArgAndBody() {
    Symbol SMB_benchBlockWithArgAndBody = new_Symbol(L"benchBlockWithArgAndBody");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
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
}


static void init_SMB_benchSymbol() {
    Symbol SMB_benchSymbol = new_Symbol(L"benchSymbol");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
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
    init_SMB_benchLongMethod();
    init_SMB_benchString();
    init_SMB_benchMediumMethod();
    init_SMB_benchAnnotation();
    init_SMB_benchBlockWithArg();
    init_SMB_benchSmallMethod();
    init_SMB_setUp();
    init_SMB_benchBlock();
    init_SMB_repetitionCount();
    init_SMB_benchStringNumbers();
    init_SMB_benchBlockWithArgAndBody();
    init_SMB_benchSymbol();
    
}