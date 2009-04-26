#ifndef PRIMITIVES_H
#define PRIMITIVES_H

extern void prim_number_plus(context_object context);
extern void prim_number_minus(context_object context);

extern void prim_dict_at(context_object context);
extern void prim_dict_at_put(context_object context);

extern void prim_env_fetch_from(context_object context);
extern void prim_env_store_at_in(context_object context);
extern void prim_env_new(context_object context);

#endif // PRIMITIVES_H
