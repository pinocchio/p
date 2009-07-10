#ifndef SYSTEM_FALLBACK_H
#define SYSTEM_FALLBACK_H

void inline fallback_shift(context_object context);

struct fallback {
    object          cdisp;
    object          dispatch;
};

#endif // SYSTEM_FALLBACK_H
