#include <lib/class/Smalltalk/Parser/ParserBenchmark.h>


Optr layout_Smalltalk_Parser_ParserBenchmark_Class_class;
Optr slot_Smalltalk_Parser_ParserBenchmark_methodParser;
Optr slot_Smalltalk_Parser_ParserBenchmark_parser;
Optr layout_Smalltalk_Parser_ParserBenchmark;


static void init_SMB_benchLongMethod() {
    Symbol SMB_benchLongMethod = new_Symbol(L"benchLongMethod");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14344 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14348 = new_String(L"initialize \n\t|c key bucketIndex values index internalConstantCode custom1 custom2 custom3 custom4 custom5 custom6 custom7 custom8 custom9|\n\tinternalConstantCode := PDictionary new.\n\tinternalConstantCode at: false put: #pushfalse.\n\tinternalConstantCode at: true put: #pushtrue.\n\tinternalConstantCode at: nil put: #pushnil.\n\tinternalConstantCode at: 0 put: #push0.\n\tinternalConstantCode at: 1 put: #push1.\n\tinternalConstantCode at: 2 put: #push2.\n\tvalues := Array new: size.\n\tindex := 0.\n\tself do: [ :value | values at: (index := index + 1) put: value ].\n\tvalues := Array new: size.\n\tindex := 0.\n\tself do: [ :value | values at: (index := index + 1) put: value ].\n\tc := 1.\n\tbuckets at: index put: bucket.\n\t[ c <= bucket bucketSize ] whileTrue: [ \n\t\t\tkey := bucket at: c.\n\t\t\tbucketIndex := key hash \\\\ buckets size + 1.\n\t\t\tbucketIndex = index\n\t\t\t\tifTrue: [ c := c + 2 ]\n\t\t\t\tifFalse: [ \n\t\t\t\t\t(self bucketWithRoomAt: bucketIndex) newKey: key value: (bucket at: c + 1).\n\t\t\t\t\tbucket removeAt: c ] ]\n\t");
    Constant string_14348_Const = new_Constant((Optr)string_14348);
    // on:. 
    Send PSend14347 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14348_Const);
    Assign PAssign14346 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14347);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14349 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    // parse:. 
    Send PSend14352 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_parse_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14353 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14351 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14352, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14353, (Optr)&t_block_return);
    Block PBlock14350 = new_Block_with(empty_Array, empty_Array, PThreadedCode14351, 2, PSend14352, PSend14353);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14354 = new_Send((Optr)PSend14349, SMB_timesRepeat_, 1, (Optr)PBlock14350);
    Array PThreadedCode14345 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14346, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14348, (Optr)&t_send1, (Optr)PSend14347, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14349, (Optr)&t_push_closure, (Optr)PBlock14350, (Optr)&t_send1, (Optr)PSend14354, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14343 = new_Method_with(empty_Array, PArray14344, empty_Array, PThreadedCode14345, 3, PAssign14346, PSend14354, self);
    
    MethodClosure MC_SMB_benchLongMethod = new_MethodClosure((Method)PMethod14343, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchLongMethod, MC_SMB_benchLongMethod);
}


static void init_SMB_benchString() {
    Symbol SMB_benchString = new_Symbol(L"benchString");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14356 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14360 = new_String(L"a\n\t^ 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789'");
    Constant string_14360_Const = new_Constant((Optr)string_14360);
    // on:. 
    Send PSend14359 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14360_Const);
    Assign PAssign14358 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14359);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14361 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14364 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14365 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14363 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14364, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14365, (Optr)&t_block_return);
    Block PBlock14362 = new_Block_with(empty_Array, empty_Array, PThreadedCode14363, 2, PSend14364, PSend14365);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14366 = new_Send((Optr)PSend14361, SMB_timesRepeat_, 1, (Optr)PBlock14362);
    Array PThreadedCode14357 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14358, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14360, (Optr)&t_send1, (Optr)PSend14359, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14361, (Optr)&t_push_closure, (Optr)PBlock14362, (Optr)&t_send1, (Optr)PSend14366, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14355 = new_Method_with(empty_Array, PArray14356, empty_Array, PThreadedCode14357, 3, PAssign14358, PSend14366, self);
    
    MethodClosure MC_SMB_benchString = new_MethodClosure((Method)PMethod14355, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchString, MC_SMB_benchString);
}


static void init_SMB_benchMediumMethod() {
    Symbol SMB_benchMediumMethod = new_Symbol(L"benchMediumMethod");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14368 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14372 = new_String(L"initialize \n\tinternalConstantCode := PDictionary new.\n\tinternalConstantCode at: false put: #pushfalse.\n\tinternalConstantCode at: true put: #pushtrue.\n\tinternalConstantCode at: nil put: #pushnil.\n\tinternalConstantCode at: 0 put: #push0.\n\tinternalConstantCode at: 1 put: #push1.\n\tinternalConstantCode at: 2 put: #push2.");
    Constant string_14372_Const = new_Constant((Optr)string_14372);
    // on:. 
    Send PSend14371 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14372_Const);
    Assign PAssign14370 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14371);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14373 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14376 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14377 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14375 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14376, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14377, (Optr)&t_block_return);
    Block PBlock14374 = new_Block_with(empty_Array, empty_Array, PThreadedCode14375, 2, PSend14376, PSend14377);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14378 = new_Send((Optr)PSend14373, SMB_timesRepeat_, 1, (Optr)PBlock14374);
    Array PThreadedCode14369 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14370, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14372, (Optr)&t_send1, (Optr)PSend14371, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14373, (Optr)&t_push_closure, (Optr)PBlock14374, (Optr)&t_send1, (Optr)PSend14378, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14367 = new_Method_with(empty_Array, PArray14368, empty_Array, PThreadedCode14369, 3, PAssign14370, PSend14378, self);
    
    MethodClosure MC_SMB_benchMediumMethod = new_MethodClosure((Method)PMethod14367, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchMediumMethod, MC_SMB_benchMediumMethod);
}


static void init_SMB_benchAnnotation() {
    Symbol SMB_benchAnnotation = new_Symbol(L"benchAnnotation");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14380 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14384 = new_String(L"a\n\t\t<abcdefghil>");
    Constant string_14384_Const = new_Constant((Optr)string_14384);
    // on:. 
    Send PSend14383 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14384_Const);
    Assign PAssign14382 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14383);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14385 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14388 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14389 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14387 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14388, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14389, (Optr)&t_block_return);
    Block PBlock14386 = new_Block_with(empty_Array, empty_Array, PThreadedCode14387, 2, PSend14388, PSend14389);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14390 = new_Send((Optr)PSend14385, SMB_timesRepeat_, 1, (Optr)PBlock14386);
    Array PThreadedCode14381 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14382, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14384, (Optr)&t_send1, (Optr)PSend14383, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14385, (Optr)&t_push_closure, (Optr)PBlock14386, (Optr)&t_send1, (Optr)PSend14390, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14379 = new_Method_with(empty_Array, PArray14380, empty_Array, PThreadedCode14381, 3, PAssign14382, PSend14390, self);
    
    MethodClosure MC_SMB_benchAnnotation = new_MethodClosure((Method)PMethod14379, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchAnnotation, MC_SMB_benchAnnotation);
}


static void init_SMB_benchBlockWithArg() {
    Symbol SMB_benchBlockWithArg = new_Symbol(L"benchBlockWithArg");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14392 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14396 = new_String(L"a\n\t\t^ [ :a| ]");
    Constant string_14396_Const = new_Constant((Optr)string_14396);
    // on:. 
    Send PSend14395 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14396_Const);
    Assign PAssign14394 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14395);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14397 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14400 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14401 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14399 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14400, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14401, (Optr)&t_block_return);
    Block PBlock14398 = new_Block_with(empty_Array, empty_Array, PThreadedCode14399, 2, PSend14400, PSend14401);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14402 = new_Send((Optr)PSend14397, SMB_timesRepeat_, 1, (Optr)PBlock14398);
    Array PThreadedCode14393 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14394, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14396, (Optr)&t_send1, (Optr)PSend14395, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14397, (Optr)&t_push_closure, (Optr)PBlock14398, (Optr)&t_send1, (Optr)PSend14402, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14391 = new_Method_with(empty_Array, PArray14392, empty_Array, PThreadedCode14393, 3, PAssign14394, PSend14402, self);
    
    MethodClosure MC_SMB_benchBlockWithArg = new_MethodClosure((Method)PMethod14391, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchBlockWithArg, MC_SMB_benchBlockWithArg);
}


static void init_SMB_benchSmallMethod() {
    Symbol SMB_benchSmallMethod = new_Symbol(L"benchSmallMethod");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14404 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14408 = new_String(L"a\n\t^ self");
    Constant string_14408_Const = new_Constant((Optr)string_14408);
    // on:. 
    Send PSend14407 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14408_Const);
    Assign PAssign14406 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14407);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14409 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14412 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14413 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14411 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14412, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14413, (Optr)&t_block_return);
    Block PBlock14410 = new_Block_with(empty_Array, empty_Array, PThreadedCode14411, 2, PSend14412, PSend14413);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14414 = new_Send((Optr)PSend14409, SMB_timesRepeat_, 1, (Optr)PBlock14410);
    Array PThreadedCode14405 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14406, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14408, (Optr)&t_send1, (Optr)PSend14407, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14409, (Optr)&t_push_closure, (Optr)PBlock14410, (Optr)&t_send1, (Optr)PSend14414, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14403 = new_Method_with(empty_Array, PArray14404, empty_Array, PThreadedCode14405, 3, PAssign14406, PSend14414, self);
    
    MethodClosure MC_SMB_benchSmallMethod = new_MethodClosure((Method)PMethod14403, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchSmallMethod, MC_SMB_benchSmallMethod);
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14418 = new_Send((Optr)PSmalltalkParser_classReference, SMB_new, 0);
    Assign PAssign14417 = new_Assign((Optr)slot_Smalltalk_Parser_ParserBenchmark_parser, (Optr)PSend14418);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend14420 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_parser, SMB_method, 0);
    Assign PAssign14419 = new_Assign((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)PSend14420);
    Array PThreadedCode14416 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign14417, (Optr)&t_push_class_reference, (Optr)PSmalltalkParser_classReference, (Optr)&t_send0, (Optr)PSend14418, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14419, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_parser, (Optr)&t_send0, (Optr)PSend14420, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14415 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14416, 3, PAssign14417, PAssign14419, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod14415, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_SMB_benchBlock() {
    Symbol SMB_benchBlock = new_Symbol(L"benchBlock");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14422 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14426 = new_String(L"a\n\t\t^ []");
    Constant string_14426_Const = new_Constant((Optr)string_14426);
    // on:. 
    Send PSend14425 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14426_Const);
    Assign PAssign14424 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14425);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14427 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14430 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14431 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14429 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14430, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14431, (Optr)&t_block_return);
    Block PBlock14428 = new_Block_with(empty_Array, empty_Array, PThreadedCode14429, 2, PSend14430, PSend14431);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14432 = new_Send((Optr)PSend14427, SMB_timesRepeat_, 1, (Optr)PBlock14428);
    Array PThreadedCode14423 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14424, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14426, (Optr)&t_send1, (Optr)PSend14425, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14427, (Optr)&t_push_closure, (Optr)PBlock14428, (Optr)&t_send1, (Optr)PSend14432, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14421 = new_Method_with(empty_Array, PArray14422, empty_Array, PThreadedCode14423, 3, PAssign14424, PSend14432, self);
    
    MethodClosure MC_SMB_benchBlock = new_MethodClosure((Method)PMethod14421, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchBlock, MC_SMB_benchBlock);
}


static void init_SMB_repetitionCount() {
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    SmallInt int_300 = new_SmallInt(300);
    Array PThreadedCode14434 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_300, (Optr)&t_method_return);
    Constant int_300_Const = new_Constant((Optr)int_300);
    Method PMethod14433 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14434, 1, int_300_Const);
    
    MethodClosure MC_SMB_repetitionCount = new_MethodClosure((Method)PMethod14433, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_repetitionCount, MC_SMB_repetitionCount);
}


static void init_SMB_benchStringNumbers() {
    Symbol SMB_benchStringNumbers = new_Symbol(L"benchStringNumbers");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14436 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14440 = new_String(L"a\n\t^ '012345689'");
    Constant string_14440_Const = new_Constant((Optr)string_14440);
    // on:. 
    Send PSend14439 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14440_Const);
    Assign PAssign14438 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14439);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14441 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14444 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14445 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14443 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14444, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14445, (Optr)&t_block_return);
    Block PBlock14442 = new_Block_with(empty_Array, empty_Array, PThreadedCode14443, 2, PSend14444, PSend14445);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14446 = new_Send((Optr)PSend14441, SMB_timesRepeat_, 1, (Optr)PBlock14442);
    Array PThreadedCode14437 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14438, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14440, (Optr)&t_send1, (Optr)PSend14439, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14441, (Optr)&t_push_closure, (Optr)PBlock14442, (Optr)&t_send1, (Optr)PSend14446, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14435 = new_Method_with(empty_Array, PArray14436, empty_Array, PThreadedCode14437, 3, PAssign14438, PSend14446, self);
    
    MethodClosure MC_SMB_benchStringNumbers = new_MethodClosure((Method)PMethod14435, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchStringNumbers, MC_SMB_benchStringNumbers);
}


static void init_SMB_benchBlockWithArgAndBody() {
    Symbol SMB_benchBlockWithArgAndBody = new_Symbol(L"benchBlockWithArgAndBody");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14448 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14452 = new_String(L"a\n\t\t^ [ :a| a]");
    Constant string_14452_Const = new_Constant((Optr)string_14452);
    // on:. 
    Send PSend14451 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14452_Const);
    Assign PAssign14450 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14451);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14453 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14456 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14457 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14455 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14456, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14457, (Optr)&t_block_return);
    Block PBlock14454 = new_Block_with(empty_Array, empty_Array, PThreadedCode14455, 2, PSend14456, PSend14457);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14458 = new_Send((Optr)PSend14453, SMB_timesRepeat_, 1, (Optr)PBlock14454);
    Array PThreadedCode14449 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14450, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14452, (Optr)&t_send1, (Optr)PSend14451, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14453, (Optr)&t_push_closure, (Optr)PBlock14454, (Optr)&t_send1, (Optr)PSend14458, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14447 = new_Method_with(empty_Array, PArray14448, empty_Array, PThreadedCode14449, 3, PAssign14450, PSend14458, self);
    
    MethodClosure MC_SMB_benchBlockWithArgAndBody = new_MethodClosure((Method)PMethod14447, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchBlockWithArgAndBody, MC_SMB_benchBlockWithArgAndBody);
}


static void init_SMB_benchSymbol() {
    Symbol SMB_benchSymbol = new_Symbol(L"benchSymbol");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14460 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14464 = new_String(L"a\n\t^ #abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
    Constant string_14464_Const = new_Constant((Optr)string_14464);
    // on:. 
    Send PSend14463 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14464_Const);
    Assign PAssign14462 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14463);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14465 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14468 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14469 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14467 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14468, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14469, (Optr)&t_block_return);
    Block PBlock14466 = new_Block_with(empty_Array, empty_Array, PThreadedCode14467, 2, PSend14468, PSend14469);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14470 = new_Send((Optr)PSend14465, SMB_timesRepeat_, 1, (Optr)PBlock14466);
    Array PThreadedCode14461 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14462, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14464, (Optr)&t_send1, (Optr)PSend14463, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14465, (Optr)&t_push_closure, (Optr)PBlock14466, (Optr)&t_send1, (Optr)PSend14470, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14459 = new_Method_with(empty_Array, PArray14460, empty_Array, PThreadedCode14461, 3, PAssign14462, PSend14470, self);
    
    MethodClosure MC_SMB_benchSymbol = new_MethodClosure((Method)PMethod14459, Smalltalk_Parser_ParserBenchmark_Class);
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