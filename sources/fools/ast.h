#ifndef AST_H
#define AST_H

#include <model.h>

struct instruction_list {
    number_object   size;
    instruction     instructions[];
};

struct assignment {
    ivar_object     variable;
    object          expression;
};

struct constant {
    object          constant;
};

struct callable {
    object          receiver;
    array_object    arguments;
};

struct variable {
    object          scope;
    number_object   index;
};

struct scoped {
    object          scope;
    object          expression;
};

extern ilist_object     make_ilist(int size);
extern iassign_object   make_iassign(ivar_object variable, object expression);
extern icall_object     make_icall(object receiver, int argsize);
extern iconst_object    make_iconst(object constant);
extern ivar_object      make_ivar(object scope, number_object index);
extern iscoped_object   make_iscoped(object scope, object expression);


extern instruction inline raw_ilist_at(ilist_object ilist, int index);
extern void        inline raw_ilist_at_put(ilist_object ilist,
                                           int index, instruction i);
extern void        inline ilist_at_put(ilist_object ilist,
                                       int index, instruction i);
extern void        inline eval_instruction(instruction instruction);

#endif // AST_H
