// Auto Generated. Do not change!.
#include <plugin/Plugin.h>
#include <wchar.h>
#include <stdio.h>
#include <plugin/chronology/TimeHelper.c>

#line 3 "Time_Class >> primMicrosecondClock"
NATIVE(Time_microsecondClock)
    ASSERT_ARG_SIZE(0);

 struct timeval tv;
 gettimeofday(&tv, NULL);
 long seconds       = tv.tv_sec - start_timeval.tv_sec;
 long micro_seconds = (long)(tv.tv_usec - start_timeval.tv_usec);
 RETURN_FROM_NATIVE(wrap_int(seconds * 1000 * 1000 + micro_seconds));
 
}

#line 3 "Time_Class >> primMillisecondClock"
NATIVE(Time_millisecondClock)
    ASSERT_ARG_SIZE(0);

 struct timeval tv;
 gettimeofday(&tv, NULL);
 long seconds       = tv.tv_sec - start_timeval.tv_sec;
 long micro_seconds = (long)(tv.tv_usec - start_timeval.tv_usec);
 RETURN_FROM_NATIVE(wrap_int(seconds * 1000 + micro_seconds / 1000));
 
}

#line 3 "Time_Class >> primSecondsClock"
NATIVE(Time_secondsClock)
    ASSERT_ARG_SIZE(0);

    long seconds;
    seconds = (long)time(NULL);
    seconds += 2177452800;
 RETURN_FROM_NATIVE(wrap_int(seconds));
 
}

#line 3 "Time_Class >> primInitialize"
NATIVE(Time_initialize)
    ASSERT_ARG_SIZE(0);

 gettimeofday(&start_timeval, NULL);
 
}

// ============================================================================

PLUGIN()
    EXPORT(L"microsecondClock", Time_microsecondClock);
    EXPORT(L"millisecondClock", Time_millisecondClock);
    EXPORT(L"secondsClock", Time_secondsClock);
    EXPORT(L"initialize", Time_initialize);
}

void unload_plugin() {}