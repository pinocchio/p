#include <lib/class/PEG/Range.h>


Optr layout_PEG_Range_Class_class;
Optr slot_PEG_Range_start;
Optr slot_PEG_Range_stop;
Optr layout_PEG_Range;


static void init_SMB_stop_() {
    Symbol SMB_stop_ = new_Symbol(L"stop:");
    Variable VAR_int_0_0 = new_Variable_named(L"int", 0);
    Array PArray18859 = new_Array_with(1, (Optr)VAR_int_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18862 = new_Send((Optr)VAR_int_0_0, SMB_asInteger, 0);
    Assign PAssign18861 = new_Assign((Optr)slot_PEG_Range_stop, (Optr)PSend18862);
    Array PThreadedCode18860 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign18861, (Optr)&t_push_variable, (Optr)VAR_int_0_0, (Optr)&t_send0, (Optr)PSend18862, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18858 = new_Method_with(PArray18859, empty_Array, empty_Array, PThreadedCode18860, 2, PAssign18861, self);
    
    MethodClosure MC_SMB_stop_ = new_MethodClosure((Method)PMethod18858, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_stop_, MC_SMB_stop_);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18864 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_char_0_1 = new_Variable_named(L"char", 0);
    Variable VAR_charValue_0_2 = new_Variable_named(L"charValue", 0);
    Array PArray18865 = new_Array_with(2, (Optr)VAR_char_0_1, (Optr)VAR_charValue_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18868 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend18871 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Assign PAssign18870 = new_Assign((Optr)VAR_char_0_1, (Optr)PSend18871);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18874 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18873 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18874, (Optr)&t_block_return);
    Block PBlock18872 = new_Block_with(empty_Array, empty_Array, PThreadedCode18873, 1, PSend18874);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend18875 = new_Send((Optr)VAR_char_0_1, SMB_ifNil_, 1, (Optr)PBlock18872);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18877 = new_Send((Optr)VAR_char_0_1, SMB_asInteger, 0);
    Assign PAssign18876 = new_Assign((Optr)VAR_charValue_0_2, (Optr)PSend18877);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend18878 = new_Send((Optr)VAR_charValue_0_2, SMB__lt_, 1, (Optr)slot_PEG_Range_start);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend18881 = new_Send((Optr)VAR_charValue_0_2, SMB__gt_, 1, (Optr)slot_PEG_Range_stop);
    Array PThreadedCode18880 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_stop, (Optr)&t_send1, (Optr)PSend18881, (Optr)&t_block_return);
    Block PBlock18879 = new_Block_with(empty_Array, empty_Array, PThreadedCode18880, 1, PSend18881);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend18882 = new_Send((Optr)PSend18878, SMB_or_, 1, (Optr)PBlock18879);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend18886 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18885 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18886, (Optr)&t_block_return);
    Block PBlock18884 = new_Block_with(empty_Array, empty_Array, PThreadedCode18885, 1, PSend18886);
    // ifTrue:. 
    Send PSend18883 = new_Send((Optr)PSend18882, SMB_ifTrue_, 1, (Optr)PBlock18884);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend18887 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend18888 = new_Send((Optr)PSend18887, SMB_push_, 1, (Optr)VAR_char_0_1);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend18889 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode18869 = instantiate_Array_with(ThreadedCode_Class, 0, 52, (Optr)&t_push1, (Optr)PAssign18870, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18871, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_push_closure, (Optr)PBlock18872, (Optr)&t_send1, (Optr)PSend18875, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18876, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_send0, (Optr)PSend18877, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_start, (Optr)&t_send1, (Optr)PSend18878, (Optr)&t_push_closure, (Optr)PBlock18879, (Optr)&t_send1, (Optr)PSend18882, (Optr)&t_send_ifTrue_, (Optr)PSend18883, (Optr)PBlock18884, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18887, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_send1, (Optr)PSend18888, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18889, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18867 = new_Block_with(PArray18868, empty_Array, PThreadedCode18869, 7, PAssign18870, PSend18875, PAssign18876, PSend18883, PSend18888, PSend18889, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18890 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18867);
    Array PThreadedCode18866 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18867, (Optr)&t_send1, (Optr)PSend18890, (Optr)&t_method_return);
    Method PMethod18863 = new_Method_with(PArray18864, PArray18865, empty_Array, PThreadedCode18866, 1, PSend18890);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod18863, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18892 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_char_0_1 = new_Variable_named(L"char", 0);
    Variable VAR_charValue_0_2 = new_Variable_named(L"charValue", 0);
    Array PArray18893 = new_Array_with(2, (Optr)VAR_char_0_1, (Optr)VAR_charValue_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18896 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend18899 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Assign PAssign18898 = new_Assign((Optr)VAR_char_0_1, (Optr)PSend18899);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18902 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18901 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18902, (Optr)&t_block_return);
    Block PBlock18900 = new_Block_with(empty_Array, empty_Array, PThreadedCode18901, 1, PSend18902);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend18903 = new_Send((Optr)VAR_char_0_1, SMB_ifNil_, 1, (Optr)PBlock18900);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18905 = new_Send((Optr)VAR_char_0_1, SMB_asInteger, 0);
    Assign PAssign18904 = new_Assign((Optr)VAR_charValue_0_2, (Optr)PSend18905);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend18906 = new_Send((Optr)VAR_charValue_0_2, SMB__lt_, 1, (Optr)slot_PEG_Range_start);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend18909 = new_Send((Optr)VAR_charValue_0_2, SMB__gt_, 1, (Optr)slot_PEG_Range_stop);
    Array PThreadedCode18908 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_stop, (Optr)&t_send1, (Optr)PSend18909, (Optr)&t_block_return);
    Block PBlock18907 = new_Block_with(empty_Array, empty_Array, PThreadedCode18908, 1, PSend18909);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend18910 = new_Send((Optr)PSend18906, SMB_or_, 1, (Optr)PBlock18907);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend18914 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18913 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18914, (Optr)&t_block_return);
    Block PBlock18912 = new_Block_with(empty_Array, empty_Array, PThreadedCode18913, 1, PSend18914);
    // ifTrue:. 
    Send PSend18911 = new_Send((Optr)PSend18910, SMB_ifTrue_, 1, (Optr)PBlock18912);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend18915 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode18897 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign18898, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18899, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_push_closure, (Optr)PBlock18900, (Optr)&t_send1, (Optr)PSend18903, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18904, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_send0, (Optr)PSend18905, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_start, (Optr)&t_send1, (Optr)PSend18906, (Optr)&t_push_closure, (Optr)PBlock18907, (Optr)&t_send1, (Optr)PSend18910, (Optr)&t_send_ifTrue_, (Optr)PSend18911, (Optr)PBlock18912, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18915, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18895 = new_Block_with(PArray18896, empty_Array, PThreadedCode18897, 6, PAssign18898, PSend18903, PAssign18904, PSend18911, PSend18915, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18916 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18895);
    Array PThreadedCode18894 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18895, (Optr)&t_send1, (Optr)PSend18916, (Optr)&t_method_return);
    Method PMethod18891 = new_Method_with(PArray18892, PArray18893, empty_Array, PThreadedCode18894, 1, PSend18916);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod18891, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
    Array PArray18918 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Character char_8646 = new_Character(L'[');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_8646_Const = new_Constant((Optr)char_8646);
    // <<. 
    Send PSend18920 = new_Send((Optr)VAR_stream_0_0, SMB__shiftLeft_, 1, (Optr)char_8646_Const);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend18921 = new_Send((Optr)slot_PEG_Range_start, SMB_asCharacter, 0);
    // <<. 
    Send PSend18922 = new_Send((Optr)PSend18920, SMB__shiftLeft_, 1, (Optr)PSend18921);
    Character char_2179 = new_Character(L'-');
    Constant char_2179_Const = new_Constant((Optr)char_2179);
    // <<. 
    Send PSend18923 = new_Send((Optr)PSend18922, SMB__shiftLeft_, 1, (Optr)char_2179_Const);
    // asCharacter. 
    Send PSend18924 = new_Send((Optr)slot_PEG_Range_stop, SMB_asCharacter, 0);
    // <<. 
    Send PSend18925 = new_Send((Optr)PSend18923, SMB__shiftLeft_, 1, (Optr)PSend18924);
    Character char_18926 = new_Character(L']');
    Constant char_18926_Const = new_Constant((Optr)char_18926);
    // <<. 
    Send PSend18927 = new_Send((Optr)PSend18925, SMB__shiftLeft_, 1, (Optr)char_18926_Const);
    Array PThreadedCode18919 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_push1, (Optr)char_8646, (Optr)&t_send1, (Optr)PSend18920, (Optr)&t_push_slot, (Optr)slot_PEG_Range_start, (Optr)&t_send0, (Optr)PSend18921, (Optr)&t_send1, (Optr)PSend18922, (Optr)&t_push1, (Optr)char_2179, (Optr)&t_send1, (Optr)PSend18923, (Optr)&t_push_slot, (Optr)slot_PEG_Range_stop, (Optr)&t_send0, (Optr)PSend18924, (Optr)&t_send1, (Optr)PSend18925, (Optr)&t_push1, (Optr)char_18926, (Optr)&t_send1, (Optr)PSend18927, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18917 = new_Method_with(PArray18918, empty_Array, empty_Array, PThreadedCode18919, 2, PSend18927, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod18917, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_start_() {
    Symbol SMB_start_ = new_Symbol(L"start:");
    Variable VAR_int_0_0 = new_Variable_named(L"int", 0);
    Array PArray18929 = new_Array_with(1, (Optr)VAR_int_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18932 = new_Send((Optr)VAR_int_0_0, SMB_asInteger, 0);
    Assign PAssign18931 = new_Assign((Optr)slot_PEG_Range_start, (Optr)PSend18932);
    Array PThreadedCode18930 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign18931, (Optr)&t_push_variable, (Optr)VAR_int_0_0, (Optr)&t_send0, (Optr)PSend18932, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18928 = new_Method_with(PArray18929, empty_Array, empty_Array, PThreadedCode18930, 2, PAssign18931, self);
    
    MethodClosure MC_SMB_start_ = new_MethodClosure((Method)PMethod18928, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_start_, MC_SMB_start_);
}


static void init_class_SMB_between_and_() {
    Symbol SMB_between_and_ = new_Symbol(L"between:and:");
    Variable VAR_start_0_0 = new_Variable_named(L"start", 0);
    Variable VAR_stop_0_1 = new_Variable_named(L"stop", 0);
    Array PArray18934 = new_Array_with(2, (Optr)VAR_start_0_0, (Optr)VAR_stop_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray18937 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_min_ = new_Symbol(L"min:");
    // min:. 
    Send PSend18939 = new_Send((Optr)VAR_start_0_0, SMB_min_, 1, (Optr)VAR_stop_0_1);
    Symbol SMB_start_ = new_Symbol(L"start:");
    // start:. 
    Send PSend18940 = new_Send((Optr)VAR__receiver__1_0, SMB_start_, 1, (Optr)PSend18939);
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend18941 = new_Send((Optr)VAR_start_0_0, SMB_max_, 1, (Optr)VAR_stop_0_1);
    Symbol SMB_stop_ = new_Symbol(L"stop:");
    // stop:. 
    Send PSend18942 = new_Send((Optr)VAR__receiver__1_0, SMB_stop_, 1, (Optr)PSend18941);
    Array PThreadedCode18938 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_push_variable, (Optr)VAR_stop_0_1, (Optr)&t_send1, (Optr)PSend18939, (Optr)&t_send1, (Optr)PSend18940, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_push_variable, (Optr)VAR_stop_0_1, (Optr)&t_send1, (Optr)PSend18941, (Optr)&t_send1, (Optr)PSend18942, (Optr)&t_method_return);
    Block PBlock18936 = new_Block_with(PArray18937, empty_Array, PThreadedCode18938, 2, PSend18940, PSend18942);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18943 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend18944 = new_Send((Optr)PBlock18936, SMB_value_, 1, (Optr)PSend18943);
    Array PThreadedCode18935 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock18936, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18943, (Optr)&t_send1, (Optr)PSend18944, (Optr)&t_method_return);
    Method PMethod18933 = new_Method_with(PArray18934, empty_Array, empty_Array, PThreadedCode18935, 1, PSend18944);
    
    MethodClosure MC_SMB_between_and_ = new_MethodClosure((Method)PMethod18933, HEADER(PEG_Range_Class));
    store_method(HEADER(PEG_Range_Class), SMB_between_and_, MC_SMB_between_and_);
}

void init_PEG_PEGRange_layout() {
    layout_PEG_Range_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_Range_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_Range_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_Range_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_Range_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_Range_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Range = new_Symbol(L"Range");
    slot_PEG_Range_start = (Optr)new_Slot(0, L"start");
    slot_PEG_Range_stop = (Optr)new_Slot(1, L"stop");
    layout_PEG_Range = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_PEG_Range)->values[0] = slot_PEG_Range_start; // start 
    ((Array)layout_PEG_Range)->values[1] = slot_PEG_Range_stop; // stop 
    PEG_Range_Class = (Class)new_Class(PEG_Expression_Class, layout_PEG_Range_Class_class);
    PEG_Range_Class->layout = layout_PEG_Range;
    PEG_Range_Class->name = SMB_Range;
    
}

void init_PEG_PEGRange_methods() {
    init_SMB_stop_();
    init_SMB_parseOn_();
    init_SMB_omitMatch_();
    init_SMB_printOn_();
    init_SMB_start_();
    init_class_SMB_between_and_();
    
}