#include <lib/class/PEG/Range.h>


Optr layout_PEG_Range_Class_class;
Optr slot_PEG_Range_start;
Optr slot_PEG_Range_stop;
Optr layout_PEG_Range;


static void init_SMB_stop_() {
    Symbol SMB_stop_ = new_Symbol(L"stop:");
    Variable VAR_int_0_0 = new_Variable_named(L"int", 0);
    Array PArray18517 = new_Array_with(1, (Optr)VAR_int_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18520 = new_Send((Optr)VAR_int_0_0, SMB_asInteger, 0);
    Assign PAssign18519 = new_Assign((Optr)slot_PEG_Range_stop, (Optr)PSend18520);
    Array PThreadedCode18518 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign18519, (Optr)&t_push_variable, (Optr)VAR_int_0_0, (Optr)&t_send0, (Optr)PSend18520, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18516 = new_Method_with(PArray18517, empty_Array, empty_Array, PThreadedCode18518, 2, PAssign18519, self);
    
    MethodClosure MC_SMB_stop_ = new_MethodClosure((Method)PMethod18516, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_stop_, MC_SMB_stop_);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18522 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_char_0_1 = new_Variable_named(L"char", 0);
    Variable VAR_charValue_0_2 = new_Variable_named(L"charValue", 0);
    Array PArray18523 = new_Array_with(2, (Optr)VAR_char_0_1, (Optr)VAR_charValue_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18526 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend18529 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Assign PAssign18528 = new_Assign((Optr)VAR_char_0_1, (Optr)PSend18529);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18532 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18531 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18532, (Optr)&t_block_return);
    Block PBlock18530 = new_Block_with(empty_Array, empty_Array, PThreadedCode18531, 1, PSend18532);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend18533 = new_Send((Optr)VAR_char_0_1, SMB_ifNil_, 1, (Optr)PBlock18530);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18535 = new_Send((Optr)VAR_char_0_1, SMB_asInteger, 0);
    Assign PAssign18534 = new_Assign((Optr)VAR_charValue_0_2, (Optr)PSend18535);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend18536 = new_Send((Optr)VAR_charValue_0_2, SMB__lt_, 1, (Optr)slot_PEG_Range_start);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend18539 = new_Send((Optr)VAR_charValue_0_2, SMB__gt_, 1, (Optr)slot_PEG_Range_stop);
    Array PThreadedCode18538 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_stop, (Optr)&t_send1, (Optr)PSend18539, (Optr)&t_block_return);
    Block PBlock18537 = new_Block_with(empty_Array, empty_Array, PThreadedCode18538, 1, PSend18539);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend18540 = new_Send((Optr)PSend18536, SMB_or_, 1, (Optr)PBlock18537);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend18544 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18543 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18544, (Optr)&t_block_return);
    Block PBlock18542 = new_Block_with(empty_Array, empty_Array, PThreadedCode18543, 1, PSend18544);
    // ifTrue:. 
    Send PSend18541 = new_Send((Optr)PSend18540, SMB_ifTrue_, 1, (Optr)PBlock18542);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend18545 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend18546 = new_Send((Optr)PSend18545, SMB_push_, 1, (Optr)VAR_char_0_1);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend18547 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode18527 = instantiate_Array_with(ThreadedCode_Class, 0, 52, (Optr)&t_push1, (Optr)PAssign18528, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18529, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_push_closure, (Optr)PBlock18530, (Optr)&t_send1, (Optr)PSend18533, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18534, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_send0, (Optr)PSend18535, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_start, (Optr)&t_send1, (Optr)PSend18536, (Optr)&t_push_closure, (Optr)PBlock18537, (Optr)&t_send1, (Optr)PSend18540, (Optr)&t_send_ifTrue_, (Optr)PSend18541, (Optr)PBlock18542, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18545, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_send1, (Optr)PSend18546, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18547, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18525 = new_Block_with(PArray18526, empty_Array, PThreadedCode18527, 7, PAssign18528, PSend18533, PAssign18534, PSend18541, PSend18546, PSend18547, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18548 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18525);
    Array PThreadedCode18524 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18525, (Optr)&t_send1, (Optr)PSend18548, (Optr)&t_method_return);
    Method PMethod18521 = new_Method_with(PArray18522, PArray18523, empty_Array, PThreadedCode18524, 1, PSend18548);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod18521, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18550 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_char_0_1 = new_Variable_named(L"char", 0);
    Variable VAR_charValue_0_2 = new_Variable_named(L"charValue", 0);
    Array PArray18551 = new_Array_with(2, (Optr)VAR_char_0_1, (Optr)VAR_charValue_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18554 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend18557 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Assign PAssign18556 = new_Assign((Optr)VAR_char_0_1, (Optr)PSend18557);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18560 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18559 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18560, (Optr)&t_block_return);
    Block PBlock18558 = new_Block_with(empty_Array, empty_Array, PThreadedCode18559, 1, PSend18560);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend18561 = new_Send((Optr)VAR_char_0_1, SMB_ifNil_, 1, (Optr)PBlock18558);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18563 = new_Send((Optr)VAR_char_0_1, SMB_asInteger, 0);
    Assign PAssign18562 = new_Assign((Optr)VAR_charValue_0_2, (Optr)PSend18563);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend18564 = new_Send((Optr)VAR_charValue_0_2, SMB__lt_, 1, (Optr)slot_PEG_Range_start);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend18567 = new_Send((Optr)VAR_charValue_0_2, SMB__gt_, 1, (Optr)slot_PEG_Range_stop);
    Array PThreadedCode18566 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_stop, (Optr)&t_send1, (Optr)PSend18567, (Optr)&t_block_return);
    Block PBlock18565 = new_Block_with(empty_Array, empty_Array, PThreadedCode18566, 1, PSend18567);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend18568 = new_Send((Optr)PSend18564, SMB_or_, 1, (Optr)PBlock18565);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend18572 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18571 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18572, (Optr)&t_block_return);
    Block PBlock18570 = new_Block_with(empty_Array, empty_Array, PThreadedCode18571, 1, PSend18572);
    // ifTrue:. 
    Send PSend18569 = new_Send((Optr)PSend18568, SMB_ifTrue_, 1, (Optr)PBlock18570);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend18573 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode18555 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign18556, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18557, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_push_closure, (Optr)PBlock18558, (Optr)&t_send1, (Optr)PSend18561, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18562, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_send0, (Optr)PSend18563, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_start, (Optr)&t_send1, (Optr)PSend18564, (Optr)&t_push_closure, (Optr)PBlock18565, (Optr)&t_send1, (Optr)PSend18568, (Optr)&t_send_ifTrue_, (Optr)PSend18569, (Optr)PBlock18570, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18573, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18553 = new_Block_with(PArray18554, empty_Array, PThreadedCode18555, 6, PAssign18556, PSend18561, PAssign18562, PSend18569, PSend18573, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18574 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18553);
    Array PThreadedCode18552 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18553, (Optr)&t_send1, (Optr)PSend18574, (Optr)&t_method_return);
    Method PMethod18549 = new_Method_with(PArray18550, PArray18551, empty_Array, PThreadedCode18552, 1, PSend18574);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod18549, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
    Array PArray18576 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Character char_8412 = new_Character(L'[');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_8412_Const = new_Constant((Optr)char_8412);
    // <<. 
    Send PSend18578 = new_Send((Optr)VAR_stream_0_0, SMB__shiftLeft_, 1, (Optr)char_8412_Const);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend18579 = new_Send((Optr)slot_PEG_Range_start, SMB_asCharacter, 0);
    // <<. 
    Send PSend18580 = new_Send((Optr)PSend18578, SMB__shiftLeft_, 1, (Optr)PSend18579);
    Character char_2173 = new_Character(L'-');
    Constant char_2173_Const = new_Constant((Optr)char_2173);
    // <<. 
    Send PSend18581 = new_Send((Optr)PSend18580, SMB__shiftLeft_, 1, (Optr)char_2173_Const);
    // asCharacter. 
    Send PSend18582 = new_Send((Optr)slot_PEG_Range_stop, SMB_asCharacter, 0);
    // <<. 
    Send PSend18583 = new_Send((Optr)PSend18581, SMB__shiftLeft_, 1, (Optr)PSend18582);
    Character char_18584 = new_Character(L']');
    Constant char_18584_Const = new_Constant((Optr)char_18584);
    // <<. 
    Send PSend18585 = new_Send((Optr)PSend18583, SMB__shiftLeft_, 1, (Optr)char_18584_Const);
    Array PThreadedCode18577 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_push1, (Optr)char_8412, (Optr)&t_send1, (Optr)PSend18578, (Optr)&t_push_slot, (Optr)slot_PEG_Range_start, (Optr)&t_send0, (Optr)PSend18579, (Optr)&t_send1, (Optr)PSend18580, (Optr)&t_push1, (Optr)char_2173, (Optr)&t_send1, (Optr)PSend18581, (Optr)&t_push_slot, (Optr)slot_PEG_Range_stop, (Optr)&t_send0, (Optr)PSend18582, (Optr)&t_send1, (Optr)PSend18583, (Optr)&t_push1, (Optr)char_18584, (Optr)&t_send1, (Optr)PSend18585, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18575 = new_Method_with(PArray18576, empty_Array, empty_Array, PThreadedCode18577, 2, PSend18585, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod18575, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_start_() {
    Symbol SMB_start_ = new_Symbol(L"start:");
    Variable VAR_int_0_0 = new_Variable_named(L"int", 0);
    Array PArray18587 = new_Array_with(1, (Optr)VAR_int_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18590 = new_Send((Optr)VAR_int_0_0, SMB_asInteger, 0);
    Assign PAssign18589 = new_Assign((Optr)slot_PEG_Range_start, (Optr)PSend18590);
    Array PThreadedCode18588 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign18589, (Optr)&t_push_variable, (Optr)VAR_int_0_0, (Optr)&t_send0, (Optr)PSend18590, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18586 = new_Method_with(PArray18587, empty_Array, empty_Array, PThreadedCode18588, 2, PAssign18589, self);
    
    MethodClosure MC_SMB_start_ = new_MethodClosure((Method)PMethod18586, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_start_, MC_SMB_start_);
}


static void init_class_SMB_between_and_() {
    Symbol SMB_between_and_ = new_Symbol(L"between:and:");
    Variable VAR_start_0_0 = new_Variable_named(L"start", 0);
    Variable VAR_stop_0_1 = new_Variable_named(L"stop", 0);
    Array PArray18592 = new_Array_with(2, (Optr)VAR_start_0_0, (Optr)VAR_stop_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray18595 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_min_ = new_Symbol(L"min:");
    // min:. 
    Send PSend18597 = new_Send((Optr)VAR_start_0_0, SMB_min_, 1, (Optr)VAR_stop_0_1);
    Symbol SMB_start_ = new_Symbol(L"start:");
    // start:. 
    Send PSend18598 = new_Send((Optr)VAR__receiver__1_0, SMB_start_, 1, (Optr)PSend18597);
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend18599 = new_Send((Optr)VAR_start_0_0, SMB_max_, 1, (Optr)VAR_stop_0_1);
    Symbol SMB_stop_ = new_Symbol(L"stop:");
    // stop:. 
    Send PSend18600 = new_Send((Optr)VAR__receiver__1_0, SMB_stop_, 1, (Optr)PSend18599);
    Array PThreadedCode18596 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_push_variable, (Optr)VAR_stop_0_1, (Optr)&t_send1, (Optr)PSend18597, (Optr)&t_send1, (Optr)PSend18598, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_push_variable, (Optr)VAR_stop_0_1, (Optr)&t_send1, (Optr)PSend18599, (Optr)&t_send1, (Optr)PSend18600, (Optr)&t_method_return);
    Block PBlock18594 = new_Block_with(PArray18595, empty_Array, PThreadedCode18596, 2, PSend18598, PSend18600);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18601 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend18602 = new_Send((Optr)PBlock18594, SMB_value_, 1, (Optr)PSend18601);
    Array PThreadedCode18593 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock18594, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18601, (Optr)&t_send1, (Optr)PSend18602, (Optr)&t_method_return);
    Method PMethod18591 = new_Method_with(PArray18592, empty_Array, empty_Array, PThreadedCode18593, 1, PSend18602);
    
    MethodClosure MC_SMB_between_and_ = new_MethodClosure((Method)PMethod18591, HEADER(PEG_Range_Class));
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