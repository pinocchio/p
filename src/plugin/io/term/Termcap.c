#include <plugin/Plugin.h>
#include <term.h>
#include <curses.h>
#include <wchar.h>
#include <stdio.h>
#include <stdlib.h>

static char * term_buffer;

NATIVE1(Termcap_tgetent_)
    String w_arg = (String)NATIVE_ARG(0);
    char * arg = unicode_to_ascii(w_arg->value);
    Optr result = get_bool(tgetent(NULL, arg));
    RETURN_FROM_NATIVE(result);
}

NATIVE1(Termcap_tgetstr_)
    char * buffer = term_buffer;
    String w_arg = (String)NATIVE_ARG(0);
    char * arg = unicode_to_ascii(w_arg->value);
    char * result = tgetstr(arg, &buffer);
    if (!result) {
        RETURN_FROM_NATIVE(nil);
        return;
    }
    RETURN_FROM_NATIVE(new_String_from_charp(result));
}

NATIVE1(Termcap_tgetnum_)
    String w_arg = (String)NATIVE_ARG(0);
    char * arg = unicode_to_ascii(w_arg->value);
    int result = tgetnum(arg);
    if (result == -1) {
        RETURN_FROM_NATIVE(nil);
        return;
    }
    RETURN_FROM_NATIVE(wrap_int(result));
}


NATIVE1(Termcap_tgetflag_)
    String w_arg = (String)NATIVE_ARG(0);
    char * arg = unicode_to_ascii(w_arg->value);
    int result = tgetflag(arg);
    RETURN_FROM_NATIVE(get_bool(result));
}

NATIVE2(Termcap_tparm_in_)
    String w_arg1 = (String)NATIVE_ARG(0);
    String w_arg2 = (String)NATIVE_ARG(1);
    char * arg1 = unicode_to_ascii(w_arg1->value);
    char * arg2 = unicode_to_ascii(w_arg2->value);
    char * result = tparm(arg2, arg1);

    if (!result) {
        RETURN_FROM_NATIVE(nil);
        return;
    }
    RETURN_FROM_NATIVE(new_String_from_charp(result));
}
NATIVE3(Termcap_tparm_parm_in_)
    String w_arg1 = (String)NATIVE_ARG(0);
    String w_arg2 = (String)NATIVE_ARG(1);
    String w_arg3 = (String)NATIVE_ARG(2);
    char * arg1 = unicode_to_ascii(w_arg1->value);
    char * arg2 = unicode_to_ascii(w_arg2->value);
    char * arg3 = unicode_to_ascii(w_arg3->value);
    char * result = tparm(arg3, arg1, arg2);

    if (!result) {
        RETURN_FROM_NATIVE(nil);
        return;
    }
    RETURN_FROM_NATIVE(new_String_from_charp(result));
}

// ============================================================================

PLUGIN()
    term_buffer = malloc(2048);
    EXPORT(L"tgetent:", Termcap_tgetent_);
    EXPORT(L"tgetstr:", Termcap_tgetstr_);
    EXPORT(L"tgetnum:", Termcap_tgetnum_);
    EXPORT(L"tgetflag:", Termcap_tgetflag_);
    EXPORT(L"tparm:in:", Termcap_tparm_in_);
    EXPORT(L"tparm:parm:in:", Termcap_tparm_parm_in_);
}

void unload_plugin() {
    free(term_buffer);
}
