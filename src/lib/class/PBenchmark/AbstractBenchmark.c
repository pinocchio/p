#include <lib/class/PBenchmark/AbstractBenchmark.h>


Optr layout_PBenchmark_AbstractBenchmark_Class_class;
Optr slot_PBenchmark_AbstractBenchmark_probeCount;
Optr layout_PBenchmark_AbstractBenchmark;


static void init_SMB_gaussianConfidenceFactor() {
    Symbol SMB_gaussianConfidenceFactor = new_Symbol(L"gaussianConfidenceFactor");
    Array PThreadedCode6876 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_1);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Method PMethod6875 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6876, 1, int_1_Const);
    
    MethodClosure MC_SMB_gaussianConfidenceFactor = new_MethodClosure((Method)PMethod6875, PBenchmark_AbstractBenchmark_Class);
    store_method(PBenchmark_AbstractBenchmark_Class, SMB_gaussianConfidenceFactor, MC_SMB_gaussianConfidenceFactor);
}


static void init_SMB_confidenceVariance() {
    Symbol SMB_confidenceVariance = new_Symbol(L"confidenceVariance");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6880 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_probeCount = new_Symbol(L"probeCount");
    // probeCount. 
    Send PSend6882 = new_Send((Optr)self, SMB_probeCount, 0);
    SmallInt int_30 = new_SmallInt(30);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_30_Const = new_Constant((Optr)int_30);
    // >=. 
    Send PSend6883 = new_Send((Optr)PSend6882, SMB__gt__equals_, 1, (Optr)int_30_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_gaussianConfidenceFactor = new_Symbol(L"gaussianConfidenceFactor");
    // gaussianConfidenceFactor. 
    Send PSend6887 = new_Send((Optr)self, SMB_gaussianConfidenceFactor, 0);
    Symbol SMB_stdev = new_Symbol(L"stdev");
    // stdev. 
    Send PSend6888 = new_Send((Optr)self, SMB_stdev, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend6889 = new_Send((Optr)PSend6887, SMB__times_, 1, (Optr)PSend6888);
    // probeCount. 
    Send PSend6890 = new_Send((Optr)self, SMB_probeCount, 0);
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    // asFloat. 
    Send PSend6891 = new_Send((Optr)PSend6890, SMB_asFloat, 0);
    Symbol SMB_sqrt = new_Symbol(L"sqrt");
    // sqrt. 
    Send PSend6892 = new_Send((Optr)PSend6891, SMB_sqrt, 0);
    Symbol SMB__divide_ = new_Symbol(L"/");
    // /. 
    Send PSend6893 = new_Send((Optr)PSend6889, SMB__divide_, 1, (Optr)PSend6892);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6894 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend6893);
    Array PThreadedCode6886 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6887, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6888, (Optr)&t_send1, (Optr)PSend6889, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6890, (Optr)&t_send0, (Optr)PSend6891, (Optr)&t_send0, (Optr)PSend6892, (Optr)&t_send1, (Optr)PSend6893, (Optr)&t_send1, (Optr)PSend6894, (Optr)&t_block_return);
    Block PBlock6885 = new_Block_with(empty_Array, empty_Array, PThreadedCode6886, 1, PSend6894);
    // ifTrue:. 
    Send PSend6884 = new_Send((Optr)PSend6883, SMB_ifTrue_, 1, (Optr)PBlock6885);
    Symbol SMB_studentsTConfidenceFactor = new_Symbol(L"studentsTConfidenceFactor");
    // studentsTConfidenceFactor. 
    Send PSend6895 = new_Send((Optr)self, SMB_studentsTConfidenceFactor, 0);
    // stdev. 
    Send PSend6896 = new_Send((Optr)self, SMB_stdev, 0);
    // *. 
    Send PSend6897 = new_Send((Optr)PSend6895, SMB__times_, 1, (Optr)PSend6896);
    // probeCount. 
    Send PSend6898 = new_Send((Optr)self, SMB_probeCount, 0);
    // asFloat. 
    Send PSend6899 = new_Send((Optr)PSend6898, SMB_asFloat, 0);
    // sqrt. 
    Send PSend6900 = new_Send((Optr)PSend6899, SMB_sqrt, 0);
    // /. 
    Send PSend6901 = new_Send((Optr)PSend6897, SMB__divide_, 1, (Optr)PSend6900);
    Array PThreadedCode6881 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6882, (Optr)&t_push1, (Optr)int_30, (Optr)&t_send1, (Optr)PSend6883, (Optr)&t_send_ifTrue_, (Optr)PSend6884, (Optr)PBlock6885, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6895, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6896, (Optr)&t_send1, (Optr)PSend6897, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6898, (Optr)&t_send0, (Optr)PSend6899, (Optr)&t_send0, (Optr)PSend6900, (Optr)&t_send1, (Optr)PSend6901, (Optr)&t_method_return);
    Block PBlock6879 = new_Block_with(PArray6880, empty_Array, PThreadedCode6881, 2, PSend6884, PSend6901);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6902 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6879);
    Array PThreadedCode6878 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6879, (Optr)&t_send1, (Optr)PSend6902, (Optr)&t_method_return);
    Method PMethod6877 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6878, 1, PSend6902);
    
    MethodClosure MC_SMB_confidenceVariance = new_MethodClosure((Method)PMethod6877, PBenchmark_AbstractBenchmark_Class);
    store_method(PBenchmark_AbstractBenchmark_Class, SMB_confidenceVariance, MC_SMB_confidenceVariance);
}


static void init_SMB_currentMillis() {
    Symbol SMB_currentMillis = new_Symbol(L"currentMillis");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_millisecondClock = new_Symbol(L"millisecondClock");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    Annotation PAnnotation6905 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_millisecondClock, (Optr)SMB_Chronology_minus_Time);
    Array PArray6904 = new_Array_with(1, (Optr)PAnnotation6905);
    Symbol SMB_millisecondClockValue = new_Symbol(L"millisecondClockValue");
    // millisecondClockValue. 
    Send PSend6907 = new_Send((Optr)Time_classReference, SMB_millisecondClockValue, 0);
    Array PThreadedCode6906 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_send0, (Optr)PSend6907, (Optr)&t_method_return);
    NativeMethod PNativeMethod6903 = new_NativeMethod_with(empty_Array, empty_Array, PArray6904, PThreadedCode6906, 1, PSend6907);
    
    MethodClosure MC_SMB_currentMillis = new_MethodClosure((Method)PNativeMethod6903, PBenchmark_AbstractBenchmark_Class);
    store_method(PBenchmark_AbstractBenchmark_Class, SMB_currentMillis, MC_SMB_currentMillis);
}


static void init_SMB_studentsTConfidenceFactor() {
    Symbol SMB_studentsTConfidenceFactor = new_Symbol(L"studentsTConfidenceFactor");
    Symbol SMB_shouldBeImplemented = new_Symbol(L"shouldBeImplemented");
    // shouldBeImplemented. 
    Send PSend6910 = new_Send((Optr)self, SMB_shouldBeImplemented, 0);
    Array PThreadedCode6909 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6910, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6908 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6909, 2, PSend6910, self);
    
    MethodClosure MC_SMB_studentsTConfidenceFactor = new_MethodClosure((Method)PMethod6908, PBenchmark_AbstractBenchmark_Class);
    store_method(PBenchmark_AbstractBenchmark_Class, SMB_studentsTConfidenceFactor, MC_SMB_studentsTConfidenceFactor);
}


static void init_SMB_absdev() {
    Symbol SMB_absdev = new_Symbol(L"absdev");
    Symbol SMB_average = new_Symbol(L"average");
    // average. 
    Send PSend6913 = new_Send((Optr)self, SMB_average, 0);
    Symbol SMB_stdev = new_Symbol(L"stdev");
    // stdev. 
    Send PSend6914 = new_Send((Optr)self, SMB_stdev, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend6915 = new_Send((Optr)PSend6913, SMB__times_, 1, (Optr)PSend6914);
    Array PThreadedCode6912 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6913, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6914, (Optr)&t_send1, (Optr)PSend6915, (Optr)&t_method_return);
    Method PMethod6911 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6912, 1, PSend6915);
    
    MethodClosure MC_SMB_absdev = new_MethodClosure((Method)PMethod6911, PBenchmark_AbstractBenchmark_Class);
    store_method(PBenchmark_AbstractBenchmark_Class, SMB_absdev, MC_SMB_absdev);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray6917 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_significantDigits_0_1 = new_Variable_named(L"significantDigits", 0);
    Variable VAR_quantum_0_2 = new_Variable_named(L"quantum", 0);
    Variable VAR_total_0_3 = new_Variable_named(L"total", 0);
    Variable VAR_stdev_0_4 = new_Variable_named(L"stdev", 0);
    Variable VAR_totalSignificantDigits_0_5 = new_Variable_named(L"totalSignificantDigits", 0);
    Array PArray6918 = new_Array_with(5, (Optr)VAR_significantDigits_0_1, (Optr)VAR_quantum_0_2, (Optr)VAR_total_0_3, (Optr)VAR_stdev_0_4, (Optr)VAR_totalSignificantDigits_0_5);
    Symbol SMB_significantDigits = new_Symbol(L"significantDigits");
    // significantDigits. 
    Send PSend6921 = new_Send((Optr)self, SMB_significantDigits, 0);
    Assign PAssign6920 = new_Assign((Optr)VAR_significantDigits_0_1, (Optr)PSend6921);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__divide_ = new_Symbol(L"/");
    SmallInt int_10 = new_SmallInt(10);
    Constant int_10_Const = new_Constant((Optr)int_10);
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    // asFloat. 
    Send PSend6925 = new_Send((Optr)int_10_Const, SMB_asFloat, 0);
    // /. 
    Send PSend6924 = new_Send((Optr)int_1_Const, SMB__divide_, 1, (Optr)PSend6925);
    Symbol SMB_raisedTo_ = new_Symbol(L"raisedTo:");
    // raisedTo:. 
    Send PSend6923 = new_Send((Optr)PSend6924, SMB_raisedTo_, 1, (Optr)VAR_significantDigits_0_1);
    Assign PAssign6922 = new_Assign((Optr)VAR_quantum_0_2, (Optr)PSend6923);
    Symbol SMB_confidenceVariance = new_Symbol(L"confidenceVariance");
    // confidenceVariance. 
    Send PSend6928 = new_Send((Optr)self, SMB_confidenceVariance, 0);
    Symbol SMB_roundTo_ = new_Symbol(L"roundTo:");
    // roundTo:. 
    Send PSend6927 = new_Send((Optr)PSend6928, SMB_roundTo_, 1, (Optr)VAR_quantum_0_2);
    Assign PAssign6926 = new_Assign((Optr)VAR_stdev_0_4, (Optr)PSend6927);
    Symbol SMB_total = new_Symbol(L"total");
    // total. 
    Send PSend6932 = new_Send((Optr)self, SMB_total, 0);
    // roundTo:. 
    Send PSend6931 = new_Send((Optr)PSend6932, SMB_roundTo_, 1, (Optr)VAR_quantum_0_2);
    Symbol SMB_printString = new_Symbol(L"printString");
    // printString. 
    Send PSend6930 = new_Send((Optr)PSend6931, SMB_printString, 0);
    Assign PAssign6929 = new_Assign((Optr)VAR_total_0_3, (Optr)PSend6930);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6935 = new_Send((Optr)VAR_total_0_3, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    Character char_2910 = new_Character(L'.');
    Constant char_2910_Const = new_Constant((Optr)char_2910);
    // indexOf:. 
    Send PSend6936 = new_Send((Optr)VAR_total_0_3, SMB_indexOf_, 1, (Optr)char_2910_Const);
    // -. 
    Send PSend6934 = new_Send((Optr)PSend6935, SMB__minus_, 1, (Optr)PSend6936);
    Assign PAssign6933 = new_Assign((Optr)VAR_totalSignificantDigits_0_5, (Optr)PSend6934);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend6937 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)VAR_total_0_3);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend6938 = new_Send((Optr)VAR_totalSignificantDigits_0_5, SMB__lt_, 1, (Optr)VAR_significantDigits_0_1);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // -. 
    Send PSend6942 = new_Send((Optr)VAR_significantDigits_0_1, SMB__minus_, 1, (Optr)VAR_totalSignificantDigits_0_5);
    String string_6945 = new_String(L"0");
    Constant string_6945_Const = new_Constant((Optr)string_6945);
    // <<. 
    Send PSend6946 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_6945_Const);
    Array PThreadedCode6944 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_6945, (Optr)&t_send1, (Optr)PSend6946, (Optr)&t_block_return);
    Block PBlock6943 = new_Block_with(empty_Array, empty_Array, PThreadedCode6944, 1, PSend6946);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend6947 = new_Send((Optr)PSend6942, SMB_timesRepeat_, 1, (Optr)PBlock6943);
    Array PThreadedCode6941 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_significantDigits_0_1, (Optr)&t_push_variable, (Optr)VAR_totalSignificantDigits_0_5, (Optr)&t_send1, (Optr)PSend6942, (Optr)&t_push_closure, (Optr)PBlock6943, (Optr)&t_send1, (Optr)PSend6947, (Optr)&t_block_return);
    Block PBlock6940 = new_Block_with(empty_Array, empty_Array, PThreadedCode6941, 1, PSend6947);
    // ifTrue:. 
    Send PSend6939 = new_Send((Optr)PSend6938, SMB_ifTrue_, 1, (Optr)PBlock6940);
    String string_6948 = new_String(L" +/-");
    Constant string_6948_Const = new_Constant((Optr)string_6948);
    // <<. 
    Send PSend6949 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_6948_Const);
    // <<. 
    Send PSend6950 = new_Send((Optr)PSend6949, SMB__shiftLeft_, 1, (Optr)VAR_stdev_0_4);
    Array PThreadedCode6919 = instantiate_Array_with(ThreadedCode_Class, 0, 91, (Optr)&t_push1, (Optr)PAssign6920, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6921, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6922, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send0, (Optr)PSend6925, (Optr)&t_send1, (Optr)PSend6924, (Optr)&t_push_variable, (Optr)VAR_significantDigits_0_1, (Optr)&t_send1, (Optr)PSend6923, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6926, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6928, (Optr)&t_push_variable, (Optr)VAR_quantum_0_2, (Optr)&t_send1, (Optr)PSend6927, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6929, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6932, (Optr)&t_push_variable, (Optr)VAR_quantum_0_2, (Optr)&t_send1, (Optr)PSend6931, (Optr)&t_send0, (Optr)PSend6930, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6933, (Optr)&t_push_variable, (Optr)VAR_total_0_3, (Optr)&t_send0, (Optr)PSend6935, (Optr)&t_push_variable, (Optr)VAR_total_0_3, (Optr)&t_push1, (Optr)char_2910, (Optr)&t_send1, (Optr)PSend6936, (Optr)&t_send1, (Optr)PSend6934, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_total_0_3, (Optr)&t_send1, (Optr)PSend6937, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_totalSignificantDigits_0_5, (Optr)&t_push_variable, (Optr)VAR_significantDigits_0_1, (Optr)&t_send1, (Optr)PSend6938, (Optr)&t_send_ifTrue_, (Optr)PSend6939, (Optr)PBlock6940, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_6948, (Optr)&t_send1, (Optr)PSend6949, (Optr)&t_push_variable, (Optr)VAR_stdev_0_4, (Optr)&t_send1, (Optr)PSend6950, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6916 = new_Method_with(PArray6917, PArray6918, empty_Array, PThreadedCode6919, 9, PAssign6920, PAssign6922, PAssign6926, PAssign6929, PAssign6933, PSend6937, PSend6939, PSend6950, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod6916, PBenchmark_AbstractBenchmark_Class);
    store_method(PBenchmark_AbstractBenchmark_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_probeCount() {
    Symbol SMB_probeCount = new_Symbol(L"probeCount");
    Array PThreadedCode6952 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_AbstractBenchmark_probeCount, (Optr)&t_method_return);
    Method PMethod6951 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6952, 1, slot_PBenchmark_AbstractBenchmark_probeCount);
    
    MethodClosure MC_SMB_probeCount = new_MethodClosure((Method)PMethod6951, PBenchmark_AbstractBenchmark_Class);
    store_method(PBenchmark_AbstractBenchmark_Class, SMB_probeCount, MC_SMB_probeCount);
}


static void init_SMB_significantDigits() {
    Symbol SMB_significantDigits = new_Symbol(L"significantDigits");
    Variable VAR_variance_0_0 = new_Variable_named(L"variance", 0);
    Array PArray6954 = new_Array_with(1, (Optr)VAR_variance_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6957 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_confidenceVariance = new_Symbol(L"confidenceVariance");
    // confidenceVariance. 
    Send PSend6960 = new_Send((Optr)self, SMB_confidenceVariance, 0);
    Assign PAssign6959 = new_Assign((Optr)VAR_variance_0_0, (Optr)PSend6960);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend6961 = new_Send((Optr)VAR_variance_0_0, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // escape:. 
    Send PSend6965 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)int_2_Const);
    Array PThreadedCode6964 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend6965, (Optr)&t_block_return);
    Block PBlock6963 = new_Block_with(empty_Array, empty_Array, PThreadedCode6964, 1, PSend6965);
    // ifTrue:. 
    Send PSend6962 = new_Send((Optr)PSend6961, SMB_ifTrue_, 1, (Optr)PBlock6963);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // >=. 
    Send PSend6966 = new_Send((Optr)VAR_variance_0_0, SMB__gt__equals_, 1, (Optr)int_10_Const);
    // escape:. 
    Send PSend6970 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)int_0_Const);
    Array PThreadedCode6969 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend6970, (Optr)&t_block_return);
    Block PBlock6968 = new_Block_with(empty_Array, empty_Array, PThreadedCode6969, 1, PSend6970);
    // ifTrue:. 
    Send PSend6967 = new_Send((Optr)PSend6966, SMB_ifTrue_, 1, (Optr)PBlock6968);
    Symbol SMB_log = new_Symbol(L"log");
    // log. 
    Send PSend6971 = new_Send((Optr)VAR_variance_0_0, SMB_log, 0);
    Symbol SMB_floor = new_Symbol(L"floor");
    // floor. 
    Send PSend6972 = new_Send((Optr)PSend6971, SMB_floor, 0);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend6973 = new_Send((Optr)int_1_Const, SMB__minus_, 1, (Optr)PSend6972);
    Array PThreadedCode6958 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign6959, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6960, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_variance_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend6961, (Optr)&t_send_ifTrue_, (Optr)PSend6962, (Optr)PBlock6963, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_variance_0_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend6966, (Optr)&t_send_ifTrue_, (Optr)PSend6967, (Optr)PBlock6968, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_variance_0_0, (Optr)&t_send0, (Optr)PSend6971, (Optr)&t_send0, (Optr)PSend6972, (Optr)&t_send1, (Optr)PSend6973, (Optr)&t_method_return);
    Block PBlock6956 = new_Block_with(PArray6957, empty_Array, PThreadedCode6958, 4, PAssign6959, PSend6962, PSend6967, PSend6973);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6974 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6956);
    Array PThreadedCode6955 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6956, (Optr)&t_send1, (Optr)PSend6974, (Optr)&t_method_return);
    Method PMethod6953 = new_Method_with(empty_Array, PArray6954, empty_Array, PThreadedCode6955, 1, PSend6974);
    
    MethodClosure MC_SMB_significantDigits = new_MethodClosure((Method)PMethod6953, PBenchmark_AbstractBenchmark_Class);
    store_method(PBenchmark_AbstractBenchmark_Class, SMB_significantDigits, MC_SMB_significantDigits);
}


static void init_SMB_probeCount_() {
    Symbol SMB_probeCount_ = new_Symbol(L"probeCount:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray6976 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign6978 = new_Assign((Optr)slot_PBenchmark_AbstractBenchmark_probeCount, (Optr)VAR_anObject_0_0);
    Array PThreadedCode6977 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign6978, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6975 = new_Method_with(PArray6976, empty_Array, empty_Array, PThreadedCode6977, 2, PAssign6978, self);
    
    MethodClosure MC_SMB_probeCount_ = new_MethodClosure((Method)PMethod6975, PBenchmark_AbstractBenchmark_Class);
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
    init_SMB_gaussianConfidenceFactor();
    init_SMB_confidenceVariance();
    init_SMB_currentMillis();
    init_SMB_studentsTConfidenceFactor();
    init_SMB_absdev();
    init_SMB_printOn_();
    init_SMB_probeCount();
    init_SMB_significantDigits();
    init_SMB_probeCount_();
    
}