#ifndef SYSTEM_IVAL_H
#define SYSTEM_IVAL_H

#define push_eval_of(context, pos)\
    push_ival(argument_at(context, pos), context, make_number(pos));

extern void inline push_ival(object exp, context_object target, number_object pos);

#endif // SYSTEM_IVAL_H
