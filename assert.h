#ifndef ASSERT_H
#define ASSERT_H

#include <signal.h>

/* ======================================================================= */

#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)
#define AT __FILE__ ":" TOSTRING(__LINE__)

// #ifdef NO_EXCEPTION
#define ERROR_HANDLER(arg) printf(arg); raise(SIGABRT)
// #else // NO_EXCEPTION
// #define ERROR_HANDLER handle_assert
// #endif // NO_EXCEPTION
/* ======================================================================= */

#define assert0(test)\
    if (!(test)) {\
        ERROR_HANDLER(AT": "#test);\
    }

#define assert1(test, message)  \
    if (!(test)) { \
        ERROR_HANDLER(AT": "message" ("#test")");\
    }

/* ======================================================================= */

#endif // ASSERT_H
