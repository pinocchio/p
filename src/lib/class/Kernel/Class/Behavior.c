#include <lib/class/Kernel/Class/Behavior.h>


Optr layout_Kernel_Class_Behavior_Class_class;
Optr slot_Kernel_Class_Behavior_layout;
Optr slot_Kernel_Class_Behavior_superclass;
Optr slot_Kernel_Class_Behavior_methods;
Optr layout_Kernel_Class_Behavior;


static void init_SMB_layout_() {
    Symbol SMB_layout_ = new_Symbol(L"layout:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray2678 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign2680 = new_Assign((Optr)slot_Kernel_Class_Behavior_layout, (Optr)VAR_anObject_0_0);
    Array PThreadedCode2679 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign2680, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod2677 = new_Method_with(PArray2678, empty_Array, empty_Array, PThreadedCode2679, 2, PAssign2680, self);
    
    MethodClosure MC_SMB_layout_ = new_MethodClosure((Method)PMethod2677, behavior);
    store_method(behavior, SMB_layout_, MC_SMB_layout_);
}


static void init_SMB_allSelectors() {
    Symbol SMB_allSelectors = new_Symbol(L"allSelectors");
    Symbol SMB_allSelectorsBelow_ = new_Symbol(L"allSelectorsBelow:");
    // allSelectorsBelow:. 
    Send PSend2683 = new_Send((Optr)self, SMB_allSelectorsBelow_, 1, (Optr)nil_Const);
    Array PThreadedCode2682 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend2683, (Optr)&t_method_return);
    Method PMethod2681 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2682, 1, PSend2683);
    
    MethodClosure MC_SMB_allSelectors = new_MethodClosure((Method)PMethod2681, behavior);
    store_method(behavior, SMB_allSelectors, MC_SMB_allSelectors);
}


static void init_SMB_canUnderstand_() {
    Symbol SMB_canUnderstand_ = new_Symbol(L"canUnderstand:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray2685 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2688 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_includesSelector_ = new_Symbol(L"includesSelector:");
    // includesSelector:. 
    Send PSend2690 = new_Send((Optr)self, SMB_includesSelector_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend2694 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode2693 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend2694, (Optr)&t_block_return);
    Block PBlock2692 = new_Block_with(empty_Array, empty_Array, PThreadedCode2693, 1, PSend2694);
    // ifTrue:. 
    Send PSend2691 = new_Send((Optr)PSend2690, SMB_ifTrue_, 1, (Optr)PBlock2692);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend2695 = new_Send((Optr)slot_Kernel_Class_Behavior_superclass, SMB__pequals_, 1, (Optr)nil_Const);
    // escape:. 
    Send PSend2699 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode2698 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend2699, (Optr)&t_block_return);
    Block PBlock2697 = new_Block_with(empty_Array, empty_Array, PThreadedCode2698, 1, PSend2699);
    // ifTrue:. 
    Send PSend2696 = new_Send((Optr)PSend2695, SMB_ifTrue_, 1, (Optr)PBlock2697);
    // canUnderstand:. 
    Send PSend2700 = new_Send((Optr)slot_Kernel_Class_Behavior_superclass, SMB_canUnderstand_, 1, (Optr)VAR_selector_0_0);
    Array PThreadedCode2689 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend2690, (Optr)&t_send_ifTrue_, (Optr)PSend2691, (Optr)PBlock2692, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Behavior_superclass, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend2695, (Optr)&t_send_ifTrue_, (Optr)PSend2696, (Optr)PBlock2697, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Behavior_superclass, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend2700, (Optr)&t_method_return);
    Block PBlock2687 = new_Block_with(PArray2688, empty_Array, PThreadedCode2689, 3, PSend2691, PSend2696, PSend2700);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2701 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2687);
    Array PThreadedCode2686 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2687, (Optr)&t_send1, (Optr)PSend2701, (Optr)&t_method_return);
    Method PMethod2684 = new_Method_with(PArray2685, empty_Array, empty_Array, PThreadedCode2686, 1, PSend2701);
    
    MethodClosure MC_SMB_canUnderstand_ = new_MethodClosure((Method)PMethod2684, behavior);
    store_method(behavior, SMB_canUnderstand_, MC_SMB_canUnderstand_);
}


static void init_SMB_define_as_() {
    Symbol SMB_define_as_ = new_Symbol(L"define:as:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Variable VAR_method_0_1 = new_Variable_named(L"method", 0);
    Array PArray2703 = new_Array_with(2, (Optr)VAR_selector_0_0, (Optr)VAR_method_0_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend2705 = new_Send((Optr)slot_Kernel_Class_Behavior_methods, SMB_at_put_, 2, (Optr)VAR_selector_0_0, (Optr)VAR_method_0_1);
    Array PThreadedCode2704 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Behavior_methods, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push_variable, (Optr)VAR_method_0_1, (Optr)&t_send2, (Optr)PSend2705, (Optr)&t_method_return);
    Method PMethod2702 = new_Method_with(PArray2703, empty_Array, empty_Array, PThreadedCode2704, 1, PSend2705);
    
    MethodClosure MC_SMB_define_as_ = new_MethodClosure((Method)PMethod2702, behavior);
    store_method(behavior, SMB_define_as_, MC_SMB_define_as_);
}


static void init_SMB_parentSlots() {
    Symbol SMB_parentSlots = new_Symbol(L"parentSlots");
    Variable VAR_instVars_0_0 = new_Variable_named(L"instVars", 0);
    Array PArray2707 = new_Array_with(1, (Optr)VAR_instVars_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend2710 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign2709 = new_Assign((Optr)VAR_instVars_0_0, (Optr)PSend2710);
    Symbol SMB_hasSuperclass = new_Symbol(L"hasSuperclass");
    // hasSuperclass. 
    Send PSend2711 = new_Send((Optr)self, SMB_hasSuperclass, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_layout = new_Symbol(L"layout");
    // layout. 
    Send PSend2715 = new_Send((Optr)slot_Kernel_Class_Behavior_superclass, SMB_layout, 0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend2716 = new_Send((Optr)VAR_instVars_0_0, SMB_addAll_, 1, (Optr)PSend2715);
    Array PThreadedCode2714 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_instVars_0_0, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Behavior_superclass, (Optr)&t_send0, (Optr)PSend2715, (Optr)&t_send1, (Optr)PSend2716, (Optr)&t_block_return);
    Block PBlock2713 = new_Block_with(empty_Array, empty_Array, PThreadedCode2714, 1, PSend2716);
    Array PThreadedCode2718 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock2717 = new_Block_with(empty_Array, empty_Array, PThreadedCode2718, 0);
    // ifTrue:ifFalse:. 
    Send PSend2712 = new_Send((Optr)PSend2711, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock2713, (Optr)PBlock2717);
    Array PThreadedCode2708 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign2709, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend2710, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2711, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend2712, (Optr)PBlock2713, (Optr)PBlock2717, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_instVars_0_0, (Optr)&t_method_return);
    Method PMethod2706 = new_Method_with(empty_Array, PArray2707, empty_Array, PThreadedCode2708, 3, PAssign2709, PSend2712, VAR_instVars_0_0);
    
    MethodClosure MC_SMB_parentSlots = new_MethodClosure((Method)PMethod2706, behavior);
    store_method(behavior, SMB_parentSlots, MC_SMB_parentSlots);
}


static void init_SMB_new() {
    Symbol SMB_new = new_Symbol(L"new");
    Symbol SMB_instantiate_ = new_Symbol(L"instantiate:");
    // instantiate:. 
    Send PSend2721 = new_Send((Optr)slot_Kernel_Class_Behavior_layout, SMB_instantiate_, 1, (Optr)self);
    Symbol SMB_initialize = new_Symbol(L"initialize");
    // initialize. 
    Send PSend2722 = new_Send((Optr)PSend2721, SMB_initialize, 0);
    Array PThreadedCode2720 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Behavior_layout, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2721, (Optr)&t_send0, (Optr)PSend2722, (Optr)&t_method_return);
    Method PMethod2719 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2720, 1, PSend2722);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod2719, behavior);
    store_method(behavior, SMB_new, MC_SMB_new);
}


static void init_SMB_lookupSelector_() {
    Symbol SMB_lookupSelector_ = new_Symbol(L"lookupSelector:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray2724 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Variable VAR_lookupClass_0_1 = new_Variable_named(L"lookupClass", 0);
    Array PArray2725 = new_Array_with(1, (Optr)VAR_lookupClass_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2728 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign2730 = new_Assign((Optr)VAR_lookupClass_0_1, (Optr)self);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend2733 = new_Send((Optr)VAR_lookupClass_0_1, SMB__pequals_, 1, (Optr)nil_Const);
    Array PThreadedCode2732 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_lookupClass_0_1, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend2733, (Optr)&t_block_return);
    Block PBlock2731 = new_Block_with(empty_Array, empty_Array, PThreadedCode2732, 1, PSend2733);
    Symbol SMB_includesSelector_ = new_Symbol(L"includesSelector:");
    // includesSelector:. 
    Send PSend2736 = new_Send((Optr)VAR_lookupClass_0_1, SMB_includesSelector_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_methodDict = new_Symbol(L"methodDict");
    // methodDict. 
    Send PSend2740 = new_Send((Optr)VAR_lookupClass_0_1, SMB_methodDict, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend2741 = new_Send((Optr)PSend2740, SMB_at_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend2742 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend2741);
    Array PThreadedCode2739 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_lookupClass_0_1, (Optr)&t_send0, (Optr)PSend2740, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend2741, (Optr)&t_send1, (Optr)PSend2742, (Optr)&t_block_return);
    Block PBlock2738 = new_Block_with(empty_Array, empty_Array, PThreadedCode2739, 1, PSend2742);
    // ifTrue:. 
    Send PSend2737 = new_Send((Optr)PSend2736, SMB_ifTrue_, 1, (Optr)PBlock2738);
    Symbol SMB_superclass = new_Symbol(L"superclass");
    // superclass. 
    Send PSend2744 = new_Send((Optr)VAR_lookupClass_0_1, SMB_superclass, 0);
    Assign PAssign2743 = new_Assign((Optr)VAR_lookupClass_0_1, (Optr)PSend2744);
    Array PThreadedCode2735 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_lookupClass_0_1, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend2736, (Optr)&t_send_ifTrue_, (Optr)PSend2737, (Optr)PBlock2738, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign2743, (Optr)&t_push_variable, (Optr)VAR_lookupClass_0_1, (Optr)&t_send0, (Optr)PSend2744, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock2734 = new_Block_with(empty_Array, empty_Array, PThreadedCode2735, 2, PSend2737, PAssign2743);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend2745 = new_Send((Optr)PBlock2731, SMB_whileFalse_, 1, (Optr)PBlock2734);
    Array PThreadedCode2729 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign2730, (Optr)&t_push_self, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock2731, (Optr)&t_push_closure, (Optr)PBlock2734, (Optr)&t_send1, (Optr)PSend2745, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Block PBlock2727 = new_Block_with(PArray2728, empty_Array, PThreadedCode2729, 3, PAssign2730, PSend2745, nil_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2746 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2727);
    Array PThreadedCode2726 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2727, (Optr)&t_send1, (Optr)PSend2746, (Optr)&t_method_return);
    Method PMethod2723 = new_Method_with(PArray2724, PArray2725, empty_Array, PThreadedCode2726, 1, PSend2746);
    
    MethodClosure MC_SMB_lookupSelector_ = new_MethodClosure((Method)PMethod2723, behavior);
    store_method(behavior, SMB_lookupSelector_, MC_SMB_lookupSelector_);
}


static void init_SMB_withAllSuperclassesDo_() {
    Symbol SMB_withAllSuperclassesDo_ = new_Symbol(L"withAllSuperclassesDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray2748 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend2750 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)self);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend2751 = new_Send((Optr)slot_Kernel_Class_Behavior_superclass, SMB__pequals_, 1, (Optr)nil_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // withAllSuperclassesDo:. 
    Send PSend2755 = new_Send((Optr)slot_Kernel_Class_Behavior_superclass, SMB_withAllSuperclassesDo_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode2754 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Behavior_superclass, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend2755, (Optr)&t_block_return);
    Block PBlock2753 = new_Block_with(empty_Array, empty_Array, PThreadedCode2754, 1, PSend2755);
    // ifFalse:. 
    Send PSend2752 = new_Send((Optr)PSend2751, SMB_ifFalse_, 1, (Optr)PBlock2753);
    Array PThreadedCode2749 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2750, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Behavior_superclass, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend2751, (Optr)&t_send_ifFalse_, (Optr)PSend2752, (Optr)PBlock2753, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod2747 = new_Method_with(PArray2748, empty_Array, empty_Array, PThreadedCode2749, 3, PSend2750, PSend2752, self);
    
    MethodClosure MC_SMB_withAllSuperclassesDo_ = new_MethodClosure((Method)PMethod2747, behavior);
    store_method(behavior, SMB_withAllSuperclassesDo_, MC_SMB_withAllSuperclassesDo_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray2757 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBehavior_ = new_Symbol(L"visitBehavior:");
    // visitBehavior:. 
    Send PSend2759 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBehavior_, 1, (Optr)self);
    Array PThreadedCode2758 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2759, (Optr)&t_method_return);
    Method PMethod2756 = new_Method_with(PArray2757, empty_Array, empty_Array, PThreadedCode2758, 1, PSend2759);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod2756, behavior);
    store_method(behavior, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_compile_() {
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray2761 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR_method_0_1 = new_Variable_named(L"method", 0);
    Array PArray2762 = new_Array_with(1, (Optr)VAR_method_0_1);
    Symbol SMB_compile_on_ = new_Symbol(L"compile:on:");
    // compile:on:. 
    Send PSend2765 = new_Send((Optr)PCompiler_classReference, SMB_compile_on_, 2, (Optr)VAR_aString_0_0, (Optr)self);
    Assign PAssign2764 = new_Assign((Optr)VAR_method_0_1, (Optr)PSend2765);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend2766 = new_Send((Optr)VAR_method_0_1, SMB_selector, 0);
    Symbol SMB_define_as_ = new_Symbol(L"define:as:");
    // define:as:. 
    Send PSend2767 = new_Send((Optr)self, SMB_define_as_, 2, (Optr)PSend2766, (Optr)VAR_method_0_1);
    Array PThreadedCode2763 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign2764, (Optr)&t_push_class_reference, (Optr)PCompiler_classReference, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend2765, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_method_0_1, (Optr)&t_send0, (Optr)PSend2766, (Optr)&t_push_variable, (Optr)VAR_method_0_1, (Optr)&t_send2, (Optr)PSend2767, (Optr)&t_method_return);
    Method PMethod2760 = new_Method_with(PArray2761, PArray2762, empty_Array, PThreadedCode2763, 2, PAssign2764, PSend2767);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod2760, behavior);
    store_method(behavior, SMB_compile_, MC_SMB_compile_);
}


static void init_SMB_includesSelector_() {
    Symbol SMB_includesSelector_ = new_Symbol(L"includesSelector:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Array PArray2769 = new_Array_with(1, (Optr)VAR_selector_0_0);
    Symbol SMB_methodDict = new_Symbol(L"methodDict");
    // methodDict. 
    Send PSend2771 = new_Send((Optr)self, SMB_methodDict, 0);
    Symbol SMB_includesKey_ = new_Symbol(L"includesKey:");
    // includesKey:. 
    Send PSend2772 = new_Send((Optr)PSend2771, SMB_includesKey_, 1, (Optr)VAR_selector_0_0);
    Array PThreadedCode2770 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2771, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend2772, (Optr)&t_method_return);
    Method PMethod2768 = new_Method_with(PArray2769, empty_Array, empty_Array, PThreadedCode2770, 1, PSend2772);
    
    MethodClosure MC_SMB_includesSelector_ = new_MethodClosure((Method)PMethod2768, behavior);
    store_method(behavior, SMB_includesSelector_, MC_SMB_includesSelector_);
}


static void init_SMB_methodsDo_() {
    Symbol SMB_methodsDo_ = new_Symbol(L"methodsDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray2774 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_methodDict = new_Symbol(L"methodDict");
    // methodDict. 
    Send PSend2776 = new_Send((Optr)self, SMB_methodDict, 0);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend2777 = new_Send((Optr)PSend2776, SMB_do_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode2775 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2776, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend2777, (Optr)&t_method_return);
    Method PMethod2773 = new_Method_with(PArray2774, empty_Array, empty_Array, PThreadedCode2775, 1, PSend2777);
    
    MethodClosure MC_SMB_methodsDo_ = new_MethodClosure((Method)PMethod2773, behavior);
    store_method(behavior, SMB_methodsDo_, MC_SMB_methodsDo_);
}


static void init_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_sizeRequested_0_0 = new_Variable_named(L"sizeRequested", 0);
    Array PArray2779 = new_Array_with(1, (Optr)VAR_sizeRequested_0_0);
    Symbol SMB_instantiate_sized_ = new_Symbol(L"instantiate:sized:");
    // instantiate:sized:. 
    Send PSend2781 = new_Send((Optr)slot_Kernel_Class_Behavior_layout, SMB_instantiate_sized_, 2, (Optr)self, (Optr)VAR_sizeRequested_0_0);
    Symbol SMB_initialize = new_Symbol(L"initialize");
    // initialize. 
    Send PSend2782 = new_Send((Optr)PSend2781, SMB_initialize, 0);
    Array PThreadedCode2780 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Behavior_layout, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sizeRequested_0_0, (Optr)&t_send2, (Optr)PSend2781, (Optr)&t_send0, (Optr)PSend2782, (Optr)&t_method_return);
    Method PMethod2778 = new_Method_with(PArray2779, empty_Array, empty_Array, PThreadedCode2780, 1, PSend2782);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PMethod2778, behavior);
    store_method(behavior, SMB_new_, MC_SMB_new_);
}


static void init_SMB_methodDict() {
    Symbol SMB_methodDict = new_Symbol(L"methodDict");
    Array PThreadedCode2784 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Behavior_methods, (Optr)&t_method_return);
    Method PMethod2783 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2784, 1, slot_Kernel_Class_Behavior_methods);
    
    MethodClosure MC_SMB_methodDict = new_MethodClosure((Method)PMethod2783, behavior);
    store_method(behavior, SMB_methodDict, MC_SMB_methodDict);
}


static void init_SMB_hasSuperclass() {
    Symbol SMB_hasSuperclass = new_Symbol(L"hasSuperclass");
    Symbol SMB_superclass = new_Symbol(L"superclass");
    // superclass. 
    Send PSend2787 = new_Send((Optr)self, SMB_superclass, 0);
    Symbol SMB_nil = new_Symbol(L"nil");
    // nil. 
    Send PSend2788 = new_Send((Optr)UndefinedObject_classReference, SMB_nil, 0);
    Symbol SMB__notEquals_ = new_Symbol(L"~=");
    // ~=. 
    Send PSend2789 = new_Send((Optr)PSend2787, SMB__notEquals_, 1, (Optr)PSend2788);
    Array PThreadedCode2786 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2787, (Optr)&t_push_class_reference, (Optr)UndefinedObject_classReference, (Optr)&t_send0, (Optr)PSend2788, (Optr)&t_send1, (Optr)PSend2789, (Optr)&t_method_return);
    Method PMethod2785 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2786, 1, PSend2789);
    
    MethodClosure MC_SMB_hasSuperclass = new_MethodClosure((Method)PMethod2785, behavior);
    store_method(behavior, SMB_hasSuperclass, MC_SMB_hasSuperclass);
}


static void init_SMB_methods_() {
    Symbol SMB_methods_ = new_Symbol(L"methods:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray2791 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign2793 = new_Assign((Optr)slot_Kernel_Class_Behavior_methods, (Optr)VAR_anObject_0_0);
    Array PThreadedCode2792 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign2793, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod2790 = new_Method_with(PArray2791, empty_Array, empty_Array, PThreadedCode2792, 2, PAssign2793, self);
    
    MethodClosure MC_SMB_methods_ = new_MethodClosure((Method)PMethod2790, behavior);
    store_method(behavior, SMB_methods_, MC_SMB_methods_);
}


static void init_SMB_methods() {
    Symbol SMB_methods = new_Symbol(L"methods");
    Array PThreadedCode2795 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Behavior_methods, (Optr)&t_method_return);
    Method PMethod2794 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2795, 1, slot_Kernel_Class_Behavior_methods);
    
    MethodClosure MC_SMB_methods = new_MethodClosure((Method)PMethod2794, behavior);
    store_method(behavior, SMB_methods, MC_SMB_methods);
}


static void init_SMB_layout() {
    Symbol SMB_layout = new_Symbol(L"layout");
    Array PThreadedCode2797 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Behavior_layout, (Optr)&t_method_return);
    Method PMethod2796 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2797, 1, slot_Kernel_Class_Behavior_layout);
    
    MethodClosure MC_SMB_layout = new_MethodClosure((Method)PMethod2796, behavior);
    store_method(behavior, SMB_layout, MC_SMB_layout);
}


static void init_SMB_allSelectorsBelow_() {
    Symbol SMB_allSelectorsBelow_ = new_Symbol(L"allSelectorsBelow:");
    Variable VAR_topClass_0_0 = new_Variable_named(L"topClass", 0);
    Array PArray2799 = new_Array_with(1, (Optr)VAR_topClass_0_0);
    Variable VAR_coll_0_1 = new_Variable_named(L"coll", 0);
    Array PArray2800 = new_Array_with(1, (Optr)VAR_coll_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2803 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend2806 = new_Send((Optr)IdentitySet_classReference, SMB_new, 0);
    Assign PAssign2805 = new_Assign((Optr)VAR_coll_0_1, (Optr)PSend2806);
    Variable VAR_aClass_2_0 = new_Variable_named(L"aClass", 2);
    Array PArray2808 = new_Array_with(1, (Optr)VAR_aClass_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend2810 = new_Send((Optr)VAR_aClass_2_0, SMB__equals_, 1, (Optr)VAR_topClass_0_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend2814 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_coll_0_1);
    Array PThreadedCode2813 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_coll_0_1, (Optr)&t_send1, (Optr)PSend2814, (Optr)&t_block_return);
    Block PBlock2812 = new_Block_with(empty_Array, empty_Array, PThreadedCode2813, 1, PSend2814);
    Variable VAR_sel_3_0 = new_Variable_named(L"sel", 3);
    Array PArray2818 = new_Array_with(1, (Optr)VAR_sel_3_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend2820 = new_Send((Optr)VAR_coll_0_1, SMB_add_, 1, (Optr)VAR_sel_3_0);
    Array PThreadedCode2819 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_coll_0_1, (Optr)&t_push_variable, (Optr)VAR_sel_3_0, (Optr)&t_send1, (Optr)PSend2820, (Optr)&t_method_return);
    Block PBlock2817 = new_Block_with(PArray2818, empty_Array, PThreadedCode2819, 1, PSend2820);
    Symbol SMB_selectorsDo_ = new_Symbol(L"selectorsDo:");
    // selectorsDo:. 
    Send PSend2821 = new_Send((Optr)VAR_aClass_2_0, SMB_selectorsDo_, 1, (Optr)PBlock2817);
    Array PThreadedCode2816 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aClass_2_0, (Optr)&t_push_closure, (Optr)PBlock2817, (Optr)&t_send1, (Optr)PSend2821, (Optr)&t_block_return);
    Block PBlock2815 = new_Block_with(empty_Array, empty_Array, PThreadedCode2816, 1, PSend2821);
    // ifTrue:ifFalse:. 
    Send PSend2811 = new_Send((Optr)PSend2810, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock2812, (Optr)PBlock2815);
    Array PThreadedCode2809 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aClass_2_0, (Optr)&t_push_variable, (Optr)VAR_topClass_0_0, (Optr)&t_send1, (Optr)PSend2810, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend2811, (Optr)PBlock2812, (Optr)PBlock2815, (Optr)&t_method_return);
    Block PBlock2807 = new_Block_with(PArray2808, empty_Array, PThreadedCode2809, 1, PSend2811);
    Symbol SMB_withAllSuperclassesDo_ = new_Symbol(L"withAllSuperclassesDo:");
    // withAllSuperclassesDo:. 
    Send PSend2822 = new_Send((Optr)self, SMB_withAllSuperclassesDo_, 1, (Optr)PBlock2807);
    Array PThreadedCode2804 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign2805, (Optr)&t_push_class_reference, (Optr)IdentitySet_classReference, (Optr)&t_send0, (Optr)PSend2806, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock2807, (Optr)&t_send1, (Optr)PSend2822, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_coll_0_1, (Optr)&t_method_return);
    Block PBlock2802 = new_Block_with(PArray2803, empty_Array, PThreadedCode2804, 3, PAssign2805, PSend2822, VAR_coll_0_1);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2823 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2802);
    Array PThreadedCode2801 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2802, (Optr)&t_send1, (Optr)PSend2823, (Optr)&t_method_return);
    Method PMethod2798 = new_Method_with(PArray2799, PArray2800, empty_Array, PThreadedCode2801, 1, PSend2823);
    
    MethodClosure MC_SMB_allSelectorsBelow_ = new_MethodClosure((Method)PMethod2798, behavior);
    store_method(behavior, SMB_allSelectorsBelow_, MC_SMB_allSelectorsBelow_);
}


static void init_SMB_superclass() {
    Symbol SMB_superclass = new_Symbol(L"superclass");
    Array PThreadedCode2825 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Behavior_superclass, (Optr)&t_method_return);
    Method PMethod2824 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2825, 1, slot_Kernel_Class_Behavior_superclass);
    
    MethodClosure MC_SMB_superclass = new_MethodClosure((Method)PMethod2824, behavior);
    store_method(behavior, SMB_superclass, MC_SMB_superclass);
}


static void init_SMB_definesSlot_() {
    Symbol SMB_definesSlot_ = new_Symbol(L"definesSlot:");
    Variable VAR_name_0_0 = new_Variable_named(L"name", 0);
    Array PArray2827 = new_Array_with(1, (Optr)VAR_name_0_0);
    Symbol SMB_includesSlot_ = new_Symbol(L"includesSlot:");
    // includesSlot:. 
    Send PSend2829 = new_Send((Optr)slot_Kernel_Class_Behavior_layout, SMB_includesSlot_, 1, (Optr)VAR_name_0_0);
    Array PThreadedCode2828 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Behavior_layout, (Optr)&t_push_variable, (Optr)VAR_name_0_0, (Optr)&t_send1, (Optr)PSend2829, (Optr)&t_method_return);
    Method PMethod2826 = new_Method_with(PArray2827, empty_Array, empty_Array, PThreadedCode2828, 1, PSend2829);
    
    MethodClosure MC_SMB_definesSlot_ = new_MethodClosure((Method)PMethod2826, behavior);
    store_method(behavior, SMB_definesSlot_, MC_SMB_definesSlot_);
}


static void init_SMB_superclass_() {
    Symbol SMB_superclass_ = new_Symbol(L"superclass:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray2831 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign2833 = new_Assign((Optr)slot_Kernel_Class_Behavior_superclass, (Optr)VAR_anObject_0_0);
    Array PThreadedCode2832 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign2833, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod2830 = new_Method_with(PArray2831, empty_Array, empty_Array, PThreadedCode2832, 2, PAssign2833, self);
    
    MethodClosure MC_SMB_superclass_ = new_MethodClosure((Method)PMethod2830, behavior);
    store_method(behavior, SMB_superclass_, MC_SMB_superclass_);
}


static void init_SMB_basicNew() {
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Symbol SMB_basicInstantiate_ = new_Symbol(L"basicInstantiate:");
    // basicInstantiate:. 
    Send PSend2836 = new_Send((Optr)slot_Kernel_Class_Behavior_layout, SMB_basicInstantiate_, 1, (Optr)self);
    Array PThreadedCode2835 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Behavior_layout, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2836, (Optr)&t_method_return);
    Method PMethod2834 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2835, 1, PSend2836);
    
    MethodClosure MC_SMB_basicNew = new_MethodClosure((Method)PMethod2834, behavior);
    store_method(behavior, SMB_basicNew, MC_SMB_basicNew);
}


static void init_SMB_selectors() {
    Symbol SMB_selectors = new_Symbol(L"selectors");
    Symbol SMB_methodDict = new_Symbol(L"methodDict");
    // methodDict. 
    Send PSend2839 = new_Send((Optr)self, SMB_methodDict, 0);
    Symbol SMB_keys = new_Symbol(L"keys");
    // keys. 
    Send PSend2840 = new_Send((Optr)PSend2839, SMB_keys, 0);
    Array PThreadedCode2838 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2839, (Optr)&t_send0, (Optr)PSend2840, (Optr)&t_method_return);
    Method PMethod2837 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2838, 1, PSend2840);
    
    MethodClosure MC_SMB_selectors = new_MethodClosure((Method)PMethod2837, behavior);
    store_method(behavior, SMB_selectors, MC_SMB_selectors);
}


static void init_SMB_inheritsFrom_() {
    Symbol SMB_inheritsFrom_ = new_Symbol(L"inheritsFrom:");
    Variable VAR_aClass_0_0 = new_Variable_named(L"aClass", 0);
    Array PArray2842 = new_Array_with(1, (Optr)VAR_aClass_0_0);
    Variable VAR_aSuperclass_0_1 = new_Variable_named(L"aSuperclass", 0);
    Array PArray2843 = new_Array_with(1, (Optr)VAR_aSuperclass_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2846 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign2848 = new_Assign((Optr)VAR_aSuperclass_0_1, (Optr)slot_Kernel_Class_Behavior_superclass);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend2851 = new_Send((Optr)VAR_aSuperclass_0_1, SMB__pequals_, 1, (Optr)nil_Const);
    Array PThreadedCode2850 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aSuperclass_0_1, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend2851, (Optr)&t_block_return);
    Block PBlock2849 = new_Block_with(empty_Array, empty_Array, PThreadedCode2850, 1, PSend2851);
    // ==. 
    Send PSend2854 = new_Send((Optr)VAR_aSuperclass_0_1, SMB__pequals_, 1, (Optr)VAR_aClass_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend2858 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode2857 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend2858, (Optr)&t_block_return);
    Block PBlock2856 = new_Block_with(empty_Array, empty_Array, PThreadedCode2857, 1, PSend2858);
    // ifTrue:. 
    Send PSend2855 = new_Send((Optr)PSend2854, SMB_ifTrue_, 1, (Optr)PBlock2856);
    Symbol SMB_superclass = new_Symbol(L"superclass");
    // superclass. 
    Send PSend2860 = new_Send((Optr)VAR_aSuperclass_0_1, SMB_superclass, 0);
    Assign PAssign2859 = new_Assign((Optr)VAR_aSuperclass_0_1, (Optr)PSend2860);
    Array PThreadedCode2853 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_aSuperclass_0_1, (Optr)&t_push_variable, (Optr)VAR_aClass_0_0, (Optr)&t_send1, (Optr)PSend2854, (Optr)&t_send_ifTrue_, (Optr)PSend2855, (Optr)PBlock2856, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign2859, (Optr)&t_push_variable, (Optr)VAR_aSuperclass_0_1, (Optr)&t_send0, (Optr)PSend2860, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock2852 = new_Block_with(empty_Array, empty_Array, PThreadedCode2853, 2, PSend2855, PAssign2859);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend2861 = new_Send((Optr)PBlock2849, SMB_whileFalse_, 1, (Optr)PBlock2852);
    Array PThreadedCode2847 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign2848, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Behavior_superclass, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock2849, (Optr)&t_push_closure, (Optr)PBlock2852, (Optr)&t_send1, (Optr)PSend2861, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock2845 = new_Block_with(PArray2846, empty_Array, PThreadedCode2847, 3, PAssign2848, PSend2861, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2862 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2845);
    Array PThreadedCode2844 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2845, (Optr)&t_send1, (Optr)PSend2862, (Optr)&t_method_return);
    Method PMethod2841 = new_Method_with(PArray2842, PArray2843, empty_Array, PThreadedCode2844, 1, PSend2862);
    
    MethodClosure MC_SMB_inheritsFrom_ = new_MethodClosure((Method)PMethod2841, behavior);
    store_method(behavior, SMB_inheritsFrom_, MC_SMB_inheritsFrom_);
}


static void init_SMB_basicNew_() {
    Symbol SMB_basicNew_ = new_Symbol(L"basicNew:");
    Variable VAR_sizeRequested_0_0 = new_Variable_named(L"sizeRequested", 0);
    Array PArray2864 = new_Array_with(1, (Optr)VAR_sizeRequested_0_0);
    Symbol SMB_basicInstantiate_sized_ = new_Symbol(L"basicInstantiate:sized:");
    // basicInstantiate:sized:. 
    Send PSend2866 = new_Send((Optr)slot_Kernel_Class_Behavior_layout, SMB_basicInstantiate_sized_, 2, (Optr)self, (Optr)VAR_sizeRequested_0_0);
    Array PThreadedCode2865 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Behavior_layout, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sizeRequested_0_0, (Optr)&t_send2, (Optr)PSend2866, (Optr)&t_method_return);
    Method PMethod2863 = new_Method_with(PArray2864, empty_Array, empty_Array, PThreadedCode2865, 1, PSend2866);
    
    MethodClosure MC_SMB_basicNew_ = new_MethodClosure((Method)PMethod2863, behavior);
    store_method(behavior, SMB_basicNew_, MC_SMB_basicNew_);
}


static void init_SMB_selectorsDo_() {
    Symbol SMB_selectorsDo_ = new_Symbol(L"selectorsDo:");
    Variable VAR_selectorBlock_0_0 = new_Variable_named(L"selectorBlock", 0);
    Array PArray2868 = new_Array_with(1, (Optr)VAR_selectorBlock_0_0);
    Symbol SMB_methodDict = new_Symbol(L"methodDict");
    // methodDict. 
    Send PSend2870 = new_Send((Optr)self, SMB_methodDict, 0);
    Symbol SMB_keysDo_ = new_Symbol(L"keysDo:");
    // keysDo:. 
    Send PSend2871 = new_Send((Optr)PSend2870, SMB_keysDo_, 1, (Optr)VAR_selectorBlock_0_0);
    Array PThreadedCode2869 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2870, (Optr)&t_push_variable, (Optr)VAR_selectorBlock_0_0, (Optr)&t_send1, (Optr)PSend2871, (Optr)&t_method_return);
    Method PMethod2867 = new_Method_with(PArray2868, empty_Array, empty_Array, PThreadedCode2869, 1, PSend2871);
    
    MethodClosure MC_SMB_selectorsDo_ = new_MethodClosure((Method)PMethod2867, behavior);
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