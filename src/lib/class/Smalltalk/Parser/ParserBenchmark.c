#include <lib/class/Smalltalk/Parser/ParserBenchmark.h>


Optr layout_Smalltalk_Parser_ParserBenchmark_Class_class;
Optr slot_Smalltalk_Parser_ParserBenchmark_methodParser;
Optr slot_Smalltalk_Parser_ParserBenchmark_parser;
Optr layout_Smalltalk_Parser_ParserBenchmark;


static void init_SMB_benchLongMethod() {
    Symbol SMB_benchLongMethod = new_Symbol(L"benchLongMethod");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14085 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14089 = new_String(L"initialize \n\t|c key bucketIndex values index internalConstantCode custom1 custom2 custom3 custom4 custom5 custom6 custom7 custom8 custom9|\n\tinternalConstantCode := PDictionary new.\n\tinternalConstantCode at: false put: #pushfalse.\n\tinternalConstantCode at: true put: #pushtrue.\n\tinternalConstantCode at: nil put: #pushnil.\n\tinternalConstantCode at: 0 put: #push0.\n\tinternalConstantCode at: 1 put: #push1.\n\tinternalConstantCode at: 2 put: #push2.\n\tvalues := Array new: size.\n\tindex := 0.\n\tself do: [ :value | values at: (index := index + 1) put: value ].\n\tvalues := Array new: size.\n\tindex := 0.\n\tself do: [ :value | values at: (index := index + 1) put: value ].\n\tc := 1.\n\tbuckets at: index put: bucket.\n\t[ c <= bucket bucketSize ] whileTrue: [ \n\t\t\tkey := bucket at: c.\n\t\t\tbucketIndex := key hash \\\\ buckets size + 1.\n\t\t\tbucketIndex = index\n\t\t\t\tifTrue: [ c := c + 2 ]\n\t\t\t\tifFalse: [ \n\t\t\t\t\t(self bucketWithRoomAt: bucketIndex) newKey: key value: (bucket at: c + 1).\n\t\t\t\t\tbucket removeAt: c ] ]\n\t");
    Constant string_14089_Const = new_Constant((Optr)string_14089);
    // on:. 
    Send PSend14088 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14089_Const);
    Assign PAssign14087 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14088);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14090 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    // parse:. 
    Send PSend14093 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_parse_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14094 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14092 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14093, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14094, (Optr)&t_block_return);
    Block PBlock14091 = new_Block_with(empty_Array, empty_Array, PThreadedCode14092, 2, PSend14093, PSend14094);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14095 = new_Send((Optr)PSend14090, SMB_timesRepeat_, 1, (Optr)PBlock14091);
    Array PThreadedCode14086 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14087, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14089, (Optr)&t_send1, (Optr)PSend14088, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14090, (Optr)&t_push_closure, (Optr)PBlock14091, (Optr)&t_send1, (Optr)PSend14095, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14084 = new_Method_with(empty_Array, PArray14085, empty_Array, PThreadedCode14086, 3, PAssign14087, PSend14095, self);
    
    MethodClosure MC_SMB_benchLongMethod = new_MethodClosure((Method)PMethod14084, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchLongMethod, MC_SMB_benchLongMethod);
}


static void init_SMB_benchString() {
    Symbol SMB_benchString = new_Symbol(L"benchString");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14097 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14101 = new_String(L"a\n\t^ 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789'");
    Constant string_14101_Const = new_Constant((Optr)string_14101);
    // on:. 
    Send PSend14100 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14101_Const);
    Assign PAssign14099 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14100);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14102 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14105 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14106 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14104 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14105, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14106, (Optr)&t_block_return);
    Block PBlock14103 = new_Block_with(empty_Array, empty_Array, PThreadedCode14104, 2, PSend14105, PSend14106);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14107 = new_Send((Optr)PSend14102, SMB_timesRepeat_, 1, (Optr)PBlock14103);
    Array PThreadedCode14098 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14099, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14101, (Optr)&t_send1, (Optr)PSend14100, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14102, (Optr)&t_push_closure, (Optr)PBlock14103, (Optr)&t_send1, (Optr)PSend14107, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14096 = new_Method_with(empty_Array, PArray14097, empty_Array, PThreadedCode14098, 3, PAssign14099, PSend14107, self);
    
    MethodClosure MC_SMB_benchString = new_MethodClosure((Method)PMethod14096, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchString, MC_SMB_benchString);
}


static void init_SMB_benchMediumMethod() {
    Symbol SMB_benchMediumMethod = new_Symbol(L"benchMediumMethod");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14109 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14113 = new_String(L"initialize \n\tinternalConstantCode := PDictionary new.\n\tinternalConstantCode at: false put: #pushfalse.\n\tinternalConstantCode at: true put: #pushtrue.\n\tinternalConstantCode at: nil put: #pushnil.\n\tinternalConstantCode at: 0 put: #push0.\n\tinternalConstantCode at: 1 put: #push1.\n\tinternalConstantCode at: 2 put: #push2.");
    Constant string_14113_Const = new_Constant((Optr)string_14113);
    // on:. 
    Send PSend14112 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14113_Const);
    Assign PAssign14111 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14112);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14114 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14117 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14118 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14116 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14117, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14118, (Optr)&t_block_return);
    Block PBlock14115 = new_Block_with(empty_Array, empty_Array, PThreadedCode14116, 2, PSend14117, PSend14118);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14119 = new_Send((Optr)PSend14114, SMB_timesRepeat_, 1, (Optr)PBlock14115);
    Array PThreadedCode14110 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14111, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14113, (Optr)&t_send1, (Optr)PSend14112, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14114, (Optr)&t_push_closure, (Optr)PBlock14115, (Optr)&t_send1, (Optr)PSend14119, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14108 = new_Method_with(empty_Array, PArray14109, empty_Array, PThreadedCode14110, 3, PAssign14111, PSend14119, self);
    
    MethodClosure MC_SMB_benchMediumMethod = new_MethodClosure((Method)PMethod14108, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchMediumMethod, MC_SMB_benchMediumMethod);
}


static void init_SMB_benchAnnotation() {
    Symbol SMB_benchAnnotation = new_Symbol(L"benchAnnotation");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14121 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14125 = new_String(L"a\n\t\t<abcdefghil>");
    Constant string_14125_Const = new_Constant((Optr)string_14125);
    // on:. 
    Send PSend14124 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14125_Const);
    Assign PAssign14123 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14124);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14126 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14129 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14130 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14128 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14129, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14130, (Optr)&t_block_return);
    Block PBlock14127 = new_Block_with(empty_Array, empty_Array, PThreadedCode14128, 2, PSend14129, PSend14130);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14131 = new_Send((Optr)PSend14126, SMB_timesRepeat_, 1, (Optr)PBlock14127);
    Array PThreadedCode14122 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14123, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14125, (Optr)&t_send1, (Optr)PSend14124, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14126, (Optr)&t_push_closure, (Optr)PBlock14127, (Optr)&t_send1, (Optr)PSend14131, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14120 = new_Method_with(empty_Array, PArray14121, empty_Array, PThreadedCode14122, 3, PAssign14123, PSend14131, self);
    
    MethodClosure MC_SMB_benchAnnotation = new_MethodClosure((Method)PMethod14120, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchAnnotation, MC_SMB_benchAnnotation);
}


static void init_SMB_benchBlockWithArg() {
    Symbol SMB_benchBlockWithArg = new_Symbol(L"benchBlockWithArg");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14133 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14137 = new_String(L"a\n\t\t^ [ :a| ]");
    Constant string_14137_Const = new_Constant((Optr)string_14137);
    // on:. 
    Send PSend14136 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14137_Const);
    Assign PAssign14135 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14136);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14138 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14141 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14142 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14140 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14141, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14142, (Optr)&t_block_return);
    Block PBlock14139 = new_Block_with(empty_Array, empty_Array, PThreadedCode14140, 2, PSend14141, PSend14142);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14143 = new_Send((Optr)PSend14138, SMB_timesRepeat_, 1, (Optr)PBlock14139);
    Array PThreadedCode14134 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14135, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14137, (Optr)&t_send1, (Optr)PSend14136, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14138, (Optr)&t_push_closure, (Optr)PBlock14139, (Optr)&t_send1, (Optr)PSend14143, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14132 = new_Method_with(empty_Array, PArray14133, empty_Array, PThreadedCode14134, 3, PAssign14135, PSend14143, self);
    
    MethodClosure MC_SMB_benchBlockWithArg = new_MethodClosure((Method)PMethod14132, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchBlockWithArg, MC_SMB_benchBlockWithArg);
}


static void init_SMB_benchSmallMethod() {
    Symbol SMB_benchSmallMethod = new_Symbol(L"benchSmallMethod");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14145 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14149 = new_String(L"a\n\t^ self");
    Constant string_14149_Const = new_Constant((Optr)string_14149);
    // on:. 
    Send PSend14148 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14149_Const);
    Assign PAssign14147 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14148);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14150 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14153 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14154 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14152 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14153, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14154, (Optr)&t_block_return);
    Block PBlock14151 = new_Block_with(empty_Array, empty_Array, PThreadedCode14152, 2, PSend14153, PSend14154);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14155 = new_Send((Optr)PSend14150, SMB_timesRepeat_, 1, (Optr)PBlock14151);
    Array PThreadedCode14146 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14147, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14149, (Optr)&t_send1, (Optr)PSend14148, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14150, (Optr)&t_push_closure, (Optr)PBlock14151, (Optr)&t_send1, (Optr)PSend14155, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14144 = new_Method_with(empty_Array, PArray14145, empty_Array, PThreadedCode14146, 3, PAssign14147, PSend14155, self);
    
    MethodClosure MC_SMB_benchSmallMethod = new_MethodClosure((Method)PMethod14144, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchSmallMethod, MC_SMB_benchSmallMethod);
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14159 = new_Send((Optr)PSmalltalkParser_classReference, SMB_new, 0);
    Assign PAssign14158 = new_Assign((Optr)slot_Smalltalk_Parser_ParserBenchmark_parser, (Optr)PSend14159);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend14161 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_parser, SMB_method, 0);
    Assign PAssign14160 = new_Assign((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)PSend14161);
    Array PThreadedCode14157 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign14158, (Optr)&t_push_class_reference, (Optr)PSmalltalkParser_classReference, (Optr)&t_send0, (Optr)PSend14159, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14160, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_parser, (Optr)&t_send0, (Optr)PSend14161, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14156 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14157, 3, PAssign14158, PAssign14160, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod14156, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_SMB_benchBlock() {
    Symbol SMB_benchBlock = new_Symbol(L"benchBlock");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14163 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14167 = new_String(L"a\n\t\t^ []");
    Constant string_14167_Const = new_Constant((Optr)string_14167);
    // on:. 
    Send PSend14166 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14167_Const);
    Assign PAssign14165 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14166);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14168 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14171 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14172 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14170 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14171, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14172, (Optr)&t_block_return);
    Block PBlock14169 = new_Block_with(empty_Array, empty_Array, PThreadedCode14170, 2, PSend14171, PSend14172);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14173 = new_Send((Optr)PSend14168, SMB_timesRepeat_, 1, (Optr)PBlock14169);
    Array PThreadedCode14164 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14165, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14167, (Optr)&t_send1, (Optr)PSend14166, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14168, (Optr)&t_push_closure, (Optr)PBlock14169, (Optr)&t_send1, (Optr)PSend14173, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14162 = new_Method_with(empty_Array, PArray14163, empty_Array, PThreadedCode14164, 3, PAssign14165, PSend14173, self);
    
    MethodClosure MC_SMB_benchBlock = new_MethodClosure((Method)PMethod14162, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchBlock, MC_SMB_benchBlock);
}


static void init_SMB_repetitionCount() {
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    SmallInt int_300 = new_SmallInt(300);
    Array PThreadedCode14175 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_300, (Optr)&t_method_return);
    Constant int_300_Const = new_Constant((Optr)int_300);
    Method PMethod14174 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14175, 1, int_300_Const);
    
    MethodClosure MC_SMB_repetitionCount = new_MethodClosure((Method)PMethod14174, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_repetitionCount, MC_SMB_repetitionCount);
}


static void init_SMB_benchStringNumbers() {
    Symbol SMB_benchStringNumbers = new_Symbol(L"benchStringNumbers");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14177 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14181 = new_String(L"a\n\t^ '012345689'");
    Constant string_14181_Const = new_Constant((Optr)string_14181);
    // on:. 
    Send PSend14180 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14181_Const);
    Assign PAssign14179 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14180);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14182 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14185 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14186 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14184 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14185, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14186, (Optr)&t_block_return);
    Block PBlock14183 = new_Block_with(empty_Array, empty_Array, PThreadedCode14184, 2, PSend14185, PSend14186);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14187 = new_Send((Optr)PSend14182, SMB_timesRepeat_, 1, (Optr)PBlock14183);
    Array PThreadedCode14178 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14179, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14181, (Optr)&t_send1, (Optr)PSend14180, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14182, (Optr)&t_push_closure, (Optr)PBlock14183, (Optr)&t_send1, (Optr)PSend14187, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14176 = new_Method_with(empty_Array, PArray14177, empty_Array, PThreadedCode14178, 3, PAssign14179, PSend14187, self);
    
    MethodClosure MC_SMB_benchStringNumbers = new_MethodClosure((Method)PMethod14176, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchStringNumbers, MC_SMB_benchStringNumbers);
}


static void init_SMB_benchBlockWithArgAndBody() {
    Symbol SMB_benchBlockWithArgAndBody = new_Symbol(L"benchBlockWithArgAndBody");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14189 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14193 = new_String(L"a\n\t\t^ [ :a| a]");
    Constant string_14193_Const = new_Constant((Optr)string_14193);
    // on:. 
    Send PSend14192 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14193_Const);
    Assign PAssign14191 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14192);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14194 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14197 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14198 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14196 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14197, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14198, (Optr)&t_block_return);
    Block PBlock14195 = new_Block_with(empty_Array, empty_Array, PThreadedCode14196, 2, PSend14197, PSend14198);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14199 = new_Send((Optr)PSend14194, SMB_timesRepeat_, 1, (Optr)PBlock14195);
    Array PThreadedCode14190 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14191, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14193, (Optr)&t_send1, (Optr)PSend14192, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14194, (Optr)&t_push_closure, (Optr)PBlock14195, (Optr)&t_send1, (Optr)PSend14199, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14188 = new_Method_with(empty_Array, PArray14189, empty_Array, PThreadedCode14190, 3, PAssign14191, PSend14199, self);
    
    MethodClosure MC_SMB_benchBlockWithArgAndBody = new_MethodClosure((Method)PMethod14188, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchBlockWithArgAndBody, MC_SMB_benchBlockWithArgAndBody);
}


static void init_SMB_benchSymbol() {
    Symbol SMB_benchSymbol = new_Symbol(L"benchSymbol");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14201 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14205 = new_String(L"a\n\t^ #abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
    Constant string_14205_Const = new_Constant((Optr)string_14205);
    // on:. 
    Send PSend14204 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14205_Const);
    Assign PAssign14203 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14204);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14206 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14209 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14210 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14208 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14209, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14210, (Optr)&t_block_return);
    Block PBlock14207 = new_Block_with(empty_Array, empty_Array, PThreadedCode14208, 2, PSend14209, PSend14210);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14211 = new_Send((Optr)PSend14206, SMB_timesRepeat_, 1, (Optr)PBlock14207);
    Array PThreadedCode14202 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14203, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14205, (Optr)&t_send1, (Optr)PSend14204, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14206, (Optr)&t_push_closure, (Optr)PBlock14207, (Optr)&t_send1, (Optr)PSend14211, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14200 = new_Method_with(empty_Array, PArray14201, empty_Array, PThreadedCode14202, 3, PAssign14203, PSend14211, self);
    
    MethodClosure MC_SMB_benchSymbol = new_MethodClosure((Method)PMethod14200, Smalltalk_Parser_ParserBenchmark_Class);
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