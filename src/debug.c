#include <debug.h>
#include <stdio.h>

int TMP_DEBUG = 0;
int _indent_ = 0;
int _line_   = 0;

void indent() {
    int i;
    for (i = 0; i < _indent_; i++) {
        printf("\t");
    }
}

