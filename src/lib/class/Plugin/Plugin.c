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
<<<<<<< HEAD
    Array PArray22272 = new_Array_with(1, (Optr)VAR_aPath_0_0);
    Assign PAssign22274 = new_Assign((Optr)slot_Plugin_Plugin_path, (Optr)VAR_aPath_0_0);
    Array PThreadedCode22273 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22274, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22271 = new_Method_with(PArray22272, empty_Array, empty_Array, PThreadedCode22273, 2, PAssign22274, self);
    
    MethodClosure MC_SMB_path_ = new_MethodClosure((Method)PMethod22271, Plugin_Plugin_Class);
=======
    Array PArray22089 = new_Array_with(1, (Optr)VAR_aPath_0_0);
    Assign PAssign22091 = new_Assign((Optr)slot_Plugin_Plugin_path, (Optr)VAR_aPath_0_0);
    Array PThreadedCode22090 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22091, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22088 = new_Method_with(PArray22089, empty_Array, empty_Array, PThreadedCode22090, 2, PAssign22091, self);
    
    MethodClosure MC_SMB_path_ = new_MethodClosure((Method)PMethod22088, Plugin_Plugin_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Plugin_Plugin_Class, SMB_path_, MC_SMB_path_);
}


static void init_SMB_identifier() {
    Symbol SMB_identifier = new_Symbol(L"identifier");
<<<<<<< HEAD
    Array PThreadedCode22276 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Plugin_Plugin_identifier, (Optr)&t_method_return);
    Method PMethod22275 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22276, 1, slot_Plugin_Plugin_identifier);
    
    MethodClosure MC_SMB_identifier = new_MethodClosure((Method)PMethod22275, Plugin_Plugin_Class);
=======
    Array PThreadedCode22093 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Plugin_Plugin_identifier, (Optr)&t_method_return);
    Method PMethod22092 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22093, 1, slot_Plugin_Plugin_identifier);
    
    MethodClosure MC_SMB_identifier = new_MethodClosure((Method)PMethod22092, Plugin_Plugin_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Plugin_Plugin_Class, SMB_identifier, MC_SMB_identifier);
}


static void init_SMB_identifier_() {
    Symbol SMB_identifier_ = new_Symbol(L"identifier:");
    Variable VAR_anIdentifier_0_0 = new_Variable_named(L"anIdentifier", 0);
<<<<<<< HEAD
    Array PArray22278 = new_Array_with(1, (Optr)VAR_anIdentifier_0_0);
    Assign PAssign22280 = new_Assign((Optr)slot_Plugin_Plugin_identifier, (Optr)VAR_anIdentifier_0_0);
    Array PThreadedCode22279 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22280, (Optr)&t_push_variable, (Optr)VAR_anIdentifier_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22277 = new_Method_with(PArray22278, empty_Array, empty_Array, PThreadedCode22279, 2, PAssign22280, self);
    
    MethodClosure MC_SMB_identifier_ = new_MethodClosure((Method)PMethod22277, Plugin_Plugin_Class);
=======
    Array PArray22095 = new_Array_with(1, (Optr)VAR_anIdentifier_0_0);
    Assign PAssign22097 = new_Assign((Optr)slot_Plugin_Plugin_identifier, (Optr)VAR_anIdentifier_0_0);
    Array PThreadedCode22096 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22097, (Optr)&t_push_variable, (Optr)VAR_anIdentifier_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22094 = new_Method_with(PArray22095, empty_Array, empty_Array, PThreadedCode22096, 2, PAssign22097, self);
    
    MethodClosure MC_SMB_identifier_ = new_MethodClosure((Method)PMethod22094, Plugin_Plugin_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Plugin_Plugin_Class, SMB_identifier_, MC_SMB_identifier_);
}


static void init_SMB_unload() {
    Symbol SMB_unload = new_Symbol(L"unload");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Plugin_minus_Plugin = new_Symbol(L"Plugin.Plugin");
<<<<<<< HEAD
    Annotation PAnnotation22283 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_unload, (Optr)SMB_Plugin_minus_Plugin);
    Array PArray22282 = new_Array_with(1, (Optr)PAnnotation22283);
    Array PThreadedCode22284 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod22281 = new_NativeMethod_with(empty_Array, empty_Array, PArray22282, PThreadedCode22284, 1, self);
    
    MethodClosure MC_SMB_unload = new_MethodClosure((Method)PNativeMethod22281, Plugin_Plugin_Class);
=======
    Annotation PAnnotation22100 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_unload, (Optr)SMB_Plugin_minus_Plugin);
    Array PArray22099 = new_Array_with(1, (Optr)PAnnotation22100);
    Array PThreadedCode22101 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod22098 = new_NativeMethod_with(empty_Array, empty_Array, PArray22099, PThreadedCode22101, 1, self);
    
    MethodClosure MC_SMB_unload = new_MethodClosure((Method)PNativeMethod22098, Plugin_Plugin_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Plugin_Plugin_Class, SMB_unload, MC_SMB_unload);
}


static void init_class_SMB_require_at_() {
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Variable VAR_identifier_0_0 = new_Variable_named(L"identifier", 0);
    Variable VAR_aPath_0_1 = new_Variable_named(L"aPath", 0);
<<<<<<< HEAD
    Array PArray22286 = new_Array_with(2, (Optr)VAR_identifier_0_0, (Optr)VAR_aPath_0_1);
    Variable VAR_newPlugin_0_2 = new_Variable_named(L"newPlugin", 0);
    Array PArray22287 = new_Array_with(1, (Optr)VAR_newPlugin_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22290 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_plugin_2_0 = new_Variable_named(L"plugin", 2);
    Array PArray22293 = new_Array_with(1, (Optr)VAR_plugin_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22295 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_plugin_2_0);
    Array PThreadedCode22294 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_plugin_2_0, (Optr)&t_send1, (Optr)PSend22295, (Optr)&t_method_return);
    Block PBlock22292 = new_Block_with(PArray22293, empty_Array, PThreadedCode22294, 1, PSend22295);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    // at:ifPresent:. 
    Send PSend22296 = new_Send((Optr)slot_Plugin_Plugin_Class_class_plugins, SMB_at_ifPresent_, 2, (Optr)VAR_identifier_0_0, (Optr)PBlock22292);
    Symbol SMB_load_ = new_Symbol(L"load:");
    // load:. 
    Send PSend22298 = new_Send((Optr)self, SMB_load_, 1, (Optr)VAR_aPath_0_1);
    Assign PAssign22297 = new_Assign((Optr)VAR_newPlugin_0_2, (Optr)PSend22298);
    Symbol SMB_path_ = new_Symbol(L"path:");
    // path:. 
    Send PSend22299 = new_Send((Optr)VAR_newPlugin_0_2, SMB_path_, 1, (Optr)VAR_aPath_0_1);
    Symbol SMB_identifier_ = new_Symbol(L"identifier:");
    // identifier:. 
    Send PSend22300 = new_Send((Optr)VAR_newPlugin_0_2, SMB_identifier_, 1, (Optr)VAR_identifier_0_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend22301 = new_Send((Optr)slot_Plugin_Plugin_Class_class_plugins, SMB_at_put_, 2, (Optr)VAR_identifier_0_0, (Optr)VAR_newPlugin_0_2);
    Array PThreadedCode22291 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_slot, (Optr)slot_Plugin_Plugin_Class_class_plugins, (Optr)&t_push_variable, (Optr)VAR_identifier_0_0, (Optr)&t_push_closure, (Optr)PBlock22292, (Optr)&t_send2, (Optr)PSend22296, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22297, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPath_0_1, (Optr)&t_send1, (Optr)PSend22298, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newPlugin_0_2, (Optr)&t_push_variable, (Optr)VAR_aPath_0_1, (Optr)&t_send1, (Optr)PSend22299, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newPlugin_0_2, (Optr)&t_push_variable, (Optr)VAR_identifier_0_0, (Optr)&t_send1, (Optr)PSend22300, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Plugin_Plugin_Class_class_plugins, (Optr)&t_push_variable, (Optr)VAR_identifier_0_0, (Optr)&t_push_variable, (Optr)VAR_newPlugin_0_2, (Optr)&t_send2, (Optr)PSend22301, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newPlugin_0_2, (Optr)&t_method_return);
    Block PBlock22289 = new_Block_with(PArray22290, empty_Array, PThreadedCode22291, 6, PSend22296, PAssign22297, PSend22299, PSend22300, PSend22301, VAR_newPlugin_0_2);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22302 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22289);
    Array PThreadedCode22288 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22289, (Optr)&t_send1, (Optr)PSend22302, (Optr)&t_method_return);
    Method PMethod22285 = new_Method_with(PArray22286, PArray22287, empty_Array, PThreadedCode22288, 1, PSend22302);
    
    MethodClosure MC_SMB_require_at_ = new_MethodClosure((Method)PMethod22285, HEADER(Plugin_Plugin_Class));
=======
    Array PArray22103 = new_Array_with(2, (Optr)VAR_identifier_0_0, (Optr)VAR_aPath_0_1);
    Variable VAR_newPlugin_0_2 = new_Variable_named(L"newPlugin", 0);
    Array PArray22104 = new_Array_with(1, (Optr)VAR_newPlugin_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22107 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_plugin_2_0 = new_Variable_named(L"plugin", 2);
    Array PArray22110 = new_Array_with(1, (Optr)VAR_plugin_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22112 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_plugin_2_0);
    Array PThreadedCode22111 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_plugin_2_0, (Optr)&t_send1, (Optr)PSend22112, (Optr)&t_method_return);
    Block PBlock22109 = new_Block_with(PArray22110, empty_Array, PThreadedCode22111, 1, PSend22112);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    // at:ifPresent:. 
    Send PSend22113 = new_Send((Optr)slot_Plugin_Plugin_Class_class_plugins, SMB_at_ifPresent_, 2, (Optr)VAR_identifier_0_0, (Optr)PBlock22109);
    Symbol SMB_load_ = new_Symbol(L"load:");
    // load:. 
    Send PSend22115 = new_Send((Optr)self, SMB_load_, 1, (Optr)VAR_aPath_0_1);
    Assign PAssign22114 = new_Assign((Optr)VAR_newPlugin_0_2, (Optr)PSend22115);
    Symbol SMB_path_ = new_Symbol(L"path:");
    // path:. 
    Send PSend22116 = new_Send((Optr)VAR_newPlugin_0_2, SMB_path_, 1, (Optr)VAR_aPath_0_1);
    Symbol SMB_identifier_ = new_Symbol(L"identifier:");
    // identifier:. 
    Send PSend22117 = new_Send((Optr)VAR_newPlugin_0_2, SMB_identifier_, 1, (Optr)VAR_identifier_0_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend22118 = new_Send((Optr)slot_Plugin_Plugin_Class_class_plugins, SMB_at_put_, 2, (Optr)VAR_identifier_0_0, (Optr)VAR_newPlugin_0_2);
    Array PThreadedCode22108 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_slot, (Optr)slot_Plugin_Plugin_Class_class_plugins, (Optr)&t_push_variable, (Optr)VAR_identifier_0_0, (Optr)&t_push_closure, (Optr)PBlock22109, (Optr)&t_send2, (Optr)PSend22113, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22114, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPath_0_1, (Optr)&t_send1, (Optr)PSend22115, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newPlugin_0_2, (Optr)&t_push_variable, (Optr)VAR_aPath_0_1, (Optr)&t_send1, (Optr)PSend22116, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newPlugin_0_2, (Optr)&t_push_variable, (Optr)VAR_identifier_0_0, (Optr)&t_send1, (Optr)PSend22117, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Plugin_Plugin_Class_class_plugins, (Optr)&t_push_variable, (Optr)VAR_identifier_0_0, (Optr)&t_push_variable, (Optr)VAR_newPlugin_0_2, (Optr)&t_send2, (Optr)PSend22118, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newPlugin_0_2, (Optr)&t_method_return);
    Block PBlock22106 = new_Block_with(PArray22107, empty_Array, PThreadedCode22108, 6, PSend22113, PAssign22114, PSend22116, PSend22117, PSend22118, VAR_newPlugin_0_2);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22119 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22106);
    Array PThreadedCode22105 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22106, (Optr)&t_send1, (Optr)PSend22119, (Optr)&t_method_return);
    Method PMethod22102 = new_Method_with(PArray22103, PArray22104, empty_Array, PThreadedCode22105, 1, PSend22119);
    
    MethodClosure MC_SMB_require_at_ = new_MethodClosure((Method)PMethod22102, HEADER(Plugin_Plugin_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Plugin_Plugin_Class), SMB_require_at_, MC_SMB_require_at_);
}


static void init_class_SMB_load_() {
    Symbol SMB_load_ = new_Symbol(L"load:");
    Variable VAR_aPath_0_0 = new_Variable_named(L"aPath", 0);
<<<<<<< HEAD
    Array PArray22304 = new_Array_with(1, (Optr)VAR_aPath_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Plugin_minus_Plugin = new_Symbol(L"Plugin.Plugin");
    Annotation PAnnotation22306 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_load_, (Optr)SMB_Plugin_minus_Plugin);
    Array PArray22305 = new_Array_with(1, (Optr)PAnnotation22306);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend22308 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode22307 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22308, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod22303 = new_NativeMethod_with(PArray22304, empty_Array, PArray22305, PThreadedCode22307, 2, PSend22308, self);
    
    MethodClosure MC_SMB_load_ = new_MethodClosure((Method)PNativeMethod22303, HEADER(Plugin_Plugin_Class));
=======
    Array PArray22121 = new_Array_with(1, (Optr)VAR_aPath_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Plugin_minus_Plugin = new_Symbol(L"Plugin.Plugin");
    Annotation PAnnotation22123 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_load_, (Optr)SMB_Plugin_minus_Plugin);
    Array PArray22122 = new_Array_with(1, (Optr)PAnnotation22123);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend22125 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode22124 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22125, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod22120 = new_NativeMethod_with(PArray22121, empty_Array, PArray22122, PThreadedCode22124, 2, PSend22125, self);
    
    MethodClosure MC_SMB_load_ = new_MethodClosure((Method)PNativeMethod22120, HEADER(Plugin_Plugin_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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