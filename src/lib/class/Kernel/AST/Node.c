#include <lib/class/Kernel/AST/Node.h>


Optr layout_Kernel_AST_Node_Class_class;


static void init_SMB_isScoped() {
    Symbol SMB_isScoped = new_Symbol(L"isScoped");
    Array PThreadedCode4104 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod4103 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4104, 1, true_Const);
    
    MethodClosure MC_SMB_isScoped = new_MethodClosure((Method)PMethod4103, Kernel_AST_Node_Class);
    store_method(Kernel_AST_Node_Class, SMB_isScoped, MC_SMB_isScoped);
}


static void init_SMB_asNode() {
    Symbol SMB_asNode = new_Symbol(L"asNode");
    Array PThreadedCode4106 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod4105 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4106, 1, self);
    
    MethodClosure MC_SMB_asNode = new_MethodClosure((Method)PMethod4105, Kernel_AST_Node_Class);
    store_method(Kernel_AST_Node_Class, SMB_asNode, MC_SMB_asNode);
}

void init_Kernel_AST_PNode_layout() {
    layout_Kernel_AST_Node_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_AST_Node_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_AST_Node_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_AST_Node_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_AST_Node_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_AST_Node_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Node = new_Symbol(L"Node");
    Kernel_AST_Node_Class = (Class)new_Class(Object_Class, layout_Kernel_AST_Node_Class_class);
    Kernel_AST_Node_Class->layout = empty_object_layout;
    Kernel_AST_Node_Class->name = SMB_Node;
    
}

void init_Kernel_AST_PNode_methods() {
    init_SMB_isScoped();
    init_SMB_asNode();
    
}