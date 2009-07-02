#ifndef DEBUG_H
#define DEBUG_H

#define NDEBUG 1
#define debug if (!NDEBUG) { _line_++; printf("%i\t", _line_); indent(); } if (!NDEBUG) printf

extern void indent();
extern int _indent_;
extern int _line_;
#define reset_debug() {\
    if (!NDEBUG) { _indent_ = 0; _line_ = 0; debug("------ starting evaluation\n"); } }

#define inc() { if (!NDEBUG) _indent_++; }
#define dec() { if (!NDEBUG && _indent_) _indent_--; }

#endif // DEBUG_H
