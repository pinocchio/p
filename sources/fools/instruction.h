#ifndef INSTRUCTION_H
#define INSTRUCTION_H

struct instruction_list;
struct assignment;
struct callable;

typedef struct instruction_list* ilist_object;
typedef struct assignment*       iassign_object;
typedef struct callable*         icall_object;

typedef union {
    ilist_object        ilist;
    iassign_object      assignment;
    icall_object        callable;
} instruction;

#endif // INSTRUCTION_H
