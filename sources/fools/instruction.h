#ifndef INSTRUCTION_H
#define INSTRUCTION_H

struct instruction_list;
struct assignment;
struct callable;
struct constant;
struct variable;
struct scoped;
struct capture;

typedef struct instruction_list* ilist_object;
typedef struct assignment*       iassign_object;
typedef struct callable*         icall_object;
typedef struct constant*         iconst_object;
typedef struct variable*         ivar_object;
typedef struct scoped*           iscoped_object;
typedef struct capture*          icapture_object;

typedef union {
    ilist_object        ilist;
    iassign_object      iassign;
    icall_object        icall;
    iconst_object       iconst;
    ivar_object         ivar;
    iscoped_object      iscoped;
    icapture_object     icapture;
} instruction;

#endif // INSTRUCTION_H
