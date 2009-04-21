#ifndef INSTRUCTION_H
#define INSTRUCTION_H

struct instruction_list;
struct assignment;
struct callable;

typedef struct instruction_list* ilist_object;
typedef struct assignment*       assignment_object;
typedef struct callable*         callable_object;

typedef union {
    ilist_object        ilist;
    assignment_object   assignment;
    callable_object     callable;
} instruction;

#endif // INSTRUCTION_H
