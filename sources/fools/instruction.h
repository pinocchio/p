#ifndef INSTRUCTION_H
#define INSTRUCTION_H

struct instruction_list;
struct assignment;
struct callable;
struct doit;
struct constant;

typedef struct instruction_list* ilist_object;
typedef struct assignment*       iassign_object;
typedef struct callable*         icall_object;
typedef struct constant*         iconst_object;

typedef union {
    ilist_object        ilist;
    iassign_object      iassignm;
    icall_object        icall;
    iconst_object       iconst;
} instruction;

#endif // INSTRUCTION_H
