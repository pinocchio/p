#ifndef PINOCCHIO_LIB_SMALLTALK_AST_ASTBLOCK
#define PINOCCHIO_LIB_SMALLTALK_AST_ASTBLOCK 

#include <pinocchio.h>
extern void init_Smalltalk_AST_ASTBlock_methods();

extern void init_Smalltalk_AST_ASTBlock_layout();

#include <lib/lib.h>

extern Optr layout_Smalltalk_AST_Block_Class_class;
extern Optr slot_Smalltalk_AST_Block_parameters;
extern Optr slot_Smalltalk_AST_Block_temporaries;
extern Optr slot_Smalltalk_AST_Block_statements;
extern Optr layout_Smalltalk_AST_Block;


#endif //PINOCCHIO_LIB_SMALLTALK_AST_ASTBLOCK