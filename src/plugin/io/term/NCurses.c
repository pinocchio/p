// Auto Generated. Do not change!.
#include <plugin/Plugin.h>
#include <wchar.h>
#include <stdio.h>
#include <plugin/io/term/NCursesHelper.c>

#line 3 "Curses >> refresh"
NATIVE(NCurses_refresh)
    ASSERT_ARG_SIZE(0);
refresh();
    RETURN_FROM_NATIVE(self);
}

#line 3 "Curses >> endwin"
NATIVE(NCurses_refresh)
    ASSERT_ARG_SIZE(0);
endwin();
    RETURN_FROM_NATIVE(self);
}

#line 3 "Curses >> initscr"
NATIVE(NCurses_initscr)
    ASSERT_ARG_SIZE(0);
initscr();
    RETURN_FROM_NATIVE(self);
}

#line 3 "Curses >> raw"
NATIVE(NCurses_raw)
    ASSERT_ARG_SIZE(0);
raw();
    RETURN_FROM_NATIVE(self);
}

#line 3 "Curses >> getch"
NATIVE(NCurses_getch)
    ASSERT_ARG_SIZE(0);
RETURN_FROM_NATIVE(new_Type_Character((wchar)getch()));
    RETURN_FROM_NATIVE(self);
}

#line 3 "Curses >> noecho"
NATIVE(NCurses_noecho)
    ASSERT_ARG_SIZE(0);
noecho();
    RETURN_FROM_NATIVE(self);
}

// ============================================================================

PLUGIN()
    EXPORT(new_Symbol_cached(L"refresh"), NCurses_refresh);
    EXPORT(new_Symbol_cached(L"refresh"), NCurses_refresh);
    EXPORT(new_Symbol_cached(L"initscr"), NCurses_initscr);
    EXPORT(new_Symbol_cached(L"raw"), NCurses_raw);
    EXPORT(new_Symbol_cached(L"getch"), NCurses_getch);
    EXPORT(new_Symbol_cached(L"noecho"), NCurses_noecho);
}

void unload_plugin() {
}