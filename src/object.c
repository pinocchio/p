#include <pinocchio.h>

/* ======================================================================= */

tObject basicAtPut(tObject receiver, tSmallInteger tagged_index, tObject value)
{
  int size = BASE(receiver);
  int index = DEC_INT(tagged_index)-1;
  int pos = size+index;
  if( index >= SIZE(receiver) ) {
    PINOCCHIO_FAIL("array access out of bounds" );
  }
  receiver->value[pos] = value;
  return value;
}

tObject basicAt(tObject receiver, tSmallInteger tagged_index)
{
  int size = BASE(receiver);
  int index = DEC_INT(tagged_index)-1;
  int pos = size+index;
  if( index >= SIZE(receiver) ) {
    PINOCCHIO_FAIL("array access out of bounds" );
  }
  return receiver->value[pos];
}

long identityHash(tObject receiver)
{
  if (IS_INT(receiver)) {
    long self = DEC_INT(receiver);
    long low = self & 16383;
    long hash = (0x260D * low + ((0x260D * (self >> 14) + (0x0065 * low) & 16383) * 16384)) & 0x0FFFFFFF;
    return (long)ENC_INT(hash);
  }
  return ENC_INT(HASH(receiver));
}

tSmallInteger size(tObject receiver)
{
    return ENC_INT(SIZE(receiver));
}

tClass behavior(tObject receiver) {
    return BEHAVIOR_OF(receiver);
}

tClass set_behavior(tObject receiver, tSTBehavior b) {
    if( BEHAVIOR_OF(receiver) == &SmallInteger_behavior ) {
      return 0;
    }
    ((tClass*)receiver)[-2] = b;
    return receiver;
}
