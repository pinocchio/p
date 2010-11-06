#include <lib/class/Smalltalk/Parser/ParserBenchmark.h>


Optr layout_Smalltalk_Parser_ParserBenchmark_Class_class;
Optr slot_Smalltalk_Parser_ParserBenchmark_methodParser;
Optr slot_Smalltalk_Parser_ParserBenchmark_parser;
Optr layout_Smalltalk_Parser_ParserBenchmark;


static void init_SMB_benchLongMethod() {
    Symbol SMB_benchLongMethod = new_Symbol(L"benchLongMethod");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14096 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14100 = new_String(L"initialize \n\t|c key bucketIndex values index internalConstantCode custom1 custom2 custom3 custom4 custom5 custom6 custom7 custom8 custom9|\n\tinternalConstantCode := PDictionary new.\n\tinternalConstantCode at: false put: #pushfalse.\n\tinternalConstantCode at: true put: #pushtrue.\n\tinternalConstantCode at: nil put: #pushnil.\n\tinternalConstantCode at: 0 put: #push0.\n\tinternalConstantCode at: 1 put: #push1.\n\tinternalConstantCode at: 2 put: #push2.\n\tvalues := Array new: size.\n\tindex := 0.\n\tself do: [ :value | values at: (index := index + 1) put: value ].\n\tvalues := Array new: size.\n\tindex := 0.\n\tself do: [ :value | values at: (index := index + 1) put: value ].\n\tc := 1.\n\tbuckets at: index put: bucket.\n\t[ c <= bucket bucketSize ] whileTrue: [ \n\t\t\tkey := bucket at: c.\n\t\t\tbucketIndex := key hash \\\\ buckets size + 1.\n\t\t\tbucketIndex = index\n\t\t\t\tifTrue: [ c := c + 2 ]\n\t\t\t\tifFalse: [ \n\t\t\t\t\t(self bucketWithRoomAt: bucketIndex) newKey: key value: (bucket at: c + 1).\n\t\t\t\t\tbucket removeAt: c ] ]\n\t");
    Constant string_14100_Const = new_Constant((Optr)string_14100);
    // on:. 
    Send PSend14099 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14100_Const);
    Assign PAssign14098 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14099);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14101 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    // parse:. 
    Send PSend14104 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_parse_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14105 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14103 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14104, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14105, (Optr)&t_block_return);
    Block PBlock14102 = new_Block_with(empty_Array, empty_Array, PThreadedCode14103, 2, PSend14104, PSend14105);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14106 = new_Send((Optr)PSend14101, SMB_timesRepeat_, 1, (Optr)PBlock14102);
    Array PThreadedCode14097 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14098, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14100, (Optr)&t_send1, (Optr)PSend14099, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14101, (Optr)&t_push_closure, (Optr)PBlock14102, (Optr)&t_send1, (Optr)PSend14106, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14095 = new_Method_with(empty_Array, PArray14096, empty_Array, PThreadedCode14097, 3, PAssign14098, PSend14106, self);
    
    MethodClosure MC_SMB_benchLongMethod = new_MethodClosure((Method)PMethod14095, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchLongMethod, MC_SMB_benchLongMethod);
}


static void init_SMB_benchString() {
    Symbol SMB_benchString = new_Symbol(L"benchString");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14108 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14112 = new_String(L"a\n\t^ 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789'");
    Constant string_14112_Const = new_Constant((Optr)string_14112);
    // on:. 
    Send PSend14111 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14112_Const);
    Assign PAssign14110 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14111);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14113 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14116 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14117 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14115 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14116, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14117, (Optr)&t_block_return);
    Block PBlock14114 = new_Block_with(empty_Array, empty_Array, PThreadedCode14115, 2, PSend14116, PSend14117);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14118 = new_Send((Optr)PSend14113, SMB_timesRepeat_, 1, (Optr)PBlock14114);
    Array PThreadedCode14109 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14110, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14112, (Optr)&t_send1, (Optr)PSend14111, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14113, (Optr)&t_push_closure, (Optr)PBlock14114, (Optr)&t_send1, (Optr)PSend14118, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14107 = new_Method_with(empty_Array, PArray14108, empty_Array, PThreadedCode14109, 3, PAssign14110, PSend14118, self);
    
    MethodClosure MC_SMB_benchString = new_MethodClosure((Method)PMethod14107, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchString, MC_SMB_benchString);
}


static void init_SMB_benchMediumMethod() {
    Symbol SMB_benchMediumMethod = new_Symbol(L"benchMediumMethod");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14120 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14124 = new_String(L"initialize \n\tinternalConstantCode := PDictionary new.\n\tinternalConstantCode at: false put: #pushfalse.\n\tinternalConstantCode at: true put: #pushtrue.\n\tinternalConstantCode at: nil put: #pushnil.\n\tinternalConstantCode at: 0 put: #push0.\n\tinternalConstantCode at: 1 put: #push1.\n\tinternalConstantCode at: 2 put: #push2.");
    Constant string_14124_Const = new_Constant((Optr)string_14124);
    // on:. 
    Send PSend14123 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14124_Const);
    Assign PAssign14122 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14123);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14125 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14128 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14129 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14127 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14128, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14129, (Optr)&t_block_return);
    Block PBlock14126 = new_Block_with(empty_Array, empty_Array, PThreadedCode14127, 2, PSend14128, PSend14129);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14130 = new_Send((Optr)PSend14125, SMB_timesRepeat_, 1, (Optr)PBlock14126);
    Array PThreadedCode14121 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14122, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14124, (Optr)&t_send1, (Optr)PSend14123, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14125, (Optr)&t_push_closure, (Optr)PBlock14126, (Optr)&t_send1, (Optr)PSend14130, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14119 = new_Method_with(empty_Array, PArray14120, empty_Array, PThreadedCode14121, 3, PAssign14122, PSend14130, self);
    
    MethodClosure MC_SMB_benchMediumMethod = new_MethodClosure((Method)PMethod14119, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchMediumMethod, MC_SMB_benchMediumMethod);
}


static void init_SMB_benchAnnotation() {
    Symbol SMB_benchAnnotation = new_Symbol(L"benchAnnotation");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14132 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14136 = new_String(L"a\n\t\t<abcdefghil>");
    Constant string_14136_Const = new_Constant((Optr)string_14136);
    // on:. 
    Send PSend14135 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14136_Const);
    Assign PAssign14134 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14135);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14137 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14140 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14141 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14139 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14140, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14141, (Optr)&t_block_return);
    Block PBlock14138 = new_Block_with(empty_Array, empty_Array, PThreadedCode14139, 2, PSend14140, PSend14141);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14142 = new_Send((Optr)PSend14137, SMB_timesRepeat_, 1, (Optr)PBlock14138);
    Array PThreadedCode14133 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14134, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14136, (Optr)&t_send1, (Optr)PSend14135, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14137, (Optr)&t_push_closure, (Optr)PBlock14138, (Optr)&t_send1, (Optr)PSend14142, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14131 = new_Method_with(empty_Array, PArray14132, empty_Array, PThreadedCode14133, 3, PAssign14134, PSend14142, self);
    
    MethodClosure MC_SMB_benchAnnotation = new_MethodClosure((Method)PMethod14131, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchAnnotation, MC_SMB_benchAnnotation);
}


static void init_SMB_benchBlockWithArg() {
    Symbol SMB_benchBlockWithArg = new_Symbol(L"benchBlockWithArg");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14144 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14148 = new_String(L"a\n\t\t^ [ :a| ]");
    Constant string_14148_Const = new_Constant((Optr)string_14148);
    // on:. 
    Send PSend14147 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14148_Const);
    Assign PAssign14146 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14147);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14149 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14152 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14153 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14151 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14152, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14153, (Optr)&t_block_return);
    Block PBlock14150 = new_Block_with(empty_Array, empty_Array, PThreadedCode14151, 2, PSend14152, PSend14153);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14154 = new_Send((Optr)PSend14149, SMB_timesRepeat_, 1, (Optr)PBlock14150);
    Array PThreadedCode14145 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14146, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14148, (Optr)&t_send1, (Optr)PSend14147, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14149, (Optr)&t_push_closure, (Optr)PBlock14150, (Optr)&t_send1, (Optr)PSend14154, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14143 = new_Method_with(empty_Array, PArray14144, empty_Array, PThreadedCode14145, 3, PAssign14146, PSend14154, self);
    
    MethodClosure MC_SMB_benchBlockWithArg = new_MethodClosure((Method)PMethod14143, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchBlockWithArg, MC_SMB_benchBlockWithArg);
}


static void init_SMB_benchSmallMethod() {
    Symbol SMB_benchSmallMethod = new_Symbol(L"benchSmallMethod");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14156 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14160 = new_String(L"a\n\t^ self");
    Constant string_14160_Const = new_Constant((Optr)string_14160);
    // on:. 
    Send PSend14159 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14160_Const);
    Assign PAssign14158 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14159);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14161 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14164 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14165 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14163 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14164, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14165, (Optr)&t_block_return);
    Block PBlock14162 = new_Block_with(empty_Array, empty_Array, PThreadedCode14163, 2, PSend14164, PSend14165);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14166 = new_Send((Optr)PSend14161, SMB_timesRepeat_, 1, (Optr)PBlock14162);
    Array PThreadedCode14157 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14158, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14160, (Optr)&t_send1, (Optr)PSend14159, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14161, (Optr)&t_push_closure, (Optr)PBlock14162, (Optr)&t_send1, (Optr)PSend14166, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14155 = new_Method_with(empty_Array, PArray14156, empty_Array, PThreadedCode14157, 3, PAssign14158, PSend14166, self);
    
    MethodClosure MC_SMB_benchSmallMethod = new_MethodClosure((Method)PMethod14155, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchSmallMethod, MC_SMB_benchSmallMethod);
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14170 = new_Send((Optr)PSmalltalkParser_classReference, SMB_new, 0);
    Assign PAssign14169 = new_Assign((Optr)slot_Smalltalk_Parser_ParserBenchmark_parser, (Optr)PSend14170);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend14172 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_parser, SMB_method, 0);
    Assign PAssign14171 = new_Assign((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)PSend14172);
    Array PThreadedCode14168 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign14169, (Optr)&t_push_class_reference, (Optr)PSmalltalkParser_classReference, (Optr)&t_send0, (Optr)PSend14170, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14171, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_parser, (Optr)&t_send0, (Optr)PSend14172, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14167 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14168, 3, PAssign14169, PAssign14171, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod14167, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_SMB_benchBlock() {
    Symbol SMB_benchBlock = new_Symbol(L"benchBlock");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14174 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14178 = new_String(L"a\n\t\t^ []");
    Constant string_14178_Const = new_Constant((Optr)string_14178);
    // on:. 
    Send PSend14177 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14178_Const);
    Assign PAssign14176 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14177);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14179 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14182 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14183 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14181 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14182, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14183, (Optr)&t_block_return);
    Block PBlock14180 = new_Block_with(empty_Array, empty_Array, PThreadedCode14181, 2, PSend14182, PSend14183);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14184 = new_Send((Optr)PSend14179, SMB_timesRepeat_, 1, (Optr)PBlock14180);
    Array PThreadedCode14175 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14176, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14178, (Optr)&t_send1, (Optr)PSend14177, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14179, (Optr)&t_push_closure, (Optr)PBlock14180, (Optr)&t_send1, (Optr)PSend14184, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14173 = new_Method_with(empty_Array, PArray14174, empty_Array, PThreadedCode14175, 3, PAssign14176, PSend14184, self);
    
    MethodClosure MC_SMB_benchBlock = new_MethodClosure((Method)PMethod14173, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchBlock, MC_SMB_benchBlock);
}


static void init_SMB_repetitionCount() {
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    SmallInt int_300 = new_SmallInt(300);
    Array PThreadedCode14186 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_300, (Optr)&t_method_return);
    Constant int_300_Const = new_Constant((Optr)int_300);
    Method PMethod14185 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14186, 1, int_300_Const);
    
    MethodClosure MC_SMB_repetitionCount = new_MethodClosure((Method)PMethod14185, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_repetitionCount, MC_SMB_repetitionCount);
}


static void init_SMB_benchStringNumbers() {
    Symbol SMB_benchStringNumbers = new_Symbol(L"benchStringNumbers");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14188 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14192 = new_String(L"a\n\t^ '012345689'");
    Constant string_14192_Const = new_Constant((Optr)string_14192);
    // on:. 
    Send PSend14191 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14192_Const);
    Assign PAssign14190 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14191);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14193 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14196 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14197 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14195 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14196, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14197, (Optr)&t_block_return);
    Block PBlock14194 = new_Block_with(empty_Array, empty_Array, PThreadedCode14195, 2, PSend14196, PSend14197);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14198 = new_Send((Optr)PSend14193, SMB_timesRepeat_, 1, (Optr)PBlock14194);
    Array PThreadedCode14189 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14190, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14192, (Optr)&t_send1, (Optr)PSend14191, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14193, (Optr)&t_push_closure, (Optr)PBlock14194, (Optr)&t_send1, (Optr)PSend14198, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14187 = new_Method_with(empty_Array, PArray14188, empty_Array, PThreadedCode14189, 3, PAssign14190, PSend14198, self);
    
    MethodClosure MC_SMB_benchStringNumbers = new_MethodClosure((Method)PMethod14187, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchStringNumbers, MC_SMB_benchStringNumbers);
}


static void init_SMB_benchBlockWithArgAndBody() {
    Symbol SMB_benchBlockWithArgAndBody = new_Symbol(L"benchBlockWithArgAndBody");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14200 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14204 = new_String(L"a\n\t\t^ [ :a| a]");
    Constant string_14204_Const = new_Constant((Optr)string_14204);
    // on:. 
    Send PSend14203 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14204_Const);
    Assign PAssign14202 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14203);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14205 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14208 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14209 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14207 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14208, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14209, (Optr)&t_block_return);
    Block PBlock14206 = new_Block_with(empty_Array, empty_Array, PThreadedCode14207, 2, PSend14208, PSend14209);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14210 = new_Send((Optr)PSend14205, SMB_timesRepeat_, 1, (Optr)PBlock14206);
    Array PThreadedCode14201 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14202, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14204, (Optr)&t_send1, (Optr)PSend14203, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14205, (Optr)&t_push_closure, (Optr)PBlock14206, (Optr)&t_send1, (Optr)PSend14210, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14199 = new_Method_with(empty_Array, PArray14200, empty_Array, PThreadedCode14201, 3, PAssign14202, PSend14210, self);
    
    MethodClosure MC_SMB_benchBlockWithArgAndBody = new_MethodClosure((Method)PMethod14199, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchBlockWithArgAndBody, MC_SMB_benchBlockWithArgAndBody);
}


static void init_SMB_benchSymbol() {
    Symbol SMB_benchSymbol = new_Symbol(L"benchSymbol");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14212 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14216 = new_String(L"a\n\t^ #abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
    Constant string_14216_Const = new_Constant((Optr)string_14216);
    // on:. 
    Send PSend14215 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14216_Const);
    Assign PAssign14214 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14215);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend14217 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend14220 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend14221 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode14219 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14220, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend14221, (Optr)&t_block_return);
    Block PBlock14218 = new_Block_with(empty_Array, empty_Array, PThreadedCode14219, 2, PSend14220, PSend14221);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14222 = new_Send((Optr)PSend14217, SMB_timesRepeat_, 1, (Optr)PBlock14218);
    Array PThreadedCode14213 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign14214, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14216, (Optr)&t_send1, (Optr)PSend14215, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14217, (Optr)&t_push_closure, (Optr)PBlock14218, (Optr)&t_send1, (Optr)PSend14222, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14211 = new_Method_with(empty_Array, PArray14212, empty_Array, PThreadedCode14213, 3, PAssign14214, PSend14222, self);
    
    MethodClosure MC_SMB_benchSymbol = new_MethodClosure((Method)PMethod14211, Smalltalk_Parser_ParserBenchmark_Class);
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