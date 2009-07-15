#ifndef SCHEME_NATIVES_H
#define SCHEME_NATIVES_H

extern object scheme_plus;
extern object scheme_minus;
extern object scheme_smallerp;
extern object scheme_equalp;
extern object scheme_eqp;

extern object scheme_string_to_symbol;

extern object scheme_true;
extern object scheme_false;
extern object scheme_display;
extern object scheme_callec;
extern object scheme_exit;
extern object scheme_error_handler;
extern object inline make_bool(int bl);

extern void bootstrap_scheme();

#endif
