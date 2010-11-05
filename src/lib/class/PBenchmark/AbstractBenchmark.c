#include <lib/class/PBenchmark/AbstractBenchmark.h>


Optr layout_PBenchmark_AbstractBenchmark_Class_class;
Optr slot_PBenchmark_AbstractBenchmark_probeCount;
Optr layout_PBenchmark_AbstractBenchmark;


static void init_SMB_confidenceVariance() {
    Symbol SMB_confidenceVariance = new_Symbol(L"confidenceVariance");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6861 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_probeCount = new_Symbol(L"probeCount");
    // probeCount. 
    Send PSend6863 = new_Send((Optr)self, SMB_probeCount, 0);
    SmallInt int_30 = new_SmallInt(30);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_30_Const = new_Constant((Optr)int_30);
    // >=. 
    Send PSend6864 = new_Send((Optr)PSend6863, SMB__gt__equals_, 1, (Optr)int_30_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_gaussianConfidenceFactor = new_Symbol(L"gaussianConfidenceFactor");
    // gaussianConfidenceFactor. 
    Send PSend6868 = new_Send((Optr)self, SMB_gaussianConfidenceFactor, 0);
    Symbol SMB_stdev = new_Symbol(L"stdev");
    // stdev. 
    Send PSend6869 = new_Send((Optr)self, SMB_stdev, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend6870 = new_Send((Optr)PSend6868, SMB__times_, 1, (Optr)PSend6869);
    // probeCount. 
    Send PSend6871 = new_Send((Optr)self, SMB_probeCount, 0);
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    // asFloat. 
    Send PSend6872 = new_Send((Optr)PSend6871, SMB_asFloat, 0);
    Symbol SMB_sqrt = new_Symbol(L"sqrt");
    // sqrt. 
    Send PSend6873 = new_Send((Optr)PSend6872, SMB_sqrt, 0);
    Symbol SMB__divide_ = new_Symbol(L"/");
    // /. 
    Send PSend6874 = new_Send((Optr)PSend6870, SMB__divide_, 1, (Optr)PSend6873);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6875 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend6874);
    Array PThreadedCode6867 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6868, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6869, (Optr)&t_send1, (Optr)PSend6870, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6871, (Optr)&t_send0, (Optr)PSend6872, (Optr)&t_send0, (Optr)PSend6873, (Optr)&t_send1, (Optr)PSend6874, (Optr)&t_send1, (Optr)PSend6875, (Optr)&t_block_return);
    Block PBlock6866 = new_Block_with(empty_Array, empty_Array, PThreadedCode6867, 1, PSend6875);
    // ifTrue:. 
    Send PSend6865 = new_Send((Optr)PSend6864, SMB_ifTrue_, 1, (Optr)PBlock6866);
    Symbol SMB_studentsTConfidenceFactor = new_Symbol(L"studentsTConfidenceFactor");
    // studentsTConfidenceFactor. 
    Send PSend6876 = new_Send((Optr)self, SMB_studentsTConfidenceFactor, 0);
    // stdev. 
    Send PSend6877 = new_Send((Optr)self, SMB_stdev, 0);
    // *. 
    Send PSend6878 = new_Send((Optr)PSend6876, SMB__times_, 1, (Optr)PSend6877);
    // probeCount. 
    Send PSend6879 = new_Send((Optr)self, SMB_probeCount, 0);
    // asFloat. 
    Send PSend6880 = new_Send((Optr)PSend6879, SMB_asFloat, 0);
    // sqrt. 
    Send PSend6881 = new_Send((Optr)PSend6880, SMB_sqrt, 0);
    // /. 
    Send PSend6882 = new_Send((Optr)PSend6878, SMB__divide_, 1, (Optr)PSend6881);
    Array PThreadedCode6862 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6863, (Optr)&t_push1, (Optr)int_30, (Optr)&t_send1, (Optr)PSend6864, (Optr)&t_send_ifTrue_, (Optr)PSend6865, (Optr)PBlock6866, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6876, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6877, (Optr)&t_send1, (Optr)PSend6878, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6879, (Optr)&t_send0, (Optr)PSend6880, (Optr)&t_send0, (Optr)PSend6881, (Optr)&t_send1, (Optr)PSend6882, (Optr)&t_method_return);
    Block PBlock6860 = new_Block_with(PArray6861, empty_Array, PThreadedCode6862, 2, PSend6865, PSend6882);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6883 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6860);
    Array PThreadedCode6859 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6860, (Optr)&t_send1, (Optr)PSend6883, (Optr)&t_method_return);
    Method PMethod6858 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6859, 1, PSend6883);
    
    MethodClosure MC_SMB_confidenceVariance = new_MethodClosure((Method)PMethod6858, PBenchmark_AbstractBenchmark_Class);
    store_method(PBenchmark_AbstractBenchmark_Class, SMB_confidenceVariance, MC_SMB_confidenceVariance);
}


static void init_SMB_currentMillis() {
    Symbol SMB_currentMillis = new_Symbol(L"currentMillis");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_millisecondClock = new_Symbol(L"millisecondClock");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    Annotation PAnnotation6886 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_millisecondClock, (Optr)SMB_Chronology_minus_Time);
    Array PArray6885 = new_Array_with(1, (Optr)PAnnotation6886);
    Symbol SMB_millisecondClockValue = new_Symbol(L"millisecondClockValue");
    // millisecondClockValue. 
    Send PSend6888 = new_Send((Optr)Time_classReference, SMB_millisecondClockValue, 0);
    Array PThreadedCode6887 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_send0, (Optr)PSend6888, (Optr)&t_method_return);
    NativeMethod PNativeMethod6884 = new_NativeMethod_with(empty_Array, empty_Array, PArray6885, PThreadedCode6887, 1, PSend6888);
    
    MethodClosure MC_SMB_currentMillis = new_MethodClosure((Method)PNativeMethod6884, PBenchmark_AbstractBenchmark_Class);
    store_method(PBenchmark_AbstractBenchmark_Class, SMB_currentMillis, MC_SMB_currentMillis);
}


static void init_SMB_studentsTConfidenceFactor() {
    Symbol SMB_studentsTConfidenceFactor = new_Symbol(L"studentsTConfidenceFactor");
    Symbol SMB_shouldBeImplemented = new_Symbol(L"shouldBeImplemented");
    // shouldBeImplemented. 
    Send PSend6891 = new_Send((Optr)self, SMB_shouldBeImplemented, 0);
    Array PThreadedCode6890 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6891, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6889 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6890, 2, PSend6891, self);
    
    MethodClosure MC_SMB_studentsTConfidenceFactor = new_MethodClosure((Method)PMethod6889, PBenchmark_AbstractBenchmark_Class);
    store_method(PBenchmark_AbstractBenchmark_Class, SMB_studentsTConfidenceFactor, MC_SMB_studentsTConfidenceFactor);
}


static void init_SMB_absdev() {
    Symbol SMB_absdev = new_Symbol(L"absdev");
    Symbol SMB_average = new_Symbol(L"average");
    // average. 
    Send PSend6894 = new_Send((Optr)self, SMB_average, 0);
    Symbol SMB_stdev = new_Symbol(L"stdev");
    // stdev. 
    Send PSend6895 = new_Send((Optr)self, SMB_stdev, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend6896 = new_Send((Optr)PSend6894, SMB__times_, 1, (Optr)PSend6895);
    Array PThreadedCode6893 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6894, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6895, (Optr)&t_send1, (Optr)PSend6896, (Optr)&t_method_return);
    Method PMethod6892 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6893, 1, PSend6896);
    
    MethodClosure MC_SMB_absdev = new_MethodClosure((Method)PMethod6892, PBenchmark_AbstractBenchmark_Class);
    store_method(PBenchmark_AbstractBenchmark_Class, SMB_absdev, MC_SMB_absdev);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    SmallInt int_100 = new_SmallInt(100);
    Constant int_100_Const = new_Constant((Optr)int_100);
    Assign PAssign6899 = new_Assign((Optr)slot_PBenchmark_AbstractBenchmark_probeCount, (Optr)int_100_Const);
    Array PThreadedCode6898 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign6899, (Optr)&t_push1, (Optr)int_100, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6897 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6898, 2, PAssign6899, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod6897, PBenchmark_AbstractBenchmark_Class);
    store_method(PBenchmark_AbstractBenchmark_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray6901 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_significantDigits_0_1 = new_Variable_named(L"significantDigits", 0);
    Variable VAR_quantum_0_2 = new_Variable_named(L"quantum", 0);
    Variable VAR_total_0_3 = new_Variable_named(L"total", 0);
    Variable VAR_stdev_0_4 = new_Variable_named(L"stdev", 0);
    Variable VAR_totalSignificantDigits_0_5 = new_Variable_named(L"totalSignificantDigits", 0);
    Array PArray6902 = new_Array_with(5, (Optr)VAR_significantDigits_0_1, (Optr)VAR_quantum_0_2, (Optr)VAR_total_0_3, (Optr)VAR_stdev_0_4, (Optr)VAR_totalSignificantDigits_0_5);
    Symbol SMB_significantDigits = new_Symbol(L"significantDigits");
    // significantDigits. 
    Send PSend6905 = new_Send((Optr)self, SMB_significantDigits, 0);
    Assign PAssign6904 = new_Assign((Optr)VAR_significantDigits_0_1, (Optr)PSend6905);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__divide_ = new_Symbol(L"/");
    SmallInt int_10 = new_SmallInt(10);
    Constant int_10_Const = new_Constant((Optr)int_10);
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    // asFloat. 
    Send PSend6909 = new_Send((Optr)int_10_Const, SMB_asFloat, 0);
    // /. 
    Send PSend6908 = new_Send((Optr)int_1_Const, SMB__divide_, 1, (Optr)PSend6909);
    Symbol SMB_raisedTo_ = new_Symbol(L"raisedTo:");
    // raisedTo:. 
    Send PSend6907 = new_Send((Optr)PSend6908, SMB_raisedTo_, 1, (Optr)VAR_significantDigits_0_1);
    Assign PAssign6906 = new_Assign((Optr)VAR_quantum_0_2, (Optr)PSend6907);
    Symbol SMB_confidenceVariance = new_Symbol(L"confidenceVariance");
    // confidenceVariance. 
    Send PSend6912 = new_Send((Optr)self, SMB_confidenceVariance, 0);
    Symbol SMB_roundTo_ = new_Symbol(L"roundTo:");
    // roundTo:. 
    Send PSend6911 = new_Send((Optr)PSend6912, SMB_roundTo_, 1, (Optr)VAR_quantum_0_2);
    Assign PAssign6910 = new_Assign((Optr)VAR_stdev_0_4, (Optr)PSend6911);
    Symbol SMB_total = new_Symbol(L"total");
    // total. 
    Send PSend6916 = new_Send((Optr)self, SMB_total, 0);
    // roundTo:. 
    Send PSend6915 = new_Send((Optr)PSend6916, SMB_roundTo_, 1, (Optr)VAR_quantum_0_2);
    Symbol SMB_printString = new_Symbol(L"printString");
    // printString. 
    Send PSend6914 = new_Send((Optr)PSend6915, SMB_printString, 0);
    Assign PAssign6913 = new_Assign((Optr)VAR_total_0_3, (Optr)PSend6914);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6919 = new_Send((Optr)VAR_total_0_3, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    Character char_2898 = new_Character(L'.');
    Constant char_2898_Const = new_Constant((Optr)char_2898);
    // indexOf:. 
    Send PSend6920 = new_Send((Optr)VAR_total_0_3, SMB_indexOf_, 1, (Optr)char_2898_Const);
    // -. 
    Send PSend6918 = new_Send((Optr)PSend6919, SMB__minus_, 1, (Optr)PSend6920);
    Assign PAssign6917 = new_Assign((Optr)VAR_totalSignificantDigits_0_5, (Optr)PSend6918);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend6921 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)VAR_total_0_3);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend6922 = new_Send((Optr)VAR_totalSignificantDigits_0_5, SMB__lt_, 1, (Optr)VAR_significantDigits_0_1);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // -. 
    Send PSend6926 = new_Send((Optr)VAR_significantDigits_0_1, SMB__minus_, 1, (Optr)VAR_totalSignificantDigits_0_5);
    String string_6929 = new_String(L"0");
    Constant string_6929_Const = new_Constant((Optr)string_6929);
    // <<. 
    Send PSend6930 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_6929_Const);
    Array PThreadedCode6928 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_6929, (Optr)&t_send1, (Optr)PSend6930, (Optr)&t_block_return);
    Block PBlock6927 = new_Block_with(empty_Array, empty_Array, PThreadedCode6928, 1, PSend6930);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend6931 = new_Send((Optr)PSend6926, SMB_timesRepeat_, 1, (Optr)PBlock6927);
    Array PThreadedCode6925 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_significantDigits_0_1, (Optr)&t_push_variable, (Optr)VAR_totalSignificantDigits_0_5, (Optr)&t_send1, (Optr)PSend6926, (Optr)&t_push_closure, (Optr)PBlock6927, (Optr)&t_send1, (Optr)PSend6931, (Optr)&t_block_return);
    Block PBlock6924 = new_Block_with(empty_Array, empty_Array, PThreadedCode6925, 1, PSend6931);
    // ifTrue:. 
    Send PSend6923 = new_Send((Optr)PSend6922, SMB_ifTrue_, 1, (Optr)PBlock6924);
    String string_6932 = new_String(L" +/-");
    Constant string_6932_Const = new_Constant((Optr)string_6932);
    // <<. 
    Send PSend6933 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_6932_Const);
    // <<. 
    Send PSend6934 = new_Send((Optr)PSend6933, SMB__shiftLeft_, 1, (Optr)VAR_stdev_0_4);
    Array PThreadedCode6903 = instantiate_Array_with(ThreadedCode_Class, 0, 91, (Optr)&t_push1, (Optr)PAssign6904, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6905, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6906, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send0, (Optr)PSend6909, (Optr)&t_send1, (Optr)PSend6908, (Optr)&t_push_variable, (Optr)VAR_significantDigits_0_1, (Optr)&t_send1, (Optr)PSend6907, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6910, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6912, (Optr)&t_push_variable, (Optr)VAR_quantum_0_2, (Optr)&t_send1, (Optr)PSend6911, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6913, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6916, (Optr)&t_push_variable, (Optr)VAR_quantum_0_2, (Optr)&t_send1, (Optr)PSend6915, (Optr)&t_send0, (Optr)PSend6914, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6917, (Optr)&t_push_variable, (Optr)VAR_total_0_3, (Optr)&t_send0, (Optr)PSend6919, (Optr)&t_push_variable, (Optr)VAR_total_0_3, (Optr)&t_push1, (Optr)char_2898, (Optr)&t_send1, (Optr)PSend6920, (Optr)&t_send1, (Optr)PSend6918, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_total_0_3, (Optr)&t_send1, (Optr)PSend6921, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_totalSignificantDigits_0_5, (Optr)&t_push_variable, (Optr)VAR_significantDigits_0_1, (Optr)&t_send1, (Optr)PSend6922, (Optr)&t_send_ifTrue_, (Optr)PSend6923, (Optr)PBlock6924, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_6932, (Optr)&t_send1, (Optr)PSend6933, (Optr)&t_push_variable, (Optr)VAR_stdev_0_4, (Optr)&t_send1, (Optr)PSend6934, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6900 = new_Method_with(PArray6901, PArray6902, empty_Array, PThreadedCode6903, 9, PAssign6904, PAssign6906, PAssign6910, PAssign6913, PAssign6917, PSend6921, PSend6923, PSend6934, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod6900, PBenchmark_AbstractBenchmark_Class);
    store_method(PBenchmark_AbstractBenchmark_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_gaussianConfidenceFactor() {
    Symbol SMB_gaussianConfidenceFactor = new_Symbol(L"gaussianConfidenceFactor");
    Array PThreadedCode6936 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_1);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Method PMethod6935 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6936, 1, int_1_Const);
    
    MethodClosure MC_SMB_gaussianConfidenceFactor = new_MethodClosure((Method)PMethod6935, PBenchmark_AbstractBenchmark_Class);
    store_method(PBenchmark_AbstractBenchmark_Class, SMB_gaussianConfidenceFactor, MC_SMB_gaussianConfidenceFactor);
}


static void init_SMB_probeCount() {
    Symbol SMB_probeCount = new_Symbol(L"probeCount");
    Array PThreadedCode6938 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_AbstractBenchmark_probeCount, (Optr)&t_method_return);
    Method PMethod6937 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6938, 1, slot_PBenchmark_AbstractBenchmark_probeCount);
    
    MethodClosure MC_SMB_probeCount = new_MethodClosure((Method)PMethod6937, PBenchmark_AbstractBenchmark_Class);
    store_method(PBenchmark_AbstractBenchmark_Class, SMB_probeCount, MC_SMB_probeCount);
}


static void init_SMB_significantDigits() {
    Symbol SMB_significantDigits = new_Symbol(L"significantDigits");
    Variable VAR_variance_0_0 = new_Variable_named(L"variance", 0);
    Array PArray6940 = new_Array_with(1, (Optr)VAR_variance_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6943 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_confidenceVariance = new_Symbol(L"confidenceVariance");
    // confidenceVariance. 
    Send PSend6946 = new_Send((Optr)self, SMB_confidenceVariance, 0);
    Assign PAssign6945 = new_Assign((Optr)VAR_variance_0_0, (Optr)PSend6946);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend6947 = new_Send((Optr)VAR_variance_0_0, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // escape:. 
    Send PSend6951 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)int_2_Const);
    Array PThreadedCode6950 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend6951, (Optr)&t_block_return);
    Block PBlock6949 = new_Block_with(empty_Array, empty_Array, PThreadedCode6950, 1, PSend6951);
    // ifTrue:. 
    Send PSend6948 = new_Send((Optr)PSend6947, SMB_ifTrue_, 1, (Optr)PBlock6949);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // >=. 
    Send PSend6952 = new_Send((Optr)VAR_variance_0_0, SMB__gt__equals_, 1, (Optr)int_10_Const);
    // escape:. 
    Send PSend6956 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)int_0_Const);
    Array PThreadedCode6955 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend6956, (Optr)&t_block_return);
    Block PBlock6954 = new_Block_with(empty_Array, empty_Array, PThreadedCode6955, 1, PSend6956);
    // ifTrue:. 
    Send PSend6953 = new_Send((Optr)PSend6952, SMB_ifTrue_, 1, (Optr)PBlock6954);
    Symbol SMB_log = new_Symbol(L"log");
    // log. 
    Send PSend6957 = new_Send((Optr)VAR_variance_0_0, SMB_log, 0);
    Symbol SMB_floor = new_Symbol(L"floor");
    // floor. 
    Send PSend6958 = new_Send((Optr)PSend6957, SMB_floor, 0);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend6959 = new_Send((Optr)int_1_Const, SMB__minus_, 1, (Optr)PSend6958);
    Array PThreadedCode6944 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign6945, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6946, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_variance_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend6947, (Optr)&t_send_ifTrue_, (Optr)PSend6948, (Optr)PBlock6949, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_variance_0_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend6952, (Optr)&t_send_ifTrue_, (Optr)PSend6953, (Optr)PBlock6954, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_variance_0_0, (Optr)&t_send0, (Optr)PSend6957, (Optr)&t_send0, (Optr)PSend6958, (Optr)&t_send1, (Optr)PSend6959, (Optr)&t_method_return);
    Block PBlock6942 = new_Block_with(PArray6943, empty_Array, PThreadedCode6944, 4, PAssign6945, PSend6948, PSend6953, PSend6959);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6960 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6942);
    Array PThreadedCode6941 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6942, (Optr)&t_send1, (Optr)PSend6960, (Optr)&t_method_return);
    Method PMethod6939 = new_Method_with(empty_Array, PArray6940, empty_Array, PThreadedCode6941, 1, PSend6960);
    
    MethodClosure MC_SMB_significantDigits = new_MethodClosure((Method)PMethod6939, PBenchmark_AbstractBenchmark_Class);
    store_method(PBenchmark_AbstractBenchmark_Class, SMB_significantDigits, MC_SMB_significantDigits);
}


static void init_SMB_probeCount_() {
    Symbol SMB_probeCount_ = new_Symbol(L"probeCount:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray6962 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign6964 = new_Assign((Optr)slot_PBenchmark_AbstractBenchmark_probeCount, (Optr)VAR_anObject_0_0);
    Array PThreadedCode6963 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign6964, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6961 = new_Method_with(PArray6962, empty_Array, empty_Array, PThreadedCode6963, 2, PAssign6964, self);
    
    MethodClosure MC_SMB_probeCount_ = new_MethodClosure((Method)PMethod6961, PBenchmark_AbstractBenchmark_Class);
    store_method(PBenchmark_AbstractBenchmark_Class, SMB_probeCount_, MC_SMB_probeCount_);
}

void init_PBenchmark_PAbstractBenchmark_layout() {
    layout_PBenchmark_AbstractBenchmark_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PBenchmark_AbstractBenchmark_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PBenchmark_AbstractBenchmark_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PBenchmark_AbstractBenchmark_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PBenchmark_AbstractBenchmark_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PBenchmark_AbstractBenchmark_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_AbstractBenchmark = new_Symbol(L"AbstractBenchmark");
    slot_PBenchmark_AbstractBenchmark_probeCount = (Optr)new_Slot(0, L"probeCount");
    layout_PBenchmark_AbstractBenchmark = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PBenchmark_AbstractBenchmark)->values[0] = slot_PBenchmark_AbstractBenchmark_probeCount; // probeCount 
    PBenchmark_AbstractBenchmark_Class = (Class)new_Class(Object_Class, layout_PBenchmark_AbstractBenchmark_Class_class);
    PBenchmark_AbstractBenchmark_Class->layout = layout_PBenchmark_AbstractBenchmark;
    PBenchmark_AbstractBenchmark_Class->name = SMB_AbstractBenchmark;
    
}

void init_PBenchmark_PAbstractBenchmark_methods() {
    init_SMB_confidenceVariance();
    init_SMB_currentMillis();
    init_SMB_studentsTConfidenceFactor();
    init_SMB_absdev();
    init_SMB_initialize();
    init_SMB_printOn_();
    init_SMB_gaussianConfidenceFactor();
    init_SMB_probeCount();
    init_SMB_significantDigits();
    init_SMB_probeCount_();
    
}