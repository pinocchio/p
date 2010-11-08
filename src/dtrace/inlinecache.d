#!/usr/sbin/dtrace -s

pinocchio::message-cachehit
{
     @message_cache["hit"] = count();    
}

pinocchio::message-cachemiss
{
     @message_cache["miss"] = count();
     @message_cache_miss[copyinstr(arg0), copyinstr(arg1)] = count();
     @message_cache_miss_message[copyinstr(arg1)] = count();
}


pid$1::Class_lookup:entry
{
    ts2 = timestamp;
}

pid$1::Class_lookup:return
{
    ela2 = timestamp - ts2;
    @tot["Class_lookup_total"] = sum(ela2);
    @avg["Class_lookup_avg"] = avg(ela2);

}


pid$1::InlineCache_lookup:entry
{
    ts = timestamp;
}

pid$1::InlineCache_lookup:return
{
    ela = timestamp - ts;
    @tot["InlineCache_lookup_total"] = sum(ela);
    @avg["InlineCache_lookup_avg"] = avg(ela);

}


tick-2sec
{
    printa(@message_cache);
    printa(@tot);
    printa(@avg);
}

END 
{
    trunc(@message_cache_miss, 20);
    trunc(@message_cache_miss_message, 20);
    normalize(@tot, 1000);
    printa("%12s %@12u\n", @tot);
    printa("%12s %@12u\n", @avg);
}

