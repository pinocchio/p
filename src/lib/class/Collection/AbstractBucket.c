#include <lib/class/Collection/AbstractBucket.h>


Optr layout_Collection_AbstractBucket_Class_class;
Optr slot_Collection_AbstractBucket_bucketSize;
Optr layout_Collection_AbstractBucket;


static void init_SMB_isFull() {
    Symbol SMB_isFull = new_Symbol(L"isFull");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6410 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6411 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__equals_, 1, (Optr)PSend6410);
    Array PThreadedCode6409 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6410, (Optr)&t_send1, (Optr)PSend6411, (Optr)&t_method_return);
    Method PMethod6408 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6409, 1, PSend6411);
    
    MethodClosure MC_SMB_isFull = new_MethodClosure((Method)PMethod6408, Collection_AbstractBucket_Class);
    store_method(Collection_AbstractBucket_Class, SMB_isFull, MC_SMB_isFull);
}


static void init_SMB_copyFrom_() {
    Symbol SMB_copyFrom_ = new_Symbol(L"copyFrom:");
    Variable VAR_aBucket_0_0 = new_Variable_named(L"aBucket", 0);
    Array PArray6413 = new_Array_with(1, (Optr)VAR_aBucket_0_0);
    Symbol SMB_bucketSize = new_Symbol(L"bucketSize");
    // bucketSize. 
    Send PSend6415 = new_Send((Optr)VAR_aBucket_0_0, SMB_bucketSize, 0);
    Variable VAR_idx_1_0 = new_Variable_named(L"idx", 1);
    Array PArray6417 = new_Array_with(1, (Optr)VAR_idx_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6419 = new_Send((Optr)VAR_aBucket_0_0, SMB_at_, 1, (Optr)VAR_idx_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6420 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)VAR_idx_1_0, (Optr)PSend6419);
    Array PThreadedCode6418 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_idx_1_0, (Optr)&t_push_variable, (Optr)VAR_aBucket_0_0, (Optr)&t_push_variable, (Optr)VAR_idx_1_0, (Optr)&t_send1, (Optr)PSend6419, (Optr)&t_send2, (Optr)PSend6420, (Optr)&t_method_return);
    Block PBlock6416 = new_Block_with(PArray6417, empty_Array, PThreadedCode6418, 1, PSend6420);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend6421 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend6415, (Optr)PBlock6416);
    // bucketSize. 
    Send PSend6423 = new_Send((Optr)VAR_aBucket_0_0, SMB_bucketSize, 0);
    Assign PAssign6422 = new_Assign((Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PSend6423);
    Array PThreadedCode6414 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_aBucket_0_0, (Optr)&t_send0, (Optr)PSend6415, (Optr)&t_push_closure, (Optr)PBlock6416, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend6421, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6422, (Optr)&t_push_variable, (Optr)VAR_aBucket_0_0, (Optr)&t_send0, (Optr)PSend6423, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6412 = new_Method_with(PArray6413, empty_Array, empty_Array, PThreadedCode6414, 3, PSend6421, PAssign6422, self);
    
    MethodClosure MC_SMB_copyFrom_ = new_MethodClosure((Method)PMethod6412, Collection_AbstractBucket_Class);
    store_method(Collection_AbstractBucket_Class, SMB_copyFrom_, MC_SMB_copyFrom_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign6426 = new_Assign((Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_0_Const);
    Array PThreadedCode6425 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign6426, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6424 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6425, 2, PAssign6426, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod6424, Collection_AbstractBucket_Class);
    store_method(Collection_AbstractBucket_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_bucketSize() {
    Symbol SMB_bucketSize = new_Symbol(L"bucketSize");
    Array PThreadedCode6428 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_method_return);
    Method PMethod6427 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6428, 1, slot_Collection_AbstractBucket_bucketSize);
    
    MethodClosure MC_SMB_bucketSize = new_MethodClosure((Method)PMethod6427, Collection_AbstractBucket_Class);
    store_method(Collection_AbstractBucket_Class, SMB_bucketSize, MC_SMB_bucketSize);
}


static void init_SMB_removeAll() {
    Symbol SMB_removeAll = new_Symbol(L"removeAll");
    Variable VAR_oldSize_0_0 = new_Variable_named(L"oldSize", 0);
    Array PArray6430 = new_Array_with(1, (Optr)VAR_oldSize_0_0);
    Assign PAssign6432 = new_Assign((Optr)VAR_oldSize_0_0, (Optr)slot_Collection_AbstractBucket_bucketSize);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign6433 = new_Assign((Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_0_Const);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray6435 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6437 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)VAR_index_1_0, (Optr)nil_Const);
    Array PThreadedCode6436 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend6437, (Optr)&t_method_return);
    Block PBlock6434 = new_Block_with(PArray6435, empty_Array, PThreadedCode6436, 1, PSend6437);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend6438 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_oldSize_0_0, (Optr)PBlock6434);
    Array PThreadedCode6431 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign6432, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6433, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_oldSize_0_0, (Optr)&t_push_closure, (Optr)PBlock6434, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend6438, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6429 = new_Method_with(empty_Array, PArray6430, empty_Array, PThreadedCode6431, 4, PAssign6432, PAssign6433, PSend6438, self);
    
    MethodClosure MC_SMB_removeAll = new_MethodClosure((Method)PMethod6429, Collection_AbstractBucket_Class);
    store_method(Collection_AbstractBucket_Class, SMB_removeAll, MC_SMB_removeAll);
}


static void init_class_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_sizeRequested_0_0 = new_Variable_named(L"sizeRequested", 0);
    Array PArray6440 = new_Array_with(1, (Optr)VAR_sizeRequested_0_0);
    Symbol SMB_basicNew_ = new_Symbol(L"basicNew:");
    Super PSuper6442 = new_Super(SMB_basicNew_, 1, (Optr)VAR_sizeRequested_0_0);
    Symbol SMB_initialize = new_Symbol(L"initialize");
    // initialize. 
    Send PSend6443 = new_Send((Optr)PSuper6442, SMB_initialize, 0);
    Array PThreadedCode6441 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sizeRequested_0_0, (Optr)&t_super1, (Optr)PSuper6442, (Optr)&t_send0, (Optr)PSend6443, (Optr)&t_method_return);
    Method PMethod6439 = new_Method_with(PArray6440, empty_Array, empty_Array, PThreadedCode6441, 1, PSend6443);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PMethod6439, HEADER(Collection_AbstractBucket_Class));
    store_method(HEADER(Collection_AbstractBucket_Class), SMB_new_, MC_SMB_new_);
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
    Symbol SMB_shouldNotCall = new_Symbol(L"shouldNotCall");
    // shouldNotCall. 
    Send PSend6446 = new_Send((Optr)self, SMB_shouldNotCall, 0);
    Array PThreadedCode6445 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6446, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6444 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6445, 2, PSend6446, self);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod6444, HEADER(Collection_AbstractBucket_Class));
    store_method(HEADER(Collection_AbstractBucket_Class), SMB_new, MC_SMB_new);
}

void init_Collection_PAbstractBucket_layout() {
    layout_Collection_AbstractBucket_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collection_AbstractBucket_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Collection_AbstractBucket_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Collection_AbstractBucket_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Collection_AbstractBucket_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Collection_AbstractBucket_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_AbstractBucket = new_Symbol(L"AbstractBucket");
    slot_Collection_AbstractBucket_bucketSize = (Optr)new_Slot(0, L"bucketSize");
    layout_Collection_AbstractBucket = (Optr)create_layout_with_vars(ArrayLayout_Class, 1);
    ((Array)layout_Collection_AbstractBucket)->values[0] = slot_Collection_AbstractBucket_bucketSize;
    Collection_AbstractBucket_Class = (Class)new_Class(Array_Class, layout_Collection_AbstractBucket_Class_class);
    Collection_AbstractBucket_Class->layout = layout_Collection_AbstractBucket;
    Collection_AbstractBucket_Class->name = SMB_AbstractBucket;
    
}

void init_Collection_PAbstractBucket_methods() {
    init_SMB_isFull();
    init_SMB_copyFrom_();
    init_SMB_initialize();
    init_SMB_bucketSize();
    init_SMB_removeAll();
    init_class_SMB_new_();
    init_class_SMB_new();
    
}