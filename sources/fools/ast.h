#ifndef AST_H
#define AST_H

#include <model.h>

struct instruction_list {
    number_object   size;
    instruction     instructions[];
};

struct doit {
    object          expression;
};

struct assignment {
    object*         variable;
    object          expression;
};

struct constant {
    object          constant;
};

struct callable {
    object          receiver;
    array_object    arguments;
};

extern ilist_object     make_ilist(int size);
extern iassign_object   make_iassign();
extern icall_object     make_icall(object receiver, int argsize);
extern iconst_object    make_iconst(object constant);


extern instruction  inline raw_ilist_at(ilist_object ilist, int index);
extern void         inline raw_ilist_at_put(ilist_object ilist,
                                            int index, instruction i);
extern void         inline ilist_at_put(ilist_object ilist,
                                        int index, instruction i);

#endif // AST_H
