#include <lib/class/Smalltalk/Parser/Benchmark/SmalltalkParser.h>


Optr layout_Smalltalk_Parser_Benchmark_SmalltalkParser_Class_class;
Optr slot_Smalltalk_Parser_Benchmark_SmalltalkParser_parser;
Optr slot_Smalltalk_Parser_Benchmark_SmalltalkParser_methodParser;
Optr layout_Smalltalk_Parser_Benchmark_SmalltalkParser;


static void init_SMB_benchLongMethod() {
    Symbol SMB_benchLongMethod = new_Symbol(L"benchLongMethod");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14023 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14027 = new_String(L"buildMorphicNotifierLabelled: label message: messageString\n\t| notifyPane window extentToUse row|\n\tself expandStack.\n\twindow := (PreDebugWindow labelled: label) model: self.\n\textentToUse := 450 @ 156. \"nice and wide to show plenty of the error msg\"\n\twindow\n\t\taddMorph: (row := self buttonRowForPreDebugWindow: window)\n\t\tfullFrame: (LayoutFrame fractions: (0@0 corner: 1@0) offsets: (0@0 corner: 0@row minExtent y)).\n\trow color: Color transparent.\n\tmessageString notNil\n\t\tifFalse:\n\t\t\t[notifyPane := PluggableListMorph on: self list: #contextStackList\n\t\t\t\tselected: #contextStackIndex changeSelected: #debugAt:\n\t\t\t\tmenu: nil keystroke: nil]\n\t\tifTrue:\n\t\t\t[notifyPane := PluggableTextMorph on: self text: nil accept: nil\n\t\t\t\treadSelection: nil menu: #debugProceedMenu:.\n\t\t\tnotifyPane editString: (self preDebugNotifierContentsFrom: messageString);\n\t\t\t\taskBeforeDiscardingEdits: false].\n\twindow\n\t\taddMorph: notifyPane\n\t\tfullFrame: (LayoutFrame fractions: (0@0 corner: 1@1) offsets: (0@24 corner: 0@0)).\n\twindow setBalloonTextForCloseBox.\n\twindow openInWorldExtent: extentToUse.\n\twindow currentWorld displayWorld. \"helps with interrupt not working somehow.\"\n\t^window");
    Constant string_14027_Const = new_Constant((Optr)string_14027);
    // on:. 
    Send PSend14026 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14027_Const);
    Assign PAssign14025 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14026);
    SmallInt int_200 = new_SmallInt(200);
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    // parse:. 
    Send PSend14030 = new_Send((Optr)slot_Smalltalk_Parser_Benchmark_SmalltalkParser_methodParser, SMB_parse_, 1, (Optr)VAR_string_0_0);
    Array PThreadedCode14029 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_Benchmark_SmalltalkParser_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14030, (Optr)&t_block_return);
    Block PBlock14028 = new_Block_with(empty_Array, empty_Array, PThreadedCode14029, 1, PSend14030);
    Constant int_200_Const = new_Constant((Optr)int_200);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14031 = new_Send((Optr)int_200_Const, SMB_timesRepeat_, 1, (Optr)PBlock14028);
    Array PThreadedCode14024 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign14025, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14027, (Optr)&t_send1, (Optr)PSend14026, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)int_200, (Optr)&t_push_closure, (Optr)PBlock14028, (Optr)&t_send1, (Optr)PSend14031, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14022 = new_Method_with(empty_Array, PArray14023, empty_Array, PThreadedCode14024, 3, PAssign14025, PSend14031, self);
    
    MethodClosure MC_SMB_benchLongMethod = new_MethodClosure((Method)PMethod14022, Smalltalk_Parser_Benchmark_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_Benchmark_SmalltalkParser_Class, SMB_benchLongMethod, MC_SMB_benchLongMethod);
}


static void init_SMB_tearDown() {
    Symbol SMB_tearDown = new_Symbol(L"tearDown");
    Assign PAssign14034 = new_Assign((Optr)slot_Smalltalk_Parser_Benchmark_SmalltalkParser_parser, (Optr)nil_Const);
    Assign PAssign14035 = new_Assign((Optr)slot_Smalltalk_Parser_Benchmark_SmalltalkParser_methodParser, (Optr)nil_Const);
    Array PThreadedCode14033 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign14034, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14035, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14032 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14033, 3, PAssign14034, PAssign14035, self);
    
    MethodClosure MC_SMB_tearDown = new_MethodClosure((Method)PMethod14032, Smalltalk_Parser_Benchmark_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_Benchmark_SmalltalkParser_Class, SMB_tearDown, MC_SMB_tearDown);
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14039 = new_Send((Optr)PSmalltalkParser_classReference, SMB_new, 0);
    Assign PAssign14038 = new_Assign((Optr)slot_Smalltalk_Parser_Benchmark_SmalltalkParser_parser, (Optr)PSend14039);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend14041 = new_Send((Optr)slot_Smalltalk_Parser_Benchmark_SmalltalkParser_parser, SMB_method, 0);
    Assign PAssign14040 = new_Assign((Optr)slot_Smalltalk_Parser_Benchmark_SmalltalkParser_methodParser, (Optr)PSend14041);
    Array PThreadedCode14037 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign14038, (Optr)&t_push_class_reference, (Optr)PSmalltalkParser_classReference, (Optr)&t_send0, (Optr)PSend14039, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14040, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_Benchmark_SmalltalkParser_parser, (Optr)&t_send0, (Optr)PSend14041, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14036 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14037, 3, PAssign14038, PAssign14040, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod14036, Smalltalk_Parser_Benchmark_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_Benchmark_SmalltalkParser_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_SMB_benchMethod() {
    Symbol SMB_benchMethod = new_Symbol(L"benchMethod");
    Variable VAR_string_0_0 = new_Variable_named(L"string", 0);
    Array PArray14043 = new_Array_with(1, (Optr)VAR_string_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    String string_14047 = new_String(L"a: b c: d\n\t\t\t<abc: 1 \"bla\"def: (2+2) ghi: (3 b)>\n\t\t\t<a: 4> \"test\"\n\t\t\t<boe>\n\t\t\t|x y z|\n\t\t\t1 + [ |a| a ] value: 3.\n\t\t\t^ 7 ");
    Constant string_14047_Const = new_Constant((Optr)string_14047);
    // on:. 
    Send PSend14046 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)string_14047_Const);
    Assign PAssign14045 = new_Assign((Optr)VAR_string_0_0, (Optr)PSend14046);
    SmallInt int_200 = new_SmallInt(200);
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    // parse:. 
    Send PSend14050 = new_Send((Optr)slot_Smalltalk_Parser_Benchmark_SmalltalkParser_methodParser, SMB_parse_, 1, (Optr)VAR_string_0_0);
    Array PThreadedCode14049 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_Benchmark_SmalltalkParser_methodParser, (Optr)&t_push_variable, (Optr)VAR_string_0_0, (Optr)&t_send1, (Optr)PSend14050, (Optr)&t_block_return);
    Block PBlock14048 = new_Block_with(empty_Array, empty_Array, PThreadedCode14049, 1, PSend14050);
    Constant int_200_Const = new_Constant((Optr)int_200);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend14051 = new_Send((Optr)int_200_Const, SMB_timesRepeat_, 1, (Optr)PBlock14048);
    Array PThreadedCode14044 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign14045, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push1, (Optr)string_14047, (Optr)&t_send1, (Optr)PSend14046, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)int_200, (Optr)&t_push_closure, (Optr)PBlock14048, (Optr)&t_send1, (Optr)PSend14051, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14042 = new_Method_with(empty_Array, PArray14043, empty_Array, PThreadedCode14044, 3, PAssign14045, PSend14051, self);
    
    MethodClosure MC_SMB_benchMethod = new_MethodClosure((Method)PMethod14042, Smalltalk_Parser_Benchmark_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_Benchmark_SmalltalkParser_Class, SMB_benchMethod, MC_SMB_benchMethod);
}

void init_Smalltalk_Parser_Benchmark_PBSmalltalkParser_layout() {
    layout_Smalltalk_Parser_Benchmark_SmalltalkParser_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_Parser_Benchmark_SmalltalkParser_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_Parser_Benchmark_SmalltalkParser_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_Parser_Benchmark_SmalltalkParser_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_Parser_Benchmark_SmalltalkParser_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_Parser_Benchmark_SmalltalkParser_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_SmalltalkParser = new_Symbol(L"SmalltalkParser");
    slot_Smalltalk_Parser_Benchmark_SmalltalkParser_parser = (Optr)new_Slot(2, L"parser");
    slot_Smalltalk_Parser_Benchmark_SmalltalkParser_methodParser = (Optr)new_Slot(3, L"methodParser");
    layout_Smalltalk_Parser_Benchmark_SmalltalkParser = (Optr)create_layout_with_vars(ObjectLayout_Class, 4);
    ((Array)layout_Smalltalk_Parser_Benchmark_SmalltalkParser)->values[0] = slot_PBenchmark_AbstractBenchmark_probeCount; // probeCount 
    ((Array)layout_Smalltalk_Parser_Benchmark_SmalltalkParser)->values[1] = slot_PBenchmark_BenchmarkSuite_runs; // runs 
    ((Array)layout_Smalltalk_Parser_Benchmark_SmalltalkParser)->values[2] = slot_Smalltalk_Parser_Benchmark_SmalltalkParser_parser; // parser 
    ((Array)layout_Smalltalk_Parser_Benchmark_SmalltalkParser)->values[3] = slot_Smalltalk_Parser_Benchmark_SmalltalkParser_methodParser; // methodParser 
    Smalltalk_Parser_Benchmark_SmalltalkParser_Class = (Class)new_Class(PBenchmark_BenchmarkSuite_Class, layout_Smalltalk_Parser_Benchmark_SmalltalkParser_Class_class);
    Smalltalk_Parser_Benchmark_SmalltalkParser_Class->layout = layout_Smalltalk_Parser_Benchmark_SmalltalkParser;
    Smalltalk_Parser_Benchmark_SmalltalkParser_Class->name = SMB_SmalltalkParser;
    
}

void init_Smalltalk_Parser_Benchmark_PBSmalltalkParser_methods() {
    init_SMB_benchLongMethod();
    init_SMB_tearDown();
    init_SMB_setUp();
    init_SMB_benchMethod();
    
}