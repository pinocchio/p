#include <lib/class/Smalltalk/Parser/ParserBenchmark.h>


Optr layout_Smalltalk_Parser_ParserBenchmark_Class_class;
Optr slot_Smalltalk_Parser_ParserBenchmark_methodParser;
Optr slot_Smalltalk_Parser_ParserBenchmark_parser;
Optr layout_Smalltalk_Parser_ParserBenchmark;


static void init_SMB_benchLongMethod() {
    Symbol SMB_benchLongMethod = new_Symbol(L"benchLongMethod");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14012 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14016 = new_String(L"initialize \n\t|c key bucketIndex values index internalConstantCode custom1 custom2 custom3 custom4 custom5 custom6 custom7 custom8 custom9|\n\tinternalConstantCode := PDictionary new.\n\tinternalConstantCode at: false put: #pushfalse.\n\tinternalConstantCode at: true put: #pushtrue.\n\tinternalConstantCode at: nil put: #pushnil.\n\tinternalConstantCode at: 0 put: #push0.\n\tinternalConstantCode at: 1 put: #push1.\n\tinternalConstantCode at: 2 put: #push2.\n\tvalues := Array new: size.\n\tindex := 0.\n\tself do: [ :value | values at: (index := index + 1) put: value ].\n\tvalues := Array new: size.\n\tindex := 0.\n\tself do: [ :value | values at: (index := index + 1) put: value ].\n\tc := 1.\n\tbuckets at: index put: bucket.\n\t[ c <= bucket bucketSize ] whileTrue: [ \n\t\t\tkey := bucket at: c.\n\t\t\tbucketIndex := key hash \\\\ buckets size + 1.\n\t\t\tbucketIndex = index\n\t\t\t\tifTrue: [ c := c + 2 ]\n\t\t\t\tifFalse: [ \n\t\t\t\t\t(self bucketWithRoomAt: bucketIndex) newKey: key value: (bucket at: c + 1).\n\t\t\t\t\tbucket removeAt: c ] ]\n\t");
    Constant string_14016_Const = new_Constant((Optr)string_14016);
    // on:. 
    Send PSend14015 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14016_Const);
    Assign PAssign14014 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14015);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14017 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    // parse:. 
    Send PSend14020 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_parse_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14021 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14019 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14020, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14021, (Optr)&t_block_return);
    Block PBlock14018 = new_Block_with(empty_Array, empty_Array, PThreadedCode14019, 2, PSend14020, PSend14021);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14022 = new_Send((Optr)PSend14017, SMB_timesRepeat_, 1, (Optr)PBlock14018);
    Array PThreadedCode14013 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14014, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14016, (Optr)&t_send1, (Optr)PSend14015, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14017, (Optr)&t_push_closure, (Optr)PBlock14018, (Optr)&t_send1, (Optr)PSend14022, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14011 = new_Method_with(empty_Array, PArray14012, empty_Array, PThreadedCode14013, 3, PAssign14014, PSend14022, self);
    
    MethodClosure MC_SMB_benchLongMethod = new_MethodClosure((Method)PMethod14011, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchLongMethod, MC_SMB_benchLongMethod);
}


static void init_SMB_benchString() {
    Symbol SMB_benchString = new_Symbol(L"benchString");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14024 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14028 = new_String(L"a\n\t^ 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789'");
    Constant string_14028_Const = new_Constant((Optr)string_14028);
    // on:. 
    Send PSend14027 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14028_Const);
    Assign PAssign14026 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14027);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14029 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14032 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14033 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14031 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14032, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14033, (Optr)&t_block_return);
    Block PBlock14030 = new_Block_with(empty_Array, empty_Array, PThreadedCode14031, 2, PSend14032, PSend14033);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14034 = new_Send((Optr)PSend14029, SMB_timesRepeat_, 1, (Optr)PBlock14030);
    Array PThreadedCode14025 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14026, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14028, (Optr)&t_send1, (Optr)PSend14027, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14029, (Optr)&t_push_closure, (Optr)PBlock14030, (Optr)&t_send1, (Optr)PSend14034, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14023 = new_Method_with(empty_Array, PArray14024, empty_Array, PThreadedCode14025, 3, PAssign14026, PSend14034, self);
    
    MethodClosure MC_SMB_benchString = new_MethodClosure((Method)PMethod14023, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchString, MC_SMB_benchString);
}


static void init_SMB_benchMediumMethod() {
    Symbol SMB_benchMediumMethod = new_Symbol(L"benchMediumMethod");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14036 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14040 = new_String(L"initialize \n\tinternalConstantCode := PDictionary new.\n\tinternalConstantCode at: false put: #pushfalse.\n\tinternalConstantCode at: true put: #pushtrue.\n\tinternalConstantCode at: nil put: #pushnil.\n\tinternalConstantCode at: 0 put: #push0.\n\tinternalConstantCode at: 1 put: #push1.\n\tinternalConstantCode at: 2 put: #push2.");
    Constant string_14040_Const = new_Constant((Optr)string_14040);
    // on:. 
    Send PSend14039 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14040_Const);
    Assign PAssign14038 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14039);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14041 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14044 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14045 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14043 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14044, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14045, (Optr)&t_block_return);
    Block PBlock14042 = new_Block_with(empty_Array, empty_Array, PThreadedCode14043, 2, PSend14044, PSend14045);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14046 = new_Send((Optr)PSend14041, SMB_timesRepeat_, 1, (Optr)PBlock14042);
    Array PThreadedCode14037 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14038, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14040, (Optr)&t_send1, (Optr)PSend14039, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14041, (Optr)&t_push_closure, (Optr)PBlock14042, (Optr)&t_send1, (Optr)PSend14046, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14035 = new_Method_with(empty_Array, PArray14036, empty_Array, PThreadedCode14037, 3, PAssign14038, PSend14046, self);
    
    MethodClosure MC_SMB_benchMediumMethod = new_MethodClosure((Method)PMethod14035, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchMediumMethod, MC_SMB_benchMediumMethod);
}


static void init_SMB_benchAnnotation() {
    Symbol SMB_benchAnnotation = new_Symbol(L"benchAnnotation");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14048 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14052 = new_String(L"a\n\t\t<abcdefghil>");
    Constant string_14052_Const = new_Constant((Optr)string_14052);
    // on:. 
    Send PSend14051 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14052_Const);
    Assign PAssign14050 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14051);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14053 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14056 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14057 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14055 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14056, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14057, (Optr)&t_block_return);
    Block PBlock14054 = new_Block_with(empty_Array, empty_Array, PThreadedCode14055, 2, PSend14056, PSend14057);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14058 = new_Send((Optr)PSend14053, SMB_timesRepeat_, 1, (Optr)PBlock14054);
    Array PThreadedCode14049 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14050, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14052, (Optr)&t_send1, (Optr)PSend14051, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14053, (Optr)&t_push_closure, (Optr)PBlock14054, (Optr)&t_send1, (Optr)PSend14058, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14047 = new_Method_with(empty_Array, PArray14048, empty_Array, PThreadedCode14049, 3, PAssign14050, PSend14058, self);
    
    MethodClosure MC_SMB_benchAnnotation = new_MethodClosure((Method)PMethod14047, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchAnnotation, MC_SMB_benchAnnotation);
}


static void init_SMB_benchBlockWithArg() {
    Symbol SMB_benchBlockWithArg = new_Symbol(L"benchBlockWithArg");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14060 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14064 = new_String(L"a\n\t\t^ [ :a| ]");
    Constant string_14064_Const = new_Constant((Optr)string_14064);
    // on:. 
    Send PSend14063 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14064_Const);
    Assign PAssign14062 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14063);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14065 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14068 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14069 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14067 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14068, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14069, (Optr)&t_block_return);
    Block PBlock14066 = new_Block_with(empty_Array, empty_Array, PThreadedCode14067, 2, PSend14068, PSend14069);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14070 = new_Send((Optr)PSend14065, SMB_timesRepeat_, 1, (Optr)PBlock14066);
    Array PThreadedCode14061 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14062, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14064, (Optr)&t_send1, (Optr)PSend14063, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14065, (Optr)&t_push_closure, (Optr)PBlock14066, (Optr)&t_send1, (Optr)PSend14070, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14059 = new_Method_with(empty_Array, PArray14060, empty_Array, PThreadedCode14061, 3, PAssign14062, PSend14070, self);
    
    MethodClosure MC_SMB_benchBlockWithArg = new_MethodClosure((Method)PMethod14059, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchBlockWithArg, MC_SMB_benchBlockWithArg);
}


static void init_SMB_benchSmallMethod() {
    Symbol SMB_benchSmallMethod = new_Symbol(L"benchSmallMethod");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14072 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14076 = new_String(L"a\n\t^ self");
    Constant string_14076_Const = new_Constant((Optr)string_14076);
    // on:. 
    Send PSend14075 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14076_Const);
    Assign PAssign14074 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14075);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14077 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14080 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14081 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14079 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14080, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14081, (Optr)&t_block_return);
    Block PBlock14078 = new_Block_with(empty_Array, empty_Array, PThreadedCode14079, 2, PSend14080, PSend14081);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14082 = new_Send((Optr)PSend14077, SMB_timesRepeat_, 1, (Optr)PBlock14078);
    Array PThreadedCode14073 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14074, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14076, (Optr)&t_send1, (Optr)PSend14075, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14077, (Optr)&t_push_closure, (Optr)PBlock14078, (Optr)&t_send1, (Optr)PSend14082, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14071 = new_Method_with(empty_Array, PArray14072, empty_Array, PThreadedCode14073, 3, PAssign14074, PSend14082, self);
    
    MethodClosure MC_SMB_benchSmallMethod = new_MethodClosure((Method)PMethod14071, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchSmallMethod, MC_SMB_benchSmallMethod);
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14086 = new_Send((Optr)PSmalltalkParser_classReference, SMB_new, 0);
    Assign PAssign14085 = new_Assign((Optr)slot_Smalltalk_Parser_ParserBenchmark_parser, (Optr)PSend14086);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend14088 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_parser, SMB_method, 0);
    Assign PAssign14087 = new_Assign((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)PSend14088);
    Array PThreadedCode14084 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign14085, (Optr)&t_push_class_reference, (Optr)PSmalltalkParser_classReference, (Optr)&t_send0, (Optr)PSend14086, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14087, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_parser, (Optr)&t_send0, (Optr)PSend14088, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14083 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14084, 3, PAssign14085, PAssign14087, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod14083, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_SMB_benchBlock() {
    Symbol SMB_benchBlock = new_Symbol(L"benchBlock");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14090 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14094 = new_String(L"a\n\t\t^ []");
    Constant string_14094_Const = new_Constant((Optr)string_14094);
    // on:. 
    Send PSend14093 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14094_Const);
    Assign PAssign14092 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14093);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14095 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14098 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14099 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14097 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14098, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14099, (Optr)&t_block_return);
    Block PBlock14096 = new_Block_with(empty_Array, empty_Array, PThreadedCode14097, 2, PSend14098, PSend14099);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14100 = new_Send((Optr)PSend14095, SMB_timesRepeat_, 1, (Optr)PBlock14096);
    Array PThreadedCode14091 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14092, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14094, (Optr)&t_send1, (Optr)PSend14093, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14095, (Optr)&t_push_closure, (Optr)PBlock14096, (Optr)&t_send1, (Optr)PSend14100, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14089 = new_Method_with(empty_Array, PArray14090, empty_Array, PThreadedCode14091, 3, PAssign14092, PSend14100, self);
    
    MethodClosure MC_SMB_benchBlock = new_MethodClosure((Method)PMethod14089, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchBlock, MC_SMB_benchBlock);
}


static void init_SMB_repetitionCount() {
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    SmallInt int_300 = new_SmallInt(300);
    Array PThreadedCode14102 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_300, (Optr)&t_method_return);
    Constant int_300_Const = new_Constant((Optr)int_300);
    Method PMethod14101 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14102, 1, int_300_Const);
    
    MethodClosure MC_SMB_repetitionCount = new_MethodClosure((Method)PMethod14101, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_repetitionCount, MC_SMB_repetitionCount);
}


static void init_SMB_benchStringNumbers() {
    Symbol SMB_benchStringNumbers = new_Symbol(L"benchStringNumbers");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14104 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14108 = new_String(L"a\n\t^ '012345689'");
    Constant string_14108_Const = new_Constant((Optr)string_14108);
    // on:. 
    Send PSend14107 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14108_Const);
    Assign PAssign14106 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14107);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14109 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14112 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14113 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14111 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14112, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14113, (Optr)&t_block_return);
    Block PBlock14110 = new_Block_with(empty_Array, empty_Array, PThreadedCode14111, 2, PSend14112, PSend14113);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14114 = new_Send((Optr)PSend14109, SMB_timesRepeat_, 1, (Optr)PBlock14110);
    Array PThreadedCode14105 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14106, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14108, (Optr)&t_send1, (Optr)PSend14107, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14109, (Optr)&t_push_closure, (Optr)PBlock14110, (Optr)&t_send1, (Optr)PSend14114, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14103 = new_Method_with(empty_Array, PArray14104, empty_Array, PThreadedCode14105, 3, PAssign14106, PSend14114, self);
    
    MethodClosure MC_SMB_benchStringNumbers = new_MethodClosure((Method)PMethod14103, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchStringNumbers, MC_SMB_benchStringNumbers);
}


static void init_SMB_benchBlockWithArgAndBody() {
    Symbol SMB_benchBlockWithArgAndBody = new_Symbol(L"benchBlockWithArgAndBody");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14116 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14120 = new_String(L"a\n\t\t^ [ :a| a]");
    Constant string_14120_Const = new_Constant((Optr)string_14120);
    // on:. 
    Send PSend14119 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14120_Const);
    Assign PAssign14118 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14119);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14121 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14124 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14125 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14123 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14124, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14125, (Optr)&t_block_return);
    Block PBlock14122 = new_Block_with(empty_Array, empty_Array, PThreadedCode14123, 2, PSend14124, PSend14125);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14126 = new_Send((Optr)PSend14121, SMB_timesRepeat_, 1, (Optr)PBlock14122);
    Array PThreadedCode14117 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14118, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14120, (Optr)&t_send1, (Optr)PSend14119, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14121, (Optr)&t_push_closure, (Optr)PBlock14122, (Optr)&t_send1, (Optr)PSend14126, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14115 = new_Method_with(empty_Array, PArray14116, empty_Array, PThreadedCode14117, 3, PAssign14118, PSend14126, self);
    
    MethodClosure MC_SMB_benchBlockWithArgAndBody = new_MethodClosure((Method)PMethod14115, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchBlockWithArgAndBody, MC_SMB_benchBlockWithArgAndBody);
}


static void init_SMB_benchSymbol() {
    Symbol SMB_benchSymbol = new_Symbol(L"benchSymbol");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14128 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14132 = new_String(L"a\n\t^ #abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
    Constant string_14132_Const = new_Constant((Optr)string_14132);
    // on:. 
    Send PSend14131 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14132_Const);
    Assign PAssign14130 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14131);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14133 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14136 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14137 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14135 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14136, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14137, (Optr)&t_block_return);
    Block PBlock14134 = new_Block_with(empty_Array, empty_Array, PThreadedCode14135, 2, PSend14136, PSend14137);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14138 = new_Send((Optr)PSend14133, SMB_timesRepeat_, 1, (Optr)PBlock14134);
    Array PThreadedCode14129 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14130, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14132, (Optr)&t_send1, (Optr)PSend14131, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14133, (Optr)&t_push_closure, (Optr)PBlock14134, (Optr)&t_send1, (Optr)PSend14138, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14127 = new_Method_with(empty_Array, PArray14128, empty_Array, PThreadedCode14129, 3, PAssign14130, PSend14138, self);
    
    MethodClosure MC_SMB_benchSymbol = new_MethodClosure((Method)PMethod14127, Smalltalk_Parser_ParserBenchmark_Class);
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