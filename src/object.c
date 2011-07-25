#include <pinocchio.h>

/* ======================================================================= */

tObject basicAtPut(tObject receiver, tSmallInteger tagged_index, tObject value)
{
  int size = BASE(receiver);
  int index = DEC_INT(tagged_index);
  receiver->value[size+index-1] = value;
  return receiver;
}

tObject basicAt(tObject receiver, tSmallInteger tagged_index)
{
  int size = BASE(receiver);
  int index = DEC_INT(tagged_index);
  return receiver->value[size+index-1];
}

tSmallInteger size(tObject receiver)
{
    return ENC_INT(SIZE(receiver));
}
