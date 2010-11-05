#include <lib/class/PBenchmark/AbstractBenchmark.h>


Optr layout_PBenchmark_AbstractBenchmark_Class_class;
Optr slot_PBenchmark_AbstractBenchmark_probeCount;
Optr layout_PBenchmark_AbstractBenchmark;


static void init_SMB_confidenceVariance() {
    Symbol SMB_confidenceVariance = new_Symbol(L"confidenceVariance");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6866 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_probeCount = new_Symbol(L"probeCount");
    // probeCount. 
    Send PSend6868 = new_Send((Optr)self, SMB_probeCount, 0);
    SmallInt int_30 = new_SmallInt(30);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_30_Const = new_Constant((Optr)int_30);
    // >=. 
    Send PSend6869 = new_Send((Optr)PSend6868, SMB__gt__equals_, 1, (Optr)int_30_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_gaussianConfidenceFactor = new_Symbol(L"gaussianConfidenceFactor");
    // gaussianConfidenceFactor. 
    Send PSend6873 = new_Send((Optr)self, SMB_gaussianConfidenceFactor, 0);
    Symbol SMB_stdev = new_Symbol(L"stdev");
    // stdev. 
    Send PSend6874 = new_Send((Optr)self, SMB_stdev, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend6875 = new_Send((Optr)PSend6873, SMB__times_, 1, (Optr)PSend6874);
    // probeCount. 
    Send PSend6876 = new_Send((Optr)self, SMB_probeCount, 0);
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    // asFloat. 
    Send PSend6877 = new_Send((Optr)PSend6876, SMB_asFloat, 0);
    Symbol SMB_sqrt = new_Symbol(L"sqrt");
    // sqrt. 
    Send PSend6878 = new_Send((Optr)PSend6877, SMB_sqrt, 0);
    Symbol SMB__divide_ = new_Symbol(L"/");
    // /. 
    Send PSend6879 = new_Send((Optr)PSend6875, SMB__divide_, 1, (Optr)PSend6878);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend6880 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend6879);
    Array PThreadedCode6872 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6873, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6874, (Optr)&t_send1, (Optr)PSend6875, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6876, (Optr)&t_send0, (Optr)PSend6877, (Optr)&t_send0, (Optr)PSend6878, (Optr)&t_send1, (Optr)PSend6879, (Optr)&t_send1, (Optr)PSend6880, (Optr)&t_block_return);
    Block PBlock6871 = new_Block_with(empty_Array, empty_Array, PThreadedCode6872, 1, PSend6880);
    // ifTrue:. 
    Send PSend6870 = new_Send((Optr)PSend6869, SMB_ifTrue_, 1, (Optr)PBlock6871);
    Symbol SMB_studentsTConfidenceFactor = new_Symbol(L"studentsTConfidenceFactor");
    // studentsTConfidenceFactor. 
    Send PSend6881 = new_Send((Optr)self, SMB_studentsTConfidenceFactor, 0);
    // stdev. 
    Send PSend6882 = new_Send((Optr)self, SMB_stdev, 0);
    // *. 
    Send PSend6883 = new_Send((Optr)PSend6881, SMB__times_, 1, (Optr)PSend6882);
    // probeCount. 
    Send PSend6884 = new_Send((Optr)self, SMB_probeCount, 0);
    // asFloat. 
    Send PSend6885 = new_Send((Optr)PSend6884, SMB_asFloat, 0);
    // sqrt. 
    Send PSend6886 = new_Send((Optr)PSend6885, SMB_sqrt, 0);
    // /. 
    Send PSend6887 = new_Send((Optr)PSend6883, SMB__divide_, 1, (Optr)PSend6886);
    Array PThreadedCode6867 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6868, (Optr)&t_push1, (Optr)int_30, (Optr)&t_send1, (Optr)PSend6869, (Optr)&t_send_ifTrue_, (Optr)PSend6870, (Optr)PBlock6871, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6881, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6882, (Optr)&t_send1, (Optr)PSend6883, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6884, (Optr)&t_send0, (Optr)PSend6885, (Optr)&t_send0, (Optr)PSend6886, (Optr)&t_send1, (Optr)PSend6887, (Optr)&t_method_return);
    Block PBlock6865 = new_Block_with(PArray6866, empty_Array, PThreadedCode6867, 2, PSend6870, PSend6887);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6888 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6865);
    Array PThreadedCode6864 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6865, (Optr)&t_send1, (Optr)PSend6888, (Optr)&t_method_return);
    Method PMethod6863 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6864, 1, PSend6888);
    
    MethodClosure MC_SMB_confidenceVariance = new_MethodClosure((Method)PMethod6863, PBenchmark_AbstractBenchmark_Class);
    store_method(PBenchmark_AbstractBenchmark_Class, SMB_confidenceVariance, MC_SMB_confidenceVariance);
}


static void init_SMB_currentMillis() {
    Symbol SMB_currentMillis = new_Symbol(L"currentMillis");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_millisecondClock = new_Symbol(L"millisecondClock");
    Symbol SMB_Chronology_minus_Time = new_Symbol(L"Chronology.Time");
    Annotation PAnnotation6891 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_millisecondClock, (Optr)SMB_Chronology_minus_Time);
    Array PArray6890 = new_Array_with(1, (Optr)PAnnotation6891);
    Symbol SMB_millisecondClockValue = new_Symbol(L"millisecondClockValue");
    // millisecondClockValue. 
    Send PSend6893 = new_Send((Optr)Time_classReference, SMB_millisecondClockValue, 0);
    Array PThreadedCode6892 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_send0, (Optr)PSend6893, (Optr)&t_method_return);
    NativeMethod PNativeMethod6889 = new_NativeMethod_with(empty_Array, empty_Array, PArray6890, PThreadedCode6892, 1, PSend6893);
    
    MethodClosure MC_SMB_currentMillis = new_MethodClosure((Method)PNativeMethod6889, PBenchmark_AbstractBenchmark_Class);
    store_method(PBenchmark_AbstractBenchmark_Class, SMB_currentMillis, MC_SMB_currentMillis);
}


static void init_SMB_studentsTConfidenceFactor() {
    Symbol SMB_studentsTConfidenceFactor = new_Symbol(L"studentsTConfidenceFactor");
    Variable VAR_values_0_0 = new_Variable_named(L"values", 0);
    Array PArray6895 = new_Array_with(1, (Optr)VAR_values_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_30 = new_SmallInt(30);
    Constant int_30_Const = new_Constant((Optr)int_30);
    // new:. 
    Send PSend6898 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_30_Const);
    Assign PAssign6897 = new_Assign((Optr)VAR_values_0_0, (Optr)PSend6898);
    Float float_6_314 = new_Float(6.314);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Constant float_6_314_Const = new_Constant((Optr)float_6_314);
    // at:put:. 
    Send PSend6899 = new_Send((Optr)VAR_values_0_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)float_6_314_Const);
    Float float_2_92 = new_Float(2.92);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Constant float_2_92_Const = new_Constant((Optr)float_2_92);
    // at:put:. 
    Send PSend6900 = new_Send((Optr)VAR_values_0_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)float_2_92_Const);
    SmallInt int_3 = new_SmallInt(3);
    Float float_2_353 = new_Float(2.353);
    Constant int_3_Const = new_Constant((Optr)int_3);
    Constant float_2_353_Const = new_Constant((Optr)float_2_353);
    // at:put:. 
    Send PSend6901 = new_Send((Optr)VAR_values_0_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)float_2_353_Const);
    SmallInt int_4 = new_SmallInt(4);
    Float float_2_132 = new_Float(2.132);
    Constant int_4_Const = new_Constant((Optr)int_4);
    Constant float_2_132_Const = new_Constant((Optr)float_2_132);
    // at:put:. 
    Send PSend6902 = new_Send((Optr)VAR_values_0_0, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)float_2_132_Const);
    SmallInt int_5 = new_SmallInt(5);
    Float float_2_015 = new_Float(2.015);
    Constant int_5_Const = new_Constant((Optr)int_5);
    Constant float_2_015_Const = new_Constant((Optr)float_2_015);
    // at:put:. 
    Send PSend6903 = new_Send((Optr)VAR_values_0_0, SMB_at_put_, 2, (Optr)int_5_Const, (Optr)float_2_015_Const);
    SmallInt int_6 = new_SmallInt(6);
    Float float_1_943 = new_Float(1.943);
    Constant int_6_Const = new_Constant((Optr)int_6);
    Constant float_1_943_Const = new_Constant((Optr)float_1_943);
    // at:put:. 
    Send PSend6904 = new_Send((Optr)VAR_values_0_0, SMB_at_put_, 2, (Optr)int_6_Const, (Optr)float_1_943_Const);
    SmallInt int_7 = new_SmallInt(7);
    Float float_1_895 = new_Float(1.895);
    Constant int_7_Const = new_Constant((Optr)int_7);
    Constant float_1_895_Const = new_Constant((Optr)float_1_895);
    // at:put:. 
    Send PSend6905 = new_Send((Optr)VAR_values_0_0, SMB_at_put_, 2, (Optr)int_7_Const, (Optr)float_1_895_Const);
    SmallInt int_8 = new_SmallInt(8);
    Float float_1_86 = new_Float(1.86);
    Constant int_8_Const = new_Constant((Optr)int_8);
    Constant float_1_86_Const = new_Constant((Optr)float_1_86);
    // at:put:. 
    Send PSend6906 = new_Send((Optr)VAR_values_0_0, SMB_at_put_, 2, (Optr)int_8_Const, (Optr)float_1_86_Const);
    SmallInt int_9 = new_SmallInt(9);
    Float float_1_833 = new_Float(1.833);
    Constant int_9_Const = new_Constant((Optr)int_9);
    Constant float_1_833_Const = new_Constant((Optr)float_1_833);
    // at:put:. 
    Send PSend6907 = new_Send((Optr)VAR_values_0_0, SMB_at_put_, 2, (Optr)int_9_Const, (Optr)float_1_833_Const);
    SmallInt int_10 = new_SmallInt(10);
    Float float_1_812 = new_Float(1.812);
    Constant int_10_Const = new_Constant((Optr)int_10);
    Constant float_1_812_Const = new_Constant((Optr)float_1_812);
    // at:put:. 
    Send PSend6908 = new_Send((Optr)VAR_values_0_0, SMB_at_put_, 2, (Optr)int_10_Const, (Optr)float_1_812_Const);
    SmallInt int_11 = new_SmallInt(11);
    Float float_1_796 = new_Float(1.796);
    Constant int_11_Const = new_Constant((Optr)int_11);
    Constant float_1_796_Const = new_Constant((Optr)float_1_796);
    // at:put:. 
    Send PSend6909 = new_Send((Optr)VAR_values_0_0, SMB_at_put_, 2, (Optr)int_11_Const, (Optr)float_1_796_Const);
    SmallInt int_12 = new_SmallInt(12);
    Float float_1_782 = new_Float(1.782);
    Constant int_12_Const = new_Constant((Optr)int_12);
    Constant float_1_782_Const = new_Constant((Optr)float_1_782);
    // at:put:. 
    Send PSend6910 = new_Send((Optr)VAR_values_0_0, SMB_at_put_, 2, (Optr)int_12_Const, (Optr)float_1_782_Const);
    SmallInt int_13 = new_SmallInt(13);
    Float float_1_771 = new_Float(1.771);
    Constant int_13_Const = new_Constant((Optr)int_13);
    Constant float_1_771_Const = new_Constant((Optr)float_1_771);
    // at:put:. 
    Send PSend6911 = new_Send((Optr)VAR_values_0_0, SMB_at_put_, 2, (Optr)int_13_Const, (Optr)float_1_771_Const);
    SmallInt int_14 = new_SmallInt(14);
    Float float_1_761 = new_Float(1.761);
    Constant int_14_Const = new_Constant((Optr)int_14);
    Constant float_1_761_Const = new_Constant((Optr)float_1_761);
    // at:put:. 
    Send PSend6912 = new_Send((Optr)VAR_values_0_0, SMB_at_put_, 2, (Optr)int_14_Const, (Optr)float_1_761_Const);
    SmallInt int_15 = new_SmallInt(15);
    Float float_1_753 = new_Float(1.753);
    Constant int_15_Const = new_Constant((Optr)int_15);
    Constant float_1_753_Const = new_Constant((Optr)float_1_753);
    // at:put:. 
    Send PSend6913 = new_Send((Optr)VAR_values_0_0, SMB_at_put_, 2, (Optr)int_15_Const, (Optr)float_1_753_Const);
    SmallInt int_16 = new_SmallInt(16);
    Float float_1_746 = new_Float(1.746);
    Constant int_16_Const = new_Constant((Optr)int_16);
    Constant float_1_746_Const = new_Constant((Optr)float_1_746);
    // at:put:. 
    Send PSend6914 = new_Send((Optr)VAR_values_0_0, SMB_at_put_, 2, (Optr)int_16_Const, (Optr)float_1_746_Const);
    SmallInt int_17 = new_SmallInt(17);
    Float float_1_74 = new_Float(1.74);
    Constant int_17_Const = new_Constant((Optr)int_17);
    Constant float_1_74_Const = new_Constant((Optr)float_1_74);
    // at:put:. 
    Send PSend6915 = new_Send((Optr)VAR_values_0_0, SMB_at_put_, 2, (Optr)int_17_Const, (Optr)float_1_74_Const);
    SmallInt int_18 = new_SmallInt(18);
    Float float_1_734 = new_Float(1.734);
    Constant int_18_Const = new_Constant((Optr)int_18);
    Constant float_1_734_Const = new_Constant((Optr)float_1_734);
    // at:put:. 
    Send PSend6916 = new_Send((Optr)VAR_values_0_0, SMB_at_put_, 2, (Optr)int_18_Const, (Optr)float_1_734_Const);
    SmallInt int_19 = new_SmallInt(19);
    Float float_1_729 = new_Float(1.729);
    Constant int_19_Const = new_Constant((Optr)int_19);
    Constant float_1_729_Const = new_Constant((Optr)float_1_729);
    // at:put:. 
    Send PSend6917 = new_Send((Optr)VAR_values_0_0, SMB_at_put_, 2, (Optr)int_19_Const, (Optr)float_1_729_Const);
    SmallInt int_20 = new_SmallInt(20);
    Float float_1_725 = new_Float(1.725);
    Constant int_20_Const = new_Constant((Optr)int_20);
    Constant float_1_725_Const = new_Constant((Optr)float_1_725);
    // at:put:. 
    Send PSend6918 = new_Send((Optr)VAR_values_0_0, SMB_at_put_, 2, (Optr)int_20_Const, (Optr)float_1_725_Const);
    SmallInt int_21 = new_SmallInt(21);
    Float float_1_721 = new_Float(1.721);
    Constant int_21_Const = new_Constant((Optr)int_21);
    Constant float_1_721_Const = new_Constant((Optr)float_1_721);
    // at:put:. 
    Send PSend6919 = new_Send((Optr)VAR_values_0_0, SMB_at_put_, 2, (Optr)int_21_Const, (Optr)float_1_721_Const);
    SmallInt int_22 = new_SmallInt(22);
    Float float_1_717 = new_Float(1.717);
    Constant int_22_Const = new_Constant((Optr)int_22);
    Constant float_1_717_Const = new_Constant((Optr)float_1_717);
    // at:put:. 
    Send PSend6920 = new_Send((Optr)VAR_values_0_0, SMB_at_put_, 2, (Optr)int_22_Const, (Optr)float_1_717_Const);
    SmallInt int_23 = new_SmallInt(23);
    Float float_1_714 = new_Float(1.714);
    Constant int_23_Const = new_Constant((Optr)int_23);
    Constant float_1_714_Const = new_Constant((Optr)float_1_714);
    // at:put:. 
    Send PSend6921 = new_Send((Optr)VAR_values_0_0, SMB_at_put_, 2, (Optr)int_23_Const, (Optr)float_1_714_Const);
    SmallInt int_24 = new_SmallInt(24);
    Float float_1_711 = new_Float(1.711);
    Constant int_24_Const = new_Constant((Optr)int_24);
    Constant float_1_711_Const = new_Constant((Optr)float_1_711);
    // at:put:. 
    Send PSend6922 = new_Send((Optr)VAR_values_0_0, SMB_at_put_, 2, (Optr)int_24_Const, (Optr)float_1_711_Const);
    SmallInt int_25 = new_SmallInt(25);
    Float float_1_708 = new_Float(1.708);
    Constant int_25_Const = new_Constant((Optr)int_25);
    Constant float_1_708_Const = new_Constant((Optr)float_1_708);
    // at:put:. 
    Send PSend6923 = new_Send((Optr)VAR_values_0_0, SMB_at_put_, 2, (Optr)int_25_Const, (Optr)float_1_708_Const);
    SmallInt int_26 = new_SmallInt(26);
    Float float_1_706 = new_Float(1.706);
    Constant int_26_Const = new_Constant((Optr)int_26);
    Constant float_1_706_Const = new_Constant((Optr)float_1_706);
    // at:put:. 
    Send PSend6924 = new_Send((Optr)VAR_values_0_0, SMB_at_put_, 2, (Optr)int_26_Const, (Optr)float_1_706_Const);
    SmallInt int_27 = new_SmallInt(27);
    Float float_1_703 = new_Float(1.703);
    Constant int_27_Const = new_Constant((Optr)int_27);
    Constant float_1_703_Const = new_Constant((Optr)float_1_703);
    // at:put:. 
    Send PSend6925 = new_Send((Optr)VAR_values_0_0, SMB_at_put_, 2, (Optr)int_27_Const, (Optr)float_1_703_Const);
    SmallInt int_28 = new_SmallInt(28);
    Float float_1_701 = new_Float(1.701);
    Constant int_28_Const = new_Constant((Optr)int_28);
    Constant float_1_701_Const = new_Constant((Optr)float_1_701);
    // at:put:. 
    Send PSend6926 = new_Send((Optr)VAR_values_0_0, SMB_at_put_, 2, (Optr)int_28_Const, (Optr)float_1_701_Const);
    SmallInt int_29 = new_SmallInt(29);
    Float float_1_699 = new_Float(1.699);
    Constant int_29_Const = new_Constant((Optr)int_29);
    Constant float_1_699_Const = new_Constant((Optr)float_1_699);
    // at:put:. 
    Send PSend6927 = new_Send((Optr)VAR_values_0_0, SMB_at_put_, 2, (Optr)int_29_Const, (Optr)float_1_699_Const);
    Float float_1_697 = new_Float(1.697);
    Constant float_1_697_Const = new_Constant((Optr)float_1_697);
    // at:put:. 
    Send PSend6928 = new_Send((Optr)VAR_values_0_0, SMB_at_put_, 2, (Optr)int_30_Const, (Optr)float_1_697_Const);
    Symbol SMB_probeCount = new_Symbol(L"probeCount");
    // probeCount. 
    Send PSend6929 = new_Send((Optr)self, SMB_probeCount, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6930 = new_Send((Optr)VAR_values_0_0, SMB_at_, 1, (Optr)PSend6929);
    Array PThreadedCode6896 = instantiate_Array_with(ThreadedCode_Class, 0, 286, (Optr)&t_push1, (Optr)PAssign6897, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)int_30, (Optr)&t_send1, (Optr)PSend6898, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_push_1, (Optr)&t_push1, (Optr)float_6_314, (Optr)&t_send2, (Optr)PSend6899, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_push_2, (Optr)&t_push1, (Optr)float_2_92, (Optr)&t_send2, (Optr)PSend6900, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push1, (Optr)float_2_353, (Optr)&t_send2, (Optr)PSend6901, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push1, (Optr)float_2_132, (Optr)&t_send2, (Optr)PSend6902, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_push1, (Optr)int_5, (Optr)&t_push1, (Optr)float_2_015, (Optr)&t_send2, (Optr)PSend6903, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push1, (Optr)float_1_943, (Optr)&t_send2, (Optr)PSend6904, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_push1, (Optr)int_7, (Optr)&t_push1, (Optr)float_1_895, (Optr)&t_send2, (Optr)PSend6905, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_push1, (Optr)int_8, (Optr)&t_push1, (Optr)float_1_86, (Optr)&t_send2, (Optr)PSend6906, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_push1, (Optr)int_9, (Optr)&t_push1, (Optr)float_1_833, (Optr)&t_send2, (Optr)PSend6907, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_push1, (Optr)float_1_812, (Optr)&t_send2, (Optr)PSend6908, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_push1, (Optr)int_11, (Optr)&t_push1, (Optr)float_1_796, (Optr)&t_send2, (Optr)PSend6909, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_push1, (Optr)int_12, (Optr)&t_push1, (Optr)float_1_782, (Optr)&t_send2, (Optr)PSend6910, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_push1, (Optr)int_13, (Optr)&t_push1, (Optr)float_1_771, (Optr)&t_send2, (Optr)PSend6911, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_push1, (Optr)int_14, (Optr)&t_push1, (Optr)float_1_761, (Optr)&t_send2, (Optr)PSend6912, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_push1, (Optr)int_15, (Optr)&t_push1, (Optr)float_1_753, (Optr)&t_send2, (Optr)PSend6913, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_push1, (Optr)int_16, (Optr)&t_push1, (Optr)float_1_746, (Optr)&t_send2, (Optr)PSend6914, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_push1, (Optr)int_17, (Optr)&t_push1, (Optr)float_1_74, (Optr)&t_send2, (Optr)PSend6915, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_push1, (Optr)int_18, (Optr)&t_push1, (Optr)float_1_734, (Optr)&t_send2, (Optr)PSend6916, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_push1, (Optr)int_19, (Optr)&t_push1, (Optr)float_1_729, (Optr)&t_send2, (Optr)PSend6917, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_push1, (Optr)int_20, (Optr)&t_push1, (Optr)float_1_725, (Optr)&t_send2, (Optr)PSend6918, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_push1, (Optr)int_21, (Optr)&t_push1, (Optr)float_1_721, (Optr)&t_send2, (Optr)PSend6919, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_push1, (Optr)int_22, (Optr)&t_push1, (Optr)float_1_717, (Optr)&t_send2, (Optr)PSend6920, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_push1, (Optr)int_23, (Optr)&t_push1, (Optr)float_1_714, (Optr)&t_send2, (Optr)PSend6921, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_push1, (Optr)int_24, (Optr)&t_push1, (Optr)float_1_711, (Optr)&t_send2, (Optr)PSend6922, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_push1, (Optr)int_25, (Optr)&t_push1, (Optr)float_1_708, (Optr)&t_send2, (Optr)PSend6923, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_push1, (Optr)int_26, (Optr)&t_push1, (Optr)float_1_706, (Optr)&t_send2, (Optr)PSend6924, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_push1, (Optr)int_27, (Optr)&t_push1, (Optr)float_1_703, (Optr)&t_send2, (Optr)PSend6925, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_push1, (Optr)int_28, (Optr)&t_push1, (Optr)float_1_701, (Optr)&t_send2, (Optr)PSend6926, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_push1, (Optr)int_29, (Optr)&t_push1, (Optr)float_1_699, (Optr)&t_send2, (Optr)PSend6927, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_push1, (Optr)int_30, (Optr)&t_push1, (Optr)float_1_697, (Optr)&t_send2, (Optr)PSend6928, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_values_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6929, (Optr)&t_send1, (Optr)PSend6930, (Optr)&t_method_return);
    Method PMethod6894 = new_Method_with(empty_Array, PArray6895, empty_Array, PThreadedCode6896, 32, PAssign6897, PSend6899, PSend6900, PSend6901, PSend6902, PSend6903, PSend6904, PSend6905, PSend6906, PSend6907, PSend6908, PSend6909, PSend6910, PSend6911, PSend6912, PSend6913, PSend6914, PSend6915, PSend6916, PSend6917, PSend6918, PSend6919, PSend6920, PSend6921, PSend6922, PSend6923, PSend6924, PSend6925, PSend6926, PSend6927, PSend6928, PSend6930);
    
    MethodClosure MC_SMB_studentsTConfidenceFactor = new_MethodClosure((Method)PMethod6894, PBenchmark_AbstractBenchmark_Class);
    store_method(PBenchmark_AbstractBenchmark_Class, SMB_studentsTConfidenceFactor, MC_SMB_studentsTConfidenceFactor);
}


static void init_SMB_absdev() {
    Symbol SMB_absdev = new_Symbol(L"absdev");
    Symbol SMB_average = new_Symbol(L"average");
    // average. 
    Send PSend6933 = new_Send((Optr)self, SMB_average, 0);
    Symbol SMB_stdev = new_Symbol(L"stdev");
    // stdev. 
    Send PSend6934 = new_Send((Optr)self, SMB_stdev, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend6935 = new_Send((Optr)PSend6933, SMB__times_, 1, (Optr)PSend6934);
    Array PThreadedCode6932 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6933, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6934, (Optr)&t_send1, (Optr)PSend6935, (Optr)&t_method_return);
    Method PMethod6931 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6932, 1, PSend6935);
    
    MethodClosure MC_SMB_absdev = new_MethodClosure((Method)PMethod6931, PBenchmark_AbstractBenchmark_Class);
    store_method(PBenchmark_AbstractBenchmark_Class, SMB_absdev, MC_SMB_absdev);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    SmallInt int_100 = new_SmallInt(100);
    Constant int_100_Const = new_Constant((Optr)int_100);
    Assign PAssign6938 = new_Assign((Optr)slot_PBenchmark_AbstractBenchmark_probeCount, (Optr)int_100_Const);
    Array PThreadedCode6937 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign6938, (Optr)&t_push1, (Optr)int_100, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6936 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6937, 2, PAssign6938, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod6936, PBenchmark_AbstractBenchmark_Class);
    store_method(PBenchmark_AbstractBenchmark_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray6940 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_significantDigits_0_1 = new_Variable_named(L"significantDigits", 0);
    Variable VAR_quantum_0_2 = new_Variable_named(L"quantum", 0);
    Variable VAR_total_0_3 = new_Variable_named(L"total", 0);
    Variable VAR_stdev_0_4 = new_Variable_named(L"stdev", 0);
    Variable VAR_totalSignificantDigits_0_5 = new_Variable_named(L"totalSignificantDigits", 0);
    Array PArray6941 = new_Array_with(5, (Optr)VAR_significantDigits_0_1, (Optr)VAR_quantum_0_2, (Optr)VAR_total_0_3, (Optr)VAR_stdev_0_4, (Optr)VAR_totalSignificantDigits_0_5);
    Symbol SMB_significantDigits = new_Symbol(L"significantDigits");
    // significantDigits. 
    Send PSend6944 = new_Send((Optr)self, SMB_significantDigits, 0);
    Assign PAssign6943 = new_Assign((Optr)VAR_significantDigits_0_1, (Optr)PSend6944);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__divide_ = new_Symbol(L"/");
    SmallInt int_10 = new_SmallInt(10);
    Constant int_10_Const = new_Constant((Optr)int_10);
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    // asFloat. 
    Send PSend6948 = new_Send((Optr)int_10_Const, SMB_asFloat, 0);
    // /. 
    Send PSend6947 = new_Send((Optr)int_1_Const, SMB__divide_, 1, (Optr)PSend6948);
    Symbol SMB_raisedTo_ = new_Symbol(L"raisedTo:");
    // raisedTo:. 
    Send PSend6946 = new_Send((Optr)PSend6947, SMB_raisedTo_, 1, (Optr)VAR_significantDigits_0_1);
    Assign PAssign6945 = new_Assign((Optr)VAR_quantum_0_2, (Optr)PSend6946);
    Symbol SMB_confidenceVariance = new_Symbol(L"confidenceVariance");
    // confidenceVariance. 
    Send PSend6951 = new_Send((Optr)self, SMB_confidenceVariance, 0);
    Symbol SMB_roundTo_ = new_Symbol(L"roundTo:");
    // roundTo:. 
    Send PSend6950 = new_Send((Optr)PSend6951, SMB_roundTo_, 1, (Optr)VAR_quantum_0_2);
    Assign PAssign6949 = new_Assign((Optr)VAR_stdev_0_4, (Optr)PSend6950);
    Symbol SMB_total = new_Symbol(L"total");
    // total. 
    Send PSend6955 = new_Send((Optr)self, SMB_total, 0);
    // roundTo:. 
    Send PSend6954 = new_Send((Optr)PSend6955, SMB_roundTo_, 1, (Optr)VAR_quantum_0_2);
    Symbol SMB_printString = new_Symbol(L"printString");
    // printString. 
    Send PSend6953 = new_Send((Optr)PSend6954, SMB_printString, 0);
    Assign PAssign6952 = new_Assign((Optr)VAR_total_0_3, (Optr)PSend6953);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6958 = new_Send((Optr)VAR_total_0_3, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    Character char_2907 = new_Character(L'.');
    Constant char_2907_Const = new_Constant((Optr)char_2907);
    // indexOf:. 
    Send PSend6959 = new_Send((Optr)VAR_total_0_3, SMB_indexOf_, 1, (Optr)char_2907_Const);
    // -. 
    Send PSend6957 = new_Send((Optr)PSend6958, SMB__minus_, 1, (Optr)PSend6959);
    Assign PAssign6956 = new_Assign((Optr)VAR_totalSignificantDigits_0_5, (Optr)PSend6957);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend6960 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)VAR_total_0_3);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend6961 = new_Send((Optr)VAR_totalSignificantDigits_0_5, SMB__lt_, 1, (Optr)VAR_significantDigits_0_1);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // -. 
    Send PSend6965 = new_Send((Optr)VAR_significantDigits_0_1, SMB__minus_, 1, (Optr)VAR_totalSignificantDigits_0_5);
    String string_6968 = new_String(L"0");
    Constant string_6968_Const = new_Constant((Optr)string_6968);
    // <<. 
    Send PSend6969 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_6968_Const);
    Array PThreadedCode6967 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_6968, (Optr)&t_send1, (Optr)PSend6969, (Optr)&t_block_return);
    Block PBlock6966 = new_Block_with(empty_Array, empty_Array, PThreadedCode6967, 1, PSend6969);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend6970 = new_Send((Optr)PSend6965, SMB_timesRepeat_, 1, (Optr)PBlock6966);
    Array PThreadedCode6964 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_significantDigits_0_1, (Optr)&t_push_variable, (Optr)VAR_totalSignificantDigits_0_5, (Optr)&t_send1, (Optr)PSend6965, (Optr)&t_push_closure, (Optr)PBlock6966, (Optr)&t_send1, (Optr)PSend6970, (Optr)&t_block_return);
    Block PBlock6963 = new_Block_with(empty_Array, empty_Array, PThreadedCode6964, 1, PSend6970);
    // ifTrue:. 
    Send PSend6962 = new_Send((Optr)PSend6961, SMB_ifTrue_, 1, (Optr)PBlock6963);
    String string_6971 = new_String(L" +/-");
    Constant string_6971_Const = new_Constant((Optr)string_6971);
    // <<. 
    Send PSend6972 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_6971_Const);
    // <<. 
    Send PSend6973 = new_Send((Optr)PSend6972, SMB__shiftLeft_, 1, (Optr)VAR_stdev_0_4);
    Array PThreadedCode6942 = instantiate_Array_with(ThreadedCode_Class, 0, 91, (Optr)&t_push1, (Optr)PAssign6943, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6944, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6945, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send0, (Optr)PSend6948, (Optr)&t_send1, (Optr)PSend6947, (Optr)&t_push_variable, (Optr)VAR_significantDigits_0_1, (Optr)&t_send1, (Optr)PSend6946, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6949, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6951, (Optr)&t_push_variable, (Optr)VAR_quantum_0_2, (Optr)&t_send1, (Optr)PSend6950, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6952, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6955, (Optr)&t_push_variable, (Optr)VAR_quantum_0_2, (Optr)&t_send1, (Optr)PSend6954, (Optr)&t_send0, (Optr)PSend6953, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6956, (Optr)&t_push_variable, (Optr)VAR_total_0_3, (Optr)&t_send0, (Optr)PSend6958, (Optr)&t_push_variable, (Optr)VAR_total_0_3, (Optr)&t_push1, (Optr)char_2907, (Optr)&t_send1, (Optr)PSend6959, (Optr)&t_send1, (Optr)PSend6957, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_total_0_3, (Optr)&t_send1, (Optr)PSend6960, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_totalSignificantDigits_0_5, (Optr)&t_push_variable, (Optr)VAR_significantDigits_0_1, (Optr)&t_send1, (Optr)PSend6961, (Optr)&t_send_ifTrue_, (Optr)PSend6962, (Optr)PBlock6963, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_6971, (Optr)&t_send1, (Optr)PSend6972, (Optr)&t_push_variable, (Optr)VAR_stdev_0_4, (Optr)&t_send1, (Optr)PSend6973, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6939 = new_Method_with(PArray6940, PArray6941, empty_Array, PThreadedCode6942, 9, PAssign6943, PAssign6945, PAssign6949, PAssign6952, PAssign6956, PSend6960, PSend6962, PSend6973, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod6939, PBenchmark_AbstractBenchmark_Class);
    store_method(PBenchmark_AbstractBenchmark_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_gaussianConfidenceFactor() {
    Symbol SMB_gaussianConfidenceFactor = new_Symbol(L"gaussianConfidenceFactor");
    Float float_1_644853626951 = new_Float(1.644853626951);
    Array PThreadedCode6975 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)float_1_644853626951, (Optr)&t_method_return);
    Constant float_1_644853626951_Const = new_Constant((Optr)float_1_644853626951);
    Method PMethod6974 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6975, 1, float_1_644853626951_Const);
    
    MethodClosure MC_SMB_gaussianConfidenceFactor = new_MethodClosure((Method)PMethod6974, PBenchmark_AbstractBenchmark_Class);
    store_method(PBenchmark_AbstractBenchmark_Class, SMB_gaussianConfidenceFactor, MC_SMB_gaussianConfidenceFactor);
}


static void init_SMB_probeCount() {
    Symbol SMB_probeCount = new_Symbol(L"probeCount");
    Array PThreadedCode6977 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_AbstractBenchmark_probeCount, (Optr)&t_method_return);
    Method PMethod6976 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6977, 1, slot_PBenchmark_AbstractBenchmark_probeCount);
    
    MethodClosure MC_SMB_probeCount = new_MethodClosure((Method)PMethod6976, PBenchmark_AbstractBenchmark_Class);
    store_method(PBenchmark_AbstractBenchmark_Class, SMB_probeCount, MC_SMB_probeCount);
}


static void init_SMB_significantDigits() {
    Symbol SMB_significantDigits = new_Symbol(L"significantDigits");
    Variable VAR_variance_0_0 = new_Variable_named(L"variance", 0);
    Array PArray6979 = new_Array_with(1, (Optr)VAR_variance_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray6982 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_confidenceVariance = new_Symbol(L"confidenceVariance");
    // confidenceVariance. 
    Send PSend6985 = new_Send((Optr)self, SMB_confidenceVariance, 0);
    Assign PAssign6984 = new_Assign((Optr)VAR_variance_0_0, (Optr)PSend6985);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend6986 = new_Send((Optr)VAR_variance_0_0, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // escape:. 
    Send PSend6990 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)int_2_Const);
    Array PThreadedCode6989 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend6990, (Optr)&t_block_return);
    Block PBlock6988 = new_Block_with(empty_Array, empty_Array, PThreadedCode6989, 1, PSend6990);
    // ifTrue:. 
    Send PSend6987 = new_Send((Optr)PSend6986, SMB_ifTrue_, 1, (Optr)PBlock6988);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // >=. 
    Send PSend6991 = new_Send((Optr)VAR_variance_0_0, SMB__gt__equals_, 1, (Optr)int_10_Const);
    // escape:. 
    Send PSend6995 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)int_0_Const);
    Array PThreadedCode6994 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend6995, (Optr)&t_block_return);
    Block PBlock6993 = new_Block_with(empty_Array, empty_Array, PThreadedCode6994, 1, PSend6995);
    // ifTrue:. 
    Send PSend6992 = new_Send((Optr)PSend6991, SMB_ifTrue_, 1, (Optr)PBlock6993);
    Symbol SMB_log = new_Symbol(L"log");
    // log. 
    Send PSend6996 = new_Send((Optr)VAR_variance_0_0, SMB_log, 0);
    Symbol SMB_floor = new_Symbol(L"floor");
    // floor. 
    Send PSend6997 = new_Send((Optr)PSend6996, SMB_floor, 0);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend6998 = new_Send((Optr)int_1_Const, SMB__minus_, 1, (Optr)PSend6997);
    Array PThreadedCode6983 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign6984, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6985, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_variance_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend6986, (Optr)&t_send_ifTrue_, (Optr)PSend6987, (Optr)PBlock6988, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_variance_0_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend6991, (Optr)&t_send_ifTrue_, (Optr)PSend6992, (Optr)PBlock6993, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_variance_0_0, (Optr)&t_send0, (Optr)PSend6996, (Optr)&t_send0, (Optr)PSend6997, (Optr)&t_send1, (Optr)PSend6998, (Optr)&t_method_return);
    Block PBlock6981 = new_Block_with(PArray6982, empty_Array, PThreadedCode6983, 4, PAssign6984, PSend6987, PSend6992, PSend6998);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend6999 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock6981);
    Array PThreadedCode6980 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock6981, (Optr)&t_send1, (Optr)PSend6999, (Optr)&t_method_return);
    Method PMethod6978 = new_Method_with(empty_Array, PArray6979, empty_Array, PThreadedCode6980, 1, PSend6999);
    
    MethodClosure MC_SMB_significantDigits = new_MethodClosure((Method)PMethod6978, PBenchmark_AbstractBenchmark_Class);
    store_method(PBenchmark_AbstractBenchmark_Class, SMB_significantDigits, MC_SMB_significantDigits);
}


static void init_SMB_probeCount_() {
    Symbol SMB_probeCount_ = new_Symbol(L"probeCount:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray7001 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign7003 = new_Assign((Optr)slot_PBenchmark_AbstractBenchmark_probeCount, (Optr)VAR_anObject_0_0);
    Array PThreadedCode7002 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7003, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7000 = new_Method_with(PArray7001, empty_Array, empty_Array, PThreadedCode7002, 2, PAssign7003, self);
    
    MethodClosure MC_SMB_probeCount_ = new_MethodClosure((Method)PMethod7000, PBenchmark_AbstractBenchmark_Class);
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