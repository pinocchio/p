// Auto Generated. Do not change!.
#include <plugin/Plugin.h>
#include <wchar.h>
#include <stdio.h>
#include <plugin/io/ProcessHelper.c>

#line 3 "Process >> pclose"
NATIVE(Process_pclose)
    ASSERT_ARG_SIZE(0);

    IO_File stream  = (IO_File)SELF->ivals[2];
    if (!stream) {
        stream = (IO_File)SELF->ivals[3];	
    }
    int returnValue = pclose(stream->file);
    RETURN_FROM_NATIVE(new_SmallInt(returnValue));
 
}

#line 3 "Process >> popen"
NATIVE(Process_popen)
    ASSERT_ARG_SIZE(0);

    char * command      = unicode_to_ascii(((String)SELF->ivals[0])->value);
    char * mode         = unicode_to_ascii(((Symbol)SELF->ivals[1])->value);
    FILE * stream       = popen(command, mode);
    assert(stream, fwprintf(stderr,
                L"%s (program: '%s', mode: '%s')\n",
                strerror(errno), command, mode););
    SELF->ivals[3]  = (Optr)new_IO_ReadFile_from(stream);
    SELF->ivals[2]   = (Optr)new_IO_WriteFile_from(stream);
    RETURN_FROM_NATIVE(self);
 
}

// ============================================================================

PLUGIN()
    EXPORT(L"pclose", Process_pclose);
    EXPORT(L"popen", Process_popen);
}

void unload_plugin() {}