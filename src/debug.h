#ifndef DEBUG_H
#define DEBUG_H

#define DEBUG 2
#define debug_enabled (DEBUG==1 || (DEBUG==2 && TMP_DEBUG))
#define debug  if (debug_enabled) { _line_++; printf("%i\t", _line_); indent(); } if (debug_enabled) printf
#define wdebug if (debug_enabled) { _line_++; printf("%i\t", _line_); indent(); } if (debug_enabled) wprintf

extern int TMP_DEBUG;
extern void indent();
extern int _indent_;
extern int _line_;

#define debug_enable  TMP_DEBUG = 1;
#define debug_disable TMP_DEBUG = 1;

#define reset_debug() {\
    if (debug_enabled) { _indent_ = 0; _line_ = 0; debug("------ starting evaluation\n"); } }

#define inc() { if (debug_enabled) _indent_++; }
#define dec() { if (debug_enabled && _indent_) _indent_--; }

#endif // DEBUG_H
