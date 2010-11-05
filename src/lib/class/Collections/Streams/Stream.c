#include <lib/class/Collections/Streams/Stream.h>


Optr layout_Collections_Streams_Stream_Class_class;


static void init_SMB__shiftLeft_() {
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Variable VAR_items_0_0 = new_Variable_named(L"items", 0);
    Array PArray6079 = new_Array_with(1, (Optr)VAR_items_0_0);
    Symbol SMB_putOn_ = new_Symbol(L"putOn:");
    // putOn:. 
    Send PSend6081 = new_Send((Optr)VAR_items_0_0, SMB_putOn_, 1, (Optr)self);
    Array PThreadedCode6080 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_items_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend6081, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6078 = new_Method_with(PArray6079, empty_Array, empty_Array, PThreadedCode6080, 2, PSend6081, self);
    
    MethodClosure MC_SMB__shiftLeft_ = new_MethodClosure((Method)PMethod6078, Collections_Streams_Stream_Class);
    store_method(Collections_Streams_Stream_Class, SMB__shiftLeft_, MC_SMB__shiftLeft_);
}


static void init_SMB_atEnd() {
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend6084 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode6083 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6084, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6082 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6083, 2, PSend6084, self);
    
    MethodClosure MC_SMB_atEnd = new_MethodClosure((Method)PMethod6082, Collections_Streams_Stream_Class);
    store_method(Collections_Streams_Stream_Class, SMB_atEnd, MC_SMB_atEnd);
}


static void init_SMB_contents() {
    Symbol SMB_contents = new_Symbol(L"contents");
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend6087 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode6086 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6087, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6085 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6086, 2, PSend6087, self);
    
    MethodClosure MC_SMB_contents = new_MethodClosure((Method)PMethod6085, Collections_Streams_Stream_Class);
    store_method(Collections_Streams_Stream_Class, SMB_contents, MC_SMB_contents);
}


static void init_SMB_flush() {
    Symbol SMB_flush = new_Symbol(L"flush");
    Array PThreadedCode6089 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod6088 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6089, 1, self);
    
    MethodClosure MC_SMB_flush = new_MethodClosure((Method)PMethod6088, Collections_Streams_Stream_Class);
    store_method(Collections_Streams_Stream_Class, SMB_flush, MC_SMB_flush);
}


static void init_SMB_next() {
    Symbol SMB_next = new_Symbol(L"next");
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend6092 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode6091 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6092, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6090 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6091, 2, PSend6092, self);
    
    MethodClosure MC_SMB_next = new_MethodClosure((Method)PMethod6090, Collections_Streams_Stream_Class);
    store_method(Collections_Streams_Stream_Class, SMB_next, MC_SMB_next);
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
    String string_6095 = new_String(L"Streams are created with on: and with:");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_6095_Const = new_Constant((Optr)string_6095);
    // error:. 
    Send PSend6096 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_6095_Const);
    Array PThreadedCode6094 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_6095, (Optr)&t_send1, (Optr)PSend6096, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6093 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6094, 2, PSend6096, self);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod6093, HEADER(Collections_Streams_Stream_Class));
    store_method(HEADER(Collections_Streams_Stream_Class), SMB_new, MC_SMB_new);
}

void init_Collections_Streams_Stream_layout() {
    layout_Collections_Streams_Stream_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collections_Streams_Stream_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Collections_Streams_Stream_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Collections_Streams_Stream_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Collections_Streams_Stream_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Collections_Streams_Stream_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Stream = new_Symbol(L"Stream");
    Collections_Streams_Stream_Class = (Class)new_Class(Object_Class, layout_Collections_Streams_Stream_Class_class);
    Collections_Streams_Stream_Class->layout = empty_object_layout;
    Collections_Streams_Stream_Class->name = SMB_Stream;
    
}

void init_Collections_Streams_Stream_methods() {
    init_SMB__shiftLeft_();
    init_SMB_atEnd();
    init_SMB_contents();
    init_SMB_flush();
    init_SMB_next();
    init_class_SMB_new();
    
}