#include <debug.h>
#include <stdio.h>

int _indent_ = 0;

void indent() {
    int i;
    for (i = 0; i < _indent_; i++) {
        printf("\t");
    }
}

void inline inc() { if (!NDEBUG) _indent_++; }
void inline dec() { if (!NDEBUG) _indent_--; }
