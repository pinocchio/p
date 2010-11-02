#include <lib/class/Kernel/Class/Behavior.h>


Optr layout_Kernel_Class_Behavior_Class_class;
Optr slot_Kernel_Class_Behavior_layout;
Optr slot_Kernel_Class_Behavior_superclass;
Optr slot_Kernel_Class_Behavior_methods;
Optr layout_Kernel_Class_Behavior;


static void init_SMB_layout_() {
    Symbol SMB_layout_ = new_Symbol(L"layout:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray2669 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign2671 = new_Assign((Optr)slot_Kernel_Class_Behavior_layout, (Optr)VAR_anObject_0_0);
    Array PThreadedCode2670 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign2671, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod2668 = new_Method_with(PArray2669, empty_Array, empty_Array, PThreadedCode2670, 2, PAssign2671, self);
    
    MethodClosure MC_SMB_layout_ = new_MethodClosure((Method)PMethod2668, behavior);
    store_method(behavior, SMB_layout_, MC_SMB_layout_);
}


static void init_SMB_allSelectors() {
    Symbol SMB_allSelectors = new_Symbol(L"allSelectors");
    Symbol SMB_allSelectorsBelow_ = new_Symbol(L"allSelectorsBelow:");
    // allSelectorsBelow:. 
    Send PSend2674 = new_Send((Optr)self, SMB_allSelectorsBelow_, 1, (Optr)nil_Const);
    Array PThreadedCode2673 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend2674, (Optr)&t_method_return);
    Method PMethod2672 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2673, 1, PSend2674);
    
    MethodClosure MC_SMB_allSelectors = new_MethodClosure((Method)PMethod2672, behavior);
    store_method(behavior, SMB_allSelectors, MC_SMB_allSelectors);
}


static void init_SMB_canUnderstand_() {
    Symbol SMB_canUnderstand_ = new_Symbol(L"canUnderstand:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray2676 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2679 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_includesSelector_ = new_Symbol(L"includesSelector:");
    // includesSelector:. 
    Send PSend2681 = new_Send((Optr)self, SMB_includesSelector_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend2685 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode2684 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend2685, (Optr)&t_block_return);
    Block PBlock2683 = new_Block_with(empty_Array, empty_Array, PThreadedCode2684, 1, PSend2685);
    // ifTrue:. 
    Send PSend2682 = new_Send((Optr)PSend2681, SMB_ifTrue_, 1, (Optr)PBlock2683);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend2686 = new_Send((Optr)slot_Kernel_Class_Behavior_superclass, SMB__pequals_, 1, (Optr)nil_Const);
    // escape:. 
    Send PSend2690 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode2689 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend2690, (Optr)&t_block_return);
    Block PBlock2688 = new_Block_with(empty_Array, empty_Array, PThreadedCode2689, 1, PSend2690);
    // ifTrue:. 
    Send PSend2687 = new_Send((Optr)PSend2686, SMB_ifTrue_, 1, (Optr)PBlock2688);
    // canUnderstand:. 
    Send PSend2691 = new_Send((Optr)slot_Kernel_Class_Behavior_superclass, SMB_canUnderstand_, 1, (Optr)VAR_selector_0_0);
    Array PThreadedCode2680 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend2681, (Optr)&t_send_ifTrue_, (Optr)PSend2682, (Optr)PBlock2683, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Behavior_superclass, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend2686, (Optr)&t_send_ifTrue_, (Optr)PSend2687, (Optr)PBlock2688, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Behavior_superclass, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend2691, (Optr)&t_method_return);
    Block PBlock2678 = new_Block_with(PArray2679, empty_Array, PThreadedCode2680, 3, PSend2682, PSend2687, PSend2691);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2692 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2678);
    Array PThreadedCode2677 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2678, (Optr)&t_send1, (Optr)PSend2692, (Optr)&t_method_return);
    Method PMethod2675 = new_Method_with(PArray2676, empty_Array, empty_Array, PThreadedCode2677, 1, PSend2692);
    
    MethodClosure MC_SMB_canUnderstand_ = new_MethodClosure((Method)PMethod2675, behavior);
    store_method(behavior, SMB_canUnderstand_, MC_SMB_canUnderstand_);
}


static void init_SMB_define_as_() {
    Symbol SMB_define_as_ = new_Symbol(L"define:as:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Variable VAR_method_0_1 = new_Variable_named(L"method", 0);
    Array PArray2694 = new_Array_with(2, (Optr)VAR_selector_0_0, (Optr)VAR_method_0_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend2696 = new_Send((Optr)slot_Kernel_Class_Behavior_methods, SMB_at_put_, 2, (Optr)VAR_selector_0_0, (Optr)VAR_method_0_1);
    Array PThreadedCode2695 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Behavior_methods, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push_variable, (Optr)VAR_method_0_1, (Optr)&t_send2, (Optr)PSend2696, (Optr)&t_method_return);
    Method PMethod2693 = new_Method_with(PArray2694, empty_Array, empty_Array, PThreadedCode2695, 1, PSend2696);
    
    MethodClosure MC_SMB_define_as_ = new_MethodClosure((Method)PMethod2693, behavior);
    store_method(behavior, SMB_define_as_, MC_SMB_define_as_);
}


static void init_SMB_parentSlots() {
    Symbol SMB_parentSlots = new_Symbol(L"parentSlots");
    Variable VAR_instVars_0_0 = new_Variable_named(L"instVars", 0);
    Array PArray2698 = new_Array_with(1, (Optr)VAR_instVars_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend2701 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign2700 = new_Assign((Optr)VAR_instVars_0_0, (Optr)PSend2701);
    Symbol SMB_hasSuperclass = new_Symbol(L"hasSuperclass");
    // hasSuperclass. 
    Send PSend2702 = new_Send((Optr)self, SMB_hasSuperclass, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_layout = new_Symbol(L"layout");
    // layout. 
    Send PSend2706 = new_Send((Optr)slot_Kernel_Class_Behavior_superclass, SMB_layout, 0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend2707 = new_Send((Optr)VAR_instVars_0_0, SMB_addAll_, 1, (Optr)PSend2706);
    Array PThreadedCode2705 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_instVars_0_0, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Behavior_superclass, (Optr)&t_send0, (Optr)PSend2706, (Optr)&t_send1, (Optr)PSend2707, (Optr)&t_block_return);
    Block PBlock2704 = new_Block_with(empty_Array, empty_Array, PThreadedCode2705, 1, PSend2707);
    Array PThreadedCode2709 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock2708 = new_Block_with(empty_Array, empty_Array, PThreadedCode2709, 0);
    // ifTrue:ifFalse:. 
    Send PSend2703 = new_Send((Optr)PSend2702, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock2704, (Optr)PBlock2708);
    Array PThreadedCode2699 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign2700, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend2701, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2702, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend2703, (Optr)PBlock2704, (Optr)PBlock2708, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_instVars_0_0, (Optr)&t_method_return);
    Method PMethod2697 = new_Method_with(empty_Array, PArray2698, empty_Array, PThreadedCode2699, 3, PAssign2700, PSend2703, VAR_instVars_0_0);
    
    MethodClosure MC_SMB_parentSlots = new_MethodClosure((Method)PMethod2697, behavior);
    store_method(behavior, SMB_parentSlots, MC_SMB_parentSlots);
}


static void init_SMB_new() {
    Symbol SMB_new = new_Symbol(L"new");
    Symbol SMB_instantiate_ = new_Symbol(L"instantiate:");
    // instantiate:. 
    Send PSend2712 = new_Send((Optr)slot_Kernel_Class_Behavior_layout, SMB_instantiate_, 1, (Optr)self);
    Symbol SMB_initialize = new_Symbol(L"initialize");
    // initialize. 
    Send PSend2713 = new_Send((Optr)PSend2712, SMB_initialize, 0);
    Array PThreadedCode2711 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Behavior_layout, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2712, (Optr)&t_send0, (Optr)PSend2713, (Optr)&t_method_return);
    Method PMethod2710 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2711, 1, PSend2713);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod2710, behavior);
    store_method(behavior, SMB_new, MC_SMB_new);
}


static void init_SMB_lookupSelector_() {
    Symbol SMB_lookupSelector_ = new_Symbol(L"lookupSelector:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray2715 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Variable VAR_lookupClass_0_1 = new_Variable_named(L"lookupClass", 0);
    Array PArray2716 = new_Array_with(1, (Optr)VAR_lookupClass_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2719 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign2721 = new_Assign((Optr)VAR_lookupClass_0_1, (Optr)self);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend2724 = new_Send((Optr)VAR_lookupClass_0_1, SMB__pequals_, 1, (Optr)nil_Const);
    Array PThreadedCode2723 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_lookupClass_0_1, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend2724, (Optr)&t_block_return);
    Block PBlock2722 = new_Block_with(empty_Array, empty_Array, PThreadedCode2723, 1, PSend2724);
    Symbol SMB_includesSelector_ = new_Symbol(L"includesSelector:");
    // includesSelector:. 
    Send PSend2727 = new_Send((Optr)VAR_lookupClass_0_1, SMB_includesSelector_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_methodDict = new_Symbol(L"methodDict");
    // methodDict. 
    Send PSend2731 = new_Send((Optr)VAR_lookupClass_0_1, SMB_methodDict, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend2732 = new_Send((Optr)PSend2731, SMB_at_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend2733 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend2732);
    Array PThreadedCode2730 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_lookupClass_0_1, (Optr)&t_send0, (Optr)PSend2731, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend2732, (Optr)&t_send1, (Optr)PSend2733, (Optr)&t_block_return);
    Block PBlock2729 = new_Block_with(empty_Array, empty_Array, PThreadedCode2730, 1, PSend2733);
    // ifTrue:. 
    Send PSend2728 = new_Send((Optr)PSend2727, SMB_ifTrue_, 1, (Optr)PBlock2729);
    Symbol SMB_superclass = new_Symbol(L"superclass");
    // superclass. 
    Send PSend2735 = new_Send((Optr)VAR_lookupClass_0_1, SMB_superclass, 0);
    Assign PAssign2734 = new_Assign((Optr)VAR_lookupClass_0_1, (Optr)PSend2735);
    Array PThreadedCode2726 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_lookupClass_0_1, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend2727, (Optr)&t_send_ifTrue_, (Optr)PSend2728, (Optr)PBlock2729, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign2734, (Optr)&t_push_variable, (Optr)VAR_lookupClass_0_1, (Optr)&t_send0, (Optr)PSend2735, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock2725 = new_Block_with(empty_Array, empty_Array, PThreadedCode2726, 2, PSend2728, PAssign2734);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend2736 = new_Send((Optr)PBlock2722, SMB_whileFalse_, 1, (Optr)PBlock2725);
    Array PThreadedCode2720 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign2721, (Optr)&t_push_self, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock2722, (Optr)&t_push_closure, (Optr)PBlock2725, (Optr)&t_send1, (Optr)PSend2736, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Block PBlock2718 = new_Block_with(PArray2719, empty_Array, PThreadedCode2720, 3, PAssign2721, PSend2736, nil_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2737 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2718);
    Array PThreadedCode2717 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2718, (Optr)&t_send1, (Optr)PSend2737, (Optr)&t_method_return);
    Method PMethod2714 = new_Method_with(PArray2715, PArray2716, empty_Array, PThreadedCode2717, 1, PSend2737);
    
    MethodClosure MC_SMB_lookupSelector_ = new_MethodClosure((Method)PMethod2714, behavior);
    store_method(behavior, SMB_lookupSelector_, MC_SMB_lookupSelector_);
}


static void init_SMB_withAllSuperclassesDo_() {
    Symbol SMB_withAllSuperclassesDo_ = new_Symbol(L"withAllSuperclassesDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray2739 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend2741 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)self);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend2742 = new_Send((Optr)slot_Kernel_Class_Behavior_superclass, SMB__pequals_, 1, (Optr)nil_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // withAllSuperclassesDo:. 
    Send PSend2746 = new_Send((Optr)slot_Kernel_Class_Behavior_superclass, SMB_withAllSuperclassesDo_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode2745 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Behavior_superclass, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend2746, (Optr)&t_block_return);
    Block PBlock2744 = new_Block_with(empty_Array, empty_Array, PThreadedCode2745, 1, PSend2746);
    // ifFalse:. 
    Send PSend2743 = new_Send((Optr)PSend2742, SMB_ifFalse_, 1, (Optr)PBlock2744);
    Array PThreadedCode2740 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2741, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Behavior_superclass, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend2742, (Optr)&t_send_ifFalse_, (Optr)PSend2743, (Optr)PBlock2744, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod2738 = new_Method_with(PArray2739, empty_Array, empty_Array, PThreadedCode2740, 3, PSend2741, PSend2743, self);
    
    MethodClosure MC_SMB_withAllSuperclassesDo_ = new_MethodClosure((Method)PMethod2738, behavior);
    store_method(behavior, SMB_withAllSuperclassesDo_, MC_SMB_withAllSuperclassesDo_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray2748 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBehavior_ = new_Symbol(L"visitBehavior:");
    // visitBehavior:. 
    Send PSend2750 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBehavior_, 1, (Optr)self);
    Array PThreadedCode2749 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2750, (Optr)&t_method_return);
    Method PMethod2747 = new_Method_with(PArray2748, empty_Array, empty_Array, PThreadedCode2749, 1, PSend2750);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod2747, behavior);
    store_method(behavior, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_compile_() {
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray2752 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR_method_0_1 = new_Variable_named(L"method", 0);
    Array PArray2753 = new_Array_with(1, (Optr)VAR_method_0_1);
    Symbol SMB_compile_on_ = new_Symbol(L"compile:on:");
    // compile:on:. 
    Send PSend2756 = new_Send((Optr)PCompiler_classReference, SMB_compile_on_, 2, (Optr)VAR_aString_0_0, (Optr)self);
    Assign PAssign2755 = new_Assign((Optr)VAR_method_0_1, (Optr)PSend2756);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend2757 = new_Send((Optr)VAR_method_0_1, SMB_selector, 0);
    Symbol SMB_define_as_ = new_Symbol(L"define:as:");
    // define:as:. 
    Send PSend2758 = new_Send((Optr)self, SMB_define_as_, 2, (Optr)PSend2757, (Optr)VAR_method_0_1);
    Array PThreadedCode2754 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign2755, (Optr)&t_push_class_reference, (Optr)PCompiler_classReference, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend2756, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_method_0_1, (Optr)&t_send0, (Optr)PSend2757, (Optr)&t_push_variable, (Optr)VAR_method_0_1, (Optr)&t_send2, (Optr)PSend2758, (Optr)&t_method_return);
    Method PMethod2751 = new_Method_with(PArray2752, PArray2753, empty_Array, PThreadedCode2754, 2, PAssign2755, PSend2758);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod2751, behavior);
    store_method(behavior, SMB_compile_, MC_SMB_compile_);
}


static void init_SMB_includesSelector_() {
    Symbol SMB_includesSelector_ = new_Symbol(L"includesSelector:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray2760 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Symbol SMB_methodDict = new_Symbol(L"methodDict");
    // methodDict. 
    Send PSend2762 = new_Send((Optr)self, SMB_methodDict, 0);
    Symbol SMB_includesKey_ = new_Symbol(L"includesKey:");
    // includesKey:. 
    Send PSend2763 = new_Send((Optr)PSend2762, SMB_includesKey_, 1, (Optr)VAR_selector_0_0);
    Array PThreadedCode2761 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2762, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend2763, (Optr)&t_method_return);
    Method PMethod2759 = new_Method_with(PArray2760, empty_Array, empty_Array, PThreadedCode2761, 1, PSend2763);
    
    MethodClosure MC_SMB_includesSelector_ = new_MethodClosure((Method)PMethod2759, behavior);
    store_method(behavior, SMB_includesSelector_, MC_SMB_includesSelector_);
}


static void init_SMB_methodsDo_() {
    Symbol SMB_methodsDo_ = new_Symbol(L"methodsDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray2765 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_methodDict = new_Symbol(L"methodDict");
    // methodDict. 
    Send PSend2767 = new_Send((Optr)self, SMB_methodDict, 0);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend2768 = new_Send((Optr)PSend2767, SMB_do_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode2766 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2767, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend2768, (Optr)&t_method_return);
    Method PMethod2764 = new_Method_with(PArray2765, empty_Array, empty_Array, PThreadedCode2766, 1, PSend2768);
    
    MethodClosure MC_SMB_methodsDo_ = new_MethodClosure((Method)PMethod2764, behavior);
    store_method(behavior, SMB_methodsDo_, MC_SMB_methodsDo_);
}


static void init_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_sizeRequested_0_0 = new_Variable_named(L"sizeRequested", 0);
    Array PArray2770 = new_Array_with(1, (Optr)VAR_sizeRequested_0_0);
    Symbol SMB_instantiate_sized_ = new_Symbol(L"instantiate:sized:");
    // instantiate:sized:. 
    Send PSend2772 = new_Send((Optr)slot_Kernel_Class_Behavior_layout, SMB_instantiate_sized_, 2, (Optr)self, (Optr)VAR_sizeRequested_0_0);
    Symbol SMB_initialize = new_Symbol(L"initialize");
    // initialize. 
    Send PSend2773 = new_Send((Optr)PSend2772, SMB_initialize, 0);
    Array PThreadedCode2771 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Behavior_layout, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sizeRequested_0_0, (Optr)&t_send2, (Optr)PSend2772, (Optr)&t_send0, (Optr)PSend2773, (Optr)&t_method_return);
    Method PMethod2769 = new_Method_with(PArray2770, empty_Array, empty_Array, PThreadedCode2771, 1, PSend2773);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PMethod2769, behavior);
    store_method(behavior, SMB_new_, MC_SMB_new_);
}


static void init_SMB_methodDict() {
    Symbol SMB_methodDict = new_Symbol(L"methodDict");
    Array PThreadedCode2775 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Behavior_methods, (Optr)&t_method_return);
    Method PMethod2774 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2775, 1, slot_Kernel_Class_Behavior_methods);
    
    MethodClosure MC_SMB_methodDict = new_MethodClosure((Method)PMethod2774, behavior);
    store_method(behavior, SMB_methodDict, MC_SMB_methodDict);
}


static void init_SMB_hasSuperclass() {
    Symbol SMB_hasSuperclass = new_Symbol(L"hasSuperclass");
    Symbol SMB_superclass = new_Symbol(L"superclass");
    // superclass. 
    Send PSend2778 = new_Send((Optr)self, SMB_superclass, 0);
    Symbol SMB_nil = new_Symbol(L"nil");
    // nil. 
    Send PSend2779 = new_Send((Optr)UndefinedObject_classReference, SMB_nil, 0);
    Symbol SMB__notEquals_ = new_Symbol(L"~=");
    // ~=. 
    Send PSend2780 = new_Send((Optr)PSend2778, SMB__notEquals_, 1, (Optr)PSend2779);
    Array PThreadedCode2777 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2778, (Optr)&t_push_class_reference, (Optr)UndefinedObject_classReference, (Optr)&t_send0, (Optr)PSend2779, (Optr)&t_send1, (Optr)PSend2780, (Optr)&t_method_return);
    Method PMethod2776 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2777, 1, PSend2780);
    
    MethodClosure MC_SMB_hasSuperclass = new_MethodClosure((Method)PMethod2776, behavior);
    store_method(behavior, SMB_hasSuperclass, MC_SMB_hasSuperclass);
}


static void init_SMB_methods_() {
    Symbol SMB_methods_ = new_Symbol(L"methods:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray2782 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign2784 = new_Assign((Optr)slot_Kernel_Class_Behavior_methods, (Optr)VAR_anObject_0_0);
    Array PThreadedCode2783 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign2784, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod2781 = new_Method_with(PArray2782, empty_Array, empty_Array, PThreadedCode2783, 2, PAssign2784, self);
    
    MethodClosure MC_SMB_methods_ = new_MethodClosure((Method)PMethod2781, behavior);
    store_method(behavior, SMB_methods_, MC_SMB_methods_);
}


static void init_SMB_methods() {
    Symbol SMB_methods = new_Symbol(L"methods");
    Array PThreadedCode2786 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Behavior_methods, (Optr)&t_method_return);
    Method PMethod2785 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2786, 1, slot_Kernel_Class_Behavior_methods);
    
    MethodClosure MC_SMB_methods = new_MethodClosure((Method)PMethod2785, behavior);
    store_method(behavior, SMB_methods, MC_SMB_methods);
}


static void init_SMB_layout() {
    Symbol SMB_layout = new_Symbol(L"layout");
    Array PThreadedCode2788 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Behavior_layout, (Optr)&t_method_return);
    Method PMethod2787 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2788, 1, slot_Kernel_Class_Behavior_layout);
    
    MethodClosure MC_SMB_layout = new_MethodClosure((Method)PMethod2787, behavior);
    store_method(behavior, SMB_layout, MC_SMB_layout);
}


static void init_SMB_allSelectorsBelow_() {
    Symbol SMB_allSelectorsBelow_ = new_Symbol(L"allSelectorsBelow:");
    Variable VAR_topClass_0_0 = new_Variable_named(L"topClass", 0);
    Array PArray2790 = new_Array_with(1, (Optr)VAR_topClass_0_0);
    Variable VAR_coll_0_1 = new_Variable_named(L"coll", 0);
    Array PArray2791 = new_Array_with(1, (Optr)VAR_coll_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2794 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend2797 = new_Send((Optr)IdentitySet_classReference, SMB_new, 0);
    Assign PAssign2796 = new_Assign((Optr)VAR_coll_0_1, (Optr)PSend2797);
    Variable VAR_aClass_2_0 = new_Variable_named(L"aClass", 2);
    Array PArray2799 = new_Array_with(1, (Optr)VAR_aClass_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend2801 = new_Send((Optr)VAR_aClass_2_0, SMB__equals_, 1, (Optr)VAR_topClass_0_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend2805 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_coll_0_1);
    Array PThreadedCode2804 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_coll_0_1, (Optr)&t_send1, (Optr)PSend2805, (Optr)&t_block_return);
    Block PBlock2803 = new_Block_with(empty_Array, empty_Array, PThreadedCode2804, 1, PSend2805);
    Variable VAR_sel_3_0 = new_Variable_named(L"sel", 3);
    Array PArray2809 = new_Array_with(1, (Optr)VAR_sel_3_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend2811 = new_Send((Optr)VAR_coll_0_1, SMB_add_, 1, (Optr)VAR_sel_3_0);
    Array PThreadedCode2810 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_coll_0_1, (Optr)&t_push_variable, (Optr)VAR_sel_3_0, (Optr)&t_send1, (Optr)PSend2811, (Optr)&t_method_return);
    Block PBlock2808 = new_Block_with(PArray2809, empty_Array, PThreadedCode2810, 1, PSend2811);
    Symbol SMB_selectorsDo_ = new_Symbol(L"selectorsDo:");
    // selectorsDo:. 
    Send PSend2812 = new_Send((Optr)VAR_aClass_2_0, SMB_selectorsDo_, 1, (Optr)PBlock2808);
    Array PThreadedCode2807 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aClass_2_0, (Optr)&t_push_closure, (Optr)PBlock2808, (Optr)&t_send1, (Optr)PSend2812, (Optr)&t_block_return);
    Block PBlock2806 = new_Block_with(empty_Array, empty_Array, PThreadedCode2807, 1, PSend2812);
    // ifTrue:ifFalse:. 
    Send PSend2802 = new_Send((Optr)PSend2801, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock2803, (Optr)PBlock2806);
    Array PThreadedCode2800 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aClass_2_0, (Optr)&t_push_variable, (Optr)VAR_topClass_0_0, (Optr)&t_send1, (Optr)PSend2801, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend2802, (Optr)PBlock2803, (Optr)PBlock2806, (Optr)&t_method_return);
    Block PBlock2798 = new_Block_with(PArray2799, empty_Array, PThreadedCode2800, 1, PSend2802);
    Symbol SMB_withAllSuperclassesDo_ = new_Symbol(L"withAllSuperclassesDo:");
    // withAllSuperclassesDo:. 
    Send PSend2813 = new_Send((Optr)self, SMB_withAllSuperclassesDo_, 1, (Optr)PBlock2798);
    Array PThreadedCode2795 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign2796, (Optr)&t_push_class_reference, (Optr)IdentitySet_classReference, (Optr)&t_send0, (Optr)PSend2797, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock2798, (Optr)&t_send1, (Optr)PSend2813, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_coll_0_1, (Optr)&t_method_return);
    Block PBlock2793 = new_Block_with(PArray2794, empty_Array, PThreadedCode2795, 3, PAssign2796, PSend2813, VAR_coll_0_1);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2814 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2793);
    Array PThreadedCode2792 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2793, (Optr)&t_send1, (Optr)PSend2814, (Optr)&t_method_return);
    Method PMethod2789 = new_Method_with(PArray2790, PArray2791, empty_Array, PThreadedCode2792, 1, PSend2814);
    
    MethodClosure MC_SMB_allSelectorsBelow_ = new_MethodClosure((Method)PMethod2789, behavior);
    store_method(behavior, SMB_allSelectorsBelow_, MC_SMB_allSelectorsBelow_);
}


static void init_SMB_superclass() {
    Symbol SMB_superclass = new_Symbol(L"superclass");
    Array PThreadedCode2816 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Behavior_superclass, (Optr)&t_method_return);
    Method PMethod2815 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2816, 1, slot_Kernel_Class_Behavior_superclass);
    
    MethodClosure MC_SMB_superclass = new_MethodClosure((Method)PMethod2815, behavior);
    store_method(behavior, SMB_superclass, MC_SMB_superclass);
}


static void init_SMB_definesSlot_() {
    Symbol SMB_definesSlot_ = new_Symbol(L"definesSlot:");
    Variable VAR_name_0_0 = new_Variable_named(L"name", 0);
    Array PArray2818 = new_Array_with(1, (Optr)VAR_name_0_0);
    Symbol SMB_includesSlot_ = new_Symbol(L"includesSlot:");
    // includesSlot:. 
    Send PSend2820 = new_Send((Optr)slot_Kernel_Class_Behavior_layout, SMB_includesSlot_, 1, (Optr)VAR_name_0_0);
    Array PThreadedCode2819 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Behavior_layout, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_send1, (Optr)PSend2820, (Optr)&t_method_return);
    Method PMethod2817 = new_Method_with(PArray2818, empty_Array, empty_Array, PThreadedCode2819, 1, PSend2820);
    
    MethodClosure MC_SMB_definesSlot_ = new_MethodClosure((Method)PMethod2817, behavior);
    store_method(behavior, SMB_definesSlot_, MC_SMB_definesSlot_);
}


static void init_SMB_superclass_() {
    Symbol SMB_superclass_ = new_Symbol(L"superclass:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray2822 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign2824 = new_Assign((Optr)slot_Kernel_Class_Behavior_superclass, (Optr)VAR_anObject_0_0);
    Array PThreadedCode2823 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign2824, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod2821 = new_Method_with(PArray2822, empty_Array, empty_Array, PThreadedCode2823, 2, PAssign2824, self);
    
    MethodClosure MC_SMB_superclass_ = new_MethodClosure((Method)PMethod2821, behavior);
    store_method(behavior, SMB_superclass_, MC_SMB_superclass_);
}


static void init_SMB_basicNew() {
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Symbol SMB_basicInstantiate_ = new_Symbol(L"basicInstantiate:");
    // basicInstantiate:. 
    Send PSend2827 = new_Send((Optr)slot_Kernel_Class_Behavior_layout, SMB_basicInstantiate_, 1, (Optr)self);
    Array PThreadedCode2826 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Behavior_layout, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2827, (Optr)&t_method_return);
    Method PMethod2825 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2826, 1, PSend2827);
    
    MethodClosure MC_SMB_basicNew = new_MethodClosure((Method)PMethod2825, behavior);
    store_method(behavior, SMB_basicNew, MC_SMB_basicNew);
}


static void init_SMB_selectors() {
    Symbol SMB_selectors = new_Symbol(L"selectors");
    Symbol SMB_methodDict = new_Symbol(L"methodDict");
    // methodDict. 
    Send PSend2830 = new_Send((Optr)self, SMB_methodDict, 0);
    Symbol SMB_keys = new_Symbol(L"keys");
    // keys. 
    Send PSend2831 = new_Send((Optr)PSend2830, SMB_keys, 0);
    Array PThreadedCode2829 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2830, (Optr)&t_send0, (Optr)PSend2831, (Optr)&t_method_return);
    Method PMethod2828 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2829, 1, PSend2831);
    
    MethodClosure MC_SMB_selectors = new_MethodClosure((Method)PMethod2828, behavior);
    store_method(behavior, SMB_selectors, MC_SMB_selectors);
}


static void init_SMB_inheritsFrom_() {
    Symbol SMB_inheritsFrom_ = new_Symbol(L"inheritsFrom:");
    Variable VAR_aClass_0_0 = new_Variable_named(L"aClass", 0);
    Array PArray2833 = new_Array_with(1, (Optr)VAR_aClass_0_0);
    Variable VAR_aSuperclass_0_1 = new_Variable_named(L"aSuperclass", 0);
    Array PArray2834 = new_Array_with(1, (Optr)VAR_aSuperclass_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2837 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign2839 = new_Assign((Optr)VAR_aSuperclass_0_1, (Optr)slot_Kernel_Class_Behavior_superclass);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend2842 = new_Send((Optr)VAR_aSuperclass_0_1, SMB__pequals_, 1, (Optr)nil_Const);
    Array PThreadedCode2841 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aSuperclass_0_1, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend2842, (Optr)&t_block_return);
    Block PBlock2840 = new_Block_with(empty_Array, empty_Array, PThreadedCode2841, 1, PSend2842);
    // ==. 
    Send PSend2845 = new_Send((Optr)VAR_aSuperclass_0_1, SMB__pequals_, 1, (Optr)VAR_aClass_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend2849 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode2848 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend2849, (Optr)&t_block_return);
    Block PBlock2847 = new_Block_with(empty_Array, empty_Array, PThreadedCode2848, 1, PSend2849);
    // ifTrue:. 
    Send PSend2846 = new_Send((Optr)PSend2845, SMB_ifTrue_, 1, (Optr)PBlock2847);
    Symbol SMB_superclass = new_Symbol(L"superclass");
    // superclass. 
    Send PSend2851 = new_Send((Optr)VAR_aSuperclass_0_1, SMB_superclass, 0);
    Assign PAssign2850 = new_Assign((Optr)VAR_aSuperclass_0_1, (Optr)PSend2851);
    Array PThreadedCode2844 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_aSuperclass_0_1, (Optr)&t_push_variable, (Optr)VAR_aClass_0_0, (Optr)&t_send1, (Optr)PSend2845, (Optr)&t_send_ifTrue_, (Optr)PSend2846, (Optr)PBlock2847, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign2850, (Optr)&t_push_variable, (Optr)VAR_aSuperclass_0_1, (Optr)&t_send0, (Optr)PSend2851, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock2843 = new_Block_with(empty_Array, empty_Array, PThreadedCode2844, 2, PSend2846, PAssign2850);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend2852 = new_Send((Optr)PBlock2840, SMB_whileFalse_, 1, (Optr)PBlock2843);
    Array PThreadedCode2838 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign2839, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Behavior_superclass, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock2840, (Optr)&t_push_closure, (Optr)PBlock2843, (Optr)&t_send1, (Optr)PSend2852, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock2836 = new_Block_with(PArray2837, empty_Array, PThreadedCode2838, 3, PAssign2839, PSend2852, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2853 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2836);
    Array PThreadedCode2835 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2836, (Optr)&t_send1, (Optr)PSend2853, (Optr)&t_method_return);
    Method PMethod2832 = new_Method_with(PArray2833, PArray2834, empty_Array, PThreadedCode2835, 1, PSend2853);
    
    MethodClosure MC_SMB_inheritsFrom_ = new_MethodClosure((Method)PMethod2832, behavior);
    store_method(behavior, SMB_inheritsFrom_, MC_SMB_inheritsFrom_);
}


static void init_SMB_basicNew_() {
    Symbol SMB_basicNew_ = new_Symbol(L"basicNew:");
    Variable VAR_sizeRequested_0_0 = new_Variable_named(L"sizeRequested", 0);
    Array PArray2855 = new_Array_with(1, (Optr)VAR_sizeRequested_0_0);
    Symbol SMB_basicInstantiate_sized_ = new_Symbol(L"basicInstantiate:sized:");
    // basicInstantiate:sized:. 
    Send PSend2857 = new_Send((Optr)slot_Kernel_Class_Behavior_layout, SMB_basicInstantiate_sized_, 2, (Optr)self, (Optr)VAR_sizeRequested_0_0);
    Array PThreadedCode2856 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Behavior_layout, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sizeRequested_0_0, (Optr)&t_send2, (Optr)PSend2857, (Optr)&t_method_return);
    Method PMethod2854 = new_Method_with(PArray2855, empty_Array, empty_Array, PThreadedCode2856, 1, PSend2857);
    
    MethodClosure MC_SMB_basicNew_ = new_MethodClosure((Method)PMethod2854, behavior);
    store_method(behavior, SMB_basicNew_, MC_SMB_basicNew_);
}


static void init_SMB_selectorsDo_() {
    Symbol SMB_selectorsDo_ = new_Symbol(L"selectorsDo:");
    Variable VAR_selectorBlock_0_0 = new_Variable_named(L"selectorBlock", 0);
    Array PArray2859 = new_Array_with(1, (Optr)VAR_selectorBlock_0_0);
    Symbol SMB_methodDict = new_Symbol(L"methodDict");
    // methodDict. 
    Send PSend2861 = new_Send((Optr)self, SMB_methodDict, 0);
    Symbol SMB_keysDo_ = new_Symbol(L"keysDo:");
    // keysDo:. 
    Send PSend2862 = new_Send((Optr)PSend2861, SMB_keysDo_, 1, (Optr)VAR_selectorBlock_0_0);
    Array PThreadedCode2860 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2861, (Optr)&t_push_variable, (Optr)VAR_selectorBlock_0_0, (Optr)&t_send1, (Optr)PSend2862, (Optr)&t_method_return);
    Method PMethod2858 = new_Method_with(PArray2859, empty_Array, empty_Array, PThreadedCode2860, 1, PSend2862);
    
    MethodClosure MC_SMB_selectorsDo_ = new_MethodClosure((Method)PMethod2858, behavior);
    store_method(behavior, SMB_selectorsDo_, MC_SMB_selectorsDo_);
}

void init_Kernel_Class_Behavior_layout() {
    layout_Kernel_Class_Behavior_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_Class_Behavior_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_Class_Behavior_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_Class_Behavior_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_Class_Behavior_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_Class_Behavior_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Behavior = new_Symbol(L"Behavior");
    slot_Kernel_Class_Behavior_layout = (Optr)new_Slot(0, L"layout");
    slot_Kernel_Class_Behavior_superclass = (Optr)new_Slot(1, L"superclass");
    slot_Kernel_Class_Behavior_methods = (Optr)new_Slot(2, L"methods");
    layout_Kernel_Class_Behavior = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Kernel_Class_Behavior)->values[0] = slot_Kernel_Class_Behavior_layout; // layout 
    ((Array)layout_Kernel_Class_Behavior)->values[1] = slot_Kernel_Class_Behavior_superclass; // superclass 
    ((Array)layout_Kernel_Class_Behavior)->values[2] = slot_Kernel_Class_Behavior_methods; // methods 
    Class_set_superclass(behavior, Object_Class);
    behavior->layout = layout_Kernel_Class_Behavior;
    HEADER(behavior)->layout = layout_Kernel_Class_Behavior_Class_class;
    behavior->name = SMB_Behavior;
    
}

void init_Kernel_Class_Behavior_methods() {
    init_SMB_layout_();
    init_SMB_allSelectors();
    init_SMB_canUnderstand_();
    init_SMB_define_as_();
    init_SMB_parentSlots();
    init_SMB_new();
    init_SMB_lookupSelector_();
    init_SMB_withAllSuperclassesDo_();
    init_SMB_accept_();
    init_SMB_compile_();
    init_SMB_includesSelector_();
    init_SMB_methodsDo_();
    init_SMB_new_();
    init_SMB_methodDict();
    init_SMB_hasSuperclass();
    init_SMB_methods_();
    init_SMB_methods();
    init_SMB_layout();
    init_SMB_allSelectorsBelow_();
    init_SMB_superclass();
    init_SMB_definesSlot_();
    init_SMB_superclass_();
    init_SMB_basicNew();
    init_SMB_selectors();
    init_SMB_inheritsFrom_();
    init_SMB_basicNew_();
    init_SMB_selectorsDo_();
    
}