#ifndef DEBUG_H
#define DEBUG_H

#define NDEBUG 1
#define debug if (!NDEBUG) indent(); if (!NDEBUG) printf

extern void indent();
extern int _indent_;

#define inc() { if (!NDEBUG) _indent_++; }
#define dec() { if (!NDEBUG) _indent_--; }

#endif // DEBUG_H
