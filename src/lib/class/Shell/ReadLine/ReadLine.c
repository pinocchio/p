#include <lib/class/Shell/ReadLine/ReadLine.h>


Optr layout_Shell_ReadLine_ReadLine_Class_class;
Optr slot_Shell_ReadLine_ReadLine_client;
Optr slot_Shell_ReadLine_ReadLine_output;
Optr slot_Shell_ReadLine_ReadLine_ready;
Optr slot_Shell_ReadLine_ReadLine_text;
Optr slot_Shell_ReadLine_ReadLine_failure;
Optr slot_Shell_ReadLine_ReadLine_vterm;
Optr layout_Shell_ReadLine_ReadLine;


static void init_SMB_f9() {
    Symbol SMB_f9 = new_Symbol(L"f9");
<<<<<<< HEAD
    Array PThreadedCode17885 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17884 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17885, 1, self);
    
    MethodClosure MC_SMB_f9 = new_MethodClosure((Method)PMethod17884, Shell_ReadLine_ReadLine_Class);
=======
    Array PThreadedCode17851 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17850 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17851, 1, self);
    
    MethodClosure MC_SMB_f9 = new_MethodClosure((Method)PMethod17850, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f9, MC_SMB_f9);
}


static void init_SMB_right_() {
    Symbol SMB_right_ = new_Symbol(L"right:");
    Variable VAR_distance_0_0 = new_Variable_named(L"distance", 0);
<<<<<<< HEAD
    Array PArray17887 = new_Array_with(1, (Optr)VAR_distance_0_0);
=======
    Array PArray17853 = new_Array_with(1, (Optr)VAR_distance_0_0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // <. 
<<<<<<< HEAD
    Send PSend17889 = new_Send((Optr)VAR_distance_0_0, SMB__lt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17893 = new_Send((Optr)int_0_Const, SMB__minus_, 1, (Optr)VAR_distance_0_0);
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend17896 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode17895 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17896, (Optr)&t_block_return);
    Block PBlock17894 = new_Block_with(empty_Array, empty_Array, PThreadedCode17895, 1, PSend17896);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17897 = new_Send((Optr)PSend17893, SMB_timesRepeat_, 1, (Optr)PBlock17894);
    Array PThreadedCode17892 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_0, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_send1, (Optr)PSend17893, (Optr)&t_push_closure, (Optr)PBlock17894, (Optr)&t_send1, (Optr)PSend17897, (Optr)&t_block_return);
    Block PBlock17891 = new_Block_with(empty_Array, empty_Array, PThreadedCode17892, 1, PSend17897);
    Symbol SMB_right = new_Symbol(L"right");
    // right. 
    Send PSend17902 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_right, 0);
    Array PThreadedCode17901 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17902, (Optr)&t_block_return);
    Block PBlock17900 = new_Block_with(empty_Array, empty_Array, PThreadedCode17901, 1, PSend17902);
    // timesRepeat:. 
    Send PSend17903 = new_Send((Optr)VAR_distance_0_0, SMB_timesRepeat_, 1, (Optr)PBlock17900);
    Array PThreadedCode17899 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_closure, (Optr)PBlock17900, (Optr)&t_send1, (Optr)PSend17903, (Optr)&t_block_return);
    Block PBlock17898 = new_Block_with(empty_Array, empty_Array, PThreadedCode17899, 1, PSend17903);
    // ifTrue:ifFalse:. 
    Send PSend17890 = new_Send((Optr)PSend17889, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock17891, (Optr)PBlock17898);
    Array PThreadedCode17888 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17889, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend17890, (Optr)PBlock17891, (Optr)PBlock17898, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17886 = new_Method_with(PArray17887, empty_Array, empty_Array, PThreadedCode17888, 2, PSend17890, self);
    
    MethodClosure MC_SMB_right_ = new_MethodClosure((Method)PMethod17886, Shell_ReadLine_ReadLine_Class);
=======
    Send PSend17855 = new_Send((Optr)VAR_distance_0_0, SMB__lt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17859 = new_Send((Optr)int_0_Const, SMB__minus_, 1, (Optr)VAR_distance_0_0);
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend17862 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode17861 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17862, (Optr)&t_block_return);
    Block PBlock17860 = new_Block_with(empty_Array, empty_Array, PThreadedCode17861, 1, PSend17862);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17863 = new_Send((Optr)PSend17859, SMB_timesRepeat_, 1, (Optr)PBlock17860);
    Array PThreadedCode17858 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_0, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_send1, (Optr)PSend17859, (Optr)&t_push_closure, (Optr)PBlock17860, (Optr)&t_send1, (Optr)PSend17863, (Optr)&t_block_return);
    Block PBlock17857 = new_Block_with(empty_Array, empty_Array, PThreadedCode17858, 1, PSend17863);
    Symbol SMB_right = new_Symbol(L"right");
    // right. 
    Send PSend17868 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_right, 0);
    Array PThreadedCode17867 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17868, (Optr)&t_block_return);
    Block PBlock17866 = new_Block_with(empty_Array, empty_Array, PThreadedCode17867, 1, PSend17868);
    // timesRepeat:. 
    Send PSend17869 = new_Send((Optr)VAR_distance_0_0, SMB_timesRepeat_, 1, (Optr)PBlock17866);
    Array PThreadedCode17865 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_closure, (Optr)PBlock17866, (Optr)&t_send1, (Optr)PSend17869, (Optr)&t_block_return);
    Block PBlock17864 = new_Block_with(empty_Array, empty_Array, PThreadedCode17865, 1, PSend17869);
    // ifTrue:ifFalse:. 
    Send PSend17856 = new_Send((Optr)PSend17855, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock17857, (Optr)PBlock17864);
    Array PThreadedCode17854 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17855, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend17856, (Optr)PBlock17857, (Optr)PBlock17864, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17852 = new_Method_with(PArray17853, empty_Array, empty_Array, PThreadedCode17854, 2, PSend17856, self);
    
    MethodClosure MC_SMB_right_ = new_MethodClosure((Method)PMethod17852, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_right_, MC_SMB_right_);
}


static void init_SMB_f4() {
    Symbol SMB_f4 = new_Symbol(L"f4");
<<<<<<< HEAD
    Array PThreadedCode17905 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17904 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17905, 1, self);
    
    MethodClosure MC_SMB_f4 = new_MethodClosure((Method)PMethod17904, Shell_ReadLine_ReadLine_Class);
=======
    Array PThreadedCode17871 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17870 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17871, 1, self);
    
    MethodClosure MC_SMB_f4 = new_MethodClosure((Method)PMethod17870, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f4, MC_SMB_f4);
}


static void init_SMB_endOfTransmission() {
    Symbol SMB_endOfTransmission = new_Symbol(L"endOfTransmission");
<<<<<<< HEAD
    Array PThreadedCode17907 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17906 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17907, 1, self);
    
    MethodClosure MC_SMB_endOfTransmission = new_MethodClosure((Method)PMethod17906, Shell_ReadLine_ReadLine_Class);
=======
    Array PThreadedCode17873 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17872 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17873, 1, self);
    
    MethodClosure MC_SMB_endOfTransmission = new_MethodClosure((Method)PMethod17872, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_endOfTransmission, MC_SMB_endOfTransmission);
}


static void init_SMB_up_() {
    Symbol SMB_up_ = new_Symbol(L"up:");
    Variable VAR_distance_0_0 = new_Variable_named(L"distance", 0);
<<<<<<< HEAD
    Array PArray17909 = new_Array_with(1, (Optr)VAR_distance_0_0);
=======
    Array PArray17875 = new_Array_with(1, (Optr)VAR_distance_0_0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // <. 
<<<<<<< HEAD
    Send PSend17911 = new_Send((Optr)VAR_distance_0_0, SMB__lt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17915 = new_Send((Optr)int_0_Const, SMB__minus_, 1, (Optr)VAR_distance_0_0);
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend17918 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    Array PThreadedCode17917 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17918, (Optr)&t_block_return);
    Block PBlock17916 = new_Block_with(empty_Array, empty_Array, PThreadedCode17917, 1, PSend17918);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17919 = new_Send((Optr)PSend17915, SMB_timesRepeat_, 1, (Optr)PBlock17916);
    Array PThreadedCode17914 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_0, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_send1, (Optr)PSend17915, (Optr)&t_push_closure, (Optr)PBlock17916, (Optr)&t_send1, (Optr)PSend17919, (Optr)&t_block_return);
    Block PBlock17913 = new_Block_with(empty_Array, empty_Array, PThreadedCode17914, 1, PSend17919);
    Symbol SMB_up = new_Symbol(L"up");
    // up. 
    Send PSend17924 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_up, 0);
    Array PThreadedCode17923 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17924, (Optr)&t_block_return);
    Block PBlock17922 = new_Block_with(empty_Array, empty_Array, PThreadedCode17923, 1, PSend17924);
    // timesRepeat:. 
    Send PSend17925 = new_Send((Optr)VAR_distance_0_0, SMB_timesRepeat_, 1, (Optr)PBlock17922);
    Array PThreadedCode17921 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_closure, (Optr)PBlock17922, (Optr)&t_send1, (Optr)PSend17925, (Optr)&t_block_return);
    Block PBlock17920 = new_Block_with(empty_Array, empty_Array, PThreadedCode17921, 1, PSend17925);
    // ifTrue:ifFalse:. 
    Send PSend17912 = new_Send((Optr)PSend17911, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock17913, (Optr)PBlock17920);
    Array PThreadedCode17910 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17911, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend17912, (Optr)PBlock17913, (Optr)PBlock17920, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17908 = new_Method_with(PArray17909, empty_Array, empty_Array, PThreadedCode17910, 2, PSend17912, self);
    
    MethodClosure MC_SMB_up_ = new_MethodClosure((Method)PMethod17908, Shell_ReadLine_ReadLine_Class);
=======
    Send PSend17877 = new_Send((Optr)VAR_distance_0_0, SMB__lt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17881 = new_Send((Optr)int_0_Const, SMB__minus_, 1, (Optr)VAR_distance_0_0);
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend17884 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    Array PThreadedCode17883 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17884, (Optr)&t_block_return);
    Block PBlock17882 = new_Block_with(empty_Array, empty_Array, PThreadedCode17883, 1, PSend17884);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17885 = new_Send((Optr)PSend17881, SMB_timesRepeat_, 1, (Optr)PBlock17882);
    Array PThreadedCode17880 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_0, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_send1, (Optr)PSend17881, (Optr)&t_push_closure, (Optr)PBlock17882, (Optr)&t_send1, (Optr)PSend17885, (Optr)&t_block_return);
    Block PBlock17879 = new_Block_with(empty_Array, empty_Array, PThreadedCode17880, 1, PSend17885);
    Symbol SMB_up = new_Symbol(L"up");
    // up. 
    Send PSend17890 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_up, 0);
    Array PThreadedCode17889 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17890, (Optr)&t_block_return);
    Block PBlock17888 = new_Block_with(empty_Array, empty_Array, PThreadedCode17889, 1, PSend17890);
    // timesRepeat:. 
    Send PSend17891 = new_Send((Optr)VAR_distance_0_0, SMB_timesRepeat_, 1, (Optr)PBlock17888);
    Array PThreadedCode17887 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_closure, (Optr)PBlock17888, (Optr)&t_send1, (Optr)PSend17891, (Optr)&t_block_return);
    Block PBlock17886 = new_Block_with(empty_Array, empty_Array, PThreadedCode17887, 1, PSend17891);
    // ifTrue:ifFalse:. 
    Send PSend17878 = new_Send((Optr)PSend17877, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock17879, (Optr)PBlock17886);
    Array PThreadedCode17876 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17877, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend17878, (Optr)PBlock17879, (Optr)PBlock17886, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17874 = new_Method_with(PArray17875, empty_Array, empty_Array, PThreadedCode17876, 2, PSend17878, self);
    
    MethodClosure MC_SMB_up_ = new_MethodClosure((Method)PMethod17874, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_up_, MC_SMB_up_);
}


static void init_SMB_here() {
    Symbol SMB_here = new_Symbol(L"here");
<<<<<<< HEAD
    Array PThreadedCode17927 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17926 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17927, 1, self);
    
    MethodClosure MC_SMB_here = new_MethodClosure((Method)PMethod17926, Shell_ReadLine_ReadLine_Class);
=======
    Array PThreadedCode17893 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17892 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17893, 1, self);
    
    MethodClosure MC_SMB_here = new_MethodClosure((Method)PMethod17892, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_here, MC_SMB_here);
}


static void init_SMB_home() {
    Symbol SMB_home = new_Symbol(L"home");
    Symbol SMB_startOfHeading = new_Symbol(L"startOfHeading");
    // startOfHeading. 
<<<<<<< HEAD
    Send PSend17930 = new_Send((Optr)self, SMB_startOfHeading, 0);
    Array PThreadedCode17929 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17930, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17928 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17929, 2, PSend17930, self);
    
    MethodClosure MC_SMB_home = new_MethodClosure((Method)PMethod17928, Shell_ReadLine_ReadLine_Class);
=======
    Send PSend17896 = new_Send((Optr)self, SMB_startOfHeading, 0);
    Array PThreadedCode17895 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17896, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17894 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17895, 2, PSend17896, self);
    
    MethodClosure MC_SMB_home = new_MethodClosure((Method)PMethod17894, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_home, MC_SMB_home);
}


static void init_SMB_f13() {
    Symbol SMB_f13 = new_Symbol(L"f13");
<<<<<<< HEAD
    Array PThreadedCode17932 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17931 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17932, 1, self);
    
    MethodClosure MC_SMB_f13 = new_MethodClosure((Method)PMethod17931, Shell_ReadLine_ReadLine_Class);
=======
    Array PThreadedCode17898 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17897 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17898, 1, self);
    
    MethodClosure MC_SMB_f13 = new_MethodClosure((Method)PMethod17897, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f13, MC_SMB_f13);
}


static void init_SMB_f2() {
    Symbol SMB_f2 = new_Symbol(L"f2");
<<<<<<< HEAD
    Array PThreadedCode17934 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17933 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17934, 1, self);
    
    MethodClosure MC_SMB_f2 = new_MethodClosure((Method)PMethod17933, Shell_ReadLine_ReadLine_Class);
=======
    Array PThreadedCode17900 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17899 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17900, 1, self);
    
    MethodClosure MC_SMB_f2 = new_MethodClosure((Method)PMethod17899, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f2, MC_SMB_f2);
}


static void init_SMB_nextScreen() {
    Symbol SMB_nextScreen = new_Symbol(L"nextScreen");
    Symbol SMB_endOfText = new_Symbol(L"endOfText");
    // endOfText. 
<<<<<<< HEAD
    Send PSend17937 = new_Send((Optr)self, SMB_endOfText, 0);
    Array PThreadedCode17936 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17937, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17935 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17936, 2, PSend17937, self);
    
    MethodClosure MC_SMB_nextScreen = new_MethodClosure((Method)PMethod17935, Shell_ReadLine_ReadLine_Class);
=======
    Send PSend17903 = new_Send((Optr)self, SMB_endOfText, 0);
    Array PThreadedCode17902 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17903, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17901 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17902, 2, PSend17903, self);
    
    MethodClosure MC_SMB_nextScreen = new_MethodClosure((Method)PMethod17901, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_nextScreen, MC_SMB_nextScreen);
}


static void init_SMB_f3() {
    Symbol SMB_f3 = new_Symbol(L"f3");
<<<<<<< HEAD
    Array PThreadedCode17939 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17938 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17939, 1, self);
    
    MethodClosure MC_SMB_f3 = new_MethodClosure((Method)PMethod17938, Shell_ReadLine_ReadLine_Class);
=======
    Array PThreadedCode17905 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17904 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17905, 1, self);
    
    MethodClosure MC_SMB_f3 = new_MethodClosure((Method)PMethod17904, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f3, MC_SMB_f3);
}


static void init_SMB_deleteToEndOfLine() {
    Symbol SMB_deleteToEndOfLine = new_Symbol(L"deleteToEndOfLine");
    // deleteToEndOfLine. 
    Send PSend17908 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_deleteToEndOfLine, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_clearToEnd = new_Symbol(L"clearToEnd");
    // clearToEnd. 
    Send PSend17912 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_clearToEnd, 0);
    Array PThreadedCode17911 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17912, (Optr)&t_block_return);
    Block PBlock17910 = new_Block_with(empty_Array, empty_Array, PThreadedCode17911, 1, PSend17912);
    // ifTrue:. 
    Send PSend17909 = new_Send((Optr)PSend17908, SMB_ifTrue_, 1, (Optr)PBlock17910);
    Array PThreadedCode17907 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17908, (Optr)&t_send_ifTrue_, (Optr)PSend17909, (Optr)PBlock17910, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17906 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17907, 2, PSend17909, self);
    
    MethodClosure MC_SMB_deleteToEndOfLine = new_MethodClosure((Method)PMethod17906, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_deleteToEndOfLine, MC_SMB_deleteToEndOfLine);
}


static void init_SMB_f10() {
    Symbol SMB_f10 = new_Symbol(L"f10");
<<<<<<< HEAD
    Array PThreadedCode17941 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17940 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17941, 1, self);
    
    MethodClosure MC_SMB_f10 = new_MethodClosure((Method)PMethod17940, Shell_ReadLine_ReadLine_Class);
=======
    Array PThreadedCode17914 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17913 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17914, 1, self);
    
    MethodClosure MC_SMB_f10 = new_MethodClosure((Method)PMethod17913, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f10, MC_SMB_f10);
}


static void init_SMB_end() {
    Symbol SMB_end = new_Symbol(L"end");
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    // endOfLine. 
<<<<<<< HEAD
    Send PSend17944 = new_Send((Optr)self, SMB_endOfLine, 0);
    Array PThreadedCode17943 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17944, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17942 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17943, 2, PSend17944, self);
    
    MethodClosure MC_SMB_end = new_MethodClosure((Method)PMethod17942, Shell_ReadLine_ReadLine_Class);
=======
    Send PSend17917 = new_Send((Optr)self, SMB_endOfLine, 0);
    Array PThreadedCode17916 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17917, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17915 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17916, 2, PSend17917, self);
    
    MethodClosure MC_SMB_end = new_MethodClosure((Method)PMethod17915, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_end, MC_SMB_end);
}


static void init_SMB_down() {
    Symbol SMB_down = new_Symbol(L"down");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
<<<<<<< HEAD
    Array PArray17946 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17949 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17948 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend17949);
    // down. 
    Send PSend17950 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_down, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_column_ = new_Symbol(L"column:");
    // column:. 
    Send PSend17954 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column_, 1, (Optr)VAR_col_0_0);
    // down. 
    Send PSend17955 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    // column. 
    Send PSend17956 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17957 = new_Send((Optr)VAR_col_0_0, SMB__minus_, 1, (Optr)PSend17956);
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend17960 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode17959 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17960, (Optr)&t_block_return);
    Block PBlock17958 = new_Block_with(empty_Array, empty_Array, PThreadedCode17959, 1, PSend17960);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17961 = new_Send((Optr)PSend17957, SMB_timesRepeat_, 1, (Optr)PBlock17958);
    Array PThreadedCode17953 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend17954, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17955, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17956, (Optr)&t_send1, (Optr)PSend17957, (Optr)&t_push_closure, (Optr)PBlock17958, (Optr)&t_send1, (Optr)PSend17961, (Optr)&t_block_return);
    Block PBlock17952 = new_Block_with(empty_Array, empty_Array, PThreadedCode17953, 3, PSend17954, PSend17955, PSend17961);
    // ifTrue:. 
    Send PSend17951 = new_Send((Optr)PSend17950, SMB_ifTrue_, 1, (Optr)PBlock17952);
    Array PThreadedCode17947 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign17948, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17949, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17950, (Optr)&t_send_ifTrue_, (Optr)PSend17951, (Optr)PBlock17952, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17945 = new_Method_with(empty_Array, PArray17946, empty_Array, PThreadedCode17947, 3, PAssign17948, PSend17951, self);
    
    MethodClosure MC_SMB_down = new_MethodClosure((Method)PMethod17945, Shell_ReadLine_ReadLine_Class);
=======
    Array PArray17919 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17922 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17921 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend17922);
    // down. 
    Send PSend17923 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_down, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_column_ = new_Symbol(L"column:");
    // column:. 
    Send PSend17927 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column_, 1, (Optr)VAR_col_0_0);
    // down. 
    Send PSend17928 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    // column. 
    Send PSend17929 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17930 = new_Send((Optr)VAR_col_0_0, SMB__minus_, 1, (Optr)PSend17929);
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend17933 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode17932 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17933, (Optr)&t_block_return);
    Block PBlock17931 = new_Block_with(empty_Array, empty_Array, PThreadedCode17932, 1, PSend17933);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17934 = new_Send((Optr)PSend17930, SMB_timesRepeat_, 1, (Optr)PBlock17931);
    Array PThreadedCode17926 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend17927, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17928, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17929, (Optr)&t_send1, (Optr)PSend17930, (Optr)&t_push_closure, (Optr)PBlock17931, (Optr)&t_send1, (Optr)PSend17934, (Optr)&t_block_return);
    Block PBlock17925 = new_Block_with(empty_Array, empty_Array, PThreadedCode17926, 3, PSend17927, PSend17928, PSend17934);
    // ifTrue:. 
    Send PSend17924 = new_Send((Optr)PSend17923, SMB_ifTrue_, 1, (Optr)PBlock17925);
    Array PThreadedCode17920 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign17921, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17922, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17923, (Optr)&t_send_ifTrue_, (Optr)PSend17924, (Optr)PBlock17925, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17918 = new_Method_with(empty_Array, PArray17919, empty_Array, PThreadedCode17920, 3, PAssign17921, PSend17924, self);
    
    MethodClosure MC_SMB_down = new_MethodClosure((Method)PMethod17918, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_down, MC_SMB_down);
}


static void init_SMB_remove() {
    Symbol SMB_remove = new_Symbol(L"remove");
    Symbol SMB_backspace = new_Symbol(L"backspace");
    // backspace. 
<<<<<<< HEAD
    Send PSend17964 = new_Send((Optr)self, SMB_backspace, 0);
    Array PThreadedCode17963 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17964, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17962 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17963, 2, PSend17964, self);
    
    MethodClosure MC_SMB_remove = new_MethodClosure((Method)PMethod17962, Shell_ReadLine_ReadLine_Class);
=======
    Send PSend17937 = new_Send((Optr)self, SMB_backspace, 0);
    Array PThreadedCode17936 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17937, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17935 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17936, 2, PSend17937, self);
    
    MethodClosure MC_SMB_remove = new_MethodClosure((Method)PMethod17935, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_remove, MC_SMB_remove);
}


static void init_SMB_bell() {
    Symbol SMB_bell = new_Symbol(L"bell");
<<<<<<< HEAD
    Array PThreadedCode17966 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17965 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17966, 1, self);
    
    MethodClosure MC_SMB_bell = new_MethodClosure((Method)PMethod17965, Shell_ReadLine_ReadLine_Class);
=======
    Array PThreadedCode17939 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17938 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17939, 1, self);
    
    MethodClosure MC_SMB_bell = new_MethodClosure((Method)PMethod17938, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_bell, MC_SMB_bell);
}


static void init_SMB_delete() {
    Symbol SMB_delete = new_Symbol(L"delete");
    Symbol SMB_deleteLeft = new_Symbol(L"deleteLeft");
    // deleteLeft. 
<<<<<<< HEAD
    Send PSend17969 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_deleteLeft, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_backspace = new_Symbol(L"backspace");
    // backspace. 
    Send PSend17973 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_backspace, 0);
=======
    Send PSend17942 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_deleteLeft, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_backspace = new_Symbol(L"backspace");
    // backspace. 
    Send PSend17946 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_backspace, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    SmallInt int_n1 = new_SmallInt(-1);
    Symbol SMB_moveFailure_ = new_Symbol(L"moveFailure:");
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // moveFailure:. 
<<<<<<< HEAD
    Send PSend17974 = new_Send((Optr)self, SMB_moveFailure_, 1, (Optr)int_n1_Const);
    Symbol SMB_repaint = new_Symbol(L"repaint");
    // repaint. 
    Send PSend17975 = new_Send((Optr)self, SMB_repaint, 0);
    Array PThreadedCode17972 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17973, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend17974, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17975, (Optr)&t_block_return);
    Block PBlock17971 = new_Block_with(empty_Array, empty_Array, PThreadedCode17972, 3, PSend17973, PSend17974, PSend17975);
    // ifTrue:. 
    Send PSend17970 = new_Send((Optr)PSend17969, SMB_ifTrue_, 1, (Optr)PBlock17971);
    Array PThreadedCode17968 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17969, (Optr)&t_send_ifTrue_, (Optr)PSend17970, (Optr)PBlock17971, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17967 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17968, 2, PSend17970, self);
    
    MethodClosure MC_SMB_delete = new_MethodClosure((Method)PMethod17967, Shell_ReadLine_ReadLine_Class);
=======
    Send PSend17947 = new_Send((Optr)self, SMB_moveFailure_, 1, (Optr)int_n1_Const);
    Symbol SMB_repaint = new_Symbol(L"repaint");
    // repaint. 
    Send PSend17948 = new_Send((Optr)self, SMB_repaint, 0);
    Array PThreadedCode17945 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17946, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend17947, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17948, (Optr)&t_block_return);
    Block PBlock17944 = new_Block_with(empty_Array, empty_Array, PThreadedCode17945, 3, PSend17946, PSend17947, PSend17948);
    // ifTrue:. 
    Send PSend17943 = new_Send((Optr)PSend17942, SMB_ifTrue_, 1, (Optr)PBlock17944);
    Array PThreadedCode17941 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17942, (Optr)&t_send_ifTrue_, (Optr)PSend17943, (Optr)PBlock17944, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17940 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17941, 2, PSend17943, self);
    
    MethodClosure MC_SMB_delete = new_MethodClosure((Method)PMethod17940, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_delete, MC_SMB_delete);
}


static void init_SMB_shiftIn() {
    Symbol SMB_shiftIn = new_Symbol(L"shiftIn");
<<<<<<< HEAD
    Array PThreadedCode17977 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17976 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17977, 1, self);
    
    MethodClosure MC_SMB_shiftIn = new_MethodClosure((Method)PMethod17976, Shell_ReadLine_ReadLine_Class);
=======
    Array PThreadedCode17950 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17949 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17950, 1, self);
    
    MethodClosure MC_SMB_shiftIn = new_MethodClosure((Method)PMethod17949, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_shiftIn, MC_SMB_shiftIn);
}


static void init_SMB_openLine() {
    Symbol SMB_openLine = new_Symbol(L"openLine");
    Variable VAR_offset_0_0 = new_Variable_named(L"offset", 0);
<<<<<<< HEAD
    Array PArray17979 = new_Array_with(1, (Optr)VAR_offset_0_0);
    Symbol SMB_distanceToBottom = new_Symbol(L"distanceToBottom");
    // distanceToBottom. 
    Send PSend17982 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_distanceToBottom, 0);
    Assign PAssign17981 = new_Assign((Optr)VAR_offset_0_0, (Optr)PSend17982);
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend17985 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    Array PThreadedCode17984 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17985, (Optr)&t_block_return);
    Block PBlock17983 = new_Block_with(empty_Array, empty_Array, PThreadedCode17984, 1, PSend17985);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17986 = new_Send((Optr)VAR_offset_0_0, SMB_timesRepeat_, 1, (Optr)PBlock17983);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17987 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_lf, 0);
    Symbol SMB_up = new_Symbol(L"up");
    // up. 
    Send PSend17990 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_up, 0);
    Array PThreadedCode17989 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17990, (Optr)&t_block_return);
    Block PBlock17988 = new_Block_with(empty_Array, empty_Array, PThreadedCode17989, 1, PSend17990);
    // timesRepeat:. 
    Send PSend17991 = new_Send((Optr)VAR_offset_0_0, SMB_timesRepeat_, 1, (Optr)PBlock17988);
    Symbol SMB_insertLine = new_Symbol(L"insertLine");
    // insertLine. 
    Send PSend17992 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_insertLine, 0);
    Symbol SMB_continueLine = new_Symbol(L"continueLine");
    // continueLine. 
    Send PSend17993 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_client, SMB_continueLine, 0);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend17994 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_addLine, 0);
    Array PThreadedCode17980 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign17981, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17982, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_offset_0_0, (Optr)&t_push_closure, (Optr)PBlock17983, (Optr)&t_send1, (Optr)PSend17986, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17987, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_offset_0_0, (Optr)&t_push_closure, (Optr)PBlock17988, (Optr)&t_send1, (Optr)PSend17991, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17992, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)&t_send0, (Optr)PSend17993, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17994, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17978 = new_Method_with(empty_Array, PArray17979, empty_Array, PThreadedCode17980, 8, PAssign17981, PSend17986, PSend17987, PSend17991, PSend17992, PSend17993, PSend17994, self);
    
    MethodClosure MC_SMB_openLine = new_MethodClosure((Method)PMethod17978, Shell_ReadLine_ReadLine_Class);
=======
    Array PArray17952 = new_Array_with(1, (Optr)VAR_offset_0_0);
    Symbol SMB_distanceToBottom = new_Symbol(L"distanceToBottom");
    // distanceToBottom. 
    Send PSend17955 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_distanceToBottom, 0);
    Assign PAssign17954 = new_Assign((Optr)VAR_offset_0_0, (Optr)PSend17955);
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend17958 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    Array PThreadedCode17957 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17958, (Optr)&t_block_return);
    Block PBlock17956 = new_Block_with(empty_Array, empty_Array, PThreadedCode17957, 1, PSend17958);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17959 = new_Send((Optr)VAR_offset_0_0, SMB_timesRepeat_, 1, (Optr)PBlock17956);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17960 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_lf, 0);
    Symbol SMB_up = new_Symbol(L"up");
    // up. 
    Send PSend17963 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_up, 0);
    Array PThreadedCode17962 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17963, (Optr)&t_block_return);
    Block PBlock17961 = new_Block_with(empty_Array, empty_Array, PThreadedCode17962, 1, PSend17963);
    // timesRepeat:. 
    Send PSend17964 = new_Send((Optr)VAR_offset_0_0, SMB_timesRepeat_, 1, (Optr)PBlock17961);
    Symbol SMB_insertLine = new_Symbol(L"insertLine");
    // insertLine. 
    Send PSend17965 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_insertLine, 0);
    Symbol SMB_continueLine = new_Symbol(L"continueLine");
    // continueLine. 
    Send PSend17966 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_client, SMB_continueLine, 0);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend17967 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_addLine, 0);
    Array PThreadedCode17953 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign17954, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17955, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_offset_0_0, (Optr)&t_push_closure, (Optr)PBlock17956, (Optr)&t_send1, (Optr)PSend17959, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17960, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_offset_0_0, (Optr)&t_push_closure, (Optr)PBlock17961, (Optr)&t_send1, (Optr)PSend17964, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17965, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)&t_send0, (Optr)PSend17966, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17967, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17951 = new_Method_with(empty_Array, PArray17952, empty_Array, PThreadedCode17953, 8, PAssign17954, PSend17959, PSend17960, PSend17964, PSend17965, PSend17966, PSend17967, self);
    
    MethodClosure MC_SMB_openLine = new_MethodClosure((Method)PMethod17951, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_openLine, MC_SMB_openLine);
}


static void init_SMB_moveFailure_() {
    Symbol SMB_moveFailure_ = new_Symbol(L"moveFailure:");
    Variable VAR_direction_0_0 = new_Variable_named(L"direction", 0);
<<<<<<< HEAD
    Array PArray17996 = new_Array_with(1, (Optr)VAR_direction_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend18000 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB__plus_, 1, (Optr)VAR_direction_0_0);
    Symbol SMB_onLineBefore_ = new_Symbol(L"onLineBefore:");
    // onLineBefore:. 
    Send PSend18001 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_onLineBefore_, 1, (Optr)PSend18000);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // +. 
    Send PSend18006 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB__plus_, 1, (Optr)VAR_direction_0_0);
    Assign PAssign18005 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)PSend18006);
    Array PThreadedCode18004 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign18005, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_variable, (Optr)VAR_direction_0_0, (Optr)&t_send1, (Optr)PSend18006, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock18003 = new_Block_with(empty_Array, empty_Array, PThreadedCode18004, 1, PAssign18005);
    // ifTrue:. 
    Send PSend18002 = new_Send((Optr)PSend18001, SMB_ifTrue_, 1, (Optr)PBlock18003);
    Array PThreadedCode17999 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_variable, (Optr)VAR_direction_0_0, (Optr)&t_send1, (Optr)PSend18000, (Optr)&t_send1, (Optr)PSend18001, (Optr)&t_send_ifTrue_, (Optr)PSend18002, (Optr)PBlock18003, (Optr)&t_block_return);
    Block PBlock17998 = new_Block_with(empty_Array, empty_Array, PThreadedCode17999, 1, PSend18002);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend18007 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB_ifNotNil_, 1, (Optr)PBlock17998);
    Array PThreadedCode17997 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_closure, (Optr)PBlock17998, (Optr)&t_send1, (Optr)PSend18007, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17995 = new_Method_with(PArray17996, empty_Array, empty_Array, PThreadedCode17997, 2, PSend18007, self);
    
    MethodClosure MC_SMB_moveFailure_ = new_MethodClosure((Method)PMethod17995, Shell_ReadLine_ReadLine_Class);
=======
    Array PArray17969 = new_Array_with(1, (Optr)VAR_direction_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend17973 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB__plus_, 1, (Optr)VAR_direction_0_0);
    Symbol SMB_onLineBefore_ = new_Symbol(L"onLineBefore:");
    // onLineBefore:. 
    Send PSend17974 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_onLineBefore_, 1, (Optr)PSend17973);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // +. 
    Send PSend17979 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB__plus_, 1, (Optr)VAR_direction_0_0);
    Assign PAssign17978 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)PSend17979);
    Array PThreadedCode17977 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign17978, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_variable, (Optr)VAR_direction_0_0, (Optr)&t_send1, (Optr)PSend17979, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock17976 = new_Block_with(empty_Array, empty_Array, PThreadedCode17977, 1, PAssign17978);
    // ifTrue:. 
    Send PSend17975 = new_Send((Optr)PSend17974, SMB_ifTrue_, 1, (Optr)PBlock17976);
    Array PThreadedCode17972 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_variable, (Optr)VAR_direction_0_0, (Optr)&t_send1, (Optr)PSend17973, (Optr)&t_send1, (Optr)PSend17974, (Optr)&t_send_ifTrue_, (Optr)PSend17975, (Optr)PBlock17976, (Optr)&t_block_return);
    Block PBlock17971 = new_Block_with(empty_Array, empty_Array, PThreadedCode17972, 1, PSend17975);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend17980 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB_ifNotNil_, 1, (Optr)PBlock17971);
    Array PThreadedCode17970 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_closure, (Optr)PBlock17971, (Optr)&t_send1, (Optr)PSend17980, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17968 = new_Method_with(PArray17969, empty_Array, empty_Array, PThreadedCode17970, 2, PSend17980, self);
    
    MethodClosure MC_SMB_moveFailure_ = new_MethodClosure((Method)PMethod17968, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_moveFailure_, MC_SMB_moveFailure_);
}


static void init_SMB_f14() {
    Symbol SMB_f14 = new_Symbol(L"f14");
<<<<<<< HEAD
    Array PThreadedCode18009 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18008 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18009, 1, self);
    
    MethodClosure MC_SMB_f14 = new_MethodClosure((Method)PMethod18008, Shell_ReadLine_ReadLine_Class);
=======
    Array PThreadedCode17982 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17981 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17982, 1, self);
    
    MethodClosure MC_SMB_f14 = new_MethodClosure((Method)PMethod17981, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f14, MC_SMB_f14);
}


static void init_SMB_f17() {
    Symbol SMB_f17 = new_Symbol(L"f17");
<<<<<<< HEAD
    Array PThreadedCode18011 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18010 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18011, 1, self);
    
    MethodClosure MC_SMB_f17 = new_MethodClosure((Method)PMethod18010, Shell_ReadLine_ReadLine_Class);
=======
    Array PThreadedCode17984 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17983 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17984, 1, self);
    
    MethodClosure MC_SMB_f17 = new_MethodClosure((Method)PMethod17983, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f17, MC_SMB_f17);
}


static void init_SMB_from_to_for_() {
    /*
    from: input to: output for: client
// 	^ super basicNew
// 		from: input
// 		to: output
// 		for: client
    */
    Symbol SMB_from_to_for_ = new_Symbol(L"from:to:for:");
    Variable VAR_in_0_0 = new_Variable_named(L"in", 0);
    Variable VAR_out_0_1 = new_Variable_named(L"out", 0);
    Variable VAR_c_0_2 = new_Variable_named(L"c", 0);
<<<<<<< HEAD
    Array PArray18013 = new_Array_with(3, (Optr)VAR_in_0_0, (Optr)VAR_out_0_1, (Optr)VAR_c_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18016 = new_Send((Optr)PHistoryText_classReference, SMB_new, 0);
    Assign PAssign18015 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)PSend18016);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray18020 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_input_ = new_Symbol(L"input:");
    // input:. 
    Send PSend18022 = new_Send((Optr)VAR__receiver__1_0, SMB_input_, 1, (Optr)VAR_in_0_0);
    Symbol SMB_handler_ = new_Symbol(L"handler:");
    // handler:. 
    Send PSend18023 = new_Send((Optr)VAR__receiver__1_0, SMB_handler_, 1, (Optr)self);
    Array PThreadedCode18021 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_in_0_0, (Optr)&t_send1, (Optr)PSend18022, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18023, (Optr)&t_method_return);
    Block PBlock18019 = new_Block_with(PArray18020, empty_Array, PThreadedCode18021, 2, PSend18022, PSend18023);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // new. 
    Send PSend18024 = new_Send((Optr)PVTermInputDriver_classReference, SMB_new, 0);
    // value:. 
    Send PSend18018 = new_Send((Optr)PBlock18019, SMB_value_, 1, (Optr)PSend18024);
    Assign PAssign18017 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_vterm, (Optr)PSend18018);
    Assign PAssign18025 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)VAR_out_0_1);
    Assign PAssign18026 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)VAR_c_0_2);
    Array PThreadedCode18014 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign18015, (Optr)&t_push_class_reference, (Optr)PHistoryText_classReference, (Optr)&t_send0, (Optr)PSend18016, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18017, (Optr)&t_push_closure, (Optr)PBlock18019, (Optr)&t_push_class_reference, (Optr)PVTermInputDriver_classReference, (Optr)&t_send0, (Optr)PSend18024, (Optr)&t_send1, (Optr)PSend18018, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18025, (Optr)&t_push_variable, (Optr)VAR_out_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18026, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18012 = new_Method_with(PArray18013, empty_Array, empty_Array, PThreadedCode18014, 5, PAssign18015, PAssign18017, PAssign18025, PAssign18026, self);
    
    MethodClosure MC_SMB_from_to_for_ = new_MethodClosure((Method)PMethod18012, Shell_ReadLine_ReadLine_Class);
=======
    Array PArray17986 = new_Array_with(3, (Optr)VAR_in_0_0, (Optr)VAR_out_0_1, (Optr)VAR_c_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17989 = new_Send((Optr)PHistoryText_classReference, SMB_new, 0);
    Assign PAssign17988 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)PSend17989);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray17993 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_input_ = new_Symbol(L"input:");
    // input:. 
    Send PSend17995 = new_Send((Optr)VAR__receiver__1_0, SMB_input_, 1, (Optr)VAR_in_0_0);
    Symbol SMB_handler_ = new_Symbol(L"handler:");
    // handler:. 
    Send PSend17996 = new_Send((Optr)VAR__receiver__1_0, SMB_handler_, 1, (Optr)self);
    Array PThreadedCode17994 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_in_0_0, (Optr)&t_send1, (Optr)PSend17995, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend17996, (Optr)&t_method_return);
    Block PBlock17992 = new_Block_with(PArray17993, empty_Array, PThreadedCode17994, 2, PSend17995, PSend17996);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // new. 
    Send PSend17997 = new_Send((Optr)PVTermInputDriver_classReference, SMB_new, 0);
    // value:. 
    Send PSend17991 = new_Send((Optr)PBlock17992, SMB_value_, 1, (Optr)PSend17997);
    Assign PAssign17990 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_vterm, (Optr)PSend17991);
    Assign PAssign17998 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)VAR_out_0_1);
    Assign PAssign17999 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)VAR_c_0_2);
    Array PThreadedCode17987 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign17988, (Optr)&t_push_class_reference, (Optr)PHistoryText_classReference, (Optr)&t_send0, (Optr)PSend17989, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17990, (Optr)&t_push_closure, (Optr)PBlock17992, (Optr)&t_push_class_reference, (Optr)PVTermInputDriver_classReference, (Optr)&t_send0, (Optr)PSend17997, (Optr)&t_send1, (Optr)PSend17991, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17998, (Optr)&t_push_variable, (Optr)VAR_out_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17999, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17985 = new_Method_with(PArray17986, empty_Array, empty_Array, PThreadedCode17987, 5, PAssign17988, PAssign17990, PAssign17998, PAssign17999, self);
    
    MethodClosure MC_SMB_from_to_for_ = new_MethodClosure((Method)PMethod17985, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_from_to_for_, MC_SMB_from_to_for_);
}


static void init_SMB_f12() {
    Symbol SMB_f12 = new_Symbol(L"f12");
<<<<<<< HEAD
    Array PThreadedCode18028 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18027 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18028, 1, self);
    
    MethodClosure MC_SMB_f12 = new_MethodClosure((Method)PMethod18027, Shell_ReadLine_ReadLine_Class);
=======
    Array PThreadedCode18001 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18000 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18001, 1, self);
    
    MethodClosure MC_SMB_f12 = new_MethodClosure((Method)PMethod18000, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f12, MC_SMB_f12);
}


static void init_SMB_write_() {
    Symbol SMB_write_ = new_Symbol(L"write:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
<<<<<<< HEAD
    Array PArray18030 = new_Array_with(1, (Optr)VAR_character_0_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend18032 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_add_, 1, (Optr)VAR_character_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend18033 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB__shiftLeft_, 1, (Optr)VAR_character_0_0);
=======
    Array PArray18003 = new_Array_with(1, (Optr)VAR_character_0_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend18005 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_add_, 1, (Optr)VAR_character_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend18006 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB__shiftLeft_, 1, (Optr)VAR_character_0_0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_moveFailure_ = new_Symbol(L"moveFailure:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // moveFailure:. 
<<<<<<< HEAD
    Send PSend18034 = new_Send((Optr)self, SMB_moveFailure_, 1, (Optr)int_1_Const);
    Symbol SMB_repaint = new_Symbol(L"repaint");
    // repaint. 
    Send PSend18035 = new_Send((Optr)self, SMB_repaint, 0);
    Array PThreadedCode18031 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend18032, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend18033, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18034, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18035, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18029 = new_Method_with(PArray18030, empty_Array, empty_Array, PThreadedCode18031, 5, PSend18032, PSend18033, PSend18034, PSend18035, self);
    
    MethodClosure MC_SMB_write_ = new_MethodClosure((Method)PMethod18029, Shell_ReadLine_ReadLine_Class);
=======
    Send PSend18007 = new_Send((Optr)self, SMB_moveFailure_, 1, (Optr)int_1_Const);
    Symbol SMB_repaint = new_Symbol(L"repaint");
    // repaint. 
    Send PSend18008 = new_Send((Optr)self, SMB_repaint, 0);
    Array PThreadedCode18004 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend18005, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend18006, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18007, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18008, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18002 = new_Method_with(PArray18003, empty_Array, empty_Array, PThreadedCode18004, 5, PSend18005, PSend18006, PSend18007, PSend18008, self);
    
    MethodClosure MC_SMB_write_ = new_MethodClosure((Method)PMethod18002, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_write_, MC_SMB_write_);
}


static void init_SMB_f18() {
    Symbol SMB_f18 = new_Symbol(L"f18");
<<<<<<< HEAD
    Array PThreadedCode18037 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18036 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18037, 1, self);
    
    MethodClosure MC_SMB_f18 = new_MethodClosure((Method)PMethod18036, Shell_ReadLine_ReadLine_Class);
=======
    Array PThreadedCode18010 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18009 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18010, 1, self);
    
    MethodClosure MC_SMB_f18 = new_MethodClosure((Method)PMethod18009, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f18, MC_SMB_f18);
}


static void init_SMB_f5() {
    Symbol SMB_f5 = new_Symbol(L"f5");
<<<<<<< HEAD
    Array PThreadedCode18039 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18038 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18039, 1, self);
    
    MethodClosure MC_SMB_f5 = new_MethodClosure((Method)PMethod18038, Shell_ReadLine_ReadLine_Class);
=======
    Array PThreadedCode18012 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18011 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18012, 1, self);
    
    MethodClosure MC_SMB_f5 = new_MethodClosure((Method)PMethod18011, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f5, MC_SMB_f5);
}


static void init_SMB_left() {
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
<<<<<<< HEAD
    Send PSend18042 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_left, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // left. 
    Send PSend18046 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode18045 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18046, (Optr)&t_block_return);
    Block PBlock18044 = new_Block_with(empty_Array, empty_Array, PThreadedCode18045, 1, PSend18046);
    // ifTrue:. 
    Send PSend18043 = new_Send((Optr)PSend18042, SMB_ifTrue_, 1, (Optr)PBlock18044);
    Array PThreadedCode18041 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18042, (Optr)&t_send_ifTrue_, (Optr)PSend18043, (Optr)PBlock18044, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18040 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18041, 2, PSend18043, self);
    
    MethodClosure MC_SMB_left = new_MethodClosure((Method)PMethod18040, Shell_ReadLine_ReadLine_Class);
=======
    Send PSend18015 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_left, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // left. 
    Send PSend18019 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode18018 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18019, (Optr)&t_block_return);
    Block PBlock18017 = new_Block_with(empty_Array, empty_Array, PThreadedCode18018, 1, PSend18019);
    // ifTrue:. 
    Send PSend18016 = new_Send((Optr)PSend18015, SMB_ifTrue_, 1, (Optr)PBlock18017);
    Array PThreadedCode18014 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18015, (Optr)&t_send_ifTrue_, (Optr)PSend18016, (Optr)PBlock18017, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18013 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18014, 2, PSend18016, self);
    
    MethodClosure MC_SMB_left = new_MethodClosure((Method)PMethod18013, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_left, MC_SMB_left);
}


static void init_SMB_carriageReturn() {
    Symbol SMB_carriageReturn = new_Symbol(L"carriageReturn");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
<<<<<<< HEAD
    Send PSend18049 = new_Send((Optr)self, SMB_lf, 0);
    Array PThreadedCode18048 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18049, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18047 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18048, 2, PSend18049, self);
    
    MethodClosure MC_SMB_carriageReturn = new_MethodClosure((Method)PMethod18047, Shell_ReadLine_ReadLine_Class);
=======
    Send PSend18022 = new_Send((Optr)self, SMB_lf, 0);
    Array PThreadedCode18021 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18022, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18020 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18021, 2, PSend18022, self);
    
    MethodClosure MC_SMB_carriageReturn = new_MethodClosure((Method)PMethod18020, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_carriageReturn, MC_SMB_carriageReturn);
}


static void init_SMB_moveToLine_column_() {
    Symbol SMB_moveToLine_column_ = new_Symbol(L"moveToLine:column:");
    Variable VAR_line_0_0 = new_Variable_named(L"line", 0);
    Variable VAR_col_0_1 = new_Variable_named(L"col", 0);
<<<<<<< HEAD
    Array PArray18051 = new_Array_with(2, (Optr)VAR_line_0_0, (Optr)VAR_col_0_1);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend18053 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend18054 = new_Send((Optr)VAR_col_0_1, SMB__minus_, 1, (Optr)PSend18053);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend18055 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend18054);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend18056 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    // -. 
    Send PSend18057 = new_Send((Optr)PSend18056, SMB__minus_, 1, (Optr)VAR_line_0_0);
    Symbol SMB_up_ = new_Symbol(L"up:");
    // up:. 
    Send PSend18058 = new_Send((Optr)self, SMB_up_, 1, (Optr)PSend18057);
    Symbol SMB_line_ = new_Symbol(L"line:");
    // line:. 
    Send PSend18059 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line_, 1, (Optr)VAR_line_0_0);
    Symbol SMB_column_ = new_Symbol(L"column:");
    // column:. 
    Send PSend18060 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column_, 1, (Optr)VAR_col_0_1);
    Array PThreadedCode18052 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_col_0_1, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18053, (Optr)&t_send1, (Optr)PSend18054, (Optr)&t_send1, (Optr)PSend18055, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18056, (Optr)&t_push_variable, (Optr)VAR_line_0_0, (Optr)&t_send1, (Optr)PSend18057, (Optr)&t_send1, (Optr)PSend18058, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_line_0_0, (Optr)&t_send1, (Optr)PSend18059, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_col_0_1, (Optr)&t_send1, (Optr)PSend18060, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18050 = new_Method_with(PArray18051, empty_Array, empty_Array, PThreadedCode18052, 5, PSend18055, PSend18058, PSend18059, PSend18060, self);
    
    MethodClosure MC_SMB_moveToLine_column_ = new_MethodClosure((Method)PMethod18050, Shell_ReadLine_ReadLine_Class);
=======
    Array PArray18024 = new_Array_with(2, (Optr)VAR_line_0_0, (Optr)VAR_col_0_1);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend18026 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend18027 = new_Send((Optr)VAR_col_0_1, SMB__minus_, 1, (Optr)PSend18026);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend18028 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend18027);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend18029 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    // -. 
    Send PSend18030 = new_Send((Optr)PSend18029, SMB__minus_, 1, (Optr)VAR_line_0_0);
    Symbol SMB_up_ = new_Symbol(L"up:");
    // up:. 
    Send PSend18031 = new_Send((Optr)self, SMB_up_, 1, (Optr)PSend18030);
    Symbol SMB_line_ = new_Symbol(L"line:");
    // line:. 
    Send PSend18032 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line_, 1, (Optr)VAR_line_0_0);
    Symbol SMB_column_ = new_Symbol(L"column:");
    // column:. 
    Send PSend18033 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column_, 1, (Optr)VAR_col_0_1);
    Array PThreadedCode18025 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_col_0_1, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18026, (Optr)&t_send1, (Optr)PSend18027, (Optr)&t_send1, (Optr)PSend18028, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18029, (Optr)&t_push_variable, (Optr)VAR_line_0_0, (Optr)&t_send1, (Optr)PSend18030, (Optr)&t_send1, (Optr)PSend18031, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_line_0_0, (Optr)&t_send1, (Optr)PSend18032, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_col_0_1, (Optr)&t_send1, (Optr)PSend18033, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18023 = new_Method_with(PArray18024, empty_Array, empty_Array, PThreadedCode18025, 5, PSend18028, PSend18031, PSend18032, PSend18033, self);
    
    MethodClosure MC_SMB_moveToLine_column_ = new_MethodClosure((Method)PMethod18023, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_moveToLine_column_, MC_SMB_moveToLine_column_);
}


static void init_SMB_isReady() {
    Symbol SMB_isReady = new_Symbol(L"isReady");
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
<<<<<<< HEAD
    Send PSend18063 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_contents, 0);
    Symbol SMB_isReady_ = new_Symbol(L"isReady:");
    // isReady:. 
    Send PSend18064 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_client, SMB_isReady_, 1, (Optr)PSend18063);
    Array PThreadedCode18062 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18063, (Optr)&t_send1, (Optr)PSend18064, (Optr)&t_method_return);
    Method PMethod18061 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18062, 1, PSend18064);
    
    MethodClosure MC_SMB_isReady = new_MethodClosure((Method)PMethod18061, Shell_ReadLine_ReadLine_Class);
=======
    Send PSend18036 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_contents, 0);
    Symbol SMB_isReady_ = new_Symbol(L"isReady:");
    // isReady:. 
    Send PSend18037 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_client, SMB_isReady_, 1, (Optr)PSend18036);
    Array PThreadedCode18035 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18036, (Optr)&t_send1, (Optr)PSend18037, (Optr)&t_method_return);
    Method PMethod18034 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18035, 1, PSend18037);
    
    MethodClosure MC_SMB_isReady = new_MethodClosure((Method)PMethod18034, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_isReady, MC_SMB_isReady);
}


static void init_SMB_insert() {
    Symbol SMB_insert = new_Symbol(L"insert");
<<<<<<< HEAD
    Array PThreadedCode18066 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18065 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18066, 1, self);
    
    MethodClosure MC_SMB_insert = new_MethodClosure((Method)PMethod18065, Shell_ReadLine_ReadLine_Class);
=======
    Array PThreadedCode18039 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18038 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18039, 1, self);
    
    MethodClosure MC_SMB_insert = new_MethodClosure((Method)PMethod18038, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_insert, MC_SMB_insert);
}


static void init_SMB_f7() {
    Symbol SMB_f7 = new_Symbol(L"f7");
<<<<<<< HEAD
    Array PThreadedCode18068 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18067 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18068, 1, self);
    
    MethodClosure MC_SMB_f7 = new_MethodClosure((Method)PMethod18067, Shell_ReadLine_ReadLine_Class);
=======
    Array PThreadedCode18041 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18040 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18041, 1, self);
    
    MethodClosure MC_SMB_f7 = new_MethodClosure((Method)PMethod18040, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f7, MC_SMB_f7);
}


static void init_SMB_right() {
    Symbol SMB_right = new_Symbol(L"right");
    // right. 
<<<<<<< HEAD
    Send PSend18071 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_right, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // right. 
    Send PSend18075 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_right, 0);
    Array PThreadedCode18074 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18075, (Optr)&t_block_return);
    Block PBlock18073 = new_Block_with(empty_Array, empty_Array, PThreadedCode18074, 1, PSend18075);
    // ifTrue:. 
    Send PSend18072 = new_Send((Optr)PSend18071, SMB_ifTrue_, 1, (Optr)PBlock18073);
    Array PThreadedCode18070 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18071, (Optr)&t_send_ifTrue_, (Optr)PSend18072, (Optr)PBlock18073, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18069 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18070, 2, PSend18072, self);
    
    MethodClosure MC_SMB_right = new_MethodClosure((Method)PMethod18069, Shell_ReadLine_ReadLine_Class);
=======
    Send PSend18044 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_right, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // right. 
    Send PSend18048 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_right, 0);
    Array PThreadedCode18047 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18048, (Optr)&t_block_return);
    Block PBlock18046 = new_Block_with(empty_Array, empty_Array, PThreadedCode18047, 1, PSend18048);
    // ifTrue:. 
    Send PSend18045 = new_Send((Optr)PSend18044, SMB_ifTrue_, 1, (Optr)PBlock18046);
    Array PThreadedCode18043 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18044, (Optr)&t_send_ifTrue_, (Optr)PSend18045, (Optr)PBlock18046, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18042 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18043, 2, PSend18045, self);
    
    MethodClosure MC_SMB_right = new_MethodClosure((Method)PMethod18042, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_right, MC_SMB_right);
}


static void init_SMB_startOfText() {
    Symbol SMB_startOfText = new_Symbol(L"startOfText");
    Symbol SMB_moveToLine_column_ = new_Symbol(L"moveToLine:column:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // moveToLine:column:. 
<<<<<<< HEAD
    Send PSend18078 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)int_1_Const, (Optr)int_0_Const);
    Array PThreadedCode18077 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend18078, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18076 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18077, 2, PSend18078, self);
    
    MethodClosure MC_SMB_startOfText = new_MethodClosure((Method)PMethod18076, Shell_ReadLine_ReadLine_Class);
=======
    Send PSend18051 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)int_1_Const, (Optr)int_0_Const);
    Array PThreadedCode18050 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend18051, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18049 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18050, 2, PSend18051, self);
    
    MethodClosure MC_SMB_startOfText = new_MethodClosure((Method)PMethod18049, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_startOfText, MC_SMB_startOfText);
}


static void init_SMB_f1() {
    Symbol SMB_f1 = new_Symbol(L"f1");
<<<<<<< HEAD
    Array PThreadedCode18080 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18079 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18080, 1, self);
    
    MethodClosure MC_SMB_f1 = new_MethodClosure((Method)PMethod18079, Shell_ReadLine_ReadLine_Class);
=======
    Array PThreadedCode18053 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18052 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18053, 1, self);
    
    MethodClosure MC_SMB_f1 = new_MethodClosure((Method)PMethod18052, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f1, MC_SMB_f1);
}


<<<<<<< HEAD
static void init_SMB_endOfLine() {
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Array PArray18082 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend18085 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign18084 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend18085);
    // endOfLine. 
    Send PSend18086 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_endOfLine, 0);
    // column. 
    Send PSend18087 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend18088 = new_Send((Optr)PSend18087, SMB__minus_, 1, (Optr)VAR_col_0_0);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend18089 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend18088);
    Array PThreadedCode18083 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign18084, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18085, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18086, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18087, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend18088, (Optr)&t_send1, (Optr)PSend18089, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18081 = new_Method_with(empty_Array, PArray18082, empty_Array, PThreadedCode18083, 4, PAssign18084, PSend18086, PSend18089, self);
    
    MethodClosure MC_SMB_endOfLine = new_MethodClosure((Method)PMethod18081, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_endOfLine, MC_SMB_endOfLine);
}


static void init_SMB_f15() {
    Symbol SMB_f15 = new_Symbol(L"f15");
    Array PThreadedCode18091 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18090 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18091, 1, self);
    
    MethodClosure MC_SMB_f15 = new_MethodClosure((Method)PMethod18090, Shell_ReadLine_ReadLine_Class);
=======
static void init_SMB_f15() {
    Symbol SMB_f15 = new_Symbol(L"f15");
    Array PThreadedCode18055 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18054 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18055, 1, self);
    
    MethodClosure MC_SMB_f15 = new_MethodClosure((Method)PMethod18054, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f15, MC_SMB_f15);
}


static void init_SMB_formfeed() {
    Symbol SMB_formfeed = new_Symbol(L"formfeed");
<<<<<<< HEAD
    Array PThreadedCode18093 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18092 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18093, 1, self);
    
    MethodClosure MC_SMB_formfeed = new_MethodClosure((Method)PMethod18092, Shell_ReadLine_ReadLine_Class);
=======
    Array PThreadedCode18057 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18056 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18057, 1, self);
    
    MethodClosure MC_SMB_formfeed = new_MethodClosure((Method)PMethod18056, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_formfeed, MC_SMB_formfeed);
}


static void init_SMB_enquiry() {
    Symbol SMB_enquiry = new_Symbol(L"enquiry");
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    // endOfLine. 
<<<<<<< HEAD
    Send PSend18096 = new_Send((Optr)self, SMB_endOfLine, 0);
    Array PThreadedCode18095 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18096, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18094 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18095, 2, PSend18096, self);
    
    MethodClosure MC_SMB_enquiry = new_MethodClosure((Method)PMethod18094, Shell_ReadLine_ReadLine_Class);
=======
    Send PSend18060 = new_Send((Optr)self, SMB_endOfLine, 0);
    Array PThreadedCode18059 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18060, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18058 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18059, 2, PSend18060, self);
    
    MethodClosure MC_SMB_enquiry = new_MethodClosure((Method)PMethod18058, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_enquiry, MC_SMB_enquiry);
}


static void init_SMB_startOfHeading() {
    Symbol SMB_startOfHeading = new_Symbol(L"startOfHeading");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
<<<<<<< HEAD
    Array PArray18098 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend18101 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign18100 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend18101);
    Symbol SMB_startOfLine = new_Symbol(L"startOfLine");
    // startOfLine. 
    Send PSend18102 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_startOfLine, 0);
    // column. 
    Send PSend18103 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend18104 = new_Send((Optr)PSend18103, SMB__minus_, 1, (Optr)VAR_col_0_0);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend18105 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend18104);
    Array PThreadedCode18099 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign18100, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18101, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18102, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18103, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend18104, (Optr)&t_send1, (Optr)PSend18105, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18097 = new_Method_with(empty_Array, PArray18098, empty_Array, PThreadedCode18099, 4, PAssign18100, PSend18102, PSend18105, self);
    
    MethodClosure MC_SMB_startOfHeading = new_MethodClosure((Method)PMethod18097, Shell_ReadLine_ReadLine_Class);
=======
    Array PArray18062 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend18065 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign18064 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend18065);
    Symbol SMB_startOfLine = new_Symbol(L"startOfLine");
    // startOfLine. 
    Send PSend18066 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_startOfLine, 0);
    // column. 
    Send PSend18067 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend18068 = new_Send((Optr)PSend18067, SMB__minus_, 1, (Optr)VAR_col_0_0);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend18069 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend18068);
    Array PThreadedCode18063 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign18064, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18065, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18066, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18067, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend18068, (Optr)&t_send1, (Optr)PSend18069, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18061 = new_Method_with(empty_Array, PArray18062, empty_Array, PThreadedCode18063, 4, PAssign18064, PSend18066, PSend18069, self);
    
    MethodClosure MC_SMB_startOfHeading = new_MethodClosure((Method)PMethod18061, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_startOfHeading, MC_SMB_startOfHeading);
}


static void init_SMB_f20() {
    Symbol SMB_f20 = new_Symbol(L"f20");
<<<<<<< HEAD
    Array PThreadedCode18107 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18106 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18107, 1, self);
    
    MethodClosure MC_SMB_f20 = new_MethodClosure((Method)PMethod18106, Shell_ReadLine_ReadLine_Class);
=======
    Array PThreadedCode18071 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18070 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18071, 1, self);
    
    MethodClosure MC_SMB_f20 = new_MethodClosure((Method)PMethod18070, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f20, MC_SMB_f20);
}


static void init_SMB_repaint() {
    Symbol SMB_repaint = new_Symbol(L"repaint");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Variable VAR_line_0_1 = new_Variable_named(L"line", 0);
<<<<<<< HEAD
    Array PArray18109 = new_Array_with(2, (Optr)VAR_col_0_0, (Optr)VAR_line_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18112 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_parsesUntil = new_Symbol(L"parsesUntil");
    // parsesUntil. 
    Send PSend18114 = new_Send((Optr)self, SMB_parsesUntil, 0);
    Variable VAR_newpos_2_0 = new_Variable_named(L"newpos", 2);
    Array PArray18116 = new_Array_with(1, (Optr)VAR_newpos_2_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend18119 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign18118 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend18119);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend18121 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    Assign PAssign18120 = new_Assign((Optr)VAR_line_0_1, (Optr)PSend18121);
=======
    Array PArray18073 = new_Array_with(2, (Optr)VAR_col_0_0, (Optr)VAR_line_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18076 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_parsesUntil = new_Symbol(L"parsesUntil");
    // parsesUntil. 
    Send PSend18078 = new_Send((Optr)self, SMB_parsesUntil, 0);
    Variable VAR_newpos_2_0 = new_Variable_named(L"newpos", 2);
    Array PArray18080 = new_Array_with(1, (Optr)VAR_newpos_2_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend18083 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign18082 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend18083);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend18085 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    Assign PAssign18084 = new_Assign((Optr)VAR_line_0_1, (Optr)PSend18085);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
<<<<<<< HEAD
    Send PSend18124 = new_Send((Optr)VAR_newpos_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend18125 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB__equals_, 1, (Optr)PSend18124);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18129 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode18128 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18129, (Optr)&t_block_return);
    Block PBlock18127 = new_Block_with(empty_Array, empty_Array, PThreadedCode18128, 1, PSend18129);
    // ifTrue:. 
    Send PSend18126 = new_Send((Optr)PSend18125, SMB_ifTrue_, 1, (Optr)PBlock18127);
    Symbol SMB_repaintAt_ = new_Symbol(L"repaintAt:");
    // repaintAt:. 
    Send PSend18130 = new_Send((Optr)self, SMB_repaintAt_, 1, (Optr)slot_Shell_ReadLine_ReadLine_failure);
    Array PThreadedCode18123 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_variable, (Optr)VAR_newpos_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18124, (Optr)&t_send1, (Optr)PSend18125, (Optr)&t_send_ifTrue_, (Optr)PSend18126, (Optr)PBlock18127, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_send1, (Optr)PSend18130, (Optr)&t_block_return);
    Block PBlock18122 = new_Block_with(empty_Array, empty_Array, PThreadedCode18123, 2, PSend18126, PSend18130);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend18131 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB_ifNotNil_, 1, (Optr)PBlock18122);
    // +. 
    Send PSend18133 = new_Send((Optr)VAR_newpos_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign18132 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)PSend18133);
    Symbol SMB_errorColor = new_Symbol(L"errorColor");
    // errorColor. 
    Send PSend18134 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_errorColor, 0);
    // repaintAt:. 
    Send PSend18135 = new_Send((Optr)self, SMB_repaintAt_, 1, (Optr)slot_Shell_ReadLine_ReadLine_failure);
    Symbol SMB_moveToLine_column_ = new_Symbol(L"moveToLine:column:");
    // moveToLine:column:. 
    Send PSend18136 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)VAR_line_0_1, (Optr)VAR_col_0_0);
    Symbol SMB_normal = new_Symbol(L"normal");
    // normal. 
    Send PSend18137 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_normal, 0);
    // escape:. 
    Send PSend18138 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18137);
    Array PThreadedCode18117 = instantiate_Array_with(ThreadedCode_Class, 0, 60, (Optr)&t_push1, (Optr)PAssign18118, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18119, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18120, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18121, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_closure, (Optr)PBlock18122, (Optr)&t_send1, (Optr)PSend18131, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18132, (Optr)&t_push_variable, (Optr)VAR_newpos_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18133, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18134, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_send1, (Optr)PSend18135, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_line_0_1, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send2, (Optr)PSend18136, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18137, (Optr)&t_send1, (Optr)PSend18138, (Optr)&t_method_return);
    Block PBlock18115 = new_Block_with(PArray18116, empty_Array, PThreadedCode18117, 8, PAssign18118, PAssign18120, PSend18131, PAssign18132, PSend18134, PSend18135, PSend18136, PSend18138);
    // ifNotNil:. 
    Send PSend18139 = new_Send((Optr)PSend18114, SMB_ifNotNil_, 1, (Optr)PBlock18115);
    // column. 
    Send PSend18143 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign18142 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend18143);
    // line. 
    Send PSend18145 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    Assign PAssign18144 = new_Assign((Optr)VAR_line_0_1, (Optr)PSend18145);
    // repaintAt:. 
    Send PSend18146 = new_Send((Optr)self, SMB_repaintAt_, 1, (Optr)slot_Shell_ReadLine_ReadLine_failure);
    // moveToLine:column:. 
    Send PSend18147 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)VAR_line_0_1, (Optr)VAR_col_0_0);
    Array PThreadedCode18141 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push1, (Optr)PAssign18142, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18143, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18144, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18145, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_send1, (Optr)PSend18146, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_line_0_1, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send2, (Optr)PSend18147, (Optr)&t_block_return);
    Block PBlock18140 = new_Block_with(empty_Array, empty_Array, PThreadedCode18141, 4, PAssign18142, PAssign18144, PSend18146, PSend18147);
    // ifNotNil:. 
    Send PSend18148 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB_ifNotNil_, 1, (Optr)PBlock18140);
    Assign PAssign18149 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)nil_Const);
    Array PThreadedCode18113 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18114, (Optr)&t_push_closure, (Optr)PBlock18115, (Optr)&t_send1, (Optr)PSend18139, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_closure, (Optr)PBlock18140, (Optr)&t_send1, (Optr)PSend18148, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18149, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18111 = new_Block_with(PArray18112, empty_Array, PThreadedCode18113, 4, PSend18139, PSend18148, PAssign18149, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18150 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18111);
    Array PThreadedCode18110 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18111, (Optr)&t_send1, (Optr)PSend18150, (Optr)&t_method_return);
    Method PMethod18108 = new_Method_with(empty_Array, PArray18109, empty_Array, PThreadedCode18110, 1, PSend18150);
    
    MethodClosure MC_SMB_repaint = new_MethodClosure((Method)PMethod18108, Shell_ReadLine_ReadLine_Class);
=======
    Send PSend18088 = new_Send((Optr)VAR_newpos_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend18089 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB__equals_, 1, (Optr)PSend18088);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18093 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode18092 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18093, (Optr)&t_block_return);
    Block PBlock18091 = new_Block_with(empty_Array, empty_Array, PThreadedCode18092, 1, PSend18093);
    // ifTrue:. 
    Send PSend18090 = new_Send((Optr)PSend18089, SMB_ifTrue_, 1, (Optr)PBlock18091);
    Symbol SMB_repaintAt_ = new_Symbol(L"repaintAt:");
    // repaintAt:. 
    Send PSend18094 = new_Send((Optr)self, SMB_repaintAt_, 1, (Optr)slot_Shell_ReadLine_ReadLine_failure);
    Array PThreadedCode18087 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_variable, (Optr)VAR_newpos_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18088, (Optr)&t_send1, (Optr)PSend18089, (Optr)&t_send_ifTrue_, (Optr)PSend18090, (Optr)PBlock18091, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_send1, (Optr)PSend18094, (Optr)&t_block_return);
    Block PBlock18086 = new_Block_with(empty_Array, empty_Array, PThreadedCode18087, 2, PSend18090, PSend18094);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend18095 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB_ifNotNil_, 1, (Optr)PBlock18086);
    // +. 
    Send PSend18097 = new_Send((Optr)VAR_newpos_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign18096 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)PSend18097);
    Symbol SMB_errorColor = new_Symbol(L"errorColor");
    // errorColor. 
    Send PSend18098 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_errorColor, 0);
    // repaintAt:. 
    Send PSend18099 = new_Send((Optr)self, SMB_repaintAt_, 1, (Optr)slot_Shell_ReadLine_ReadLine_failure);
    Symbol SMB_moveToLine_column_ = new_Symbol(L"moveToLine:column:");
    // moveToLine:column:. 
    Send PSend18100 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)VAR_line_0_1, (Optr)VAR_col_0_0);
    Symbol SMB_normal = new_Symbol(L"normal");
    // normal. 
    Send PSend18101 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_normal, 0);
    // escape:. 
    Send PSend18102 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18101);
    Array PThreadedCode18081 = instantiate_Array_with(ThreadedCode_Class, 0, 60, (Optr)&t_push1, (Optr)PAssign18082, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18083, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18084, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18085, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_closure, (Optr)PBlock18086, (Optr)&t_send1, (Optr)PSend18095, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18096, (Optr)&t_push_variable, (Optr)VAR_newpos_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18097, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18098, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_send1, (Optr)PSend18099, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_line_0_1, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send2, (Optr)PSend18100, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18101, (Optr)&t_send1, (Optr)PSend18102, (Optr)&t_method_return);
    Block PBlock18079 = new_Block_with(PArray18080, empty_Array, PThreadedCode18081, 8, PAssign18082, PAssign18084, PSend18095, PAssign18096, PSend18098, PSend18099, PSend18100, PSend18102);
    // ifNotNil:. 
    Send PSend18103 = new_Send((Optr)PSend18078, SMB_ifNotNil_, 1, (Optr)PBlock18079);
    // column. 
    Send PSend18107 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign18106 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend18107);
    // line. 
    Send PSend18109 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    Assign PAssign18108 = new_Assign((Optr)VAR_line_0_1, (Optr)PSend18109);
    // repaintAt:. 
    Send PSend18110 = new_Send((Optr)self, SMB_repaintAt_, 1, (Optr)slot_Shell_ReadLine_ReadLine_failure);
    // moveToLine:column:. 
    Send PSend18111 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)VAR_line_0_1, (Optr)VAR_col_0_0);
    Array PThreadedCode18105 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push1, (Optr)PAssign18106, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18107, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18108, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18109, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_send1, (Optr)PSend18110, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_line_0_1, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send2, (Optr)PSend18111, (Optr)&t_block_return);
    Block PBlock18104 = new_Block_with(empty_Array, empty_Array, PThreadedCode18105, 4, PAssign18106, PAssign18108, PSend18110, PSend18111);
    // ifNotNil:. 
    Send PSend18112 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB_ifNotNil_, 1, (Optr)PBlock18104);
    Assign PAssign18113 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)nil_Const);
    Array PThreadedCode18077 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18078, (Optr)&t_push_closure, (Optr)PBlock18079, (Optr)&t_send1, (Optr)PSend18103, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_closure, (Optr)PBlock18104, (Optr)&t_send1, (Optr)PSend18112, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18113, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18075 = new_Block_with(PArray18076, empty_Array, PThreadedCode18077, 4, PSend18103, PSend18112, PAssign18113, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18114 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18075);
    Array PThreadedCode18074 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18075, (Optr)&t_send1, (Optr)PSend18114, (Optr)&t_method_return);
    Method PMethod18072 = new_Method_with(empty_Array, PArray18073, empty_Array, PThreadedCode18074, 1, PSend18114);
    
    MethodClosure MC_SMB_repaint = new_MethodClosure((Method)PMethod18072, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_repaint, MC_SMB_repaint);
}


static void init_SMB_f6() {
    Symbol SMB_f6 = new_Symbol(L"f6");
<<<<<<< HEAD
    Array PThreadedCode18152 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18151 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18152, 1, self);
    
    MethodClosure MC_SMB_f6 = new_MethodClosure((Method)PMethod18151, Shell_ReadLine_ReadLine_Class);
=======
    Array PThreadedCode18116 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18115 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18116, 1, self);
    
    MethodClosure MC_SMB_f6 = new_MethodClosure((Method)PMethod18115, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f6, MC_SMB_f6);
}


static void init_SMB_endOfLine() {
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Array PArray18118 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend18121 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign18120 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend18121);
    // endOfLine. 
    Send PSend18122 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_endOfLine, 0);
    // column. 
    Send PSend18123 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend18124 = new_Send((Optr)PSend18123, SMB__minus_, 1, (Optr)VAR_col_0_0);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend18125 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend18124);
    Array PThreadedCode18119 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign18120, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18121, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18122, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18123, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend18124, (Optr)&t_send1, (Optr)PSend18125, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18117 = new_Method_with(empty_Array, PArray18118, empty_Array, PThreadedCode18119, 4, PAssign18120, PSend18122, PSend18125, self);
    
    MethodClosure MC_SMB_endOfLine = new_MethodClosure((Method)PMethod18117, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_endOfLine, MC_SMB_endOfLine);
}


static void init_SMB_tab() {
    Symbol SMB_tab = new_Symbol(L"tab");
<<<<<<< HEAD
    Array PThreadedCode18154 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18153 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18154, 1, self);
    
    MethodClosure MC_SMB_tab = new_MethodClosure((Method)PMethod18153, Shell_ReadLine_ReadLine_Class);
=======
    Array PThreadedCode18127 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18126 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18127, 1, self);
    
    MethodClosure MC_SMB_tab = new_MethodClosure((Method)PMethod18126, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_tab, MC_SMB_tab);
}


static void init_SMB_shiftOut() {
    Symbol SMB_shiftOut = new_Symbol(L"shiftOut");
<<<<<<< HEAD
    Array PThreadedCode18156 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18155 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18156, 1, self);
    
    MethodClosure MC_SMB_shiftOut = new_MethodClosure((Method)PMethod18155, Shell_ReadLine_ReadLine_Class);
=======
    Array PThreadedCode18129 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18128 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18129, 1, self);
    
    MethodClosure MC_SMB_shiftOut = new_MethodClosure((Method)PMethod18128, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_shiftOut, MC_SMB_shiftOut);
}


static void init_SMB_clear() {
    Symbol SMB_clear = new_Symbol(L"clear");
<<<<<<< HEAD
    Assign PAssign18159 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_ready, (Optr)false_Const);
    // clear. 
    Send PSend18160 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_clear, 0);
    Assign PAssign18161 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)nil_Const);
    Array PThreadedCode18158 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign18159, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18160, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18161, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18157 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18158, 4, PAssign18159, PSend18160, PAssign18161, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod18157, Shell_ReadLine_ReadLine_Class);
=======
    Assign PAssign18132 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_ready, (Optr)false_Const);
    // clear. 
    Send PSend18133 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_clear, 0);
    Assign PAssign18134 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)nil_Const);
    Array PThreadedCode18131 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign18132, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18133, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18134, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18130 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18131, 4, PAssign18132, PSend18133, PAssign18134, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod18130, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_readLine() {
    Symbol SMB_readLine = new_Symbol(L"readLine");
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
<<<<<<< HEAD
    Send PSend18164 = new_Send((Optr)self, SMB_clear, 0);
    Array PThreadedCode18166 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_ready, (Optr)&t_block_return);
    Block PBlock18165 = new_Block_with(empty_Array, empty_Array, PThreadedCode18166, 1, slot_Shell_ReadLine_ReadLine_ready);
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend18169 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_vterm, SMB_read, 0);
    Array PThreadedCode18168 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_vterm, (Optr)&t_send0, (Optr)PSend18169, (Optr)&t_block_return);
    Block PBlock18167 = new_Block_with(empty_Array, empty_Array, PThreadedCode18168, 1, PSend18169);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend18170 = new_Send((Optr)PBlock18165, SMB_whileFalse_, 1, (Optr)PBlock18167);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend18171 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_contents, 0);
    Array PThreadedCode18163 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18164, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock18165, (Optr)&t_push_closure, (Optr)PBlock18167, (Optr)&t_send1, (Optr)PSend18170, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18171, (Optr)&t_method_return);
    Method PMethod18162 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18163, 3, PSend18164, PSend18170, PSend18171);
    
    MethodClosure MC_SMB_readLine = new_MethodClosure((Method)PMethod18162, Shell_ReadLine_ReadLine_Class);
=======
    Send PSend18137 = new_Send((Optr)self, SMB_clear, 0);
    Array PThreadedCode18139 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_ready, (Optr)&t_block_return);
    Block PBlock18138 = new_Block_with(empty_Array, empty_Array, PThreadedCode18139, 1, slot_Shell_ReadLine_ReadLine_ready);
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend18142 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_vterm, SMB_read, 0);
    Array PThreadedCode18141 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_vterm, (Optr)&t_send0, (Optr)PSend18142, (Optr)&t_block_return);
    Block PBlock18140 = new_Block_with(empty_Array, empty_Array, PThreadedCode18141, 1, PSend18142);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend18143 = new_Send((Optr)PBlock18138, SMB_whileFalse_, 1, (Optr)PBlock18140);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend18144 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_contents, 0);
    Array PThreadedCode18136 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18137, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock18138, (Optr)&t_push_closure, (Optr)PBlock18140, (Optr)&t_send1, (Optr)PSend18143, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18144, (Optr)&t_method_return);
    Method PMethod18135 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18136, 3, PSend18137, PSend18143, PSend18144);
    
    MethodClosure MC_SMB_readLine = new_MethodClosure((Method)PMethod18135, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_readLine, MC_SMB_readLine);
}


static void init_SMB_lf() {
    Symbol SMB_lf = new_Symbol(L"lf");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
<<<<<<< HEAD
    Array PArray18175 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isReady = new_Symbol(L"isReady");
    // isReady. 
    Send PSend18177 = new_Send((Optr)self, SMB_isReady, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_ready = new_Symbol(L"ready");
    // ready. 
    Send PSend18181 = new_Send((Optr)self, SMB_ready, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18182 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18181);
    Array PThreadedCode18180 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18181, (Optr)&t_send1, (Optr)PSend18182, (Optr)&t_block_return);
    Block PBlock18179 = new_Block_with(empty_Array, empty_Array, PThreadedCode18180, 1, PSend18182);
    // ifTrue:. 
    Send PSend18178 = new_Send((Optr)PSend18177, SMB_ifTrue_, 1, (Optr)PBlock18179);
    Symbol SMB_openLine = new_Symbol(L"openLine");
    // openLine. 
    Send PSend18183 = new_Send((Optr)self, SMB_openLine, 0);
    Array PThreadedCode18176 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18177, (Optr)&t_send_ifTrue_, (Optr)PSend18178, (Optr)PBlock18179, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18183, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18174 = new_Block_with(PArray18175, empty_Array, PThreadedCode18176, 3, PSend18178, PSend18183, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18184 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18174);
    Array PThreadedCode18173 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18174, (Optr)&t_send1, (Optr)PSend18184, (Optr)&t_method_return);
    Method PMethod18172 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18173, 1, PSend18184);
    
    MethodClosure MC_SMB_lf = new_MethodClosure((Method)PMethod18172, Shell_ReadLine_ReadLine_Class);
=======
    Array PArray18148 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isReady = new_Symbol(L"isReady");
    // isReady. 
    Send PSend18150 = new_Send((Optr)self, SMB_isReady, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_ready = new_Symbol(L"ready");
    // ready. 
    Send PSend18154 = new_Send((Optr)self, SMB_ready, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18155 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18154);
    Array PThreadedCode18153 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18154, (Optr)&t_send1, (Optr)PSend18155, (Optr)&t_block_return);
    Block PBlock18152 = new_Block_with(empty_Array, empty_Array, PThreadedCode18153, 1, PSend18155);
    // ifTrue:. 
    Send PSend18151 = new_Send((Optr)PSend18150, SMB_ifTrue_, 1, (Optr)PBlock18152);
    Symbol SMB_openLine = new_Symbol(L"openLine");
    // openLine. 
    Send PSend18156 = new_Send((Optr)self, SMB_openLine, 0);
    Array PThreadedCode18149 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18150, (Optr)&t_send_ifTrue_, (Optr)PSend18151, (Optr)PBlock18152, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18156, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18147 = new_Block_with(PArray18148, empty_Array, PThreadedCode18149, 3, PSend18151, PSend18156, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18157 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18147);
    Array PThreadedCode18146 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18147, (Optr)&t_send1, (Optr)PSend18157, (Optr)&t_method_return);
    Method PMethod18145 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18146, 1, PSend18157);
    
    MethodClosure MC_SMB_lf = new_MethodClosure((Method)PMethod18145, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_lf, MC_SMB_lf);
}


static void init_SMB_repaintAt_() {
    Symbol SMB_repaintAt_ = new_Symbol(L"repaintAt:");
    Variable VAR_position_0_0 = new_Variable_named(L"position", 0);
<<<<<<< HEAD
    Array PArray18186 = new_Array_with(1, (Optr)VAR_position_0_0);
    Variable VAR_col_0_1 = new_Variable_named(L"col", 0);
    Variable VAR_line_0_2 = new_Variable_named(L"line", 0);
    Array PArray18187 = new_Array_with(2, (Optr)VAR_col_0_1, (Optr)VAR_line_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18190 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend18193 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign18192 = new_Assign((Optr)VAR_col_0_1, (Optr)PSend18193);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend18195 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    Assign PAssign18194 = new_Assign((Optr)VAR_line_0_2, (Optr)PSend18195);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend18196 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_position_, 1, (Optr)VAR_position_0_0);
    // column. 
    Send PSend18197 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend18198 = new_Send((Optr)PSend18197, SMB__minus_, 1, (Optr)VAR_col_0_1);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend18199 = new_Send((Optr)PSend18198, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend18200 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend18199);
    // line. 
    Send PSend18201 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    // -. 
    Send PSend18202 = new_Send((Optr)VAR_line_0_2, SMB__minus_, 1, (Optr)PSend18201);
    Symbol SMB_up_ = new_Symbol(L"up:");
    // up:. 
    Send PSend18203 = new_Send((Optr)self, SMB_up_, 1, (Optr)PSend18202);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend18204 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_currentLine, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend18205 = new_Send((Optr)PSend18204, SMB_size, 0);
=======
    Array PArray18159 = new_Array_with(1, (Optr)VAR_position_0_0);
    Variable VAR_col_0_1 = new_Variable_named(L"col", 0);
    Variable VAR_line_0_2 = new_Variable_named(L"line", 0);
    Array PArray18160 = new_Array_with(2, (Optr)VAR_col_0_1, (Optr)VAR_line_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18163 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend18166 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign18165 = new_Assign((Optr)VAR_col_0_1, (Optr)PSend18166);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend18168 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    Assign PAssign18167 = new_Assign((Optr)VAR_line_0_2, (Optr)PSend18168);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend18169 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_position_, 1, (Optr)VAR_position_0_0);
    // column. 
    Send PSend18170 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend18171 = new_Send((Optr)PSend18170, SMB__minus_, 1, (Optr)VAR_col_0_1);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend18172 = new_Send((Optr)PSend18171, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend18173 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend18172);
    // line. 
    Send PSend18174 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    // -. 
    Send PSend18175 = new_Send((Optr)VAR_line_0_2, SMB__minus_, 1, (Optr)PSend18174);
    Symbol SMB_up_ = new_Symbol(L"up:");
    // up:. 
    Send PSend18176 = new_Send((Optr)self, SMB_up_, 1, (Optr)PSend18175);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend18177 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_currentLine, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend18178 = new_Send((Optr)PSend18177, SMB_size, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
<<<<<<< HEAD
    Send PSend18206 = new_Send((Optr)PSend18205, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_right = new_Symbol(L"right");
    // right. 
    Send PSend18210 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_right, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18211 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode18209 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18210, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18211, (Optr)&t_block_return);
    Block PBlock18208 = new_Block_with(empty_Array, empty_Array, PThreadedCode18209, 2, PSend18210, PSend18211);
    // ifTrue:. 
    Send PSend18207 = new_Send((Optr)PSend18206, SMB_ifTrue_, 1, (Optr)PBlock18208);
    Symbol SMB_currentCharacter = new_Symbol(L"currentCharacter");
    // currentCharacter. 
    Send PSend18212 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_currentCharacter, 0);
    Symbol SMB_overwrite_ = new_Symbol(L"overwrite:");
    // overwrite:. 
    Send PSend18213 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_overwrite_, 1, (Optr)PSend18212);
    Array PThreadedCode18191 = instantiate_Array_with(ThreadedCode_Class, 0, 73, (Optr)&t_push1, (Optr)PAssign18192, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18193, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18194, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18195, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_position_0_0, (Optr)&t_send1, (Optr)PSend18196, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18197, (Optr)&t_push_variable, (Optr)VAR_col_0_1, (Optr)&t_send1, (Optr)PSend18198, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18199, (Optr)&t_send1, (Optr)PSend18200, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_line_0_2, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18201, (Optr)&t_send1, (Optr)PSend18202, (Optr)&t_send1, (Optr)PSend18203, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18204, (Optr)&t_send0, (Optr)PSend18205, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend18206, (Optr)&t_send_ifTrue_, (Optr)PSend18207, (Optr)PBlock18208, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18212, (Optr)&t_send1, (Optr)PSend18213, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18189 = new_Block_with(PArray18190, empty_Array, PThreadedCode18191, 8, PAssign18192, PAssign18194, PSend18196, PSend18200, PSend18203, PSend18207, PSend18213, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18214 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18189);
    Array PThreadedCode18188 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18189, (Optr)&t_send1, (Optr)PSend18214, (Optr)&t_method_return);
    Method PMethod18185 = new_Method_with(PArray18186, PArray18187, empty_Array, PThreadedCode18188, 1, PSend18214);
    
    MethodClosure MC_SMB_repaintAt_ = new_MethodClosure((Method)PMethod18185, Shell_ReadLine_ReadLine_Class);
=======
    Send PSend18179 = new_Send((Optr)PSend18178, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_right = new_Symbol(L"right");
    // right. 
    Send PSend18183 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_right, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18184 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode18182 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18183, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18184, (Optr)&t_block_return);
    Block PBlock18181 = new_Block_with(empty_Array, empty_Array, PThreadedCode18182, 2, PSend18183, PSend18184);
    // ifTrue:. 
    Send PSend18180 = new_Send((Optr)PSend18179, SMB_ifTrue_, 1, (Optr)PBlock18181);
    Symbol SMB_currentCharacter = new_Symbol(L"currentCharacter");
    // currentCharacter. 
    Send PSend18185 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_currentCharacter, 0);
    Symbol SMB_overwrite_ = new_Symbol(L"overwrite:");
    // overwrite:. 
    Send PSend18186 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_overwrite_, 1, (Optr)PSend18185);
    Array PThreadedCode18164 = instantiate_Array_with(ThreadedCode_Class, 0, 73, (Optr)&t_push1, (Optr)PAssign18165, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18166, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18167, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18168, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_position_0_0, (Optr)&t_send1, (Optr)PSend18169, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18170, (Optr)&t_push_variable, (Optr)VAR_col_0_1, (Optr)&t_send1, (Optr)PSend18171, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18172, (Optr)&t_send1, (Optr)PSend18173, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_line_0_2, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18174, (Optr)&t_send1, (Optr)PSend18175, (Optr)&t_send1, (Optr)PSend18176, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18177, (Optr)&t_send0, (Optr)PSend18178, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend18179, (Optr)&t_send_ifTrue_, (Optr)PSend18180, (Optr)PBlock18181, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18185, (Optr)&t_send1, (Optr)PSend18186, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18162 = new_Block_with(PArray18163, empty_Array, PThreadedCode18164, 8, PAssign18165, PAssign18167, PSend18169, PSend18173, PSend18176, PSend18180, PSend18186, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18187 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18162);
    Array PThreadedCode18161 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18162, (Optr)&t_send1, (Optr)PSend18187, (Optr)&t_method_return);
    Method PMethod18158 = new_Method_with(PArray18159, PArray18160, empty_Array, PThreadedCode18161, 1, PSend18187);
    
    MethodClosure MC_SMB_repaintAt_ = new_MethodClosure((Method)PMethod18158, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_repaintAt_, MC_SMB_repaintAt_);
}


static void init_SMB_f16() {
    Symbol SMB_f16 = new_Symbol(L"f16");
<<<<<<< HEAD
    Array PThreadedCode18216 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18215 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18216, 1, self);
    
    MethodClosure MC_SMB_f16 = new_MethodClosure((Method)PMethod18215, Shell_ReadLine_ReadLine_Class);
=======
    Array PThreadedCode18189 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18188 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18189, 1, self);
    
    MethodClosure MC_SMB_f16 = new_MethodClosure((Method)PMethod18188, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f16, MC_SMB_f16);
}


static void init_SMB_up() {
    Symbol SMB_up = new_Symbol(L"up");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
<<<<<<< HEAD
    Array PArray18218 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend18221 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign18220 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend18221);
    // up. 
    Send PSend18222 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_up, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_column_ = new_Symbol(L"column:");
    // column:. 
    Send PSend18226 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column_, 1, (Optr)VAR_col_0_0);
    // up. 
    Send PSend18227 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_up, 0);
    // column. 
    Send PSend18228 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend18229 = new_Send((Optr)VAR_col_0_0, SMB__minus_, 1, (Optr)PSend18228);
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend18232 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode18231 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18232, (Optr)&t_block_return);
    Block PBlock18230 = new_Block_with(empty_Array, empty_Array, PThreadedCode18231, 1, PSend18232);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend18233 = new_Send((Optr)PSend18229, SMB_timesRepeat_, 1, (Optr)PBlock18230);
    Array PThreadedCode18225 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend18226, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18227, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18228, (Optr)&t_send1, (Optr)PSend18229, (Optr)&t_push_closure, (Optr)PBlock18230, (Optr)&t_send1, (Optr)PSend18233, (Optr)&t_block_return);
    Block PBlock18224 = new_Block_with(empty_Array, empty_Array, PThreadedCode18225, 3, PSend18226, PSend18227, PSend18233);
    // ifTrue:. 
    Send PSend18223 = new_Send((Optr)PSend18222, SMB_ifTrue_, 1, (Optr)PBlock18224);
    Array PThreadedCode18219 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign18220, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18221, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18222, (Optr)&t_send_ifTrue_, (Optr)PSend18223, (Optr)PBlock18224, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18217 = new_Method_with(empty_Array, PArray18218, empty_Array, PThreadedCode18219, 3, PAssign18220, PSend18223, self);
    
    MethodClosure MC_SMB_up = new_MethodClosure((Method)PMethod18217, Shell_ReadLine_ReadLine_Class);
=======
    Array PArray18191 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend18194 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign18193 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend18194);
    // up. 
    Send PSend18195 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_up, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_column_ = new_Symbol(L"column:");
    // column:. 
    Send PSend18199 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column_, 1, (Optr)VAR_col_0_0);
    // up. 
    Send PSend18200 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_up, 0);
    // column. 
    Send PSend18201 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend18202 = new_Send((Optr)VAR_col_0_0, SMB__minus_, 1, (Optr)PSend18201);
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend18205 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode18204 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18205, (Optr)&t_block_return);
    Block PBlock18203 = new_Block_with(empty_Array, empty_Array, PThreadedCode18204, 1, PSend18205);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend18206 = new_Send((Optr)PSend18202, SMB_timesRepeat_, 1, (Optr)PBlock18203);
    Array PThreadedCode18198 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend18199, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18200, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18201, (Optr)&t_send1, (Optr)PSend18202, (Optr)&t_push_closure, (Optr)PBlock18203, (Optr)&t_send1, (Optr)PSend18206, (Optr)&t_block_return);
    Block PBlock18197 = new_Block_with(empty_Array, empty_Array, PThreadedCode18198, 3, PSend18199, PSend18200, PSend18206);
    // ifTrue:. 
    Send PSend18196 = new_Send((Optr)PSend18195, SMB_ifTrue_, 1, (Optr)PBlock18197);
    Array PThreadedCode18192 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign18193, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18194, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18195, (Optr)&t_send_ifTrue_, (Optr)PSend18196, (Optr)PBlock18197, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18190 = new_Method_with(empty_Array, PArray18191, empty_Array, PThreadedCode18192, 3, PAssign18193, PSend18196, self);
    
    MethodClosure MC_SMB_up = new_MethodClosure((Method)PMethod18190, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_up, MC_SMB_up);
}


static void init_SMB_parsesUntil() {
    Symbol SMB_parsesUntil = new_Symbol(L"parsesUntil");
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
<<<<<<< HEAD
    Send PSend18236 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_contents, 0);
    Symbol SMB_parsesUntil_ = new_Symbol(L"parsesUntil:");
    // parsesUntil:. 
    Send PSend18237 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_client, SMB_parsesUntil_, 1, (Optr)PSend18236);
    Array PThreadedCode18235 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18236, (Optr)&t_send1, (Optr)PSend18237, (Optr)&t_method_return);
    Method PMethod18234 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18235, 1, PSend18237);
    
    MethodClosure MC_SMB_parsesUntil = new_MethodClosure((Method)PMethod18234, Shell_ReadLine_ReadLine_Class);
=======
    Send PSend18209 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_contents, 0);
    Symbol SMB_parsesUntil_ = new_Symbol(L"parsesUntil:");
    // parsesUntil:. 
    Send PSend18210 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_client, SMB_parsesUntil_, 1, (Optr)PSend18209);
    Array PThreadedCode18208 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18209, (Optr)&t_send1, (Optr)PSend18210, (Optr)&t_method_return);
    Method PMethod18207 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18208, 1, PSend18210);
    
    MethodClosure MC_SMB_parsesUntil = new_MethodClosure((Method)PMethod18207, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_parsesUntil, MC_SMB_parsesUntil);
}


static void init_SMB_acknowledge() {
    Symbol SMB_acknowledge = new_Symbol(L"acknowledge");
<<<<<<< HEAD
    Array PThreadedCode18239 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18238 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18239, 1, self);
    
    MethodClosure MC_SMB_acknowledge = new_MethodClosure((Method)PMethod18238, Shell_ReadLine_ReadLine_Class);
=======
    Array PThreadedCode18212 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18211 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18212, 1, self);
    
    MethodClosure MC_SMB_acknowledge = new_MethodClosure((Method)PMethod18211, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_acknowledge, MC_SMB_acknowledge);
}


static void init_SMB_previousScreen() {
    Symbol SMB_previousScreen = new_Symbol(L"previousScreen");
    Symbol SMB_startOfText = new_Symbol(L"startOfText");
    // startOfText. 
<<<<<<< HEAD
    Send PSend18242 = new_Send((Optr)self, SMB_startOfText, 0);
    Array PThreadedCode18241 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18242, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18240 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18241, 2, PSend18242, self);
    
    MethodClosure MC_SMB_previousScreen = new_MethodClosure((Method)PMethod18240, Shell_ReadLine_ReadLine_Class);
=======
    Send PSend18215 = new_Send((Optr)self, SMB_startOfText, 0);
    Array PThreadedCode18214 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18215, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18213 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18214, 2, PSend18215, self);
    
    MethodClosure MC_SMB_previousScreen = new_MethodClosure((Method)PMethod18213, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_previousScreen, MC_SMB_previousScreen);
}


static void init_SMB_ready() {
    Symbol SMB_ready = new_Symbol(L"ready");
<<<<<<< HEAD
    Assign PAssign18245 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_ready, (Optr)true_Const);
    Symbol SMB_distanceToBottom = new_Symbol(L"distanceToBottom");
    // distanceToBottom. 
    Send PSend18246 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_distanceToBottom, 0);
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend18249 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    Array PThreadedCode18248 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18249, (Optr)&t_block_return);
    Block PBlock18247 = new_Block_with(empty_Array, empty_Array, PThreadedCode18248, 1, PSend18249);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend18250 = new_Send((Optr)PSend18246, SMB_timesRepeat_, 1, (Optr)PBlock18247);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18251 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_lf, 0);
    Array PThreadedCode18244 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign18245, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18246, (Optr)&t_push_closure, (Optr)PBlock18247, (Optr)&t_send1, (Optr)PSend18250, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18251, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18243 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18244, 4, PAssign18245, PSend18250, PSend18251, self);
    
    MethodClosure MC_SMB_ready = new_MethodClosure((Method)PMethod18243, Shell_ReadLine_ReadLine_Class);
=======
    Assign PAssign18218 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_ready, (Optr)true_Const);
    Symbol SMB_distanceToBottom = new_Symbol(L"distanceToBottom");
    // distanceToBottom. 
    Send PSend18219 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_distanceToBottom, 0);
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend18222 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    Array PThreadedCode18221 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18222, (Optr)&t_block_return);
    Block PBlock18220 = new_Block_with(empty_Array, empty_Array, PThreadedCode18221, 1, PSend18222);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend18223 = new_Send((Optr)PSend18219, SMB_timesRepeat_, 1, (Optr)PBlock18220);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18224 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_lf, 0);
    Array PThreadedCode18217 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign18218, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18219, (Optr)&t_push_closure, (Optr)PBlock18220, (Optr)&t_send1, (Optr)PSend18223, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18224, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18216 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18217, 4, PAssign18218, PSend18223, PSend18224, self);
    
    MethodClosure MC_SMB_ready = new_MethodClosure((Method)PMethod18216, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_ready, MC_SMB_ready);
}


static void init_SMB_f11() {
    Symbol SMB_f11 = new_Symbol(L"f11");
<<<<<<< HEAD
    Array PThreadedCode18253 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18252 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18253, 1, self);
    
    MethodClosure MC_SMB_f11 = new_MethodClosure((Method)PMethod18252, Shell_ReadLine_ReadLine_Class);
=======
    Array PThreadedCode18226 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18225 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18226, 1, self);
    
    MethodClosure MC_SMB_f11 = new_MethodClosure((Method)PMethod18225, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f11, MC_SMB_f11);
}


static void init_SMB_endOfText() {
    Symbol SMB_endOfText = new_Symbol(L"endOfText");
    Symbol SMB_lines = new_Symbol(L"lines");
    // lines. 
<<<<<<< HEAD
    Send PSend18256 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_lines, 0);
    Symbol SMB_lastColumns = new_Symbol(L"lastColumns");
    // lastColumns. 
    Send PSend18257 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_lastColumns, 0);
    Symbol SMB_moveToLine_column_ = new_Symbol(L"moveToLine:column:");
    // moveToLine:column:. 
    Send PSend18258 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)PSend18256, (Optr)PSend18257);
    Array PThreadedCode18255 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18256, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18257, (Optr)&t_send2, (Optr)PSend18258, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18254 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18255, 2, PSend18258, self);
    
    MethodClosure MC_SMB_endOfText = new_MethodClosure((Method)PMethod18254, Shell_ReadLine_ReadLine_Class);
=======
    Send PSend18229 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_lines, 0);
    Symbol SMB_lastColumns = new_Symbol(L"lastColumns");
    // lastColumns. 
    Send PSend18230 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_lastColumns, 0);
    Symbol SMB_moveToLine_column_ = new_Symbol(L"moveToLine:column:");
    // moveToLine:column:. 
    Send PSend18231 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)PSend18229, (Optr)PSend18230);
    Array PThreadedCode18228 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18229, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18230, (Optr)&t_send2, (Optr)PSend18231, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18227 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18228, 2, PSend18231, self);
    
    MethodClosure MC_SMB_endOfText = new_MethodClosure((Method)PMethod18227, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_endOfText, MC_SMB_endOfText);
}


static void init_SMB_f19() {
    Symbol SMB_f19 = new_Symbol(L"f19");
<<<<<<< HEAD
    Array PThreadedCode18260 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18259 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18260, 1, self);
    
    MethodClosure MC_SMB_f19 = new_MethodClosure((Method)PMethod18259, Shell_ReadLine_ReadLine_Class);
=======
    Array PThreadedCode18233 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18232 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18233, 1, self);
    
    MethodClosure MC_SMB_f19 = new_MethodClosure((Method)PMethod18232, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f19, MC_SMB_f19);
}


static void init_SMB_f8() {
    Symbol SMB_f8 = new_Symbol(L"f8");
<<<<<<< HEAD
    Array PThreadedCode18262 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18261 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18262, 1, self);
    
    MethodClosure MC_SMB_f8 = new_MethodClosure((Method)PMethod18261, Shell_ReadLine_ReadLine_Class);
=======
    Array PThreadedCode18235 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18234 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18235, 1, self);
    
    MethodClosure MC_SMB_f8 = new_MethodClosure((Method)PMethod18234, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f8, MC_SMB_f8);
}


static void init_SMB_verticalTab() {
    Symbol SMB_verticalTab = new_Symbol(L"verticalTab");
    Symbol SMB_deleteToEndOfLine = new_Symbol(L"deleteToEndOfLine");
    // deleteToEndOfLine. 
<<<<<<< HEAD
    Send PSend18265 = new_Send((Optr)self, SMB_deleteToEndOfLine, 0);
    Array PThreadedCode18264 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18265, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18263 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18264, 2, PSend18265, self);
    
    MethodClosure MC_SMB_verticalTab = new_MethodClosure((Method)PMethod18263, Shell_ReadLine_ReadLine_Class);
=======
    Send PSend18238 = new_Send((Optr)self, SMB_deleteToEndOfLine, 0);
    Array PThreadedCode18237 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18238, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18236 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18237, 2, PSend18238, self);
    
    MethodClosure MC_SMB_verticalTab = new_MethodClosure((Method)PMethod18236, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_verticalTab, MC_SMB_verticalTab);
}


static void init_SMB_select() {
    Symbol SMB_select = new_Symbol(L"select");
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
<<<<<<< HEAD
    Send PSend18268 = new_Send((Optr)self, SMB_end, 0);
    Array PThreadedCode18267 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18268, (Optr)&t_method_return);
    Method PMethod18266 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18267, 1, PSend18268);
    
    MethodClosure MC_SMB_select = new_MethodClosure((Method)PMethod18266, Shell_ReadLine_ReadLine_Class);
=======
    Send PSend18241 = new_Send((Optr)self, SMB_end, 0);
    Array PThreadedCode18240 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18241, (Optr)&t_method_return);
    Method PMethod18239 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18240, 1, PSend18241);
    
    MethodClosure MC_SMB_select = new_MethodClosure((Method)PMethod18239, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_select, MC_SMB_select);
}


static void init_SMB_find() {
    Symbol SMB_find = new_Symbol(L"find");
    Symbol SMB_home = new_Symbol(L"home");
    // home. 
<<<<<<< HEAD
    Send PSend18271 = new_Send((Optr)self, SMB_home, 0);
    Array PThreadedCode18270 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18271, (Optr)&t_method_return);
    Method PMethod18269 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18270, 1, PSend18271);
    
    MethodClosure MC_SMB_find = new_MethodClosure((Method)PMethod18269, Shell_ReadLine_ReadLine_Class);
=======
    Send PSend18244 = new_Send((Optr)self, SMB_home, 0);
    Array PThreadedCode18243 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18244, (Optr)&t_method_return);
    Method PMethod18242 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18243, 1, PSend18244);
    
    MethodClosure MC_SMB_find = new_MethodClosure((Method)PMethod18242, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_find, MC_SMB_find);
}


static void init_SMB_alt_() {
    Symbol SMB_alt_ = new_Symbol(L"alt:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
<<<<<<< HEAD
    Array PArray18273 = new_Array_with(1, (Optr)VAR_character_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18276 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18278 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend18279 = new_Send((Optr)VAR_character_0_0, SMB__equals_, 1, (Optr)PSend18278);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_openLine = new_Symbol(L"openLine");
    // openLine. 
    Send PSend18283 = new_Send((Optr)self, SMB_openLine, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18284 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18283);
    Array PThreadedCode18282 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18283, (Optr)&t_send1, (Optr)PSend18284, (Optr)&t_block_return);
    Block PBlock18281 = new_Block_with(empty_Array, empty_Array, PThreadedCode18282, 1, PSend18284);
    // ifTrue:. 
    Send PSend18280 = new_Send((Optr)PSend18279, SMB_ifTrue_, 1, (Optr)PBlock18281);
    Array PThreadedCode18277 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend18278, (Optr)&t_send1, (Optr)PSend18279, (Optr)&t_send_ifTrue_, (Optr)PSend18280, (Optr)PBlock18281, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18275 = new_Block_with(PArray18276, empty_Array, PThreadedCode18277, 2, PSend18280, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18285 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18275);
    Array PThreadedCode18274 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18275, (Optr)&t_send1, (Optr)PSend18285, (Optr)&t_method_return);
    Method PMethod18272 = new_Method_with(PArray18273, empty_Array, empty_Array, PThreadedCode18274, 1, PSend18285);
    
    MethodClosure MC_SMB_alt_ = new_MethodClosure((Method)PMethod18272, Shell_ReadLine_ReadLine_Class);
=======
    Array PArray18246 = new_Array_with(1, (Optr)VAR_character_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18249 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18251 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend18252 = new_Send((Optr)VAR_character_0_0, SMB__equals_, 1, (Optr)PSend18251);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_openLine = new_Symbol(L"openLine");
    // openLine. 
    Send PSend18256 = new_Send((Optr)self, SMB_openLine, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18257 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18256);
    Array PThreadedCode18255 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18256, (Optr)&t_send1, (Optr)PSend18257, (Optr)&t_block_return);
    Block PBlock18254 = new_Block_with(empty_Array, empty_Array, PThreadedCode18255, 1, PSend18257);
    // ifTrue:. 
    Send PSend18253 = new_Send((Optr)PSend18252, SMB_ifTrue_, 1, (Optr)PBlock18254);
    Array PThreadedCode18250 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend18251, (Optr)&t_send1, (Optr)PSend18252, (Optr)&t_send_ifTrue_, (Optr)PSend18253, (Optr)PBlock18254, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18248 = new_Block_with(PArray18249, empty_Array, PThreadedCode18250, 2, PSend18253, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18258 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18248);
    Array PThreadedCode18247 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18248, (Optr)&t_send1, (Optr)PSend18258, (Optr)&t_method_return);
    Method PMethod18245 = new_Method_with(PArray18246, empty_Array, empty_Array, PThreadedCode18247, 1, PSend18258);
    
    MethodClosure MC_SMB_alt_ = new_MethodClosure((Method)PMethod18245, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_alt_, MC_SMB_alt_);
}


static void init_SMB_backspace() {
    Symbol SMB_backspace = new_Symbol(L"backspace");
    Symbol SMB_deleteRight = new_Symbol(L"deleteRight");
    // deleteRight. 
<<<<<<< HEAD
    Send PSend18288 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_deleteRight, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_deleteCharacter = new_Symbol(L"deleteCharacter");
    // deleteCharacter. 
    Send PSend18292 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_deleteCharacter, 0);
=======
    Send PSend18261 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_deleteRight, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_deleteCharacter = new_Symbol(L"deleteCharacter");
    // deleteCharacter. 
    Send PSend18265 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_deleteCharacter, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    SmallInt int_n1 = new_SmallInt(-1);
    Symbol SMB_moveFailure_ = new_Symbol(L"moveFailure:");
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // moveFailure:. 
<<<<<<< HEAD
    Send PSend18293 = new_Send((Optr)self, SMB_moveFailure_, 1, (Optr)int_n1_Const);
    Symbol SMB_repaint = new_Symbol(L"repaint");
    // repaint. 
    Send PSend18294 = new_Send((Optr)self, SMB_repaint, 0);
    Array PThreadedCode18291 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18292, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend18293, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18294, (Optr)&t_block_return);
    Block PBlock18290 = new_Block_with(empty_Array, empty_Array, PThreadedCode18291, 3, PSend18292, PSend18293, PSend18294);
    // ifTrue:. 
    Send PSend18289 = new_Send((Optr)PSend18288, SMB_ifTrue_, 1, (Optr)PBlock18290);
    Array PThreadedCode18287 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18288, (Optr)&t_send_ifTrue_, (Optr)PSend18289, (Optr)PBlock18290, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18286 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18287, 2, PSend18289, self);
    
    MethodClosure MC_SMB_backspace = new_MethodClosure((Method)PMethod18286, Shell_ReadLine_ReadLine_Class);
=======
    Send PSend18266 = new_Send((Optr)self, SMB_moveFailure_, 1, (Optr)int_n1_Const);
    Symbol SMB_repaint = new_Symbol(L"repaint");
    // repaint. 
    Send PSend18267 = new_Send((Optr)self, SMB_repaint, 0);
    Array PThreadedCode18264 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18265, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend18266, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18267, (Optr)&t_block_return);
    Block PBlock18263 = new_Block_with(empty_Array, empty_Array, PThreadedCode18264, 3, PSend18265, PSend18266, PSend18267);
    // ifTrue:. 
    Send PSend18262 = new_Send((Optr)PSend18261, SMB_ifTrue_, 1, (Optr)PBlock18263);
    Array PThreadedCode18260 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18261, (Optr)&t_send_ifTrue_, (Optr)PSend18262, (Optr)PBlock18263, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18259 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18260, 2, PSend18262, self);
    
    MethodClosure MC_SMB_backspace = new_MethodClosure((Method)PMethod18259, Shell_ReadLine_ReadLine_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Shell_ReadLine_ReadLine_Class, SMB_backspace, MC_SMB_backspace);
}


<<<<<<< HEAD
static void init_SMB_deleteToEndOfLine() {
    Symbol SMB_deleteToEndOfLine = new_Symbol(L"deleteToEndOfLine");
    // deleteToEndOfLine. 
    Send PSend18297 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_deleteToEndOfLine, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_clearToEnd = new_Symbol(L"clearToEnd");
    // clearToEnd. 
    Send PSend18301 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_clearToEnd, 0);
    Array PThreadedCode18300 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18301, (Optr)&t_block_return);
    Block PBlock18299 = new_Block_with(empty_Array, empty_Array, PThreadedCode18300, 1, PSend18301);
    // ifTrue:. 
    Send PSend18298 = new_Send((Optr)PSend18297, SMB_ifTrue_, 1, (Optr)PBlock18299);
    Array PThreadedCode18296 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18297, (Optr)&t_send_ifTrue_, (Optr)PSend18298, (Optr)PBlock18299, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18295 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18296, 2, PSend18298, self);
    
    MethodClosure MC_SMB_deleteToEndOfLine = new_MethodClosure((Method)PMethod18295, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_deleteToEndOfLine, MC_SMB_deleteToEndOfLine);
}


=======
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
static void init_class_SMB_from_to_for_() {
    Symbol SMB_from_to_for_ = new_Symbol(L"from:to:for:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Variable VAR_output_0_1 = new_Variable_named(L"output", 0);
    Variable VAR_client_0_2 = new_Variable_named(L"client", 0);
<<<<<<< HEAD
    Array PArray18303 = new_Array_with(3, (Optr)VAR_input_0_0, (Optr)VAR_output_0_1, (Optr)VAR_client_0_2);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper18305 = new_Super(SMB_basicNew, 0);
    // from:to:for:. 
    Send PSend18306 = new_Send((Optr)PSuper18305, SMB_from_to_for_, 3, (Optr)VAR_input_0_0, (Optr)VAR_output_0_1, (Optr)VAR_client_0_2);
    Array PThreadedCode18304 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18305, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_output_0_1, (Optr)&t_push_variable, (Optr)VAR_client_0_2, (Optr)&t_send3, (Optr)PSend18306, (Optr)&t_method_return);
    Method PMethod18302 = new_Method_with(PArray18303, empty_Array, empty_Array, PThreadedCode18304, 1, PSend18306);
    
    MethodClosure MC_SMB_from_to_for_ = new_MethodClosure((Method)PMethod18302, HEADER(Shell_ReadLine_ReadLine_Class));
=======
    Array PArray18269 = new_Array_with(3, (Optr)VAR_input_0_0, (Optr)VAR_output_0_1, (Optr)VAR_client_0_2);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper18271 = new_Super(SMB_basicNew, 0);
    // from:to:for:. 
    Send PSend18272 = new_Send((Optr)PSuper18271, SMB_from_to_for_, 3, (Optr)VAR_input_0_0, (Optr)VAR_output_0_1, (Optr)VAR_client_0_2);
    Array PThreadedCode18270 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18271, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_output_0_1, (Optr)&t_push_variable, (Optr)VAR_client_0_2, (Optr)&t_send3, (Optr)PSend18272, (Optr)&t_method_return);
    Method PMethod18268 = new_Method_with(PArray18269, empty_Array, empty_Array, PThreadedCode18270, 1, PSend18272);
    
    MethodClosure MC_SMB_from_to_for_ = new_MethodClosure((Method)PMethod18268, HEADER(Shell_ReadLine_ReadLine_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Shell_ReadLine_ReadLine_Class), SMB_from_to_for_, MC_SMB_from_to_for_);
}

void init_Shell_ReadLine_PReadLine_layout() {
    layout_Shell_ReadLine_ReadLine_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Shell_ReadLine_ReadLine_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Shell_ReadLine_ReadLine_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Shell_ReadLine_ReadLine_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Shell_ReadLine_ReadLine_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Shell_ReadLine_ReadLine_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_ReadLine = new_Symbol(L"ReadLine");
    slot_Shell_ReadLine_ReadLine_client = (Optr)new_Slot(0, L"client");
    slot_Shell_ReadLine_ReadLine_output = (Optr)new_Slot(1, L"output");
    slot_Shell_ReadLine_ReadLine_ready = (Optr)new_Slot(2, L"ready");
    slot_Shell_ReadLine_ReadLine_text = (Optr)new_Slot(3, L"text");
    slot_Shell_ReadLine_ReadLine_failure = (Optr)new_Slot(4, L"failure");
    slot_Shell_ReadLine_ReadLine_vterm = (Optr)new_Slot(5, L"vterm");
    layout_Shell_ReadLine_ReadLine = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_Shell_ReadLine_ReadLine)->values[0] = slot_Shell_ReadLine_ReadLine_client; // client 
    ((Array)layout_Shell_ReadLine_ReadLine)->values[1] = slot_Shell_ReadLine_ReadLine_output; // output 
    ((Array)layout_Shell_ReadLine_ReadLine)->values[2] = slot_Shell_ReadLine_ReadLine_ready; // ready 
    ((Array)layout_Shell_ReadLine_ReadLine)->values[3] = slot_Shell_ReadLine_ReadLine_text; // text 
    ((Array)layout_Shell_ReadLine_ReadLine)->values[4] = slot_Shell_ReadLine_ReadLine_failure; // failure 
    ((Array)layout_Shell_ReadLine_ReadLine)->values[5] = slot_Shell_ReadLine_ReadLine_vterm; // vterm 
    Shell_ReadLine_ReadLine_Class = (Class)new_Class(Object_Class, layout_Shell_ReadLine_ReadLine_Class_class);
    Shell_ReadLine_ReadLine_Class->layout = layout_Shell_ReadLine_ReadLine;
    Shell_ReadLine_ReadLine_Class->name = SMB_ReadLine;
    
}

void init_Shell_ReadLine_PReadLine_methods() {
    init_SMB_f9();
    init_SMB_right_();
    init_SMB_f4();
    init_SMB_endOfTransmission();
    init_SMB_up_();
    init_SMB_here();
    init_SMB_home();
    init_SMB_f13();
    init_SMB_f2();
    init_SMB_nextScreen();
    init_SMB_f3();
    init_SMB_deleteToEndOfLine();
    init_SMB_f10();
    init_SMB_end();
    init_SMB_down();
    init_SMB_remove();
    init_SMB_bell();
    init_SMB_delete();
    init_SMB_shiftIn();
    init_SMB_openLine();
    init_SMB_moveFailure_();
    init_SMB_f14();
    init_SMB_f17();
    init_SMB_from_to_for_();
    init_SMB_f12();
    init_SMB_write_();
    init_SMB_f18();
    init_SMB_f5();
    init_SMB_left();
    init_SMB_carriageReturn();
    init_SMB_moveToLine_column_();
    init_SMB_isReady();
    init_SMB_insert();
    init_SMB_f7();
    init_SMB_right();
    init_SMB_startOfText();
    init_SMB_f1();
    init_SMB_f15();
    init_SMB_formfeed();
    init_SMB_enquiry();
    init_SMB_startOfHeading();
    init_SMB_f20();
    init_SMB_repaint();
    init_SMB_f6();
    init_SMB_endOfLine();
    init_SMB_tab();
    init_SMB_shiftOut();
    init_SMB_clear();
    init_SMB_readLine();
    init_SMB_lf();
    init_SMB_repaintAt_();
    init_SMB_f16();
    init_SMB_up();
    init_SMB_parsesUntil();
    init_SMB_acknowledge();
    init_SMB_previousScreen();
    init_SMB_ready();
    init_SMB_f11();
    init_SMB_endOfText();
    init_SMB_f19();
    init_SMB_f8();
    init_SMB_verticalTab();
    init_SMB_select();
    init_SMB_find();
    init_SMB_alt_();
    init_SMB_backspace();
    init_class_SMB_from_to_for_();
    
}