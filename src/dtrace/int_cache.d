#!/usr/sbin/dtrace -s

pid$1::new_SmallInt:entry
{
    @smallint = lquantize(arg0, -1, 1023, 1);
    @smallint_q = quantize(arg0);

}

pinocchio::smallint-cachehit
{
     @smallint_cache["hit"] = count();    
}

pinocchio::smallint-cachemiss
{
     @smallint_cache["miss"] = count();    
}

tick-5sec
{
    printa(@smallint_cache);
}

