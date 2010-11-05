#include <lib/class/Smalltalk/Parser/ParserBenchmark.h>


Optr slot_Smalltalk_Parser_ParserBenchmark_Class_class_layout;
Optr slot_Smalltalk_Parser_ParserBenchmark_Class_class_superclass;
Optr slot_Smalltalk_Parser_ParserBenchmark_Class_class_methods;
Optr slot_Smalltalk_Parser_ParserBenchmark_Class_class_name;
Optr slot_Smalltalk_Parser_ParserBenchmark_Class_class_package;
Optr layout_Smalltalk_Parser_ParserBenchmark_Class_class;
Optr slot_Smalltalk_Parser_ParserBenchmark_probeCount;
Optr slot_Smalltalk_Parser_ParserBenchmark_runs;
Optr slot_Smalltalk_Parser_ParserBenchmark_methodParser;
Optr slot_Smalltalk_Parser_ParserBenchmark_parser;
Optr layout_Smalltalk_Parser_ParserBenchmark;


static void init_SMB_benchLongMethod() {
    Symbol SMB_benchLongMethod = new_Symbol(L"benchLongMethod");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray2 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_6 = new_String(L"initialize \n\t|c key bucketIndex values index internalConstantCode custom1 custom2 custom3 custom4 custom5 custom6 custom7 custom8 custom9|\n\tinternalConstantCode := PDictionary new.\n\tinternalConstantCode at: false put: #pushfalse.\n\tinternalConstantCode at: true put: #pushtrue.\n\tinternalConstantCode at: nil put: #pushnil.\n\tinternalConstantCode at: 0 put: #push0.\n\tinternalConstantCode at: 1 put: #push1.\n\tinternalConstantCode at: 2 put: #push2.\n\tvalues := Array new: size.\n\tindex := 0.\n\tself do: [ :value | values at: (index := index + 1) put: value ].\n\tvalues := Array new: size.\n\tindex := 0.\n\tself do: [ :value | values at: (index := index + 1) put: value ].\n\tc := 1.\n\tbuckets at: index put: bucket.\n\t[ c <= bucket bucketSize ] whileTrue: [ \n\t\t\tkey := bucket at: c.\n\t\t\tbucketIndex := key hash \\\\ buckets size + 1.\n\t\t\tbucketIndex = index\n\t\t\t\tifTrue: [ c := c + 2 ]\n\t\t\t\tifFalse: [ \n\t\t\t\t\t(self bucketWithRoomAt: bucketIndex) newKey: key value: (bucket at: c + 1).\n\t\t\t\t\tbucket removeAt: c ] ]\n\t");
    Constant string_6_Const = new_Constant((Optr)string_6);
    // on:. 
    Send PSend5 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_6_Const);
    Assign PAssign4 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend5);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend7 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    // parse:. 
    Send PSend10 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_parse_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend11 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode9 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend10, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend11, (Optr)&t_block_return);
    Block PBlock8 = new_Block_with(empty_Array, empty_Array, PThreadedCode9, 2, PSend10, PSend11);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend12 = new_Send((Optr)PSend7, SMB_timesRepeat_, 1, (Optr)PBlock8);
    Array PThreadedCode3 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign4, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_6, (Optr)&t_send1, (Optr)PSend5, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7, (Optr)&t_push_closure, (Optr)PBlock8, (Optr)&t_send1, (Optr)PSend12, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod1 = new_Method_with(empty_Array, PArray2, empty_Array, PThreadedCode3, 3, PAssign4, PSend12, self);
    
    MethodClosure MC_SMB_benchLongMethod = new_MethodClosure((Method)PMethod1, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchLongMethod, MC_SMB_benchLongMethod);
}


static void init_SMB_benchAnnotation() {
    Symbol SMB_benchAnnotation = new_Symbol(L"benchAnnotation");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_18 = new_String(L"a\n\t\t<abcdefghil>");
    Constant string_18_Const = new_Constant((Optr)string_18);
    // on:. 
    Send PSend17 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_18_Const);
    Assign PAssign16 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend17);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend19 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend22 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend23 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode21 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend22, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend23, (Optr)&t_block_return);
    Block PBlock20 = new_Block_with(empty_Array, empty_Array, PThreadedCode21, 2, PSend22, PSend23);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend24 = new_Send((Optr)PSend19, SMB_timesRepeat_, 1, (Optr)PBlock20);
    Array PThreadedCode15 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign16, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_18, (Optr)&t_send1, (Optr)PSend17, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19, (Optr)&t_push_closure, (Optr)PBlock20, (Optr)&t_send1, (Optr)PSend24, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13 = new_Method_with(empty_Array, PArray14, empty_Array, PThreadedCode15, 3, PAssign16, PSend24, self);
    
    MethodClosure MC_SMB_benchAnnotation = new_MethodClosure((Method)PMethod13, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchAnnotation, MC_SMB_benchAnnotation);
}


static void init_SMB_benchMediumMethod() {
    Symbol SMB_benchMediumMethod = new_Symbol(L"benchMediumMethod");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray26 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_30 = new_String(L"initialize \n\tinternalConstantCode := PDictionary new.\n\tinternalConstantCode at: false put: #pushfalse.\n\tinternalConstantCode at: true put: #pushtrue.\n\tinternalConstantCode at: nil put: #pushnil.\n\tinternalConstantCode at: 0 put: #push0.\n\tinternalConstantCode at: 1 put: #push1.\n\tinternalConstantCode at: 2 put: #push2.");
    Constant string_30_Const = new_Constant((Optr)string_30);
    // on:. 
    Send PSend29 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_30_Const);
    Assign PAssign28 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend29);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend31 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend34 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend35 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode33 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend34, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend35, (Optr)&t_block_return);
    Block PBlock32 = new_Block_with(empty_Array, empty_Array, PThreadedCode33, 2, PSend34, PSend35);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend36 = new_Send((Optr)PSend31, SMB_timesRepeat_, 1, (Optr)PBlock32);
    Array PThreadedCode27 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign28, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_30, (Optr)&t_send1, (Optr)PSend29, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend31, (Optr)&t_push_closure, (Optr)PBlock32, (Optr)&t_send1, (Optr)PSend36, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod25 = new_Method_with(empty_Array, PArray26, empty_Array, PThreadedCode27, 3, PAssign28, PSend36, self);
    
    MethodClosure MC_SMB_benchMediumMethod = new_MethodClosure((Method)PMethod25, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchMediumMethod, MC_SMB_benchMediumMethod);
}


static void init_SMB_benchBlockWithArg() {
    Symbol SMB_benchBlockWithArg = new_Symbol(L"benchBlockWithArg");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray38 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_42 = new_String(L"a\n\t\t^ [ :a| ]");
    Constant string_42_Const = new_Constant((Optr)string_42);
    // on:. 
    Send PSend41 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_42_Const);
    Assign PAssign40 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend41);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend43 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend46 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend47 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode45 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend46, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend47, (Optr)&t_block_return);
    Block PBlock44 = new_Block_with(empty_Array, empty_Array, PThreadedCode45, 2, PSend46, PSend47);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend48 = new_Send((Optr)PSend43, SMB_timesRepeat_, 1, (Optr)PBlock44);
    Array PThreadedCode39 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign40, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_42, (Optr)&t_send1, (Optr)PSend41, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend43, (Optr)&t_push_closure, (Optr)PBlock44, (Optr)&t_send1, (Optr)PSend48, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod37 = new_Method_with(empty_Array, PArray38, empty_Array, PThreadedCode39, 3, PAssign40, PSend48, self);
    
    MethodClosure MC_SMB_benchBlockWithArg = new_MethodClosure((Method)PMethod37, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchBlockWithArg, MC_SMB_benchBlockWithArg);
}


static void init_SMB_benchSmallMethod() {
    Symbol SMB_benchSmallMethod = new_Symbol(L"benchSmallMethod");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray50 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_54 = new_String(L"a\n\t^ self");
    Constant string_54_Const = new_Constant((Optr)string_54);
    // on:. 
    Send PSend53 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_54_Const);
    Assign PAssign52 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend53);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend55 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend58 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend59 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode57 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend58, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend59, (Optr)&t_block_return);
    Block PBlock56 = new_Block_with(empty_Array, empty_Array, PThreadedCode57, 2, PSend58, PSend59);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend60 = new_Send((Optr)PSend55, SMB_timesRepeat_, 1, (Optr)PBlock56);
    Array PThreadedCode51 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign52, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_54, (Optr)&t_send1, (Optr)PSend53, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend55, (Optr)&t_push_closure, (Optr)PBlock56, (Optr)&t_send1, (Optr)PSend60, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod49 = new_Method_with(empty_Array, PArray50, empty_Array, PThreadedCode51, 3, PAssign52, PSend60, self);
    
    MethodClosure MC_SMB_benchSmallMethod = new_MethodClosure((Method)PMethod49, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchSmallMethod, MC_SMB_benchSmallMethod);
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend64 = new_Send((Optr)PSmalltalkParser_classReference, SMB_new, 0);
    Assign PAssign63 = new_Assign((Optr)slot_Smalltalk_Parser_ParserBenchmark_parser, (Optr)PSend64);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend66 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_parser, SMB_method, 0);
    Assign PAssign65 = new_Assign((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)PSend66);
    Array PThreadedCode62 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign63, (Optr)&t_push_class_reference, (Optr)PSmalltalkParser_classReference, (Optr)&t_send0, (Optr)PSend64, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign65, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_parser, (Optr)&t_send0, (Optr)PSend66, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod61 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode62, 3, PAssign63, PAssign65, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod61, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_SMB_repetitionCount() {
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    SmallInt int_300 = new_SmallInt(300);
    Array PThreadedCode68 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_300, (Optr)&t_method_return);
    Constant int_300_Const = new_Constant((Optr)int_300);
    Method PMethod67 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode68, 1, int_300_Const);
    
    MethodClosure MC_SMB_repetitionCount = new_MethodClosure((Method)PMethod67, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_repetitionCount, MC_SMB_repetitionCount);
}


static void init_SMB_benchBlockWithArgAndBody() {
    Symbol SMB_benchBlockWithArgAndBody = new_Symbol(L"benchBlockWithArgAndBody");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray70 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_74 = new_String(L"a\n\t\t^ [ :a| a]");
    Constant string_74_Const = new_Constant((Optr)string_74);
    // on:. 
    Send PSend73 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_74_Const);
    Assign PAssign72 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend73);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend75 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend78 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend79 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode77 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend78, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend79, (Optr)&t_block_return);
    Block PBlock76 = new_Block_with(empty_Array, empty_Array, PThreadedCode77, 2, PSend78, PSend79);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend80 = new_Send((Optr)PSend75, SMB_timesRepeat_, 1, (Optr)PBlock76);
    Array PThreadedCode71 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign72, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_74, (Optr)&t_send1, (Optr)PSend73, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend75, (Optr)&t_push_closure, (Optr)PBlock76, (Optr)&t_send1, (Optr)PSend80, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod69 = new_Method_with(empty_Array, PArray70, empty_Array, PThreadedCode71, 3, PAssign72, PSend80, self);
    
    MethodClosure MC_SMB_benchBlockWithArgAndBody = new_MethodClosure((Method)PMethod69, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchBlockWithArgAndBody, MC_SMB_benchBlockWithArgAndBody);
}


static void init_SMB_benchBlock() {
    Symbol SMB_benchBlock = new_Symbol(L"benchBlock");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray82 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_86 = new_String(L"a\n\t\t^ []");
    Constant string_86_Const = new_Constant((Optr)string_86);
    // on:. 
    Send PSend85 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_86_Const);
    Assign PAssign84 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend85);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend87 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend90 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend91 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode89 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend90, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend91, (Optr)&t_block_return);
    Block PBlock88 = new_Block_with(empty_Array, empty_Array, PThreadedCode89, 2, PSend90, PSend91);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend92 = new_Send((Optr)PSend87, SMB_timesRepeat_, 1, (Optr)PBlock88);
    Array PThreadedCode83 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign84, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_86, (Optr)&t_send1, (Optr)PSend85, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend87, (Optr)&t_push_closure, (Optr)PBlock88, (Optr)&t_send1, (Optr)PSend92, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod81 = new_Method_with(empty_Array, PArray82, empty_Array, PThreadedCode83, 3, PAssign84, PSend92, self);
    
    MethodClosure MC_SMB_benchBlock = new_MethodClosure((Method)PMethod81, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchBlock, MC_SMB_benchBlock);
}


static void init_SMB_benchSymbol() {
    Symbol SMB_benchSymbol = new_Symbol(L"benchSymbol");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray94 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_98 = new_String(L"a\n\t^ #abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
    Constant string_98_Const = new_Constant((Optr)string_98);
    // on:. 
    Send PSend97 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_98_Const);
    Assign PAssign96 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend97);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend99 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend102 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend103 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode101 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend102, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend103, (Optr)&t_block_return);
    Block PBlock100 = new_Block_with(empty_Array, empty_Array, PThreadedCode101, 2, PSend102, PSend103);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend104 = new_Send((Optr)PSend99, SMB_timesRepeat_, 1, (Optr)PBlock100);
    Array PThreadedCode95 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign96, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_98, (Optr)&t_send1, (Optr)PSend97, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend99, (Optr)&t_push_closure, (Optr)PBlock100, (Optr)&t_send1, (Optr)PSend104, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod93 = new_Method_with(empty_Array, PArray94, empty_Array, PThreadedCode95, 3, PAssign96, PSend104, self);
    
    MethodClosure MC_SMB_benchSymbol = new_MethodClosure((Method)PMethod93, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchSymbol, MC_SMB_benchSymbol);
}


static void init_SMB_benchInteger() {
    Symbol SMB_benchInteger = new_Symbol(L"benchInteger");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray106 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_110 = new_String(L"a\n\t^ 1234567890");
    Constant string_110_Const = new_Constant((Optr)string_110);
    // on:. 
    Send PSend109 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_110_Const);
    Assign PAssign108 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend109);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend111 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend114 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend115 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode113 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend114, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend115, (Optr)&t_block_return);
    Block PBlock112 = new_Block_with(empty_Array, empty_Array, PThreadedCode113, 2, PSend114, PSend115);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend116 = new_Send((Optr)PSend111, SMB_timesRepeat_, 1, (Optr)PBlock112);
    Array PThreadedCode107 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign108, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_110, (Optr)&t_send1, (Optr)PSend109, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend111, (Optr)&t_push_closure, (Optr)PBlock112, (Optr)&t_send1, (Optr)PSend116, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod105 = new_Method_with(empty_Array, PArray106, empty_Array, PThreadedCode107, 3, PAssign108, PSend116, self);
    
    MethodClosure MC_SMB_benchInteger = new_MethodClosure((Method)PMethod105, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchInteger, MC_SMB_benchInteger);
}


static void init_SMB_benchFloat() {
    Symbol SMB_benchFloat = new_Symbol(L"benchFloat");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray118 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_122 = new_String(L"a\n\t^ -1.2345678");
    Constant string_122_Const = new_Constant((Optr)string_122);
    // on:. 
    Send PSend121 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_122_Const);
    Assign PAssign120 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend121);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend123 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend126 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend127 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode125 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend126, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend127, (Optr)&t_block_return);
    Block PBlock124 = new_Block_with(empty_Array, empty_Array, PThreadedCode125, 2, PSend126, PSend127);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend128 = new_Send((Optr)PSend123, SMB_timesRepeat_, 1, (Optr)PBlock124);
    Array PThreadedCode119 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign120, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_122, (Optr)&t_send1, (Optr)PSend121, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend123, (Optr)&t_push_closure, (Optr)PBlock124, (Optr)&t_send1, (Optr)PSend128, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod117 = new_Method_with(empty_Array, PArray118, empty_Array, PThreadedCode119, 3, PAssign120, PSend128, self);
    
    MethodClosure MC_SMB_benchFloat = new_MethodClosure((Method)PMethod117, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchFloat, MC_SMB_benchFloat);
}


static void init_SMB_benchString() {
    Symbol SMB_benchString = new_Symbol(L"benchString");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray130 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_134 = new_String(L"a\n\t^ 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789'");
    Constant string_134_Const = new_Constant((Optr)string_134);
    // on:. 
    Send PSend133 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_134_Const);
    Assign PAssign132 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend133);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend135 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend138 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend139 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode137 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend138, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend139, (Optr)&t_block_return);
    Block PBlock136 = new_Block_with(empty_Array, empty_Array, PThreadedCode137, 2, PSend138, PSend139);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend140 = new_Send((Optr)PSend135, SMB_timesRepeat_, 1, (Optr)PBlock136);
    Array PThreadedCode131 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign132, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_134, (Optr)&t_send1, (Optr)PSend133, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend135, (Optr)&t_push_closure, (Optr)PBlock136, (Optr)&t_send1, (Optr)PSend140, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod129 = new_Method_with(empty_Array, PArray130, empty_Array, PThreadedCode131, 3, PAssign132, PSend140, self);
    
    MethodClosure MC_SMB_benchString = new_MethodClosure((Method)PMethod129, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchString, MC_SMB_benchString);
}


static void init_SMB_benchStringNumbers() {
    Symbol SMB_benchStringNumbers = new_Symbol(L"benchStringNumbers");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray142 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_146 = new_String(L"a\n\t^ '012345689'");
    Constant string_146_Const = new_Constant((Optr)string_146);
    // on:. 
    Send PSend145 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_146_Const);
    Assign PAssign144 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend145);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend147 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend150 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend151 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode149 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend150, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend151, (Optr)&t_block_return);
    Block PBlock148 = new_Block_with(empty_Array, empty_Array, PThreadedCode149, 2, PSend150, PSend151);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend152 = new_Send((Optr)PSend147, SMB_timesRepeat_, 1, (Optr)PBlock148);
    Array PThreadedCode143 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign144, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_146, (Optr)&t_send1, (Optr)PSend145, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend147, (Optr)&t_push_closure, (Optr)PBlock148, (Optr)&t_send1, (Optr)PSend152, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod141 = new_Method_with(empty_Array, PArray142, empty_Array, PThreadedCode143, 3, PAssign144, PSend152, self);
    
    MethodClosure MC_SMB_benchStringNumbers = new_MethodClosure((Method)PMethod141, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchStringNumbers, MC_SMB_benchStringNumbers);
}


static void init_SMB_benchBlockNested() {
    Symbol SMB_benchBlockNested = new_Symbol(L"benchBlockNested");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray154 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_158 = new_String(L"a\n\t\t^ [[[[[[[[[[[]]]]]]]]]]]");
    Constant string_158_Const = new_Constant((Optr)string_158);
    // on:. 
    Send PSend157 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_158_Const);
    Assign PAssign156 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend157);
    Symbol SMB_repetitionCount = new_Symbol(L"repetitionCount");
    // repetitionCount. 
    Send PSend159 = new_Send((Optr)self, SMB_repetitionCount, 0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend162 = new_Send((Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, SMB_match_, 1, (Optr)VAR_string_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend163 = new_Send((Optr)VAR_string_0_0, SMB_reset, 0);
    Array PThreadedCode161 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_ParserBenchmark_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend162, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send0, (Optr)PSend163, (Optr)&t_block_return);
    Block PBlock160 = new_Block_with(empty_Array, empty_Array, PThreadedCode161, 2, PSend162, PSend163);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend164 = new_Send((Optr)PSend159, SMB_timesRepeat_, 1, (Optr)PBlock160);
    Array PThreadedCode155 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign156, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_158, (Optr)&t_send1, (Optr)PSend157, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend159, (Optr)&t_push_closure, (Optr)PBlock160, (Optr)&t_send1, (Optr)PSend164, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod153 = new_Method_with(empty_Array, PArray154, empty_Array, PThreadedCode155, 3, PAssign156, PSend164, self);
    
    MethodClosure MC_SMB_benchBlockNested = new_MethodClosure((Method)PMethod153, Smalltalk_Parser_ParserBenchmark_Class);
    store_method(Smalltalk_Parser_ParserBenchmark_Class, SMB_benchBlockNested, MC_SMB_benchBlockNested);
}

void init_Smalltalk_Parser_PParserBenchmark_layout() {
    slot_Smalltalk_Parser_ParserBenchmark_Class_class_layout = (Optr)new_Slot(0, L"layout");
    slot_Smalltalk_Parser_ParserBenchmark_Class_class_superclass = (Optr)new_Slot(1, L"superclass");
    slot_Smalltalk_Parser_ParserBenchmark_Class_class_methods = (Optr)new_Slot(2, L"methods");
    slot_Smalltalk_Parser_ParserBenchmark_Class_class_name = (Optr)new_Slot(3, L"name");
    slot_Smalltalk_Parser_ParserBenchmark_Class_class_package = (Optr)new_Slot(4, L"package");
    layout_Smalltalk_Parser_ParserBenchmark_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_Parser_ParserBenchmark_Class_class)->values[0] = slot_Smalltalk_Parser_ParserBenchmark_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_Parser_ParserBenchmark_Class_class)->values[1] = slot_Smalltalk_Parser_ParserBenchmark_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_Parser_ParserBenchmark_Class_class)->values[2] = slot_Smalltalk_Parser_ParserBenchmark_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_Parser_ParserBenchmark_Class_class)->values[3] = slot_Smalltalk_Parser_ParserBenchmark_Class_class_name; // name 
    ((Array)layout_Smalltalk_Parser_ParserBenchmark_Class_class)->values[4] = slot_Smalltalk_Parser_ParserBenchmark_Class_class_package; // package 
    
    Symbol  SMB_ParserBenchmark = new_Symbol(L"ParserBenchmark");
    slot_Smalltalk_Parser_ParserBenchmark_probeCount = (Optr)new_Slot(0, L"probeCount");
    slot_Smalltalk_Parser_ParserBenchmark_runs = (Optr)new_Slot(1, L"runs");
    slot_Smalltalk_Parser_ParserBenchmark_methodParser = (Optr)new_Slot(2, L"methodParser");
    slot_Smalltalk_Parser_ParserBenchmark_parser = (Optr)new_Slot(3, L"parser");
    layout_Smalltalk_Parser_ParserBenchmark = (Optr)create_layout_with_vars(ObjectLayout_Class, 4);
    ((Array)layout_Smalltalk_Parser_ParserBenchmark)->values[0] = slot_Smalltalk_Parser_ParserBenchmark_probeCount; // probeCount 
    ((Array)layout_Smalltalk_Parser_ParserBenchmark)->values[1] = slot_Smalltalk_Parser_ParserBenchmark_runs; // runs 
    ((Array)layout_Smalltalk_Parser_ParserBenchmark)->values[2] = slot_Smalltalk_Parser_ParserBenchmark_methodParser; // methodParser 
    ((Array)layout_Smalltalk_Parser_ParserBenchmark)->values[3] = slot_Smalltalk_Parser_ParserBenchmark_parser; // parser 
    Smalltalk_Parser_ParserBenchmark_Class = (Class)new_Class(PBenchmark_BenchmarkSuite_Class, layout_Smalltalk_Parser_ParserBenchmark_Class_class);
    Smalltalk_Parser_ParserBenchmark_Class->layout = layout_Smalltalk_Parser_ParserBenchmark;
    Smalltalk_Parser_ParserBenchmark_Class->name = SMB_ParserBenchmark;
    
}

void init_Smalltalk_Parser_PParserBenchmark_methods() {
    init_SMB_benchLongMethod();
    init_SMB_benchAnnotation();
    init_SMB_benchMediumMethod();
    init_SMB_benchBlockWithArg();
    init_SMB_benchSmallMethod();
    init_SMB_setUp();
    init_SMB_repetitionCount();
    init_SMB_benchBlockWithArgAndBody();
    init_SMB_benchBlock();
    init_SMB_benchSymbol();
    init_SMB_benchInteger();
    init_SMB_benchFloat();
    init_SMB_benchString();
    init_SMB_benchStringNumbers();
    init_SMB_benchBlockNested();
    
}