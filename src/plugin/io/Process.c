// Auto Generated. Do not change!.
#include <plugin/Plugin.h>
#include <plugin/io/ProcessHelper.c>

#line 3 "Process >> popen"
NATIVE(Process_popen)
    ASSERT_ARG_SIZE(0);

    char * command      = unicode_to_ascii(((Type_String)SELF->ivals[0])->value);
    char * mode         = unicode_to_ascii(((Type_Symbol)SELF->ivals[1])->value);
    FILE * stream       = popen(command, mode);
    assert(stream,
        fwprintf(stderr,
            L"%s (program: '%s', mode: '%s')\n",
            strerror(errno), command, mode););
    SELF->ivals[3]  = (Object)new_IO_ReadFile_from(stream);
    SELF->ivals[2]   = (Object)new_IO_WriteFile_from(stream);
    RETURN_FROM_NATIVE(self);
 
}

#line 3 "Process >> pclose"
NATIVE(Process_pclose)
    ASSERT_ARG_SIZE(0);

    IO_File stream  = (IO_File)SELF->ivals[2];
    if (!stream) {
        stream = (IO_File)SELF->ivals[3];	
    }
    int returnValue = pclose(stream->file);
    RETURN_FROM_NATIVE(new_Type_SmallInt(returnValue));
 
}

// ============================================================================

PLUGIN()
    EXPORT(new_Type_Symbol_cached(L"popen"), Process_popen);
    EXPORT(new_Type_Symbol_cached(L"pclose"), Process_pclose);
}

void unload_plugin() {
}