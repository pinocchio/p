#ifndef DEBUG_H
#define DEBUG_H

#define NDEBUG 0
#define debug if (!NDEBUG) indent(); if (!NDEBUG) printf

extern void indent();
extern int _indent_;
#define reset_debug() {\
    if (!NDEBUG) { _indent_ = 0; debug("------ starting evaluation\n"); } }

#define inc() { if (!NDEBUG) _indent_++; }
#define dec() { if (!NDEBUG && _indent_) _indent_--; }

#endif // DEBUG_H
