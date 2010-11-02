#include <lib/class/PEG/Range.h>


Optr layout_PEG_Range_Class_class;
Optr slot_PEG_Range_start;
Optr slot_PEG_Range_stop;
Optr layout_PEG_Range;


static void init_SMB_stop_() {
    Symbol SMB_stop_ = new_Symbol(L"stop:");
    Variable VAR_int_0_0 = new_Variable_named(L"int", 0);
    Array PArray18499 = new_Array_with(1, (Optr)VAR_int_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18502 = new_Send((Optr)VAR_int_0_0, SMB_asInteger, 0);
    Assign PAssign18501 = new_Assign((Optr)slot_PEG_Range_stop, (Optr)PSend18502);
    Array PThreadedCode18500 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign18501, (Optr)&t_push_variable, (Optr)VAR_int_0_0, (Optr)&t_send0, (Optr)PSend18502, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18498 = new_Method_with(PArray18499, empty_Array, empty_Array, PThreadedCode18500, 2, PAssign18501, self);
    
    MethodClosure MC_SMB_stop_ = new_MethodClosure((Method)PMethod18498, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_stop_, MC_SMB_stop_);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18504 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_char_0_1 = new_Variable_named(L"char", 0);
    Variable VAR_charValue_0_2 = new_Variable_named(L"charValue", 0);
    Array PArray18505 = new_Array_with(2, (Optr)VAR_char_0_1, (Optr)VAR_charValue_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18508 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend18511 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Assign PAssign18510 = new_Assign((Optr)VAR_char_0_1, (Optr)PSend18511);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18514 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18513 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18514, (Optr)&t_block_return);
    Block PBlock18512 = new_Block_with(empty_Array, empty_Array, PThreadedCode18513, 1, PSend18514);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend18515 = new_Send((Optr)VAR_char_0_1, SMB_ifNil_, 1, (Optr)PBlock18512);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18517 = new_Send((Optr)VAR_char_0_1, SMB_asInteger, 0);
    Assign PAssign18516 = new_Assign((Optr)VAR_charValue_0_2, (Optr)PSend18517);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend18518 = new_Send((Optr)VAR_charValue_0_2, SMB__lt_, 1, (Optr)slot_PEG_Range_start);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend18521 = new_Send((Optr)VAR_charValue_0_2, SMB__gt_, 1, (Optr)slot_PEG_Range_stop);
    Array PThreadedCode18520 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_stop, (Optr)&t_send1, (Optr)PSend18521, (Optr)&t_block_return);
    Block PBlock18519 = new_Block_with(empty_Array, empty_Array, PThreadedCode18520, 1, PSend18521);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend18522 = new_Send((Optr)PSend18518, SMB_or_, 1, (Optr)PBlock18519);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend18526 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18525 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18526, (Optr)&t_block_return);
    Block PBlock18524 = new_Block_with(empty_Array, empty_Array, PThreadedCode18525, 1, PSend18526);
    // ifTrue:. 
    Send PSend18523 = new_Send((Optr)PSend18522, SMB_ifTrue_, 1, (Optr)PBlock18524);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend18527 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend18528 = new_Send((Optr)PSend18527, SMB_push_, 1, (Optr)VAR_char_0_1);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend18529 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode18509 = instantiate_Array_with(ThreadedCode_Class, 0, 52, (Optr)&t_push1, (Optr)PAssign18510, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18511, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_push_closure, (Optr)PBlock18512, (Optr)&t_send1, (Optr)PSend18515, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18516, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_send0, (Optr)PSend18517, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_start, (Optr)&t_send1, (Optr)PSend18518, (Optr)&t_push_closure, (Optr)PBlock18519, (Optr)&t_send1, (Optr)PSend18522, (Optr)&t_send_ifTrue_, (Optr)PSend18523, (Optr)PBlock18524, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18527, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_send1, (Optr)PSend18528, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18529, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18507 = new_Block_with(PArray18508, empty_Array, PThreadedCode18509, 7, PAssign18510, PSend18515, PAssign18516, PSend18523, PSend18528, PSend18529, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18530 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18507);
    Array PThreadedCode18506 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18507, (Optr)&t_send1, (Optr)PSend18530, (Optr)&t_method_return);
    Method PMethod18503 = new_Method_with(PArray18504, PArray18505, empty_Array, PThreadedCode18506, 1, PSend18530);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod18503, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18532 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_char_0_1 = new_Variable_named(L"char", 0);
    Variable VAR_charValue_0_2 = new_Variable_named(L"charValue", 0);
    Array PArray18533 = new_Array_with(2, (Optr)VAR_char_0_1, (Optr)VAR_charValue_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18536 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend18539 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Assign PAssign18538 = new_Assign((Optr)VAR_char_0_1, (Optr)PSend18539);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18542 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18541 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18542, (Optr)&t_block_return);
    Block PBlock18540 = new_Block_with(empty_Array, empty_Array, PThreadedCode18541, 1, PSend18542);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend18543 = new_Send((Optr)VAR_char_0_1, SMB_ifNil_, 1, (Optr)PBlock18540);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18545 = new_Send((Optr)VAR_char_0_1, SMB_asInteger, 0);
    Assign PAssign18544 = new_Assign((Optr)VAR_charValue_0_2, (Optr)PSend18545);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend18546 = new_Send((Optr)VAR_charValue_0_2, SMB__lt_, 1, (Optr)slot_PEG_Range_start);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend18549 = new_Send((Optr)VAR_charValue_0_2, SMB__gt_, 1, (Optr)slot_PEG_Range_stop);
    Array PThreadedCode18548 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_stop, (Optr)&t_send1, (Optr)PSend18549, (Optr)&t_block_return);
    Block PBlock18547 = new_Block_with(empty_Array, empty_Array, PThreadedCode18548, 1, PSend18549);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend18550 = new_Send((Optr)PSend18546, SMB_or_, 1, (Optr)PBlock18547);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend18554 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18553 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18554, (Optr)&t_block_return);
    Block PBlock18552 = new_Block_with(empty_Array, empty_Array, PThreadedCode18553, 1, PSend18554);
    // ifTrue:. 
    Send PSend18551 = new_Send((Optr)PSend18550, SMB_ifTrue_, 1, (Optr)PBlock18552);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend18555 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode18537 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign18538, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18539, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_push_closure, (Optr)PBlock18540, (Optr)&t_send1, (Optr)PSend18543, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18544, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_send0, (Optr)PSend18545, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_start, (Optr)&t_send1, (Optr)PSend18546, (Optr)&t_push_closure, (Optr)PBlock18547, (Optr)&t_send1, (Optr)PSend18550, (Optr)&t_send_ifTrue_, (Optr)PSend18551, (Optr)PBlock18552, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18555, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18535 = new_Block_with(PArray18536, empty_Array, PThreadedCode18537, 6, PAssign18538, PSend18543, PAssign18544, PSend18551, PSend18555, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18556 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18535);
    Array PThreadedCode18534 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18535, (Optr)&t_send1, (Optr)PSend18556, (Optr)&t_method_return);
    Method PMethod18531 = new_Method_with(PArray18532, PArray18533, empty_Array, PThreadedCode18534, 1, PSend18556);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod18531, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
    Array PArray18558 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Character char_8388 = new_Character(L'[');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_8388_Const = new_Constant((Optr)char_8388);
    // <<. 
    Send PSend18560 = new_Send((Optr)VAR_stream_0_0, SMB__shiftLeft_, 1, (Optr)char_8388_Const);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend18561 = new_Send((Optr)slot_PEG_Range_start, SMB_asCharacter, 0);
    // <<. 
    Send PSend18562 = new_Send((Optr)PSend18560, SMB__shiftLeft_, 1, (Optr)PSend18561);
    Character char_2170 = new_Character(L'-');
    Constant char_2170_Const = new_Constant((Optr)char_2170);
    // <<. 
    Send PSend18563 = new_Send((Optr)PSend18562, SMB__shiftLeft_, 1, (Optr)char_2170_Const);
    // asCharacter. 
    Send PSend18564 = new_Send((Optr)slot_PEG_Range_stop, SMB_asCharacter, 0);
    // <<. 
    Send PSend18565 = new_Send((Optr)PSend18563, SMB__shiftLeft_, 1, (Optr)PSend18564);
    Character char_18566 = new_Character(L']');
    Constant char_18566_Const = new_Constant((Optr)char_18566);
    // <<. 
    Send PSend18567 = new_Send((Optr)PSend18565, SMB__shiftLeft_, 1, (Optr)char_18566_Const);
    Array PThreadedCode18559 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_push1, (Optr)char_8388, (Optr)&t_send1, (Optr)PSend18560, (Optr)&t_push_slot, (Optr)slot_PEG_Range_start, (Optr)&t_send0, (Optr)PSend18561, (Optr)&t_send1, (Optr)PSend18562, (Optr)&t_push1, (Optr)char_2170, (Optr)&t_send1, (Optr)PSend18563, (Optr)&t_push_slot, (Optr)slot_PEG_Range_stop, (Optr)&t_send0, (Optr)PSend18564, (Optr)&t_send1, (Optr)PSend18565, (Optr)&t_push1, (Optr)char_18566, (Optr)&t_send1, (Optr)PSend18567, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18557 = new_Method_with(PArray18558, empty_Array, empty_Array, PThreadedCode18559, 2, PSend18567, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod18557, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_start_() {
    Symbol SMB_start_ = new_Symbol(L"start:");
    Variable VAR_int_0_0 = new_Variable_named(L"int", 0);
    Array PArray18569 = new_Array_with(1, (Optr)VAR_int_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18572 = new_Send((Optr)VAR_int_0_0, SMB_asInteger, 0);
    Assign PAssign18571 = new_Assign((Optr)slot_PEG_Range_start, (Optr)PSend18572);
    Array PThreadedCode18570 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign18571, (Optr)&t_push_variable, (Optr)VAR_int_0_0, (Optr)&t_send0, (Optr)PSend18572, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18568 = new_Method_with(PArray18569, empty_Array, empty_Array, PThreadedCode18570, 2, PAssign18571, self);
    
    MethodClosure MC_SMB_start_ = new_MethodClosure((Method)PMethod18568, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_start_, MC_SMB_start_);
}


static void init_class_SMB_between_and_() {
    Symbol SMB_between_and_ = new_Symbol(L"between:and:");
    Variable VAR_start_0_0 = new_Variable_named(L"start", 0);
    Variable VAR_stop_0_1 = new_Variable_named(L"stop", 0);
    Array PArray18574 = new_Array_with(2, (Optr)VAR_start_0_0, (Optr)VAR_stop_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray18577 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_min_ = new_Symbol(L"min:");
    // min:. 
    Send PSend18579 = new_Send((Optr)VAR_start_0_0, SMB_min_, 1, (Optr)VAR_stop_0_1);
    Symbol SMB_start_ = new_Symbol(L"start:");
    // start:. 
    Send PSend18580 = new_Send((Optr)VAR__receiver__1_0, SMB_start_, 1, (Optr)PSend18579);
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend18581 = new_Send((Optr)VAR_start_0_0, SMB_max_, 1, (Optr)VAR_stop_0_1);
    Symbol SMB_stop_ = new_Symbol(L"stop:");
    // stop:. 
    Send PSend18582 = new_Send((Optr)VAR__receiver__1_0, SMB_stop_, 1, (Optr)PSend18581);
    Array PThreadedCode18578 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_push_variable, (Optr)VAR_stop_0_1, (Optr)&t_send1, (Optr)PSend18579, (Optr)&t_send1, (Optr)PSend18580, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_push_variable, (Optr)VAR_stop_0_1, (Optr)&t_send1, (Optr)PSend18581, (Optr)&t_send1, (Optr)PSend18582, (Optr)&t_method_return);
    Block PBlock18576 = new_Block_with(PArray18577, empty_Array, PThreadedCode18578, 2, PSend18580, PSend18582);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18583 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend18584 = new_Send((Optr)PBlock18576, SMB_value_, 1, (Optr)PSend18583);
    Array PThreadedCode18575 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock18576, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18583, (Optr)&t_send1, (Optr)PSend18584, (Optr)&t_method_return);
    Method PMethod18573 = new_Method_with(PArray18574, empty_Array, empty_Array, PThreadedCode18575, 1, PSend18584);
    
    MethodClosure MC_SMB_between_and_ = new_MethodClosure((Method)PMethod18573, HEADER(PEG_Range_Class));
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