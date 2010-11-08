#!/usr/sbin/dtrace -s

pid$1::new_Character:entry
{
    @character = lquantize(arg0, 0, 1024, 1);
    @character_q = quantize(arg0);

}

pinocchio::character-cachehit
{
     @character_cache["hit"] = count();    
}

pinocchio::character-cachemiss
{
     @character_cache["miss"] = count();    
}

tick-10sec
{
    printa(@character_cache);
}


