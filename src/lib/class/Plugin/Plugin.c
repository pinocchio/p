#include <lib/class/Plugin/Plugin.h>


Optr slot_Plugin_Plugin_Class_class_plugins;
Optr layout_Plugin_Plugin_Class_class;
Optr slot_Plugin_Plugin_path;
Optr slot_Plugin_Plugin_identifier;
Optr slot_Plugin_Plugin_natives;
Optr layout_Plugin_Plugin;


static void init_SMB_path_() {
    Symbol SMB_path_ = new_Symbol(L"path:");
    Variable VAR_aPath_0_0 = new_Variable_named(L"aPath", 0);
    Array PArray21902 = new_Array_with(1, (Optr)VAR_aPath_0_0);
    Assign PAssign21904 = new_Assign((Optr)slot_Plugin_Plugin_path, (Optr)VAR_aPath_0_0);
    Array PThreadedCode21903 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21904, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21901 = new_Method_with(PArray21902, empty_Array, empty_Array, PThreadedCode21903, 2, PAssign21904, self);
    
    MethodClosure MC_SMB_path_ = new_MethodClosure((Method)PMethod21901, Plugin_Plugin_Class);
    store_method(Plugin_Plugin_Class, SMB_path_, MC_SMB_path_);
}


static void init_SMB_identifier() {
    Symbol SMB_identifier = new_Symbol(L"identifier");
    Array PThreadedCode21906 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Plugin_Plugin_identifier, (Optr)&t_method_return);
    Method PMethod21905 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21906, 1, slot_Plugin_Plugin_identifier);
    
    MethodClosure MC_SMB_identifier = new_MethodClosure((Method)PMethod21905, Plugin_Plugin_Class);
    store_method(Plugin_Plugin_Class, SMB_identifier, MC_SMB_identifier);
}


static void init_SMB_identifier_() {
    Symbol SMB_identifier_ = new_Symbol(L"identifier:");
    Variable VAR_anIdentifier_0_0 = new_Variable_named(L"anIdentifier", 0);
    Array PArray21908 = new_Array_with(1, (Optr)VAR_anIdentifier_0_0);
    Assign PAssign21910 = new_Assign((Optr)slot_Plugin_Plugin_identifier, (Optr)VAR_anIdentifier_0_0);
    Array PThreadedCode21909 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21910, (Optr)&t_push_variable, (Optr)VAR_anIdentifier_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21907 = new_Method_with(PArray21908, empty_Array, empty_Array, PThreadedCode21909, 2, PAssign21910, self);
    
    MethodClosure MC_SMB_identifier_ = new_MethodClosure((Method)PMethod21907, Plugin_Plugin_Class);
    store_method(Plugin_Plugin_Class, SMB_identifier_, MC_SMB_identifier_);
}


static void init_SMB_unload() {
    Symbol SMB_unload = new_Symbol(L"unload");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Plugin_minus_Plugin = new_Symbol(L"Plugin.Plugin");
    Annotation PAnnotation21913 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_unload, (Optr)SMB_Plugin_minus_Plugin);
    Array PArray21912 = new_Array_with(1, (Optr)PAnnotation21913);
    Array PThreadedCode21914 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod21911 = new_NativeMethod_with(empty_Array, empty_Array, PArray21912, PThreadedCode21914, 1, self);
    
    MethodClosure MC_SMB_unload = new_MethodClosure((Method)PNativeMethod21911, Plugin_Plugin_Class);
    store_method(Plugin_Plugin_Class, SMB_unload, MC_SMB_unload);
}


static void init_class_SMB_require_at_() {
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Variable VAR_identifier_0_0 = new_Variable_named(L"identifier", 0);
    Variable VAR_aPath_0_1 = new_Variable_named(L"aPath", 0);
    Array PArray21916 = new_Array_with(2, (Optr)VAR_identifier_0_0, (Optr)VAR_aPath_0_1);
    Variable VAR_newPlugin_0_2 = new_Variable_named(L"newPlugin", 0);
    Array PArray21917 = new_Array_with(1, (Optr)VAR_newPlugin_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21920 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_plugin_2_0 = new_Variable_named(L"plugin", 2);
    Array PArray21923 = new_Array_with(1, (Optr)VAR_plugin_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21925 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_plugin_2_0);
    Array PThreadedCode21924 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_plugin_2_0, (Optr)&t_send1, (Optr)PSend21925, (Optr)&t_method_return);
    Block PBlock21922 = new_Block_with(PArray21923, empty_Array, PThreadedCode21924, 1, PSend21925);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    // at:ifPresent:. 
    Send PSend21926 = new_Send((Optr)slot_Plugin_Plugin_Class_class_plugins, SMB_at_ifPresent_, 2, (Optr)VAR_identifier_0_0, (Optr)PBlock21922);
    Symbol SMB_load_ = new_Symbol(L"load:");
    // load:. 
    Send PSend21928 = new_Send((Optr)self, SMB_load_, 1, (Optr)VAR_aPath_0_1);
    Assign PAssign21927 = new_Assign((Optr)VAR_newPlugin_0_2, (Optr)PSend21928);
    Symbol SMB_path_ = new_Symbol(L"path:");
    // path:. 
    Send PSend21929 = new_Send((Optr)VAR_newPlugin_0_2, SMB_path_, 1, (Optr)VAR_aPath_0_1);
    Symbol SMB_identifier_ = new_Symbol(L"identifier:");
    // identifier:. 
    Send PSend21930 = new_Send((Optr)VAR_newPlugin_0_2, SMB_identifier_, 1, (Optr)VAR_identifier_0_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend21931 = new_Send((Optr)slot_Plugin_Plugin_Class_class_plugins, SMB_at_put_, 2, (Optr)VAR_identifier_0_0, (Optr)VAR_newPlugin_0_2);
    Array PThreadedCode21921 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_slot, (Optr)slot_Plugin_Plugin_Class_class_plugins, (Optr)&t_push_variable, (Optr)VAR_identifier_0_0, (Optr)&t_push_closure, (Optr)PBlock21922, (Optr)&t_send2, (Optr)PSend21926, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21927, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPath_0_1, (Optr)&t_send1, (Optr)PSend21928, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newPlugin_0_2, (Optr)&t_push_variable, (Optr)VAR_aPath_0_1, (Optr)&t_send1, (Optr)PSend21929, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newPlugin_0_2, (Optr)&t_push_variable, (Optr)VAR_identifier_0_0, (Optr)&t_send1, (Optr)PSend21930, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Plugin_Plugin_Class_class_plugins, (Optr)&t_push_variable, (Optr)VAR_identifier_0_0, (Optr)&t_push_variable, (Optr)VAR_newPlugin_0_2, (Optr)&t_send2, (Optr)PSend21931, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newPlugin_0_2, (Optr)&t_method_return);
    Block PBlock21919 = new_Block_with(PArray21920, empty_Array, PThreadedCode21921, 6, PSend21926, PAssign21927, PSend21929, PSend21930, PSend21931, VAR_newPlugin_0_2);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21932 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21919);
    Array PThreadedCode21918 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21919, (Optr)&t_send1, (Optr)PSend21932, (Optr)&t_method_return);
    Method PMethod21915 = new_Method_with(PArray21916, PArray21917, empty_Array, PThreadedCode21918, 1, PSend21932);
    
    MethodClosure MC_SMB_require_at_ = new_MethodClosure((Method)PMethod21915, HEADER(Plugin_Plugin_Class));
    store_method(HEADER(Plugin_Plugin_Class), SMB_require_at_, MC_SMB_require_at_);
}


static void init_class_SMB_load_() {
    Symbol SMB_load_ = new_Symbol(L"load:");
    Variable VAR_aPath_0_0 = new_Variable_named(L"aPath", 0);
    Array PArray21934 = new_Array_with(1, (Optr)VAR_aPath_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Plugin_minus_Plugin = new_Symbol(L"Plugin.Plugin");
    Annotation PAnnotation21936 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_load_, (Optr)SMB_Plugin_minus_Plugin);
    Array PArray21935 = new_Array_with(1, (Optr)PAnnotation21936);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend21938 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode21937 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21938, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod21933 = new_NativeMethod_with(PArray21934, empty_Array, PArray21935, PThreadedCode21937, 2, PSend21938, self);
    
    MethodClosure MC_SMB_load_ = new_MethodClosure((Method)PNativeMethod21933, HEADER(Plugin_Plugin_Class));
    store_method(HEADER(Plugin_Plugin_Class), SMB_load_, MC_SMB_load_);
}

void init_Plugin_PPlugin_layout() {
    slot_Plugin_Plugin_Class_class_plugins = (Optr)new_Slot(5, L"plugins");
    layout_Plugin_Plugin_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_Plugin_Plugin_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Plugin_Plugin_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Plugin_Plugin_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Plugin_Plugin_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Plugin_Plugin_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_Plugin_Plugin_Class_class)->values[5] = slot_Plugin_Plugin_Class_class_plugins; // plugins 
    
    Symbol  SMB_Plugin = new_Symbol(L"Plugin");
    slot_Plugin_Plugin_path = (Optr)new_Slot(0, L"path");
    slot_Plugin_Plugin_identifier = (Optr)new_Slot(1, L"identifier");
    slot_Plugin_Plugin_natives = (Optr)new_Slot(2, L"natives");
    layout_Plugin_Plugin = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Plugin_Plugin)->values[0] = slot_Plugin_Plugin_path; // path 
    ((Array)layout_Plugin_Plugin)->values[1] = slot_Plugin_Plugin_identifier; // identifier 
    ((Array)layout_Plugin_Plugin)->values[2] = slot_Plugin_Plugin_natives; // natives 
    Plugin_Plugin_Class = (Class)new_Class(Object_Class, layout_Plugin_Plugin_Class_class);
    Plugin_Plugin_Class->layout = layout_Plugin_Plugin;
    Plugin_Plugin_Class->name = SMB_Plugin;
    
}

void init_Plugin_PPlugin_methods() {
    init_SMB_path_();
    init_SMB_identifier();
    init_SMB_identifier_();
    init_SMB_unload();
    init_class_SMB_require_at_();
    init_class_SMB_load_();
    
}