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
    Array PArray22315 = new_Array_with(1, (Optr)VAR_aPath_0_0);
    Assign PAssign22317 = new_Assign((Optr)slot_Plugin_Plugin_path, (Optr)VAR_aPath_0_0);
    Array PThreadedCode22316 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22317, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22314 = new_Method_with(PArray22315, empty_Array, empty_Array, PThreadedCode22316, 2, PAssign22317, self);
    
    MethodClosure MC_SMB_path_ = new_MethodClosure((Method)PMethod22314, Plugin_Plugin_Class);
    store_method(Plugin_Plugin_Class, SMB_path_, MC_SMB_path_);
}


static void init_SMB_identifier() {
    Symbol SMB_identifier = new_Symbol(L"identifier");
    Array PThreadedCode22319 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Plugin_Plugin_identifier, (Optr)&t_method_return);
    Method PMethod22318 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22319, 1, slot_Plugin_Plugin_identifier);
    
    MethodClosure MC_SMB_identifier = new_MethodClosure((Method)PMethod22318, Plugin_Plugin_Class);
    store_method(Plugin_Plugin_Class, SMB_identifier, MC_SMB_identifier);
}


static void init_SMB_identifier_() {
    Symbol SMB_identifier_ = new_Symbol(L"identifier:");
    Variable VAR_anIdentifier_0_0 = new_Variable_named(L"anIdentifier", 0);
    Array PArray22321 = new_Array_with(1, (Optr)VAR_anIdentifier_0_0);
    Assign PAssign22323 = new_Assign((Optr)slot_Plugin_Plugin_identifier, (Optr)VAR_anIdentifier_0_0);
    Array PThreadedCode22322 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22323, (Optr)&t_push_variable, (Optr)VAR_anIdentifier_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22320 = new_Method_with(PArray22321, empty_Array, empty_Array, PThreadedCode22322, 2, PAssign22323, self);
    
    MethodClosure MC_SMB_identifier_ = new_MethodClosure((Method)PMethod22320, Plugin_Plugin_Class);
    store_method(Plugin_Plugin_Class, SMB_identifier_, MC_SMB_identifier_);
}


static void init_SMB_unload() {
    Symbol SMB_unload = new_Symbol(L"unload");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Plugin_minus_Plugin = new_Symbol(L"Plugin.Plugin");
    Annotation PAnnotation22326 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_unload, (Optr)SMB_Plugin_minus_Plugin);
    Array PArray22325 = new_Array_with(1, (Optr)PAnnotation22326);
    Array PThreadedCode22327 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod22324 = new_NativeMethod_with(empty_Array, empty_Array, PArray22325, PThreadedCode22327, 1, self);
    
    MethodClosure MC_SMB_unload = new_MethodClosure((Method)PNativeMethod22324, Plugin_Plugin_Class);
    store_method(Plugin_Plugin_Class, SMB_unload, MC_SMB_unload);
}


static void init_class_SMB_require_at_() {
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Variable VAR_identifier_0_0 = new_Variable_named(L"identifier", 0);
    Variable VAR_aPath_0_1 = new_Variable_named(L"aPath", 0);
    Array PArray22329 = new_Array_with(2, (Optr)VAR_identifier_0_0, (Optr)VAR_aPath_0_1);
    Variable VAR_newPlugin_0_2 = new_Variable_named(L"newPlugin", 0);
    Array PArray22330 = new_Array_with(1, (Optr)VAR_newPlugin_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22333 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_plugin_2_0 = new_Variable_named(L"plugin", 2);
    Array PArray22336 = new_Array_with(1, (Optr)VAR_plugin_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22338 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_plugin_2_0);
    Array PThreadedCode22337 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_plugin_2_0, (Optr)&t_send1, (Optr)PSend22338, (Optr)&t_method_return);
    Block PBlock22335 = new_Block_with(PArray22336, empty_Array, PThreadedCode22337, 1, PSend22338);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    // at:ifPresent:. 
    Send PSend22339 = new_Send((Optr)slot_Plugin_Plugin_Class_class_plugins, SMB_at_ifPresent_, 2, (Optr)VAR_identifier_0_0, (Optr)PBlock22335);
    Symbol SMB_load_ = new_Symbol(L"load:");
    // load:. 
    Send PSend22341 = new_Send((Optr)self, SMB_load_, 1, (Optr)VAR_aPath_0_1);
    Assign PAssign22340 = new_Assign((Optr)VAR_newPlugin_0_2, (Optr)PSend22341);
    Symbol SMB_path_ = new_Symbol(L"path:");
    // path:. 
    Send PSend22342 = new_Send((Optr)VAR_newPlugin_0_2, SMB_path_, 1, (Optr)VAR_aPath_0_1);
    Symbol SMB_identifier_ = new_Symbol(L"identifier:");
    // identifier:. 
    Send PSend22343 = new_Send((Optr)VAR_newPlugin_0_2, SMB_identifier_, 1, (Optr)VAR_identifier_0_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend22344 = new_Send((Optr)slot_Plugin_Plugin_Class_class_plugins, SMB_at_put_, 2, (Optr)VAR_identifier_0_0, (Optr)VAR_newPlugin_0_2);
    Array PThreadedCode22334 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_slot, (Optr)slot_Plugin_Plugin_Class_class_plugins, (Optr)&t_push_variable, (Optr)VAR_identifier_0_0, (Optr)&t_push_closure, (Optr)PBlock22335, (Optr)&t_send2, (Optr)PSend22339, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22340, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPath_0_1, (Optr)&t_send1, (Optr)PSend22341, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newPlugin_0_2, (Optr)&t_push_variable, (Optr)VAR_aPath_0_1, (Optr)&t_send1, (Optr)PSend22342, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newPlugin_0_2, (Optr)&t_push_variable, (Optr)VAR_identifier_0_0, (Optr)&t_send1, (Optr)PSend22343, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Plugin_Plugin_Class_class_plugins, (Optr)&t_push_variable, (Optr)VAR_identifier_0_0, (Optr)&t_push_variable, (Optr)VAR_newPlugin_0_2, (Optr)&t_send2, (Optr)PSend22344, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newPlugin_0_2, (Optr)&t_method_return);
    Block PBlock22332 = new_Block_with(PArray22333, empty_Array, PThreadedCode22334, 6, PSend22339, PAssign22340, PSend22342, PSend22343, PSend22344, VAR_newPlugin_0_2);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22345 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22332);
    Array PThreadedCode22331 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22332, (Optr)&t_send1, (Optr)PSend22345, (Optr)&t_method_return);
    Method PMethod22328 = new_Method_with(PArray22329, PArray22330, empty_Array, PThreadedCode22331, 1, PSend22345);
    
    MethodClosure MC_SMB_require_at_ = new_MethodClosure((Method)PMethod22328, HEADER(Plugin_Plugin_Class));
    store_method(HEADER(Plugin_Plugin_Class), SMB_require_at_, MC_SMB_require_at_);
}


static void init_class_SMB_load_() {
    Symbol SMB_load_ = new_Symbol(L"load:");
    Variable VAR_aPath_0_0 = new_Variable_named(L"aPath", 0);
    Array PArray22347 = new_Array_with(1, (Optr)VAR_aPath_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Plugin_minus_Plugin = new_Symbol(L"Plugin.Plugin");
    Annotation PAnnotation22349 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_load_, (Optr)SMB_Plugin_minus_Plugin);
    Array PArray22348 = new_Array_with(1, (Optr)PAnnotation22349);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend22351 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode22350 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22351, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod22346 = new_NativeMethod_with(PArray22347, empty_Array, PArray22348, PThreadedCode22350, 2, PSend22351, self);
    
    MethodClosure MC_SMB_load_ = new_MethodClosure((Method)PNativeMethod22346, HEADER(Plugin_Plugin_Class));
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