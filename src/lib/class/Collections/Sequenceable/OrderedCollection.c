#include <lib/class/Collections/Sequenceable/OrderedCollection.h>


Optr layout_Collections_Sequenceable_OrderedCollection_Class_class;
Optr slot_Collections_Sequenceable_OrderedCollection_array;
Optr slot_Collections_Sequenceable_OrderedCollection_firstIndex;
Optr slot_Collections_Sequenceable_OrderedCollection_lastIndex;
Optr layout_Collections_Sequenceable_OrderedCollection;


static void init_SMB_add_() {
    Symbol SMB_add_ = new_Symbol(L"add:");
    Variable VAR_newObject_0_0 = new_Variable_named(L"newObject", 0);
    Array PArray12173 = new_Array_with(1, (Optr)VAR_newObject_0_0);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend12175 = new_Send((Optr)self, SMB_addLast_, 1, (Optr)VAR_newObject_0_0);
    Array PThreadedCode12174 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_newObject_0_0, (Optr)&t_send1, (Optr)PSend12175, (Optr)&t_method_return);
    Method PMethod12172 = new_Method_with(PArray12173, empty_Array, empty_Array, PThreadedCode12174, 1, PSend12175);
    
    MethodClosure MC_SMB_add_ = new_MethodClosure((Method)PMethod12172, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_add_, MC_SMB_add_);
}


static void init_SMB_addAll_() {
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray12177 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_addAllLast_ = new_Symbol(L"addAllLast:");
    // addAllLast:. 
    Send PSend12179 = new_Send((Optr)self, SMB_addAllLast_, 1, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode12178 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send1, (Optr)PSend12179, (Optr)&t_method_return);
    Method PMethod12176 = new_Method_with(PArray12177, empty_Array, empty_Array, PThreadedCode12178, 1, PSend12179);
    
    MethodClosure MC_SMB_addAll_ = new_MethodClosure((Method)PMethod12176, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_addAll_, MC_SMB_addAll_);
}


static void init_SMB_addAllLast_() {
    Symbol SMB_addAllLast_ = new_Symbol(L"addAllLast:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray12181 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray12184 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend12186 = new_Send((Optr)self, SMB_addLast_, 1, (Optr)VAR_each_1_0);
    Array PThreadedCode12185 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send1, (Optr)PSend12186, (Optr)&t_method_return);
    Block PBlock12183 = new_Block_with(PArray12184, empty_Array, PThreadedCode12185, 1, PSend12186);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend12187 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock12183);
    Array PThreadedCode12182 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock12183, (Optr)&t_send1, (Optr)PSend12187, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_method_return);
    Method PMethod12180 = new_Method_with(PArray12181, empty_Array, empty_Array, PThreadedCode12182, 2, PSend12187, VAR_aCollection_0_0);
    
    MethodClosure MC_SMB_addAllLast_ = new_MethodClosure((Method)PMethod12180, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_addAllLast_, MC_SMB_addAllLast_);
}


static void init_SMB_addFirst_() {
    Symbol SMB_addFirst_ = new_Symbol(L"addFirst:");
    Variable VAR_newObject_0_0 = new_Variable_named(L"newObject", 0);
    Array PArray12189 = new_Array_with(1, (Optr)VAR_newObject_0_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend12191 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_makeRoomAtFirst = new_Symbol(L"makeRoomAtFirst");
    // makeRoomAtFirst. 
    Send PSend12195 = new_Send((Optr)self, SMB_makeRoomAtFirst, 0);
    Array PThreadedCode12194 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12195, (Optr)&t_block_return);
    Block PBlock12193 = new_Block_with(empty_Array, empty_Array, PThreadedCode12194, 1, PSend12195);
    // ifTrue:. 
    Send PSend12192 = new_Send((Optr)PSend12191, SMB_ifTrue_, 1, (Optr)PBlock12193);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend12197 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign12196 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)PSend12197);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12198 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)VAR_newObject_0_0);
    Array PThreadedCode12190 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12191, (Optr)&t_send_ifTrue_, (Optr)PSend12192, (Optr)PBlock12193, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12196, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12197, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_variable, (Optr)VAR_newObject_0_0, (Optr)&t_send2, (Optr)PSend12198, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newObject_0_0, (Optr)&t_method_return);
    Method PMethod12188 = new_Method_with(PArray12189, empty_Array, empty_Array, PThreadedCode12190, 4, PSend12192, PAssign12196, PSend12198, VAR_newObject_0_0);
    
    MethodClosure MC_SMB_addFirst_ = new_MethodClosure((Method)PMethod12188, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_addFirst_, MC_SMB_addFirst_);
}


static void init_SMB_addLast_() {
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    Variable VAR_newObject_0_0 = new_Variable_named(L"newObject", 0);
    Array PArray12200 = new_Array_with(1, (Optr)VAR_newObject_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12202 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend12203 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, SMB__equals_, 1, (Optr)PSend12202);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_makeRoomAtLast = new_Symbol(L"makeRoomAtLast");
    // makeRoomAtLast. 
    Send PSend12207 = new_Send((Optr)self, SMB_makeRoomAtLast, 0);
    Array PThreadedCode12206 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12207, (Optr)&t_block_return);
    Block PBlock12205 = new_Block_with(empty_Array, empty_Array, PThreadedCode12206, 1, PSend12207);
    // ifTrue:. 
    Send PSend12204 = new_Send((Optr)PSend12203, SMB_ifTrue_, 1, (Optr)PBlock12205);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend12209 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign12208 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PSend12209);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12210 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)VAR_newObject_0_0);
    Array PThreadedCode12201 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12202, (Optr)&t_send1, (Optr)PSend12203, (Optr)&t_send_ifTrue_, (Optr)PSend12204, (Optr)PBlock12205, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12208, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12209, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_variable, (Optr)VAR_newObject_0_0, (Optr)&t_send2, (Optr)PSend12210, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newObject_0_0, (Optr)&t_method_return);
    Method PMethod12199 = new_Method_with(PArray12200, empty_Array, empty_Array, PThreadedCode12201, 4, PSend12204, PAssign12208, PSend12210, VAR_newObject_0_0);
    
    MethodClosure MC_SMB_addLast_ = new_MethodClosure((Method)PMethod12199, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_addLast_, MC_SMB_addLast_);
}


static void init_SMB_asArray() {
    Symbol SMB_asArray = new_Symbol(L"asArray");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12213 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12214 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend12213);
    // size. 
    Send PSend12215 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // replaceFrom:to:with:startingAt:. 
    Send PSend12216 = new_Send((Optr)PSend12214, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)PSend12215, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    Array PThreadedCode12212 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12213, (Optr)&t_send1, (Optr)PSend12214, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12215, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send4, (Optr)PSend12216, (Optr)&t_method_return);
    Method PMethod12211 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12212, 1, PSend12216);
    
    MethodClosure MC_SMB_asArray = new_MethodClosure((Method)PMethod12211, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_asArray, MC_SMB_asArray);
}


static void init_SMB_at_() {
    Symbol SMB_at_ = new_Symbol(L"at:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray12218 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12221 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // <. 
    Send PSend12223 = new_Send((Optr)VAR_anInteger_0_0, SMB__lt_, 1, (Optr)int_1_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend12226 = new_Send((Optr)VAR_anInteger_0_0, SMB__plus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend12227 = new_Send((Optr)PSend12226, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend12228 = new_Send((Optr)PSend12227, SMB__gt_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex);
    Array PThreadedCode12225 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12226, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12227, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_send1, (Optr)PSend12228, (Optr)&t_block_return);
    Block PBlock12224 = new_Block_with(empty_Array, empty_Array, PThreadedCode12225, 1, PSend12228);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend12229 = new_Send((Optr)PSend12223, SMB_or_, 1, (Optr)PBlock12224);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_errorNoSuchElement = new_Symbol(L"errorNoSuchElement");
    // errorNoSuchElement. 
    Send PSend12233 = new_Send((Optr)self, SMB_errorNoSuchElement, 0);
    Array PThreadedCode12232 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12233, (Optr)&t_block_return);
    Block PBlock12231 = new_Block_with(empty_Array, empty_Array, PThreadedCode12232, 1, PSend12233);
    // +. 
    Send PSend12236 = new_Send((Optr)VAR_anInteger_0_0, SMB__plus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    // -. 
    Send PSend12237 = new_Send((Optr)PSend12236, SMB__minus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend12238 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)PSend12237);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12239 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12238);
    Array PThreadedCode12235 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12236, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12237, (Optr)&t_send1, (Optr)PSend12238, (Optr)&t_send1, (Optr)PSend12239, (Optr)&t_block_return);
    Block PBlock12234 = new_Block_with(empty_Array, empty_Array, PThreadedCode12235, 1, PSend12239);
    // ifTrue:ifFalse:. 
    Send PSend12230 = new_Send((Optr)PSend12229, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock12231, (Optr)PBlock12234);
    Array PThreadedCode12222 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12223, (Optr)&t_push_closure, (Optr)PBlock12224, (Optr)&t_send1, (Optr)PSend12229, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend12230, (Optr)PBlock12231, (Optr)PBlock12234, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock12220 = new_Block_with(PArray12221, empty_Array, PThreadedCode12222, 2, PSend12230, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12240 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12220);
    Array PThreadedCode12219 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12220, (Optr)&t_send1, (Optr)PSend12240, (Optr)&t_method_return);
    Method PMethod12217 = new_Method_with(PArray12218, empty_Array, empty_Array, PThreadedCode12219, 1, PSend12240);
    
    MethodClosure MC_SMB_at_ = new_MethodClosure((Method)PMethod12217, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_at_, MC_SMB_at_);
}


static void init_SMB_at_put_() {
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Variable VAR_anObject_0_1 = new_Variable_named(L"anObject", 0);
    Array PArray12242 = new_Array_with(2, (Optr)VAR_anInteger_0_0, (Optr)VAR_anObject_0_1);
    Variable VAR_index_0_2 = new_Variable_named(L"index", 0);
    Array PArray12243 = new_Array_with(1, (Optr)VAR_index_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12246 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend12249 = new_Send((Optr)VAR_anInteger_0_0, SMB_asInteger, 0);
    Assign PAssign12248 = new_Assign((Optr)VAR_index_0_2, (Optr)PSend12249);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // <. 
    Send PSend12250 = new_Send((Optr)VAR_index_0_2, SMB__lt_, 1, (Optr)int_1_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend12253 = new_Send((Optr)VAR_index_0_2, SMB__plus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend12254 = new_Send((Optr)PSend12253, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend12255 = new_Send((Optr)PSend12254, SMB__gt_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex);
    Array PThreadedCode12252 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_index_0_2, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12253, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12254, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_send1, (Optr)PSend12255, (Optr)&t_block_return);
    Block PBlock12251 = new_Block_with(empty_Array, empty_Array, PThreadedCode12252, 1, PSend12255);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend12256 = new_Send((Optr)PSend12250, SMB_or_, 1, (Optr)PBlock12251);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_errorNoSuchElement = new_Symbol(L"errorNoSuchElement");
    // errorNoSuchElement. 
    Send PSend12260 = new_Send((Optr)self, SMB_errorNoSuchElement, 0);
    Array PThreadedCode12259 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12260, (Optr)&t_block_return);
    Block PBlock12258 = new_Block_with(empty_Array, empty_Array, PThreadedCode12259, 1, PSend12260);
    // +. 
    Send PSend12263 = new_Send((Optr)VAR_index_0_2, SMB__plus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    // -. 
    Send PSend12264 = new_Send((Optr)PSend12263, SMB__minus_, 1, (Optr)int_1_Const);
    // at:put:. 
    Send PSend12265 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)PSend12264, (Optr)VAR_anObject_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12266 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12265);
    Array PThreadedCode12262 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_0_2, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12263, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12264, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend12265, (Optr)&t_send1, (Optr)PSend12266, (Optr)&t_block_return);
    Block PBlock12261 = new_Block_with(empty_Array, empty_Array, PThreadedCode12262, 1, PSend12266);
    // ifTrue:ifFalse:. 
    Send PSend12257 = new_Send((Optr)PSend12256, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock12258, (Optr)PBlock12261);
    Array PThreadedCode12247 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign12248, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send0, (Optr)PSend12249, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12250, (Optr)&t_push_closure, (Optr)PBlock12251, (Optr)&t_send1, (Optr)PSend12256, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend12257, (Optr)PBlock12258, (Optr)PBlock12261, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock12245 = new_Block_with(PArray12246, empty_Array, PThreadedCode12247, 3, PAssign12248, PSend12257, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12267 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12245);
    Array PThreadedCode12244 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12245, (Optr)&t_send1, (Optr)PSend12267, (Optr)&t_method_return);
    Method PMethod12241 = new_Method_with(PArray12242, PArray12243, empty_Array, PThreadedCode12244, 1, PSend12267);
    
    MethodClosure MC_SMB_at_put_ = new_MethodClosure((Method)PMethod12241, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_at_put_, MC_SMB_at_put_);
}


static void init_SMB_collect_() {
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray12269 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Array PArray12270 = new_Array_with(1, (Optr)VAR_newCollection_0_1);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend12274 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12275 = new_Send((Optr)self, SMB_size, 0);
    // new:. 
    Send PSend12273 = new_Send((Optr)PSend12274, SMB_new_, 1, (Optr)PSend12275);
    Assign PAssign12272 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend12273);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray12277 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12279 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12280 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend12279);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend12281 = new_Send((Optr)VAR_newCollection_0_1, SMB_addLast_, 1, (Optr)PSend12280);
    Array PThreadedCode12278 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend12279, (Optr)&t_send1, (Optr)PSend12280, (Optr)&t_send1, (Optr)PSend12281, (Optr)&t_method_return);
    Block PBlock12276 = new_Block_with(PArray12277, empty_Array, PThreadedCode12278, 1, PSend12281);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend12282 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB_to_do_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PBlock12276);
    Array PThreadedCode12271 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign12272, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12274, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12275, (Optr)&t_send1, (Optr)PSend12273, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_closure, (Optr)PBlock12276, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend12282, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod12268 = new_Method_with(PArray12269, PArray12270, empty_Array, PThreadedCode12271, 3, PAssign12272, PSend12282, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_collect_ = new_MethodClosure((Method)PMethod12268, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_collect_, MC_SMB_collect_);
}


static void init_SMB_select_() {
    Symbol SMB_select_ = new_Symbol(L"select:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray12284 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Variable VAR_element_0_2 = new_Variable_named(L"element", 0);
    Array PArray12285 = new_Array_with(2, (Optr)VAR_newCollection_0_1, (Optr)VAR_element_0_2);
    Symbol SMB_copyEmpty = new_Symbol(L"copyEmpty");
    // copyEmpty. 
    Send PSend12288 = new_Send((Optr)self, SMB_copyEmpty, 0);
    Assign PAssign12287 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend12288);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray12290 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12293 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)VAR_index_1_0);
    Assign PAssign12292 = new_Assign((Optr)VAR_element_0_2, (Optr)PSend12293);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12294 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PAssign12292);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend12298 = new_Send((Optr)VAR_newCollection_0_1, SMB_addLast_, 1, (Optr)VAR_element_0_2);
    Array PThreadedCode12297 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_element_0_2, (Optr)&t_send1, (Optr)PSend12298, (Optr)&t_block_return);
    Block PBlock12296 = new_Block_with(empty_Array, empty_Array, PThreadedCode12297, 1, PSend12298);
    // ifTrue:. 
    Send PSend12295 = new_Send((Optr)PSend12294, SMB_ifTrue_, 1, (Optr)PBlock12296);
    Array PThreadedCode12291 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push1, (Optr)PAssign12292, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend12293, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend12294, (Optr)&t_send_ifTrue_, (Optr)PSend12295, (Optr)PBlock12296, (Optr)&t_method_return);
    Block PBlock12289 = new_Block_with(PArray12290, empty_Array, PThreadedCode12291, 1, PSend12295);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend12299 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB_to_do_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PBlock12289);
    Array PThreadedCode12286 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign12287, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12288, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_closure, (Optr)PBlock12289, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend12299, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod12283 = new_Method_with(PArray12284, PArray12285, empty_Array, PThreadedCode12286, 3, PAssign12287, PSend12299, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_select_ = new_MethodClosure((Method)PMethod12283, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_select_, MC_SMB_select_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray12301 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray12304 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12306 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12307 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend12306);
    Array PThreadedCode12305 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend12306, (Optr)&t_send1, (Optr)PSend12307, (Optr)&t_method_return);
    Block PBlock12303 = new_Block_with(PArray12304, empty_Array, PThreadedCode12305, 1, PSend12307);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend12308 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB_to_do_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PBlock12303);
    Array PThreadedCode12302 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_closure, (Optr)PBlock12303, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend12308, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12300 = new_Method_with(PArray12301, empty_Array, empty_Array, PThreadedCode12302, 2, PSend12308, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod12300, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_grow() {
    Symbol SMB_grow = new_Symbol(L"grow");
    Variable VAR_newArray_0_0 = new_Variable_named(L"newArray", 0);
    Array PArray12310 = new_Array_with(1, (Optr)VAR_newArray_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12315 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_growSize = new_Symbol(L"growSize");
    // growSize. 
    Send PSend12316 = new_Send((Optr)self, SMB_growSize, 0);
    // +. 
    Send PSend12314 = new_Send((Optr)PSend12315, SMB__plus_, 1, (Optr)PSend12316);
    // new:. 
    Send PSend12313 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend12314);
    Assign PAssign12312 = new_Assign((Optr)VAR_newArray_0_0, (Optr)PSend12313);
    // size. 
    Send PSend12317 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // replaceFrom:to:with:startingAt:. 
    Send PSend12318 = new_Send((Optr)VAR_newArray_0_0, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)PSend12317, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)int_1_Const);
    Assign PAssign12319 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)VAR_newArray_0_0);
    Array PThreadedCode12311 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign12312, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12315, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12316, (Optr)&t_send1, (Optr)PSend12314, (Optr)&t_send1, (Optr)PSend12313, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newArray_0_0, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12317, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend12318, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12319, (Optr)&t_push_variable, (Optr)VAR_newArray_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12309 = new_Method_with(empty_Array, PArray12310, empty_Array, PThreadedCode12311, 4, PAssign12312, PSend12318, PAssign12319, self);
    
    MethodClosure MC_SMB_grow = new_MethodClosure((Method)PMethod12309, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_grow, MC_SMB_grow);
}


static void init_SMB_growSize() {
    Symbol SMB_growSize = new_Symbol(L"growSize");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12322 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    Symbol SMB_max_ = new_Symbol(L"max:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // max:. 
    Send PSend12323 = new_Send((Optr)PSend12322, SMB_max_, 1, (Optr)int_2_Const);
    Array PThreadedCode12321 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12322, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend12323, (Optr)&t_method_return);
    Method PMethod12320 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12321, 1, PSend12323);
    
    MethodClosure MC_SMB_growSize = new_MethodClosure((Method)PMethod12320, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_growSize, MC_SMB_growSize);
}


static void init_SMB_makeRoomAtFirst() {
    Symbol SMB_makeRoomAtFirst = new_Symbol(L"makeRoomAtFirst");
    Variable VAR_delta_0_0 = new_Variable_named(L"delta", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray12325 = new_Array_with(2, (Optr)VAR_delta_0_0, (Optr)VAR_index_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12328 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12332 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // size. 
    Send PSend12333 = new_Send((Optr)self, SMB_size, 0);
    // -. 
    Send PSend12331 = new_Send((Optr)PSend12332, SMB__minus_, 1, (Optr)PSend12333);
    Assign PAssign12330 = new_Assign((Optr)VAR_delta_0_0, (Optr)PSend12331);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend12334 = new_Send((Optr)VAR_delta_0_0, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_grow = new_Symbol(L"grow");
    // grow. 
    Send PSend12338 = new_Send((Optr)self, SMB_grow, 0);
    // size. 
    Send PSend12341 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    // size. 
    Send PSend12342 = new_Send((Optr)self, SMB_size, 0);
    // -. 
    Send PSend12340 = new_Send((Optr)PSend12341, SMB__minus_, 1, (Optr)PSend12342);
    Assign PAssign12339 = new_Assign((Optr)VAR_delta_0_0, (Optr)PSend12340);
    Array PThreadedCode12337 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12338, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12339, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12341, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12342, (Optr)&t_send1, (Optr)PSend12340, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock12336 = new_Block_with(empty_Array, empty_Array, PThreadedCode12337, 2, PSend12338, PAssign12339);
    // ifTrue:. 
    Send PSend12335 = new_Send((Optr)PSend12334, SMB_ifTrue_, 1, (Optr)PBlock12336);
    // size. 
    Send PSend12343 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    // =. 
    Send PSend12344 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, SMB__equals_, 1, (Optr)PSend12343);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12348 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode12347 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12348, (Optr)&t_block_return);
    Block PBlock12346 = new_Block_with(empty_Array, empty_Array, PThreadedCode12347, 1, PSend12348);
    // ifTrue:. 
    Send PSend12345 = new_Send((Optr)PSend12344, SMB_ifTrue_, 1, (Optr)PBlock12346);
    // size. 
    Send PSend12350 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    Assign PAssign12349 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend12350);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend12353 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)VAR_delta_0_0);
    Array PThreadedCode12352 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_delta_0_0, (Optr)&t_send1, (Optr)PSend12353, (Optr)&t_block_return);
    Block PBlock12351 = new_Block_with(empty_Array, empty_Array, PThreadedCode12352, 1, PSend12353);
    // -. 
    Send PSend12356 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)VAR_delta_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend12357 = new_Send((Optr)PSend12356, SMB__plus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend12358 = new_Send((Optr)PSend12357, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12359 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)PSend12358);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12360 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)VAR_index_0_1, (Optr)PSend12359);
    // -. 
    Send PSend12361 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)VAR_delta_0_0);
    // +. 
    Send PSend12362 = new_Send((Optr)PSend12361, SMB__plus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    // -. 
    Send PSend12363 = new_Send((Optr)PSend12362, SMB__minus_, 1, (Optr)int_1_Const);
    // at:put:. 
    Send PSend12364 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)PSend12363, (Optr)nil_Const);
    // -. 
    Send PSend12366 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign12365 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend12366);
    Array PThreadedCode12355 = instantiate_Array_with(ThreadedCode_Class, 0, 52, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_delta_0_0, (Optr)&t_send1, (Optr)PSend12356, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12357, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12358, (Optr)&t_send1, (Optr)PSend12359, (Optr)&t_send2, (Optr)PSend12360, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_delta_0_0, (Optr)&t_send1, (Optr)PSend12361, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12362, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12363, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend12364, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12365, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12366, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock12354 = new_Block_with(empty_Array, empty_Array, PThreadedCode12355, 3, PSend12360, PSend12364, PAssign12365);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend12367 = new_Send((Optr)PBlock12351, SMB_whileTrue_, 1, (Optr)PBlock12354);
    // +. 
    Send PSend12369 = new_Send((Optr)VAR_delta_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign12368 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)PSend12369);
    // size. 
    Send PSend12371 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    Assign PAssign12370 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PSend12371);
    Array PThreadedCode12329 = instantiate_Array_with(ThreadedCode_Class, 0, 67, (Optr)&t_push1, (Optr)PAssign12330, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12332, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12333, (Optr)&t_send1, (Optr)PSend12331, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_delta_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12334, (Optr)&t_send_ifTrue_, (Optr)PSend12335, (Optr)PBlock12336, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12343, (Optr)&t_send1, (Optr)PSend12344, (Optr)&t_send_ifTrue_, (Optr)PSend12345, (Optr)PBlock12346, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12349, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12350, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock12351, (Optr)&t_push_closure, (Optr)PBlock12354, (Optr)&t_send1, (Optr)PSend12367, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12368, (Optr)&t_push_variable, (Optr)VAR_delta_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12369, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12370, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12371, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock12327 = new_Block_with(PArray12328, empty_Array, PThreadedCode12329, 8, PAssign12330, PSend12335, PSend12345, PAssign12349, PSend12367, PAssign12368, PAssign12370, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12372 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12327);
    Array PThreadedCode12326 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12327, (Optr)&t_send1, (Optr)PSend12372, (Optr)&t_method_return);
    Method PMethod12324 = new_Method_with(empty_Array, PArray12325, empty_Array, PThreadedCode12326, 1, PSend12372);
    
    MethodClosure MC_SMB_makeRoomAtFirst = new_MethodClosure((Method)PMethod12324, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_makeRoomAtFirst, MC_SMB_makeRoomAtFirst);
}


static void init_SMB_makeRoomAtLast() {
    Symbol SMB_makeRoomAtLast = new_Symbol(L"makeRoomAtLast");
    Variable VAR_newLast_0_0 = new_Variable_named(L"newLast", 0);
    Variable VAR_delta_0_1 = new_Variable_named(L"delta", 0);
    Array PArray12374 = new_Array_with(2, (Optr)VAR_newLast_0_0, (Optr)VAR_delta_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12377 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12380 = new_Send((Optr)self, SMB_size, 0);
    Assign PAssign12379 = new_Assign((Optr)VAR_newLast_0_0, (Optr)PSend12380);
    // size. 
    Send PSend12381 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    // size. 
    Send PSend12382 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend12383 = new_Send((Optr)PSend12381, SMB__minus_, 1, (Optr)PSend12382);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend12384 = new_Send((Optr)PSend12383, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_grow = new_Symbol(L"grow");
    // grow. 
    Send PSend12388 = new_Send((Optr)self, SMB_grow, 0);
    Array PThreadedCode12387 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12388, (Optr)&t_block_return);
    Block PBlock12386 = new_Block_with(empty_Array, empty_Array, PThreadedCode12387, 1, PSend12388);
    // ifTrue:. 
    Send PSend12385 = new_Send((Optr)PSend12384, SMB_ifTrue_, 1, (Optr)PBlock12386);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend12390 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign12389 = new_Assign((Optr)VAR_delta_0_1, (Optr)PSend12390);
    // =. 
    Send PSend12391 = new_Send((Optr)PAssign12389, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12395 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode12394 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12395, (Optr)&t_block_return);
    Block PBlock12393 = new_Block_with(empty_Array, empty_Array, PThreadedCode12394, 1, PSend12395);
    // ifTrue:. 
    Send PSend12392 = new_Send((Optr)PSend12391, SMB_ifTrue_, 1, (Optr)PBlock12393);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray12397 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend12399 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)VAR_delta_0_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12400 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)PSend12399);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12401 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)VAR_index_2_0, (Optr)PSend12400);
    // +. 
    Send PSend12402 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)VAR_delta_0_1);
    // at:put:. 
    Send PSend12403 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)PSend12402, (Optr)nil_Const);
    Array PThreadedCode12398 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_variable, (Optr)VAR_delta_0_1, (Optr)&t_send1, (Optr)PSend12399, (Optr)&t_send1, (Optr)PSend12400, (Optr)&t_send2, (Optr)PSend12401, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_variable, (Optr)VAR_delta_0_1, (Optr)&t_send1, (Optr)PSend12402, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend12403, (Optr)&t_method_return);
    Block PBlock12396 = new_Block_with(PArray12397, empty_Array, PThreadedCode12398, 2, PSend12401, PSend12403);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend12404 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_newLast_0_0, (Optr)PBlock12396);
    Assign PAssign12405 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)int_1_Const);
    Assign PAssign12406 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)VAR_newLast_0_0);
    Array PThreadedCode12378 = instantiate_Array_with(ThreadedCode_Class, 0, 59, (Optr)&t_push1, (Optr)PAssign12379, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12380, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12381, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12382, (Optr)&t_send1, (Optr)PSend12383, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12384, (Optr)&t_send_ifTrue_, (Optr)PSend12385, (Optr)PBlock12386, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12389, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12390, (Optr)&t_assign, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12391, (Optr)&t_send_ifTrue_, (Optr)PSend12392, (Optr)PBlock12393, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_newLast_0_0, (Optr)&t_push_closure, (Optr)PBlock12396, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend12404, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12405, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12406, (Optr)&t_push_variable, (Optr)VAR_newLast_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock12376 = new_Block_with(PArray12377, empty_Array, PThreadedCode12378, 7, PAssign12379, PSend12385, PSend12392, PSend12404, PAssign12405, PAssign12406, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12407 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12376);
    Array PThreadedCode12375 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12376, (Optr)&t_send1, (Optr)PSend12407, (Optr)&t_method_return);
    Method PMethod12373 = new_Method_with(empty_Array, PArray12374, empty_Array, PThreadedCode12375, 1, PSend12407);
    
    MethodClosure MC_SMB_makeRoomAtLast = new_MethodClosure((Method)PMethod12373, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_makeRoomAtLast, MC_SMB_makeRoomAtLast);
}


static void init_SMB_removeFirst() {
    Symbol SMB_removeFirst = new_Symbol(L"removeFirst");
    Variable VAR_firstObject_0_0 = new_Variable_named(L"firstObject", 0);
    Array PArray12409 = new_Array_with(1, (Optr)VAR_firstObject_0_0);
    Symbol SMB_emptyCheck = new_Symbol(L"emptyCheck");
    // emptyCheck. 
    Send PSend12411 = new_Send((Optr)self, SMB_emptyCheck, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12413 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    Assign PAssign12412 = new_Assign((Optr)VAR_firstObject_0_0, (Optr)PSend12413);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12414 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)nil_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend12416 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign12415 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)PSend12416);
    Array PThreadedCode12410 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12411, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12412, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12413, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend12414, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12415, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12416, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_firstObject_0_0, (Optr)&t_method_return);
    Method PMethod12408 = new_Method_with(empty_Array, PArray12409, empty_Array, PThreadedCode12410, 5, PSend12411, PAssign12412, PSend12414, PAssign12415, VAR_firstObject_0_0);
    
    MethodClosure MC_SMB_removeFirst = new_MethodClosure((Method)PMethod12408, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_removeFirst, MC_SMB_removeFirst);
}


static void init_SMB_removeLast() {
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    Variable VAR_lastObject_0_0 = new_Variable_named(L"lastObject", 0);
    Array PArray12418 = new_Array_with(1, (Optr)VAR_lastObject_0_0);
    Symbol SMB_emptyCheck = new_Symbol(L"emptyCheck");
    // emptyCheck. 
    Send PSend12420 = new_Send((Optr)self, SMB_emptyCheck, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12422 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex);
    Assign PAssign12421 = new_Assign((Optr)VAR_lastObject_0_0, (Optr)PSend12422);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12423 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)nil_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend12425 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign12424 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PSend12425);
    Array PThreadedCode12419 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12420, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12421, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_send1, (Optr)PSend12422, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend12423, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12424, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12425, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_lastObject_0_0, (Optr)&t_method_return);
    Method PMethod12417 = new_Method_with(empty_Array, PArray12418, empty_Array, PThreadedCode12419, 5, PSend12420, PAssign12421, PSend12423, PAssign12424, VAR_lastObject_0_0);
    
    MethodClosure MC_SMB_removeLast = new_MethodClosure((Method)PMethod12417, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_removeLast, MC_SMB_removeLast);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12431 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // //. 
    Send PSend12430 = new_Send((Optr)PSend12431, SMB__quotient_, 1, (Optr)int_3_Const);
    Symbol SMB_max_ = new_Symbol(L"max:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // max:. 
    Send PSend12429 = new_Send((Optr)PSend12430, SMB_max_, 1, (Optr)int_1_Const);
    Assign PAssign12428 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)PSend12429);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend12433 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign12432 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PSend12433);
    Array PThreadedCode12427 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign12428, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12431, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend12430, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12429, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12432, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12433, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12426 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12427, 3, PAssign12428, PAssign12432, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod12426, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_reset, MC_SMB_reset);
}


static void init_SMB_reverseDo_() {
    Symbol SMB_reverseDo_ = new_Symbol(L"reverseDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray12435 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray12436 = new_Array_with(1, (Optr)VAR_index_0_1);
    Assign PAssign12438 = new_Assign((Optr)VAR_index_0_1, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    // >=. 
    Send PSend12441 = new_Send((Optr)VAR_index_0_1, SMB__gt__equals_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    Array PThreadedCode12440 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12441, (Optr)&t_block_return);
    Block PBlock12439 = new_Block_with(empty_Array, empty_Array, PThreadedCode12440, 1, PSend12441);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12444 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12445 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend12444);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend12447 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign12446 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend12447);
    Array PThreadedCode12443 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend12444, (Optr)&t_send1, (Optr)PSend12445, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12446, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12447, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock12442 = new_Block_with(empty_Array, empty_Array, PThreadedCode12443, 2, PSend12445, PAssign12446);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend12448 = new_Send((Optr)PBlock12439, SMB_whileTrue_, 1, (Optr)PBlock12442);
    Array PThreadedCode12437 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign12438, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock12439, (Optr)&t_push_closure, (Optr)PBlock12442, (Optr)&t_send1, (Optr)PSend12448, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12434 = new_Method_with(PArray12435, PArray12436, empty_Array, PThreadedCode12437, 3, PAssign12438, PSend12448, self);
    
    MethodClosure MC_SMB_reverseDo_ = new_MethodClosure((Method)PMethod12434, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_reverseDo_, MC_SMB_reverseDo_);
}


static void init_SMB_reversed() {
    Symbol SMB_reversed = new_Symbol(L"reversed");
    Variable VAR_newCol_0_0 = new_Variable_named(L"newCol", 0);
    Array PArray12450 = new_Array_with(1, (Optr)VAR_newCol_0_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend12454 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12453 = new_Send((Optr)PSend12454, SMB_new, 0);
    Assign PAssign12452 = new_Assign((Optr)VAR_newCol_0_0, (Optr)PSend12453);
    Variable VAR_elem_1_0 = new_Variable_named(L"elem", 1);
    Array PArray12456 = new_Array_with(1, (Optr)VAR_elem_1_0);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend12458 = new_Send((Optr)VAR_newCol_0_0, SMB_addLast_, 1, (Optr)VAR_elem_1_0);
    Array PThreadedCode12457 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_newCol_0_0, (Optr)&t_push_variable, (Optr)VAR_elem_1_0, (Optr)&t_send1, (Optr)PSend12458, (Optr)&t_method_return);
    Block PBlock12455 = new_Block_with(PArray12456, empty_Array, PThreadedCode12457, 1, PSend12458);
    Symbol SMB_reverseDo_ = new_Symbol(L"reverseDo:");
    // reverseDo:. 
    Send PSend12459 = new_Send((Optr)self, SMB_reverseDo_, 1, (Optr)PBlock12455);
    Array PThreadedCode12451 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign12452, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12454, (Optr)&t_send0, (Optr)PSend12453, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock12455, (Optr)&t_send1, (Optr)PSend12459, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCol_0_0, (Optr)&t_method_return);
    Method PMethod12449 = new_Method_with(empty_Array, PArray12450, empty_Array, PThreadedCode12451, 3, PAssign12452, PSend12459, VAR_newCol_0_0);
    
    MethodClosure MC_SMB_reversed = new_MethodClosure((Method)PMethod12449, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_reversed, MC_SMB_reversed);
}


static void init_SMB_inspectChildrenOn_() {
    Symbol SMB_inspectChildrenOn_ = new_Symbol(L"inspectChildrenOn:");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
    Array PArray12461 = new_Array_with(1, (Optr)VAR_inspector_0_0);
    Variable VAR_value_1_0 = new_Variable_named(L"value", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray12464 = new_Array_with(2, (Optr)VAR_value_1_0, (Optr)VAR_index_1_1);
    Array PThreadedCode12467 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_value_1_0, (Optr)&t_block_return);
    Block PBlock12466 = new_Block_with(empty_Array, empty_Array, PThreadedCode12467, 1, VAR_value_1_0);
    Symbol SMB_child_value_ = new_Symbol(L"child:value:");
    // child:value:. 
    Send PSend12468 = new_Send((Optr)VAR_inspector_0_0, SMB_child_value_, 2, (Optr)VAR_index_1_1, (Optr)PBlock12466);
    Array PThreadedCode12465 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_closure, (Optr)PBlock12466, (Optr)&t_send2, (Optr)PSend12468, (Optr)&t_method_return);
    Block PBlock12463 = new_Block_with(PArray12464, empty_Array, PThreadedCode12465, 1, PSend12468);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend12469 = new_Send((Optr)self, SMB_withIndexDo_, 1, (Optr)PBlock12463);
    Array PThreadedCode12462 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock12463, (Optr)&t_send1, (Optr)PSend12469, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12460 = new_Method_with(PArray12461, empty_Array, empty_Array, PThreadedCode12462, 2, PSend12469, self);
    
    MethodClosure MC_SMB_inspectChildrenOn_ = new_MethodClosure((Method)PMethod12460, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_inspectChildrenOn_, MC_SMB_inspectChildrenOn_);
}


static void init_SMB_setCollection_() {
    Symbol SMB_setCollection_ = new_Symbol(L"setCollection:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray12471 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Assign PAssign12473 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)VAR_anArray_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend12474 = new_Send((Optr)self, SMB_reset, 0);
    Array PThreadedCode12472 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign12473, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12474, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12470 = new_Method_with(PArray12471, empty_Array, empty_Array, PThreadedCode12472, 3, PAssign12473, PSend12474, self);
    
    MethodClosure MC_SMB_setCollection_ = new_MethodClosure((Method)PMethod12470, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_setCollection_, MC_SMB_setCollection_);
}


static void init_SMB_size() {
    Symbol SMB_size = new_Symbol(L"size");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend12477 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, SMB__minus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend12478 = new_Send((Optr)PSend12477, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode12476 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12477, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12478, (Optr)&t_method_return);
    Method PMethod12475 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12476, 1, PSend12478);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PMethod12475, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_size, MC_SMB_size);
}


static void init_class_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray12480 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend12482 = new_Send((Optr)self, SMB_basicNew, 0);
    // new:. 
    Send PSend12483 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_setCollection_ = new_Symbol(L"setCollection:");
    // setCollection:. 
    Send PSend12484 = new_Send((Optr)PSend12482, SMB_setCollection_, 1, (Optr)PSend12483);
    Array PThreadedCode12481 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12482, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend12483, (Optr)&t_send1, (Optr)PSend12484, (Optr)&t_method_return);
    Method PMethod12479 = new_Method_with(PArray12480, empty_Array, empty_Array, PThreadedCode12481, 1, PSend12484);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PMethod12479, HEADER(Collections_Sequenceable_OrderedCollection_Class));
    store_method(HEADER(Collections_Sequenceable_OrderedCollection_Class), SMB_new_, MC_SMB_new_);
}


static void init_class_SMB_ofSize_() {
    Symbol SMB_ofSize_ = new_Symbol(L"ofSize:");
    Variable VAR_n_0_0 = new_Variable_named(L"n", 0);
    Array PArray12486 = new_Array_with(1, (Optr)VAR_n_0_0);
    Variable VAR_collection_0_1 = new_Variable_named(L"collection", 0);
    Array PArray12487 = new_Array_with(1, (Optr)VAR_collection_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12490 = new_Send((Optr)self, SMB_new_, 1, (Optr)VAR_n_0_0);
    Assign PAssign12489 = new_Assign((Optr)VAR_collection_0_1, (Optr)PSend12490);
    Symbol SMB_collector = new_Symbol(L"collector");
    // collector. 
    Send PSend12491 = new_Send((Optr)VAR_collection_0_1, SMB_collector, 0);
    Symbol SMB_setContents_ = new_Symbol(L"setContents:");
    // setContents:. 
    Send PSend12492 = new_Send((Optr)VAR_collection_0_1, SMB_setContents_, 1, (Optr)PSend12491);
    Array PThreadedCode12488 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign12489, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_n_0_0, (Optr)&t_send1, (Optr)PSend12490, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_collection_0_1, (Optr)&t_push_variable, (Optr)VAR_collection_0_1, (Optr)&t_send0, (Optr)PSend12491, (Optr)&t_send1, (Optr)PSend12492, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_collection_0_1, (Optr)&t_method_return);
    Method PMethod12485 = new_Method_with(PArray12486, PArray12487, empty_Array, PThreadedCode12488, 3, PAssign12489, PSend12492, VAR_collection_0_1);
    
    MethodClosure MC_SMB_ofSize_ = new_MethodClosure((Method)PMethod12485, HEADER(Collections_Sequenceable_OrderedCollection_Class));
    store_method(HEADER(Collections_Sequenceable_OrderedCollection_Class), SMB_ofSize_, MC_SMB_ofSize_);
}


static void init_class_SMB_new_withAll_() {
    Symbol SMB_new_withAll_ = new_Symbol(L"new:withAll:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Variable VAR_anObject_0_1 = new_Variable_named(L"anObject", 0);
    Array PArray12494 = new_Array_with(2, (Optr)VAR_anInteger_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend12496 = new_Send((Optr)self, SMB_basicNew, 0);
    // new:withAll:. 
    Send PSend12497 = new_Send((Optr)Array_classReference, SMB_new_withAll_, 2, (Optr)VAR_anInteger_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_setContents_ = new_Symbol(L"setContents:");
    // setContents:. 
    Send PSend12498 = new_Send((Optr)PSend12496, SMB_setContents_, 1, (Optr)PSend12497);
    Array PThreadedCode12495 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12496, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend12497, (Optr)&t_send1, (Optr)PSend12498, (Optr)&t_method_return);
    Method PMethod12493 = new_Method_with(PArray12494, empty_Array, empty_Array, PThreadedCode12495, 1, PSend12498);
    
    MethodClosure MC_SMB_new_withAll_ = new_MethodClosure((Method)PMethod12493, HEADER(Collections_Sequenceable_OrderedCollection_Class));
    store_method(HEADER(Collections_Sequenceable_OrderedCollection_Class), SMB_new_withAll_, MC_SMB_new_withAll_);
}


static void init_class_SMB_new() {
    /*
    new
// 	"The receiver can only have one instance. Create it or complain that
// 	one already exists."
// 
// 	thisClass class ~~ self
// 		ifTrue: [^thisClass := self basicNew]
// 		ifFalse: [self error: 'A Metaclass should only have one instance!']
    */
    Symbol SMB_new = new_Symbol(L"new");
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // new:. 
    Send PSend12501 = new_Send((Optr)self, SMB_new_, 1, (Optr)int_10_Const);
    Array PThreadedCode12500 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend12501, (Optr)&t_method_return);
    Method PMethod12499 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12500, 1, PSend12501);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod12499, HEADER(Collections_Sequenceable_OrderedCollection_Class));
    store_method(HEADER(Collections_Sequenceable_OrderedCollection_Class), SMB_new, MC_SMB_new);
}


static void init_class_SMB_newFrom_() {
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray12503 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Array PArray12504 = new_Array_with(1, (Optr)VAR_newCollection_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12508 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    // new:. 
    Send PSend12507 = new_Send((Optr)self, SMB_new_, 1, (Optr)PSend12508);
    Assign PAssign12506 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend12507);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend12509 = new_Send((Optr)VAR_newCollection_0_1, SMB_addAll_, 1, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode12505 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign12506, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend12508, (Optr)&t_send1, (Optr)PSend12507, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send1, (Optr)PSend12509, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod12502 = new_Method_with(PArray12503, PArray12504, empty_Array, PThreadedCode12505, 3, PAssign12506, PSend12509, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_newFrom_ = new_MethodClosure((Method)PMethod12502, HEADER(Collections_Sequenceable_OrderedCollection_Class));
    store_method(HEADER(Collections_Sequenceable_OrderedCollection_Class), SMB_newFrom_, MC_SMB_newFrom_);
}

void init_Collections_Sequenceable_OrderedCollection_layout() {
    layout_Collections_Sequenceable_OrderedCollection_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collections_Sequenceable_OrderedCollection_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Collections_Sequenceable_OrderedCollection_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Collections_Sequenceable_OrderedCollection_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Collections_Sequenceable_OrderedCollection_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Collections_Sequenceable_OrderedCollection_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_OrderedCollection = new_Symbol(L"OrderedCollection");
    slot_Collections_Sequenceable_OrderedCollection_array = (Optr)new_Slot(0, L"array");
    slot_Collections_Sequenceable_OrderedCollection_firstIndex = (Optr)new_Slot(1, L"firstIndex");
    slot_Collections_Sequenceable_OrderedCollection_lastIndex = (Optr)new_Slot(2, L"lastIndex");
    layout_Collections_Sequenceable_OrderedCollection = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Collections_Sequenceable_OrderedCollection)->values[0] = slot_Collections_Sequenceable_OrderedCollection_array; // array 
    ((Array)layout_Collections_Sequenceable_OrderedCollection)->values[1] = slot_Collections_Sequenceable_OrderedCollection_firstIndex; // firstIndex 
    ((Array)layout_Collections_Sequenceable_OrderedCollection)->values[2] = slot_Collections_Sequenceable_OrderedCollection_lastIndex; // lastIndex 
    Collections_Sequenceable_OrderedCollection_Class = (Class)new_Class(Collections_Abstract_SequenceableCollection_Class, layout_Collections_Sequenceable_OrderedCollection_Class_class);
    Collections_Sequenceable_OrderedCollection_Class->layout = layout_Collections_Sequenceable_OrderedCollection;
    Collections_Sequenceable_OrderedCollection_Class->name = SMB_OrderedCollection;
    
}

void init_Collections_Sequenceable_OrderedCollection_methods() {
    init_SMB_add_();
    init_SMB_addAll_();
    init_SMB_addAllLast_();
    init_SMB_addFirst_();
    init_SMB_addLast_();
    init_SMB_asArray();
    init_SMB_at_();
    init_SMB_at_put_();
    init_SMB_collect_();
    init_SMB_select_();
    init_SMB_do_();
    init_SMB_grow();
    init_SMB_growSize();
    init_SMB_makeRoomAtFirst();
    init_SMB_makeRoomAtLast();
    init_SMB_removeFirst();
    init_SMB_removeLast();
    init_SMB_reset();
    init_SMB_reverseDo_();
    init_SMB_reversed();
    init_SMB_inspectChildrenOn_();
    init_SMB_setCollection_();
    init_SMB_size();
    init_class_SMB_new_();
    init_class_SMB_ofSize_();
    init_class_SMB_new_withAll_();
    init_class_SMB_new();
    init_class_SMB_newFrom_();
    
}