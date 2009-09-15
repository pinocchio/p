
Object Env;

CREATE_INITIALIZERS(Env)

/* =========================================================================*/

Runtime_Env * new_Env(Object parent, Object key, Type_Array * values);
Runtime_Env * new_Env_Sized(Object parent, Object key, int size);

/* =========================================================================*/

void Env_lookup(Runtime_Env * self, unsigned int index, Object key);
void Env_assign(Runtime_Env * self, unsigned int index, Object key, Object value);