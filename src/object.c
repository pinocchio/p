#include <pinocchio.h>

/* ======================================================================= */

tObject basicAtPut(tObject receiver, tSmallInteger tagged_index, tObject value)
{
  int size = BASE(receiver);
  int index = DEC_INT(tagged_index);
  int pos = size+index-1;
  if( pos >= SIZE(receiver) ) {
    PINOCCHIO_FAIL("array access out of bounds" );
  }
  receiver->value[pos] = value;
  return value;
}

tObject basicAt(tObject receiver, tSmallInteger tagged_index)
{
  int size = BASE(receiver);
  int index = DEC_INT(tagged_index);
  int pos = size+index-1;
  if( pos >= SIZE(receiver) ) {
    PINOCCHIO_FAIL("array access out of bounds" );
  }
  return receiver->value[pos];
}

long identityHash(tObject receiver)
{
  return HASH(receiver);
}

tSmallInteger size(tObject receiver)
{
    return ENC_INT(SIZE(receiver));
}
