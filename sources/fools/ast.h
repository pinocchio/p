#ifndef AST_H
#define AST_H

#include <model.h>

struct instruction_list {
    number_object   size;
    object          instructions[];
};

struct assignment {
    ivar_object     variable;
    object          expression;
};

struct constant {
    object          constant;
};

struct callable {
    object          interpreter;
    array_object    arguments;
};

struct variable {
    object          scope;
    number_object   index;
};

struct scoped {
    object          scope;
    object          expression;
    object          argsize;
};

struct appcall {
    object          expression;
    array_object    arguments;
};

struct capture { };

extern ilist_object     make_ilist(int size);
extern iassign_object   make_iassign(ivar_object variable, object expression);
extern icall_object     make_icall(object receiver, int argsize);
extern iconst_object    make_iconst(object constant);
extern ivar_object      make_ivar();
extern iscoped_object   make_iscoped(object scope, object expression, object
                                     argsize);
extern icapture_object  make_icapture();
extern appcall_object   make_appcall(object expression, int argsize);

extern object      inline raw_ilist_at(ilist_object ilist, int index);
extern void        inline raw_ilist_at_put(ilist_object ilist,
                                           int index, object i);
extern void        inline ilist_at_put(ilist_object ilist,
                                       int index, object i);
extern void        inline set_callarg(icall_object icall, int index, object value);
extern void        inline set_callmsg(icall_object icall, int index);

extern void        inline set_appcarg(appcall_object appcall, int index, object value);
extern void        inline set_appcmsg(appcall_object appcall, int index);

#endif // AST_H
