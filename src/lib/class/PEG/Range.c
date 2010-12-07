#include <lib/class/PEG/Range.h>


Optr layout_PEG_Range_Class_class;
Optr slot_PEG_Range_start;
Optr slot_PEG_Range_stop;
Optr layout_PEG_Range;


static void init_SMB_stop_() {
    Symbol SMB_stop_ = new_Symbol(L"stop:");
    Variable VAR_int_0_0 = new_Variable_named(L"int", 0);
<<<<<<< HEAD
    Array PArray18879 = new_Array_with(1, (Optr)VAR_int_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18882 = new_Send((Optr)VAR_int_0_0, SMB_asInteger, 0);
    Assign PAssign18881 = new_Assign((Optr)slot_PEG_Range_stop, (Optr)PSend18882);
    Array PThreadedCode18880 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign18881, (Optr)&t_push_variable, (Optr)VAR_int_0_0, (Optr)&t_send0, (Optr)PSend18882, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18878 = new_Method_with(PArray18879, empty_Array, empty_Array, PThreadedCode18880, 2, PAssign18881, self);
    
    MethodClosure MC_SMB_stop_ = new_MethodClosure((Method)PMethod18878, PEG_Range_Class);
=======
    Array PArray18857 = new_Array_with(1, (Optr)VAR_int_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18860 = new_Send((Optr)VAR_int_0_0, SMB_asInteger, 0);
    Assign PAssign18859 = new_Assign((Optr)slot_PEG_Range_stop, (Optr)PSend18860);
    Array PThreadedCode18858 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign18859, (Optr)&t_push_variable, (Optr)VAR_int_0_0, (Optr)&t_send0, (Optr)PSend18860, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18856 = new_Method_with(PArray18857, empty_Array, empty_Array, PThreadedCode18858, 2, PAssign18859, self);
    
    MethodClosure MC_SMB_stop_ = new_MethodClosure((Method)PMethod18856, PEG_Range_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Range_Class, SMB_stop_, MC_SMB_stop_);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
<<<<<<< HEAD
    Array PArray18884 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_char_0_1 = new_Variable_named(L"char", 0);
    Variable VAR_charValue_0_2 = new_Variable_named(L"charValue", 0);
    Array PArray18885 = new_Array_with(2, (Optr)VAR_char_0_1, (Optr)VAR_charValue_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18888 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend18891 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Assign PAssign18890 = new_Assign((Optr)VAR_char_0_1, (Optr)PSend18891);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18894 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18893 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18894, (Optr)&t_block_return);
    Block PBlock18892 = new_Block_with(empty_Array, empty_Array, PThreadedCode18893, 1, PSend18894);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend18895 = new_Send((Optr)VAR_char_0_1, SMB_ifNil_, 1, (Optr)PBlock18892);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18897 = new_Send((Optr)VAR_char_0_1, SMB_asInteger, 0);
    Assign PAssign18896 = new_Assign((Optr)VAR_charValue_0_2, (Optr)PSend18897);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend18898 = new_Send((Optr)VAR_charValue_0_2, SMB__lt_, 1, (Optr)slot_PEG_Range_start);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend18901 = new_Send((Optr)VAR_charValue_0_2, SMB__gt_, 1, (Optr)slot_PEG_Range_stop);
    Array PThreadedCode18900 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_stop, (Optr)&t_send1, (Optr)PSend18901, (Optr)&t_block_return);
    Block PBlock18899 = new_Block_with(empty_Array, empty_Array, PThreadedCode18900, 1, PSend18901);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend18902 = new_Send((Optr)PSend18898, SMB_or_, 1, (Optr)PBlock18899);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend18906 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18905 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18906, (Optr)&t_block_return);
    Block PBlock18904 = new_Block_with(empty_Array, empty_Array, PThreadedCode18905, 1, PSend18906);
    // ifTrue:. 
    Send PSend18903 = new_Send((Optr)PSend18902, SMB_ifTrue_, 1, (Optr)PBlock18904);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend18907 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend18908 = new_Send((Optr)PSend18907, SMB_push_, 1, (Optr)VAR_char_0_1);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend18909 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode18889 = instantiate_Array_with(ThreadedCode_Class, 0, 52, (Optr)&t_push1, (Optr)PAssign18890, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18891, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_push_closure, (Optr)PBlock18892, (Optr)&t_send1, (Optr)PSend18895, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18896, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_send0, (Optr)PSend18897, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_start, (Optr)&t_send1, (Optr)PSend18898, (Optr)&t_push_closure, (Optr)PBlock18899, (Optr)&t_send1, (Optr)PSend18902, (Optr)&t_send_ifTrue_, (Optr)PSend18903, (Optr)PBlock18904, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18907, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_send1, (Optr)PSend18908, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18909, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18887 = new_Block_with(PArray18888, empty_Array, PThreadedCode18889, 7, PAssign18890, PSend18895, PAssign18896, PSend18903, PSend18908, PSend18909, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18910 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18887);
    Array PThreadedCode18886 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18887, (Optr)&t_send1, (Optr)PSend18910, (Optr)&t_method_return);
    Method PMethod18883 = new_Method_with(PArray18884, PArray18885, empty_Array, PThreadedCode18886, 1, PSend18910);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod18883, PEG_Range_Class);
=======
    Array PArray18862 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_char_0_1 = new_Variable_named(L"char", 0);
    Variable VAR_charValue_0_2 = new_Variable_named(L"charValue", 0);
    Array PArray18863 = new_Array_with(2, (Optr)VAR_char_0_1, (Optr)VAR_charValue_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18866 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend18869 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Assign PAssign18868 = new_Assign((Optr)VAR_char_0_1, (Optr)PSend18869);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18872 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18871 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18872, (Optr)&t_block_return);
    Block PBlock18870 = new_Block_with(empty_Array, empty_Array, PThreadedCode18871, 1, PSend18872);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend18873 = new_Send((Optr)VAR_char_0_1, SMB_ifNil_, 1, (Optr)PBlock18870);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18875 = new_Send((Optr)VAR_char_0_1, SMB_asInteger, 0);
    Assign PAssign18874 = new_Assign((Optr)VAR_charValue_0_2, (Optr)PSend18875);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend18876 = new_Send((Optr)VAR_charValue_0_2, SMB__lt_, 1, (Optr)slot_PEG_Range_start);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend18879 = new_Send((Optr)VAR_charValue_0_2, SMB__gt_, 1, (Optr)slot_PEG_Range_stop);
    Array PThreadedCode18878 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_stop, (Optr)&t_send1, (Optr)PSend18879, (Optr)&t_block_return);
    Block PBlock18877 = new_Block_with(empty_Array, empty_Array, PThreadedCode18878, 1, PSend18879);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend18880 = new_Send((Optr)PSend18876, SMB_or_, 1, (Optr)PBlock18877);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend18884 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18883 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18884, (Optr)&t_block_return);
    Block PBlock18882 = new_Block_with(empty_Array, empty_Array, PThreadedCode18883, 1, PSend18884);
    // ifTrue:. 
    Send PSend18881 = new_Send((Optr)PSend18880, SMB_ifTrue_, 1, (Optr)PBlock18882);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend18885 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend18886 = new_Send((Optr)PSend18885, SMB_push_, 1, (Optr)VAR_char_0_1);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend18887 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode18867 = instantiate_Array_with(ThreadedCode_Class, 0, 52, (Optr)&t_push1, (Optr)PAssign18868, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18869, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_push_closure, (Optr)PBlock18870, (Optr)&t_send1, (Optr)PSend18873, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18874, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_send0, (Optr)PSend18875, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_start, (Optr)&t_send1, (Optr)PSend18876, (Optr)&t_push_closure, (Optr)PBlock18877, (Optr)&t_send1, (Optr)PSend18880, (Optr)&t_send_ifTrue_, (Optr)PSend18881, (Optr)PBlock18882, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18885, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_send1, (Optr)PSend18886, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18887, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18865 = new_Block_with(PArray18866, empty_Array, PThreadedCode18867, 7, PAssign18868, PSend18873, PAssign18874, PSend18881, PSend18886, PSend18887, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18888 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18865);
    Array PThreadedCode18864 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18865, (Optr)&t_send1, (Optr)PSend18888, (Optr)&t_method_return);
    Method PMethod18861 = new_Method_with(PArray18862, PArray18863, empty_Array, PThreadedCode18864, 1, PSend18888);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod18861, PEG_Range_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Range_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
<<<<<<< HEAD
    Array PArray18912 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_char_0_1 = new_Variable_named(L"char", 0);
    Variable VAR_charValue_0_2 = new_Variable_named(L"charValue", 0);
    Array PArray18913 = new_Array_with(2, (Optr)VAR_char_0_1, (Optr)VAR_charValue_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18916 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend18919 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Assign PAssign18918 = new_Assign((Optr)VAR_char_0_1, (Optr)PSend18919);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18922 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18921 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18922, (Optr)&t_block_return);
    Block PBlock18920 = new_Block_with(empty_Array, empty_Array, PThreadedCode18921, 1, PSend18922);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend18923 = new_Send((Optr)VAR_char_0_1, SMB_ifNil_, 1, (Optr)PBlock18920);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18925 = new_Send((Optr)VAR_char_0_1, SMB_asInteger, 0);
    Assign PAssign18924 = new_Assign((Optr)VAR_charValue_0_2, (Optr)PSend18925);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend18926 = new_Send((Optr)VAR_charValue_0_2, SMB__lt_, 1, (Optr)slot_PEG_Range_start);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend18929 = new_Send((Optr)VAR_charValue_0_2, SMB__gt_, 1, (Optr)slot_PEG_Range_stop);
    Array PThreadedCode18928 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_stop, (Optr)&t_send1, (Optr)PSend18929, (Optr)&t_block_return);
    Block PBlock18927 = new_Block_with(empty_Array, empty_Array, PThreadedCode18928, 1, PSend18929);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend18930 = new_Send((Optr)PSend18926, SMB_or_, 1, (Optr)PBlock18927);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend18934 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18933 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18934, (Optr)&t_block_return);
    Block PBlock18932 = new_Block_with(empty_Array, empty_Array, PThreadedCode18933, 1, PSend18934);
    // ifTrue:. 
    Send PSend18931 = new_Send((Optr)PSend18930, SMB_ifTrue_, 1, (Optr)PBlock18932);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend18935 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode18917 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign18918, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18919, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_push_closure, (Optr)PBlock18920, (Optr)&t_send1, (Optr)PSend18923, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18924, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_send0, (Optr)PSend18925, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_start, (Optr)&t_send1, (Optr)PSend18926, (Optr)&t_push_closure, (Optr)PBlock18927, (Optr)&t_send1, (Optr)PSend18930, (Optr)&t_send_ifTrue_, (Optr)PSend18931, (Optr)PBlock18932, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18935, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18915 = new_Block_with(PArray18916, empty_Array, PThreadedCode18917, 6, PAssign18918, PSend18923, PAssign18924, PSend18931, PSend18935, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18936 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18915);
    Array PThreadedCode18914 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18915, (Optr)&t_send1, (Optr)PSend18936, (Optr)&t_method_return);
    Method PMethod18911 = new_Method_with(PArray18912, PArray18913, empty_Array, PThreadedCode18914, 1, PSend18936);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod18911, PEG_Range_Class);
=======
    Array PArray18890 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_char_0_1 = new_Variable_named(L"char", 0);
    Variable VAR_charValue_0_2 = new_Variable_named(L"charValue", 0);
    Array PArray18891 = new_Array_with(2, (Optr)VAR_char_0_1, (Optr)VAR_charValue_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18894 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend18897 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Assign PAssign18896 = new_Assign((Optr)VAR_char_0_1, (Optr)PSend18897);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18900 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18899 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18900, (Optr)&t_block_return);
    Block PBlock18898 = new_Block_with(empty_Array, empty_Array, PThreadedCode18899, 1, PSend18900);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend18901 = new_Send((Optr)VAR_char_0_1, SMB_ifNil_, 1, (Optr)PBlock18898);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18903 = new_Send((Optr)VAR_char_0_1, SMB_asInteger, 0);
    Assign PAssign18902 = new_Assign((Optr)VAR_charValue_0_2, (Optr)PSend18903);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend18904 = new_Send((Optr)VAR_charValue_0_2, SMB__lt_, 1, (Optr)slot_PEG_Range_start);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend18907 = new_Send((Optr)VAR_charValue_0_2, SMB__gt_, 1, (Optr)slot_PEG_Range_stop);
    Array PThreadedCode18906 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_stop, (Optr)&t_send1, (Optr)PSend18907, (Optr)&t_block_return);
    Block PBlock18905 = new_Block_with(empty_Array, empty_Array, PThreadedCode18906, 1, PSend18907);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend18908 = new_Send((Optr)PSend18904, SMB_or_, 1, (Optr)PBlock18905);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend18912 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18911 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18912, (Optr)&t_block_return);
    Block PBlock18910 = new_Block_with(empty_Array, empty_Array, PThreadedCode18911, 1, PSend18912);
    // ifTrue:. 
    Send PSend18909 = new_Send((Optr)PSend18908, SMB_ifTrue_, 1, (Optr)PBlock18910);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend18913 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode18895 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign18896, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18897, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_push_closure, (Optr)PBlock18898, (Optr)&t_send1, (Optr)PSend18901, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18902, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_send0, (Optr)PSend18903, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_start, (Optr)&t_send1, (Optr)PSend18904, (Optr)&t_push_closure, (Optr)PBlock18905, (Optr)&t_send1, (Optr)PSend18908, (Optr)&t_send_ifTrue_, (Optr)PSend18909, (Optr)PBlock18910, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18913, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18893 = new_Block_with(PArray18894, empty_Array, PThreadedCode18895, 6, PAssign18896, PSend18901, PAssign18902, PSend18909, PSend18913, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18914 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18893);
    Array PThreadedCode18892 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18893, (Optr)&t_send1, (Optr)PSend18914, (Optr)&t_method_return);
    Method PMethod18889 = new_Method_with(PArray18890, PArray18891, empty_Array, PThreadedCode18892, 1, PSend18914);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod18889, PEG_Range_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Range_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
<<<<<<< HEAD
    Array PArray18938 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Character char_8678 = new_Character(L'[');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_8678_Const = new_Constant((Optr)char_8678);
    // <<. 
    Send PSend18940 = new_Send((Optr)VAR_stream_0_0, SMB__shiftLeft_, 1, (Optr)char_8678_Const);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend18941 = new_Send((Optr)slot_PEG_Range_start, SMB_asCharacter, 0);
    // <<. 
    Send PSend18942 = new_Send((Optr)PSend18940, SMB__shiftLeft_, 1, (Optr)PSend18941);
    Character char_2182 = new_Character(L'-');
    Constant char_2182_Const = new_Constant((Optr)char_2182);
    // <<. 
    Send PSend18943 = new_Send((Optr)PSend18942, SMB__shiftLeft_, 1, (Optr)char_2182_Const);
    // asCharacter. 
    Send PSend18944 = new_Send((Optr)slot_PEG_Range_stop, SMB_asCharacter, 0);
    // <<. 
    Send PSend18945 = new_Send((Optr)PSend18943, SMB__shiftLeft_, 1, (Optr)PSend18944);
    Character char_18946 = new_Character(L']');
    Constant char_18946_Const = new_Constant((Optr)char_18946);
    // <<. 
    Send PSend18947 = new_Send((Optr)PSend18945, SMB__shiftLeft_, 1, (Optr)char_18946_Const);
    Array PThreadedCode18939 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_push1, (Optr)char_8678, (Optr)&t_send1, (Optr)PSend18940, (Optr)&t_push_slot, (Optr)slot_PEG_Range_start, (Optr)&t_send0, (Optr)PSend18941, (Optr)&t_send1, (Optr)PSend18942, (Optr)&t_push1, (Optr)char_2182, (Optr)&t_send1, (Optr)PSend18943, (Optr)&t_push_slot, (Optr)slot_PEG_Range_stop, (Optr)&t_send0, (Optr)PSend18944, (Optr)&t_send1, (Optr)PSend18945, (Optr)&t_push1, (Optr)char_18946, (Optr)&t_send1, (Optr)PSend18947, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18937 = new_Method_with(PArray18938, empty_Array, empty_Array, PThreadedCode18939, 2, PSend18947, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod18937, PEG_Range_Class);
=======
    Array PArray18916 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Character char_8644 = new_Character(L'[');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_8644_Const = new_Constant((Optr)char_8644);
    // <<. 
    Send PSend18918 = new_Send((Optr)VAR_stream_0_0, SMB__shiftLeft_, 1, (Optr)char_8644_Const);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend18919 = new_Send((Optr)slot_PEG_Range_start, SMB_asCharacter, 0);
    // <<. 
    Send PSend18920 = new_Send((Optr)PSend18918, SMB__shiftLeft_, 1, (Optr)PSend18919);
    Character char_2179 = new_Character(L'-');
    Constant char_2179_Const = new_Constant((Optr)char_2179);
    // <<. 
    Send PSend18921 = new_Send((Optr)PSend18920, SMB__shiftLeft_, 1, (Optr)char_2179_Const);
    // asCharacter. 
    Send PSend18922 = new_Send((Optr)slot_PEG_Range_stop, SMB_asCharacter, 0);
    // <<. 
    Send PSend18923 = new_Send((Optr)PSend18921, SMB__shiftLeft_, 1, (Optr)PSend18922);
    Character char_18924 = new_Character(L']');
    Constant char_18924_Const = new_Constant((Optr)char_18924);
    // <<. 
    Send PSend18925 = new_Send((Optr)PSend18923, SMB__shiftLeft_, 1, (Optr)char_18924_Const);
    Array PThreadedCode18917 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_push1, (Optr)char_8644, (Optr)&t_send1, (Optr)PSend18918, (Optr)&t_push_slot, (Optr)slot_PEG_Range_start, (Optr)&t_send0, (Optr)PSend18919, (Optr)&t_send1, (Optr)PSend18920, (Optr)&t_push1, (Optr)char_2179, (Optr)&t_send1, (Optr)PSend18921, (Optr)&t_push_slot, (Optr)slot_PEG_Range_stop, (Optr)&t_send0, (Optr)PSend18922, (Optr)&t_send1, (Optr)PSend18923, (Optr)&t_push1, (Optr)char_18924, (Optr)&t_send1, (Optr)PSend18925, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18915 = new_Method_with(PArray18916, empty_Array, empty_Array, PThreadedCode18917, 2, PSend18925, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod18915, PEG_Range_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Range_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_start_() {
    Symbol SMB_start_ = new_Symbol(L"start:");
    Variable VAR_int_0_0 = new_Variable_named(L"int", 0);
<<<<<<< HEAD
    Array PArray18949 = new_Array_with(1, (Optr)VAR_int_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18952 = new_Send((Optr)VAR_int_0_0, SMB_asInteger, 0);
    Assign PAssign18951 = new_Assign((Optr)slot_PEG_Range_start, (Optr)PSend18952);
    Array PThreadedCode18950 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign18951, (Optr)&t_push_variable, (Optr)VAR_int_0_0, (Optr)&t_send0, (Optr)PSend18952, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18948 = new_Method_with(PArray18949, empty_Array, empty_Array, PThreadedCode18950, 2, PAssign18951, self);
    
    MethodClosure MC_SMB_start_ = new_MethodClosure((Method)PMethod18948, PEG_Range_Class);
=======
    Array PArray18927 = new_Array_with(1, (Optr)VAR_int_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18930 = new_Send((Optr)VAR_int_0_0, SMB_asInteger, 0);
    Assign PAssign18929 = new_Assign((Optr)slot_PEG_Range_start, (Optr)PSend18930);
    Array PThreadedCode18928 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign18929, (Optr)&t_push_variable, (Optr)VAR_int_0_0, (Optr)&t_send0, (Optr)PSend18930, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18926 = new_Method_with(PArray18927, empty_Array, empty_Array, PThreadedCode18928, 2, PAssign18929, self);
    
    MethodClosure MC_SMB_start_ = new_MethodClosure((Method)PMethod18926, PEG_Range_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_Range_Class, SMB_start_, MC_SMB_start_);
}


static void init_class_SMB_between_and_() {
    Symbol SMB_between_and_ = new_Symbol(L"between:and:");
    Variable VAR_start_0_0 = new_Variable_named(L"start", 0);
    Variable VAR_stop_0_1 = new_Variable_named(L"stop", 0);
<<<<<<< HEAD
    Array PArray18954 = new_Array_with(2, (Optr)VAR_start_0_0, (Optr)VAR_stop_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray18957 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_min_ = new_Symbol(L"min:");
    // min:. 
    Send PSend18959 = new_Send((Optr)VAR_start_0_0, SMB_min_, 1, (Optr)VAR_stop_0_1);
    Symbol SMB_start_ = new_Symbol(L"start:");
    // start:. 
    Send PSend18960 = new_Send((Optr)VAR__receiver__1_0, SMB_start_, 1, (Optr)PSend18959);
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend18961 = new_Send((Optr)VAR_start_0_0, SMB_max_, 1, (Optr)VAR_stop_0_1);
    Symbol SMB_stop_ = new_Symbol(L"stop:");
    // stop:. 
    Send PSend18962 = new_Send((Optr)VAR__receiver__1_0, SMB_stop_, 1, (Optr)PSend18961);
    Array PThreadedCode18958 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_push_variable, (Optr)VAR_stop_0_1, (Optr)&t_send1, (Optr)PSend18959, (Optr)&t_send1, (Optr)PSend18960, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_push_variable, (Optr)VAR_stop_0_1, (Optr)&t_send1, (Optr)PSend18961, (Optr)&t_send1, (Optr)PSend18962, (Optr)&t_method_return);
    Block PBlock18956 = new_Block_with(PArray18957, empty_Array, PThreadedCode18958, 2, PSend18960, PSend18962);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18963 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend18964 = new_Send((Optr)PBlock18956, SMB_value_, 1, (Optr)PSend18963);
    Array PThreadedCode18955 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock18956, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18963, (Optr)&t_send1, (Optr)PSend18964, (Optr)&t_method_return);
    Method PMethod18953 = new_Method_with(PArray18954, empty_Array, empty_Array, PThreadedCode18955, 1, PSend18964);
    
    MethodClosure MC_SMB_between_and_ = new_MethodClosure((Method)PMethod18953, HEADER(PEG_Range_Class));
=======
    Array PArray18932 = new_Array_with(2, (Optr)VAR_start_0_0, (Optr)VAR_stop_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray18935 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_min_ = new_Symbol(L"min:");
    // min:. 
    Send PSend18937 = new_Send((Optr)VAR_start_0_0, SMB_min_, 1, (Optr)VAR_stop_0_1);
    Symbol SMB_start_ = new_Symbol(L"start:");
    // start:. 
    Send PSend18938 = new_Send((Optr)VAR__receiver__1_0, SMB_start_, 1, (Optr)PSend18937);
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend18939 = new_Send((Optr)VAR_start_0_0, SMB_max_, 1, (Optr)VAR_stop_0_1);
    Symbol SMB_stop_ = new_Symbol(L"stop:");
    // stop:. 
    Send PSend18940 = new_Send((Optr)VAR__receiver__1_0, SMB_stop_, 1, (Optr)PSend18939);
    Array PThreadedCode18936 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_push_variable, (Optr)VAR_stop_0_1, (Optr)&t_send1, (Optr)PSend18937, (Optr)&t_send1, (Optr)PSend18938, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_push_variable, (Optr)VAR_stop_0_1, (Optr)&t_send1, (Optr)PSend18939, (Optr)&t_send1, (Optr)PSend18940, (Optr)&t_method_return);
    Block PBlock18934 = new_Block_with(PArray18935, empty_Array, PThreadedCode18936, 2, PSend18938, PSend18940);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18941 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend18942 = new_Send((Optr)PBlock18934, SMB_value_, 1, (Optr)PSend18941);
    Array PThreadedCode18933 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock18934, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18941, (Optr)&t_send1, (Optr)PSend18942, (Optr)&t_method_return);
    Method PMethod18931 = new_Method_with(PArray18932, empty_Array, empty_Array, PThreadedCode18933, 1, PSend18942);
    
    MethodClosure MC_SMB_between_and_ = new_MethodClosure((Method)PMethod18931, HEADER(PEG_Range_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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